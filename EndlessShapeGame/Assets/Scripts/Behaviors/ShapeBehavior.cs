using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class ShapeBehavior : MonoBehaviour
{
  public enum ShapeResponse
  {
    Normal,
    Opposite,
    ShapeResponseCount,
  }
  
  public enum ShapeType
  {
  	Normal,
  	Invisible,
    Collectible,
  }

  // Public Members
  public SpriteRenderer spriteRenderer { get; set; }
  public Color originalColor { get; set; }
  public bool triggered { get; set; }
  public ShapeResponse shapeResponse { get; set; }
  public ShapeType shapeType { get; set; }
  private Coroutine updatePosition { get; set; }
  private Coroutine updateSpecial { get; set; }
  private Coroutine updateInvisible { get; set; }
  private bool update { get; set; }
  private int behaviorCounter { get; set; }

  public class BehaviorData
  {
    public BehaviorHandle del;
    public float t;
  }

  public delegate void BehaviorHandle (ref float t, ShapeBehavior shape);
  private BehaviorData [] behaviors;

  private const int MAX_BEHAVIORS = 4;

  void Start ()
  {
    behaviorCounter = 0;

    behaviors = new BehaviorData[MAX_BEHAVIORS] {
      new BehaviorData { del = null, t = 0.0f },
      new BehaviorData { del = null, t = 0.0f },
      new BehaviorData { del = null, t = 0.0f },
      new BehaviorData { del = null, t = 0.0f }
    };

    AddBehavior (((ref float t, ShapeBehavior shape) =>
    {
      transform.position += transform.up * ShapeManager.inst.currentSpeedPreset.speedMultiplier.y * Time.deltaTime;
    }));
  }

  // Use this for initialization
  public void StartGame ()
  {
    triggered = false;
    update = true;
  }

  public void ClearBehaviors ()
  {
    behaviorCounter = 1;
    shapeResponse = ShapeResponse.Normal;
    shapeType = ShapeType.Normal;
    spriteRenderer.color = originalColor;
    transform.localScale = Vector3.one;
  }

  public void AddBehavior (BehaviorHandle b)
  {
    if (behaviorCounter >= MAX_BEHAVIORS)
    {
      behaviorCounter = MAX_BEHAVIORS - 1;
    }

    var behavior = behaviors [behaviorCounter];
    behavior.del = b;
    behavior.t = 0.0f;

    ++behaviorCounter;
  }

  public void StopGame ()
  {
    update = false;
  }

  public void ResetProperties ()
  {
    ClearBehaviors ();
  }

  void Update ()
  {
    if (update)
    {
      for (int i = 0; i < behaviorCounter; ++i)
        behaviors [i].del (ref behaviors [i].t, this);
    }
  }

}
