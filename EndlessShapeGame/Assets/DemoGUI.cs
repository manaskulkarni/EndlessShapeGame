using AdToApp.AndroidWrapper;
using UnityEngine;
using System;
using AdToApp;

public class DemoGUI : MonoBehaviour
{
  private const string LEADERBOARD_NAME = "High Score";
  //private const string LEADERBOARD_NAME = "REPLACE_WITH_YOUR_NAME";


  private  const string PIE_GIFT_ID = "Pie";
  //private  const string PIE_GIFT_ID = "REPLACE_WITH_YOUR_ID";


  //example
  private const string LEADERBOARD_ID = "CgkI-rb9u94BEAIQAA";
  //private const string LEADERBOARD_ID = "REPLACE_WITH_YOUR_ID";



  private const string INCREMENTAL_ACHIEVEMENT_ID = "CgkIipfs2qcGEAIQCg";


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

    AdToAppBinding.start(
      adContentType:AdToAppContentType.REWARDED,
      appId:"7015bc8b-4f2b-4d6c-a078-85f92de7221c:8fc1134c-d203-4aad-9df6-c011fd0b4e90"
    );

    //listen for GooglePlayConnection events
    GooglePlayConnection.ActionPlayerConnected +=  OnPlayerConnected;
    GooglePlayConnection.ActionPlayerDisconnected += OnPlayerDisconnected;
    GooglePlayConnection.ActionConnectionResultReceived += ActionConnectionResultReceived;

    //listen for GooglePlayManager events
    GooglePlayManager.ActionAchievementUpdated += OnAchievementUpdated;
    GooglePlayManager.ActionScoreSubmited += OnScoreSubmited;
    GooglePlayManager.ActionScoresListLoaded += OnScoreUpdated;

    GooglePlayManager.ActionSendGiftResultReceived += OnGiftResult;
    GooglePlayManager.ActionPendingGameRequestsDetected += OnPendingGiftsDetected;
    GooglePlayManager.ActionGameRequestsAccepted += OnGameRequestAccepted;

    GooglePlayManager.ActionOAuthTokenLoaded += ActionOAuthTokenLoaded;
    GooglePlayManager.ActionAvailableDeviceAccountsLoaded += ActionAvailableDeviceAccountsLoaded;
    GooglePlayManager.ActionAchievementsLoaded += OnAchievmnetsLoadedInfoListner;

    GooglePlayConnection.Instance.Connect ();

    AndroidInAppPurchaseManager.ActionProductPurchased += OnProductPurchased;
    AndroidInAppPurchaseManager.ActionProductConsumed += OnProductConsumed;
    AndroidInAppPurchaseManager.ActionBillingSetupFinished += OnBillingConnected;



