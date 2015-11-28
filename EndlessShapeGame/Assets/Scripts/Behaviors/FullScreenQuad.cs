using UnityEngine;
using UnityEngine.UI;
using System.Collections;

[ExecuteInEditMode]
public class FullScreenQuad : MonoBehaviour
{

	// Use this for initialization
	void Start ()
  {
#if UNITY_STANDALONE
    transform.localScale = new Vector2 (10.0f, 10.0f);
#else
    FillScreen ();
#endif
	}
	
#if UNITY_EDITOR
	// Update is called once per frame
	void Update ()
  {
    FillScreen ();
	}
#endif

  void FillScreen ()
  {
    var sr = GetComponent <SpriteRenderer> ();
    if (sr == null) return;
    
    var scale = Vector2.one;
    
    var width = sr.sprite.bounds.size.x;
    var height = sr.sprite.bounds.size.y;
    
    var worldScreenHeight = Camera.main.orthographicSize * 2.0f;
    var worldScreenWidth = worldScreenHeight / Screen.height * Screen.width;
    
    scale.x = worldScreenWidth / width;
    scale.y = worldScreenHeight / height;
    
    transform.localScale = scale * 1.1f;
  }
}
