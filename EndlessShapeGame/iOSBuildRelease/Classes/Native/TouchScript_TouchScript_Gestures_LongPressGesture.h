#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_Gesture.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// TouchScript.Gestures.LongPressGesture
struct  LongPressGesture_t258  : public Gesture_t270
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.LongPressGesture::longPressedInvoker
	EventHandler_1_t241 * ___longPressedInvoker_26;
	// System.Int32 TouchScript.Gestures.LongPressGesture::maxTouches
	int32_t ___maxTouches_27;
	// System.Single TouchScript.Gestures.LongPressGesture::timeToPress
	float ___timeToPress_28;
	// System.Single TouchScript.Gestures.LongPressGesture::distanceLimit
	float ___distanceLimit_29;
	// System.Single TouchScript.Gestures.LongPressGesture::distanceLimitInPixelsSquared
	float ___distanceLimitInPixelsSquared_30;
	// UnityEngine.Vector2 TouchScript.Gestures.LongPressGesture::totalMovement
	Vector2_t85  ___totalMovement_31;
};
