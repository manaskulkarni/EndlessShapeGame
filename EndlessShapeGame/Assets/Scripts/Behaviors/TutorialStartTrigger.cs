using UnityEngine;
using System.Collections;

public class TutorialStartTrigger : MonoBehaviour
{

	// Use this for initialization
	void Start ()
  {
	
	}

  void OnTriggerEnter2D (Collider2D coll)
  {
    Debug.Log ("Here");
    if (coll.gameObject.tag == "s")
    {
      GameManager.inst.SendMessage ("OnTutorialShapeTriggered");
    }
  }

}
