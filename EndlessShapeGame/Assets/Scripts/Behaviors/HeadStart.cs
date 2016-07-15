using UnityEngine;
using System.Collections;

public class HeadStart : CubiBase
{
  public int maxHeadStartScore = 50;
  public float headStartTime = 4.0f;

  // Use this for initialization
  void Start ()
  {
    RegisterEvent ("HeadStartActive", ((object sender, System.EventArgs e) =>
    {
      StartCoroutine (HeadStartTimer ());
    }));

    RegisterEvent ("BeginHeadStart", ((object sender, System.EventArgs e) =>
    {
      ShapeManager.inst.shapeTriggered = ShapeManager.inst.HeadStartShapeTriggered;
      Time.timeScale = 10.0f;
      AudioManager.inst.track.pitch = 1.5f;

      StopAllCoroutines ();
      RegisterEvent ("UpdateScore", UpdateScore);
    }));

    RegisterEvent ("FinishHeadStart", ((object s, System.EventArgs msg) => 
    {
      ShapeManager.inst.shapeTriggered = ShapeManager.inst.NormalShapeTriggered;
      Time.timeScale = 1.0f;
      AudioManager.inst.track.pitch = 1.0f;

      GameManager.inst.BroadcastMessage (GameManager.inst.PauseEvent);
      GameManager.inst.BroadcastMessage (GameManager.inst.ResumeEvent);
      GameManager.inst.ChangeState (GameManager.States.None);
    }));
  }

  private IEnumerator HeadStartTimer ()
  {
    yield return new WaitForSeconds (headStartTime);
    InvokeMessage ("HeadStartDecline");
  }

  private void UpdateScore (object sender, System.EventArgs msg)
  {
    if (StatsManager.inst.score > maxHeadStartScore)
    {
      UnregisterEvent ("UpdateScore", UpdateScore);
      InvokeMessage ("FinishHeadStart");
    }
    else if (PlayerManager.inst.player.Ready ())
    {
      if (Random.Range (0, 100) > 50)
        PlayerManager.inst.player.GoLeft ();
      else
        PlayerManager.inst.player.GoRight ();
    }
  }
}
