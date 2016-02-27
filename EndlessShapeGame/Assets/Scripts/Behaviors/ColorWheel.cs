using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class ColorWheel : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler
{
  private bool mouseDown { get; set; }
  private Transform wheelPosition { get; set; }

  // Use this as constructor
  void Awake ()
  {
    mouseDown = false;
  }

  // Use this for initialization
  void Start ()
  {
    wheelPosition = GameObject.Find ("ImageColorWheelPosition").transform;
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

  IEnumerator TrackPointer()
  {
    var ray = GetComponentInParent<GraphicRaycaster>();
    var input = FindObjectOfType<StandaloneInputModule>();
    if( ray != null && input != null )
    {
      while(Application.isPlaying)
      {
        if (mouseDown)
        {
          Vector2 localPoint; // Mouse position  
          RectTransformUtility.ScreenPointToLocalPointInRectangle( transform as RectTransform, Input.mousePosition, ray.eventCamera, out localPoint );

          Rect r = (transform as RectTransform).rect;
          var tex = GetComponent <Image> ().sprite.texture;
          int px = Mathf.Clamp (0,(int)(((localPoint.x-r.x)*tex.width)/r.width),tex.width);
          int py = Mathf.Clamp (0,(int)(((localPoint.y-r.y)*tex.height)/r.height),tex.height);

          // local pos is the mouse position.
          Debug.Log ("HFHF");
          var color = tex.GetPixel (px, py);
          if (color.a > 0)
          {
            Camera.main.backgroundColor = color;
            wheelPosition.position = Input.mousePosition;
          }
        }
        yield return null;
      }      
    }
    else
      UnityEngine.Debug.LogWarning( "Could not find GraphicRaycaster and/or StandaloneInputModule" );
  }
}
