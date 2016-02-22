//using UnityEngine;
//using System.Collections;
//using UnityEditor;
//using UnityEditor.iOS.Xcode;
//
//public class PBXModifier
//{
//  [PostProcessBuild]
//  public static void OnPostprocessBuild(BuildTarget buildTarget, string path)
//  {
//    if (buildTarget == BuildTarget.iOS)
//    {
//      string projPath = path + "/Unity-iPhone.xcodeproj/project.pbxproj";
//
//      PBXProject proj = new PBXProject();
//      string nativeTarget = proj.TargetGuidByName(Xcode.PBXProject.GetUnityTargetName());
//      string testTarget = proj.TargetGuidByName(Xcode.PBXProject.GetUnityTestTargetName());
//      string projectTarget = proj.guid;
//      string[] buildTargets = new string[]{nativeTarget, testTarget};
//
//      proj.ReadFromString(File.ReadAllText(projPath));
//      proj.SetBuildProperty(buildTargets, "ENABLE_BITCODE", "NO");
//      File.WriteAllText(projPath, proj.WriteToString());
//    }
//  }
//}
