using UnityEngine;
using System.Collections;

public class CheckCompatibility : MonoBehaviour
{
  bool lowPerformance = false;

  void Awake ()
  {
    lowPerformance = SystemInfo.deviceModel.Contains ("iPhone3") || Application.platform == RuntimePlatform.Android;
  }

	// Use this for initialization
	void Start ()
  {
    if (lowPerformance)
    {
      Debug.Log ("Disable Post Process Effects");
      var postEffects = GameObject.FindObjectsOfType <UnityStandardAssets.ImageEffects.PostEffectsBase> ();
      var imageEffects = GameObject.FindObjectsOfType <UnityStandardAssets.ImageEffects.ImageEffectBase> ();
      
      foreach (var v in postEffects)
      {
        if (!v.useOnLowPerformance)
        {
          Destroy (v);
        }
      }

      foreach (var v in imageEffects)
      {
        if (!v.useOnLowPerformance)
        {
          Destroy (v);
        }
      }
    }
	}

  void OnSwitchMode (int mode)
  {
    if (lowPerformance)
    {
      var renderers = GameObject.FindObjectsOfType <SpriteRenderer> ();
      foreach (var v in renderers)
      {
        v.color = new Color (1.0f - v.color.r, 1.0f - v.color.g, 1.0f - v.color.b, v.color.a);
      }

      ShapeManager.inst.specialColor = new Color (1.0f - ShapeManager.inst.specialColor.r,
                                                  1.0f - ShapeManager.inst.specialColor.g,
                                                  1.0f - ShapeManager.inst.specialColor.b,
                                                  ShapeManager.inst.specialColor.a);

      foreach (var shape in ShapeManager.inst.shapes)
      {
        shape.originalColor = new Color (1.0f - shape.originalColor.r,
                                         1.0f - shape.originalColor.g,
                                         1.0f - shape.originalColor.b,
                                         shape.originalColor.a);
      }
    }
    else
    {
      switch (mode)
      {
      case 0:
        Camera.main.GetComponent <UnityStandardAssets.ImageEffects.InvertColor> ().enabled = false;
        break;
      case 1:
        Camera.main.GetComponent <UnityStandardAssets.ImageEffects.InvertColor> ().enabled = true;
        break;
      }
    }
  }
}
