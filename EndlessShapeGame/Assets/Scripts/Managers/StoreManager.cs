using UnityEngine;
using System.Collections;

public abstract class StoreManager : MonoBehaviour
{
  public void RegisterEvents ()
  {
    StatsManager.inst.SubmitScoreEvent += SubmitScore;
    StatsManager.inst.ShowLeaderboardEvent += ShowLeaderboard;
    StatsManager.inst.ShowAchievementsEvent += ShowAchievements;
  }

  #region Abstract Methods
  protected abstract void SubmitScore(object sender, System.EventArgs args);
  protected abstract void ShowLeaderboard(object sender, System.EventArgs args);
  protected abstract void ShowAchievements(object sender, System.EventArgs args);
  #endregion
}
