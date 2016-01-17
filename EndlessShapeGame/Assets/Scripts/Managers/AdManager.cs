using UnityEngine;
using System.Collections;
using System;
using AdToApp.AndroidWrapper;
using AdToApp;

public class AdManager : MonoBehaviour
{

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

    AdToAppBinding.setCallbacks(sdkDelegate);
    
    AdToAppBinding.start(
      adContentType:AdToAppContentType.VIDEO + AdToAppContentType.REWARDED,
      appId:"0b03983b-769a-47aa-97e9-1bded06f5095:71c49bf9-ace9-45e5-8f97-fc5dfb1ec7ed"
      );
  #endif
	}

  void SdkDelegate_OnInterstitialStarted (string adType, string provider)
  {
    Debug.Log(String.Format("OnInterstitialStarted: type {0}, provider: {1}", adType, provider));
  }

  void SdkDelegate_OnInterstitialClosed (string adType, string provider)
  {
    Debug.Log(String.Format("OnInterstitialClosed: type {0}, provider: {1}", adType, provider));
  }
  
  void SdkDelegate_OnInterstitialFailedToAppear (string adType, string provider)
  {
    Debug.Log(String.Format("OnInterstitialFailedToAppear: type {0}, provider: {1}", adType, provider));
  }

  void SdkDelegate_OnInterstitialClicked (string adType, string provider)
  {
    Debug.Log(String.Format("OnInterstitialClicked: type {0}, provider: {1}", adType, provider));
  }

  void SdkDelegate_OnRewardedCompleted (string adProvider, string currencyName, string currencyValue)
  {
    Debug.Log ("Currency Name: " + currencyName);
    Debug.Log ("Currency Value: " + currencyValue);
    GameManager.inst.BroadcastMessage ("OnRewardCompleted", String.Format (currencyName + currencyValue));
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
//    if (!AdToAppBinding.isInterstitialDisplayed() && !AdToAppBinding.hasInterstitial (AdToAppContentType.VIDEO))
    {
      AdToAppBinding.showInterstitial (AdToAppContentType.REWARDED);
    }
  }
}
