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
// TouchScript.Gestures.TapGesture
struct  TapGesture_t247  : public Gesture_t270
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.TapGesture::tappedInvoker
	EventHandler_1_t241 * ___tappedInvoker_26;
	// System.Int32 TouchScript.Gestures.TapGesture::numberOfTapsRequired
	int32_t ___numberOfTapsRequired_27;
	// System.Single TouchScript.Gestures.TapGesture::timeLimit
	float ___timeLimit_28;
	// System.Single TouchScript.Gestures.TapGesture::distanceLimit
	float ___distanceLimit_29;
	// System.Single TouchScript.Gestures.TapGesture::distanceLimitInPixelsSquared
	float ___distanceLimitInPixelsSquared_30;
	// System.Int32 TouchScript.Gestures.TapGesture::tapsDone
	int32_t ___tapsDone_31;
	// UnityEngine.Vector2 TouchScript.Gestures.TapGesture::startPosition
	Vector2_t85  ___startPosition_32;
	// UnityEngine.Vector2 TouchScript.Gestures.TapGesture::totalMovement
	Vector2_t85  ___totalMovement_33;
};
