using UnityEngine;
using System.Collections;
using System;
//using AdToApp.AndroidWrapper;
//using AdToApp;
using UnityEngine.Advertisements;

public class AdManager : MonoBehaviour
{

  static public AdManager inst { get; private set; }

  public bool showInfoLogs;
  public bool showDebugLogs;
  public bool showWarningLogs = true;
  public bool showErrorLogs = true;

  private static Action _handleFinished;
  private static Action _handleSkipped;
  private static Action _handleFailed;
  private static Action _onContinue;

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
    if (!Advertisement.isSupported)
    {
      Debug.LogWarning("Unity Ads is not supported on the current runtime platform.");
    }
    else if (Advertisement.isInitialized)
    {
      Debug.LogWarning("Unity Ads is already initialized.");
    }
    else
    {
      Advertisement.debugLevel = Advertisement.DebugLevel.None; 
      if (showInfoLogs) Advertisement.debugLevel    |= Advertisement.DebugLevel.Info;
      if (showDebugLogs) Advertisement.debugLevel   |= Advertisement.DebugLevel.Debug;
      if (showWarningLogs) Advertisement.debugLevel |= Advertisement.DebugLevel.Warning;
      if (showErrorLogs) Advertisement.debugLevel   |= Advertisement.DebugLevel.Error;
    }

    StartCoroutine (LogWhenUnityAdsIsInitialized ());
//  #if UNITY_ANDROID
//    Debug.Log("AdToAppAndroidVersion: " + AdToAppAndroidWrapper.Version);
//  #else
//    var sdkDelegate = AdToAppSDKDelegate.CreateInstance(this);
//    
//    sdkDelegate.OnInterstitialStarted += SdkDelegate_OnInterstitialStarted;
//    sdkDelegate.OnInterstitialClosed += SdkDelegate_OnInterstitialClosed;
//    sdkDelegate.OnInterstitialFailedToAppear += SdkDelegate_OnInterstitialFailedToAppear;
//    sdkDelegate.OnInterstitialClicked += SdkDelegate_OnInterstitialClicked;
//    sdkDelegate.OnRewardedCompleted += SdkDelegate_OnRewardedCompleted;
//    sdkDelegate.OnBannerLoad += SdkDelegate_OnBannerLoad;
//    sdkDelegate.OnBannerFailedToLoad += SdkDelegate_OnBannerFailedToLoad;
//    sdkDelegate.OnBannerClicked += SdkDelegate_OnBannerClicked;
//    try
//    {
//      AdToAppBinding.setCallbacks(sdkDelegate);
//      
//      AdToAppBinding.start(
//        adContentType:AdToAppContentType.VIDEO + AdToAppContentType.REWARDED,
//        appId:"0b03983b-769a-47aa-97e9-1bded06f5095:71c49bf9-ace9-45e5-8f97-fc5dfb1ec7ed"
//        );
//    }
//    catch (EntryPointNotFoundException)
//    {
//      Debug.Log ("Ads not shown in editor");
//    }
//  #endif
	}

  private IEnumerator LogWhenUnityAdsIsInitialized ()
  {
    float initStartTime = Time.time;

    do yield return new WaitForSeconds(0.1f);
    while (!Advertisement.isInitialized);

    Debug.Log(string.Format("Unity Ads was initialized in {0:F1} seconds.",Time.time - initStartTime));
    yield break;
  }

  private void ShowRewardedAd()
  {
    if (Advertisement.IsReady("rewardedVideo"))
    {
      ShowOptions opt;
      var options = new ShowOptions { resultCallback = HandleRewardedShowResult };
      Advertisement.Show("rewardedVideo", options);
      GameManager.inst.BroadcastMessage ("OnInterstitialStarted");
    }
  }

  private void ShowNormalVideoAd ()
  {
    if (Advertisement.IsReady("video"))
    {
      ShowOptions opt;
      var options = new ShowOptions { resultCallback = HandleShowResult };
      Advertisement.Show("video", options);
      GameManager.inst.BroadcastMessage ("OnInterstitialStarted");
    }
  }

  private void HandleShowResult(ShowResult result)
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
      case ShowResult.Finished:
        Debug.Log("The reward ad was successfully shown.");

        //
        // YOUR CODE TO REWARD THE GAMER
        // Give coins etc.
        GameManager.inst.BroadcastMessage ("OnRewardCompleted", "100 Diamonds");
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
    GameManager.inst.BroadcastMessage ("OnInterstitialStarted");
  }

  void SdkDelegate_OnInterstitialClosed (string adType, string provider)
  {
    Debug.Log(String.Format("OnInterstitialClosed: type {0}, provider: {1}", adType, provider));
    GameManager.inst.BroadcastMessage ("OnEndVideo");
  }
  
  void SdkDelegate_OnInterstitialFailedToAppear (string adType, string provider)
  {
    Debug.Log(String.Format("OnInterstitialFailedToAppear: type {0}, provider: {1}", adType, provider));
    GameManager.inst.BroadcastMessage ("OnInterstitialFailed");
  }

  void SdkDelegate_OnInterstitialClicked (string adType, string provider)
  {
    Debug.Log(String.Format("OnInterstitialClicked: type {0}, provider: {1}", adType, provider));
  }

  void SdkDelegate_OnRewardedCompleted (string adProvider, string currencyName, string currencyValue)
  {
    Debug.Log ("Currency Name: " + currencyName);
    Debug.Log ("Currency Value: " + currencyValue);
    GameManager.inst.BroadcastMessage ("OnRewardCompleted", "100 Diamonds");
    GameManager.inst.BroadcastMessage ("OnEndVideo");
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
////    if (!AdToAppBinding.isInterstitialDisplayed() && !AdToAppBinding.hasInterstitial (AdToAppContentType.VIDEO))
//    try
//    {
//      #if UNITY_EDITOR
//      SdkDelegate_OnInterstitialStarted ("", "");
//      SdkDelegate_OnRewardedCompleted ("", "100 Diamonds", "");
//      #else
//      AdToAppBinding.showInterstitial (AdToAppContentType.REWARDED);
//      #endif
//    }
//    catch (EntryPointNotFoundException)
//    {
//      Debug.Log ("Ads not shown in editor");
//    }
    ShowRewardedAd ();
  }

  public void ShowNormalVideo ()
  {
//    try
//    {
//      #if UNITY_EDITOR
//      SdkDelegate_OnInterstitialClosed ("", "");
//      #else
//      AdToAppBinding.showInterstitial (AdToAppContentType.VIDEO);
//      #endif
//    }
//    catch (EntryPointNotFoundException)
//    {
//      Debug.Log ("Ads not shown in editor");
//    }
    ShowNormalVideoAd ();
  }
}
