using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Xml;
using System.Linq;

public class ShapeManager : Manager
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
  public struct SpeedPreset
  {
    public Vector2 speedMultiplier;
    public Vector2 accelerationMultiplier;
    public int speedIncreaseBlockInterval;
    public Vector2 maxSpeed;
  }

  /// <summary>
  /// Data Structure holding the visual properties of shapes
  /// </summary>
  public struct ShapeProperties
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
  public struct IntRange
  {
    public int min;
    public int max;

    public bool Contains (int val)
    {
      return val >= min && val <= max;
    }
  }

  [System.Serializable]
  /// <summary>
  /// Data Structure with Speed Interval and The Speed Preset for that interval
  /// </summary>
  public struct BlockInterval
  {
    public SpeedPreset preset;
    public IntRange scoreInterval;
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
  int currentIntervalIndex;
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
  /// <summary>
  /// Range for spawning random number for special random
  /// </summary>
  public IntRange specialRandomRange;
  /// <summary>
  /// Range to compare whether to spawn special shape
  /// </summary>
  public IntRange specialRandomRangeCompare;
  /// <summary>
  /// Range for spawning random number for special random
  /// </summary>
  public IntRange invisibleRandomRange;
  /// <summary>
  /// Range to compare whether to spawn invisible shape
  /// </summary>
	public IntRange invisibleRandomRangeCompare;
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
  public List<ShapeBehavior> shapes { get; private set; }
  public int spawnCount { get; private set; }
  public PlayerBehavior player { get; private set; }
  public SortedDictionary<int, ShapeBehavior> shapePair { get; private set; }
  #endregion
  #region Private Properties
  // Private Members
  public SpeedPreset currentSpeedPreset;

  private Coroutine updateSpeed { get; set; }
  private int repeatCount { get; set; }
  private Sprite previousSprite { get; set; }
  private int shuffleCounter { get; set; }
  private float startDelay { get; set; }

#if UNITY_EDITOR
  List<float> bpms = new List<float>();
  List<List<float>> times = new List<List<float>>(); 
#endif


#endregion
  #region Static Properties
  static public ShapeManager inst { get; private set; }
  #endregion

  void Awake()
  {
    if (inst == null)
    {
      inst = this;
      shapeProperties = new List<ShapeProperties>();
      shapes = new List<ShapeBehavior>();
      shapePair = new SortedDictionary<int, ShapeBehavior>();
      shapePool = new ShapePool();
      specialFeedback.gameObject.SetActive(false);
      gameOverFeedback.gameObject.SetActive(false);
    }
    else
    {
      GameObject.Destroy(gameObject);
    }
  }

  // Use this for initialization
  void Start()
  {
    for (int i = 0; i < speedPresets.Length; ++i)
      times.Add (new List<float>());
    OnGameReset(null, null);
  }

  public struct AudioData
  {
    public AudioData (float _bpm, BlockInterval interval)
    {
      bpm = _bpm;
      speedMultiplier = interval.preset.speedMultiplier;
      scoreRange = interval.scoreInterval;
    }
    [System.Xml.Serialization.XmlElement("bpm")]
    public float bpm;
    [System.Xml.Serialization.XmlElement("speed")]
    public Vector2 speedMultiplier;
    [System.Xml.Serialization.XmlElement("score")]
    public IntRange scoreRange;
  }

  void OnDestroy ()
  {
#if UNITY_EDITOR
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
        bpmData.Add(new AudioData(avg, speedPresets[i]));

        System.Xml.Serialization.XmlSerializer serializer = new System.Xml.Serialization.XmlSerializer(typeof (AudioData));
        System.IO.TextWriter writer = new System.IO.StreamWriter(Application.dataPath + "AudioTesting/BPM_" +
          speedPresets[i].scoreInterval.min.ToString () + "_" + speedPresets[i].scoreInterval.max.ToString () + ".xml");
        serializer.Serialize(writer, bpmData [bpmData.Count - 1]);
      }
    }
