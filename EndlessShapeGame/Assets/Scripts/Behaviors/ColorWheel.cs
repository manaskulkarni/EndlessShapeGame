using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class ColorWheel : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler
{
  public class ColorWheelData
  {
    public ColorWheelData (Vector2 pos, Color c)
    {
      wheelPosition = pos;
      color = c;
    }
    public Vector2 wheelPosition;
    public Color color;
  }

  public float brightnessAdjust = 0.7f;

  private bool mouseDown { get; set; }
  private Transform wheelPosition { get; set; }

  // Use this as constructor
  void Awake ()
  {
    mouseDown = false;
    wheelPosition = GameObject.Find ("ImageColorWheelPosition").transform;
  }

  // Use this for initialization
  void Start ()
  {
  }

  // Called when the pointer enters our GUI component.
  // Start tracking the mouse
  public void OnPointerEnter(PointerEventData eventData)
  {
    StartCoroutine("TrackPointer");
  }

  // Called when the pointer exits our GUI component.
  // Stop tracking the mouse
  public void OnPointerExit(PointerEventData eventData)
  {
    StopCoroutine( "TrackPointer" );
  }

  public void OnPointerDown (PointerEventData eventData)
  {
    Debug.Log ("MOUSE DOWN");
    mouseDown = true;
  }

  public void OnPointerUp (PointerEventData eventData)
  {
    Debug.Log ("MOUSE UP");
    mouseDown = false;
  }

  private IEnumerator TrackPointer()
  {
    var ray = GetComponentInParent<GraphicRaycaster>();
    var input = FindObjectOfType<StandaloneInputModule>();
    if(ray != null && input != null)
    {
      while(Application.isPlaying)
      {
        if (mouseDown)
        {
          Vector2 localPoint;
          // Get mouse pos in local space
          RectTransformUtility.ScreenPointToLocalPointInRectangle (transform as RectTransform, Input.mousePosition, ray.eventCamera, out localPoint);

          // Get Texcoord
          Rect r = (transform as RectTransform).rect;
          var tex = GetComponent <Image> ().sprite.texture;
          int px = Mathf.Clamp (0,(int)(((localPoint.x-r.x)*tex.width)/r.width),tex.width);
          int py = Mathf.Clamp (0,(int)(((localPoint.y-r.y)*tex.height)/r.height),tex.height);

          var color = tex.GetPixel (px, py);
          if (color.r == color.g && color.g == color.b)
          {
//            Debug.Log ("Original Color");
          }
          else
          {
//            Debug.Log ("Too Bright Color. Decreasing intensity");
            color = color * brightnessAdjust;
          }
          if (color.a > 0)
          {
            wheelPosition.position = Input.mousePosition;
            GameManager.inst.BroadcastMessage ("OnSetBackgroundColor", new ColorWheelData (wheelPosition.position, color));
          }
        }
        yield return null;
      }      
    }
    else
      UnityEngine.Debug.LogWarning ("Could not find GraphicRaycaster and/or StandaloneInputModule");
  }

  void OnLoadBackgroundColor (ColorWheelData data)
  {
    wheelPosition.position = data.wheelPosition;
  }
}
