using UnityEngine;
using System.Collections;

public class ReviveMenu : MonoBehaviour
{

	// Use this for initialization
	void Start ()
  {
	
	}
	
//	// Update is called once per frame
//	void Update ()
//  {
//	
//	}

  public void LoadMainMenu ()
  {
    UIManager.inst.ReviveDeclined ();
  }

}
