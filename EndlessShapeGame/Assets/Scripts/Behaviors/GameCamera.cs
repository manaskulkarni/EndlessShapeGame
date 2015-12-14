using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GameCamera : MonoBehaviour
{
  public float duration = 0.3f;
  public float magnitude = 0.05f;

  // Use this as constructor
  void Awake ()
  {
  }

  // Use this for initialization
  void Start ()
  {	
  }

  private void OnGameStop ()
  {
    StartCoroutine (CameraShake ());
  }
  
  private IEnumerator CameraShake ()
  {
    float elapsed = 0.0f;
    
    Vector3 originalCamPos = Camera.main.transform.position;
    
    while (elapsed < duration)
    {
      elapsed += Time.deltaTime;          
      
      float percentComplete = elapsed / duration;         
      float damper = 1.0f - Mathf.Clamp (4.0f * percentComplete - 3.0f, 0.0f, 1.0f);
      
      // map value to [-1, 1]
      float x = Random.value * 2.0f - 1.0f;
      float y = Random.value * 2.0f - 1.0f;
      x *= magnitude * damper;
      y *= magnitude * damper;
      
      Camera.main.transform.position = new Vector3 (x, y, originalCamPos.z);
      
      yield return null;
    }
    
    Camera.main.transform.position = originalCamPos;

    GameManager.inst.ChangeState (GameManager.States.ShowRevive);
  }

}
