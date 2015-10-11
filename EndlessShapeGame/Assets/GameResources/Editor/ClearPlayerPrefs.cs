using UnityEngine;
using UnityEditor;
using System.Collections;

public class ClearPlayerPrefs : EditorWindow
{
  [MenuItem ("PlayerPrefs/ClearPlayerPrefs")]
  // Public Members

  // Private Members

  public static void  ShowWindow ()
  {
    PlayerPrefs.DeleteAll ();
  }
}
