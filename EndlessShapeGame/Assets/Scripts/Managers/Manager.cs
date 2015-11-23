using UnityEngine;
using System.Collections;

public abstract class Manager : MonoBehaviour
{

  public void RegisterToEvents ()
  {
    GameManager.inst.GameResetEvent += OnGameReset;
    GameManager.inst.GameStartEvent += OnGameStart;
    GameManager.inst.GameRestartEvent += OnGameRestart;
    GameManager.inst.GameOverEvent += OnGameOver;
  }
  // Public Members
  #region Abstract Methods
  public abstract void OnGameReset (object sender, System.EventArgs args);
  public abstract void OnGameStart (object sender, System.EventArgs args);
  public abstract void OnGameOver (object sender, System.EventArgs args);
  public abstract void OnGameRestart (object sender, System.EventArgs args);
  #endregion

  #region Virtual Methods
  [System.Obsolete ("Difficulty Modes Not Supported Anymore. Single Difficulty Mode")]
  public virtual void OnDifficultyChange (object sender, System.EventArgs args) {}
  [System.Obsolete ("Speed Modes Not Supported Anymore. Single Speed Mode")]
  public virtual void OnSpeedChange (object sender, System.EventArgs args) {}

  public virtual void OnPause (object sender, System.EventArgs args) {}
  public virtual void OnResume (object sender, System.EventArgs args) {}
  public virtual void OnUnPause (object sender, System.EventArgs args) {}
  public virtual void OnHighScore (object sender, System.EventArgs args) {}
  public virtual void OnHighScoreCross (object sender, System.EventArgs args) {}
  #endregion
}
