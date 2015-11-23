using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class StatsManager : Manager
{

#if UNITY_EDITOR
  public int startScore = 0;
#endif

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
  
  #endregion
  #region Static Properties
  static public StatsManager inst
  {
    get;
    private set;
  }
  #endregion
  #region Events
  public event System.EventHandler SubmitScoreEvent;
  public event System.EventHandler ShowLeaderboardEvent;
  public event System.EventHandler ShowAchievementsEvent;
  #endregion

  private int previousScore { get; set; }
  private bool highScoreCrossed { get; set; }

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
    gameObject.AddComponent <GameCenterManager> ().RegisterEvents ();
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
      GameManager.inst.HighScoreCrossed ();
      highScoreCrossed = true;
    }
  }

  public void AddCoin (int count = 1)
  {
    coins += count;
  }

  public void ShowLeaderBoard ()
  {
    EventManager.SendEvent(this, ShowLeaderboardEvent, null);
  }

  public void ShowAchievements ()
  {
    EventManager.SendEvent(this, ShowAchievementsEvent, null);
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
  public override void OnGameReset (object sender, System.EventArgs args)
  {
#if UNITY_EDITOR
    score = startScore;
#else
    score = 0;
#endif
  }

  public override void OnGameStart (object sender, System.EventArgs args)
  {
    firstSession = false;
  }

  public override void OnGameOver (object sender, System.EventArgs args)
  {
    isHighScore = CheckHighScore ();
    if (isHighScore)
    {
      previousScore = score;
      if (SubmitScoreEvent != null)
      {
        EventManager.SendEvent(this, SubmitScoreEvent, null);
        PlayerPrefs.SetInt (leaderBoardId, score);
      }
    }

    highScoreCrossed = false;
    ++numSessions;
  }

  public override void OnGameRestart (object sender, System.EventArgs args)
  {
    OnGameReset (null, null);
  }

  [System.Obsolete ("Difficulty Modes Not Supported Anymore. Single Difficulty Mode")]
  public override void OnDifficultyChange (object sender, System.EventArgs args)
  {
    Debug.Log (leaderBoardId);
  }

  [System.Obsolete ("Speed Modes Not Supported Anymore. Single Speed Mode")]
  public override void OnSpeedChange (object sender, System.EventArgs args)
  {
    Debug.Log (leaderBoardId);
  }
  #endregion
}
