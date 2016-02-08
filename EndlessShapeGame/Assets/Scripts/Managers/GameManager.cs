using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using BadassProjects.StateMachine;

public class GameManager : StateBehaviour
{

  public enum States
  {
    None,
    Play,
    Stop,
    Replay,
    Playing,
    Pause,
    Resume,
    UnPause,
    HighScore,
    HighScoreCrossed,
    ShowRevive,
    DeclineRevive,
    AcceptRevive,
    ReviveCompleteStart,
    ReviveCompleteEnd,
    ShowOptions,
    HideOptions,
    ShowStore,
    HideStore,
    GameOver,
    FirstBeat,
    PurchaseCoins,
    PurchasePotion,
    BuyRevive,
    BoughtRevive,
    BoughtCoins,
    FacebookConnect,
    TryShowFacebookLeaderboard,
    ShowFacebookLeaderboard,
    HideFacebookLeaderboard,
    TryRestorePurchase,
    RestorePurchaseComplete,
    RemoveAds,
    SwitchMode,
    TutorialStart,
    TutorialRevive,
    ShowTutorialRevive,
  }

  public enum DifficultyLevel
  {
    Easy,
    Normal,
    Hard,
  }

  public enum SpeedLevel
  {
    Slow,
    Normal,
    Fast,
  }

  public enum GameMode
  {
    Classic,
    Tetris,
  }

  [System.Serializable]
  public class GameSettings
  {
    public DifficultyLevel dificultyLevel;
    public SpeedLevel speedLevel;
    public GameMode gameMode;
    public bool showAds;
  }

  // Public Members
  public GameSettings gameSettings;
  public int sessionsPerAdRequest = 4;

  public bool played
  {
    get;
    private set;
  }

  public bool playing
  {
    get;
    private set;
  }

  public GameSettings previousGameSettings;
  
  public string GameResetEvent = "OnGameReset";
  public string GameStartEvent = "OnGameStart";
  public string GameRestartEvent = "OnGameRestart";
  public string GameStopEvent = "OnGameStop";
  public string ReviveCompleteStartEvent = "OnReviveCompleteStart";
  public string ReviveCompleteEndEvent = "OnReviveCompleteEnd";
  
  public string ShowReiviveEvent = "OnShowRevive";
  public string DeclineReviveEvent = "OnDeclineRevive";
  public string AcceptReviveEvent = "OnAcceptRevive";
  
  public string GameOverEvent = "OnGameOver";
  public string HighScoreEvent = "OnHighScore";
  public string HighScoreCrossEvent = "OnHighScoreCross";
  public string NoHighScoreEvent = "OnNoHighScore";
  public string PauseEvent = "OnPause";
  public string ResumeEvent = "OnResume";
  public string UnPauseEvent = "OnUnPause";
  public string FirstBeatEvent = "OnFirstBeat";
  public string ShowOptionsEvent = "OnShowOptions";
  public string HideOptionsEvent = "OnHideOptions";
  public string ShowStoreEvent = "OnShowStore";
  public string HideStoreEvent = "OnHideStore";
  public string PurchaseCoinsEvent = "OnPurchaseCoins";
  public string PurchaseInGameItemEvent = "OnPurchaseInGameItem";
  public string CannotPurchaseInGameItemEvent = "OnCannotPurchaseInGameItem";
  public string AddInGameItemEvent = "OnAddInGameItem";
  public string SubtractInGameItemEvent = "OnSubtractInGameItem";
  public string FacebookConnectEvent = "OnFacebookConnect";
  public string TryShowFacebookLeaderboardEvent = "OnTryShowFacebookLeaderboard";
  public string ShowFacebookLeaderboardEvent = "OnShowFacebookLeaderboard";
  public string HideFacebookLeaderboardEvent = "OnHideFacebookLeaderboard";
  public string TryRestorePurchaseEvent = "OnTryRestorePurchase";
  public string RestorePurchaseCompleteEvent = "OnRestorePurchaseComplete";
  public string InvertColorEvent = "OnInvertColor";
  public string SwitchModeEvent = "OnSwitchMode";
  public string BuyReviveEvent = "OnBuyRevive";
  public string BoughtReviveEvent = "OnBoughtRevive";
  public string BoughtProductEvent = "OnBoughtProduct";
  public string BoughtCoinsEvent = "OnBoughtCoins";
  public string PreTutorialStartEvent = "OnPreTutorialStart";
  public string TutorialStartEvent = "OnTutorialStart";
  public string TutorialEndEvent = "OnTutorialEnd";
  public string PreTutorialReviveStartEvent = "OnPreTutorialReviveStart";
  public string TutorialReviveStartEvent = "OnTutorialReviveStart";
  public string TutorialReviveEndEvent = "OnTutorialReviveEnd";
  public string ShowReadyMessageEvent = "OnShowReadyMessage";
  public string ShowTutorialReviveEvent = "OnShowTutorialRevive";
  public string ShowSwitchToDiamondStorePromptEvent = "OnShowSwitchToDiamondStorePrompt";
  public string ShowBuyPotionPromptEvent = "OnShowBuyPotionPrompt";
  public string ShowBuyDiamondPromptEvent = "OnShowBuyDiamondPrompt";
  public string TutorialReviveDoneEvent = "OnTutorialReviveDone";
  public string ShowVideoEvent = "OnShowVideo";
  public string EndVideoEvent = "OnEndVideo";
  public string RemoveAdsEvent = "OnRemoveAds";
  
