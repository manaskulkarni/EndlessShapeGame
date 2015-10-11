using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class StatsManager : Manager
{

  // Public Members
  public int score
  {
    get;
    private set;
  }

  public string leaderBoardId
  {
    get
    {
      return ""+GameManager.inst.gameSettings.dificultyLevel+"" + ""+GameManager.inst.gameSettings.speedLevel+"";
    }
  }

  public bool isHighScore
  {
    get;
    private set;
  }

  public bool isHighScoreRT
  {
    get
    {
      if (!highScoreCrossed)
      {
        if (score > previousScore)
        {
          highScoreCrossed = true;
          return true;
        }
      }

      return false;
    }
  }

  public int highScore
  {
    get
    {
      return PlayerPrefs.GetInt (leaderBoardId);
    }
  }

  public int coins
  {
    get;
    private set;
  }

  public bool firstSession
  {
    get;
    private set;
  }

  static public StatsManager inst
  {
    get;
    private set;
  }

  private delegate void Delegate ();

  // Private Members
  private Delegate SubmitScoreHandle
  {
    get;
    set;
  }

  private Delegate ShowLeaderBoardHandle
  {
    get;
    set;
  }

  private Delegate ShowAchievementsHandle
  {
    get;
    set;
  }

  private int previousScore
  {
    get;
    set;
  }

  private bool highScoreCrossed
  {
    get;
    set;
  }

//  private Dictionary <string, List <int>> scoreTable
//  {
//    get;
//    set;
//  }

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
    GameCenterManager gcm = gameObject.AddComponent <GameCenterManager> ();
    SubmitScoreHandle = gcm.SubmitScore;
    ShowLeaderBoardHandle = gcm.ShowLeaderBoard;
    ShowAchievementsHandle = gcm.ShowAchievements;
#elif UNITY_ANDROID
//    gameObject.AddComponentMenu <GooglePlayManager> ();
#elif UNITY_WINRT
    gameObject.AddComponent <WindowsStoreManager> ();
#endif

    Debug.Log (leaderBoardId);
    Debug.Log (Application.dataPath);

    previousScore = highScore;
    coins = PlayerPrefs.GetInt ("Coins");
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
  }

  public void AddCoin (int count = 1)
  {
    coins += count;
  }

  public void ShowLeaderBoard ()
  {
    ShowLeaderBoardHandle ();
  }

  public void ShowAchievements ()
  {
    ShowAchievementsHandle ();
  }

  private bool CheckHighScore ()
  {
    int prevScore = PlayerPrefs.GetInt (leaderBoardId);
    if (score > prevScore)
    {
//      if (score == prevScore || score == 0)
//      {
//        return false;
//      }

      return true;
    }

    return false;
  }

  #region implemented abstract members of Manager

  public override void Reset ()
  {
    score = 0;
  }

  public override void OnGameStart ()
  {
    firstSession = false;
  }

  public override void OnGameOver ()
  {
    isHighScore = CheckHighScore ();
    if (isHighScore)
    {
      previousScore = score;
      if (SubmitScoreHandle != null)
      {
        SubmitScoreHandle ();
        PlayerPrefs.SetInt (leaderBoardId, score);
      }
    }

    highScoreCrossed = false;
  }

  public override void OnGameRestart ()
  {
    Reset ();
  }

  [System.Obsolete ("Difficulty Modes Not Supported Anymore. Single Difficulty Mode")]
  public override void OnDifficultyChange ()
  {
    Debug.Log (leaderBoardId);
  }

  [System.Obsolete ("Speed Modes Not Supported Anymore. Single Speed Mode")]
  public override void OnSpeedChange ()
  {
    Debug.Log (leaderBoardId);
  }

  #endregion
}
