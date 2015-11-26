using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using BadassProjects.StateMachine;

public class GameManager : StateBehaviour
{

  public enum States
  {
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
    GameOver,
    FirstBeat,
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
  public string ActivateEvent = "OnResume";
  public string UnPauseEvent = "OnUnPause";
  public string FirstBeatEvent = "OnFirstBeat";
  
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
  }
  
  // Use this for initialization
  void Start ()
  {
  }
  
  void OnApplicationPause (bool pause)
  {
    if (pause)
    {
      BroadcastMessage (PauseEvent);
    }
    else
    {
      BroadcastMessage (ActivateEvent);
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
    BroadcastMessage (ShowReiviveEvent);
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
  }
  
  private void HighScoreCrossed_Exit ()
  {
  
  }
  
  private void Pause_Enter ()
  {
  
  }
  
  private void Pause_Exit ()
  {
  
  }
  
  private void UnPause_Enter ()
  {
  
  }
  
  private void UnPause_Exit ()
  {
  
  }
  
  void FirstBeat_Enter ()
  {
    BroadcastMessage (FirstBeatEvent);
    ChangeState (States.Playing);
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
    
    BroadcastMessage (ShowReiviveEvent);
  }

}
