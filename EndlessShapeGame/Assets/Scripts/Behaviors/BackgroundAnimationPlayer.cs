using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class BackgroundAnimationPlayer : MonoBehaviour
{

  private int currentAnimation = 0;
  public GameObject [] animations;

  static public BackgroundAnimationPlayer inst { get; private set; }

  // Use this as constructor
  void Awake ()
  {
    if (inst == null)
    {
      inst = this;
    }
    else
    {
      Destroy (this);
    }
  }

  // Use this for initialization
  void Start ()
  {
    ChangeAnimation ();
  }

  private void ChangeAnimation ()
  {
    foreach (var v in animations)
    {
      v.SetActive (false);
    }
    
    animations[currentAnimation].SetActive (true);

    if (currentAnimation + 1 >= animations.Length)
    {
      currentAnimation = 0;
    }
    else
    {
      ++currentAnimation;
    }
  }

  private void OnGameOver()
  {
    ChangeAnimation ();
  }

}
