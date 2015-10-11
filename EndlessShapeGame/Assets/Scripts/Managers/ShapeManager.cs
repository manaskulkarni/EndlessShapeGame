using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ShapeManager : Manager
{

  public class ShapePool
  {
    private Queue <ShapeBehavior> pool = new Queue<ShapeBehavior> ();

    public void AddShape (ShapeBehavior shape)
    {
      pool.Enqueue (shape);
    }

    public ShapeBehavior UseShape ()
    {
      return pool.Dequeue ();
    }
  }

  public enum Formation
  {
    One = 1,
    Two,
    Three,
    FormationCount,
  }

  [System.Serializable]
  public struct SpeedPreset
  {
    public GameManager.SpeedLevel speedLevel;
    public Vector2 speedMultiplier;
    public Vector2 accelerationMultiplier;
    public Vector2 maxSpeed;
  }

  public struct ShapeProperties
  {
    public ShapeProperties (Sprite sp, Vector3 pos)
    {
      sprite = sp;
      position = pos;
    }
    
    public Sprite sprite;
    public Vector3 position;
  }

  // Public Members
  public int shapePoolCount = 3;
  public int gameShapeCount = 3;
  public GameObject shapePrefab;
  public SpeedPreset [] speedPresets;
  public Vector2 shapeSpawnOffset;
  public Vector2 beginPosition;
  public bool spawnInSameRow;
  public int maxRepeatCount;
  public Color specialColor;
  public int minSpecialRandom;
  public int maxSpecialRandom;
  public int minSpecialComparer;
  public int maxSpecialComparer;
  public ParticleSystem specialFeedback;
  public ParticleSystem gameOverFeedback; 

  public List <ShapeProperties> shapeProperties
  {
    get;
    private set;
  }

  public ShapePool shapePool
  {
    get;
    private set;
  }
  
  public List <ShapeBehavior> shapes
  {
    get;
    private set;
  }

  public int spawnCount
  {
    get;
    private set;
  }
  
  public Formation formation
  {
    get;
    private set;
  }
  
  public PlayerBehavior player
  {
    get;
    private set;
  }

  public SortedDictionary<int, ShapeBehavior> shapePair
  {
    get;
    set;
  }

  static public ShapeManager inst
  {
    get;
    private set;
  }

  // Private Members
  public SpeedPreset cps;

  private Coroutine updateSpeed
  {
    get;
    set;
  }

  private int repeatCount
  {
    get;
    set;
  }

  private Sprite previousSprite
  {
    get;
    set;
  }

  private int shuffleCounter
  {
    get;
    set;
  }

  private float startDelay
  {
    get;
    set;
  }

  void Awake ()
  {
    if (inst == null)
    {
      inst = this;
      shapeProperties = new List<ShapeProperties> ();
      shapes = new List <ShapeBehavior> ();
      shapePair = new SortedDictionary<int, ShapeBehavior> ();
      shapePool = new ShapePool ();
      formation = Formation.One;
      specialFeedback.gameObject.SetActive (false);
      gameOverFeedback.gameObject.SetActive (false);
    }
    else
    {
      GameObject.Destroy (gameObject);
    }
  }

  // Use this for initialization
  void Start ()
  {
    Reset ();
  }

  // Update is called once per frame
  private IEnumerator UpdateSpeed ()
  {
    while (true)
    {
      cps.speedMultiplier += cps.accelerationMultiplier * Time.deltaTime;
      if (cps.speedMultiplier.sqrMagnitude > cps.maxSpeed.sqrMagnitude)
      {
        break;
      }

      yield return null;
    }
  }

  void Shuffle <T> (List <T> deck)
  {
    for (int i = 0; i < deck.Count; ++i)
    {
      T temp = deck[i];
      int randomIndex = Random.Range (0, deck.Count);
      deck [i] = deck [randomIndex];
      deck [randomIndex] = temp;
    }
  }

  private Transform baseShape
  {
    get; set;
  }

  private Transform topShape
  {
    get; set;
  }
  
  public void ShapeTriggered (ShapeBehavior shapeBehavior, SpriteRenderer spriteRenderer)
  {
    if (GameManager.inst.playing)
    {
//      if (PlayerManager.inst.invincible)
//      {
//        Shuffle <ShapeProperties> (shapeProperties);
//        
//        //      if (GameManager.inst.gameMode == GameManager.GameMode.Classic)
//        {
//          StatsManager.inst.AddPoint ();
//          UIManager.inst.UpdateScore ();
//          StartCoroutine (DestroyShape (shapeBehavior));
//        }
//      }
//      else
      if (shapeBehavior.spriteRenderer.sprite.GetHashCode () == spriteRenderer.sprite.GetHashCode ())
      {
        Shuffle <ShapeProperties> (shapeProperties);

  //      if (GameManager.inst.gameMode == GameManager.GameMode.Classic)
        {
          StatsManager.inst.AddPoint ();
          UIManager.inst.UpdateScore ();

          if (shapeBehavior.specialShape)
          {
//            UnityEditor.EditorApplication.isPaused = true;
            StatsManager.inst.AddCoin ();
            StartCoroutine (DestroyShape (shapeBehavior));
            specialFeedback.gameObject.SetActive (true);
            specialFeedback.transform.position = shapeBehavior.transform.position;
            specialFeedback.Play ();
          }
          else
          {
            StartCoroutine (DestroyShape (shapeBehavior));
          }

        }
  //      else
  //      {
  //        PlayerShapeTrigger trigger0 = shapeBehavior.GetComponent <PlayerShapeTrigger> ();
  //        PlayerShapeTrigger trigger1 = spriteRenderer.GetComponent <PlayerShapeTrigger> ();
  //        ShapeBehavior sb1 = spriteRenderer.GetComponent <ShapeBehavior> ();
  //
  //        if (trigger0 != null)
  //        {
  //          if (!trigger0.original)
  //          {
  //            trigger0.enabled = false;
  //            ChooseShapeProperties (shapeBehavior);
  //            shapeBehavior.StartGame ();
  //            
  //            if (shapes.Contains (shapeBehavior))
  //            {
  //              shapes.RemoveAt (0);
  //              shapes.Add (shapeBehavior);
  //            }
  //            else
  //            {
  //              shapes.Add (shapeBehavior);
  //            }
  //
  //            trigger0.gameObject.tag = "s";
  //          }
  //        }
  //
  //        if (sb1 != null)
  //        {
  //          if (trigger1 != null)
  //          {
  //            if (!trigger1.original)
  //            {
  //              trigger1.enabled = false;
  //              ChooseShapeProperties (sb1);
  //              sb1.StartGame ();
  //              if (shapes.Contains (sb1))
  //              {
  //                shapes.RemoveAt (0);
  //                shapes.Add (sb1);
  //              }
  //              else
  //              {
  //                shapes.Add (sb1);
  //              }
  //
  //              trigger1.gameObject.tag = "s";
  //            }
  //          }
  //        }
  //      }
      }
      else
      {
  //      if (GameManager.inst.gameMode == GameManager.GameMode.Classic)
        {
          baseShape = spriteRenderer.transform;
          topShape = shapeBehavior.transform;

          topShape.position = new Vector3 (topShape.position.x, baseShape.position.y + 1.21f, topShape.position.z);
          
//          StartCoroutine (DestroyShape (shapeBehavior));
          
  //        UnityEditor.EditorApplication.isPaused = true;

          if (shapeBehavior.specialShape)
          {
            gameOverFeedback.startColor = specialColor;
          }
          else
          {
            gameOverFeedback.startColor = shapeBehavior.originalColor;
          }
          
          gameOverFeedback.gameObject.SetActive (true);
          gameOverFeedback.transform.position = shapeBehavior.transform.position;
          gameOverFeedback.Play ();

          ChooseShapeProperties (shapeBehavior);
          shapes.RemoveAt (0);
          shapes.Add (shapeBehavior);
          shapeBehavior.transform.localScale = Vector3.one;
//          shapeBehavior.triggered = false;
          GameManager.inst.GameOver ();
        }
  //      else
  //      {
  //        shapeBehavior.StopGame ();
  //        shapeBehavior.gameObject.tag = "p";
  ////        shapeBehavior.gameObject.name = shapeBehavior.spriteRenderer.sprite.name;
  //        shapeBehavior.GetComponent <PlayerShapeTrigger> ().enabled = true;
  //        shapeBehavior.enabled = false;
  //
  //        PlayerManager.inst.player.AddShape (shapeBehavior.transform);
  //        shapes.Remove (shapeBehavior);
  //
  //        ShapeBehavior shape = shapePool.UseShape ();
  //        shape.gameObject.SetActive (true);
  //        ChooseShapeProperties (shape);
  //        shapes.Add (shape);
  //        shape.StartGame ();
  //      }
      }
    }
  }

  #region implemented abstract members of Manager
  
  public override void Reset ()
  {
    foreach (var v in shapes)
    {
      GameObject.Destroy (v.gameObject); 
    }

    shapes.Clear ();
    shapePair.Clear ();
    shapeProperties.Clear ();
    player = null;
    cps = speedPresets [(int) GameManager.inst.gameSettings.speedLevel];

    player = GameObject.FindObjectOfType <PlayerBehavior> ();
    
    foreach (Transform v in PlayerManager.inst.playerPresets [(int)GameManager.inst.gameSettings.dificultyLevel].prefab.transform)
    {
      shapeProperties.Add (new ShapeProperties (v.gameObject.GetComponent <SpriteRenderer> ().sprite, v.position));
    }

//    if (GameManager.inst.gameMode == GameManager.GameMode.Classic)
    {
      SpawnShapes ();
    }
//    else
//    {
//      SpawnShapesTetrisMode ();
//    }
  }

  public override void OnGameStart ()
  {
    StartCoroutine (DelayStart ());
    updateSpeed = StartCoroutine (UpdateSpeed ());
  }

  public override void OnGameOver ()
  {
    foreach (var v in shapes)
    {
      v.StopGame ();
    }

//    topShape.position = new Vector3 (topShape.position.x, baseShape.position.y + 1.21f, topShape.position.z);

    if (updateSpeed != null)
    {
      StopCoroutine (updateSpeed);
      updateSpeed = null;
    }
  }

  public override void OnGameRestart ()
  {
//    int i = 0;
//    foreach (var shape in shapes)
//    {
//      shape.transform.position = new Vector3
//        (
//          shapeProperties [Random.Range (0, shapeProperties.Count)].position.x,
//          beginPosition.y + i * shapeSpawnOffset.y,
//          shape.transform.position.z
//          );
//      //      go.SetActive (false);
//      ++i;
//    }
//

    startDelay = 0.7f;
    cps = speedPresets [(int) GameManager.inst.gameSettings.speedLevel];
  }

  [System.Obsolete ("Difficulty Modes Not Supported Anymore. Single Difficulty Mode")]
  public override void OnDifficultyChange ()
  {
    Reset ();
  }

  [System.Obsolete ("Speed Modes Not Supported Anymore. Single Speed Mode")]
  public override void OnSpeedChange ()
  {
    cps = speedPresets [(int) GameManager.inst.gameSettings.speedLevel];
  }

  #endregion

  private IEnumerator DelayStart ()
  {
    yield return new WaitForSeconds (startDelay);
    foreach (var v in shapes)
    {
      v.StartGame ();
      v.triggered = false;
    }
  }

  private IEnumerator DestroyShape (ShapeBehavior shapeBehavior)
  {
    while (shapeBehavior.spriteRenderer.color.a >= 0.0f)
    {
      Color c = shapeBehavior.spriteRenderer.color;
      c.a -= Time.deltaTime * 10.0f;
      shapeBehavior.spriteRenderer.color = c;
      yield return null;
    }

    ChooseShapeProperties (shapeBehavior);
    shapes.RemoveAt (0);
    shapes.Add (shapeBehavior);
    shapeBehavior.transform.localScale = Vector3.one;
    shapeBehavior.triggered = false;
  }

  private void ChooseShapeProperties (ShapeBehavior shape)
  {
    int randomPosIndex = Random.Range (0, shapeProperties.Count);
    int randomSpriteIndex = Random.Range (0, shapeProperties.Count);

    if (previousSprite != null)
    {
      if (shapeProperties [randomSpriteIndex].sprite.GetHashCode () == previousSprite.GetHashCode ())
      {
        Debug.Log ("Shape Repeats");
        if (repeatCount >= maxRepeatCount)
        {
          repeatCount = 0;
          
          if (randomSpriteIndex == shapeProperties.Count - 1)
          {
            randomSpriteIndex = 0;
          }
          else
          {
            ++randomSpriteIndex;
          }
        }

        ++repeatCount;
      }
    }

    float nextPosition = shapeProperties [randomPosIndex].position.x;
    Sprite nextSprite = shapeProperties [randomSpriteIndex].sprite;
    previousSprite = nextSprite;

    #region Choose Whether Special
    int specialRandom = Random.Range (minSpecialRandom, maxSpecialRandom);

    if (specialRandom > minSpecialComparer && specialRandom <= maxSpecialComparer)
    {
      Debug.Log ("Special");
      shape.StartSpecialShapeCoroutine ();
      shape.spriteRenderer.color = specialColor;
    }
    else
    {
      shape.StopSpecialShapeCoroutine ();
      shape.spriteRenderer.color = shape.originalColor;
    }
    #endregion

    shape.transform.position = new Vector3
      (nextPosition, shapes [shapes.Count - 1].transform.position.y + shapeSpawnOffset.y, shape.transform.position.z);
    shape.spriteRenderer.sprite = nextSprite;
  }

  private void SpawnShapes ()
  {
    for (int i = 0 ; i < gameShapeCount; ++i)
    {
      GameObject go = Instantiate (shapePrefab) as GameObject;
      ShapeBehavior shape = go.GetComponent <ShapeBehavior> ();

      shape.spriteRenderer = go.GetComponent <SpriteRenderer> ();
      shape.spriteRenderer.sprite = shapeProperties [Random.Range (0, shapeProperties.Count)].sprite;
      shape.originalColor = shape.spriteRenderer.color;

      shape.transform.position = new Vector3
        (
          shapeProperties [Random.Range (0, shapeProperties.Count)].position.x,
          beginPosition.y + i * shapeSpawnOffset.y,
          shape.transform.position.z
          );
      
      shape.transform.parent = gameObject.transform;
//      Debug.Log (shape.transform.position.z);

      shapes.Add (shape);
      shape.StopGame ();
      shapePair.Add (shape.GetComponent <Collider2D> ().GetHashCode (), shape);
      //      go.SetActive (false);
    }
  }

  private void SpawnShapesTetrisMode ()
  {
    for (int i = 0 ; i < shapePoolCount; ++i)
    {
      GameObject go = Instantiate (shapePrefab) as GameObject;
      ShapeBehavior shape = go.GetComponent <ShapeBehavior> ();
      
      shape.spriteRenderer = go.GetComponent <SpriteRenderer> ();
      shape.originalColor = shape.spriteRenderer.color;

      PlayerShapeTrigger trigger = go.AddComponent <PlayerShapeTrigger> ();
      trigger.spriteRenderer = shape.spriteRenderer;
      trigger.enabled = false;

      shapePool.AddShape (shape);

      go.SetActive (false);
      go.transform.parent = gameObject.transform;
    }

    for (int i = 0; i < gameShapeCount; ++i)
    {
      ShapeBehavior shape = shapePool.UseShape ();

      shape.gameObject.SetActive (true);

      shape.spriteRenderer.sprite = shapeProperties [Random.Range (0, shapeProperties.Count)].sprite;
      
      shape.transform.position = beginPosition + i * shapeSpawnOffset;
      shape.transform.position = new Vector3
        (shapeProperties [Random.Range (0, shapeProperties.Count)].position.x, shape.transform.position.y, shape.transform.position.z);
      
      shape.transform.parent = gameObject.transform;
      
      shapes.Add (shape);
      shape.StopGame ();
      shape.specialShape = false;
      shapePair.Add (shape.GetComponent <Collider2D> ().GetHashCode (), shape);
    }
  }

}
