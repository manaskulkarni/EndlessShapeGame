#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t30;
// PlayerManager/PlayerPreset[]
struct PlayerPresetU5BU5D_t176;
// PlayerBehavior
struct PlayerBehavior_t133;
// PlayerManager
struct PlayerManager_t174;
// Manager
#include "AssemblyU2DCSharp_Manager.h"
// PlayerManager
struct  PlayerManager_t174  : public Manager_t155
{
	// UnityEngine.GameObject PlayerManager::playerInputPrefab
	GameObject_t30 * ___playerInputPrefab_2;
	// PlayerManager/PlayerPreset[] PlayerManager::playerPresets
	PlayerPresetU5BU5D_t176* ___playerPresets_3;
	// System.Single PlayerManager::startPlayerAlpha
	float ___startPlayerAlpha_4;
	// PlayerBehavior PlayerManager::<player>k__BackingField
	PlayerBehavior_t133 * ___U3CplayerU3Ek__BackingField_5;
};
struct PlayerManager_t174_StaticFields{
	// PlayerManager PlayerManager::<inst>k__BackingField
	PlayerManager_t174 * ___U3CinstU3Ek__BackingField_6;
};
