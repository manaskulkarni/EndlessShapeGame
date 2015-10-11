using UnityEngine;
using System.Collections;
using TouchScript.Gestures;

public class PlayerInput : MonoBehaviour
{

  // Public Members

  // Private Members

  private Vector3 startPosition
  {
    get;
    set;
  }

  private Vector3 endPosition
  {
    get;
    set;
  }

  private FlickGesture flick
  {
    get;
    set;
  }

//  float swipeSpeed = 0.05F;
//  float inputX;
//  float inputY;
  
  // Use this for initialization
  void Start ()
  {
    flick = gameObject.GetComponent <FlickGesture> ();
    flick.Flicked += HandleFlicked;
  }

  void HandleFlicked (object sender, System.EventArgs e)
  {
//    Debug.Log ("Flicked");
    if (flick.ScreenFlickVector.x < 0.0f)
    {
      PlayerManager.inst.player.GoLeft ();
    }
    else
    {
      PlayerManager.inst.player.GoRight ();
    }
  }
  
}
