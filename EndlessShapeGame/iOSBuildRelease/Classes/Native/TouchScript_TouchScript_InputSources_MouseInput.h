#pragma once
#include <stdint.h>
// TouchScript.Tags
struct Tags_t637;
// TouchScript.InputSources.InputSource
#include "TouchScript_TouchScript_InputSources_InputSource.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TouchScript.InputSources.MouseInput
struct  MouseInput_t636  : public InputSource_t633
{
	// System.Boolean TouchScript.InputSources.MouseInput::DisableOnMobilePlatforms
	bool ___DisableOnMobilePlatforms_5;
	// TouchScript.Tags TouchScript.InputSources.MouseInput::Tags
	Tags_t637 * ___Tags_6;
	// System.Int32 TouchScript.InputSources.MouseInput::mousePointId
	int32_t ___mousePointId_7;
	// System.Int32 TouchScript.InputSources.MouseInput::fakeMousePointId
	int32_t ___fakeMousePointId_8;
	// UnityEngine.Vector3 TouchScript.InputSources.MouseInput::mousePointPos
	Vector3_t28  ___mousePointPos_9;
};
