using UnityEngine;
using System.Collections;

public class CheckCompatibility : MonoBehaviour
{

	// Use this for initialization
	void Start ()
  {
    if (SystemInfo.deviceModel.Contains ("iPhone3"))
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
}
