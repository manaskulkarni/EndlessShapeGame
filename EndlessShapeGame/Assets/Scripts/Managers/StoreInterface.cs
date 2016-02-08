using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public abstract class StoreInterface : MonoBehaviour
{
  public class ProductTemplate
  {
    public ProductTemplate (string dn, string p, string id)
    {
      DisplayName = dn;
      Price = p;
      Id = id;
    }
    public string DisplayName;
    public string Price;
    public string Id;
  }

  protected Dictionary <string, ProductTemplate> allProducts;
  protected bool storeLoaded { get; set; }
  protected bool achievementsLoaded { get; set; }

  #region Abstract Methods
  public abstract bool IsInitialized ();
  public abstract bool IsAuthenticated ();

  public abstract bool IsIAPInitialized ();

  public abstract string GetCurrencySymbol ();
  public abstract string GetPrice (string productName);
  
  protected abstract void OnSubmitHighScore();
  protected abstract void OnShowLeaderboard();
  protected abstract void OnShowAchievements();
  protected abstract void OnReportAchievement(StatsManager.AchievementData achievement);
  protected abstract void OnPurchaseItem (StoreButton button);
  protected abstract void TryRemoveAds ();
  protected abstract void OnTryRestorePurchase ();
  protected abstract void OnRestorePurchaseComplete ();

  protected abstract void OnStoreInfo (string info);
  #endregion
}
