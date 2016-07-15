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
      PlayerManager.inst.invincible = true;
      Time.timeScale = 10.0f;
      AudioManager.inst.track.pitch = 1.5f;

      StopAllCoroutines ();
      RegisterEvent ("UpdateScore", UpdateScore);
    }));

    RegisterEvent ("FinishHeadStart", ((object s, System.EventArgs msg) => 
    {
      ShapeManager.inst.shapeTriggered = ShapeManager.inst.NormalShapeTriggered;
      PlayerManager.inst.invincible = false;
      Time.timeScale = 1.0f;
      AudioManager.inst.track.pitch = 1.0f;
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
  }
}
