using UnityEngine;
using UnityEngine.UI;
using System.Collections;

[ExecuteInEditMode]
public class BetterContentPanelFitter : MonoBehaviour
{

	// Use this for initialization
	void Start ()
	{
    RectTransform trans;
    trans = GetComponent <RectTransform> ();
    var le = this.GetComponentsInChildren <LayoutElement> ();
    float xScale = le[le.Length - 1].transform.position.x + (le[le.Length - 1].minWidth);
    
    trans.SetSizeWithCurrentAnchors (RectTransform.Axis.Horizontal, xScale);
	}
	
  
#if UNITY_EDITOR
	// Update is called once per frame
	void Update ()
	{
	  RectTransform trans;
    trans = GetComponent <RectTransform> ();
    var le = this.GetComponentsInChildren <LayoutElement> ();
    float xScale = le[le.Length - 1].transform.position.x + (le[le.Length - 1].minWidth);
    
    trans.SetSizeWithCurrentAnchors (RectTransform.Axis.Horizontal, xScale);
	}
#endif
}
