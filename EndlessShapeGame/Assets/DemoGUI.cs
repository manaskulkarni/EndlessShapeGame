using AdToApp.AndroidWrapper;
using UnityEngine;
using System;
using AdToApp;

public class DemoGUI : MonoBehaviour
{
    // Use this for initialization
    void Start()
    {
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
            adContentType:AdToAppContentType.INTERSTITIAL + AdToAppContentType.BANNER + AdToAppContentType.REWARDED,
            appId:"f3d710e0-6ea1-408c-accd-2925371ac79a:00362439-1050-4b2f-81f6-22bf7cf4e8e1"
        );
#endif
    }

    // Update is called once per frame
    void Update()
    {
    }

    void OnGUI()
    {
        DrawMenu();
    }

    public void DrawMenu()
    {
#if UNITY_ANDROID

        Rect rect = new Rect(0f, 0f, 200f, 600f);

        GUILayout.BeginArea(rect);

        if (GUILayout.Button("Init Interstitial", GUILayout.Width(200), GUILayout.Height(50)))
        {
            Debug.Log("Init SDK start");
            AdToAppBinding.start(AdToAppContentType.INTERSTITIAL);
            AdToAppBinding.setLogLevel(AdToAppLogLevel.Debug);

            var sdkDelegate = AdToAppSDKDelegate.CreateInstance(this);

            sdkDelegate.OnInterstitialStarted += (adType, provider) => Debug.Log(String.Format("onInterstitialStarted: type {0}, provider: {1}", adType, provider));
            sdkDelegate.OnInterstitialClosed += (adType, provider) => Debug.Log(String.Format("OnInterstitialClosed: type {0}, provider: {1}", adType, provider));
            sdkDelegate.OnInterstitialClicked += (adType, provider) => Debug.Log(String.Format("onInterstitialClicked: type {0}, provider: {1}", adType, provider));
            sdkDelegate.OnFirstInterstitialLoad += (adType, provider) => Debug.Log(String.Format("onFirstInterstitialLoad: type {0}, provider: {1}", adType, provider));

            AdToAppBinding.setCallbacks(sdkDelegate);            
            
            Debug.Log("Init SDK end");
        }

        if (GUILayout.Button("Init Rewarded", GUILayout.Width(200), GUILayout.Height(50)))
        {
            Debug.Log("Init SDK start");
            AdToAppBinding.start(AdToAppContentType.REWARDED);
            AdToAppBinding.setLogLevel(AdToAppLogLevel.Debug);

            var sdkDelegate = AdToAppSDKDelegate.CreateInstance(this);

            sdkDelegate.OnRewardedStarted += (adProvider) => Debug.Log(String.Format("onRewardedStarted: adProvider {0}", adProvider));
            sdkDelegate.OnRewardedCompleted += (adProvider, currencyName, currencyValue) => 
                Debug.Log(String.Format("onRewardedCompleted: adProvider {0}, currencyName: {1}, currencyValue: {2}", adProvider, currencyName, currencyValue));
            sdkDelegate.OnRewardedDismissed += (adProvider) => Debug.Log(String.Format("onRewardedDismissed: adProvider {0}", adProvider));
            sdkDelegate.OnFirstRewardedLoad += (adProvider) => Debug.Log(String.Format("onFirstRewardedLoad: adProvider {0}", adProvider));

            AdToAppBinding.setCallbacks(sdkDelegate);

            Debug.Log("Init SDK end");
        }

        if (GUILayout.Button("Show Interstitial", GUILayout.Width(200), GUILayout.Height(50)))
        {
            PringConfig();
            AdToAppBinding.showInterstitial();
        }

        if (GUILayout.Button("Show Interstitial Image", GUILayout.Width(200), GUILayout.Height(50)))
        {
            PringConfig();
            AdToAppBinding.showInterstitial(AdToAppContentType.IMAGE);
        }

        if (GUILayout.Button("Show Interstitial Video", GUILayout.Width(200), GUILayout.Height(50)))
        {
            PringConfig();
            AdToAppBinding.showInterstitial(AdToAppContentType.VIDEO);
        }

        if (GUILayout.Button("Show Rewarded", GUILayout.Width(200), GUILayout.Height(50)))
        {
            PringConfig();
            AdToAppBinding.showRewarded();
        }

        if (GUILayout.Button("Show Banner At Position", GUILayout.Width(200), GUILayout.Height(50)))
        {
            AdToAppBinding.setLogLevel(AdToAppLogLevel.Debug);

            // Only 320x250 banner size is currently supported by android
            AdToAppBinding.showBannerAtPosition(AdToAppBannerPosition.BottomRight, AdToAppBannerSize.Size_320x250);
        }

        if (GUILayout.Button("Show Banner", GUILayout.Width(200), GUILayout.Height(50)))
        {
            AdToAppBinding.setLogLevel(AdToAppLogLevel.Debug);
            
            var sdkDelegate = AdToAppSDKDelegate.CreateInstance(this);

            sdkDelegate.OnBannerLoad += () => Debug.Log("onBannerLoad");
            sdkDelegate.OnBannerFailedToLoad += (error) => Debug.Log("onBannerFailedToLoad " + error);
            sdkDelegate.OnBannerClicked += () => Debug.Log("onBannerClicked");

            AdToAppBinding.setCallbacks(sdkDelegate);    

            // Only 320x250 banner size is currently supported by android
            AdToAppBinding.showBanner(AdToAppBannerSize.Size_320x250, 0, 100);
        }

        if (GUILayout.Button("Remove All Banners", GUILayout.Width(200), GUILayout.Height(50)))
        {
            AdToAppBinding.removeAllBanners();
        }

        GUILayout.EndArea();

#else
        GUILayout.BeginArea(new Rect(Screen.width / 2 - 250, 40, 500, Screen.height - 80));

        GUI.skin.button.fontSize = 36;

        var buttonHeight = GUILayout.Height(88);

        if (GUILayout.Button("Interstitial ad", buttonHeight))
        {
            if (AdToAppBinding.hasInterstitial() &&
                !AdToAppBinding.isInterstitialDisplayed())
            {
                AdToAppBinding.showInterstitial();
            }
        }

		if (GUILayout.Button("Image interstitial ad", buttonHeight))
		{
			if (AdToAppBinding.hasInterstitial(AdToAppContentType.IMAGE) &&
			    !AdToAppBinding.isInterstitialDisplayed())
			{
				AdToAppBinding.showInterstitial(AdToAppContentType.IMAGE);
			}
		}

		if (GUILayout.Button("Video interstitial ad", buttonHeight))
		{
			if (AdToAppBinding.hasInterstitial(AdToAppContentType.VIDEO) &&
			    !AdToAppBinding.isInterstitialDisplayed())
			{
				AdToAppBinding.showInterstitial(AdToAppContentType.VIDEO);
			}
		}

		if (GUILayout.Button("Rewarded ad", buttonHeight))
		{
			if (AdToAppBinding.hasInterstitial(AdToAppContentType.REWARDED) &&
			    !AdToAppBinding.isInterstitialDisplayed())
			{
				AdToAppBinding.showInterstitial(AdToAppContentType.REWARDED);
			}
		}

        if (GUILayout.Button("Show banner(s)", buttonHeight))
        {
            AdToAppBinding.removeAllBanners();
            AdToAppBinding.showBanner(AdToAppBannerSize.Size_320x50, 0f, 0f, 320f, 50f);
			AdToAppBinding.showBannerAtPosition(AdToAppBannerPosition.BottomCenter, AdToAppBannerSize.Size_320x50);
        }
        
		if (GUILayout.Button("Load next banner", buttonHeight))
		{
			AdToAppBinding.setBannerRefreshInterval(60);
			AdToAppBinding.loadNextBanner ();
		}

        if (GUILayout.Button("Enable Logs", buttonHeight))
        {
            AdToAppBinding.setLogLevel(AdToAppLogLevel.Warn | AdToAppLogLevel.Verbose | AdToAppLogLevel.Fatal |
                AdToAppLogLevel.Error | AdToAppLogLevel.Debug);
        }

        GUILayout.EndArea();
#endif
    }

    public void PringConfig()
    {
        Debug.Log("IsInterstitialAvailable: " + AdToAppBinding.hasInterstitial());
        Debug.Log("IsImageInterstitialAvailable: " + AdToAppBinding.hasInterstitial(AdToAppContentType.IMAGE));
        Debug.Log("IsVideoInterstitialAvailable: " + AdToAppBinding.hasInterstitial(AdToAppContentType.VIDEO));
#if UNITY_ANDROID 
        Debug.Log("IsRewardedAvailable: " + AdToAppBinding.hasRewarded());
#endif
    }
}