  [System.Obsolete]
  public string DifficultyChangeEvent = "OnDifficultyChange";
  [System.Obsolete]
  public string SpeedChangeEvent = "OnSpeedChange";

  static public GameManager inst
  {
    get;
    private set;
  }

  // Private Members
  GameManager ()
  {
    if (inst == null)
    {
      inst = this;
      played = false;
      playing = false;
      previousGameSettings = gameSettings;
    }
    else
    {
      GameObject.Destroy (gameObject);
    }
  }
  
  void Awake ()
  {
#if !UNITY_EDITOR
    Application.targetFrameRate = 60;
#endif
    Debug.Log ("QUALITY LEVEL : " + QualitySettings.GetQualityLevel ());

    Initialize <States> ();
    
    Debug.Log ("Device Name : " + SystemInfo.deviceName);
    Debug.Log ("Device Model : " + SystemInfo.deviceModel);

    ChangeState (States.None);
  }
  
  // Use this for initialization
  void Start ()
  {
  }
  
  void OnApplicationPause (bool pause)
  {
    Debug.Log ("Game State : " + GetState ());
    
    if ((States)GetState () == (States.Playing) || (States)GetState () == (States.Pause) || (States)GetState () == (States.Resume))
    {
      if (pause)
      {
        ChangeState (States.Pause);
      }
      else
      {
        ChangeState (States.Resume);
      }
    }
  }

  [System.Obsolete ("Difficulty Modes Not Supported Anymore. Single Difficulty Mode")]
  public void ChangeDifficulty (int difficulty)
  {
    previousGameSettings.dificultyLevel = gameSettings.dificultyLevel;
    gameSettings.dificultyLevel = (DifficultyLevel) difficulty;

    BroadcastMessage (DifficultyChangeEvent);
  }

  [System.Obsolete ("Speed Modes Not Supported Anymore. Single Speed Mode")]
  public void ChangeSpeed (int speed)
  {
    previousGameSettings.speedLevel = gameSettings.speedLevel;
    gameSettings.speedLevel = (SpeedLevel) speed;

    BroadcastMessage (SpeedChangeEvent);
  }
  
  // Only Called From UI Button
  public void PlayGame ()
  {
    ChangeState (States.Play);
  }
  
  private void Play_Enter ()
  {
    if (playing)
    {
      return;
    }
    
    playing = true;
  
    if (!played)
    {
      if (StatsManager.inst.playerStats.numGames == 0)
      {
        ChangeState (States.TutorialStart);
      }
      else
      {
        played = true;
        BroadcastMessage (GameStartEvent);
        StartPlay ();
      }
    }
    else
    {
      ChangeState (States.Replay);
    }
  }
  
  private void Play_Exit ()
  {
  }

  private void StartPlay ()
  {
    ChangeState (States.Playing);
  }

  bool showingHowToPlayTutorial = false;
  bool showingReviveTutorial = false;

  public GameObject tutorialPrefab;

  private IEnumerator TutorialStart_Enter ()
  {
    played = true;
    showingHowToPlayTutorial = true;

    Debug.Log ("Starting Tutorial");
    GameObject go = GameObject.Instantiate (tutorialPrefab) as GameObject;

    // Create Trigger
    BroadcastMessage (PreTutorialStartEvent);
    BroadcastMessage (GameStartEvent);
//    yield return new WaitForSeconds (1.6f);

    while (showingHowToPlayTutorial)
    {
      yield return null;
    }

    Destroy (go);

    showingHowToPlayTutorial = true;

    PlayerManager.inst.player.SwipeEvent += HandleSwipeEvent;
    BroadcastMessage (TutorialStartEvent);

    // Show the tutorial here
    while (showingHowToPlayTutorial)
    {
      yield return null;
    }

    showingHowToPlayTutorial = true;
    PlayerManager.inst.player.SwipeEvent -= HandleSwipeEvent;
    BroadcastMessage (ShowReadyMessageEvent);

    yield return new WaitForSeconds (1.0f);

    BroadcastMessage (TutorialEndEvent);

    StartPlay ();
  }

