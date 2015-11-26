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
    Vector2 scale = transform.localScale;
    scale.x = scale.y * Screen.height / (float)Screen.width;
    transform.localScale = scale;
#endif
	}
	
#if UNITY_EDITOR
	// Update is called once per frame
	void Update ()
  {
    Vector2 scale = transform.localScale;
    scale.x = scale.y * Screen.height / (float)Screen.width;
    transform.localScale = scale;
	}
#endif
}
