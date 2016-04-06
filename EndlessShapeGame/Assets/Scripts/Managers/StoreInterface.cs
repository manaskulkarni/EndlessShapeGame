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

  public class AchievementTemplate
  {
    public AchievementTemplate (string dn, string id, float p)
    {
      Title = dn;
      Progress = p;
      Id = id;
    }
    public string Id = string.Empty;
    public string Title = "New Achievement";
    public float Progress = 0.0f;
  }

  protected Dictionary <string, ProductTemplate> allProducts;
  protected Dictionary <string, AchievementTemplate> achievements;

  protected bool storeLoaded { get; set; }
  protected bool achievementsLoaded { get; set; }
  protected string currencySymbol { get; set; }

  #region Abstract Methods
  public abstract bool IsInitialized ();
  public abstract bool IsAuthenticated ();

  public abstract bool IsIAPInitialized ();

  public abstract string GetPrice (string productName);
  public abstract void OnReportAchievement(StatsManager.AchievementData achievement);
  
  protected abstract void OnSubmitHighScore();
  protected abstract void OnSubmitFlicks();
  protected abstract void OnShowLeaderboard();
  protected abstract void OnShowAchievements();
  protected abstract void OnPurchaseItem (StoreButton button);
  protected abstract void TryRemoveAds ();
  protected abstract void OnTryRestorePurchase ();
  protected abstract void OnRestorePurchaseComplete ();

  protected abstract void OnStoreInfo (string info);
  #endregion

  #region Common Methods
  public string GetCurrencySymbol ()
  {
    return currencySymbol;
  }
  #endregion
}
