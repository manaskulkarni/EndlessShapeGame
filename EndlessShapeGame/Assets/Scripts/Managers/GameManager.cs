﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameManager : MonoBehaviour
{

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

  private List <Manager> managers
  {
    get;
    set;
  }

  public GameSettings previousGameSettings;
  
  public event System.EventHandler GameResetEvent;
  public event System.EventHandler GameStartEvent;
  public event System.EventHandler GameRestartEvent;
  public event System.EventHandler GameOverEvent;
  public event System.EventHandler HighScoreEvent;
  public event System.EventHandler HighScoreCrossEvent;
  public event System.EventHandler PauseEvent;
  public event System.EventHandler ResumeEvent;
  public event System.EventHandler UnPauseEvent;
  
  [System.Obsolete]
  public event System.EventHandler DifficultyChangeEvent;
  [System.Obsolete]
  public event System.EventHandler SpeedChangeEvent;

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
      managers = new List<Manager>();
      previousGameSettings = gameSettings;
    }
    else
    {
      GameObject.Destroy (gameObject);
    }
  }
  
  void Awake ()
  {
  }
  
  // Use this for initialization
  void Start ()
  {
    foreach (var v in GameObject.FindObjectsOfType<Manager> ())
    {
      v.RegisterToEvents();
    }
  }
  
  void OnApplicationPause (bool pause)
  {
    if (pause)
    {
      EventManager.SendEvent (this, PauseEvent, null);
    }
    else
    {
      EventManager.SendEvent (this, ResumeEvent, null);
    }
  }

  [System.Obsolete ("Difficulty Modes Not Supported Anymore. Single Difficulty Mode")]
  public void ChangeDifficulty (int difficulty)
  {
    previousGameSettings.dificultyLevel = gameSettings.dificultyLevel;
    gameSettings.dificultyLevel = (DifficultyLevel) difficulty;

    EventManager.SendEvent (this, DifficultyChangeEvent, null);
  }

  [System.Obsolete ("Speed Modes Not Supported Anymore. Single Speed Mode")]
  public void ChangeSpeed (int speed)
  {
    previousGameSettings.speedLevel = gameSettings.speedLevel;
    gameSettings.speedLevel = (SpeedLevel) speed;

    EventManager.SendEvent (this, SpeedChangeEvent, null);
  }

  public void StartGame ()
  {
    if (playing)
    {
      return;
    }
    else
    {
      playing = true;
    }

    if (!played)
    {
      played = true;
    }
    else
    {
      RestartGame ();
    }

    EventManager.SendEvent (this, GameStartEvent, null);
  }

  public void RestartGame ()
  {
    EventManager.SendEvent (this, GameRestartEvent, null);
  }

  public void GameOver ()
  {
    playing = false;
//    ShapeManager.inst.OnGameOver (null, null);
//    
//    EventManager.SendEvent (this, GameOverEvent, null);
//    
//    if (StatsManager.inst.isHighScore)
//    {
//      EventManager.SendEvent (this, HighScoreEvent, null);
//    }
//    playing = false;  
    StartCoroutine (CameraShake ());
  }
  
  public void HighScoreCrossed ()
  {
    EventManager.SendEvent (this, HighScoreCrossEvent, null);
  }
  
  public void UnPause ()
  {
    EventManager.SendEvent (this, UnPauseEvent, null);
  }

  private float duration = 0.3f;
  private float magnitude = 0.07f;

  private IEnumerator CameraShake ()
  {
    ShapeManager.inst.OnGameOver (null, null);

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
    
    EventManager.SendEvent (this, GameOverEvent, null);
    
    if (StatsManager.inst.isHighScore)
    {
      EventManager.SendEvent (this, HighScoreEvent, null);
    }
    
    if (StatsManager.inst.numSessions % sessionsPerAdRequest == 0)
    {
      yield return new WaitForSeconds (0.5f);
      AdManager.inst.ShowVideo ();
    }
  }

}
