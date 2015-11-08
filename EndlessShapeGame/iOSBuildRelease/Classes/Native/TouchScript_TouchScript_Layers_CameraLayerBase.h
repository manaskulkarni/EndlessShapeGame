#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t32;
// TouchScript.Layers.TouchLayer
#include "TouchScript_TouchScript_Layers_TouchLayer.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// TouchScript.Layers.CameraLayerBase
struct  CameraLayerBase_t641  : public TouchLayer_t624
{
	// UnityEngine.LayerMask TouchScript.Layers.CameraLayerBase::layerMask
	LayerMask_t29  ___layerMask_4;
	// UnityEngine.Camera TouchScript.Layers.CameraLayerBase::_camera
	Camera_t32 * ____camera_5;
};
