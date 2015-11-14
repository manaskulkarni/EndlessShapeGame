using UnityEngine;
using System.Collections;
using TouchScript.Gestures;
using TouchScript.Gestures.Simple;

public class PlayerInput : MonoBehaviour
{

  public float minDelta = 3.0f;

  #region Private Properties
  private FlickGesture flick { get; set; }
  private SimplePanGesture pan { get; set; }
  private PressGesture press { get; set; }
  private ReleaseGesture release { get; set; }
  private bool pressed { get; set; }
  private TouchScript.Gestures.MetaGesture meta { get; set; }
  #endregion

  // Use this for initialization
  void Start ()
  {
    flick = gameObject.GetComponent <FlickGesture> ();
    if (flick)
    flick.Flicked += HandleFlicked;
    
    press = gameObject.GetComponent <PressGesture> ();
    if (press)
    press.Pressed += HandlePressed;
    
    release = gameObject.GetComponent <ReleaseGesture> ();
    if (release)
      release.Released += HandleReleased;
      
    meta = gameObject.GetComponent <MetaGesture> ();
    if (meta)
      meta.TouchMoved += HandleTouchMoved;
      
    pressed = false;
  }

  void HandleTouchMoved (object sender, MetaGestureEventArgs e)
  {
    if (pressed)
    {
      if (PlayerManager.inst.player.Ready())
      {
        float delta = e.Touch.Position.x - e.Touch.PreviousPosition.x;
        //    Debug.Log ("Flicked");
        if (delta < -minDelta)
        {
          PlayerManager.inst.player.GoLeft();
        }
        else if (delta > minDelta)
        {
          PlayerManager.inst.player.GoRight();
        }
      }
    }
  }

  void HandleReleased (object sender, System.EventArgs e)
  {
    pressed = false;
  }

  void HandlePressed (object sender, System.EventArgs e)
  {
    pressed = true;
  }

  void HandlePanned (object sender, System.EventArgs e)
  {
    if (PlayerManager.inst.player.Ready())
    {
      //    Debug.Log ("Flicked");
      if (pan.LocalDeltaPosition.x < -0.2f)
      {
        PlayerManager.inst.player.GoLeft();
      }
      else if (pan.LocalDeltaPosition.x > 0.2f)
      {
        PlayerManager.inst.player.GoRight();
      }
    }
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
