using UnityEngine;
using System.Collections;

public abstract class Manager : MonoBehaviour
{

  // Public Members
  #region Abstract Methods
  public abstract void Reset ();
  public abstract void OnGameStart ();
  public abstract void OnGameOver ();
  public abstract void OnGameRestart ();
  #endregion

  #region Virtual Methods
  [System.Obsolete ("Difficulty Modes Not Supported Anymore. Single Difficulty Mode")]
  public virtual void OnDifficultyChange () {}
  [System.Obsolete ("Speed Modes Not Supported Anymore. Single Speed Mode")]
  public virtual void OnSpeedChange () {}
  public virtual void OnHighScore () {}
  #endregion

  public bool jobDone
  {
    get;
    set;
  }
  // Private Members

  // Use this for initialization
//  void Start ()
//  {
//  }
//
//  // Update is called once per frame
//  void Update ()
//  {
//  }

}
