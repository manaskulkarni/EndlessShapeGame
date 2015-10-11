using UnityEngine;
using System.Collections;

public class GameCenterManager : MonoBehaviour
{

  // Public Members

  // Private Members

  // Use this for initialization
  void Start ()
  {
    KTGameCenter.SharedCenter ().Authenticate ();
  }

//  // Update is called once per frame
//  void Update ()
//  {
//  }

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

  public void SubmitScore ()
  {
    KTGameCenter.SharedCenter ().SubmitScore (StatsManager.inst.score, StatsManager.inst.leaderBoardId);
  }

  public void ShowLeaderBoard ()
  {
    KTGameCenter.SharedCenter ().ShowLeaderboard ();
  }

  public void ShowAchievements ()
  {
    KTGameCenter.SharedCenter ().ShowAchievements ();
  }

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
