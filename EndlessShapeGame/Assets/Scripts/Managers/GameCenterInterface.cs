using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameCenterInterface : StoreInterface
{
  private Dictionary <string, GK_AchievementTemplate> achievements { get; set; }
  //  private Dictionary <string, IOSProductTemplate> allProducts { get; set; }

  private string currencySymbol { get; set; }

  // Use this for initialization
  void Awake ()
  {
    storeLoaded = achievementsLoaded = false;
    GameCenterManager.OnAuthFinished += HandleOnAuthFinished;

    IOSInAppPurchaseManager.OnStoreKitInitComplete += HandleOnStoreKitInitComplete;
    IOSInAppPurchaseManager.OnTransactionComplete += HandleOnTransactionComplete;
    IOSInAppPurchaseManager.OnRestoreComplete += HandleOnRestoreComplete;

    GameCenterManager.Init ();

    string appKey, data;
    KeyChainBinding.GetKeyChainData(out appKey, out data);
    Debug.Log ("APPLICATION KEY " + appKey);
    Debug.Log ("DATA " + data);
  }

  void OnApplicationPause (bool pause)
  {
    if (!pause)
    {
      Debug.Log ("ACHIEVEMENTS LOADED : " + achievementsLoaded);
      Debug.Log ("STORE LOADED : " + storeLoaded);
      if (!achievementsLoaded)
      {
        GameCenterManager.Init ();
      }
    }
    //    if (!storeLoaded)
    //    {
    //      IOSInAppPurchaseManager.Instance.LoadStore ();
    //    }
  }

  void HandleOnAuthFinished (ISN_Result res)
  {
    if (res.IsSucceeded)
    {
      //      GameCenterManager.ResetAchievements ();
      //IOSNativePopUpManager.showMessage("Player Authored ", "ID: " + GameCenterManager.Player.Id + "\n" + "Alias: " + GameCenterManager.Player.Alias);
      achievements = new Dictionary<string, GK_AchievementTemplate> ();
      achievementsLoaded = true;

      foreach (var v in GameCenterManager.Achievements)
      {
        Debug.Log ("Loading Achievement : " + v.Title);
        achievements.Add (v.Title, v);
      }
      CheckHighScore ();

      IOSInAppPurchaseManager.Instance.LoadStore ();
    }
    else
    {
//      IOSNativePopUpManager.showMessage("Game Center ", "Player auth failed");
    }
  }

  void CheckHighScore ()
  {
    GameCenterManager.LoadLeaderboardInfo (StatsManager.inst.leaderBoardId);
    GameCenterManager.OnLeadrboardInfoLoaded += GameCenterManager_OnLeadrboardInfoLoaded;
  }

  void GameCenterManager_OnLeadrboardInfoLoaded (GK_LeaderboardResult res)
  {
    if (res.IsSucceeded)
    {
      Debug.Log ("Loaded Leaderboard : " + res.Leaderboard.Id);
      GK_Score score = res.Leaderboard.GetCurrentPlayerScore (GK_TimeSpan.ALL_TIME, GK_CollectionType.GLOBAL);
      Debug.Log ("Current High Score : " + score.LongScore);
      if (StatsManager.inst.highScore < score.LongScore)
      {
        StatsManager.inst.SetHighScoreSilent ((int)score.LongScore);
      }
    }
  }

  void HandleOnStoreKitInitComplete (ISN_Result res)
  {
    IOSInAppPurchaseManager.OnStoreKitInitComplete -= HandleOnStoreKitInitComplete;

    if(res.IsSucceeded)
    {
      Debug.Log("Inited successfully, Available allProducts count: " + IOSInAppPurchaseManager.Instance.Products.Count.ToString());

      allProducts = new Dictionary<string, ProductTemplate> ();
      storeLoaded = true;

      foreach(IOSProductTemplate tpl in IOSInAppPurchaseManager.Instance.Products)
      {
        //        Debug.Log("id" + tpl.Id);
        //        Debug.Log("title" + tpl.DisplayName);
        //        Debug.Log("description" + tpl.Description);
        //        Debug.Log("price" + tpl.Price);
        //        Debug.Log("localizedPrice" + tpl.LocalizedPrice);
        //        Debug.Log("currencySymbol" + tpl.CurrencySymbol);
        //        Debug.Log("currencyCode" + tpl.CurrencyCode);
        //        Debug.Log("-------------");

        allProducts.Add (tpl.DisplayName, new ProductTemplate (tpl.DisplayName, tpl.CurrencySymbol + " "+tpl.Price+"", tpl.Id));
        currencySymbol = tpl.CurrencySymbol;
      }

      foreach (var v in allProducts)
      {
        Debug.Log ("PRODUCT NAME : " + v.Value.DisplayName);
      }

      GameManager.inst.BroadcastMessage ("OnProductsLoaded", allProducts);
    }
    else
    {
      Debug.Log("StoreKit Init Failed.  Error code: " + res.Error.Code + "\n" + "Error description:" + res.Error.Description);
    }
  }

  void HandleOnTransactionComplete (IOSStoreKitResult res)
  {
    switch (res.State)
    {
      case InAppPurchaseState.Purchased:
      case InAppPurchaseState.Restored:
        {
          var product = IOSInAppPurchaseManager.Instance.GetProductById (res.ProductIdentifier);
          if (allProducts.ContainsKey (product.DisplayName))
          {
            GameManager.inst.BroadcastMessage ("BuyProduct", product.DisplayName);
          }
        }
        break;
      default:
        break;
    }
  }

  void HandleOnRestoreComplete (IOSStoreKitRestoreResult res)
  {
    if (res.IsSucceeded)
    {
      GameManager.inst.ChangeState (GameManager.States.RestorePurchaseComplete);
    }
  }

  #region implemented abstract members of StoreManager
  public override bool IsInitialized ()
  {
    return GameCenterManager.IsInitialized;
  }

  public override bool IsAuthenticated ()
  {
    return GameCenterManager.IsPlayerAuthenticated;
  }

  public override bool IsIAPInitialized ()
  {
    return IOSInAppPurchaseManager.Instance.IsStoreLoaded;
  }

  public override string GetCurrencySymbol ()
  {
    return currencySymbol;
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
    Debug.Log ("Submitting Score");

    GameCenterManager.ReportScore (StatsManager.inst.score, StatsManager.inst.leaderBoardId);
  }

  protected override void OnShowLeaderboard()
  {
    Debug.Log ("Showing Leaderboard");

    GameCenterManager.ShowLeaderboards ();
  }

  protected override void OnShowAchievements()
  {
    Debug.Log ("Showing Achievements");

    GameCenterManager.ShowLeaderboards ();
  }

  protected override void OnReportAchievement(StatsManager.AchievementData achievement)
  {
    if (IsAuthenticated () && IsInitialized () && storeLoaded && achievementsLoaded && achievements.ContainsKey (achievement.name))
    {
      Debug.Log ("Reporting Achievement : " + achievement.name);
      var v = achievements [achievement.name];
      if (v != null && v.Progress < 100.0)
      {
        GameCenterManager.SubmitAchievement (achievement.progress, v.Id, achievement.showNotification);
      }
    }
  }

  protected override void OnPurchaseItem (StoreButton button)
  {
    Debug.Log ("REQUEST NAME : " + button.title.text);
    //    if (storeLoaded && achievementsLoaded)
    {
      if (allProducts != null && allProducts.ContainsKey (button.title.text))
      {
        Debug.Log ("Purchasing Item : " + allProducts[button.title.text].DisplayName);
        IOSInAppPurchaseManager.Instance.BuyProduct (allProducts[button.title.text].Id);
      }
    }
  }

  protected override void TryRemoveAds ()
  {
    if (allProducts != null && allProducts.ContainsKey ("Remove Ads"))
    {
      IOSInAppPurchaseManager.Instance.BuyProduct(allProducts["Remove Ads"].Id);
    }
  }

  protected override void OnTryRestorePurchase ()
  {
    IOSInAppPurchaseManager.Instance.RestorePurchases ();

    string appKey, data;
    KeyChainBinding.GetKeyChainData (out appKey, out data);
    Debug.Log ("FOUND KEYCHAIN DATA " + data);

    var split = data.Split('_');
    foreach (string s in split) Debug.Log ("MATCH " + s);

    if (split.Length > 1)
    {
      string coinString = split [1];

      Debug.Log ("EXTRACTED COIN INFORMATION " + coinString);

      int coinCount = 0;
      if (int.TryParse(coinString, out coinCount))
      {
        if (coinCount > 0)
        {
          GameManager.inst.BroadcastMessage ("OnRestoreCoinsFromInfo", coinCount);
        }
      }

      Debug.Log ("COIN COUNT " + coinCount);
    }
  }

  protected override void OnRestorePurchaseComplete ()
  {
  }

  protected override void OnStoreInfo (string info)
  {
    KeyChainBinding.SetKeyChainData(Application.productName, info);
  }
  #endregion

}