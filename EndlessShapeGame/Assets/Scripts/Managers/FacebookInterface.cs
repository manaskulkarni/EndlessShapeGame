using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class FacebookInterface : MonoBehaviour
{
  public string appId = "1518246578468950";

  public List  <KeyValuePair <string, Texture2D>> profilePictures = new List <KeyValuePair <string, Texture2D>> ();

  static public FacebookInterface inst = null;

  // Use this as constructor
  void Awake ()
  {
    if (inst == null)
    {
      inst = this;
    }

    SPFacebook.OnInitCompleteAction += HandleOnInitCompleteAction;
    SPFacebook.OnFocusChangedAction += HandleOnFocusChangedAction;
    SPFacebook.OnAuthCompleteAction += HandleOnAuthCompleteAction;

    SPFacebook.Instance.Init();

    SPFacebook.OnLogOut += HandleOnLogOut;

    SPFacebook.OnUserDataRequestCompleteAction += HandleOnUserDataRequestCompleteAction;

    SPFacebook.OnPlayerScoresRequestCompleteAction += HandleOnPlayerScoresRequestCompleteAction;
    SPFacebook.OnAppScoresRequestCompleteAction += HandleOnAppScoresRequestCompleteAction; 
    SPFacebook.OnSubmitScoreRequestCompleteAction += HandleOnSubmitScoreRequestCompleteAction;
    SPFacebook.OnDeleteScoresRequestCompleteAction += HandleOnDeleteScoresRequestCompleteAction;

    SPFacebook.OnFriendsDataRequestCompleteAction += HandleOnFriendsDataRequestCompleteAction;
    SPFacebook.OnInvitableFriendsDataRequestCompleteAction += HandleOnInvitableFriendsDataRequestCompleteAction;
  }

  public FB_UserInfo GetFriendFromId (string id)
  {
    if (SPFacebook.Instance.friends.ContainsKey (id))
    {
      return SPFacebook.Instance.friends [id];
    }

    return null;
  }

  public FB_UserInfo GetPlayer ()
  {
    return SPFacebook.Instance.userInfo;
  }

  public int GetPlayerScore ()
  {
    return SPFacebook.instance.GetScoreByUserId(SPFacebook.instance.UserId);
  }

  public string GetPlayerName ()
  {
    return SPFacebook.Instance.userInfo.Name;
  }

  public int GetScoreFromId (string id)
  {
    var scoreObject = SPFacebook.Instance.GetScoreObjectByUserId (id);
    if (scoreObject != null)
    {
      return scoreObject.value;
    }
    else
    {
      return -1;
    }
  }

  public FB_UserInfo GetUserFromId (string id)
  {
    if (id == SPFacebook.Instance.UserId)
    {
      return SPFacebook.Instance.userInfo;
    }
    else
    {
      return GetFriendFromId (id);
    }
  }

  void HandleOnInitCompleteAction ()
  {
    Debug.Log("FB init finished");
    if(SPFacebook.instance.IsLoggedIn)
    {
      //User alreayd authenticated, update your UI accordingly
      Debug.Log ("User already authenticated");
      LoadUserInfo ();
      FacebookConnected (true);
    }
  }

  void HandleOnInvitableFriendsDataRequestCompleteAction (FB_Result obj)
  {
    Debug.Log ("Number of Invitable Friends : " + SPFacebook.instance.InvitableFriends.Count);
    foreach (var v in SPFacebook.Instance.InvitableFriends)
    {
      Debug.Log ("Invitable Friend Name : " + v.Value.Name);
      Debug.Log ("Score : " + SPFacebook.Instance.GetScoreByUserId (v.Value.Id));
    }
  }

  void HandleOnFriendsDataRequestCompleteAction (FB_Result obj)
  {
    Debug.Log ("Number of Friends : " + SPFacebook.instance.friends.Count);

    //      SPFacebook.Instance.LoadPlayerScores ();
    SPFacebook.Instance.LoadAppScores ();
  }
  
  void HandleOnFocusChangedAction (bool focus)
  {
    if (!focus)
    {
      // pause the game - we will need to hide
      Time.timeScale = 0;
    }
    else
    {
      // start the game back up - we're getting focus again
      Time.timeScale = 1;
    }
  }

  void HandleOnUserDataRequestCompleteAction (FB_Result obj)
  {
    if (obj.IsSucceeded)
    {
      LoadFriendsInfo ();
    }
  }

  void HandleOnAuthCompleteAction (FB_Result obj)
  {
    if(SPFacebook.instance.IsLoggedIn)
    {
      Debug.Log ("Already Logged In");
      LoadUserInfo ();
      FacebookConnected (true);
    }
    else
    {
      Debug.Log("Failed to log in");
    }
  }

  void HandleOnPlayerScoresRequestCompleteAction (FB_Result result)
  {
    Debug.Log ("Player Score Request Complete");
    if(result.IsSucceeded)
    {
      string msg = "Player has scores in " + SPFacebook.instance.userScores.Count + " apps" + "\n";
      msg += "Current Player Score = " + SPFacebook.instance.GetCurrentPlayerIntScoreByAppId(appId);
      Debug.Log (msg);
    }
    else
    {
      Debug.Log (result.RawData);
    }
  }

  void HandleOnAppScoresRequestCompleteAction (FB_Result result)
  {
    Debug.Log ("App Score Request Complete");
    
    if(result.IsSucceeded)
    {
      string msg = "Loaded " + SPFacebook.instance.appScores.Count + " scores results" + "\n";
      msg += "Current Player Score = " + SPFacebook.instance.GetScoreByUserId(SPFacebook.instance.UserId);
      Debug.Log (msg);

      {
        SPFacebook.Instance.userInfo.OnProfileImageLoaded += HandleOnProfileImageLoaded;
        SPFacebook.Instance.userInfo.LoadProfileImage (FB_ProfileImageSize.square);
      }

      CheckFirstLogin ();

      foreach (var v in SPFacebook.Instance.friends)
      {
        Debug.Log ("Friend Name : " + v.Value.Name);

        if (SPFacebook.Instance.GetScoreObjectByUserId (v.Value.Id) == null)
        {
          Debug.Log ("Score Not Recorded Yet");
        }
        else
        {
          Debug.Log ("Score : " + SPFacebook.Instance.GetScoreObjectByUserId (v.Value.Id).value);
        }

        v.Value.OnProfileImageLoaded += HandleOnProfileImageLoaded;
        v.Value.LoadProfileImage (FB_ProfileImageSize.square);
      }
    }
    else
    {
      Debug.Log (result.RawData);
    }
  }

  void HandleOnProfileImageLoaded (FB_UserInfo res)
  {
    Debug.Log ("LOADING IMAGE FOR : " + res.Name);
    var profilePic = res.GetProfileImage (FB_ProfileImageSize.square);
    profilePictures.Add (new KeyValuePair <string, Texture2D> (res.Id, profilePic));

    if (profilePictures.Count == SPFacebook.Instance.friends.Count + 1)
    {
      profilePictures.Sort ((a, b) => GetScoreFromId (a.Key).CompareTo(GetScoreFromId(b.Key)));
      BroadcastMessage ("OnFriendListLoaded");
    }
  }

  void HandleOnSubmitScoreRequestCompleteAction (FB_Result result)
  {
    if(result.IsSucceeded)
    {
      string msg = "Score successfully submited" + "\n";
      msg += "Current Player Score = " + SPFacebook.instance.GetScoreByUserId(SPFacebook.instance.UserId);
      
    }
    else
    {
      Debug.Log (result.RawData);
    }
  }

  void HandleOnDeleteScoresRequestCompleteAction (FB_Result result)
  {
    if(result.IsSucceeded)
    {
      string msg = "Score successfully deleted" + "\n";
      msg += "Current Player Score = " + SPFacebook.instance.GetScoreByUserId(SPFacebook.instance.UserId);
      Debug.Log (msg);
    }
    else
    {
    }
  }

  void HandleOnLogOut ()
  {
    FacebookConnected (false);
    StatsManager.inst.prevFacebookStatus = 0;
    profilePictures.Clear ();
  }

  void FacebookConnected (bool connected)
  {
    BroadcastMessage ("OnFacebookConnected", connected);
  }

  void LoadUserInfo ()
  {
    SPFacebook.Instance.LoadUserData ();
  }

  void LoadFriendsInfo ()
  {
    SPFacebook.Instance.LoadFrientdsInfo (int.MaxValue);
    SPFacebook.Instance.LoadInvitableFrientdsInfo (int.MaxValue);
  }

  void SubmitScore (int score)
  {
    Debug.Log ("Submitting Score To Facebook");
    SPFacebook.Instance.SubmitScore (score);
  }

  void CheckFirstLogin ()
  {
    if (StatsManager.inst.prevFacebookStatus == 0)
    {
      SubmitScore (StatsManager.inst.highScore);
      StatsManager.inst.prevFacebookStatus = 1;
    }
  }

  void OnFacebookConnect ()
  {
    if (SPFacebook.Instance.IsLoggedIn)
    {
      Debug.Log ("Logging Out Of Facebook");
      SPFacebook.Instance.Logout ();
    }
    else
    {
      SPFacebook.instance.Login();
    }
  }

  void OnTryShowFacebookLeaderboard ()
  {
    if (SPFacebook.Instance.IsLoggedIn)
    {
      GameManager.inst.ChangeState (GameManager.States.ShowFacebookLeaderboard);
    }
    else
    {
      IOSNativePopUpManager.showDialog ("Not Logged In", "Login to Facebook");
    }
  }

  void OnShowFacebookLeaderboard ()
  {
  }

  void OnSubmitHighScore ()
  {
    SubmitScore (StatsManager.inst.score);
  }

}
