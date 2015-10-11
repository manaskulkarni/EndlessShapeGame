using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlayerBehavior : MonoBehaviour
{

  // Public Members
  public float swipeSpeedMultiplier;

  public float swipeSpeed
  {
    get
    {
      return swipeSpeedMultiplier * Mathf.Abs (ShapeManager.inst.cps.speedMultiplier.y / ShapeManager.inst.cps.maxSpeed.y);
    }
  }

  public List <Transform> shapes
  {
    get;
    private set;
  }

  public List <PlayerShapeTrigger> triggers
  {
    get;
    private set;
  }

  // Private Members
  private Vector3 shapeOffset
  {
    get;
    set;
  }

  private float minXPosition
  {
    get;
    set;
  }

  private float maxXPosition
  {
    get;
    set;
  }

  // Use this for initialization
  void Awake ()
  {
    shapes = new List<Transform> ();
    triggers = new List<PlayerShapeTrigger> ();
    ConfigurePlayer ();
//    Debug.Log (minXPosition + "\n" + maxXPosition);
  }

//  // Update is called once per frame
//  void Update ()
//  {
//  }

  public void InputDetected ()
  {
    foreach (var v in shapes)
    {
      v.position -= shapeOffset;
      if (v.position.x < minXPosition)
      {
        v.position = new Vector3 (maxXPosition, v.position.y, v.position.z);
      }
    }
  }

  public void GoRight ()
  {
    foreach (var v in shapes)
    {
      StartCoroutine (SlideRight (v.transform));
    }
  }

  public void GoLeft ()
  {
//    foreach (var v in shapes)
//    {
//      v.position -= shapeOffset;
//      if (v.position.x < minXPosition)
//      {
//        v.position = new Vector3 (maxXPosition, v.position.y, v.position.z);
//      }
//    }

    foreach (var v in shapes)
    {
      StartCoroutine (SlideLeft (v.transform));
    }
  }

  public void AddShape (Transform trans)
  {
    shapes.Add (trans);
  }

  public void RemoveShape (Transform trans)
  {
    shapes.Remove (trans);
  }

  private void ConfigurePlayer ()
  {
    SortedList <float, Transform> list = new SortedList<float, Transform> ();

    for (int i = 0; i < gameObject.transform.childCount; ++i)
    {
      Transform v = gameObject.transform.GetChild (i);
      PlayerShapeTrigger trigger = v.GetComponent <PlayerShapeTrigger> ();
      trigger.original = true;
      list.Add (v.position.x, v);
    }
    
    foreach (var v in list)
    {
      shapes.Add (v.Value);
      triggers.Add (v.Value.GetComponent <PlayerShapeTrigger> ());
    }
    
    shapeOffset = new Vector3 (Mathf.Abs (shapes [0].position.x - shapes [1].position.x),
                               Mathf.Abs (shapes [0].position.y - shapes [1].position.y),
                               Mathf.Abs (shapes [0].position.z - shapes [1].position.z)
                               );
    
    minXPosition = shapes [0].transform.position.x;
    maxXPosition = shapes [shapes.Count - 1].transform.position.x;


  }

  private IEnumerator SlideRight (Transform v)
  {
    float nextPos = v.position.x + shapeOffset.x;

    if (nextPos > maxXPosition)
    {
//      Debug.Log (v.name);

//      while (v.position.x < maxXPosition + 1.5f)
//      {
//        Vector3 pos = v.position;
//        pos.x += Time.deltaTime * swipeSpeed;
//        v.position = pos;
//        yield return null;
//      }
//
//      v.position = new Vector3 (minXPosition - 1.5f, v.position.y);
//
//      while (v.position.x < minXPosition)
//      {
//        Vector3 pos = v.position;
//        pos.x += Time.deltaTime * swipeSpeed;
//
//        if (pos.x > minXPosition)
//        {
//          pos.x = minXPosition;
//          v.position = pos;
//          break;
//        }
//
//        v.position = pos;
//        yield return null;
//      }

      while (v.position.x > minXPosition)
      {
        Vector2 pos = v.position;
        pos.x -= Time.deltaTime * swipeSpeed;

        if (pos.x < minXPosition)
        {
          pos.x = minXPosition;
          v.position = pos;
          break;
        }

        v.position = pos;
        yield return null;
      }
    }
    else
    {
      while (v.position.x < nextPos)
      {
        Vector3 pos = v.position;
        pos.x += Time.deltaTime * swipeSpeed;

        if (pos.x > nextPos)
        {
          pos.x = nextPos;
          v.position = pos;
          break;
        }
        
        v.position = pos;
        yield return null;
      }
    }
  }

  private IEnumerator SlideLeft (Transform v)
  {
    float nextPos = v.position.x - shapeOffset.x;
    
    if (nextPos < minXPosition)
    {
//      Debug.Log (v.name);

//      while (v.position.x > minXPosition - 1.5f)
//      {
//        Vector3 pos = v.position;
//        pos.x -= Time.deltaTime * swipeSpeed;
//        v.position = pos;
//        yield return null;
//      }
//      
//      v.position = new Vector3 (maxXPosition + 1.5f, v.position.y);
//      
//      while (v.position.x > maxXPosition)
//      {
//        Vector3 pos = v.position;
//        pos.x -= Time.deltaTime * swipeSpeed;
//        
//        if (pos.x < maxXPosition)
//        {
//          pos.x = maxXPosition;
//          v.position = pos;
//          break;
//        }
//        
//        v.position = pos;
//        yield return null;
//      }

      while (v.position.x < maxXPosition)
      {
        Vector2 pos = v.position;
        pos.x += Time.deltaTime * swipeSpeed;

        if (pos.x > maxXPosition)
        {
          pos.x = maxXPosition;
          v.position = pos;
          break;
        }
        
        v.position = pos;
        yield return null;
      }
      
    }
    else
    {
      while (v.position.x > nextPos)
      {
        Vector3 pos = v.position;
        pos.x -= Time.deltaTime * swipeSpeed;
        
        if (pos.x < nextPos)
        {
          pos.x = nextPos;
          v.position = pos;
          break;
        }
        
        v.position = pos;
        yield return null;
      }
    }
  }

}
