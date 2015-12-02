﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class FacebookInterface : MonoBehaviour
{
  public string appId = "1518246578468950";


  // Use this as constructor
  void Awake ()
  {
    SPFacebook.OnInitCompleteAction += HandleOnInitCompleteAction;
    SPFacebook.OnFocusChangedAction += HandleOnFocusChangedAction;
    SPFacebook.OnAuthCompleteAction += HandleOnAuthCompleteAction;

    SPFacebook.Instance.Init();

    SPFacebook.OnLogOut += HandleOnLogOut;

    SPFacebook.OnPlayerScoresRequestCompleteAction += HandleOnPlayerScoresRequestCompleteAction;
    SPFacebook.OnAppScoresRequestCompleteAction += HandleOnAppScoresRequestCompleteAction; 
    SPFacebook.OnSubmitScoreRequestCompleteAction += HandleOnSubmitScoreRequestCompleteAction;
    SPFacebook.OnDeleteScoresRequestCompleteAction += HandleOnDeleteScoresRequestCompleteAction;

    SPFacebook.OnFriendsDataRequestCompleteAction += HandleOnFriendsDataRequestCompleteAction;
    SPFacebook.OnInvitableFriendsDataRequestCompleteAction += HandleOnInvitableFriendsDataRequestCompleteAction;
  }

  void HandleOnInitCompleteAction ()
  {
    Debug.Log("FB init finished");
    if(SPFacebook.instance.IsLoggedIn)
    {
      //User alreayd authenticated, update your UI accordingly
      Debug.Log ("User already authenticated");
      LoadFriendsInfo ();
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

  void HandleOnAuthCompleteAction (FB_Result obj)
  {
    if(SPFacebook.instance.IsLoggedIn)
    {
      Debug.Log ("Already Logged In");
      LoadFriendsInfo ();
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
      }
    }
    else
    {
      Debug.Log (result.RawData);
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
  }

  void FacebookConnected (bool connected)
  {
    BroadcastMessage ("OnFacebookConnected", connected);
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

  void OnShowFacebookLeaderboard ()
  {
  }

  void OnSubmitScore ()
  {
    SubmitScore (StatsManager.inst.score);
  }

}