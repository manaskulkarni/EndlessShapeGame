#pragma once
#include <stdint.h>
// KTGameCenter
struct KTGameCenter_t97;
// System.String
struct String_t;
// KTGameCenter/UserAuthenticatationDelegate
struct UserAuthenticatationDelegate_t90;
// KTGameCenter/ScoreSubmissionDelegate
struct ScoreSubmissionDelegate_t94;
// KTGameCenter/AchievementSubmissionDelegate
struct AchievementSubmissionDelegate_t95;
// KTGameCenter/ResetAchievementsDelegate
struct ResetAchievementsDelegate_t96;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// KTGameCenter/GCStatus
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_GCStatus.h"
// KTGameCenter
struct  KTGameCenter_t97  : public MonoBehaviour_t23
{
	// KTGameCenter/GCStatus KTGameCenter::currentStatus
	int32_t ___currentStatus_3;
	// System.String KTGameCenter::playerName
	String_t* ___playerName_4;
	// System.String KTGameCenter::playerAlias
	String_t* ___playerAlias_5;
	// System.String KTGameCenter::playerId
	String_t* ___playerId_6;
	// KTGameCenter/UserAuthenticatationDelegate KTGameCenter::GCUserAuthenticated
	UserAuthenticatationDelegate_t90 * ___GCUserAuthenticated_7;
	// KTGameCenter/ScoreSubmissionDelegate KTGameCenter::GCScoreSubmitted
	ScoreSubmissionDelegate_t94 * ___GCScoreSubmitted_8;
	// KTGameCenter/AchievementSubmissionDelegate KTGameCenter::GCAchievementSubmitted
	AchievementSubmissionDelegate_t95 * ___GCAchievementSubmitted_9;
	// KTGameCenter/ResetAchievementsDelegate KTGameCenter::GCAchievementsReset
	ResetAchievementsDelegate_t96 * ___GCAchievementsReset_10;
};
struct KTGameCenter_t97_StaticFields{
	// KTGameCenter KTGameCenter::sharedInstance
	KTGameCenter_t97 * ___sharedInstance_2;
};
