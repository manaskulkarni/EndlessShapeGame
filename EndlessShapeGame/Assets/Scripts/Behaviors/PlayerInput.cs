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

#if UNITY_EDITOR
  void Update ()
  {
    if (PlayerManager.inst.player.Ready())
    {
      if (Input.GetKeyUp(KeyCode.LeftArrow) || Input.GetKeyUp(KeyCode.A))
      {
        PlayerManager.inst.player.GoLeft();
      }
      else if (Input.GetKeyUp(KeyCode.RightArrow) || Input.GetKeyUp(KeyCode.D))
      {
        PlayerManager.inst.player.GoRight();
      }
    }
  }
#endif

  #region Events
  void HandleFlicked (object sender, System.EventArgs e)
  {
    if (PlayerManager.inst.player.Ready())
    {
      //    Debug.Log ("Flicked");
      if (flick.ScreenFlickVector.x < 0.0f)
      {
        PlayerManager.inst.player.GoLeft();
      }
      else
      {
        PlayerManager.inst.player.GoRight();
      }
    }
  }
  #endregion
}
