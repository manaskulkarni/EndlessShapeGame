using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using System.Linq;
using System.Collections.Generic;

public class KTGameCenter : MonoBehaviour {

	[DllImport("__Internal")]
	private static extern void authenticateLocalUser(string gameobjectName);
	[DllImport("__Internal")]
	private static extern void showLeaderboard(string leaderboardId);
	[DllImport("__Internal")]
	private static extern void resetAchievements();
	[DllImport("__Internal")]
	private static extern void submitScore(int score,string leaderboard);
	[DllImport("__Internal")]
	private static extern void submitAchievement(int percantage,string achivement,bool showBanner);
	[DllImport("__Internal")]
	private static extern void showAchievements();
	[DllImport("__Internal")]
	private static extern void submitFloatScore(float score,int decimals,string leaderboard);

	private static KTGameCenter sharedInstance;

	enum GCStatus {
		kGCAuthenticating = 0,
		kGCAuthenticated
	}
	
	private GCStatus currentStatus;

	private string playerName;
	private string playerAlias;
	private string playerId;

	public delegate void UserAuthenticatationDelegate(string value);
	public event UserAuthenticatationDelegate GCUserAuthenticated; 

	public delegate void ScoreSubmissionDelegate(string leaderboardId,string error);
	public event ScoreSubmissionDelegate GCScoreSubmitted;

	public delegate void AchievementSubmissionDelegate(string achId,string error);
	public event AchievementSubmissionDelegate GCAchievementSubmitted;

	public delegate void ResetAchievementsDelegate(string error);
	public event ResetAchievementsDelegate GCAchievementsReset;

	void Awake () {
		if (sharedInstance == null) {
			sharedInstance = this;
		}
	}

	void OnEnable () {
		if (sharedInstance == null) {
			sharedInstance = this;
		}
	}

	void Start () {
		DontDestroyOnLoad(gameObject);
	}

	public static KTGameCenter SharedCenter () {
		return sharedInstance;
	}

	public void Authenticate () {
		if (Application.platform != RuntimePlatform.IPhonePlayer || currentStatus == GCStatus.kGCAuthenticated) {
			return;
		}
		currentStatus = GCStatus.kGCAuthenticating;
		authenticateLocalUser(gameObject.name);
	}
	public void ShowLeaderboard (string leadboardId = null) {
		if (Application.platform != RuntimePlatform.IPhonePlayer) {
			return;
		}
		showLeaderboard(leadboardId);
	}

	public void ShowAchievements () {
		if (Application.platform != RuntimePlatform.IPhonePlayer) {
			return;
		}
		showAchievements();
	}

	public void ResetAchievements () {
		if (Application.platform != RuntimePlatform.IPhonePlayer) {
			return;
		}
		resetAchievements();
	}
	public void SubmitScore(int score,string leaderboardId) {
		if (Application.platform != RuntimePlatform.IPhonePlayer) {
			return;
		}
		submitScore(score,leaderboardId);
	}

	public void SubmitFloatScore(float score,int decimals,string leaderboardId) {
		if (Application.platform != RuntimePlatform.IPhonePlayer) {
			return;
		}
		submitFloatScore(score,decimals,leaderboardId);
	}

	public void SubmitAchievement(int percantage,string achivementId,bool showBanner) {
		if (Application.platform != RuntimePlatform.IPhonePlayer) {
			return;
		}
		submitAchievement(percantage,achivementId,showBanner);
	}

	public bool IsGameCenterAuthenticated () {
		if (currentStatus == GCStatus.kGCAuthenticated) {
			return true;
		}
		else {
			return false;
		}
	}

	public string PlayerAlias {
		get {
			return playerAlias;
		}
	}
	public string PlayerName {
		get {
			return playerName;
		}
	}
	public string PlayerId {
		get {
			return playerId;
		}
	}

	//native callbacks
	void IsAuthenticated (string error) {
		if (error == "") {
			currentStatus = GCStatus.kGCAuthenticated;
			if (GCUserAuthenticated != null)
				GCUserAuthenticated("Authenticated");
		}
		else {
			if (GCUserAuthenticated != null)
				GCUserAuthenticated(error);
		}
	}

	void GameCenterAvailable (string value) {

	}

	void ProcessGC (string error) {

	}

	void ReloadScoresCompleted (string result) {
//		string[] arr = result.Split('_');
//		string leaderboardId = arr[0];
//		string error = arr[1];
	}

	void ScoreSubmitted (string result) {
		string[] arr = result.Split('_');
		string leaderboardId = arr[0];
		string error = arr[1];
		if (GCScoreSubmitted != null) {
			GCScoreSubmitted(leaderboardId,error);
		}
	}

	void AchievementSubmitted (string result) {
		string[] arr = result.Split('_');
		string achId = arr[0];
		string error = arr[1];
		if (GCAchievementSubmitted != null) {
			GCAchievementSubmitted(achId,error);
		}
	}

	void AchievementReset (string error) {
		if (GCAchievementsReset != null) {
			GCAchievementsReset(error);
		}
	}

	void SetVariables (string val) {
		string[] arr = val.Split('_');
		playerAlias = arr[0];
		playerName = arr[1];
		playerId = arr[2];
	}
}	
