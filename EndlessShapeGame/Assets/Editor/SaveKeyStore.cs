using UnityEngine;
using System.Collections;
using UnityEditor;

#if UNITY_ANDROID
[InitializeOnLoad]
public class SaveKeyStore
{
  static SaveKeyStore ()
  {
    PlayerSettings.Android.keystorePass = "Billanumber786";
    PlayerSettings.Android.keyaliasName = "esgks";
    PlayerSettings.runInBackground = false;
    PlayerSettings.Android.keyaliasPass = "Billanumber786";
  }
}
#endif