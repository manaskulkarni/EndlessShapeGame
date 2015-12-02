using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameCenterInterface : StoreInterface
{
  private Dictionary <string, GK_AchievementTemplate> achievements { get; set; }
  private Dictionary <string, IOSProductTemplate> products { get; set; }


  // Use this for initialization
  void Awake ()
  {
    GameCenterManager.OnAuthFinished += HandleOnAuthFinished;
    GameCenterManager.Init ();

    IOSInAppPurchaseManager.OnStoreKitInitComplete += HandleOnStoreKitInitComplete;
    IOSInAppPurchaseManager.OnTransactionComplete += HandleOnTransactionComplete;
    IOSInAppPurchaseManager.Instance.LoadStore ();

    IOSInAppPurchaseManager.OnRestoreComplete += HandleOnRestoreComplete;
  }

  void HandleOnAuthFinished (ISN_Result res)
  {
    if (res.IsSucceeded)
    {
      GameCenterManager.ResetAchievements ();
      //IOSNativePopUpManager.showMessage("Player Authored ", "ID: " + GameCenterManager.Player.Id + "\n" + "Alias: " + GameCenterManager.Player.Alias);
      achievements = new Dictionary<string, GK_AchievementTemplate> ();
      
      foreach (var v in GameCenterManager.Achievements)
      {
        Debug.Log ("Loading Achievement : " + v.Title);
        achievements.Add (v.Title, v);
      }
    }
    else
    {
      IOSNativePopUpManager.showMessage("Game Center ", "Player auth failed");
    }
  }

  void HandleOnStoreKitInitComplete (ISN_Result res)
  {
    IOSInAppPurchaseManager.OnStoreKitInitComplete -= HandleOnStoreKitInitComplete;
    
    if(res.IsSucceeded)
    {
      Debug.Log("Inited successfully, Available products count: " + IOSInAppPurchaseManager.Instance.Products.Count.ToString());

      products = new Dictionary<string, IOSProductTemplate> ();

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

        products.Add (tpl.DisplayName, tpl);
      }

      foreach (var v in products)
      {
        Debug.Log ("PRODUCT NAME : " + v.Value.DisplayName);
      }
    }
    else
    {
      Debug.Log("StoreKit Init Failed.  Error code: " + res.Error.Code + "\n" + "Error description:" + res.Error.Description);
    }
  }

  void HandleOnTransactionComplete (IOSStoreKitResult res)
  {
    
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
  
    if (IsAuthenticated () && IsInitialized () && achievements.ContainsKey (achievement.name))
    {
      Debug.Log ("Reporting Achievement : " + achievement.name);
      var v = achievements [achievement.name];
      if (v.Progress < 100.0)
      {
        GameCenterManager.SubmitAchievement (achievement.progress, v.Id, achievement.showNotification);
      }
    }
  }

  protected override void OnPurchaseItem (StoreButton button)
  {
    Debug.Log ("REQUEST NAME : " + button.title.text);
    if (products.ContainsKey (button.title.text))
    {
      Debug.Log ("Purchasing Item : " + products[button.title.text].DisplayName);
      IOSInAppPurchaseManager.Instance.BuyProduct (products[button.title.text].Id);
    }
  }

  protected override void OnTryRestorePurchase ()
  {
    IOSInAppPurchaseManager.Instance.RestorePurchases ();
  }

  protected override void OnRestorePurchaseComplete ()
  {
  }
  #endregion

}
