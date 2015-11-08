#pragma once
#include <stdint.h>
// System.EventHandler
struct EventHandler_t169;
// StatsManager
struct StatsManager_t194;
// Manager
#include "AssemblyU2DCSharp_Manager.h"
// StatsManager
struct  StatsManager_t194  : public Manager_t155
{
	// System.EventHandler StatsManager::SubmitScoreEvent
	EventHandler_t169 * ___SubmitScoreEvent_2;
	// System.EventHandler StatsManager::ShowLeaderboardEvent
	EventHandler_t169 * ___ShowLeaderboardEvent_3;
	// System.EventHandler StatsManager::ShowAchievementsEvent
	EventHandler_t169 * ___ShowAchievementsEvent_4;
	// System.Int32 StatsManager::<score>k__BackingField
	int32_t ___U3CscoreU3Ek__BackingField_5;
	// System.Boolean StatsManager::<isHighScore>k__BackingField
	bool ___U3CisHighScoreU3Ek__BackingField_6;
	// System.Int32 StatsManager::<coins>k__BackingField
	int32_t ___U3CcoinsU3Ek__BackingField_7;
	// System.Boolean StatsManager::<firstSession>k__BackingField
	bool ___U3CfirstSessionU3Ek__BackingField_8;
	// System.Int32 StatsManager::<previousScore>k__BackingField
	int32_t ___U3CpreviousScoreU3Ek__BackingField_10;
	// System.Boolean StatsManager::<highScoreCrossed>k__BackingField
	bool ___U3ChighScoreCrossedU3Ek__BackingField_11;
};
struct StatsManager_t194_StaticFields{
	// StatsManager StatsManager::<inst>k__BackingField
	StatsManager_t194 * ___U3CinstU3Ek__BackingField_9;
};
