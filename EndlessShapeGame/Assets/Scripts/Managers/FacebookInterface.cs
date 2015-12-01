using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class FacebookInterface : MonoBehaviour
{
  public string appId = "1518212961805645";


  // Use this as constructor
  void Awake ()
  {
    SPFacebook.instance.OnInitCompleteAction += HandleOnInitCompleteAction;
    SPFacebook.instance.OnFocusChangedAction += HandleOnFocusChangedAction;
    SPFacebook.instance.OnAuthCompleteAction += HandleOnAuthCompleteAction;

    SPFacebook.instance.OnPlayerScoresRequestCompleteAction += HandleOnPlayerScoresRequestCompleteAction;
    SPFacebook.instance.OnAppScoresRequestCompleteAction += HandleOnAppScoresRequestCompleteAction; 
    SPFacebook.instance.OnSubmitScoreRequestCompleteAction += HandleOnSubmitScoreRequestCompleteAction;; 
    SPFacebook.instance.OnDeleteScoresRequestCompleteAction += HandleOnDeleteScoresRequestCompleteAction;; 

    SPFacebook.Instance.Init();
  }

  void HandleOnInitCompleteAction ()
  {
    Debug.Log("FB init finished");
    if(SPFacebook.instance.IsLoggedIn)
    {
      //User alreayd authenticated, update your UI accordingly
    }
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

  void HandleOnAuthCompleteAction (FB_APIResult obj)
  {
    if(SPFacebook.instance.IsLoggedIn)
    {
      SA_StatusBar.text = "user Login -> true";
      SPFacebook.instance.LoadAppScores();
    }
    else
    {
      Debug.Log("Failed to log in");
    }
  }

  void HandleOnPlayerScoresRequestCompleteAction (FB_APIResult result)
  {
    if(result.IsSucceeded)
    {
      string msg = "Player has scores in " + SPFacebook.instance.userScores.Count + " apps" + "\n";
      msg += "Current Player Score = " + SPFacebook.instance.GetCurrentPlayerIntScoreByAppId(appId);
      SA_StatusBar.text = msg;
      
    }
    else
    {
      SA_StatusBar.text = result.Responce;
    }
  }

  void HandleOnAppScoresRequestCompleteAction (FB_APIResult result)
  {
    if(result.IsSucceeded)
    {
      string msg = "Loaded " + SPFacebook.instance.appScores.Count + " scores results" + "\n";
      msg += "Current Player Score = " + SPFacebook.instance.GetScoreByUserId(SPFacebook.instance.UserId);
      SA_StatusBar.text = msg;
      
    }
    else
    {
      SA_StatusBar.text = result.Responce;
    }
  }

  void HandleOnSubmitScoreRequestCompleteAction (FB_APIResult result)
  {
    if(result.IsSucceeded)
    {
      string msg = "Score successfully submited" + "\n";
      msg += "Current Player Score = " + SPFacebook.instance.GetScoreByUserId(SPFacebook.instance.UserId);
      SA_StatusBar.text = msg;
      
    }
    else
    {
      SA_StatusBar.text = result.Responce;
    }
  }

  void HandleOnDeleteScoresRequestCompleteAction (FB_APIResult result)
  {
    if(result.IsSucceeded)
    {
      string msg = "Score successfully deleted" + "\n";
      msg += "Current Player Score = " + SPFacebook.instance.GetScoreByUserId(SPFacebook.instance.UserId);
      SA_StatusBar.text = msg;
      
    }
    else
    {
      SA_StatusBar.text = result.Responce;
    }
  }

  void OnFacebookConnect ()
  {
    SPFacebook.instance.Login();
  }

  void OnShowFacebookLeaderboard ()
  {
  }

}
