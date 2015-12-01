﻿using UnityEngine;
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
    ReviveComplete,
    ShowOptions,
    HideOptions,
    ShowStore,
    HideStore,
    GameOver,
    FirstBeat,
    PurchaseCoins,
    PurchasePotion,
    FacebookConnect,
    ShowFacebookLeaderboard,
    HideFacebookLeaderboard,
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
  public string CompleteReviveEvent = "OnCompleteRevive";
  
  public string ShowReiviveEvent = "OnShowRevive";
  public string DeclineReviveEvent = "OnDeclineRevive";
  public string AcceptReviveEvent = "OnAcceptRevive";
  
  public string GameOverEvent = "OnGameOver";
  public string HighScoreEvent = "OnHighScore";
  public string HighScoreCrossEvent = "OnHighScoreCross";
  public string PauseEvent = "OnPause";
  public string ResumeEvent = "OnResume";
  public string UnPauseEvent = "OnUnPause";
  public string FirstBeatEvent = "OnFirstBeat";
  public string ShowOptionsEvent = "OnShowOptions";
  public string HideOptionsEvent = "OnHideOptions";
  public string ShowStoreEvent = "OnShowStore";
  public string HideStoreEvent = "OnHideStore";
  public string PurchaseCoinsEvent = "OnPurchaseCoins";
  public string PurchasePotionEvent = "OnPurchasePotion";
  public string FacebookConnectEvent = "OnFacebookConnect";
  public string ShowFacebookLeaderboardEvent = "OnShowFacebookLeaderboard";
  public string HideFacebookLeaderboardEvent = "OnHideFacebookLeaderboard";
  
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
      played = true;
      BroadcastMessage (GameStartEvent);
      ChangeState (States.Playing);
    }
    else
    {
      ChangeState (States.Replay);
    }
  }
  
  private void Play_Exit ()
  {
  }
  
  private void Replay_Enter ()
  {
    BroadcastMessage (GameRestartEvent);
    BroadcastMessage (GameStartEvent);
    ChangeState (States.Playing);
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
    StartCoroutine (CameraShake ());
  }
  
  private void Stop_Exit ()
  {
  
  }
  
  private void ShowRevive_Enter ()
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
  
  private void ReviveComplete_Enter ()
  {
    BroadcastMessage (CompleteReviveEvent);
    ChangeState (States.Playing);
  }
  
  private void GameOver_Enter ()
  {
    BroadcastMessage (GameOverEvent);
    
    if (StatsManager.inst.isHighScore)
    {
      BroadcastMessage (HighScoreEvent);
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
  }

  void ShowFacebookLeaderboard_Enter ()
  {
    BroadcastMessage (ShowFacebookLeaderboardEvent);
  }

  void HideFacebookLeaderboard_Enter ()
  {
    BroadcastMessage (HideFacebookLeaderboardEvent);
  }

  void PurchaseItem (StoreButton button)
  {
    Debug.Log ("Purchasing Item : " + button.title.text);
    Debug.Log ("Currency Type : " + button.currencyType);

    switch (button.currencyType)
    {
    case StoreButtonList.CurrencyType.Coins:
      BroadcastMessage (PurchasePotionEvent, button, SendMessageOptions.DontRequireReceiver);
      break;
    case StoreButtonList.CurrencyType.Money:
      BroadcastMessage (PurchaseCoinsEvent, button, SendMessageOptions.DontRequireReceiver);
      break;
    }
  }

  private float duration = 0.3f;
  private float magnitude = 0.07f;

  private IEnumerator CameraShake ()
  {
    float elapsed = 0.0f;
    
    Vector3 originalCamPos = Camera.main.transform.position;
    
    while (elapsed < duration)
    {
      elapsed += Time.deltaTime;          
      
      float percentComplete = elapsed / duration;         
      float damper = 1.0f - Mathf.Clamp (4.0f * percentComplete - 3.0f, 0.0f, 1.0f);
      
      // map value to [-1, 1]
      float x = Random.value * 2.0f - 1.0f;
      float y = Random.value * 2.0f - 1.0f;
      x *= magnitude * damper;
      y *= magnitude * damper;
      
      Camera.main.transform.position = new Vector3 (x, y, originalCamPos.z);
      
      yield return null;
    }
    
    Camera.main.transform.position = originalCamPos;
    playing = false;
    
    ChangeState (States.ShowRevive);
  }

}
