﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Xml;
using System.Linq;
using BadassProjects.StateMachine;

public class ShapeManager : CubiBase
{
  #region Structs
  public class ShapePool
  {
    private Queue<ShapeBehavior> pool = new Queue<ShapeBehavior>();

    public void AddShape(ShapeBehavior shape)
    {
      pool.Enqueue(shape);
    }

    public ShapeBehavior UseShape()
    {
      return pool.Dequeue();
    }
  }

  /// <summary>
  /// Data Structure containing the speed properties of shapes
  /// </summary>
  [System.Serializable]
  public class SpeedPreset
  {
    public Vector2 speedMultiplier;
    public Vector2 accelerationMultiplier;
    public int speedIncreaseBlockInterval;
    public Vector2 maxSpeed;
  }

  /// <summary>
  /// Data Structure holding the visual properties of shapes
  /// </summary>
  public class ShapeProperties
  {
    public ShapeProperties(Sprite sp, Vector3 pos)
    {
      sprite = sp;
      position = pos;
    }

    public Sprite sprite;
    public Vector3 position;
  }
  /// <summary>
  /// Data Structure holding a min and max to create a range for comparisons
  /// </summary>
  [System.Serializable]
  public class IntRange
  {
    public int min;
    public int max;

    public bool Contains (int val)
    {
      return val >= min && val <= max;
    }
  }
  
  [System.Serializable]
  public class RandomRange : IntRange
  {
    public float probability;
  }

  [System.Serializable]
  /// <summary>
  /// Data Structure with Speed Interval and The Speed Preset for that interval
  /// </summary>
  public class BlockInterval
  {
    public SpeedPreset preset;
    public IntRange scoreInterval;
  }
  
  public enum SpawnState
  {
    NORMAL,
    SPECIALONLY,
  }

  #endregion
  #region Public Fields
  /// <summary>
  /// Number of Shapes to create in the pool. Not used.
  /// </summary>
  public int shapePoolCount = 3;
  /// <summary>
  /// Number of shapes to create at start for pooling
  /// </summary>
  public int gameShapeCount = 3;
  /// <summary>
  /// GameObject to use as a Shape
  /// </summary>
  public GameObject shapePrefab;
  /// <summary>
  /// Array of SpeedPresets of Shapes
  /// </summary>
  public BlockInterval[] speedPresets;
  public int currentIntervalIndex { get; private set; }
  /// <summary>
  /// Offset of spawning
  /// </summary>
  public Vector2 shapeSpawnOffset;
  /// <summary>
  /// The position of 1st shape
  /// </summary>
  public Vector2 beginPosition;
  /// <summary>
  /// Not used
  /// </summary>
  public bool spawnInSameRow;
  /// <summary>
  /// The max number of times a shape can use same properties (pos, sprite,...)
  /// </summary>
  public int maxRepeatCount;
  /// <summary>
  /// The color of the special shape
  /// </summary>
  public Color specialColor;
//  /// <summary>
//  /// Range for spawning random number for special random
//  /// </summary>
//  public IntRange specialRandomRange;
//  /// <summary>
//  /// Range to compare whether to spawn special shape
//  /// </summary>
//  public IntRange specialRandomRangeCompare;
//  /// <summary>
//  /// Range for spawning random number for special random
//  /// </summary>
//  public IntRange invisibleRandomRange;
//  /// <summary>
//  /// Range to compare whether to spawn invisible shape
//  /// </summary>
//	public IntRange invisibleRandomRangeCompare;
  public AnimationCurve specialRandomCurve;
  public AnimationCurve invisibleRandomCurve;

  /// <summary>
  /// ParticleSystem to use to play when Special Shape collides with Player
  /// </summary>
  public ParticleSystem specialFeedback;
  /// <summary>
  /// ParticleSystem to use to play game over feedback
  /// </summary>
  public ParticleSystem gameOverFeedback;
  /// <summary>
  /// Offset from top of screen in world coordinates when invisible shape starts fading out
  /// </summary>
  public float invisibleFadeStartOffset;
  /// <summary>
  /// Fade Out Speed for invisible shapes
  /// </summary>
  public float fadeOutSpeed;
  
