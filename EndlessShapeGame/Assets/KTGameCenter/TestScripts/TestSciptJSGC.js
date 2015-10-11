//function Start () {
//		KTGameCenter.SharedCenter().Authenticate();
//}
//
//function OnEnable () {
//	StartCoroutine(RegisterForGameCenter());
//}
//function OnDisable () {
//	KTGameCenter.SharedCenter().GCUserAuthenticated -= GCAuthentication;
//	KTGameCenter.SharedCenter().GCScoreSubmitted -= ScoreSubmitted;
//	KTGameCenter.SharedCenter().GCAchievementSubmitted -= AchievementSubmitted;
//	KTGameCenter.SharedCenter().GCAchievementsReset -= AchivementsReset;
//}
//
//function RegisterForGameCenter () {
//	yield WaitForSeconds(0.5f);
//	KTGameCenter.SharedCenter().GCUserAuthenticated += GCAuthentication;
//	KTGameCenter.SharedCenter().GCScoreSubmitted += ScoreSubmitted;
//	KTGameCenter.SharedCenter().GCAchievementSubmitted += AchievementSubmitted;
//	KTGameCenter.SharedCenter().GCAchievementsReset += AchivementsReset;
//}
//
//function OnGUI () {
//	if (!KTGameCenter.SharedCenter().IsGameCenterAuthenticated()) {
//		GUI.skin.label.fontSize = 20;
//		GUI.Label(new Rect(10,150,200,50), "Authenticating!");
//	}
//	else {
//		GUI.skin.button.fontSize = 20;
//		if (GUI.Button(new Rect(10, 150, 300, 60), "Show Leaderboards")) {
//			KTGameCenter.SharedCenter().ShowLeaderboard();
//		}
//		if (GUI.Button(new Rect(10, 250, 250, 60), "Submit Score")) {
//			KTGameCenter.SharedCenter().SubmitScore(110,"leaderboardId");
//		}
//		if (GUI.Button(new Rect(300, 250, 250, 60), "Submit Achievement")) {
//			KTGameCenter.SharedCenter().SubmitAchievement(10,"achievementId",true);
//		}
//		if (GUI.Button(new Rect(10, 350, 300, 60), "Reset Achievement")) {
//			KTGameCenter.SharedCenter().ResetAchievements();
//		}
//	}
//}
//
//function GCAuthentication (status : String) {
//	print ("delegate call back status= "+status);
//}
//function ScoreSubmitted (leaderboardId : String, error : String) {
//	print ("score submitted with id "+leaderboardId +" and error= "+error);
//}
//function AchievementSubmitted (achId : String,error : String) {
//	print ("achievement submitted with id "+achId +" and error= "+error);
//}
//function AchivementsReset (error : String) {
//	print ("Achievment reset with error= "+error);
//}