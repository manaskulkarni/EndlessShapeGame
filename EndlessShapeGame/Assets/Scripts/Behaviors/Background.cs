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
  
  private void OnGameOver()
  {
    // Animation 1 
    var animation_1 = GameObject.Find("Parent5Squares");
    // Animation 2 
    var animation_2 = GameObject.Find("ParentTriangles");       
    // Animation 3
    var animation_3 = GameObject.Find("ParentCircleSqureTriangle");
    
    Transform child_1;
    Transform child_2;
    Transform child_3;
    
    child_1 = animation_1.transform.GetChild(0);
    child_2 = animation_2.transform.GetChild(0);
    child_3 = animation_3.transform.GetChild(0);
        
    if(child_1.gameObject.activeSelf == true)
    {
      child_1.gameObject.SetActive(false);
      child_2.gameObject.SetActive(true);
    }
    else if(child_2.gameObject.activeSelf == true)
    {
      child_2.gameObject.SetActive(false);
      child_3.gameObject.SetActive(true);
    }
    else if(child_3.gameObject.activeSelf == true)
    {
      child_3.gameObject.SetActive(false);
      child_1.gameObject.SetActive(true);
    }
    
  }
}




