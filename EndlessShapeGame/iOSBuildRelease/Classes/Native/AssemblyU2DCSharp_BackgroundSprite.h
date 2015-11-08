#pragma once
#include <stdint.h>
// UnityEngine.Color[]
struct ColorU5BU5D_t108;
// BackgroundSprite/Del
struct Del_t129;
// UnityEngine.Camera
struct Camera_t32;
// UnityEngine.Coroutine
struct Coroutine_t125;
struct Coroutine_t125_marshaled;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// BackgroundSprite/InterpolationMode
#include "AssemblyU2DCSharp_BackgroundSprite_InterpolationMode.h"
// BackgroundSprite/LerpState
#include "AssemblyU2DCSharp_BackgroundSprite_LerpState.h"
// BackgroundSprite
struct  BackgroundSprite_t131  : public MonoBehaviour_t23
{
	// System.Single BackgroundSprite::colorChangeTime
	float ___colorChangeTime_2;
	// System.Single BackgroundSprite::interpolationTime
	float ___interpolationTime_3;
	// UnityEngine.Color BackgroundSprite::minColor
	Color_t12  ___minColor_4;
	// UnityEngine.Color BackgroundSprite::maxColor
	Color_t12  ___maxColor_5;
	// BackgroundSprite/InterpolationMode BackgroundSprite::interpolationMode
	int32_t ___interpolationMode_6;
	// UnityEngine.Color[] BackgroundSprite::interpolationColors
	ColorU5BU5D_t108* ___interpolationColors_7;
	// System.Single BackgroundSprite::changeTimer
	float ___changeTimer_8;
	// System.Single BackgroundSprite::interpolationTimer
	float ___interpolationTimer_9;
	// System.Int32 BackgroundSprite::colorIndex
	int32_t ___colorIndex_10;
	// UnityEngine.Color BackgroundSprite::colorOne
	Color_t12  ___colorOne_11;
	// UnityEngine.Color BackgroundSprite::colorTwo
	Color_t12  ___colorTwo_12;
	// BackgroundSprite/Del BackgroundSprite::Handle
	Del_t129 * ___Handle_13;
	// UnityEngine.Camera BackgroundSprite::<drawable>k__BackingField
	Camera_t32 * ___U3CdrawableU3Ek__BackingField_14;
	// UnityEngine.Coroutine BackgroundSprite::<updateCoroutine>k__BackingField
	Coroutine_t125 * ___U3CupdateCoroutineU3Ek__BackingField_15;
	// UnityEngine.Color BackgroundSprite::<originalColor>k__BackingField
	Color_t12  ___U3CoriginalColorU3Ek__BackingField_16;
	// BackgroundSprite/LerpState BackgroundSprite::<lerpState>k__BackingField
	int32_t ___U3ClerpStateU3Ek__BackingField_17;
};
