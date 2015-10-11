using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class NoImageButton : MonoBehaviour
{

  // Public Members

  // Private Members

  // Use this for initialization
  void Start ()
  {
    gameObject.GetComponent <Image> ().enabled = false;
//    Destroy (gameObject.GetComponent <Image> ());
  }

}
