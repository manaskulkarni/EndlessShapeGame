using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ShapeParent : MonoBehaviour
{

  #region Properties
  public List <ShapeBehavior> shapes { get; private set; }
  #endregion

  void Awake ()
  {
    shapes = new List<ShapeBehavior> ();
  }

  // Use this for initialization
  void Start ()
  {
    foreach (var v in ShapeManager.inst.player.shapes)
    {
      GameObject go = Instantiate (v.gameObject) as GameObject;
      go.transform.parent = gameObject.transform;
      go.transform.position = new Vector2 (go.transform.position.x, 0.0f);
    }

    StartCoroutine (UpdatePosition ());
  }

  #region Coroutintes
  // Update is called once per frame
  private IEnumerator UpdatePosition ()
  {
    while (true)
    {
      Vector2 pos = gameObject.transform.position;
      pos += ShapeManager.inst.currentSpeedPreset.speedMultiplier * Time.deltaTime;
      gameObject.transform.position = pos;
      yield return null;
    }
  }
  #endregion

}