  public int minSpecialScore;
  public int minInvisibleScore;

#endregion
  #region Properties
  public List<ShapeProperties> shapeProperties { get; private set; }
  public ShapePool shapePool { get; private set; }
  public LinkedList<ShapeBehavior> shapes { get; private set; }
  public int spawnCount { get; private set; }
  public PlayerBehavior player { get; private set; }
  public SortedDictionary<int, ShapeBehavior> shapePair { get; private set; }
  public int numCollisions {get; private set; }
  public float startDelay { get; private set; }
  #endregion
  #region Private Properties
  // Private Members
  public SpeedPreset currentSpeedPreset;

  private Coroutine updateSpeed { get; set; }
  private int repeatCount { get; set; }
  private Sprite previousSprite { get; set; }
  private int shuffleCounter { get; set; }
  
  /// <summary>
  /// Shape for hard-coding position of base shape on game over. Not used
  /// </summary>
  private Transform baseShape { get; set; }
  
  /// <summary>
  /// Shape for hard-coding position of top shape on game over. Not used
  /// </summary>
  private Transform topShape { get; set; }

  // Shape Trigger Response Delegate
  public delegate void ShapeTriggeredHandle (ShapeBehavior shapeBehavior, SpriteRenderer spriteRenderer);
  public ShapeTriggeredHandle shapeTriggered { get; set; }

#if UNITY_EDITOR
  List<List<float>> times = new List<List<float>>();

  public struct Config
  {
    public Config (bool save = false)
    {
      saveAudioData = save;
    }
    public bool saveAudioData;
  }

  Config config = new Config ();
#endif

#endregion
  #region Static Properties
  static public ShapeManager inst { get; private set; }
  #endregion

  public override void cubiAwake()
  {
    if (inst == null)
    {
      inst = this;
      shapeProperties = new List<ShapeProperties>();
      shapes = new LinkedList<ShapeBehavior>();
      shapePair = new SortedDictionary<int, ShapeBehavior>();
      shapePool = new ShapePool();
      specialFeedback.gameObject.SetActive(false);
      gameOverFeedback.gameObject.SetActive(false);

      shapeTriggered = NormalShapeTriggered;
      
      float[] bpms = new float[]
      {
        60.217f,
        66.064f,
        71.823f,
        78.279f,
        83.859f,
        90.023f,
        96.154f,
        102.039f,
        108.170f,
      };
    
      Debug.Log ("FPS: " + Application.targetFrameRate);
      
      for (int i = 0; i < bpms.Length; ++i)
      {
        var v = speedPresets[i];
        v.preset.speedMultiplier.y = -((shapeSpawnOffset.y / 60) * bpms[i]);
        Debug.Log ("Speed Preset [" + i + "]: " + v.preset.speedMultiplier.y);
      }

      #if UNITY_EDITOR
      DeserializeBPMData ();
      #endif
    }
    else
    {
      GameObject.Destroy(gameObject);
      return;
    }
  }

  // Use this for initialization
  void Start()
  {
    OnGameReset();
  }

  public struct AudioData
  {
    public AudioData (float _bpm, BlockInterval interval, int _numBlocks = 1)
    {
      bpm = _bpm;
      speedMultiplier = interval.preset.speedMultiplier;
      scoreRange = interval.scoreInterval;
      numBlocks = _numBlocks;
    }
    [System.Xml.Serialization.XmlElement("bpm")]
    public float bpm;
    [System.Xml.Serialization.XmlElement("speed")]
    public Vector2 speedMultiplier;
    [System.Xml.Serialization.XmlElement("score")]
    public IntRange scoreRange;
    [System.Xml.Serialization.XmlElement("blocks")]
    public int numBlocks;
  }

