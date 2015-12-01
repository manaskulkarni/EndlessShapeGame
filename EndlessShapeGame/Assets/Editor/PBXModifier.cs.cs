using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
using System.IO;

public class PbxModifier
{
  [PostProcessBuild]
  public static void OnPostprocessBuild(BuildTarget buildTarget, string path)
  {
  }
}