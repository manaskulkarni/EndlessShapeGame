using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;

using UnityEngine.UI;


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
  
  [System.Serializable]
  public class PlayerStats
  {
    public int highScore { get; set; }
    public int numBlackCollision { get; set; }
  }

#if UNITY_EDITOR
  public int startScore = 0;
#endif

  public PlayerStats playerStats;
  public int reviveCoinsPrice = 100;
  public int maxAllowedRevives = 1;
  public int FlippedScore = 0;
  public bool isFlipped = false;
  
  public int numRevivePotions = 0;
  public int numSlowMotionPotions = 0;
  public int prevFacebookStatus = 0;

  private int initialRevivePrice;

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
      if (maxAllowedRevives == -1 || usedRevives < maxAllowedRevives)
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
      if (coins == -1 || coins >= reviveCoinsPrice)
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
  public string SubmitHighScoreEvent { get { return "OnSubmitHighScore"; } }
  public string ShowLeaderboardEvent { get { return "OnShowLeaderboard"; } }
  public string ShowAchievementsEvent { get { return "OnShowAchievements"; } }
  public string ReportAchievementEvent { get { return "OnReportAchievement"; } }
  public string PurchaseCoinsEvent { get { return "OnPurchaseItem"; } }
  #endregion 

  private int previousScore { get; set; }
  private bool highScoreCrossed { get; set; }
  private int usedRevives { get; set; }

  public int vMode = 0;

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

    initialRevivePrice = reviveCoinsPrice;
    firstSession = true;
    vMode = PlayerPrefs.GetInt ("VMode");

    Debug.Log ("Leaderboard ID: " + leaderBoardId);
    Debug.Log ("Data Path: " + Application.dataPath);
    Debug.Log ("Persistent Data Path: " + Application.persistentDataPath);
    playerStats.numBlackCollision = PlayerPrefs.GetInt("numBlackCollision");
    
    previousScore = highScore;
    coins = PlayerPrefs.GetInt ("Coins"); 
    Debug.Log ("COINS : " + coins);
    maxAllowedRevives = PlayerPrefs.GetInt ("MaxAllowedRevives", 1);
    usedRevives = 0;
    prevFacebookStatus = PlayerPrefs.GetInt ("FacebookConenct");
    #if UNITY_EDITOR
    score = startScore;
    maxAllowedRevives = -1;
    Debug.Log ("CALLED FIRST");
    coins = 1000;
    #endif
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
  }

  void OnEnable ()
  {
  }

  void OnDestroy ()
  {
    PlayerPrefs.SetInt ("Coins", coins);
    PlayerPrefs.SetInt("numBlackCollision",playerStats.numBlackCollision);
    PlayerPrefs.SetInt ("FacebookConenct", prevFacebookStatus);
    PlayerPrefs.SetInt ("VMode", vMode);
  }
  
  public static class DeviceRotation
  {
    private static bool gyroInitialized = false;
    
    public static bool HasGyroscope {
      get {
        return SystemInfo.supportsGyroscope;
      }
    }
    
    public static Quaternion Get() {
      if (!gyroInitialized) {
        InitGyro();
      }
      
      return HasGyroscope
        ? ReadGyroscopeRotation()
          : Quaternion.identity;
    }
    
    private static void InitGyro() {
      if (HasGyroscope) {
        Input.gyro.enabled = true;                // enable the gyroscope
        Input.gyro.updateInterval = 0.0167f;    // set the update interval to it's highest value (60 Hz)
      }
      gyroInitialized = true;
    }
    
    private static Quaternion ReadGyroscopeRotation() {
      return new Quaternion(0.5f, 0.5f, -0.5f, 0.5f) * Input.gyro.attitude * new Quaternion(0, 0, 1, 0);
    }
  }
  