  #if UNITY_EDITOR
  void OnGameExit ()
  {
    if (config.saveAudioData)
    {
      List<AudioData> bpmData = new List<AudioData>();
      for (int i = 0; i < speedPresets.Length; ++i)
      {
        var v = times[i];
        var bpmList = new List<float>();
        for (int j = 1; j < v.Count; ++j)
        {
          var fps = 60.0f;
          bpmList.Add(fps / (times[i][j] - times[i][j - 1]));
        }

        float total = bpmList.Sum(x => x);
        if (total > 0.0f)
        {
          float avg = total / bpmList.Count;
          var interval = speedPresets [i].scoreInterval.max - speedPresets [i].scoreInterval.min;
          bpmData.Add(new AudioData(avg, speedPresets[i], (int)Mathf.Ceil (interval / 8.0f)));
        }
      }
      
      System.Xml.Serialization.XmlSerializer serializer = new System.Xml.Serialization.XmlSerializer(typeof(List <AudioData>));
      System.IO.TextWriter writer = new System.IO.StreamWriter(Application.dataPath + "/AudioTesting/BPMData.xml");
      serializer.Serialize(writer, bpmData);
    }
  }
  #endif
  
//  /// <summary>
//  /// Updates the speed of the shapes based on presets
//  /// </summary>
//  /// <returns></returns>
//  private IEnumerator UpdateSpeed()
//  {
//    while (true)
//    {
//      currentSpeedPreset.speedMultiplier += currentSpeedPreset.accelerationMultiplier * Time.deltaTime;
//      if (currentSpeedPreset.speedMultiplier.sqrMagnitude > currentSpeedPreset.maxSpeed.sqrMagnitude)
//      {
//        break;
//      }
//
//      yield return null;
//    }
//  }

  /// <summary>
  /// Shuffles array
  /// </summary>
  /// <typeparam name="T"></typeparam>
  /// <param name="deck"></param>
  void Shuffle<T>(List<T> deck)
  {
    for (int i = 0; i < deck.Count; ++i)
    {
      T temp = deck[i];
      int randomIndex = Random.Range(0, deck.Count);
      deck[i] = deck[randomIndex];
      deck[randomIndex] = temp;
    }
  }
  
  float CurveWeightedRandom(AnimationCurve curve)
  {
    return curve.Evaluate(Random.value);
  }

  public float topShapePosition = 2.46f;

  private Coroutine playerFeedback = null;
  private bool playerFeedbackPaused = false;
  SpriteRenderer cacheSpriteRenderer = null;

  #region ShapeManager Logic
  /// <summary>
  /// Called by PlayerBehavior when it collides with a ShapeBehavior
  /// </summary>
  /// <param name="shapeBehavior"></param>
  /// <param name="spriteRenderer"></param>
  public void ShapeTriggered(ShapeBehavior shapeBehavior, SpriteRenderer spriteRenderer)
  {
    shapeTriggered (shapeBehavior, spriteRenderer);
  }

  public bool PredictCollision ()
  {
    var shape = shapes.First.Value;
    {
      Vector3 pos = shape.transform.position;
      Vector3 target = new Vector3 (pos.x, PlayerManager.inst.player.transform.position.y, pos.z);
      var hit = Physics2D.RaycastAll (shape.transform.position, Vector2.down, Vector3.Distance(pos, target));
      Debug.DrawLine (pos, target, Color.red, 100.0f, false);
      
//      if (hit.Length > 0)
      {
        foreach (var v in hit)
        {
          var sr = v.collider.GetComponent <SpriteRenderer> ();
          if (sr && v.collider.gameObject.tag == "p")
          {
            if (sr.sprite == shape.spriteRenderer.sprite)
            {
              return true;
            }
          }
        }
      }
    }

    return false;
  }

  private void PlayParticleEffect (ParticleSystem feedback, Vector3 pos, Color col, int count)
  {
    feedback.startColor = col;
    feedback.gameObject.SetActive(true);
    feedback.transform.position = pos;
    feedback.Emit (count);
    feedback.startLifetime = feedback.startLifetime;
  }

  private void WrongShape ()
  {
    GameManager.inst.ChangeState(GameManager.States.Stop);
  }

