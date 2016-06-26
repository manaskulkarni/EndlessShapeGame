using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GameOverFeedback : CubiBase
{
  public override void cubiAwake ()
  {
    RegisterEvent ("GameOver", ((object sender, System.EventArgs e) =>
    {
      PlayFeedback ();
    }));
  }

  void OnEnable ()
  {
    if (StatsManager.inst != null)
    {
      PlayFeedback ();
    }
  }

  void OnDisable ()
  {
  }

  void OnGameOver ()
  {
    PlayFeedback ();
  }

  void PlayFeedback ()
  {
    if (StatsManager.inst.isHighScore)
    {
      GetComponent <Animator> ().Play ("HighScoreFeedback");
    }
    else
    {
      GetComponent <Animator> ().Play ("None");
    }
  }
}
