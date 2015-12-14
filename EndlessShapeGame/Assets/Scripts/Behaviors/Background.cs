using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityStandardAssets.ImageEffects;

public class Background : MonoBehaviour
{
  public enum InterpolationMode
  {
    Constant,
    Interval,
    Array,
  }


  // Public Members
  public float colorChangeTime;
  public float interpolationTime;
  public Color minColor;
  public Color maxColor;
  public InterpolationMode interpolationMode;
  public Color [] interpolationColors;

  public Image drawable
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
  
  void Awake ()
  {
    switch (interpolationMode)
    {
    case InterpolationMode.Constant:
      colorOne = Utils.ClampColor (Utils.RandomColor (), minColor, maxColor);
      colorTwo = Utils.ClampColor (Utils.RandomColor (), minColor, maxColor);
      break;

    case InterpolationMode.Array:
      colorOne = interpolationColors [colorIndex];
      colorTwo = interpolationColors [colorIndex + 1];
      break;
    }

    drawable = gameObject.GetComponent <Image> ();
    drawable.color = colorOne;
    //    colorOne = Utils.RandomColor ();
  }
  
  // Use this for initialization
  void Start ()
  {
  }

  void OnEnable ()
  {
    if (updateCoroutine == null)
    {
      switch (interpolationMode)
      {
      case InterpolationMode.Constant:
        updateCoroutine = StartCoroutine (UpdateColorConstant ());
        break;

      case InterpolationMode.Interval:
        updateCoroutine = StartCoroutine (UpdateColorReguralInterval ());
        break;

      case InterpolationMode.Array:
        updateCoroutine = StartCoroutine (UpdateColorArray ());
        break;
      }
    }
  }

  void OnDisable ()
  {
    if (updateCoroutine != null)
    {
      StopCoroutine (updateCoroutine);
      updateCoroutine = null;
    }
  }
  
  // Update is called once per frame
  private IEnumerator UpdateColorReguralInterval ()
  {
    while (true)
    {
      while (changeTimer <= colorChangeTime)
      {
        changeTimer += Time.deltaTime;
        yield return null;
      }

//      colorOne = colorTwo;
      colorTwo = Utils.ClampColor (Utils.RandomColor (), minColor, maxColor);
//      colorTwo = Utils.RandomColor ();
      changeTimer = 0.0f;

      Debug.Log (drawable.color + "\n" + colorOne + "\n" + colorTwo);
      while (interpolationTimer <= interpolationTime)
      {
        interpolationTimer += Time.deltaTime;
        drawable.color = Color.Lerp (colorOne, colorTwo, interpolationTimer / interpolationTime);
        yield return null;
      }

      colorOne = colorTwo;
      interpolationTimer = 0.0f;
    }
  }

  private IEnumerator UpdateColorConstant ()
  {
    while (true)
    {
      while (changeTimer <= colorChangeTime)
      {
        changeTimer += Time.deltaTime;
        drawable.color = Color.Lerp (colorOne, colorTwo, changeTimer / colorChangeTime);
        yield return null;
      }

      colorOne = colorTwo;
      colorTwo = Utils.ClampColor (Utils.RandomColor (), minColor, maxColor);
      changeTimer = 0.0f;
    }
  }

  private IEnumerator UpdateColorArray ()
  {
    while (true)
    {
      while (changeTimer <= colorChangeTime)
      {
        changeTimer += Time.deltaTime;
        drawable.color = Color.Lerp (colorOne, colorTwo, changeTimer / colorChangeTime);
        yield return null;
      }

      changeTimer = 0.0f;
      ++colorIndex;
      if (colorIndex == interpolationColors.Length)
      {
        colorIndex = 0;
      }

      colorOne = colorTwo;
      colorTwo = interpolationColors [colorIndex];

      yield return null;
    }
  }
}