  void OnTutorialShapeTriggered ()
  {
    showingHowToPlayTutorial = false;
  }

  void HandleSwipeEvent (object sender, System.EventArgs e)
  {
    if (PlayerManager.inst.player.Ready () && ShapeManager.inst.PredictCollision ())
    {
      showingHowToPlayTutorial = false;
    }
  }
  
  private void Replay_Enter ()
  {
    BroadcastMessage (GameRestartEvent);
    BroadcastMessage (GameStartEvent);
    StartPlay ();
  }
  
  private void Replay_Exit ()
  {
  }
  
  private void Playing_Enter ()
  {
    playing = true;
    
    Debug.Log ("Started Playing");
  }
  
  private void Playing_Exit ()
  {
    playing = false;
    
    Debug.Log ("Stopped Playing");
  }
  
  private void Stop_Enter ()
  {
    playing = false;
    BroadcastMessage (GameStopEvent);
  }
  
  private void Stop_Exit ()
  {
  
  }

  private bool shownReviveTutorial = false;

  private void ShowRevive_Enter ()
  {
    if (StatsManager.inst.playerStats.numGames == 0 && !shownReviveTutorial)
    {
      Debug.Log ("TUTORIAL REVIVE");
      shownReviveTutorial = true;
      ChangeState (States.TutorialRevive);
    }
    else
    {
      if (StatsManager.inst.canShowRevive)
      {
        BroadcastMessage (ShowReiviveEvent);
      }
      else
      {
        ChangeState (States.DeclineRevive);
      }
    }
  }

  private void ShowTutorialRevive_Enter ()
  {
    BroadcastMessage (ShowTutorialReviveEvent);
  }

  private IEnumerator TutorialRevive_Enter ()
  {
    showingReviveTutorial = true;
    BroadcastMessage (PreTutorialReviveStartEvent);
    BroadcastMessage (TutorialReviveStartEvent);

    while (showingReviveTutorial)
    {
      yield return null;
    }

    showingReviveTutorial = true;
    BroadcastMessage (TutorialReviveEndEvent);

//    while (showingReviveTutorial)
//    {
//      yield return null;
//    }

//    foreach (var button in GameObject.FindObjectsOfType <Button> ())
//    {
//      button.interactable = false;
//    }
//
//    showingReviveTutorial = true;
//    BroadcastMessage (ShowSwitchToDiamondStorePromptEvent);
//
//    while (showingReviveTutorial)
//    {
//      yield return null;
//    }
//
//    Debug.Log ("SWITCH TO DIAMOND");
//
//    showingReviveTutorial = true;
//
//    BroadcastMessage (ShowBuyDiamondPromptEvent);
//
//    while (showingReviveTutorial)
//    {
//      yield return null;
//    }
//
//    Debug.Log ("SHOWING BUY DIAMOND");
//
//    BroadcastMessage (ShowBuyPotionPromptEvent);
//    showingReviveTutorial = true;
//
//    while (showingReviveTutorial)
//    {
////      Debug.Log ("SSM");
//      yield return null;
//    }
//
//    BroadcastMessage (TutorialReviveDoneEvent);
  }

  private void OnStoreFadeIn ()
  {
    if (showingReviveTutorial)
    {
      showingReviveTutorial = false;
    }
  }

  private void OnSwitchStore (int store)
  {
    if (showingReviveTutorial)
    {
      showingReviveTutorial = false;
//      if (store == (int)UIManager.StoreType.Diamonds)
//      {
//        showingReviveTutorial = false;
//      }
//      else if (store == (int)UIManager.StoreType.Potions)
//      {
//        showingReviveTutorial = false;
//      }
    }
  }

  private void OnBuyRevive ()
  {
    if (showingReviveTutorial)
    {
      showingReviveTutorial = false;

      foreach (var v in GameObject.FindObjectsOfType <Button> ())
      {
        v.interactable = true;
      }
    }
  }

  private void TutorialReviveDone ()
  {
    showingReviveTutorial = false;
  }

  private void ShowRevive_Exit ()
  {
  
  }
  
  private void DeclineRevive_Enter ()
  {
    BroadcastMessage (DeclineReviveEvent);
    ChangeState (States.GameOver);
  }
  
  private void DeclineRevive_Exit ()
  {
  
  }
  
  private void AcceptRevive_Enter ()
  {
    BroadcastMessage (AcceptReviveEvent);
  }
  
  private void AcceptRevive_Exit ()
  {
  
  }
  
