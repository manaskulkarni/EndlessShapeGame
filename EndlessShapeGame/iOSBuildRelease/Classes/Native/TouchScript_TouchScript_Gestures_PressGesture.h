#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_Gesture.h"
// TouchScript.Gestures.PressGesture
struct  PressGesture_t250  : public Gesture_t270
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.PressGesture::pressedInvoker
	EventHandler_1_t241 * ___pressedInvoker_26;
	// System.Boolean TouchScript.Gestures.PressGesture::ignoreChildren
	bool ___ignoreChildren_27;
};
