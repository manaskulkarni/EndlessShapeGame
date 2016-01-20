using UnityEngine;
using System.Collections;

public class GooglePlayInterface : StoreInterface
{
  // Use this as constructor
  void Awake ()
  {	
  }

  // Use this for initialization
  void Start ()
  {	
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
    throw new System.NotImplementedException ();
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
    throw new System.NotImplementedException ();
  }

  protected override void OnShowLeaderboard ()
  {
    throw new System.NotImplementedException ();
  }

  protected override void OnShowAchievements ()
  {
    throw new System.NotImplementedException ();
  }

  protected override void OnReportAchievement (StatsManager.AchievementData achievement)
  {
    throw new System.NotImplementedException ();
  }

  protected override void OnPurchaseItem (StoreButton button)
  {
    throw new System.NotImplementedException ();
  }

  protected override void OnTryRestorePurchase ()
  {
    throw new System.NotImplementedException ();
  }

  protected override void OnRestorePurchaseComplete ()
  {
    throw new System.NotImplementedException ();
  }

  #endregion
}
