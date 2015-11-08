#pragma once
#include <stdint.h>
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// TouchScript.Gestures.Gesture/GestureState
#include "TouchScript_TouchScript_Gestures_Gesture_GestureState.h"
// TouchScript.Gestures.GestureStateChangeEventArgs
struct  GestureStateChangeEventArgs_t227  : public EventArgs_t223
{
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::<PreviousState>k__BackingField
	int32_t ___U3CPreviousStateU3Ek__BackingField_1;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_2;
};
