using UnityEngine;
using System.Collections;

public class KeyChainDebug : MonoBehaviour
{
    string appKey = "application key";
    string data = "user data";

    void OnGUI()
    {
        GUILayout.BeginArea(new Rect(0, 0, Screen.width, Screen.height));
        {
            GUILayout.Label("Application Key:");
            appKey = GUILayout.TextField(appKey);
            GUILayout.Label("User Data:");
            data = GUILayout.TextField(data);

            if (GUILayout.Button("Set"))
                KeyChainBinding.SetKeyChainData(appKey, data);
            if (GUILayout.Button("Get"))
            {
                string applicationKey, retrievedData;
                KeyChainBinding.GetKeyChainData(out applicationKey, out retrievedData);
                Debug.Log(string.Format("retrieved key: \"{0}\" retrieved data: \"{1}\"", applicationKey, retrievedData));
            }
            if (GUILayout.Button("Reset"))
                KeyChainBinding.DeleteKeyChainData();
        }
        GUILayout.EndArea();
    }
}