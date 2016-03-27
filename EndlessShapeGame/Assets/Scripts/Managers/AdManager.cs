using UnityEngine;
using UnityEngine.Advertisements;
using System.Collections;
using System;
using AdToApp.AndroidWrapper;
using AdToApp;

public class AdManager : MonoBehaviour
{
  private bool sendInterstitialFailed = false;
  private bool sendInterstitialStarted = false;
  private bool sendEndVideo = false;
  private bool sendRewardComplete = false;

  static public AdManager inst { get; private set; }

  void Awake ()
  {
    if (inst == null)
    {
      inst = this;
    }
  }
  
	// Use this for initialization
	void Start ()
  {
  #if UNITY_ANDROID
    Debug.Log("AdToAppAndroidVersion: " + AdToAppAndroidWrapper.Version);

    var sdkDelegate = AdToAppSDKDelegate.CreateInstance(this);

    sdkDelegate.OnInterstitialStarted += SdkDelegate_OnInterstitialStarted;
    sdkDelegate.OnInterstitialClosed += SdkDelegate_OnInterstitialClosed;
    sdkDelegate.OnInterstitialFailedToAppear += SdkDelegate_OnInterstitialFailedToAppear;
    sdkDelegate.OnInterstitialClicked += SdkDelegate_OnInterstitialClicked;
    sdkDelegate.OnRewardedCompleted += SdkDelegate_OnRewardedCompleted;
    sdkDelegate.OnBannerLoad += SdkDelegate_OnBannerLoad;
    sdkDelegate.OnBannerFailedToLoad += SdkDelegate_OnBannerFailedToLoad;
    sdkDelegate.OnBannerClicked += SdkDelegate_OnBannerClicked;

    try
    {
      if (Debug.isDebugBuild)
        AdToAppBinding.setLogLevel(
          AdToAppLogLevel.Warn |
          AdToAppLogLevel.Verbose |
          AdToAppLogLevel.Fatal |
          AdToAppLogLevel.Error |
          AdToAppLogLevel.Debug
        );

      AdToAppBinding.setCallbacks(sdkDelegate);

      AdToAppBinding.start(
        adContentType:AdToAppContentType.REWARDED,
        appId:"7015bc8b-4f2b-4d6c-a078-85f92de7221c:8fc1134c-d203-4aad-9df6-c011fd0b4e90"
      );
    }
    catch (EntryPointNotFoundException)
    {
      Debug.Log ("Ads not shown in editor");
    }
  #else
    var sdkDelegate = AdToAppSDKDelegate.CreateInstance(this);
    
    sdkDelegate.OnInterstitialStarted += SdkDelegate_OnInterstitialStarted;
    sdkDelegate.OnInterstitialClosed += SdkDelegate_OnInterstitialClosed;
    sdkDelegate.OnInterstitialFailedToAppear += SdkDelegate_OnInterstitialFailedToAppear;
    sdkDelegate.OnInterstitialClicked += SdkDelegate_OnInterstitialClicked;
    sdkDelegate.OnRewardedCompleted += SdkDelegate_OnRewardedCompleted;
    sdkDelegate.OnBannerLoad += SdkDelegate_OnBannerLoad;
    sdkDelegate.OnBannerFailedToLoad += SdkDelegate_OnBannerFailedToLoad;
    sdkDelegate.OnBannerClicked += SdkDelegate_OnBannerClicked;
    try
    {
      AdToAppBinding.setCallbacks(sdkDelegate);
      
      AdToAppBinding.start(
        adContentType:AdToAppContentType.VIDEO + AdToAppContentType.REWARDED,
        appId:"0b03983b-769a-47aa-97e9-1bded06f5095:71c49bf9-ace9-45e5-8f97-fc5dfb1ec7ed"
        );
    }
    catch (EntryPointNotFoundException)
    {
      Debug.Log ("Ads not shown in editor");
    }
  #endif
	}

  #if UNITY_ANDROID
  private void LateUpdate ()
  {
    if (sendInterstitialFailed)
    {
      GameManager.inst.BroadcastMessage ("OnInterstitialFailed");
      sendInterstitialFailed = false;
    }
    if (sendInterstitialStarted)
    {
      GameManager.inst.BroadcastMessage ("OnInterstitialStarted");
      sendInterstitialStarted = false;
    }
    if (sendRewardComplete)
    {
      GameManager.inst.BroadcastMessage ("OnRewardCompleted", "100 Diamonds");
      sendRewardComplete = false;
    }
    if (sendEndVideo)
    {
      GameManager.inst.BroadcastMessage ("OnEndVideo");
      sendEndVideo = false;
    }
  }
  #endif

  void SdkDelegate_OnInterstitialStarted (string adType, string provider)
  {
    Debug.Log(String.Format("OnInterstitialStarted: type {0}, provider: {1}", adType, provider));

//    if (adType == AdToAppContentType.INTERSTITIAL)
//    {
//      GameManager.inst.BroadcastMessage ("OnInterstitialStarted");
//    }
//    else if (adType == AdToAppContentType.REWARDED)
//    {
//      GameManager.inst.BroadcastMessage ("OnRewardStarted");
//    }

    #if UNITY_IOS
    GameManager.inst.BroadcastMessage ("OnInterstitialStarted");
    #else
    sendInterstitialStarted = true;
    #endif
  }

