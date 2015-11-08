#pragma once
#include <stdint.h>
// System.EventHandler
struct EventHandler_t169;
// System.Collections.Generic.List`1<Manager>
struct List_1_t170;
// GameManager
struct GameManager_t168;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameManager/GameSettings
#include "AssemblyU2DCSharp_GameManager_GameSettings.h"
// GameManager
struct  GameManager_t168  : public MonoBehaviour_t23
{
	// GameManager/GameSettings GameManager::gameSettings
	GameSettings_t165  ___gameSettings_2;
	// GameManager/GameSettings GameManager::previousGameSettings
	GameSettings_t165  ___previousGameSettings_3;
	// System.Single GameManager::duration
	float ___duration_4;
	// System.Single GameManager::magnitude
	float ___magnitude_5;
	// System.EventHandler GameManager::GameResetEvent
	EventHandler_t169 * ___GameResetEvent_6;
	// System.EventHandler GameManager::GameStartEvent
	EventHandler_t169 * ___GameStartEvent_7;
	// System.EventHandler GameManager::GameRestartEvent
	EventHandler_t169 * ___GameRestartEvent_8;
	// System.EventHandler GameManager::GameOverEvent
	EventHandler_t169 * ___GameOverEvent_9;
	// System.EventHandler GameManager::HighScoreEvent
	EventHandler_t169 * ___HighScoreEvent_10;
	// System.EventHandler GameManager::DifficultyChangeEvent
	EventHandler_t169 * ___DifficultyChangeEvent_11;
	// System.EventHandler GameManager::SpeedChangeEvent
	EventHandler_t169 * ___SpeedChangeEvent_12;
	// System.Boolean GameManager::<played>k__BackingField
	bool ___U3CplayedU3Ek__BackingField_13;
	// System.Boolean GameManager::<playing>k__BackingField
	bool ___U3CplayingU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<Manager> GameManager::<managers>k__BackingField
	List_1_t170 * ___U3CmanagersU3Ek__BackingField_15;
};
struct GameManager_t168_StaticFields{
	// GameManager GameManager::<inst>k__BackingField
	GameManager_t168 * ___U3CinstU3Ek__BackingField_16;
};
