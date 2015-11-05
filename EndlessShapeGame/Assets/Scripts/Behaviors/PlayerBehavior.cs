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
  /// <summary>
  /// Children shapes attached to gameObject
  /// </summary>
  public List<Transform> shapes { get; private set; }
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
  #endregion

  // Use this for initialization
  void Awake()
  {
    shapes = new List<Transform>();
    triggers = new List<PlayerShapeTrigger>();
    ConfigurePlayer();
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
    foreach (var v in shapes)
    {
      StartCoroutine(SlideRight(v.transform));
    }
  }

  /// <summary>
  /// Sent by PlayerInput
  /// </summary>
  public void GoLeft()
  {
    foreach (var v in shapes)
    {
      StartCoroutine(SlideLeft(v.transform));
    }
  }

  #region Player Logic
  /// <summary>
  /// Configure player based on number of children, set offsets...
  /// </summary>
  private void ConfigurePlayer()
  {
    SortedList<float, Transform> list = new SortedList<float, Transform>();

    for (int i = 0; i < gameObject.transform.childCount; ++i)
    {
      Transform v = gameObject.transform.GetChild(i);
      list.Add(v.position.x, v);
    }

    foreach (var v in list)
    {
      shapes.Add(v.Value);
      triggers.Add(v.Value.GetComponent<PlayerShapeTrigger>());
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
  private IEnumerator SlideRight(Transform v)
  {
    float nextPos = v.position.x + shapeOffset.x;

    if (nextPos > maxXPosition)
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
  }

  private IEnumerator SlideLeft(Transform v)
  {
    float nextPos = v.position.x - shapeOffset.x;

    if (nextPos < minXPosition)
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
    #endregion
  }

}