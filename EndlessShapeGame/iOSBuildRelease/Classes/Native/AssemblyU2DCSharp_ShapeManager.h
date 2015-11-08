#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t30;
// ShapeManager/BlockInterval[]
struct BlockIntervalU5BU5D_t190;
// UnityEngine.ParticleSystem
struct ParticleSystem_t191;
// System.Collections.Generic.List`1<ShapeManager/ShapeProperties>
struct List_1_t192;
// ShapeManager/ShapePool
struct ShapePool_t177;
// System.Collections.Generic.List`1<ShapeBehavior>
struct List_1_t149;
// PlayerBehavior
struct PlayerBehavior_t133;
// System.Collections.Generic.SortedDictionary`2<System.Int32,ShapeBehavior>
struct SortedDictionary_2_t193;
// UnityEngine.Coroutine
struct Coroutine_t125;
struct Coroutine_t125_marshaled;
// UnityEngine.Sprite
struct Sprite_t181;
// ShapeManager
struct ShapeManager_t186;
// UnityEngine.Transform
struct Transform_t48;
// Manager
#include "AssemblyU2DCSharp_Manager.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// ShapeManager/IntRange
#include "AssemblyU2DCSharp_ShapeManager_IntRange.h"
// ShapeManager/SpeedPreset
#include "AssemblyU2DCSharp_ShapeManager_SpeedPreset.h"
// ShapeManager
struct  ShapeManager_t186  : public Manager_t155
{
	// System.Int32 ShapeManager::shapePoolCount
	int32_t ___shapePoolCount_2;
	// System.Int32 ShapeManager::gameShapeCount
	int32_t ___gameShapeCount_3;
	// UnityEngine.GameObject ShapeManager::shapePrefab
	GameObject_t30 * ___shapePrefab_4;
	// ShapeManager/BlockInterval[] ShapeManager::speedPresets
	BlockIntervalU5BU5D_t190* ___speedPresets_5;
	// UnityEngine.Vector2 ShapeManager::shapeSpawnOffset
	Vector2_t85  ___shapeSpawnOffset_6;
	// UnityEngine.Vector2 ShapeManager::beginPosition
	Vector2_t85  ___beginPosition_7;
	// System.Boolean ShapeManager::spawnInSameRow
	bool ___spawnInSameRow_8;
	// System.Int32 ShapeManager::maxRepeatCount
	int32_t ___maxRepeatCount_9;
	// UnityEngine.Color ShapeManager::specialColor
	Color_t12  ___specialColor_10;
	// ShapeManager/IntRange ShapeManager::specialRandomRange
	IntRange_t182  ___specialRandomRange_11;
	// ShapeManager/IntRange ShapeManager::specialRandomRangeCompare
	IntRange_t182  ___specialRandomRangeCompare_12;
	// ShapeManager/IntRange ShapeManager::invisibleRandomRange
	IntRange_t182  ___invisibleRandomRange_13;
	// ShapeManager/IntRange ShapeManager::invisibleRandomRangeCompare
	IntRange_t182  ___invisibleRandomRangeCompare_14;
	// UnityEngine.ParticleSystem ShapeManager::specialFeedback
	ParticleSystem_t191 * ___specialFeedback_15;
	// UnityEngine.ParticleSystem ShapeManager::gameOverFeedback
	ParticleSystem_t191 * ___gameOverFeedback_16;
	// System.Single ShapeManager::invisibleFadeStartOffset
	float ___invisibleFadeStartOffset_17;
	// System.Single ShapeManager::fadeOutSpeed
	float ___fadeOutSpeed_18;
	// System.Int32 ShapeManager::minSpecialScore
	int32_t ___minSpecialScore_19;
	// System.Int32 ShapeManager::minInvisibleScore
	int32_t ___minInvisibleScore_20;
	// ShapeManager/SpeedPreset ShapeManager::currentSpeedPreset
	SpeedPreset_t179  ___currentSpeedPreset_21;
	// System.Boolean ShapeManager::first
	bool ___first_22;
	// System.Int32 ShapeManager::<currentIntervalIndex>k__BackingField
	int32_t ___U3CcurrentIntervalIndexU3Ek__BackingField_23;
	// System.Collections.Generic.List`1<ShapeManager/ShapeProperties> ShapeManager::<shapeProperties>k__BackingField
	List_1_t192 * ___U3CshapePropertiesU3Ek__BackingField_24;
	// ShapeManager/ShapePool ShapeManager::<shapePool>k__BackingField
	ShapePool_t177 * ___U3CshapePoolU3Ek__BackingField_25;
	// System.Collections.Generic.List`1<ShapeBehavior> ShapeManager::<shapes>k__BackingField
	List_1_t149 * ___U3CshapesU3Ek__BackingField_26;
	// System.Int32 ShapeManager::<spawnCount>k__BackingField
	int32_t ___U3CspawnCountU3Ek__BackingField_27;
	// PlayerBehavior ShapeManager::<player>k__BackingField
	PlayerBehavior_t133 * ___U3CplayerU3Ek__BackingField_28;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,ShapeBehavior> ShapeManager::<shapePair>k__BackingField
	SortedDictionary_2_t193 * ___U3CshapePairU3Ek__BackingField_29;
	// UnityEngine.Coroutine ShapeManager::<updateSpeed>k__BackingField
	Coroutine_t125 * ___U3CupdateSpeedU3Ek__BackingField_30;
	// System.Int32 ShapeManager::<repeatCount>k__BackingField
	int32_t ___U3CrepeatCountU3Ek__BackingField_31;
	// UnityEngine.Sprite ShapeManager::<previousSprite>k__BackingField
	Sprite_t181 * ___U3CpreviousSpriteU3Ek__BackingField_32;
	// System.Int32 ShapeManager::<shuffleCounter>k__BackingField
	int32_t ___U3CshuffleCounterU3Ek__BackingField_33;
	// System.Single ShapeManager::<startDelay>k__BackingField
	float ___U3CstartDelayU3Ek__BackingField_34;
	// UnityEngine.Transform ShapeManager::<baseShape>k__BackingField
	Transform_t48 * ___U3CbaseShapeU3Ek__BackingField_36;
	// UnityEngine.Transform ShapeManager::<topShape>k__BackingField
	Transform_t48 * ___U3CtopShapeU3Ek__BackingField_37;
};
struct ShapeManager_t186_StaticFields{
	// ShapeManager ShapeManager::<inst>k__BackingField
	ShapeManager_t186 * ___U3CinstU3Ek__BackingField_35;
};