#endif
  }

  /// <summary>
  /// Updates the speed of the shapes based on presets
  /// </summary>
  /// <returns></returns>
  private IEnumerator UpdateSpeed()
  {
    while (true)
    {
      currentSpeedPreset.speedMultiplier += currentSpeedPreset.accelerationMultiplier * Time.deltaTime;
      if (currentSpeedPreset.speedMultiplier.sqrMagnitude > currentSpeedPreset.maxSpeed.sqrMagnitude)
      {
        break;
      }

      yield return null;
    }
  }

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

  /// <summary>
  /// Shape for hard-coding position of base shape on game over. Not used
  /// </summary>
  private Transform baseShape { get; set; }

  /// <summary>
  /// Shape for hard-coding position of top shape on game over. Not used
  /// </summary>
  private Transform topShape { get; set; }
  bool first = true;
  #region ShapeManager Logic
  /// <summary>
  /// Called by PlayerBehavior when it collides with a ShapeBehavior
  /// </summary>
  /// <param name="shapeBehavior"></param>
  /// <param name="spriteRenderer"></param>
  public void ShapeTriggered(ShapeBehavior shapeBehavior, SpriteRenderer spriteRenderer)
  {
    if (first)
    {
      first = false;
      AudioManager.inst.Play();
    }

    if (GameManager.inst.playing)
    {
      bool sameSprite = shapeBehavior.spriteRenderer.sprite.GetHashCode() == spriteRenderer.sprite.GetHashCode();

#if UNITY_EDITOR
      times[currentIntervalIndex].Add(Time.fixedTime);
#endif

      /***********************************************************************/
      // If Player sprite collides with shape of same sprite
      /***********************************************************************/
      switch (shapeBehavior.shapeResponse)
      {
        case ShapeBehavior.ShapeResponse.Normal:
          if (sameSprite)
          {
            // Shuffle the shape properties to increase randomness
            Shuffle<ShapeProperties>(shapeProperties);

            // Add Point to Player Stats
            StatsManager.inst.AddPoint();
            UIManager.inst.UpdateScore();

            if (currentIntervalIndex + 1 < speedPresets.Length)
            if (!speedPresets [currentIntervalIndex].scoreInterval.Contains (StatsManager.inst.score))
            {
              currentSpeedPreset = speedPresets[++currentIntervalIndex].preset;
            }

            StartCoroutine(DestroyShape(shapeBehavior));
          }
          else
          {
            // Store the currrent top shape position to avoid artifacts (Currently not used)
            baseShape = spriteRenderer.transform;
            topShape = shapeBehavior.transform;
            topShape.position = new Vector3(topShape.position.x, baseShape.position.y + 1.21f, topShape.position.z);

            // Play Particle Effect
            gameOverFeedback.startColor = shapeBehavior.originalColor;
            gameOverFeedback.gameObject.SetActive(true);
            gameOverFeedback.transform.position = shapeBehavior.transform.position;
            gameOverFeedback.Play();

            // Choose the properties of the shape for next game
            ChooseShapeProperties(shapeBehavior);
            shapes.RemoveAt(0);
            shapes.Add(shapeBehavior);
            shapeBehavior.transform.localScale = Vector3.one;
            //          shapeBehavior.triggered = false;
            GameManager.inst.GameOver();
          }
          break;
        case ShapeBehavior.ShapeResponse.Opposite:
          // Choose which particle system to use
          ParticleSystem feedback = sameSprite ? gameOverFeedback : specialFeedback;
          feedback.startColor = specialColor;
          feedback.gameObject.SetActive(true);
          feedback.transform.position = shapeBehavior.transform.position;
          feedback.Play();

          // Response is opposite, so send game over event is sprites are same
          if (sameSprite)
          {
            // Shuffle the shape properties to increase randomness
            baseShape = spriteRenderer.transform;
            topShape = shapeBehavior.transform;
            topShape.position = new Vector3(topShape.position.x, baseShape.position.y + 1.21f, topShape.position.z);

            ChooseShapeProperties(shapeBehavior);
            shapes.RemoveAt(0);
            shapes.Add(shapeBehavior);
            shapeBehavior.transform.localScale = Vector3.one;
            //          shapeBehavior.triggered = false;
            GameManager.inst.GameOver();
          }
          else
          {
            Shuffle<ShapeProperties>(shapeProperties);
            StartCoroutine(DestroyShape(shapeBehavior));
          }
          break;
        default:
          break;
      }
    }
  }
  #endregion
  #region implemented abstract members of Manager
  public override void OnGameReset(object sender, System.EventArgs args)
  {
    foreach (var v in shapes)
    {
      GameObject.Destroy(v.gameObject);
    }

    shapes.Clear();
    shapePair.Clear();
    shapeProperties.Clear();
    player = null;
    currentIntervalIndex = 0;
    currentSpeedPreset = speedPresets[currentIntervalIndex].preset;

    player = GameObject.FindObjectOfType<PlayerBehavior>();

    foreach (Transform v in PlayerManager.inst.playerPresets[(int)GameManager.inst.gameSettings.dificultyLevel].prefab.transform)
    {
      shapeProperties.Add(new ShapeProperties(v.gameObject.GetComponent<SpriteRenderer>().sprite, v.position));
    }

    SpawnShapes();
  }

  public override void OnGameStart(object sender, System.EventArgs args)
  {
    StartCoroutine(DelayStart());
    // Dont use Update as it is slow. Instead use coroutines
    updateSpeed = StartCoroutine(UpdateSpeed());
  }

  public override void OnGameOver(object sender, System.EventArgs args)
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
  }

  public override void OnGameRestart(object sender, System.EventArgs args)
  {
    startDelay = 0.7f;
    currentIntervalIndex = 0;
    currentSpeedPreset = speedPresets[currentIntervalIndex].preset;
  }

  [System.Obsolete("Difficulty Modes Not Supported Anymore. Single Difficulty Mode")]
  public override void OnDifficultyChange(object sender, System.EventArgs args)
  {
    OnGameReset(null, null);
  }

  [System.Obsolete("Speed Modes Not Supported Anymore. Single Speed Mode")]
  public override void OnSpeedChange(object sender, System.EventArgs args)
  {
    //currentSpeedPreset = speedPresets[(int)GameManager.inst.gameSettings.speedLevel];
  }

  #endregion

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
      v.triggered = false;
    }
  }
  /// <summary>
  /// Destroys the shape after playing the destroy animation (FadeOut)
  /// </summary>
  /// <param name="shapeBehavior"></param>
  /// <returns></returns>
  private IEnumerator DestroyShape(ShapeBehavior shapeBehavior)
  {
    while (shapeBehavior.spriteRenderer.color.a >= 0.0f)
    {
      Color c = shapeBehavior.spriteRenderer.color;
      c.a -= Time.deltaTime * 10.0f;
      shapeBehavior.spriteRenderer.color = c;
      yield return null;
    }

    ChooseShapeProperties(shapeBehavior);
    shapes.RemoveAt(0);
    shapes.Add(shapeBehavior);
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
    /*************************************************************************/
    // Choose Whether Shape Is Special
    /*************************************************************************/
    int specialRandom = Random.Range(specialRandomRange.min, specialRandomRange.max);
    int invRandom = Random.Range (invisibleRandomRange.min, invisibleRandomRange.max);
    int currentScore  = StatsManager.inst.score;

    if (specialRandomRangeCompare.Contains (specialRandom) && currentScore > minSpecialScore)
    {
      //Debug.Log("Special");
      shape.StartSpecialShapeCoroutine(ShapeBehavior.ShapeResponse.Opposite);
      shape.spriteRenderer.color = specialColor;
    }
    else
    {
      shape.StopSpecialShapeCoroutine();
      shape.spriteRenderer.color = shape.originalColor;
    }
    
    if (invisibleRandomRangeCompare.Contains (invRandom) && currentScore > minInvisibleScore)
    {
      //Debug.Log ("Invisible");
      shape.StartInvisibleCoroutine ();
    }
    else
    {
      shape.StopInvisibleCoroutine ();
    }
    /*************************************************************************/
    // Assign the selected properties to the shape
    /*************************************************************************/
    shape.transform.position = new Vector3
      (nextPosition, shapes[shapes.Count - 1].transform.position.y + shapeSpawnOffset.y, shape.transform.position.z);
    shape.spriteRenderer.sprite = nextSprite;
    /*************************************************************************/
    /*************************************************************************/
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

      shapes.Add(shape);
      shape.StopGame();
      shapePair.Add(shape.GetComponent<Collider2D>().GetHashCode(), shape);
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

      shapes.Add(shape);
      shape.StopGame();
      shape.shapeResponse = ShapeBehavior.ShapeResponse.Normal;
      shapePair.Add(shape.GetComponent<Collider2D>().GetHashCode(), shape);
    }
  }
  #endregion

}