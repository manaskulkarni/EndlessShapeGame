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
#endif
        var sdkDelegate = AdToAppSDKDelegate.CreateInstance(this);

		sdkDelegate.OnInterstitialStarted += (adType, provider) => Debug.Log(String.Format("OnInterstitialStarted: type {0}, provider: {1}", adType, provider));
        sdkDelegate.OnInterstitialClosed += (adType, provider) => Debug.Log(String.Format("OnInterstitialClosed: type {0}, provider: {1}", adType, provider));
		sdkDelegate.OnInterstitialFailedToAppear += (adType, provider) => Debug.Log(String.Format("OnInterstitialFailedToAppear: type {0}, provider: {1}", adType, provider));
		sdkDelegate.OnInterstitialClicked += (adType, provider) => Debug.Log(String.Format("OnInterstitialClicked: type {0}, provider: {1}", adType, provider));
		sdkDelegate.OnFirstInterstitialLoad += (adType, provider) => Debug.Log(String.Format("onFirstInterstitialLoad: type {0}, provider: {1}", adType, provider));

        sdkDelegate.OnRewardedCompleted += (adProvider, currencyName, currencyValue) => Debug.Log(String.Format("OnRewardedCompleted: adProvider {0}, currencyName: {1}, currencyValue: {2}", adProvider, currencyName, currencyValue));

        sdkDelegate.OnBannerLoad += () => Debug.Log("OnBannerLoad");
        sdkDelegate.OnBannerFailedToLoad += (error) => Debug.Log("OnBannerFailedToLoad " + error);
		sdkDelegate.OnBannerClicked += () => Debug.Log("OnBannerClicked");

        AdToAppBinding.setCallbacks(sdkDelegate);
        
		AdToAppBinding.setLogLevel(
			AdToAppLogLevel.Warn |
			AdToAppLogLevel.Verbose |
			AdToAppLogLevel.Fatal |
			AdToAppLogLevel.Error |
			AdToAppLogLevel.Debug
		);

        string adContentType = AdToAppContentType.INTERSTITIAL + AdToAppContentType.BANNER + AdToAppContentType.REWARDED;

        string appId = "";

#if UNITY_ANDROID
        appId = "b6e76a3b-f943-422d-aad3-88cf29b1bc59:f1501a50-9524-4814-bdb3-1496b115d72f";
#endif
#if UNITY_IOS
        appId = "f3d710e0-6ea1-408c-accd-2925371ac79a:00362439-1050-4b2f-81f6-22bf7cf4e8e1";
#endif

        AdToAppBinding.start(adContentType, appId);

		AdToAppBinding.setTargetingParam(AdToAppTargeting.KEYWORDS, "advertisement,mobile ads,ads mediation");
		AdToAppBinding.setTargetingParam(AdToAppTargeting.USER_INTERESTS, "ecpm,revenue");
		AdToAppBinding.setTargetingParam(AdToAppTargeting.USER_BIRTHDAY, "1.01.1990");
		AdToAppBinding.setTargetingParam(AdToAppTargeting.USER_AGE, "25");
		AdToAppBinding.setTargetingParam(AdToAppTargeting.USER_GENDER, AdToAppTargeting.USER_GENDER_MALE);
		AdToAppBinding.setTargetingParam(AdToAppTargeting.USER_OCCUPATION, AdToAppTargeting.USER_OCCUPATION_UNIVERSITY);
		AdToAppBinding.setTargetingParam(AdToAppTargeting.USER_RELATIONSHIP, AdToAppTargeting.USER_RELATIONSHIP_ENGAGED);
		AdToAppBinding.setTargetingParam(AdToAppTargeting.USER_LATITUDE, "26.71234");
		AdToAppBinding.setTargetingParam(AdToAppTargeting.USER_LONGITUDE, "-80.051595");
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
		GUI.skin.button.fontSize = 30;

		Rect rect = new Rect (Screen.width / 2 - 250, 40, 500, Screen.height - 80);

		GUILayout.BeginArea(rect);

		var buttonHeight = GUILayout.Height(88);

		if (GUILayout.Button("Show Interstitial", buttonHeight))
		{
			PringConfig();
			if (AdToAppBinding.hasInterstitial() &&
				!AdToAppBinding.isInterstitialDisplayed())
			{
				AdToAppBinding.showInterstitial();
			}
		}

		if (GUILayout.Button("Show Interstitial Image", buttonHeight))
		{
			PringConfig();
			if (AdToAppBinding.hasInterstitial(AdToAppContentType.IMAGE) &&
				!AdToAppBinding.isInterstitialDisplayed())
			{
				AdToAppBinding.showInterstitial(AdToAppContentType.IMAGE);
			}
		}

		if (GUILayout.Button("Show Interstitial Video", buttonHeight))
		{
			PringConfig();
			if (AdToAppBinding.hasInterstitial(AdToAppContentType.VIDEO) &&
				!AdToAppBinding.isInterstitialDisplayed())
			{
				AdToAppBinding.showInterstitial(AdToAppContentType.VIDEO);
			}
		}

		if (GUILayout.Button("Show Rewarded", buttonHeight))
		{
			PringConfig();
			if (AdToAppBinding.hasInterstitial(AdToAppContentType.REWARDED) &&
				!AdToAppBinding.isInterstitialDisplayed())
			{
				AdToAppBinding.showInterstitial(AdToAppContentType.REWARDED);
			}
		}

		if (GUILayout.Button("Show banner", buttonHeight))
		{
			AdToAppBinding.removeAllBanners();
			AdToAppBinding.showBanner(AdToAppBannerSize.Size_320x50, 0f, 0f, 320f, 50f);
			AdToAppBinding.setBannerRefreshInterval(0); // 0 will disable banner auto-refreshing
		}

		if (GUILayout.Button("Show Banner At Position", buttonHeight))
		{
			AdToAppBinding.removeAllBanners();
			AdToAppBinding.showBannerAtPosition(AdToAppBannerPosition.BottomRight, AdToAppBannerSize.Size_320x50);
			AdToAppBinding.setBannerRefreshInterval(0); // 0 will disable banner auto-refreshing
		}

		if (GUILayout.Button("Set banner refresh interval", buttonHeight))
		{
			System.Random random = new System.Random();
			var newRefreshInterval = random.Next(30,60);

			Debug.Log("New Banner RefreshInterval: " + newRefreshInterval);

			AdToAppBinding.setBannerRefreshInterval(newRefreshInterval);
		}

		if (GUILayout.Button("Load next banner", buttonHeight))
		{
			AdToAppBinding.loadNextBanner ();
		}

		if (GUILayout.Button("Remove All Banners", buttonHeight))
		{
			AdToAppBinding.removeAllBanners();
		}

		GUILayout.EndArea();
    }

    public void PringConfig()
    {
        Debug.Log("IsInterstitialAvailable: " + AdToAppBinding.hasInterstitial());
        Debug.Log("IsImageInterstitialAvailable: " + AdToAppBinding.hasInterstitial(AdToAppContentType.IMAGE));
        Debug.Log("IsVideoInterstitialAvailable: " + AdToAppBinding.hasInterstitial(AdToAppContentType.VIDEO));
        Debug.Log("IsRewardedAvailable: " + AdToAppBinding.hasInterstitial(AdToAppContentType.REWARDED));
    }

    void OnApplicationPause(bool pauseStatus)
    {
        Debug.Log("OnApplicationPause: " + pauseStatus);
        AdToAppBinding.onPause(pauseStatus);
    }

}
