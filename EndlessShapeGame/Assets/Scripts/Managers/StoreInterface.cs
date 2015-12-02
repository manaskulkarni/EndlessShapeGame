using UnityEngine;
using System.Collections;

public abstract class StoreInterface : MonoBehaviour
{
  #region Abstract Methods
  public abstract bool IsInitialized ();
  public abstract bool IsAuthenticated ();

  public abstract bool IsIAPInitialized ();
  
  protected abstract void OnSubmitHighScore();
  protected abstract void OnShowLeaderboard();
  protected abstract void OnShowAchievements();
  protected abstract void OnReportAchievement(StatsManager.AchievementData achievement);
  protected abstract void OnPurchaseItem (StoreButton button);
  protected abstract void OnTryRestorePurchase ();
  protected abstract void OnRestorePurchaseComplete ();
  #endregion
}
