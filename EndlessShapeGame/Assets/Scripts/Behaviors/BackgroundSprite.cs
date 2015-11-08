using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityStandardAssets.ImageEffects;

[RequireComponent (typeof (Camera))]
public class BackgroundSprite : MonoBehaviour
{
  public enum InterpolationMode
  {
    Constant,
    Interval,
    Array,
  }
  
  private enum LerpState
  {
    Idle,
    Transit,
    Interpolate,
    None,
  }


  // Public Members
  public float colorChangeTime;
  public float interpolationTime;
  public Color minColor;
  public Color maxColor;
  public InterpolationMode interpolationMode;
  public Color [] interpolationColors;

  public Camera drawable
  {
    get;
    private set;
  }
  
  // Private Members
  // For Debugging Purpose
  public float changeTimer = 0.0f;
  public float interpolationTimer = 0.0f;
  public int colorIndex = 0;
  public Color colorOne;
  public Color colorTwo;

  private Coroutine updateCoroutine
  {
    get;
    set;
  }
  
  public Color originalColor { get; private set; }
  private LerpState lerpState { get; set; }
  
  private delegate void Del ();
  Del Handle = null;
  
  void Awake ()
  {
    //    colorOne = Utils.RandomColor ();
  }
  
  // Use this for initialization
  void Start ()
  {
    drawable = gameObject.GetComponent <Camera> ();
    originalColor = drawable.backgroundColor;
    lerpState = LerpState.Idle;
  
    GameManager.inst.GameStartEvent += OnGameStart;
    GameManager.inst.GameOverEvent += OnGameOver;
  }

  void OnGameStart (object sender, System.EventArgs args)
  {
    StopAllCoroutines ();
    drawable.backgroundColor = colorOne = originalColor;
    changeTimer = 0.0f;
    interpolationTimer = 0.0f;
    
    switch (interpolationMode)
    {
    case InterpolationMode.Constant:
      colorTwo = Utils.ClampColor (Utils.RandomColor (), minColor, maxColor);
      break;
      
    case InterpolationMode.Array:
      colorTwo = interpolationColors [colorIndex + 1];
      break;
    }
    
//    drawable.backgroundColor = colorOne;
  
//    if (updateCoroutine == null)
    if (Handle == null)
    {
      switch (interpolationMode)
      {
      case InterpolationMode.Constant:
//        updateCoroutine = StartCoroutine (UpdateColorConstant ());
        Handle = UpdateColorConstant;
        break;

      case InterpolationMode.Interval:
//        updateCoroutine = StartCoroutine (UpdateColorReguralInterval ());
        Handle = UpdateColorReguralInterval;
        break;

      case InterpolationMode.Array:
        Handle = UpdateColorArray;
        break;
      }
    }
  }

  void OnGameOver (object sender, System.EventArgs args)
  {
//    if (updateCoroutine != null)
    if (Handle != null)
    {
      Handle = null;
//      StopCoroutine(updateCoroutine);
      StartCoroutine (LerpToOriginalColor ());
    }
  }
  
  private IEnumerator LerpToOriginalColor ()
  {
    var currColor = drawable.backgroundColor;
    float t = 0.0f;
    while (t <= 1.0f)
    {
      t += Time.deltaTime * 5.0f;
      drawable.backgroundColor = Color.Lerp (currColor, originalColor, t);
      yield return null;
    }
  }
  
  void Update ()
  {
    if (Handle != null)
    {
      Handle ();
    }
  }
  
  private void UpdateColorReguralInterval ()
  {
    switch (lerpState)
    {
    case LerpState.Idle:
      changeTimer += Time.deltaTime;
      if (changeTimer > colorChangeTime)
      {
        lerpState = LerpState.Transit;
      }
      break;
    case LerpState.Transit:
      //      colorOne = colorTwo;
      colorTwo = Utils.ClampColor (Utils.RandomColor (), minColor, maxColor);
      //      colorTwo = Utils.RandomColor ();
      changeTimer = 0.0f;
      lerpState = LerpState.Interpolate;
      break;
    case LerpState.Interpolate:
      if (interpolationTimer <= interpolationTime)
      {
        interpolationTimer += Time.deltaTime;
        drawable.backgroundColor = Color.Lerp (colorOne, colorTwo, interpolationTimer / interpolationTime);
      }
      else
      {
        colorOne = colorTwo;
        interpolationTimer = 0.0f;
        lerpState = LerpState.Idle;
      }
      break;
    case LerpState.None:
      break;
    }
  }
  
  private void UpdateColorConstant ()
  {
    switch (lerpState)
    {
    case LerpState.Idle:
      lerpState = LerpState.Interpolate;
      break;
    case LerpState.Transit:
      break;
    case LerpState.Interpolate:
      if (changeTimer <= colorChangeTime)
      {
        changeTimer += Time.deltaTime;
        drawable.backgroundColor = Color.Lerp (colorOne, colorTwo, changeTimer / colorChangeTime);      
      }
      else
      {
        colorOne = colorTwo;
        colorTwo = Utils.ClampColor (Utils.RandomColor (), minColor, maxColor);
        changeTimer = 0.0f;
        lerpState = LerpState.Idle;
      }
      break;
    case LerpState.None:
      break;
    }
  }
  
  private void UpdateColorArray ()
  {
    switch (lerpState)
    {
    case LerpState.Idle:
      lerpState = LerpState.Interpolate;
      break;
    case LerpState.Transit:
      break;
    case LerpState.Interpolate:
      if (changeTimer <= colorChangeTime)
      {
        changeTimer += Time.deltaTime;
        drawable.backgroundColor = Color.Lerp (colorOne, colorTwo, changeTimer / colorChangeTime); 
      }
      else
      {
        changeTimer = 0.0f;
        ++colorIndex;
        if (colorIndex == interpolationColors.Length)
        {
          colorIndex = 0;
        }
        
        colorOne = colorTwo;
        colorTwo = interpolationColors [colorIndex];
        lerpState = LerpState.Idle;
      }
      break;
    case LerpState.None:
      break;
    }
  }
  
}
