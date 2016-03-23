using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class AsyncLevelLoad : MonoBehaviour
{

  // Use this for initialization
  void Start ()
  {
    SceneManager.LoadSceneAsync ("Test");
  }
	
  // Update is called once per frame
  void Update ()
  {	
  }

}
