#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>
struct TimedSequence_1_t606;
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_Gesture.h"
// TouchScript.Gestures.FlickGesture/GestureDirection
#include "TouchScript_TouchScript_Gestures_FlickGesture_GestureDirecti.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// TouchScript.Gestures.FlickGesture
struct  FlickGesture_t138  : public Gesture_t270
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.FlickGesture::flickedInvoker
	EventHandler_1_t241 * ___flickedInvoker_26;
	// System.Single TouchScript.Gestures.FlickGesture::flickTime
	float ___flickTime_27;
	// System.Single TouchScript.Gestures.FlickGesture::minDistance
	float ___minDistance_28;
	// System.Single TouchScript.Gestures.FlickGesture::movementThreshold
	float ___movementThreshold_29;
	// TouchScript.Gestures.FlickGesture/GestureDirection TouchScript.Gestures.FlickGesture::direction
	int32_t ___direction_30;
	// System.Boolean TouchScript.Gestures.FlickGesture::moving
	bool ___moving_31;
	// UnityEngine.Vector2 TouchScript.Gestures.FlickGesture::movementBuffer
	Vector2_t85  ___movementBuffer_32;
	// System.Boolean TouchScript.Gestures.FlickGesture::isActive
	bool ___isActive_33;
	// TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2> TouchScript.Gestures.FlickGesture::deltaSequence
	TimedSequence_1_t606 * ___deltaSequence_34;
	// UnityEngine.Vector2 TouchScript.Gestures.FlickGesture::<ScreenFlickVector>k__BackingField
	Vector2_t85  ___U3CScreenFlickVectorU3Ek__BackingField_35;
	// System.Single TouchScript.Gestures.FlickGesture::<ScreenFlickTime>k__BackingField
	float ___U3CScreenFlickTimeU3Ek__BackingField_36;
};
