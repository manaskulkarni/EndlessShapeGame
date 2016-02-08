using UnityEngine;
using System.Runtime.InteropServices;
using System.IO;

public class KeyChainBinding
{
    private const char seperatorChar = '|';
    private const string logPrefix = "KeyChainBinding -> {0}";
    private const string setLog = "Set keychain values";
    private const string getLog = "Retrieved applicationKey={0} applicationData={1}";
    private const string deleteLog = "Cleared keychain values";
#if UNITY_IOS && !UNITY_EDITOR
	[DllImport("__Internal")]
	private static extern string getKeyChainUser();
	[DllImport("__Internal")]
	private static extern void setKeyChainUser(string userId, string uuid);
	[DllImport("__Internal")]
	private static extern void deleteKeyChainUser();
#else
    private static string mSavePath
    {
        get { return System.IO.Path.Combine(Application.persistentDataPath, "keyChainStore.dat"); }
    }
    private static string mUniqueIdentifier { get; set; }
#endif
    public static void GetKeyChainData(out string applicationKey, out string data)
    {
#if UNITY_IOS && !UNITY_EDITOR
        Log("Calling extern getKeyChainUser()");
		string result = getKeyChainUser();
		string[] split = result.Split(seperatorChar);
		applicationKey = split[0];
		data = split[1];
#else
        if (string.IsNullOrEmpty(mUniqueIdentifier))
            mUniqueIdentifier = SystemInfo.deviceUniqueIdentifier;
        string result = string.Empty;
        if (File.Exists(mSavePath))
        {
            result = File.ReadAllText(mSavePath);
            result = KeyChainCrypto.Decrypt(result, mUniqueIdentifier);
            string[] split = result.Split(seperatorChar);
            applicationKey = split[0];
            data = split[1];
        }
        else
        {
            applicationKey = string.Empty;
            data = string.Empty;
        }
#endif
        LogFormat(getLog, applicationKey, data);
    }
    public static void SetKeyChainData(string applicationKey, string data)
    {
#if UNITY_IOS && !UNITY_EDITOR
        LogFormat("Calling extern setKeyChainUser({0},{1})", applicationKey, data);
        setKeyChainUser(applicationKey, data);
#else
        if (string.IsNullOrEmpty(mUniqueIdentifier))
            mUniqueIdentifier = SystemInfo.deviceUniqueIdentifier;
        string output = string.Format("{0}{1}{2}", applicationKey, seperatorChar, data);
        File.WriteAllText(mSavePath, KeyChainCrypto.Crypt(output, mUniqueIdentifier));
#endif
        Log(setLog);
    }
    public static void DeleteKeyChainData()
    {
#if UNITY_IOS && !UNITY_EDITOR
		Log("Calling extern deleteKeyChainUser()");
        deleteKeyChainUser();
#else
        if (File.Exists(mSavePath))
            File.Delete(mSavePath);
#endif
        Log(deleteLog);
    }
    private static void Log(string log)
    {
#if DEVELOPMENT_BUILD || UNITY_EDITOR
        Debug.Log(string.Format(logPrefix, log));
#endif
    }
    private static void LogFormat(string format, params object[] parms)
    {
#if DEVELOPMENT_BUILD || UNITY_EDITOR
        Debug.Log(string.Format(logPrefix, string.Format(format, parms)));
#endif
    }
}