using UnityEngine;
using System.Collections;

public class GameCenterManager : StoreManager
{

  // Use this for initialization
  void Start ()
  {
    KTGameCenter.SharedCenter ().Authenticate ();
  }

  void OnEnable ()
  {
    StartCoroutine (RegisterForGameCenter ());
  }

  void OnDisable ()
  {
    KTGameCenter.SharedCenter().GCUserAuthenticated     -= GCAuthentication;
    KTGameCenter.SharedCenter().GCScoreSubmitted        -= ScoreSubmitted;
    KTGameCenter.SharedCenter().GCAchievementSubmitted  -= AchievementSubmitted;
    KTGameCenter.SharedCenter().GCAchievementsReset     -= AchivementsReset;
  }

  private IEnumerator RegisterForGameCenter ()
  {
    yield return new WaitForSeconds(0.5f);
    KTGameCenter.SharedCenter().GCUserAuthenticated     += GCAuthentication;
    KTGameCenter.SharedCenter().GCScoreSubmitted        += ScoreSubmitted;
    KTGameCenter.SharedCenter().GCAchievementSubmitted  += AchievementSubmitted;
    KTGameCenter.SharedCenter().GCAchievementsReset     += AchivementsReset;
  }

  #region implemented abstract members of StoreManager
  protected override void SubmitScore (object sender, System.EventArgs args)
  {
    KTGameCenter.SharedCenter ().SubmitScore (StatsManager.inst.score, StatsManager.inst.leaderBoardId);
  }

  protected override void ShowLeaderboard(object sender, System.EventArgs args)
  {
    KTGameCenter.SharedCenter ().ShowLeaderboard ();
  }

  protected override void ShowAchievements(object sender, System.EventArgs args)
  {
    KTGameCenter.SharedCenter ().ShowAchievements ();
  }
  #endregion
  #region Game Center Delegates
  void GCAuthentication (string status)
  {
    print ("delegate call back status = " + status);
  }
  void ScoreSubmitted (string leaderboardId,string error)
  {
    print ("score submitted with id " + leaderboardId + " and error = " + error);
  }

  void AchievementSubmitted (string achId,string error)
  {
    print ("achievement submitted with id " + achId + " and error = " + error);
  }

  void AchivementsReset (string error)
  {
    print ("Achievment reset with error = " + error);
  }
  #endregion

}
