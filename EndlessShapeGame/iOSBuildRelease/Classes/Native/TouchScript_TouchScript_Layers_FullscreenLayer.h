#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t32;
// UnityEngine.Transform
struct Transform_t48;
// TouchScript.Layers.TouchLayer
#include "TouchScript_TouchScript_Layers_TouchLayer.h"
// TouchScript.Layers.FullscreenLayer/LayerType
#include "TouchScript_TouchScript_Layers_FullscreenLayer_LayerType.h"
// TouchScript.Layers.FullscreenLayer
struct  FullscreenLayer_t646  : public TouchLayer_t624
{
	// TouchScript.Layers.FullscreenLayer/LayerType TouchScript.Layers.FullscreenLayer::type
	int32_t ___type_4;
	// UnityEngine.Camera TouchScript.Layers.FullscreenLayer::_camera
	Camera_t32 * ____camera_5;
	// UnityEngine.Transform TouchScript.Layers.FullscreenLayer::cameraTransform
	Transform_t48 * ___cameraTransform_6;
};
