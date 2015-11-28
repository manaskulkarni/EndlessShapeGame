using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class StatsManager : MonoBehaviour
{

  public class AchievementData
  {
    public AchievementData (string n, float p, bool show)
    {
      name = n;
      progress = p;
      showNotification = show;
    }
    public string name;
    public float progress;
    public bool showNotification;
  }

#if UNITY_EDITOR
  public int startScore = 0;
#endif

  public int reviveCoinsPrice = 100;
  public int maxAllowedRevives = 1;

  #region Properties
  /// <summary>
  /// Score of current session
  /// </summary>
  public int score { get; private set; }
  /// <summary>
  /// Leaderboard Id for PlayerPrefs
  /// </summary>
  public string leaderBoardId
  {
    get
    {
      return ""+GameManager.inst.gameSettings.dificultyLevel+"" + ""+GameManager.inst.gameSettings.speedLevel+"";
    }
  }
  /// <summary>
  /// Returns whether score at end of last session is high score
  /// </summary>
  public bool isHighScore { get; private set; }
  /// <summary>
  /// Returns current high score
  /// </summary>
  public int highScore
  {
    get
    {
      return PlayerPrefs.GetInt (leaderBoardId);
    }
  }
  /// <summary>
  /// Returns number of coins collected
  /// </summary>
  public int coins { get; private set; }
  /// <summary>
  /// Returns whether this session is 1st session after launching game
  /// </summary>
  public bool firstSession { get; private set; }
  public int numSessions { get; private set; }
  
  public bool canShowRevive
  {
    get
    {
      if (usedRevives < maxAllowedRevives)
      {
        return true;
      }
      
      return false;
    }
  }
  
  public bool canUseRevive
  {
    get
    {
      if (coins >= reviveCoinsPrice)
      {
        return true;
      }
      
      return false;
    }
  }
  
  #endregion
  #region Static Properties
  static public StatsManager inst
  {
    get;
    private set;
  }
  #endregion
  #region Events
  public string SubmitScoreEvent { get { return "OnSubmitScore"; } }
  public string ShowLeaderboardEvent { get { return "OnShowLeaderboard"; } }
  public string ShowAchievementsEvent { get { return "OnShowAchievements"; } }
  public string ReportAchievementEvent { get { return "OnReportAchievement"; } }
  #endregion 

  private int previousScore { get; set; }
  private bool highScoreCrossed { get; set; }
  private int usedRevives { get; set; }

  void Awake ()
  {
    if (inst == null)
    {
      inst = this;
    }
    else
    {
      GameObject.Destroy (gameObject);
    }

    firstSession = true;
  }

  // Use this for initialization
  void Start ()
  {
#if UNITY_IOS
    gameObject.AddComponent <GameCenterInterface> ();
#elif UNITY_ANDROID
//    gameObject.AddComponentMenu <GooglePlayManager> ();
#elif UNITY_WINRT
    gameObject.AddComponent <WindowsStoreManager> ();
#endif

    Debug.Log ("Leaderboard ID: " + leaderBoardId);
    Debug.Log ("Data Path: " + Application.dataPath);
    Debug.Log ("Persistent Data Path: " + Application.persistentDataPath);

    previousScore = highScore;
    coins = PlayerPrefs.GetInt ("Coins");
    maxAllowedRevives = PlayerPrefs.GetInt ("MaxAllowedRevives", 1);
    usedRevives = 0;
#if UNITY_EDITOR
  score = startScore;
#endif
  }

  void OnEnable ()
  {
  }

  void OnDisable ()
  {
    PlayerPrefs.SetInt ("Coins", coins);
  }

  public void AddPoint ()
  {
    ++score;
    
    if (!highScoreCrossed && score > highScore)
    {
      GameManager.inst.ChangeState (GameManager.States.HighScoreCrossed);
      highScoreCrossed = true;
    }
    
    BroadcastMessage (ReportAchievementEvent, new AchievementData ("StillLearning", 100.0f, true));
  }

  public void AddCoin (int count = 1)
  {
    coins += count;
  }

  public void ShowLeaderBoard ()
  {
    BroadcastMessage (ShowLeaderboardEvent);
  }

  public void ShowAchievements ()
  {
    BroadcastMessage (ShowAchievementsEvent);
  }

  private bool CheckHighScore ()
  {
    int prevScore = PlayerPrefs.GetInt (leaderBoardId);
    if (score > prevScore)
    {
      return true;
    }

    return false;
  }

  #region implemented abstract members of Manager
  void OnGameReset ()
  {
#if UNITY_EDITOR
    score = startScore;
#else
    score = 0;
#endif
  }

  void OnGameStart ()
  {
    firstSession = false;
  }

  void OnGameOver ()
  {
    isHighScore = CheckHighScore ();
    if (isHighScore)
    {
      previousScore = score;
      if (SubmitScoreEvent != null)
      {
        BroadcastMessage (SubmitScoreEvent);
        PlayerPrefs.SetInt (leaderBoardId, score);
      }
    }

    highScoreCrossed = false;
    ++numSessions;
  }

  void OnGameRestart ()
  {
    OnGameReset ();
  }
  
  void OnCompleteRevive ()
  {
    ++usedRevives;
  }

  [System.Obsolete ("Difficulty Modes Not Supported Anymore. Single Difficulty Mode")]
  void OnDifficultyChange ()
  {
    Debug.Log (leaderBoardId);
  }

  [System.Obsolete ("Speed Modes Not Supported Anymore. Single Speed Mode")]
  void OnSpeedChange ()
  {
    Debug.Log (leaderBoardId);
  }
  #endregion
}