    //you may use loadStore function without parametr if you have filled base64EncodedPublicKey in plugin settings
    AndroidInAppPurchaseManager.Instance.LoadStore();
  }

  const string COINS_500 = "com.spk.esg.iap.d500";
  const string COINS_1200 = "com.spk.esg.iap.d1200";

  private static void OnProcessingPurchasedProduct(GooglePurchaseTemplate purchase) {
    //some stuff for processing product purchse. Add coins, unlock track, etc

    switch(purchase.SKU) {
      case COINS_500:
        consume(COINS_500);
        break;
      case COINS_1200:
        consume(COINS_1200);
        break;
    }
  }

  private static void OnProcessingConsumeProduct(GooglePurchaseTemplate purchase) {
    switch(purchase.SKU) {
      case COINS_500:
        AndroidMessage.Create("CONSUME MSG", "Consumed 500 Coins");
        break;
    }
  }

  private static void OnProductConsumed(BillingResult result) {

    if(result.isSuccess) {
      OnProcessingConsumeProduct (result.purchase);
    } else {
      AndroidMessage.Create("Product Cousume Failed", result.response.ToString() + " " + result.message);
    }

    Debug.Log ("Cousume Responce: " + result.response.ToString() + " " + result.message);
  }

  public static void purchase(string SKU) {
    AndroidInAppPurchaseManager.Instance.Purchase (SKU);
  }

  public static void consume(string SKU) {
    AndroidInAppPurchaseManager.Instance.Consume (SKU);
  }

  public void PurchaseCoins (string SKU)
  {
    purchase (SKU);
  }

  private static void OnProductPurchased(BillingResult result) {

    //this flag will tell you if purchase is available
    //result.isSuccess


    //infomation about purchase stored here
    //result.purchase

    //here is how for example you can get product SKU
    //result.purchase.SKU


    if(result.isSuccess) {
      OnProcessingPurchasedProduct (result.purchase);
    } else {
      AndroidMessage.Create("Product Purchase Failed", result.response.ToString() + " " + result.message);
    }

    Debug.Log ("Purchased Responce: " + result.response.ToString() + " " + result.message);
  }

  private static void OnRetrieveProductsFinised(BillingResult result) {
    AndroidInAppPurchaseManager.ActionRetrieveProducsFinished -= OnRetrieveProductsFinised;
    if(result.isSuccess) {
      //      UpdateStoreData();
      //      _isInited = true;
    } else {
      AndroidMessage.Create("Connection Responce", result.response.ToString() + " " + result.message);
    }
  }

  private static void OnBillingConnected(BillingResult result) {

    AndroidInAppPurchaseManager.ActionBillingSetupFinished -= OnBillingConnected;


    if(result.isSuccess) {
      //Store connection is Successful. Next we loading product and customer purchasing details
      AndroidInAppPurchaseManager.ActionRetrieveProducsFinished += OnRetrieveProductsFinised;
      AndroidInAppPurchaseManager.Instance.RetrieveProducDetails();

    } 

    AndroidMessage.Create("Connection Responce", result.response.ToString() + " " + result.message);
    Debug.Log ("Connection Responce: " + result.response.ToString() + " " + result.message);
  }

  private void ActionAvailableDeviceAccountsLoaded(System.Collections.Generic.List<string> accounts) {
    string msg = "Device contains following google accounts:" + "\n";
    foreach(string acc in GooglePlayManager.Instance.deviceGoogleAccountList) {
      msg += acc + "\n";
    } 

    AndroidDialog dialog = AndroidDialog.Create("Accounts Loaded", msg, "Sign With Fitst one", "Do Nothing");
    dialog.ActionComplete += SighDialogComplete;

  }

  private void SighDialogComplete (AndroidDialogResult res) {
    if(res == AndroidDialogResult.YES) {
      GooglePlayConnection.Instance.Connect(GooglePlayManager.Instance.deviceGoogleAccountList[0]);
    }

  }

  private void ActionOAuthTokenLoaded(string token) {

    AN_PoupsProxy.showMessage("Token Loaded", GooglePlayManager.Instance.loadedAuthToken);
  }

  private void OnAchievmnetsLoadedInfoListner(GooglePlayResult res) {
    GPAchievement achievement = GooglePlayManager.Instance.GetAchievement(INCREMENTAL_ACHIEVEMENT_ID);


    if(achievement != null) {
      Debug.Log ("Id: " + achievement.Id);
      Debug.Log ("Name: " +achievement.Name);
      Debug.Log ("Description: " + achievement.Description);
      Debug.Log ("Type: " + achievement.Type.ToString());
      Debug.Log ("State: " + achievement.State.ToString());
      Debug.Log ("CurrentSteps: " + achievement.CurrentSteps.ToString());
      Debug.Log ("TotalSteps: " + achievement.TotalSteps.ToString());
    }
  }

  private void OnAchievementsLoaded(GooglePlayResult result) {
    GooglePlayManager.ActionAchievementsLoaded -= OnAchievementsLoaded;
    if(result.IsSucceeded) {

      foreach (GPAchievement achievement in GooglePlayManager.Instance.Achievements) {
        Debug.Log(achievement.Id);
        Debug.Log(achievement.Name);
        Debug.Log(achievement.Description);
        Debug.Log(achievement.Type);
        Debug.Log(achievement.State);
        Debug.Log(achievement.CurrentSteps);
        Debug.Log(achievement.TotalSteps);
      }

      SA_StatusBar.text = "Total Achievement: " + GooglePlayManager.Instance.Achievements.Count.ToString();
      AN_PoupsProxy.showMessage ("Achievments Loaded", "Total Achievements: " + GooglePlayManager.Instance.Achievements.Count.ToString());
    } else {
      SA_StatusBar.text = result.Message;
      AN_PoupsProxy.showMessage ("Achievments Loaded error: ", result.Message);
    }

  }

  private void OnAchievementUpdated(GP_AchievementResult result) {
    SA_StatusBar.text = "Achievment Updated: Id: " + result.achievementId + "\n status: " + result.Message;
    AN_PoupsProxy.showMessage ("Achievment Updated ", "Id: " + result.achievementId + "\n status: " + result.Message);
  }



  private void OnLeaderBoardsLoaded(GooglePlayResult result) {
    GooglePlayManager.ActionLeaderboardsLoaded -= OnLeaderBoardsLoaded;

    if(result.IsSucceeded) {
      if( GooglePlayManager.Instance.GetLeaderBoard(LEADERBOARD_ID) == null) {
        AN_PoupsProxy.showMessage("Leader boards loaded", LEADERBOARD_ID + " not found in leader boards list");
        return;
      }


      SA_StatusBar.text = LEADERBOARD_NAME + "  score  " + GooglePlayManager.Instance.GetLeaderBoard(LEADERBOARD_ID).GetCurrentPlayerScore(GPBoardTimeSpan.ALL_TIME, GPCollectionType.FRIENDS).LongScore.ToString();
      AN_PoupsProxy.showMessage (LEADERBOARD_NAME + "  score",  GooglePlayManager.Instance.GetLeaderBoard(LEADERBOARD_ID).GetCurrentPlayerScore(GPBoardTimeSpan.ALL_TIME, GPCollectionType.FRIENDS).LongScore.ToString());
    } else {
      SA_StatusBar.text = result.Message;
      AN_PoupsProxy.showMessage ("Leader-Boards Loaded error: ", result.Message);
    }

    UpdateBoardInfo();

  }

  private void UpdateBoardInfo() {
  }

  private void OnScoreSubmited(GP_LeaderboardResult result) {
    if (result.IsSucceeded) {
      SA_StatusBar.text = "Score Submited:  " + result.Message
        + " LeaderboardId: " + result.Leaderboard.Id
        + " LongScore: " + result.Leaderboard.GetCurrentPlayerScore(GPBoardTimeSpan.ALL_TIME, GPCollectionType.GLOBAL).LongScore;
    } else {
      SA_StatusBar.text = "Score Submit Fail:  " + result.Message;
    }
  }

  private void OnScoreUpdated(GooglePlayResult res) {
    UpdateBoardInfo();
  }



  private void OnPlayerDisconnected() {
    SA_StatusBar.text = "Player Disconnected";
    Debug.Log ("Player Disconnected");
  }

  private void OnPlayerConnected() {
    SA_StatusBar.text = "Player Connected";
    Debug.Log ("Player Connected");
  }

  private void ActionConnectionResultReceived(GooglePlayConnectionResult result) {

    if(result.IsSuccess) {
      Debug.Log("Connected!");
    } else {
      Debug.Log("Cnnection failed with code: " + result.code.ToString());
    }
    SA_StatusBar.text = "ConnectionResul:  " + result.code.ToString();
  }

  void OnGiftResult (GooglePlayGiftRequestResult result) {
    SA_StatusBar.text = "Gift Send Result:  " + result.code.ToString();
    AN_PoupsProxy.showMessage("Gfit Send Complete", "Gift Send Result: " + result.code.ToString());
  }

  void OnPendingGiftsDetected (System.Collections.Generic.List<GPGameRequest> gifts)
  {
    AndroidDialog dialog = AndroidDialog.Create("Pending Gifts Detected", "You got few gifts from your friends, do you whant to take a look?");
    dialog.ActionComplete += OnPromtGiftDialogClose;
  }


  private void OnPromtGiftDialogClose(AndroidDialogResult res)
  {
    //parsing result
    switch(res)
    {
      case AndroidDialogResult.YES:
        GooglePlayManager.Instance.ShowRequestsAccepDialog();
        break;
    }
  }

  void OnGameRequestAccepted (System.Collections.Generic.List<GPGameRequest> gifts)
  {
    foreach(GPGameRequest g in gifts)
    {
      AN_PoupsProxy.showMessage("Gfit Accepted", g.playload + " is excepted");
    }
  }

  public void ShowInterstitial ()
  {
    AdToAppBinding.showInterstitial ();
  }

  public void ShowVideo ()
  {
    AdToAppBinding.showInterstitial (AdToAppContentType.VIDEO);
  }

  public void ShowRewarded ()
  {
    AdToAppBinding.showInterstitial (AdToAppContentType.REWARDED);
  }

  public void ShowBanner ()
  {
    AdToAppBinding.showBanner ();
  }

  public void ShowLeaderboard ()
  {
    GooglePlayManager.Instance.ShowLeaderBoardById (LEADERBOARD_ID);
  }

  //    // Update is called once per frame
  //    void Update()
  //    {
  //    }

  //    void OnGUI()
  //    {
  ////        DrawMenu();
  //    }

  //    void OnApplicationPause(bool pauseStatus)
  //    {
  //        Debug.Log("OnApplicationPause: " + pauseStatus);
  //        AdToAppBinding.onPause(pauseStatus);
  //    }

}
