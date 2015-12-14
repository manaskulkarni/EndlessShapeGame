using UnityEngine;
using System.Collections;
using TouchScript.Gestures;
using TouchScript.Gestures.Simple;

public class PlayerInput : MonoBehaviour
{

  public float minDelta = 3.0f;
  public float dampTime = 0.2f;

  #region Private Properties
  private FlickGesture flick { get; set; }
  private SimplePanGesture pan { get; set; }
  private PressGesture press { get; set; }
  private ReleaseGesture release { get; set; }
  private bool pressed { get; set; }
  private TouchScript.Gestures.MetaGesture meta { get; set; }
  private bool moving { get; set; }
  private float lastPos;
  private float timer = 0.0f;
  
//  public Transform swipeEffect;
  #endregion

  // Use this for initialization
  void OnEnable ()
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
//    if (meta)
//      meta.TouchMoved += HandleTouchMoved;
      
    pressed = false;
    moving = false;
    
//    swipeEffect = GameObject.Find ("SwipeEffect").transform;
  }
  
  void OnDisable ()
  {
    flick = gameObject.GetComponent <FlickGesture> ();
    if (flick)
      flick.Flicked -= HandleFlicked;
    
    press = gameObject.GetComponent <PressGesture> ();
    if (press)
      press.Pressed -= HandlePressed;
    
    release = gameObject.GetComponent <ReleaseGesture> ();
    if (release)
      release.Released -= HandleReleased;
    
    pressed = false;
    moving = false;
  }

  void HandleTouchMoved (object sender, MetaGestureEventArgs e)
  {
    if (pressed)
    {        
      moving = false;
      if (PlayerManager.inst.player.Ready())
      {
        float delta = e.Touch.Position.x - e.Touch.PreviousPosition.x;
//        if (Mathf.Abs(delta) < 0.1f)
//          moving = false;
          
        if (!moving)
        {
          if (delta < -minDelta)
          {
            PlayerManager.inst.player.GoLeft();
            moving = true;
          }
          else if (delta > minDelta)
          {
            PlayerManager.inst.player.GoRight();
            moving = true;
          }
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
    lastPos = Input.mousePosition.x;
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

  private IEnumerator StartTimer ()
  {
    while (timer < dampTime)
    {
      timer += Time.deltaTime;
      yield return null;
    }

    timer = 0.0f;
  }

  void Update ()
  {  
#if UNITY_EDITOR
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
#endif

    if (pressed)
    { 
      if (PlayerManager.inst.player.Ready ())
      {
        var delta = Input.mousePosition.x - lastPos;
        lastPos = Input.mousePosition.x;
        
        //        StartCoroutine (Swipe (delta < 0.0f));
        
        if (delta == 0.0f)
        {
          moving = false;
        }
        
        if (delta < -minDelta && !moving)
        {
          PlayerManager.inst.player.GoLeft ();
          moving = true;
        }
        else if (delta > minDelta && !moving)
        {
          PlayerManager.inst.player.GoRight ();
          moving = true;
        }
      }
    }
  }
  
//  private IEnumerable Swipe (bool left)
//  {
////    swipeEffect.position = left 
//  }

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
