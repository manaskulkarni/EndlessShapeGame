using UnityEngine;
using UnityEditor;
using System.Collections;

public class AdToAppPackageGenerator : MonoBehaviour {

	private static string[] assetPathNames = {
		"Assets/Plugins",
		"Assets/Standard Assets",
		"Assets/WebPlayerTemplates"
	};

	private static string defaultFileName = "AdToApp";
	private static string defaultFileExtension = "unitypackage";

	public static void CreatePackage() {
		string fileNameWithPath = defaultFileName + "." + defaultFileExtension;

		AssetDatabase.ExportPackage(assetPathNames, fileNameWithPath, ExportPackageOptions.Recurse);

		Debug.Log("AdToApp package created");
	}
}
