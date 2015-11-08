#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// TouchScript.Gestures.Simple.Transform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBa.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TouchScript.Gestures.Simple.SimplePanGesture
struct  SimplePanGesture_t612  : public Transform2DGestureBase_t620
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimplePanGesture::panStartedInvoker
	EventHandler_1_t241 * ___panStartedInvoker_35;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimplePanGesture::pannedInvoker
	EventHandler_1_t241 * ___pannedInvoker_36;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimplePanGesture::panCompletedInvoker
	EventHandler_1_t241 * ___panCompletedInvoker_37;
	// System.Single TouchScript.Gestures.Simple.SimplePanGesture::movementThreshold
	float ___movementThreshold_38;
	// UnityEngine.Vector2 TouchScript.Gestures.Simple.SimplePanGesture::movementBuffer
	Vector2_t85  ___movementBuffer_39;
	// System.Boolean TouchScript.Gestures.Simple.SimplePanGesture::isMoving
	bool ___isMoving_40;
	// UnityEngine.Vector3 TouchScript.Gestures.Simple.SimplePanGesture::<WorldDeltaPosition>k__BackingField
	Vector3_t28  ___U3CWorldDeltaPositionU3Ek__BackingField_41;
};
