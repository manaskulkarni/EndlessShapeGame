using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GooglePlayInterface : StoreInterface
{

  // Use this as constructor
  void Awake ()
  {
    GooglePlayConnection.ActionConnectionResultReceived += OnConnectionResultReceived;

    //listening for purchase and consume events
    AndroidInAppPurchaseManager.ActionProductPurchased += OnProductPurchased;  
    AndroidInAppPurchaseManager.ActionProductConsumed  += OnProductConsumed;


    //listening for store initilaizing finish
    AndroidInAppPurchaseManager.ActionBillingSetupFinished += OnBillingSetupFinished;

    GooglePlayConnection.Instance.Connect ();
    AndroidInAppPurchaseManager.Instance.LoadStore ();
  }

  void OnBillingSetupFinished (BillingResult result)
  {
    AndroidInAppPurchaseManager.ActionBillingSetupFinished -= OnBillingSetupFinished;

    if(result.isSuccess)
    {
      //Store connection is Successful. Next we loading product and customer purchasing details
      AndroidInAppPurchaseManager.instance.retrieveProducDetails();
      AndroidInAppPurchaseManager.ActionRetrieveProducsFinished += OnRetriveProductsFinised;
    } 

    AndroidMessage.Create("Connection Responce", result.response.ToString() + " " + result.message);
    Debug.Log ("Connection Responce: " + result.response.ToString() + " " + result.message);
  }

  private void OnRetriveProductsFinised(BillingResult result)
  {
    AndroidInAppPurchaseManager.ActionRetrieveProducsFinished -= OnRetriveProductsFinised;

    if(result.isSuccess)
    {
      AndroidMessage.Create("Success", "Billing init complete inventory contains: " + AndroidInAppPurchaseManager.instance.inventory.purchases.Count + " products");

      allProducts = new Dictionary<string, ProductTemplate> ();
      storeLoaded = true;

      foreach (var tpl in AndroidInAppPurchaseManager.Instance.Inventory.Products)
      {
        allProducts.Add (tpl.Title, new ProductTemplate (tpl.Title, tpl.PriceCurrencyCode + " "+tpl.Price+"", tpl.SKU));
//        currencySymbol = tpl.CurrencySymbol;
      }

      GameManager.inst.BroadcastMessage ("OnProductsLoaded", allProducts);
    }
    else
    {
      AndroidMessage.Create("Connection Responce", result.response.ToString() + " " + result.message);
    }
    Debug.Log ("Connection Responce: " + result.response.ToString() + " " + result.message);

  }

  void OnProductPurchased (BillingResult res)
  {
    if (res.isSuccess)
    {
      var product = AndroidInAppPurchaseManager.Instance.Inventory.GetProductDetails (res.purchase.SKU);
      if (allProducts.ContainsKey (product.Title))
      {
        GameManager.inst.BroadcastMessage ("BuyProduct", product.Title);
      }

      AndroidInAppPurchaseManager.Instance.Consume (res.purchase.SKU);
    }
  }

  void OnProductConsumed (BillingResult res)
  {
    if (res.isSuccess)
    {
      Debug.Log ("PRODUCT CONSUMED : " + res.purchase.packageName);
    }
  }

  private void OnConnectionResultReceived(GooglePlayConnectionResult result)
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

  public override string GetCurrencySymbol ()
  {
    throw new System.NotImplementedException ();
  }

  public override string GetPrice (string productName)
  {
    throw new System.NotImplementedException ();
  }

  protected override void OnSubmitHighScore ()
  {
    GooglePlayManager.Instance.SubmitScore (StatsManager.inst.leaderBoardId, StatsManager.inst.score);
  }

  protected override void OnShowLeaderboard ()
  {
    GooglePlayManager.Instance.ShowLeaderBoardsUI ();
  }

  protected override void OnShowAchievements ()
  {
    GooglePlayManager.Instance.ShowAchievementsUI ();
  }

  protected override void OnReportAchievement (StatsManager.AchievementData achievement)
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
  }

  protected override void OnRestorePurchaseComplete ()
  {
  }

  protected override void OnStoreInfo (string info)
  {
  }

  #endregion
}
