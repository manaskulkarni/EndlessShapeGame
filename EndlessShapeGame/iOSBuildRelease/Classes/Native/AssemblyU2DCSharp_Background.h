#pragma once
#include <stdint.h>
// UnityEngine.Color[]
struct ColorU5BU5D_t108;
// UnityEngine.UI.Image
struct Image_t124;
// UnityEngine.Coroutine
struct Coroutine_t125;
struct Coroutine_t125_marshaled;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// Background/InterpolationMode
#include "AssemblyU2DCSharp_Background_InterpolationMode.h"
// Background
struct  Background_t121  : public MonoBehaviour_t23
{
	// System.Single Background::colorChangeTime
	float ___colorChangeTime_2;
	// System.Single Background::interpolationTime
	float ___interpolationTime_3;
	// UnityEngine.Color Background::minColor
	Color_t12  ___minColor_4;
	// UnityEngine.Color Background::maxColor
	Color_t12  ___maxColor_5;
	// Background/InterpolationMode Background::interpolationMode
	int32_t ___interpolationMode_6;
	// UnityEngine.Color[] Background::interpolationColors
	ColorU5BU5D_t108* ___interpolationColors_7;
	// System.Single Background::changeTimer
	float ___changeTimer_8;
	// System.Single Background::interpolationTimer
	float ___interpolationTimer_9;
	// System.Int32 Background::colorIndex
	int32_t ___colorIndex_10;
	// UnityEngine.Color Background::colorOne
	Color_t12  ___colorOne_11;
	// UnityEngine.Color Background::colorTwo
	Color_t12  ___colorTwo_12;
	// UnityEngine.UI.Image Background::<drawable>k__BackingField
	Image_t124 * ___U3CdrawableU3Ek__BackingField_13;
	// UnityEngine.Coroutine Background::<updateCoroutine>k__BackingField
	Coroutine_t125 * ___U3CupdateCoroutineU3Ek__BackingField_14;
};
