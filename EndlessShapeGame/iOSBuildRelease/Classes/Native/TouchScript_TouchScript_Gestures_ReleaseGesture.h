#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_Gesture.h"
// TouchScript.Gestures.ReleaseGesture
struct  ReleaseGesture_t251  : public Gesture_t270
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.ReleaseGesture::releasedInvoker
	EventHandler_1_t241 * ___releasedInvoker_26;
	// System.Boolean TouchScript.Gestures.ReleaseGesture::ignoreChildren
	bool ___ignoreChildren_27;
};
