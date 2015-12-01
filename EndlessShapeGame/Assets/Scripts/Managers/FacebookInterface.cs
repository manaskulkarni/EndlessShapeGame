using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class FacebookInterface : MonoBehaviour
{

  // Use this as constructor
  void Awake ()
  {
    SPFacebook.instance.OnInitCompleteAction += HandleOnInitCompleteAction;
    SPFacebook.instance.OnFocusChangedAction += HandleOnFocusChangedAction;
    SPFacebook.instance.OnAuthCompleteAction += HandleOnAuthCompleteAction;

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
    }
    else
    {
      Debug.Log("Failed to log in");
    }
  }

  void OnFacebookConnect ()
  {
    SPFacebook.instance.Login();
  }

}
