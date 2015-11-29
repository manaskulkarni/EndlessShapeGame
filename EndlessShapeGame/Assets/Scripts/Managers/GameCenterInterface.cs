using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameCenterInterface : StoreInterface
{
  private Dictionary <string, GK_AchievementTemplate> achievements { get; set; }


  // Use this for initialization
  void Awake ()
  {
    GameCenterManager.OnAuthFinished += HandleOnAuthFinished;
    GameCenterManager.Init ();
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

  #region implemented abstract members of StoreManager
  public override bool IsInitialized ()
  {
    return GameCenterManager.IsInitialized;
  }
  
  public override bool IsAuthenticated ()
  {
    return GameCenterManager.IsPlayerAuthenticated;
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
  #endregion

}