  public void NormalShapeTriggered (ShapeBehavior shapeBehavior, SpriteRenderer spriteRenderer)
  {
    //    if (GameManager.inst.GetState ().Equals (GameManager.States.Playing))
    {
      bool sameSprite = shapeBehavior.spriteRenderer.sprite == spriteRenderer.sprite;
      #if UNITY_EDITOR
      if (PlayerManager.inst.invincible)
      {
        sameSprite = shapeBehavior.shapeResponse == ShapeBehavior.ShapeResponse.Normal ? true : false;
      }
      #endif

      #if UNITY_EDITOR
      times[currentIntervalIndex].Add(Time.fixedTime);
      #endif

      //      GameManager.inst.BroadcastMessage ("OnShapeTriggered", shapeBehavior);

      if (numCollisions == 0)
      {
        GameManager.inst.BroadcastMessage (GameManager.inst.FirstBeatEvent);
      }

      ++numCollisions;

      if (currentIntervalIndex + 1 < speedPresets.Length)
      if (!speedPresets [currentIntervalIndex].scoreInterval.Contains (StatsManager.inst.score))
      {
        currentSpeedPreset = speedPresets[++currentIntervalIndex].preset;
      }

      /***********************************************************************/
      // If Player sprite collides with shape of same sprite
      /***********************************************************************/
      switch (shapeBehavior.shapeResponse)
      {
      case ShapeBehavior.ShapeResponse.Normal:
        //        // Choose which particle system to use
        //        ParticleSystem fdb = sameSprite ? gameOverFeedback : specialFeedback;
        //        fdb.startColor = specialColor;
        //        fdb.gameObject.SetActive(true);
        //        fdb.transform.position = shapeBehavior.transform.position;
        //        fdb.Play();
        if (sameSprite)
        {          
          // Shuffle the shape properties to increase randomness
          Shuffle<ShapeProperties>(shapeProperties);

          // Add Point to Player Stats
          InvokeMessage ("UpdateScore");

          StartCoroutine(DestroyShape(shapeBehavior));
          if (playerFeedback != null)
            StopCoroutine (playerFeedback);
          playerFeedback = StartCoroutine (PlayerFeedback (spriteRenderer));
        }
        else
        {
          // Store the currrent top shape position to avoid artifacts (Currently not used)
          //            baseShape = spriteRenderer.transform;
          //            topShape = shapeBehavior.transform;
          //            topShape.position = new Vector3(topShape.position.x, baseShape.position.y + 1.61f, topShape.position.z);

          topShape = shapes.First.Next.Value.transform;

          // Play Particle Effect
          PlayParticleEffect (gameOverFeedback, shapeBehavior.transform.position, shapeBehavior.originalColor, gameOverFeedback.maxParticles);

          // Choose the properties of the shape for next game
          ChooseShapeProperties(shapeBehavior);
          shapes.RemoveFirst();
          shapes.AddLast(shapeBehavior);
          shapeBehavior.transform.localScale = Vector3.one;
          //          shapeBehavior.triggered = false;
          WrongShape ();
        }
        break;
      case ShapeBehavior.ShapeResponse.Opposite:
        // Choose which particle system to use
        ParticleSystem feedback = sameSprite ? gameOverFeedback : specialFeedback;
        PlayParticleEffect (feedback, shapeBehavior.transform.position, specialColor, feedback.maxParticles);
        //          feedback.Play();

        // Response is opposite, so send game over event is sprites are same
        if (sameSprite)
        {
          // Shuffle the shape properties to increase randomness
          //            baseShape = spriteRenderer.transform;
          //            topShape = shapeBehavior.transform;
          //            topShape.position = new Vector3(topShape.position.x, baseShape.position.y + 1.61f, topShape.position.z);

          topShape = shapes.First.Next.Value.transform;

          ChooseShapeProperties(shapeBehavior);
          shapes.RemoveFirst();
          shapes.AddLast(shapeBehavior);
          shapeBehavior.transform.localScale = Vector3.one;
          //          shapeBehavior.triggered = false;
          WrongShape ();
        }
        else
        {
          // Add Point to Player Stats
          InvokeMessage ("UpdateScore");
          //            UIManager.inst.UpdateScore();

          Shuffle<ShapeProperties>(shapeProperties);
          StartCoroutine(DestroyShape(shapeBehavior));

          if (playerFeedback != null)
            StopCoroutine (playerFeedback);
          playerFeedback = StartCoroutine (PlayerFeedback (spriteRenderer));
        }
        break;
      default:
        break;
      }
    }
  }

  public void HeadStartShapeTriggered (ShapeBehavior shapeBehavior, SpriteRenderer spriteRenderer)
  {
    if (numCollisions == 0)
    {
      GameManager.inst.BroadcastMessage (GameManager.inst.FirstBeatEvent);
    }

    ++numCollisions;

    if (currentIntervalIndex + 1 < speedPresets.Length)
    if (!speedPresets [currentIntervalIndex].scoreInterval.Contains (StatsManager.inst.score))
    {
      currentSpeedPreset = speedPresets [++currentIntervalIndex].preset;
    }

    InvokeMessage ("UpdateScore");
    //            UIManager.inst.UpdateScore();
    //      Shuffle<ShapeProperties>(shapeProperties);
    StartCoroutine(DestroyShape(shapeBehavior));
  }
  #endregion

