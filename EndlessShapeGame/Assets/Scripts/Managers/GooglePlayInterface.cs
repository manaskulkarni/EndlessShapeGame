using UnityEngine;
using System.Collections;
using System.Collections.Generic;

#if UNITY_ANDROID
public class GooglePlayInterface : StoreInterface
{

  // Use this as constructor
  void Awake ()
  {
    //listen for GooglePlayConnection events
    GooglePlayConnection.ActionPlayerConnected +=  OnPlayerConnected;
    GooglePlayConnection.ActionPlayerDisconnected += OnPlayerDisconnected;
    GooglePlayConnection.ActionConnectionResultReceived += ActionConnectionResultReceived;

    //listen for GooglePlayManager events
//    GooglePlayManager.ActionAchievementUpdated += OnAchievementUpdated;
//    GooglePlayManager.ActionScoreSubmited += OnScoreSubmited;
//    GooglePlayManager.ActionScoresListLoaded += OnScoreUpdated;

//    GooglePlayManager.ActionSendGiftResultReceived += OnGiftResult;
//    GooglePlayManager.ActionPendingGameRequestsDetected += OnPendingGiftsDetected;
//    GooglePlayManager.ActionGameRequestsAccepted += OnGameRequestAccepted;

    GooglePlayManager.ActionOAuthTokenLoaded += ActionOAuthTokenLoaded;
    GooglePlayManager.ActionAvailableDeviceAccountsLoaded += ActionAvailableDeviceAccountsLoaded;
//    GooglePlayManager.ActionAchievementsLoaded += OnAchievmnetsLoadedInfoListner;

    GooglePlayConnection.Instance.Connect ();

    AndroidInAppPurchaseManager.ActionProductPurchased += OnProductPurchased;
    AndroidInAppPurchaseManager.ActionProductConsumed += OnProductConsumed;
    AndroidInAppPurchaseManager.ActionBillingSetupFinished += OnBillingConnected;

    //you may use loadStore function without parametr if you have filled base64EncodedPublicKey in plugin settings
    AndroidInAppPurchaseManager.Instance.LoadStore();
  }

  private void OnPlayerConnected ()
  {
    Debug.Log("Connected!");

    CheckHighScore ();
  }

  private void OnPlayerDisconnected ()
  {
    Debug.Log ("Player Disconnected");
  }

  private void ActionConnectionResultReceived(GooglePlayConnectionResult result)
  {
    if(result.IsSuccess)
    {
      Debug.Log("Connected!");
    }
    else
    {
      Debug.Log("Cnnection failed with code: " + result.code.ToString());
    }
  }

  void OnBillingConnected (BillingResult result)
  {
    AndroidInAppPurchaseManager.ActionBillingSetupFinished -= OnBillingConnected;

    if(result.isSuccess)
    {
      //Store connection is Successful. Next we loading product and customer purchasing details
      AndroidInAppPurchaseManager.instance.retrieveProducDetails();
      AndroidInAppPurchaseManager.ActionRetrieveProducsFinished += OnRetriveProductsFinised;
    } 

//    AndroidMessage.Create("Connection Response", result.response.ToString() + " " + result.message);
    Debug.Log ("Connection Response: " + result.response.ToString() + " " + result.message);
  }

  private void OnRetriveProductsFinised(BillingResult result)
  {
    AndroidInAppPurchaseManager.ActionRetrieveProducsFinished -= OnRetriveProductsFinised;

    if(result.isSuccess)
    {
//      AndroidMessage.Create("Success", "Billing init complete inventory contains: " + AndroidInAppPurchaseManager.instance.inventory.purchases.Count + " products");
      foreach (var v in AndroidInAppPurchaseManager.Instance.Inventory.Purchases)
      {
        var prod = AndroidInAppPurchaseManager.Instance.Inventory.GetProductDetails (v.SKU);
        if (prod != null && prod.ProductType == AN_InAppType.Consumable)
        {
          AndroidInAppPurchaseManager.Instance.Consume (v.SKU);
        }
      }
//      AndroidMessage.Create("Success", "Billing init complete inventory contains: " + AndroidInAppPurchaseManager.Instance.inventory.Products.Count + " products");

      allProducts = new Dictionary<string, ProductTemplate> ();
      storeLoaded = true;

      foreach (var tpl in AndroidInAppPurchaseManager.Instance.Inventory.Products)
      {
        string strippedTitle = tpl.Title.Replace (" (Just Flick)", "");
        Debug.Log ("STRIPPED TITLE " + strippedTitle);
        allProducts.Add (strippedTitle, new ProductTemplate (strippedTitle, tpl.PriceCurrencyCode + " "+tpl.Price+"", tpl.SKU));
        currencySymbol = tpl.PriceCurrencyCode;
      }

      GameManager.inst.BroadcastMessage ("OnProductsLoaded", allProducts);
    }
    else
    {
//      AndroidMessage.Create("Connection Responce", result.response.ToString() + " " + result.message);
    }
    Debug.Log ("Connection Response: " + result.response.ToString() + " " + result.message);

  }

  private void ActionOAuthTokenLoaded(string token)
  {
    AN_PoupsProxy.showMessage("Token Loaded", GooglePlayManager.Instance.loadedAuthToken);
  }

