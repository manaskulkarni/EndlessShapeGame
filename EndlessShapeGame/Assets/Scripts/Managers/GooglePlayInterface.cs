using UnityEngine;
using System.Collections;

public class GooglePlayInterface : StoreInterface
{
  // Use this as constructor
  void Awake ()
  {
    GooglePlayConnection.ActionConnectionResultReceived += ActionConnectionResultReceived;
    GooglePlayConnection.Instance.Connect ();;
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
    Debug.Log ("Submitting Score");
    GooglePlayManager.Instance.SubmitScore (StatsManager.inst.leaderBoardId, StatsManager.inst.score);
  }

  protected override void OnShowLeaderboard ()
  {
    Debug.Log ("Showing Leaderboard");
    GooglePlayManager.Instance.ShowLeaderBoardsUI ();
  }

  protected override void OnShowAchievements ()
  {
    Debug.Log ("Showing Achievements");
    GooglePlayManager.Instance.ShowAchievementsUI ();
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
