using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;

using UnityEngine.UI;
using TheNextFlow.UnityPlugins;


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

  public class RewardData
  {
    public string name;
    public int value;
  }

  [System.Serializable]
  public class PlayerStats
  {
    public int highScore { get; set; }
    public int numBlackCollision { get; set; }
    public int numGames { get; set; }
  }

  public delegate void BuyProductDel (int a);

  public class ProductData
  {
    public ProductData (int c, BuyProductDel d)
    {
      count = c;
      callback = d;
    }
    public int count;
    public BuyProductDel callback;
  }

  // TODO
  //  public Dictionary <InGameBuyButton.ButtonType, int> gameItems = new Dictionary<InGameBuyButton.ButtonType, int> ()
  //  {
  //    { InGameBuyButton.ButtonType.Revive, 0 },
  //    { InGameBuyButton.ButtonType.SlowMotion, 1 },
  //  };


  public Dictionary <string, ProductData> productActions = new Dictionary<string, ProductData> ();

  #if UNITY_EDITOR
  public int startScore = 0;
  #endif

  public PlayerStats playerStats;
  public int FlippedScore = 0;
  public bool isFlipped = false;

  public int numRevivePotions = 0;
  public int numSlowMotionPotions = 0;
  public int prevFacebookStatus = 0;

  public int reviveCoinsPrice = 150;
  public Color defaultBackgroundColor;

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
  /// Returns whether ads can be shown
  /// </summary>
  /// <value><c>true</c> if show ads; otherwise, <c>false</c>.</value>
  public int showAds { get; private set; }
  public int showRateUs { get; private set; }
  /// <summary>
  /// Returns whether this session is 1st session after launching game
  /// </summary>
  public bool firstSession { get; private set; }
  public int numSessions { get; private set; }
  public Color backgroundColor { get; private set; }
  public Vector2 wheelPosition { get; private set; }

  public int originalRevivePrice { get; private set; }

  public bool canShowRevive
  {
    get
    {
      return true;
    }
  }

  public bool canUseRevive
  {
    get
    {
      //      if (gameItems [InGameBuyButton.ButtonType.Revive] > 0)
      //      {
      //        return true;
      //      }

      return coins >= reviveCoinsPrice ? true : false;
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
  public string RemoveAdsEvent { get { return "TryRemoveAds"; } }
  public string StoreInfoEvent { get { return "OnStoreInfo"; } }
  #endregion 

  private int previousScore { get; set; }
  private bool highScoreCrossed { get; set; }

  public int vMode = 0;

  #if UNITY_IOS
  private GameCenterInterface store { get; set; }
  #elif UNITY_ANDROID
  private GooglePlayInterface store { get; set; }
  #endif

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
    vMode = PlayerPrefs.GetInt ("VMode");

    GameManager.inst.BroadcastMessage ("OnLoadVMode", vMode);

    Debug.Log ("Leaderboard ID: " + leaderBoardId);
    Debug.Log ("Data Path: " + Application.dataPath);
    Debug.Log ("Persistent Data Path: " + Application.persistentDataPath);
    playerStats.numBlackCollision = PlayerPrefs.GetInt("NumBlackCollision");
    playerStats.numGames = PlayerPrefs.GetInt ("NumGames");

    previousScore = highScore;
    coins = PlayerPrefs.GetInt ("Coins"); 
    Debug.Log ("COINS : " + coins);
    showAds = PlayerPrefs.GetInt ("ShowAds", 1);
    Debug.Log ("SHOW ADS : " + (showAds != 0));
    showRateUs = PlayerPrefs.GetInt ("ShowRateUs", 1);

    prevFacebookStatus = PlayerPrefs.GetInt ("FacebookConenct");


    // TODO
    //    for (int i = 0; i < (int)InGameBuyButton.ButtonType.NumTypes; ++i)
    //    {
    //      gameItems [(InGameBuyButton.ButtonType)i] = PlayerPrefs.GetInt ("Item" + i);
    //      Debug.Log ("NUMBER OF ITEMS FOR " + i + "" + gameItems [(InGameBuyButton.ButtonType)i]);
    //    }

    #if UNITY_EDITOR
    score = startScore;
    coins = 1000;
    #endif

    #if UNITY_IOS
    store = gameObject.AddComponent <GameCenterInterface> ();
    #elif UNITY_ANDROID
    store = gameObject.AddComponent <GooglePlayInterface> ();
    #endif

    originalRevivePrice = reviveCoinsPrice;

    productActions.Add ("100 Diamonds", new ProductData (100, BuyDiamonds));
  }

  // Use this for initialization
  void Start ()
  {
    LoadBackgroundColor ();

    if (playerStats.numGames == 0)
    {
      coins = 100;
      UIManager.inst.SendMessage ("UpdateCoinsText", SendMessageOptions.DontRequireReceiver);
    }
  }

  void OnEnable ()
  {
  }

  void OnDestroy ()
  {
    PlayerPrefs.SetInt ("Coins", coins);
    PlayerPrefs.SetInt ("ShowAds", showAds);
    PlayerPrefs.SetInt ("ShowRateUs", showRateUs);
    PlayerPrefs.SetInt("NumBlackCollision",playerStats.numBlackCollision);
    if (GameManager.inst.played)
    {
      PlayerPrefs.SetInt ("NumGames", playerStats.numGames + 1);
    }
    else
    {
      PlayerPrefs.SetInt ("NumGames", playerStats.numGames);
    }
    PlayerPrefs.SetInt ("FacebookConenct", prevFacebookStatus);
    PlayerPrefs.SetInt ("VMode", vMode);

    SaveBackgroundColor ();

    // TODO
    //    for (int i = 0; i < (int)InGameBuyButton.ButtonType.NumTypes; ++i)
    //    {
    //      PlayerPrefs.SetInt ("Item" + i, gameItems [(InGameBuyButton.ButtonType)i]);
    //    }
  }

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

  public string GetPrice (StoreButton product)
  {
    #if !UNITY_EDITOR
    Debug.Log (store.GetPrice (product.title.text));
    if (store != null && product.currencyType != StoreButtonList.CurrencyType.Ads)
    {
    var p = store.GetPrice (product.title.text);
    return p == "" ? product.defaultPriceText : p;
    }
    else
    {
    return "Watch Video";
    }
    #else
    return product.defaultPriceText;
    #endif

  }

  public void SetHighScoreSilent (int hs)
  {
    PlayerPrefs.SetInt (leaderBoardId, hs);
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
    BroadcastMessage (SubmitScoreEvent, SendMessageOptions.DontRequireReceiver);

    isHighScore = CheckHighScore ();
    Debug.Log ("HIGH SCORE : " + isHighScore);
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
    reviveCoinsPrice = originalRevivePrice;
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

  void OnReviveCompleteStart ()
  {
    //    --gameItems [InGameBuyButton.ButtonType.Revive];
    coins -= reviveCoinsPrice;
    reviveCoinsPrice *= 2;
  }

  void OnPurchaseCoins (StoreButton button)
  {
    if (button.currencyType == StoreButtonList.CurrencyType.Ads)
    {
      GameManager.inst.BroadcastMessage ("OnShowVideo");
    }
    else
    {
      BroadcastMessage (PurchaseCoinsEvent, button);
    }
  }

  // TODO
  //  int numItems = 0;
  //  int price = 0;

  // TODO
  //  void OnPurchaseInGameItem (UIManager.InGameBuyButtonData button)
  //  {
  //    if (CanPurchasePotion ((int)button.button.price * button.count))
  //    {
  //      numItems = button.count;
  //      price = button.button.price;
  //      switch (button.button.type)
  //      {
  //      case InGameBuyButton.ButtonType.Revive:
  //        GameManager.inst.ChangeState (GameManager.States.BuyRevive);
  //        break;
  //      case InGameBuyButton.ButtonType.SlowMotion:
  //        break;
  //      }
  //    }
  //    else
  //    {
  //      GameManager.inst.BroadcastMessage ("CannotPurchaseInGameItem");
  //    }
  //  }

  // TODO
  //  void OnBuyRevive ()
  //  {
  //    Debug.Log ("BOUGHT REVIVES : " + numItems);
  //    coins -= price * numItems;
  //    gameItems [InGameBuyButton.ButtonType.Revive] += numItems;
  //
  //    GameManager.inst.ChangeState (GameManager.States.BoughtRevive);
  //  }

  void OnProductsLoaded (Dictionary <string, StoreInterface.ProductTemplate> products)
  {
    foreach (var v in products)
    {
      productActions.Add (v.Value.DisplayName, null);
    }

    productActions ["500 Diamonds"] = new ProductData (500, BuyDiamonds);
    productActions ["1200 Diamonds"] = new ProductData (1200, BuyDiamonds);
    productActions ["3000 Diamonds"] = new ProductData (3000, BuyDiamonds);
    productActions ["7500 Diamonds"] = new ProductData (7500, BuyDiamonds);
    productActions ["21000 Diamonds"] = new ProductData (21000, BuyDiamonds);
    productActions ["Remove Ads"] = new ProductData (0, RemoveAdsComplete);
  }

  void BuyDiamonds (int a)
  {
    coins += a;
    GameManager.inst.ChangeState (GameManager.States.BoughtCoins);
    BroadcastMessage (StoreInfoEvent, "c_" + coins.ToString ());
  }

  void RemoveAdsComplete (int dummy)
  {
    showAds = 0;
  }

  void OnBoughtProduct (string name)
  {
    if (productActions.ContainsKey (name))
    {
      productActions [name].callback (productActions[name].count);
    }
  }

  void OnRewardCompleted (string name)
  {
    Debug.Log ("Reward Name Received : " + name);
    if (productActions.ContainsKey (name))
    {
      productActions [name].callback (productActions [name].count);
    }
  }

  void OnAcceptRevive ()
  {
  }

  void OnSwitchMode (int mode)
  {
    vMode = mode;
    Debug.Log ("SETTING VMODE TO : " + mode);
  }

  void OnShowBuyPotionPrompt ()
  {
    foreach (var igb in GameObject.FindObjectsOfType <InGameBuyButton> ())
    {
      if (igb.type == InGameBuyButton.ButtonType.Revive)
      {
        BuyDiamonds (igb.price);
        break;
      }
    }
  }

  void OnRestoreCoinsFromInfo (int coinCount)
  {
    Debug.Log ("RECEIVED RESTORED COINS " + coinCount);
    BuyDiamonds(coinCount);
  }

  void OnRemoveAds ()
  {
    if (showAds != 0)
    {
      BroadcastMessage (RemoveAdsEvent);
    }
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

//  void OnShapeTriggered (ShapeBehavior shape)
//  {
//    if (shape.shapeResponse == ShapeBehavior.ShapeResponse.Opposite)
//    {
//      // Increment Black Counter
//      playerStats.numBlackCollision++;
//      //Debug.Log("NG " + playerStats.numBlackCollision);
//    }
//  }

  void OnSetBackgroundColor (ColorWheel.ColorWheelData color)
  {
    backgroundColor = color.color;
    wheelPosition = color.wheelPosition;
  }

  void OnShowRateUsPopup ()
  {
    if (showRateUs == 1)
    {
      MobileNativePopups.OpenAlertDialog(
        "Rate Just Flick", "If you enjoy playing this game, would you mind taking a moment to rate it? Thanks for your support!",
        "No, Thanks", "Remind me later", "Rate!",
        () => { Debug.Log("User is a dick"); },
        () => { Debug.Log("User will rate later"); },
        () =>
          {
            Debug.Log("User rated");
            ShowRateUsDialog ();
            showRateUs = 0;
          });
//      MobileNativeRateUs ratePopUp = new MobileNativeRateUs("Like this game?", "Please rate to " +
//        "support future updates!");
//      ratePopUp.OnComplete = OnRateUsFeedback;
//
//      #if UNITY_IOS
//      ratePopUp.SetAppleId (IOSNativeSettings.Instance.AppleId);
//      #elif UNITY_ANDROID
//      #endif
    }
  }

  public void ShowRateUsDialog ()
  {
    #if UNITY_IOS
    AppstoreHandler.Instance.openAppInStore (IOSNativeSettings.Instance.AppleId);
    #elif UNITY_ANDROID
    AppstoreHandler.Instance.openAppInStore (AndroidNativeSettings.Instance.GooglePlayServiceAppID);
    #endif
  }

//  void OnRateUsFeedback (MNDialogResult res)
//  {
//    if (res == MNDialogResult.RATED)
//      showRateUs = 0;
//  }

  void LoadBackgroundColor ()
  {
    float r, g, b, x, y;
    r = PlayerPrefs.GetFloat ("bg.r", defaultBackgroundColor.r);
    g = PlayerPrefs.GetFloat ("bg.g", defaultBackgroundColor.g);
    b = PlayerPrefs.GetFloat ("bg.b", defaultBackgroundColor.b);

    x = PlayerPrefs.GetFloat ("wheel.x");
    y = PlayerPrefs.GetFloat ("wheel.y");
    wheelPosition = new Vector2 (x, y);

    backgroundColor = new Color (r, g, b);
    GameManager.inst.BroadcastMessage ("OnLoadBackgroundColor", new ColorWheel.ColorWheelData (wheelPosition, backgroundColor));
  }

  void SaveBackgroundColor ()
  {
    PlayerPrefs.SetFloat ("bg.r", backgroundColor.r);
    PlayerPrefs.SetFloat ("bg.g", backgroundColor.g);
    PlayerPrefs.SetFloat ("bg.b", backgroundColor.b);

    PlayerPrefs.SetFloat ("wheel.x", wheelPosition.x);
    PlayerPrefs.SetFloat ("wheel.y", wheelPosition.y);
  }
}