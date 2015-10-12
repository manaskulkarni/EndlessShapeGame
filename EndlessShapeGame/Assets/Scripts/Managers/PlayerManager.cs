using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlayerManager : Manager
{

  #region Structs
  [System.Serializable]
  public struct PlayerPreset
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
  /// <summary>
  /// Invincible (Use to debug conveniently)
  /// </summary>
  public bool invincible;
  #endregion
  #region Properties
  /// <summary>
  /// Player Access for other systems
  /// </summary>
  public PlayerBehavior player { get; private set; }
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
    float alpha = startPlayerAlpha;
    while (alpha <= 1.0f)
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
    float alpha = 1.0f;
    while (alpha >= startPlayerAlpha)
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

  public override void OnGameReset (object sender, System.EventArgs args)
  {
    DestroyPlayer ();
    SpawnPlayer ();
  }

  public override void OnGameStart (object sender, System.EventArgs args)
  {
    foreach (Transform t in player.transform)
    {
      t.gameObject.GetComponent <Collider2D> ().enabled = true;
    }

//    StartCoroutine (FadeInPlayer ());
  }

  public override void OnGameRestart (object sender, System.EventArgs args)
  {
    OnGameStart (null, null);
  }

  public override void OnGameOver (object sender, System.EventArgs args)
  {
    foreach (Transform t in player.transform)
    {
      t.gameObject.GetComponent <Collider2D> ().enabled = false;
    }

//    StartCoroutine (FadeOutPlayer ());
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
  }

  private void DestroyPlayer ()
  {
    GameObject.Destroy (player.gameObject);
  }

}
