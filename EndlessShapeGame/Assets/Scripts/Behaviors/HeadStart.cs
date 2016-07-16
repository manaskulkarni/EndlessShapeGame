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
      StartCoroutine (TransitionNormal ());
//      GameManager.inst.BroadcastMessage (GameManager.inst.PauseEvent);
//      GameManager.inst.BroadcastMessage (GameManager.inst.ResumeEvent);
//      GameManager.inst.ChangeState (GameManager.States.None);
    }));
  }

  private IEnumerator HeadStartTimer ()
  {
    yield return new WaitForSeconds (headStartTime);
    InvokeMessage ("HeadStartDecline");
  }

  private IEnumerator TransitionNormal ()
  {
    var t = 0.0f;
    while (t < 1.0f)
    {
      t += Time.deltaTime * 5;
      Time.timeScale = Mathf.Lerp (1.0f, 0.2f, t);
      AudioManager.inst.track.pitch = Time.timeScale;
      yield return null;
    }

    yield return new WaitForSeconds (0.5f);

    t = 0.0f;
    while (t < 1.0f)
    {
      t += Time.deltaTime * 5;
      Time.timeScale = Mathf.Lerp (0.2f, 1.0f, t);
      AudioManager.inst.track.pitch = Time.timeScale;
      yield return null;
    }
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
        PlayerManager.inst.player.GoLeftInstant ();
      else
        PlayerManager.inst.player.GoRightInstant ();
    }
  }
}
