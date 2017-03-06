using UnityEngine;
using UnityEditor;
using System.Collections;

public class EditorCommands
{
  [MenuItem ("Tools/PlayerPrefs/ClearPlayerPrefs")]
  static private void ClearPlayerPrefs ()
  {
    PlayerPrefs.DeleteAll ();
  }

  [MenuItem ("Tools/Special")]
  static private void Special ()
  {
    var shape = GameObject.FindObjectOfType <ShapeManager> ();
    foreach (var v in shape.speedPresets)
    {
      var s = v.preset.speedMultiplier;
      s *= 0.8f;
      v.preset.speedMultiplier = v.preset.maxSpeed = s;
    }

    EditorUtility.SetDirty (shape);
  }
}
