using UnityEngine;
using System.Collections;

public class PlayerShapeTrigger : MonoBehaviour
{

  #region Properties
  public SpriteRenderer spriteRenderer { get; set; }
  #endregion

  void Awake ()
  {
  }

//   Use this for initialization
  void Start ()
  {
    spriteRenderer = gameObject.GetComponent <SpriteRenderer> ();
    Color color = spriteRenderer.color;
    color.a = PlayerManager.inst.startPlayerAlpha;
    spriteRenderer.color = color;
  }

  void OnTriggerEnter2D (Collider2D coll)
  {
    //Debug.Log(Time.fixedTime.ToString("F4"));
    // Only Proceed if the shape has not been triggered yet
    if (!ShapeManager.inst.shapePair [coll.GetHashCode ()].triggered)
    {
      Debug.Log("TIME: " + Time.fixedTime);
      ShapeManager.inst.shapePair [coll.GetHashCode ()].triggered = true;
      ShapeManager.inst.ShapeTriggered (ShapeManager.inst.shapePair [coll.GetHashCode ()], spriteRenderer);
    }
  }

}
