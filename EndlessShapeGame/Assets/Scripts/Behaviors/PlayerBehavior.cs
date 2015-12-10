using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// Controls how the player moves based on swipe
/// </summary>
public class PlayerBehavior : MonoBehaviour
{

  #region Properties
  // Public Members
  /// <summary>
  /// Swipe Speed Multiplier for interpolation when swiping
  /// </summary>
  public float swipeSpeedMultiplier;
  public bool wrap = false;
  /// <summary>
  /// Make swipe speed dependent on fall speed of shapes so you swipe faster as shapes fall faster
  /// </summary>
  public float swipeSpeed
  {
    get
    {
      return swipeSpeedMultiplier * Mathf.Abs(ShapeManager.inst.currentSpeedPreset.speedMultiplier.y / ShapeManager.inst.currentSpeedPreset.maxSpeed.y);
    }
  }

  public class Test
  {
    public Test (Transform t, int ind)
    {
      transform = t;
      index = ind;
    }
    public Transform transform;
    public int index;

    public Vector3 position
    {
      get { return transform.position; }
      set { transform.position = value; }
    }

    public GameObject gameObject
    {
      get { return transform.gameObject; }
    }
  }

  /// <summary>
  /// Children shapes attached to gameObject
  /// </summary>
  public List<Test> shapes { get; private set; }
  public List<PlayerShapeTrigger> triggers { get; private set; }
  #endregion
  #region Private Properties
  /// <summary>
  /// (X) Offset between each child shape
  /// </summary>
  private Vector3 shapeOffset { get; set; }
  /// <summary>
  /// Position of leftmost child
  /// </summary>
  private float minXPosition { get; set; }
  /// <summary>
  /// Position of rightmost child
  /// </summary>
  private float maxXPosition { get; set; }
  private Coroutine[] slideCoroutine;
  private bool[] done;
  private bool[] waitDone;
  private int state;
  private List <float> targets;

  public event System.EventHandler SwipeEvent;
  #endregion

  // Use this for initialization
  void Awake()
  {
    shapes = new List<Test>();
    triggers = new List<PlayerShapeTrigger>();
    ConfigurePlayer();
    slideCoroutine = new Coroutine[shapes.Count];

    done = new bool[shapes.Count];
    waitDone = new bool[shapes.Count];
    for (int i = 0; i < done.Length; ++i)
    {
      done[i] = true;
      waitDone [i] = true;
    }
  }
  
  void Start ()
  {
  }

  public void InputDetected()
  {
    foreach (var v in shapes)
    {
      v.position -= shapeOffset;
      if (v.position.x < minXPosition)
      {
        v.position = new Vector3(maxXPosition, v.position.y, v.position.z);
      }
    }
  }

  /// <summary>
  /// Sent by PlayerInput
  /// </summary>
  public void GoRight()
  {
    for (int i = 0; i < shapes.Count; ++i)
    {
      //if (!done[i])
      //{
      //  if (waitDone[i])
      //  {
      //    StartCoroutine (WaitForSlide (i, state));
      //    // StopCoroutine(slideCoroutine[i]);
      //  }
      //  continue;
      //}
      StartCoroutine(SlideRight(i));
    }

    EventManager.SendEvent (this, SwipeEvent, null);
    state = 1;
  }

  /// <summary>
  /// Sent by PlayerInput
  /// </summary>
  public void GoLeft()
  {
    for (int i = 0; i < shapes.Count; ++i)
    {
      //if (!done[i])
      //{
      //  if (waitDone[i])
      //  {
      //    StartCoroutine (WaitForSlide (i, state));
      //    // StopCoroutine(slideCoroutine[i]);
      //  }
      //  continue;
      //}
      slideCoroutine [i] = StartCoroutine(SlideLeft(i));
    }

    EventManager.SendEvent (this, SwipeEvent, null);
    state = -1;
  }

  public bool Ready ()
  {
    foreach (var v in done)
    {
      if (!v)
        return false;
    }

    return true;
  }

  private IEnumerator WaitForSlide (int i, int s)
  {
    waitDone [i] = false;
    var oldSwipeSpeedMult = swipeSpeedMultiplier;
    swipeSpeedMultiplier = 1000.0f;
    StopCoroutine (slideCoroutine[i]);
    if (s == -1)
    {
      SlideLeft(i);
    }
    else
    {
      SlideRight(i);
    }

    swipeSpeedMultiplier = oldSwipeSpeedMult;
    if (state == -1)
    {
      slideCoroutine[i] = StartCoroutine(SlideLeft(i));
    }
    else
    {
      slideCoroutine[i] = StartCoroutine(SlideRight(i));
    }
    
    waitDone [i] = true;
    yield return null;
  }