  #region implemented abstract members of Manager
  void OnGameReset()
  {
    foreach (var v in shapes)
    {
      GameObject.Destroy(v.gameObject);
    }

    shapes.Clear();
    shapePair.Clear();
    shapeProperties.Clear();
    player = null;
    currentIntervalIndex = GetStartInterval ();
    currentSpeedPreset = speedPresets[currentIntervalIndex].preset;
    numCollisions = 0;

    player = GameObject.FindObjectOfType<PlayerBehavior>();

    foreach (Transform v in PlayerManager.inst.playerPresets[(int)GameManager.inst.gameSettings.dificultyLevel].prefab.transform)
    {
      shapeProperties.Add(new ShapeProperties(v.gameObject.GetComponent<SpriteRenderer>().sprite, v.position));
    }

    SpawnShapes();
  }

  void OnGameStart()
  {
    StartCoroutine(DelayStart());
    // Dont use Update as it is slow. Instead use coroutines
//    updateSpeed = StartCoroutine(UpdateSpeed());
  }
  
  void OnGameStop ()
  {
    foreach (var v in shapes)
    {
      v.StopGame();
    }
    
    if (updateSpeed != null)
    {
      StopCoroutine(updateSpeed);
      updateSpeed = null;
    }

    topShape.position = new Vector3(topShape.position.x, topShapePosition, topShape.position.z);

    int i = 0;
    foreach (ShapeBehavior shape in shapes)
    {
//      var shape = shapes [i].transform;
      shape.transform.position = new Vector3 (shape.transform.position.x, topShapePosition + (i * shapeSpawnOffset.y), shape.transform.position.z);
      ++i;
    }
  }

  void ResetShapes ()
  {
    foreach (var v in shapes)
    {
      v.ResetProperties ();
    }
  }

  void OnGameOver()
  {
    OnGameStop ();
    StartCoroutine (WaitForFadeIn ());
    numCollisions = 0;
  }

  private IEnumerator WaitForFadeIn ()
  {
    while (fadeIn != null)
    {
      Debug.Log ("Waiting");
      yield return null;
    }

    ResetShapes ();
  }

  void OnGameRestart()
  {
    startDelay = 0.7f;
    currentIntervalIndex = GetStartInterval ();
    currentSpeedPreset = speedPresets[currentIntervalIndex].preset;
  }

  [System.Obsolete("Difficulty Modes Not Supported Anymore. Single Difficulty Mode")]
  void OnDifficultyChange()
  {
    OnGameReset();
  }

  [System.Obsolete("Speed Modes Not Supported Anymore. Single Speed Mode")]
  void OnSpeedChange()
  {
    //currentSpeedPreset = speedPresets[(int)GameManager.inst.gameSettings.speedLevel];
  }
  
  void OnPause ()
  {
    foreach (var v in shapes)
    {
      v.StopGame ();
    }

    if (playerFeedback != null)
    {
      StopCoroutine (playerFeedback);
      playerFeedbackPaused = true;
    }
  }
  
  void OnUnPause ()
  {
    foreach (var v in shapes)
    {
      v.StartGame ();
    }

    if (playerFeedbackPaused)
    {
      playerFeedback = StartCoroutine (PlayerFeedback (cacheSpriteRenderer));
    }
  }

  void OnReviveCompleteStart ()
  {
    OnHideStore ();
  }

  void OnReviveCompleteEnd ()
  {
    currentIntervalIndex = GetStartInterval ();
    currentSpeedPreset = speedPresets[currentIntervalIndex].preset;
    OnGameStart ();
  }

  void OnDeclineRevive ()
  {
    numCollisions = 0;
  }

  void OnShowStore ()
  {
//    Debug.Log ("HIDE SHAPES");
    StartCoroutine (FadeOutShapes ());
  }

  void OnHideStore ()
  {
//    Debug.Log ("SHOW SHAPES");
    if (fadeIn == null)
    {
      fadeIn = StartCoroutine (FadeInShapes ());
    }
  }

  void OnShowOptions ()
  {
    OnShowStore ();
  }

