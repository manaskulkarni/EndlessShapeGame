using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlayerManager : MonoBehaviour
{

  #region Structs
  [System.Serializable]
  public class PlayerPreset
  {
    public GameManager.DifficultyLevel difficultyLevel;
    public GameObject prefab;
  }
  #endregion
  #region Public Fields
  /// <summary>
  /// Player Object to spawn
  /// </summary>
  public GameObject playerInputPrefab;
  /// <summary>
  /// Array of all player presets to use
  /// </summary>
  public PlayerPreset [] playerPresets;
  /// <summary>
  /// Start player alpha (Not used)
  /// </summary>
  public float startPlayerAlpha;

#if UNITY_EDITOR
  /// <summary>
  /// Invincible (Use to debug conveniently)
  /// </summary>
  public bool invincible;
#endif
#endregion
  #region Properties
  /// <summary>
  /// Player Access for other systems
  /// </summary>
  public PlayerBehavior player { get; private set; }
  public PlayerInput playerInput { get; private set; }
  #endregion
  #region Static Properties
  static public PlayerManager inst { get; private set; }
  #endregion

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

    SortedList <int, PlayerPreset> list = new SortedList<int, PlayerPreset> ();

    foreach (var v in playerPresets)
    {
      list.Add ((int)v.difficultyLevel, v);
    }

    for (int i = 0; i < list.Count; ++i)
    {
      playerPresets [i] = list.Values [i];
    }

    SpawnPlayerInput ();
    SpawnPlayer ();
  }

  // Use this for initialization
  void Start ()
  {
  }

  #region Coroutines
  private IEnumerator FadeInPlayer ()
  {
    float alpha = player.triggers [0].spriteRenderer.color.a;
    while (alpha < 1.0f)
    {
      alpha += Time.deltaTime * 5.0f;
      Color c = new Color ();
      foreach (var v in player.triggers)
      {
        c = v.spriteRenderer.color;
        c.a = alpha;
        v.spriteRenderer.color = c;
      }

      yield return null;
    }
  }

  private IEnumerator FadeOutPlayer ()
  {
    float alpha = startPlayerAlpha;
    while (alpha > 0.0f)
    {
      alpha -= Time.deltaTime * 5.0f;
      Color c = new Color ();
      foreach (var v in player.triggers)
      {
        c = v.spriteRenderer.color;
        c.a = alpha;
        v.spriteRenderer.color = c;
      }
      
      yield return null;
    }
  }

  #endregion

  #region implemented abstract members of Manager

  void OnGameReset ()
  {
    DestroyPlayer ();
    SpawnPlayer ();
  }

  void OnGameStart ()
  {
    foreach (Transform t in player.transform)
    {
      t.gameObject.GetComponent <Collider2D> ().enabled = true;
    }

//    StartCoroutine (FadeInPlayer ());
  }

  void OnGameRestart ()
  {
    OnGameStart ();
  }

  void OnGameOver ()
  {
    foreach (Transform t in player.transform)
    {
      t.gameObject.GetComponent <Collider2D> ().enabled = false;
    }

//    StartCoroutine (FadeOutPlayer ());
  }
  
  void OnCompleteRevive ()
  {
    OnGameStart ();
  }
  
  void OnShowStore ()
  {
    playerInput.enabled = false;
    StartCoroutine (FadeOutPlayer ());
  }
  
  void OnHideStore ()
  {
    playerInput.enabled = true;
    StartCoroutine (FadeInPlayer ());
  }

  #endregion

  private void SpawnPlayer ()
  {
    GameObject go = Instantiate (playerPresets [(int) GameManager.inst.gameSettings.dificultyLevel].prefab) as GameObject;
    go.transform.parent = gameObject.transform;

    player = go.GetComponent <PlayerBehavior> ();
  }

  private void SpawnPlayerInput ()
  {
    GameObject go = Instantiate (playerInputPrefab) as GameObject;
    go.transform.parent = gameObject.transform;
    
    playerInput = go.GetComponent <PlayerInput> ();
  }

  private void DestroyPlayer ()
  {
    GameObject.Destroy (player.gameObject);
  }

}
