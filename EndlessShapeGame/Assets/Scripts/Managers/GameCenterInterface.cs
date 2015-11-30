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
        Debug.Log("id" + tpl.Id);
        Debug.Log("title" + tpl.DisplayName);
        Debug.Log("description" + tpl.Description);
        Debug.Log("price" + tpl.Price);
        Debug.Log("localizedPrice" + tpl.LocalizedPrice);
        Debug.Log("currencySymbol" + tpl.CurrencySymbol);
        Debug.Log("currencyCode" + tpl.CurrencyCode);
        Debug.Log("-------------");

        products.Add (tpl.DisplayName, tpl);
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

  protected override void OnSubmitScore ()
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
    Debug.Log ("Reporting Achievement : " + achievement.name);
  
    if (IsAuthenticated () && IsInitialized () && achievements.ContainsKey (achievement.name))
    {
      var v = achievements [achievement.name];
      if (v.IsOpen)
      {
        GameCenterManager.SubmitAchievement (achievement.progress, v.Id, achievement.showNotification);
      }
    }
  }

  protected override void OnPurchaseItem (StoreButton button)
  {
    if (IsIAPInitialized ())
    {

    }
  }
  #endregion

}