  void OnHideOptions ()
  {
    OnHideStore ();
  }

  void OnPreTutorialStart ()
  {
    foreach (var shape in shapes)
    {
      Vector3 pos = shape.transform.position;
      Vector3 target = new Vector3 (pos.x, PlayerManager.inst.player.transform.position.y, pos.z);
      var hit = Physics2D.RaycastAll (shape.transform.position, Vector2.down, Vector3.Distance(pos, target));
//      Debug.DrawLine (pos, target, Color.red, 100.0f, false);

      if (hit.Length > 0)
      {
        foreach (var v in hit)
        {
          var sr = v.collider.GetComponent <SpriteRenderer> ();
          if (sr && v.collider.gameObject.tag == "p")
          {
            int index = 0;
            if (shape.spriteRenderer.sprite == sr.sprite)
            {
              for (int i = 0; i < shapeProperties.Count; ++i)
              {
                var sp = shapeProperties [i];
                if (sp.sprite != sr.sprite)
                {
                  index = i;
                  break;
                }
              }

              shape.transform.position = new Vector3 (shapeProperties[index].position.x, pos.y, pos.z);
            }
          }
        }
      }
    }
  }

  void OnTutorialStart ()
  {
    OnPause ();
  }

  void OnTutorialEnd ()
  {
    OnUnPause ();
  }

  #endregion
  
  private int GetStartInterval ()
  {
  #if UNITY_EDITOR
    int i = 0;
    foreach (var v in speedPresets)
    {
      if (v.scoreInterval.Contains (StatsManager.inst.score))
      {
        Debug.Log ("Start Score Index: " + i);
        break;
      }
      ++i;
    }
    
    return i;
  #else
    return 0;
#endif
  }

  #region Coroutines
  /// <summary>
  /// Called when game restarts and the player still getting ready to play
  /// </summary>
  /// <returns></returns>
  private IEnumerator DelayStart()
  {
    yield return new WaitForSeconds(startDelay);
    foreach (var v in shapes)
    {
      v.StartGame();
    }
  }
  
//  private IEnumerator GoToStart (int i)
//  {
//    var shape = shapes [i];
//    var targetPos = beginPosition.y + i * shapeSpawnOffset.y;
//    
//    while (shape.transform.position.y <= targetPos)
//    {
//      var pos = shape.transform.position;
//      pos.y += Time.deltaTime * 5.0f;
//      shape.transform.position = pos;
//      yield return null;
//    }
//    
//    shape.transform.position = new Vector3 (shape.transform.position.x, targetPos, shape.transform.position.z);
//    shape.StopSpecialShapeCoroutine ();
//    shape.StopInvisibleCoroutine ();
//  }

  public float waitTime = 0.2f;