  private void ReviveCompleteStart_Enter ()
  {
    BroadcastMessage (ReviveCompleteStartEvent);
//    ChangeState (States.Playing);
  }

  private void ReviveCompleteEnd_Enter ()
  {
    BroadcastMessage (ReviveCompleteEndEvent);
    //    ChangeState (States.Playing);
  }

  private void GameOver_Enter ()
  {
    BroadcastMessage (GameOverEvent);
    
    if (StatsManager.inst.isHighScore)
    {
      BroadcastMessage (HighScoreEvent);
    }
    else
    {
      BroadcastMessage (NoHighScoreEvent);
    }
  }
  
  private void GameOver_Exit ()
  {
  
  }
  
  private void HighScore_Enter ()
  {
    BroadcastMessage (HighScoreEvent);
  }
  
  private void HighScore_Exit ()
  {
  
  }
  
  private void HighScoreCrossed_Enter ()
  {
    BroadcastMessage (HighScoreCrossEvent);
    ChangeState (States.Playing);
  }
  
  private void HighScoreCrossed_Exit ()
  {
  
  }
  
  private void Pause_Enter ()
  {
    BroadcastMessage (PauseEvent);
  }
  
  private void Pause_Exit ()
  {
    playing = true;
  }
  
  private void Resume_Enter ()
  {
    BroadcastMessage (ResumeEvent);
  }
  
  private void UnPause_Enter ()
  {
    BroadcastMessage (UnPauseEvent);
    ChangeState (States.Playing);
  }
  
  private void UnPause_Exit ()
  {
  
  }
  
  void FirstBeat_Enter ()
  {
    BroadcastMessage (FirstBeatEvent);
    ChangeState (States.Playing);
  }
  
  void ShowOptions_Enter ()
  {
    BroadcastMessage (ShowOptionsEvent);
  }
  
  void HideOptions_Enter ()
  {
    BroadcastMessage (HideOptionsEvent);
  }
  
  void ShowStore_Enter ()
  {
    BroadcastMessage (ShowStoreEvent);
  }
  
  void HideStore_Enter ()
  {
    BroadcastMessage (HideStoreEvent);
  }

  void FacebookConnect_Enter ()
  {
    BroadcastMessage (FacebookConnectEvent);
    ChangeState (States.None);
  }

  void TryShowFacebookLeaderboard_Enter ()
  {
    BroadcastMessage (TryShowFacebookLeaderboardEvent);
  }

  void ShowFacebookLeaderboard_Enter ()
  {
    BroadcastMessage (ShowFacebookLeaderboardEvent);
  }

  void HideFacebookLeaderboard_Enter ()
  {
    BroadcastMessage (HideFacebookLeaderboardEvent);
  }

  void TryRestorePurchase_Enter ()
  {
    BroadcastMessage (TryRestorePurchaseEvent);
  }

  void RestorePurchaseComplete_Enter ()
  {
    BroadcastMessage (RestorePurchaseCompleteEvent);
  }

  void BuyRevive_Enter ()
  {
    BroadcastMessage (BuyReviveEvent);
  }

  void BoughtRevive_Enter ()
  {
    BroadcastMessage (BoughtReviveEvent);
  }

  void RemoveAds_Enter ()
  {
    BroadcastMessage (RemoveAdsEvent);
  }

  void BoughtCoins_Enter ()
  {
    BroadcastMessage (BoughtCoinsEvent);
//    ChangeState (States.None);
  }

  void PurchaseItem (StoreButton button)
  {
    Debug.Log ("Purchasing Item : " + button.title.text);
    Debug.Log ("Currency Type : " + button.currencyType);

    BroadcastMessage (PurchaseCoinsEvent, button, SendMessageOptions.DontRequireReceiver);
  }

  // TODO
//  void PurchaseInGameItem (UIManager.InGameBuyButtonData button)
//  {
//    BroadcastMessage (PurchaseInGameItemEvent, button, SendMessageOptions.DontRequireReceiver);
//  }

  void CannotPurchaseInGameItem ()
  {
    BroadcastMessage (CannotPurchaseInGameItemEvent);
  }

  void AddInGameItem (InGameBuyButton button)
  {
    BroadcastMessage (AddInGameItemEvent, button, SendMessageOptions.DontRequireReceiver);
  }

  void SubtractInGameItem (InGameBuyButton button)
  {
    BroadcastMessage (SubtractInGameItemEvent, button, SendMessageOptions.DontRequireReceiver);
  }

  void BuyProduct (string name)
  {
    BroadcastMessage (BoughtProductEvent, name);
  }

  void SwitchMode (int mode)
  {
    Debug.Log ("GAME MANAGER SWITCH MODE : " + mode);
    BroadcastMessage (SwitchModeEvent, mode);
  }

}
