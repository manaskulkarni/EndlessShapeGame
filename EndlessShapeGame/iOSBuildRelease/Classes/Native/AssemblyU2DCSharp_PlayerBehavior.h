#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t135;
// System.Collections.Generic.List`1<PlayerShapeTrigger>
struct List_1_t136;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PlayerBehavior
struct  PlayerBehavior_t133  : public MonoBehaviour_t23
{
	// System.Single PlayerBehavior::swipeSpeedMultiplier
	float ___swipeSpeedMultiplier_2;
	// System.Collections.Generic.List`1<UnityEngine.Transform> PlayerBehavior::<shapes>k__BackingField
	List_1_t135 * ___U3CshapesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<PlayerShapeTrigger> PlayerBehavior::<triggers>k__BackingField
	List_1_t136 * ___U3CtriggersU3Ek__BackingField_4;
	// UnityEngine.Vector3 PlayerBehavior::<shapeOffset>k__BackingField
	Vector3_t28  ___U3CshapeOffsetU3Ek__BackingField_5;
	// System.Single PlayerBehavior::<minXPosition>k__BackingField
	float ___U3CminXPositionU3Ek__BackingField_6;
	// System.Single PlayerBehavior::<maxXPosition>k__BackingField
	float ___U3CmaxXPositionU3Ek__BackingField_7;
};