  void SdkDelegate_OnInterstitialClosed (string adType, string provider)
  {
    Debug.Log(String.Format("OnInterstitialClosed: type {0}, provider: {1}", adType, provider));

    #if UNITY_IOS
    GameManager.inst.BroadcastMessage ("OnEndVideo");
    #else
    sendEndVideo = true;
    #endif
  }
  
  void SdkDelegate_OnInterstitialFailedToAppear (string adType, string provider)
  {
    Debug.Log(String.Format("OnInterstitialFailedToAppear: type {0}, provider: {1}", adType, provider));

    #if UNITY_IOS
    GameManager.inst.BroadcastMessage ("OnInterstitialFailed");
    #else
    sendInterstitialFailed = true;
    #endif
  }

  void SdkDelegate_OnInterstitialClicked (string adType, string provider)
  {
    Debug.Log(String.Format("OnInterstitialClicked: type {0}, provider: {1}", adType, provider));
  }

  void SdkDelegate_OnRewardedCompleted (string adProvider, string currencyName, string currencyValue)
  {
    Debug.Log ("Currency Name: " + currencyName);
    Debug.Log ("Currency Value: " + currencyValue);
    #if UNITY_IOS
    GameManager.inst.BroadcastMessage ("OnRewardCompleted", "100 Diamonds");
    GameManager.inst.BroadcastMessage ("OnEndVideo");
    #else
    sendRewardComplete = true;
    #endif
  }

  void SdkDelegate_OnBannerLoad ()
  {
    Debug.Log("OnBannerLoad");
  }

  void SdkDelegate_OnBannerFailedToLoad (string error)
  {
    Debug.Log("OnBannerFailedToLoad " + error);
  }

  void SdkDelegate_OnBannerClicked ()
  {
    Debug.Log("OnBannerClicked");
  }

  public void OnShowVideo ()
  {
//    if (!AdToAppBinding.isInterstitialDisplayed() && !AdToAppBinding.hasInterstitial (AdToAppContentType.VIDEO))
    try
    {
      #if UNITY_EDITOR
      SdkDelegate_OnInterstitialStarted ("", "");
      SdkDelegate_OnRewardedCompleted ("", "100 Diamonds", "");
      #else
      #if UNITY_ANDROID
      if (AdToAppBinding.hasInterstitial (AdToAppContentType.REWARDED))
      {
        AdToAppBinding.showInterstitial (AdToAppContentType.REWARDED);
      }
      else
      {
        ShowUnityRewardAd ();
      }
      #else
      AdToAppBinding.showInterstitial (AdToAppContentType.REWARDED);
      #endif
      #endif
    }
    catch (EntryPointNotFoundException)
    {
      Debug.Log ("Ads not shown in editor");
    }
  }

  public void ShowNormalVideo ()
  {
    try
    {
      #if UNITY_EDITOR
      SdkDelegate_OnInterstitialClosed ("", "");
      #else
      #if UNITY_ANDROID
      if (AdToAppBinding.hasInterstitial (AdToAppContentType.VIDEO))
      {
      AdToAppBinding.showInterstitial (AdToAppContentType.VIDEO);
      }
      else
      {
      ShowUnityAd ();
      }
      #else
      AdToAppBinding.showInterstitial (AdToAppContentType.VIDEO);
      #endif
      #endif
    }
    catch (EntryPointNotFoundException)
    {
      Debug.Log ("Ads not shown in editor");
    }
  }

  #if UNITY_ANDROID
  private void ShowUnityAd ()
  {
    if (Advertisement.IsReady ("video"))
    {
      ShowOptions options = new ShowOptions { resultCallback = HandleShowResult };
      Advertisement.Show ("video", options);

      GameManager.inst.BroadcastMessage ("OnInterstitialStarted");
    }
  }

  private void ShowUnityRewardAd ()
  {
    if (Advertisement.IsReady ("rewardedVideo"))
    {
      ShowOptions options = new ShowOptions { resultCallback = HandleRewardedShowResult };
      Advertisement.Show ("rewardedVideo", options);

      GameManager.inst.BroadcastMessage ("OnInterstitialStarted");
    }
  }

  private void HandleShowResult (ShowResult result)
  {
    switch (result)
    {
      case ShowResult.Finished:
        Debug.Log("The ad was successfully shown.");
        GameManager.inst.BroadcastMessage ("OnEndVideo");
        break;
      case ShowResult.Skipped:
        Debug.Log("The ad was skipped before reaching the end.");
        break;
      case ShowResult.Failed:
        Debug.LogError("The ad failed to be shown.");
        GameManager.inst.BroadcastMessage ("OnInterstitialFailed");
        break;
    }
  }

  private void HandleRewardedShowResult (ShowResult result)
  {
    switch (result)
    {
      case ShowResult.Skipped:
      case ShowResult.Finished:
        Debug.Log("The reward ad was successfully shown.");

        //
        // YOUR CODE TO REWARD THE GAMER
        // Give coins etc.
        GameManager.inst.BroadcastMessage ("OnRewardCompleted", "100 Diamonds");
        GameManager.inst.BroadcastMessage ("OnEndVideo");
        break;
      case ShowResult.Failed:
        Debug.LogError("The ad failed to be shown.");
        GameManager.inst.BroadcastMessage ("OnInterstitialFailed");
        break;
    }
  }
  #endif
}
