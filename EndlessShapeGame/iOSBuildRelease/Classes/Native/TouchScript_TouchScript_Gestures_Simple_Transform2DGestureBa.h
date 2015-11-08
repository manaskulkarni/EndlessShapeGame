#pragma once
#include <stdint.h>
// UnityEngine.Collider
struct Collider_t534;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t624;
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_Gesture.h"
// TouchScript.Gestures.Simple.Transform2DGestureBase/ProjectionType
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBa_0.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// TouchScript.Gestures.Simple.Transform2DGestureBase
struct  Transform2DGestureBase_t620  : public Gesture_t270
{
	// TouchScript.Gestures.Simple.Transform2DGestureBase/ProjectionType TouchScript.Gestures.Simple.Transform2DGestureBase::projection
	int32_t ___projection_25;
	// UnityEngine.Vector3 TouchScript.Gestures.Simple.Transform2DGestureBase::projectionNormal
	Vector3_t28  ___projectionNormal_26;
	// UnityEngine.Collider TouchScript.Gestures.Simple.Transform2DGestureBase::cachedCollider
	Collider_t534 * ___cachedCollider_27;
	// TouchScript.Layers.TouchLayer TouchScript.Gestures.Simple.Transform2DGestureBase::projectionLayer
	TouchLayer_t624 * ___projectionLayer_28;
	// UnityEngine.Plane TouchScript.Gestures.Simple.Transform2DGestureBase::worldTransformPlane
	Plane_t554  ___worldTransformPlane_29;
	// UnityEngine.Vector3 TouchScript.Gestures.Simple.Transform2DGestureBase::<PreviousWorldTransformCenter>k__BackingField
	Vector3_t28  ___U3CPreviousWorldTransformCenterU3Ek__BackingField_30;
	// UnityEngine.Vector3 TouchScript.Gestures.Simple.Transform2DGestureBase::<WorldTransformCenter>k__BackingField
	Vector3_t28  ___U3CWorldTransformCenterU3Ek__BackingField_31;
};
