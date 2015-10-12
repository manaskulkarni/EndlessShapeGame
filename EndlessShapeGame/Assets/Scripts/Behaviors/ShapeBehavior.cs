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

  // Public Members
  public SpriteRenderer spriteRenderer { get; set; }
  public Color originalColor { get; set; }
  public bool triggered { get; set; }
  public ShapeResponse shapeResponse { get; set; }
  private Coroutine updatePosition { get; set; }
  private Coroutine updateSpecial { get; set; }

  // Use this for initialization
  public void StartGame ()
  {
//    InvokeRepeating  ("UpdatePositionInvoke", Time.time, Time.deltaTime);
    if (updatePosition == null)
    {
      updatePosition = StartCoroutine (UpdatePosition ());
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

    if (updateSpecial != null)
    {
      StopCoroutine (updateSpecial);
      updateSpecial = null;
    }
  }

  // Update is called once per frame
  private IEnumerator UpdatePosition ()
  {
    while (true)
    {
      Vector2 pos = gameObject.transform.position;
      pos += ShapeManager.inst.currentSpeedPreset.speedMultiplier * Time.deltaTime;
      gameObject.transform.position = new Vector3 (pos.x, pos.y, gameObject.transform.position.z);
      yield return null;
    }
  }

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

  private void UpdatePositionInvoke ()
  {
    Vector2 pos = gameObject.transform.position;
    pos += ShapeManager.inst.currentSpeedPreset.speedMultiplier * Time.deltaTime;
    gameObject.transform.position = new Vector3 (pos.x, pos.y, gameObject.transform.position.z);
  }
  
//  void OnTriggerEnter2D (Collider2D coll)
//  {
//    ShapeManager.inst.ShapeTriggered (this, /*coll.gameObject.GetComponent <SpriteRenderer> ()*/null);
//  }

}
