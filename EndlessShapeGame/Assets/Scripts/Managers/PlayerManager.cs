using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlayerManager : Manager
{

  [System.Serializable]
  public struct PlayerPreset
  {
    public GameManager.DifficultyLevel difficultyLevel;
    public GameObject prefab;
  }

  // Public Members
  public GameObject playerInputPrefab;
  public PlayerPreset [] playerPresets;
  public float startPlayerAlpha;
  public bool invincible;

  static public PlayerManager inst
  {
    get;
    private set;
  }

  // Private Members
  public PlayerBehavior player
  {
    get;
    private set;
  }

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

  //  // Update is called once per frame
  //  void Update ()
  //  {
  //  }

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

  public override void Reset ()
  {
    DestroyPlayer ();
    SpawnPlayer ();
  }

  public override void OnGameStart ()
  {
    foreach (Transform t in player.transform)
    {
      t.gameObject.GetComponent <Collider2D> ().enabled = true;
    }

//    StartCoroutine (FadeInPlayer ());
  }

  public override void OnGameRestart ()
  {
    OnGameStart ();
  }

  public override void OnGameOver ()
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