//  void Update()
//  {
//    Quaternion referenceRotation = Quaternion.identity;
//    Quaternion deviceRotation = DeviceRotation.Get();
//    Quaternion eliminationOfXY = Quaternion.Inverse(Quaternion.FromToRotation(referenceRotation * Vector3.forward,deviceRotation * Vector3.forward));
//    Quaternion rotationZ = eliminationOfXY * deviceRotation;
//    float roll = rotationZ.eulerAngles.z;
//    
//    //Debug.Log ("Orientation : " + roll);
//    
//    var a =  GameObject.Find("Separator");
//    if(a != null)
//    {
//      image = a.GetComponent<Image>();
//    }
//    
//    // TODO : Change that to a cleaner way and different location
//    if(roll > 170.0 && roll < 220.0f)
//    {
//      isFlipped = true;
//      if(image != null)
//      {
//        image.color = Color.red;
//      }
//   
//      Debug.Log("Phone Upside Down");
//    }
//    else
//    {
//      isFlipped = false;
//      image.color = Color.white;
//      Debug.Log("Phone Up");
//    }
//  }

  public void AddPoint ()
  {
    ++score;
    if(isFlipped)
    {
      ++FlippedScore;
    }
    //Debug.Log("Flipped Score " + FillpedScore);

#if !UNITY_EDITOR
    BroadcastMessage (ReportAchievementEvent, new AchievementData ("StillLearning", 100.0f, true));
    
    if (!highScoreCrossed && score > highScore)
    {
      GameManager.inst.ChangeState (GameManager.States.HighScoreCrossed);
      highScoreCrossed = true;
    }
    
    if(FlippedScore > 5)
    {
      BroadcastMessage(ReportAchievementEvent, new AchievementData("AdjustYourView",100.0f,true));
    }
    if(score >= 5)
    {
      BroadcastMessage(ReportAchievementEvent, new AchievementData("ApprenticeSwyper",100.0f, true));
    }
    if(score >= 10)
    {
      BroadcastMessage(ReportAchievementEvent,new AchievementData("MasterSwyperI",100.0f, true));
    }
    if(score >= 15)
    {
      BroadcastMessage(ReportAchievementEvent, new AchievementData("MasterSwyperII",100.0f, true));
    }
    if(score >= 20)
    {
      BroadcastMessage(ReportAchievementEvent, new AchievementData("MasterSwyperIII",100.0f, true));
    }
    if(score >= 30)
    {
      BroadcastMessage(ReportAchievementEvent, new AchievementData("GrandMasterSwyper", 100.0f, true));
    }

    if(playerStats.numBlackCollision >= 100)
    {
      BroadcastMessage(ReportAchievementEvent, new AchievementData("NoMatch", 100.0f,true));
    }
#endif
    
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
    reviveCoinsPrice = initialRevivePrice;
    BroadcastMessage (SubmitScoreEvent);

    isHighScore = CheckHighScore ();
    if (isHighScore)
    {
      previousScore = score;
      if (SubmitHighScoreEvent != null)
      {
        BroadcastMessage (SubmitHighScoreEvent);
        PlayerPrefs.SetInt (leaderBoardId, score);
      }
    }

    highScoreCrossed = false;
    ++numSessions;
  }

  bool CanPurchasePotion (int count)
  {
    if (coins == -1)
    {
      return true;
    }

    return coins >= count ? true : false;
  }

  void OnGameRestart ()
  {
    OnGameReset ();
  }
  
  void OnCompleteRevive ()
  {
    ++usedRevives;
  }

  void OnPurchaseCoins (StoreButton button)
  {
    BroadcastMessage (PurchaseCoinsEvent, button);
  }

  int numItems = 0;

  void OnPurchaseInGameItem (UIManager.InGameBuyButtonData button)
  {
    if (CanPurchasePotion ((int)button.button.price * button.count))
    {
      numItems = button.count;
      switch (button.button.type)
      {
      case InGameBuyButton.ButtonType.Revive:
        GameManager.inst.ChangeState (GameManager.States.BuyRevive);
        break;
      case InGameBuyButton.ButtonType.SlowMotion:
        break;
      }
    }
  }

  void OnBuyRevive ()
  {
    Debug.Log ("BOUGHT REVIVES : " + numItems);
    coins -= reviveCoinsPrice * numItems;
    reviveCoinsPrice += initialRevivePrice;
  }

  void OnAcceptRevive ()
  {
    Debug.Log ("BEFORE : " + coins);
    coins -= reviveCoinsPrice;
    Debug.Log ("AFTER : " + coins);
  }

  void OnSwitchMode (int mode)
  {
    vMode = mode;
    Debug.Log ("SETTING VMODE TO : " + mode);
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
  
  void OnShapeTriggered (ShapeBehavior shape)
  {
    if (shape.shapeResponse == ShapeBehavior.ShapeResponse.Opposite)
    {
      // Increment Black Counter
      playerStats.numBlackCollision++;
      //Debug.Log("NG " + playerStats.numBlackCollision);
    }
  }
}