  #region Player Logic
  /// <summary>
  /// Configure player based on number of children, set offsets...
  /// </summary>
  private void ConfigurePlayer()
  {
    SortedList<float, Transform> list = new SortedList<float, Transform>();
    targets = new List <float>();

    for (int i = 0; i < gameObject.transform.childCount; ++i)
    {
      Transform v = gameObject.transform.GetChild(i);
      list.Add(v.position.x, v);
    }

    int j = 0;
    foreach (var v in list)
    {
      shapes.Add(new Test (v.Value, j));
      triggers.Add(v.Value.GetComponent<PlayerShapeTrigger>());
      targets.Add (v.Value.position.x);
      ++j;
    }

    shapeOffset = new Vector3(Mathf.Abs(shapes[0].position.x - shapes[1].position.x),
                               Mathf.Abs(shapes[0].position.y - shapes[1].position.y),
                               Mathf.Abs(shapes[0].position.z - shapes[1].position.z)
                               );

    minXPosition = shapes[0].transform.position.x;
    maxXPosition = shapes[shapes.Count - 1].transform.position.x;
  }
  
  #endregion
  #region Coroutines
  private IEnumerator SlideRight(int i)
  {
    done[i] = false;
    Transform v = shapes[i].transform;
    float nextPos = targets[shapes[i].index] + shapeOffset.x;

    if (shapes[i].index == shapes.Count - 1)
    {
      shapes[i].index = 0;
    }
    else
    {
      ++shapes[i].index;
    }

    if (nextPos > maxXPosition)
    {
      if (wrap)
      {
        float xOut = Camera.main.transform.position.x + (Camera.main.orthographicSize * 0.5f) + v.localScale.x;
        while (v.position.x < xOut)
        {
          Vector2 pos = v.position;
          pos.x += Time.deltaTime * swipeSpeed;
          
          if (pos.x > xOut)
          {
            pos.x = xOut;
            v.position = pos;
            break;
          }
          
          v.position = pos;
          yield return null;
        }
        
        float xIn = -xOut;
        v.position = new Vector2 (xIn, v.position.y);
        
        while (v.position.x < minXPosition)
        {
          Vector2 pos = v.position;
          pos.x += Time.deltaTime * swipeSpeed;
          
          if (pos.x > minXPosition)
          {
            pos.x = minXPosition;
            v.position = pos;
            break;
          }
          
          v.position = pos;
          yield return null;
        }
      }
      else
      {
        while (v.position.x > minXPosition)
        {
          Vector2 pos = v.position;
          pos.x -= Time.deltaTime * swipeSpeed;
  
          if (pos.x < minXPosition)
          {
            pos.x = minXPosition;
            v.position = pos;
            break;
          }
  
          v.position = pos;
          yield return null;
        }
      }
    }
    else
    {
      while (v.position.x < nextPos)
      {
        Vector3 pos = v.position;
        pos.x += Time.deltaTime * swipeSpeed;

        if (pos.x > nextPos)
        {
          pos.x = nextPos;
          v.position = pos;
          break;
        }

        v.position = pos;
        yield return null;
      }
    }

    done[i] = true;
    yield return null;
  }

  private IEnumerator SlideLeft(int i)
  {
    done[i] = false;
    Transform v = shapes[i].transform;
    float nextPos = targets[shapes[i].index] - shapeOffset.x;

    if (shapes[i].index == 0)
    {
      shapes[i].index = shapes.Count - 1;
    }
    else
    {
      --shapes[i].index;
    }

    if (nextPos < minXPosition)
    {
      if (wrap)
      {
        float xOut = Camera.main.transform.position.x - (Camera.main.orthographicSize * 0.5f) - v.localScale.x;
        while (v.position.x > xOut)
        {
          Vector2 pos = v.position;
          pos.x -= Time.deltaTime * swipeSpeed;
          
          if (pos.x < xOut)
          {
            pos.x = xOut;
            v.position = pos;
            break;
          }
          
          v.position = pos;
          yield return null;
        }
        float xIn = -xOut;
        v.position = new Vector2 (xIn, v.position.y);
        while (v.position.x > maxXPosition)
        {
          Vector2 pos = v.position;
          pos.x -= Time.deltaTime * swipeSpeed;
          
          if (pos.x < maxXPosition)
          {
            pos.x = maxXPosition;
            v.position = pos;
            break;
          }
          
          v.position = pos;
          yield return null;
        }
      }
      else
      {
        while (v.position.x < maxXPosition)
        {
          Vector2 pos = v.position;
          pos.x += Time.deltaTime * swipeSpeed;
  
          if (pos.x > maxXPosition)
          {
            pos.x = maxXPosition;
            v.position = pos;
            break;
          }
  
          v.position = pos;
          yield return null;
        }
      }
    }
    else
    {
      while (v.position.x > nextPos)
      {
        Vector3 pos = v.position;
        pos.x -= Time.deltaTime * swipeSpeed;

        if (pos.x < nextPos)
        {
          pos.x = nextPos;
          v.position = pos;
          break;
        }

        v.position = pos;
        yield return null;
      }

    }
    done[i]  = true;
    yield return null;
  }
    #endregion

}