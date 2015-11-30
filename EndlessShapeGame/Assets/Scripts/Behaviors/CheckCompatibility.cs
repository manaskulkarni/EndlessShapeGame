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
      var effects = GameObject.FindObjectsOfType <UnityStandardAssets.ImageEffects.PostEffectsBase> ();
      
      foreach (var v in effects)
      {
        Destroy (v);
      }
    }
	}
}
