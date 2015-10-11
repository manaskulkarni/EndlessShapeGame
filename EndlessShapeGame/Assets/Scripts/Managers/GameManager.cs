using UnityEngine;
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
  public struct GameSettings
  {
    public DifficultyLevel dificultyLevel;
    public SpeedLevel speedLevel;
    public GameMode gameMode;
    public bool showAds;
  }

  // Public Members
  public GameSettings gameSettings;

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
  
  [System.Obsolete]
  public event System.EventHandler DifficultyChangeEvent;
  public event System.EventHandler SpeedChangeEvent;
  
  private void SendEvent (System.EventHandler handler, System.EventArgs data)
  {
    if (handler != null)
    {
      handler(this, data);
    }
  }

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
    StartCoroutine (UpdateMemory ());

    foreach (var v in GameObject.FindObjectsOfType<Manager> ())
    {
      v.RegisterToEvents();
    }
  }
//
//  // Update is called once per frame
//  void Update ()
//  {
//  }

  [System.Obsolete ("Difficulty Modes Not Supported Anymore. Single Difficulty Mode")]
  public void ChangeDifficulty (int difficulty)
  {
    previousGameSettings.dificultyLevel = gameSettings.dificultyLevel;
    gameSettings.dificultyLevel = (DifficultyLevel) difficulty;
    
    SendEvent (DifficultyChangeEvent, null);
  }

  [System.Obsolete ("Speed Modes Not Supported Anymore. Single Speed Mode")]
  public void ChangeSpeed (int speed)
  {
    previousGameSettings.speedLevel = gameSettings.speedLevel;
    gameSettings.speedLevel = (SpeedLevel) speed;
    
    SendEvent (SpeedChangeEvent, null);
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

    SendEvent (GameStartEvent, null);
  }

  public void RestartGame ()
  {
    SendEvent (GameRestartEvent, null);
  }

  private Coroutine cameraColorCoroutine = null;

  public void GameOver ()
  {
    playing = false;
    StartCoroutine (CameraShake ());
//    cameraColorCoroutine = StartCoroutine (CameraColorHighlight ());
  }

  private float duration = 0.3f;
  private float magnitude = 0.07f;

  private IEnumerator UpdateMemory ()
  {
    while (true)
    {
      Resources.UnloadUnusedAssets ();
      yield return new WaitForSeconds (5.0f);
    }
  }

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

    while (cameraColorCoroutine != null)
    {
      yield return null;
    }

    SendEvent (GameOverEvent, null);

    if (StatsManager.inst.isHighScore)
    {
      SendEvent (HighScoreEvent, null);
    }
    playing = false;
  }

//  float highLightDuration = 0.15f;

  private IEnumerator CameraColorHighlight ()
  {
//    Color originalColor = Camera.main.backgroundColor;
//    float colorMultiplier = (60.0f * 4.0f / duration) * Time.deltaTime;

//    float elapsed = 0.0f;
    int i = 0;

//    while (Camera.main.backgroundColor.r <= 0.5f)
//    {
//      Color c = Camera.main.backgroundColor;
//      c += new Color (colorMultiplier, colorMultiplier, colorMultiplier, colorMultiplier);
//      Camera.main.backgroundColor = c;
//      yield return null;
//    }
//
//    while (Camera.main.backgroundColor.r >= originalColor.r)
//    {
//      Color c = Camera.main.backgroundColor;
//      c -= new Color (colorMultiplier, colorMultiplier, colorMultiplier, colorMultiplier);
//      Camera.main.backgroundColor = c;
//      yield return null;
//    }

    Camera.main.backgroundColor = Color.white;
    while (i < 1)
    {
      ++i;
      yield return null;
    }

    i = 0;

    Camera.main.backgroundColor = Color.black;

//    while (elapsed <= highLightDuration * 0.5f)
//    {
//      elapsed += 1.0f / (highLightDuration * 0.5f * Time.deltaTime);
//      Debug.Log (elapsed);
//      Camera.main.backgroundColor = Color.Lerp (originalColor, Color.white, elapsed);
//      yield return null;
//    }
//
//    elapsed = 0.0f;
//
//    while (elapsed <= highLightDuration * 0.5f)
//    {
//      elapsed += 1.0f / (highLightDuration * 0.5f * Time.deltaTime);
//      Camera.main.backgroundColor = Color.Lerp (Color.white, originalColor, elapsed);
//      yield return null;
//    }

//    Camera.main.backgroundColor = originalColor;
    cameraColorCoroutine = null;
  }

}
