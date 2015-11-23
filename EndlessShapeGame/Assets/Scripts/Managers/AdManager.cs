using UnityEngine;
using System.Collections;
using System;
using AdToApp.AndroidWrapper;
using AdToApp;

public class AdManager : MonoBehaviour
{

  static public AdManager inst { get; private set; }
  
#if UNITY_EDITOR
  public bool editor = true;
#endif

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
#if UNITY_EDITOR
#else
  #if UNITY_ANDROID
    Debug.Log("AdToAppAndroidVersion: " + AdToAppAndroidWrapper.Version);
    #else
    var sdkDelegate = AdToAppSDKDelegate.CreateInstance(this);
    
    sdkDelegate.OnInterstitialStarted += (adType, provider) => Debug.Log(String.Format("OnInterstitialStarted: type {0}, provider: {1}", adType, provider));
    sdkDelegate.OnInterstitialClosed += (adType, provider) => Debug.Log(String.Format("OnInterstitialClosed: type {0}, provider: {1}", adType, provider));
    sdkDelegate.OnInterstitialFailedToAppear += (adType, provider) => Debug.Log(String.Format("OnInterstitialFailedToAppear: type {0}, provider: {1}", adType, provider));
    sdkDelegate.OnInterstitialClicked += (adType, provider) => Debug.Log(String.Format("OnInterstitialClicked: type {0}, provider: {1}", adType, provider));
    sdkDelegate.OnRewardedCompleted += (adProvider, currencyName, currencyValue) => 
      Debug.Log(String.Format("OnRewardedCompleted: adProvider {0}, currencyName: {1}, currencyValue: {2}", adProvider, currencyName, currencyValue));
    sdkDelegate.OnBannerLoad += () => Debug.Log("OnBannerLoad");
    sdkDelegate.OnBannerFailedToLoad += (error) => Debug.Log("OnBannerFailedToLoad " + error);
    sdkDelegate.OnBannerClicked += () => Debug.Log("OnBannerClicked");
    
    AdToAppBinding.setCallbacks(sdkDelegate);
    
    AdToAppBinding.start(
      adContentType:AdToAppContentType.VIDEO + AdToAppContentType.REWARDED,
      appId:"0b03983b-769a-47aa-97e9-1bded06f5095:71c49bf9-ace9-45e5-8f97-fc5dfb1ec7ed"
      );
  #endif
#endif
	}
  
  public void ShowVideo ()
  {
#if UNITY_EDITOR
    if (!editor)
    {
#endif
    if (!AdToAppBinding.isInterstitialDisplayed() && !AdToAppBinding.hasInterstitial (AdToAppContentType.VIDEO))
    {
      AdToAppBinding.showInterstitial (AdToAppContentType.VIDEO);
    }
#if UNITY_EDITOR
    }
#endif
  }
}