  private IEnumerator PlayerFeedback (SpriteRenderer spriteRenderer)
  {
    yield return new WaitForSeconds (waitTime);
    Transform trans = spriteRenderer.transform;
    cacheSpriteRenderer = spriteRenderer;

    while (trans.localScale.x < 1.2f)
    {
      Vector2 scale = trans.localScale;
      scale += Vector2.one * Time.deltaTime * 3.0f;
      trans.localScale = scale;
      yield return null;
    }
    while (trans.localScale.x > 1.0f)
    {
      Vector2 scale = trans.localScale;
      scale -= Vector2.one * Time.deltaTime * 3.0f;
      trans.localScale = scale;
      yield return null;
    }

    trans.localScale = Vector2.one;
    playerFeedback = null;
  }

  
  /// <summary>
  /// Destroys the shape after playing the destroy animation (FadeOut)
  /// </summary>
  /// <param name="shapeBehavior"></param>
  /// <returns></returns>
  private IEnumerator DestroyShape(ShapeBehavior shapeBehavior)
  {
//    yield return new WaitForSeconds (waitTime);
    while (shapeBehavior.spriteRenderer.color.a >= 0.0f)
    {
      Color c = shapeBehavior.spriteRenderer.color;
      c.a -= Time.deltaTime * 10.0f;
      shapeBehavior.spriteRenderer.color = c;
      yield return null;
    }

    ChooseShapeProperties(shapeBehavior);
    shapes.RemoveFirst ();
    shapes.AddLast(shapeBehavior);
    shapeBehavior.transform.localScale = Vector3.one;
    shapeBehavior.triggered = false;
  }
  #endregion
  #region Shape Property Selection Logic
  private void ChooseShapeProperties(ShapeBehavior shape)
  {
    // Get index of a ShapeProperty in the Shape Properties Array
    int randomPosIndex = Random.Range(0, shapeProperties.Count);
    // Get index of a Sprite for Shape from Shape Properties Array
    int randomSpriteIndex = Random.Range(0, shapeProperties.Count);

    /*************************************************************************/
    // Logic for controlling the repetition of shapes
    /*************************************************************************/
    if (previousSprite != null)
    {
      if (shapeProperties[randomSpriteIndex].sprite.GetHashCode() == previousSprite.GetHashCode())
      {
        //Debug.Log("Shape Repeats");
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

    float nextPosition = shapeProperties[randomPosIndex].position.x;
    Sprite nextSprite = shapeProperties[randomSpriteIndex].sprite;
    previousSprite = nextSprite;
    shape.ClearBehaviors ();
    /*************************************************************************/
    // Choose Whether Shape Is Special
    /*************************************************************************/
//    int specialRandom = Random.Range(specialRandomRange.min, specialRandomRange.max);
//    int invRandom = Random.Range (invisibleRandomRange.min, invisibleRandomRange.max);
    int currentScore  = StatsManager.inst.score;

    if (CurveWeightedRandom(specialRandomCurve) > 0.5f && currentScore > minSpecialScore)
    {
      //Debug.Log("Special");
      shape.AddBehavior (((ref float t, ShapeBehavior s) => {
        t += Time.deltaTime;
        s.shapeResponse = ShapeBehavior.ShapeResponse.Opposite;
        s.transform.localScale = Vector3.one * (Mathf.PingPong (t, 0.2f) + 0.8f);
      }));
      shape.spriteRenderer.color = specialColor;
    }
    
    if (CurveWeightedRandom (invisibleRandomCurve) > 0.5f && currentScore > minInvisibleScore)
    {
      //Debug.Log ("Invisible");
      shape.AddBehavior (((ref float t, ShapeBehavior s) => {
        bool outOfScreen = s.transform.position.y >=
          (Camera.main.transform.position.y + Camera.main.orthographicSize) +
          ShapeManager.inst.invisibleFadeStartOffset;
        s.shapeType = ShapeBehavior.ShapeType.Invisible;
        if (!outOfScreen)
        {
          Color c = s.spriteRenderer.color;
          c.a -= Time.deltaTime * ShapeManager.inst.fadeOutSpeed * Mathf.Abs(ShapeManager.inst.currentSpeedPreset.speedMultiplier.y * 0.25f);
          s.spriteRenderer.color = c;
        }
      }));
    }
    /*************************************************************************/
    // Assign the selected properties to the shape
    /*************************************************************************/
    shape.transform.position = new Vector3
      (nextPosition, shapes.Last.Value.transform.position.y + shapeSpawnOffset.y, shape.transform.position.z);
    shape.spriteRenderer.sprite = nextSprite;
    /*************************************************************************/
    /*************************************************************************/
  }

  private IEnumerator FadeOutShapes ()
  {
    float alpha = shapes.First.Value.spriteRenderer.color.a;
    while (alpha > 0.0f)
    {
      alpha -= Time.deltaTime * 5.0f;
      Color c = new Color ();
      foreach (var v in shapes)
      {
        c = v.spriteRenderer.color;
        c.a = alpha;
        v.spriteRenderer.color = c;
      }
      
      yield return null;
    }
  }

  Coroutine fadeIn = null;
  struct CoroutineData
  {
    public CoroutineData (ShapeBehavior i, Coroutine c)
    {
      shape = i;
      coroutine = c;
    }
    public ShapeBehavior shape;
    public Coroutine coroutine;
  }

  private IEnumerator FadeInShape (CoroutineData data)
  {
    ShapeBehavior shape = data.shape;
    var alpha = shape.spriteRenderer.color.a;
    while (alpha < 1.0f)
    {
      Color c = shape.spriteRenderer.color;
      alpha += Time.deltaTime * 5.0f;
      c.a = alpha;
      shape.spriteRenderer.color = c;
      yield return null;
    }

    Color col = shape.spriteRenderer.color;
    col.a = 1.0f;
    shape.spriteRenderer.color = col;

    data.coroutine = null;
  }

  private IEnumerator FadeInShapes ()
  {
    Coroutine [] fade = new Coroutine[shapes.Count];
    int i = 0;
    foreach (ShapeBehavior shape in shapes)
    {
      fade [i] = StartCoroutine (FadeInShape (new CoroutineData (shape, fade [i])));
      ++i;
    }

    foreach (var c in fade)
    {
      if (c != null)
      {
        yield return null;
      }
    }

//    foreach (var v in shapes)
//    {
//      Color c = v.spriteRenderer.color;
//      c.a = 1.0f;
//      v.spriteRenderer.color = c;
//    }

//    yield return null;

    fadeIn = null;
  }

  private void SpawnShapes()
  {
    for (int i = 0; i < gameShapeCount; ++i)
    {
      GameObject go = Instantiate(shapePrefab) as GameObject;
      ShapeBehavior shape = go.GetComponent<ShapeBehavior>();

      shape.spriteRenderer = go.GetComponent<SpriteRenderer>();
      shape.spriteRenderer.sprite = shapeProperties[Random.Range(0, shapeProperties.Count)].sprite;
      shape.originalColor = shape.spriteRenderer.color;

      shape.transform.position = new Vector3
        (
          shapeProperties[Random.Range(0, shapeProperties.Count)].position.x,
          beginPosition.y + i * shapeSpawnOffset.y,
          shape.transform.position.z
          );

      shape.transform.parent = gameObject.transform;

      shapes.AddLast(shape);
      shape.StopGame();
      if (shape.GetComponent<Collider2D>() != null)
      {
        shapePair.Add(shape.GetComponent<Collider2D>().GetHashCode(), shape);
      }
    }
  }
  #endregion
  #region Experimental
  private void SpawnShapesTetrisMode()
  {
    for (int i = 0; i < shapePoolCount; ++i)
    {
      GameObject go = Instantiate(shapePrefab) as GameObject;
      ShapeBehavior shape = go.GetComponent<ShapeBehavior>();

      shape.spriteRenderer = go.GetComponent<SpriteRenderer>();
      shape.originalColor = shape.spriteRenderer.color;

      PlayerShapeTrigger trigger = go.AddComponent<PlayerShapeTrigger>();
      trigger.spriteRenderer = shape.spriteRenderer;
      trigger.enabled = false;

      shapePool.AddShape(shape);

      go.SetActive(false);
      go.transform.parent = gameObject.transform;
    }

    for (int i = 0; i < gameShapeCount; ++i)
    {
      ShapeBehavior shape = shapePool.UseShape();

      shape.gameObject.SetActive(true);

      shape.spriteRenderer.sprite = shapeProperties[Random.Range(0, shapeProperties.Count)].sprite;

      shape.transform.position = beginPosition + i * shapeSpawnOffset;
      shape.transform.position = new Vector3
        (shapeProperties[Random.Range(0, shapeProperties.Count)].position.x, shape.transform.position.y, shape.transform.position.z);

      shape.transform.parent = gameObject.transform;

      shapes.AddLast(shape);
      shape.StopGame();
      shape.shapeResponse = ShapeBehavior.ShapeResponse.Normal;
      shapePair.Add(shape.GetComponent<Collider2D>().GetHashCode(), shape);
    }
  }
  #endregion

  #if UNITY_EDITOR
  private void DeserializeBPMData ()
  {
    System.Xml.Serialization.XmlSerializer serializer = new System.Xml.Serialization.XmlSerializer(typeof(Config));
    System.IO.TextReader reader = null;
    if (!System.IO.File.Exists(Application.persistentDataPath + "/Config.xml"))
    {
      System.IO.TextWriter writer = new System.IO.StreamWriter(Application.persistentDataPath + "/Config.xml");
      Config newConfig = new Config();
      serializer.Serialize(writer, newConfig);
      writer.Close();
      reader = new System.IO.StreamReader(Application.persistentDataPath + "/Config.xml");
    }
    else
    {
      reader = new System.IO.StreamReader(Application.persistentDataPath + "/Config.xml");
    }

    config = (Config)serializer.Deserialize(reader);

    for (int i = 0; i < speedPresets.Length; ++i)
      times.Add (new List<float>());
  }
  #endif

}