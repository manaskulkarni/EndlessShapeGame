using UnityEngine;
using System.Collections;

public class PlayerShapeTrigger : MonoBehaviour
{

  // Public Members
  public bool original
  {
    get;
    set;
  }

  // Private Members
  public SpriteRenderer spriteRenderer
  {
    get;
    set;
  }

  void Awake ()
  {
    original = false;
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
    if (!ShapeManager.inst.shapePair [coll.GetHashCode ()].triggered)
    {
      ShapeManager.inst.shapePair [coll.GetHashCode ()].triggered = true;
      ShapeManager.inst.ShapeTriggered (ShapeManager.inst.shapePair [coll.GetHashCode ()], spriteRenderer);
    }
  }

}
