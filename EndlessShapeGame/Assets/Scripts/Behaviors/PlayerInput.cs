using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections;

public class PlayerInput : CubiBase, IBeginDragHandler, IDragHandler, IEndDragHandler
{
  public float minDelta = 3.0f;
  public float dampTime = 0.2f;

  private float lastPos { get; set; }
  private float startTime { get; set; }
  private float dragTime { get; set; }

  #region IBeginDragHandler implementation

  private Coroutine delay { get; set; }

  private IEnumerator Delay ()
  {
    yield return new WaitForSeconds (dampTime);
    delay = null;
  }

  public void OnBeginDrag (PointerEventData eventData)
  {
    lastPos = eventData.position.x;
    startTime = Time.time;
    dragTime = Time.time;
  }

  public void OnDrag (PointerEventData eventData)
  {
    if (delay != null)
    {
      lastPos = eventData.position.x;
      return;
    }

    if (PlayerManager.inst.player.Ready ())
    {
      var delta = eventData.position.x - lastPos;
      if (Mathf.Abs (delta) > minDelta)
      {
        if (Time.time - dragTime > dampTime)
        {
          lastPos = eventData.position.x;
          return;
        }
        else
          dragTime = Time.time;
        
        if (delta < 0.0f)
        {
          PlayerManager.inst.player.GoLeft ();
        }
        else
        {
          PlayerManager.inst.player.GoRight ();
        }

        delay = StartCoroutine (Delay ());
        lastPos = eventData.position.x;
      }
    }
  }

  public void OnEndDrag (PointerEventData eventData)
  {
    if (delay != null || Time.time - startTime > dampTime)
      return;
    
    if (PlayerManager.inst.player.Ready ())
    {
      var delta = lastPos - eventData.position.x;
      if (Mathf.Abs (delta) > minDelta)
      {
        if (delta > 0.0f)
          PlayerManager.inst.player.GoLeft ();
        else
          PlayerManager.inst.player.GoRight ();
      }
    }
  }

  #endregion
}
