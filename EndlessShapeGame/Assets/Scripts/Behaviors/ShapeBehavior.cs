﻿using UnityEngine;
using System.Collections;

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

  // Use this for initialization
  public void StartGame ()
  {
    triggered = false;
    //    InvokeRepeating  ("UpdatePositionInvoke", Time.time, Time.deltaTime);
//    if (updatePosition == null)
//    {
//      updatePosition = StartCoroutine (UpdatePosition ());
//    }
    update = true;

    if (shapeType == ShapeType.Invisible)
    {
      updateInvisible = StartCoroutine (UpdateInvisible ());
    }
  }

  public void StopGame ()
  {
    //    CancelInvoke ("UpdatePositionRepeat");
    if (updatePosition != null)
    {
      StopCoroutine (updatePosition);
      updatePosition = null;
    }
    update = false;
    if (updateInvisible != null)
    {
      StopCoroutine (updateInvisible);
      updateInvisible = null;
    }
  }

  public void ResetProperties ()
  {
    StopSpecialShapeCoroutine ();
    StopInvisibleCoroutine ();
    transform.localScale = Vector2.one;
  }
  
  public void StartSpecialShapeCoroutine (ShapeResponse response)
  {
    shapeResponse = response;

    if (updateSpecial == null)
    {
      switch (shapeResponse)
      {
        case ShapeResponse.Opposite:
          updateSpecial = StartCoroutine(UpdateSpecial());
          break;
      }
    }
  }

  public void StopSpecialShapeCoroutine ()
  {
    shapeResponse = ShapeResponse.Normal;
    spriteRenderer.color = originalColor;

    if (updateSpecial != null)
    {
      StopCoroutine (updateSpecial);
      updateSpecial = null;
    }
  }
  
  public void StartInvisibleCoroutine ()
  {
    shapeType = ShapeType.Invisible;
    
    updateInvisible = StartCoroutine (UpdateInvisible ());
  }
  
  public void StopInvisibleCoroutine ()
  {
    shapeType = ShapeType.Normal;
    
    if (updateInvisible != null)
    {
      StopCoroutine (updateInvisible);
      updateInvisible = null;
    }
  }

  void Update ()
  {
    if (update)
    {
      gameObject.transform.position = new Vector2
        (transform.position.x,
         transform.position.y + ShapeManager.inst.currentSpeedPreset.speedMultiplier.y * Time.smoothDeltaTime);
//      gameObject.transform.Translate (Vector2.up * ShapeManager.inst.currentSpeedPreset.speedMultiplier.y * Time.deltaTime);
    }
  }

//  // Update is called once per frame
//  private IEnumerator UpdatePosition ()
//  {
//    while (true)
//    {
//      gameObject.transform.position = new Vector2
//        (transform.position.x,
//         transform.position.y + ShapeManager.inst.currentSpeedPreset.speedMultiplier.y * Time.deltaTime);
////      gameObject.transform.Translate (Vector2.up * ShapeManager.inst.currentSpeedPreset.speedMultiplier.y * Time.smoothDeltaTime);
//      yield return null;
//    }
//  }

  private IEnumerator UpdateSpecial ()
  {
    while (true)
    {
      while (transform.localScale.x >= 0.8f)
      {
        Vector2 scale = transform.localScale;
        scale -= Vector2.one * Time.deltaTime;
        transform.localScale = scale;
        yield return null;
      }

      while (transform.localScale.x <= 1.0f)
      {
        Vector2 scale = transform.localScale;
        scale += Vector2.one * Time.deltaTime;
        transform.localScale = scale;
        yield return null;
      }

      yield return null;
    }
  }
  
  private IEnumerator UpdateInvisible ()
  {
    while (spriteRenderer.color.a > 0.0f)
    {
      bool outOfScreen = gameObject.transform.position.y >=
      (Camera.main.transform.position.y + Camera.main.orthographicSize) +
      ShapeManager.inst.invisibleFadeStartOffset;
      
      if (!outOfScreen)
      {
        Color c = spriteRenderer.color;
        c.a -= Time.deltaTime * ShapeManager.inst.fadeOutSpeed * Mathf.Abs(ShapeManager.inst.currentSpeedPreset.speedMultiplier.y * 0.25f);
        spriteRenderer.color = c;
        yield return null;
      }
      
      yield return null;
    }
  }
  
//  void OnTriggerEnter2D (Collider2D coll)
//  {
//    ShapeManager.inst.ShapeTriggered (this, /*coll.gameObject.GetComponent <SpriteRenderer> ()*/null);
//  }

}
