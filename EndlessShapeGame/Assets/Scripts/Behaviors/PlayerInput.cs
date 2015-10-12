using UnityEngine;
using System.Collections;
using TouchScript.Gestures;

public class PlayerInput : MonoBehaviour
{
  #region Private Properties
  private FlickGesture flick { get; set; }
  #endregion

  // Use this for initialization
  void Start ()
  {
    flick = gameObject.GetComponent <FlickGesture> ();
    flick.Flicked += HandleFlicked;
  }

  #region Events
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
  #endregion
}
