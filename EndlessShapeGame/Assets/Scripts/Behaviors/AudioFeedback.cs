using UnityEngine;
using System.Collections;

public class AudioFeedback : MonoBehaviour
{

//  static private AudioSource audioPlayer { get; set; }

	// Use this for initialization
	void Start ()
  {
    
	}
	
	// Update is called once per frame
	void Update ()
  {
    var sm = ShapeManager.inst;
    var speed = Mathf.Abs (sm.speedPresets[sm.currentIntervalIndex].preset.speedMultiplier.y / sm.speedPresets[0].preset.speedMultiplier.y);
	  GetComponent <Animator> ().speed = speed;
	}
}
