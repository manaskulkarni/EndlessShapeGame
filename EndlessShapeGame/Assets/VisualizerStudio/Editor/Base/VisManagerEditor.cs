using UnityEngine;
using UnityEditor;
using System.Collections.ObjectModel;
using System.Collections.Generic;
using System;

/// <summary>
/// This is the editor for the VisManager.
/// </summary>
[CustomEditor(typeof(VisManager))]
public class VisManagerEditor : UnityEditor.Editor
{
    private bool displayDebugFoldOut = false;

    /// <summary>
    /// Main inspector gui function.
    /// </summary>
    public override void OnInspectorGUI()
    {
        //make this look like inspect and make sure the target is valid
#if (UNITY_2_6 || UNITY_3_0 || UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5)
        EditorGUIUtility.LookLikeInspector();
#endif

        GUI.changed = false;

        VisManager manager = target as VisManager;
        if (manager == null)
            return;

        manager.audioSource = (AudioSource)EditorGUILayout.ObjectField("\tAudio Source", manager.audioSource, typeof(AudioSource), true);
        manager.channel = (VisManager.Channel)EditorGUILayout.EnumPopup("\tAudio Channel", (Enum)manager.channel);
        manager.windowSize = (VisManager.WindowSize)EditorGUILayout.EnumPopup("\tWindow Size", (Enum)manager.windowSize);
        manager.windowType = (UnityEngine.FFTWindow)EditorGUILayout.EnumPopup("\tWindow Type", (Enum)manager.windowType);

        displayDebugFoldOut = EditorGUILayout.Foldout(displayDebugFoldOut, "Debug");
        if (displayDebugFoldOut)
        {
            manager.displaySpectrumDebug = EditorGUILayout.Toggle("\t\tDisplay Sectrum", manager.displaySpectrumDebug);
            if (manager.displaySpectrumDebug)
            {
                manager.debugSpectrumBarWidth = Math.Abs(EditorGUILayout.IntField("\t\t\tSpectrum Bar Width", manager.debugSpectrumBarWidth));
                manager.debugSpectrumBarHeight = Math.Abs(EditorGUILayout.IntField("\t\t\tSpectrum Bar Height", manager.debugSpectrumBarHeight));
                manager.debugRawAudioBarHeight = Math.Abs(EditorGUILayout.IntField("\t\t\tRaw Audio Bar Height", manager.debugRawAudioBarHeight));
            }

            manager.displayDataGroupDebug = EditorGUILayout.Toggle("\t\tDisplay Data Group", manager.displayDataGroupDebug);
            if (manager.displayDataGroupDebug)
            {
                manager.debugDataGroupBarWidth = Math.Abs(EditorGUILayout.IntField("\t\t\tBar Width", manager.debugDataGroupBarWidth));
                manager.debugDataGroupBarHeight = Math.Abs(EditorGUILayout.IntField("\t\t\tBar Height", manager.debugDataGroupBarHeight));
            }

            manager.displayControllerDebug = EditorGUILayout.Toggle("\t\tDisplay Controller", manager.displayControllerDebug);
            if (manager.displayControllerDebug)
            {
                manager.debugControllerBarWidth = Math.Abs(EditorGUILayout.IntField("\t\t\tBar Width", manager.debugControllerBarWidth));
                manager.debugControllerBarHeight = Math.Abs(EditorGUILayout.IntField("\t\t\tBar Height", manager.debugControllerBarHeight));
            }

            manager.debugSeparation = Math.Abs(EditorGUILayout.IntField("\t\tSeparation", manager.debugSeparation));
            manager.debugTexture = (Texture)EditorGUILayout.ObjectField("\t\tTexture", manager.debugTexture, typeof(Texture), false);
        }

        if (GUI.changed)
            EditorUtility.SetDirty(target);
    }
}
