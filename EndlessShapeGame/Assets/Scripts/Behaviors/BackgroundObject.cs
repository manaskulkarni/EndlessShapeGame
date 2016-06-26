using UnityEngine;
using System.Collections;

public class BackgroundObject : MonoBehaviour
{

  // Public Members

  // Private Members

  void Awake ()
  {
    Vector3 pos = gameObject.transform.position;
    pos.z = Random.Range (-2.0f, 3.0f);
    
    gameObject.transform.position = pos;
  }

  // Use this for initialization
  void Start ()
  {
    SpriteRenderer sprite = gameObject.GetComponent <SpriteRenderer> ();
    sprite.color = Utils.RandomColor
      (
        new Color (66.0f / 255.0f, 66.0f / 255.0f, 66.0f / 255.0f, 160.0f / 255.0f),
        new Color (90.0f / 255.0f, 90.0f / 255.0f, 90.0f / 255.0f, 200.0f / 255.0f)
        );
  }
}