  private void ActionAvailableDeviceAccountsLoaded(System.Collections.Generic.List<string> accounts)
  {
    string msg = "Device contains following google accounts:" + "\n";
    foreach(string acc in GooglePlayManager.Instance.deviceGoogleAccountList)
    {
      msg += acc + "\n";
    } 

    AndroidDialog dialog = AndroidDialog.Create("Accounts Loaded", msg, "Sign With Fitst one", "Do Nothing");
    dialog.ActionComplete += SighDialogComplete;
  }

  private void SighDialogComplete (AndroidDialogResult res)
  {
    if(res == AndroidDialogResult.YES)
    {
      GooglePlayConnection.Instance.Connect(GooglePlayManager.Instance.deviceGoogleAccountList[0]);
    }

  }

  void OnProductPurchased (BillingResult res)
  {
    if (res.isSuccess)
    {
      var product = AndroidInAppPurchaseManager.Instance.Inventory.GetProductDetails (res.purchase.SKU);
      string title = product.Title.Replace (" (" + Application.productName + ")", "");
      Debug.Log ("PURCHASING PRODUCT " + title);
      Debug.Log ("INVENTORY CONTAINS PRODUCT " + allProducts.ContainsKey (title));
      if (allProducts.ContainsKey (title))
      {
        GameManager.inst.BroadcastMessage ("BuyProduct", title);
        if (product.ProductType == AN_InAppType.Consumable)
        {
          AndroidInAppPurchaseManager.Instance.Consume (res.purchase.SKU);
        }
      }

    }
  }

  void OnProductConsumed (BillingResult res)
  {
    if (res.isSuccess)
    {
      Debug.Log ("PRODUCT CONSUMED : " + res.purchase.packageName);
    }
  }

  void CheckHighScore ()
  {
    GooglePlayManager.Instance.LoadLeaderBoards ();
    GooglePlayManager.ActionLeaderboardsLoaded += GooglePlayManager_ActionLeaderboardsLoaded;
  }

  void GooglePlayManager_ActionLeaderboardsLoaded (GooglePlayResult res)
  {
    if (res.IsSucceeded)
    {
      var leaderboard = GooglePlayManager.Instance.GetLeaderBoard (StatsManager.inst.leaderBoardId);
      if (leaderboard != null)
      {
        Debug.Log ("Loaded leaderboard : " + leaderboard.Name);

        var scoreList = leaderboard.GetScoresList (GPBoardTimeSpan.ALL_TIME, GPCollectionType.GLOBAL);
        foreach (var v in scoreList)
        {
          Debug.Log ("SCORE " + v.LongScore);
        }

        GPScore score = leaderboard.GetCurrentPlayerScore (GPBoardTimeSpan.ALL_TIME, GPCollectionType.GLOBAL);
        Debug.Log ("Current High Score : " + score.LongScore);
        if (StatsManager.inst.highScore < score.LongScore)
        {
          StatsManager.inst.SetHighScoreSilent ((int)score.LongScore);
        }
      }
    }
  }

  #region implemented abstract members of StoreInterface

  public override bool IsInitialized ()
  {
    throw new System.NotImplementedException ();
  }

  public override bool IsAuthenticated ()
  {
    throw new System.NotImplementedException ();
  }

  public override bool IsIAPInitialized ()
  {
    return storeLoaded;
  }

  public override string GetPrice (string productName)
  {
    if (allProducts != null && allProducts.ContainsKey (productName))
    {
      return allProducts[productName].Price;
    }

    return "";
  }

  protected override void OnSubmitHighScore ()
  {
    GooglePlayManager.Instance.SubmitScoreById (StatsManager.inst.leaderBoardId, StatsManager.inst.score);
  }

  protected override void OnShowLeaderboard ()
  {
    GooglePlayManager.Instance.ShowLeaderBoardById (StatsManager.inst.leaderBoardId);
  }

  protected override void OnShowAchievements ()
  {
    GooglePlayManager.Instance.ShowAchievementsUI ();
  }

  public override void OnReportAchievement (StatsManager.AchievementData achievement)
  {
    GooglePlayManager.Instance.UnlockAchievement (achievement.name);
  }

  protected override void OnPurchaseItem (StoreButton button)
  {
    Debug.Log ("REQUEST NAME : " + button.title.text);
    //    if (storeLoaded && achievementsLoaded)
    {
      if (allProducts != null && allProducts.ContainsKey (button.title.text))
      {
        Debug.Log ("Purchasing Item : " + allProducts[button.title.text].DisplayName);
        AndroidInAppPurchaseManager.Instance.Purchase (allProducts[button.title.text].Id);
      }
    }
  }

  protected override void TryRemoveAds ()
  {
    if (allProducts != null && allProducts.ContainsKey ("Remove Ads"))
    {
      AndroidInAppPurchaseManager.Instance.Purchase(allProducts["Remove Ads"].Id);
    }
  }

  protected override void OnTryRestorePurchase ()
  {
    Debug.Log ("Restoring Purchase Automatic On Android");
  }

  protected override void OnRestorePurchaseComplete ()
  {
    Debug.Log ("Restoring Purchase Automatic On Android");
  }

  protected override void OnStoreInfo (string info)
  {
  }

  #endregion
}
#endif