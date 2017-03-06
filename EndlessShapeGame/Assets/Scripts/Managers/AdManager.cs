using UnityEngine;
using UnityEngine.Advertisements;
using System.Collections;
using GoogleMobileAds.Api;

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

  void Start ()
  {
    RequestBanner ();
  }

  private void RequestBanner()
  {
    #if UNITY_ANDROID
    string adUnitId = "INSERT_ANDROID_BANNER_AD_UNIT_ID_HERE";
    #elif UNITY_IOS
    string adUnitId = "ca-app-pub-5893579961320397/6324819063";
    #else
    string adUnitId = "unexpected_platform";
    #endif

    // Create a 320x50 banner at the top of the screen.
    BannerView bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);
    // Create an empty ad request.
    var builder = new AdRequest.Builder();
    var request = builder.Build ();

    bannerView.OnAdFailedToLoad += (object sender, AdFailedToLoadEventArgs e) => {
      Debug.Log ("FAIL");
    };
    bannerView.OnAdLoaded += (object sender, System.EventArgs e) => {
      Debug.Log ("LOAD");
    };

    // Load the banner with the request.
    bannerView.LoadAd(request);
  }

  public void OnShowVideo ()
  {
    ShowUnityRewardAd ();
  }

  public void ShowNormalVideo ()
  {
    ShowUnityAd ();
  }

//  #if UNITY_ANDROID
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
//      #if UNITY_EDITOR
//      GameManager.inst.BroadcastMessage ("OnSkipRewardVideo");
//      #endif
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
        GameManager.inst.BroadcastMessage ("OnEndVideo");
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
      Debug.LogError ("The user is a dick trying to cheat. Game Over!");
      GameManager.inst.BroadcastMessage ("OnSkipRewardVideo");
      break;
    case ShowResult.Finished:
      Debug.Log ("The reward ad was successfully shown.");

        //
        // YOUR CODE TO REWARD THE GAMER
        // Give coins etc.
      GameManager.inst.BroadcastMessage ("OnRewardCompleted", "100 Diamonds");
      GameManager.inst.BroadcastMessage ("OnEndVideo");
      break;
    case ShowResult.Failed:
      Debug.LogError ("The ad failed to be shown.");
      GameManager.inst.BroadcastMessage ("OnInterstitialFailed");
      break;
    }
  }
//  #endif
}
