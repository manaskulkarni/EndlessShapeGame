#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>
struct EventHandler_1_t618;
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_Gesture.h"
// TouchScript.Gestures.MetaGesture
struct  MetaGesture_t617  : public Gesture_t270
{
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchBeganInvoker
	EventHandler_1_t618 * ___touchBeganInvoker_29;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchMovedInvoker
	EventHandler_1_t618 * ___touchMovedInvoker_30;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchEndedInvoker
	EventHandler_1_t618 * ___touchEndedInvoker_31;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchCancelledInvoker
	EventHandler_1_t618 * ___touchCancelledInvoker_32;
};
