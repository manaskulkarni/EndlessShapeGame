#pragma once
#include <stdint.h>
// TouchScript.TouchManagerInstance
struct TouchManagerInstance_t634;
// TouchScript.InputSources.ICoordinatesRemapper
struct ICoordinatesRemapper_t635;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TouchScript.InputSources.InputSource
struct  InputSource_t633  : public MonoBehaviour_t23
{
	// System.Boolean TouchScript.InputSources.InputSource::advancedProps
	bool ___advancedProps_2;
	// TouchScript.TouchManagerInstance TouchScript.InputSources.InputSource::manager
	TouchManagerInstance_t634 * ___manager_3;
	// TouchScript.InputSources.ICoordinatesRemapper TouchScript.InputSources.InputSource::<CoordinatesRemapper>k__BackingField
	Object_t * ___U3CCoordinatesRemapperU3Ek__BackingField_4;
};
