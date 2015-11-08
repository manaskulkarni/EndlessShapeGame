#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
struct EventHandler_1_t259;
// System.Collections.Generic.List`1<TouchScript.ITouch>
struct List_1_t592;
// UnityEngine.Transform
struct Transform_t48;
// UnityEngine.GameObject
struct GameObject_t30;
// TouchScript.Gestures.Gesture
struct Gesture_t270;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
struct List_1_t601;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t478;
// TouchScript.Utils.TimedSequence`1<TouchScript.ITouch>
struct TimedSequence_1_t608;
// TouchScript.GestureManagerInstance
struct GestureManagerInstance_t600;
// TouchScript.IGestureDelegate
struct IGestureDelegate_t609;
// TouchScript.ITouchManager
struct ITouchManager_t254;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TouchScript.Gestures.Gesture/GestureState
#include "TouchScript_TouchScript_Gestures_Gesture_GestureState.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// TouchScript.Gestures.Gesture
struct  Gesture_t270  : public MonoBehaviour_t23
{
	// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs> TouchScript.Gestures.Gesture::stateChangedInvoker
	EventHandler_1_t259 * ___stateChangedInvoker_3;
	// System.Collections.Generic.List`1<TouchScript.ITouch> TouchScript.Gestures.Gesture::activeTouches
	List_1_t592 * ___activeTouches_4;
	// UnityEngine.Transform TouchScript.Gestures.Gesture::cachedTransform
	Transform_t48 * ___cachedTransform_5;
	// System.Boolean TouchScript.Gestures.Gesture::advancedProps
	bool ___advancedProps_6;
	// System.Boolean TouchScript.Gestures.Gesture::combineTouches
	bool ___combineTouches_7;
	// System.Single TouchScript.Gestures.Gesture::combineTouchesInterval
	float ___combineTouchesInterval_8;
	// System.Boolean TouchScript.Gestures.Gesture::useSendMessage
	bool ___useSendMessage_9;
	// System.Boolean TouchScript.Gestures.Gesture::sendStateChangeMessages
	bool ___sendStateChangeMessages_10;
	// UnityEngine.GameObject TouchScript.Gestures.Gesture::sendMessageTarget
	GameObject_t30 * ___sendMessageTarget_11;
	// TouchScript.Gestures.Gesture TouchScript.Gestures.Gesture::requireGestureToFail
	Gesture_t270 * ___requireGestureToFail_12;
	// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.Gestures.Gesture::friendlyGestures
	List_1_t601 * ___friendlyGestures_13;
	// System.Collections.Generic.List`1<System.Int32> TouchScript.Gestures.Gesture::friendlyGestureIds
	List_1_t478 * ___friendlyGestureIds_14;
	// TouchScript.Utils.TimedSequence`1<TouchScript.ITouch> TouchScript.Gestures.Gesture::touchSequence
	TimedSequence_1_t608 * ___touchSequence_15;
	// TouchScript.GestureManagerInstance TouchScript.Gestures.Gesture::gestureManagerInstance
	GestureManagerInstance_t600 * ___gestureManagerInstance_16;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::delayedStateChange
	int32_t ___delayedStateChange_17;
	// System.Boolean TouchScript.Gestures.Gesture::requiredGestureFailed
	bool ___requiredGestureFailed_18;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::state
	int32_t ___state_19;
	// UnityEngine.Vector2 TouchScript.Gestures.Gesture::cachedScreenPosition
	Vector2_t85  ___cachedScreenPosition_20;
	// UnityEngine.Vector2 TouchScript.Gestures.Gesture::cachedPreviousScreenPosition
	Vector2_t85  ___cachedPreviousScreenPosition_21;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::<PreviousState>k__BackingField
	int32_t ___U3CPreviousStateU3Ek__BackingField_22;
	// TouchScript.IGestureDelegate TouchScript.Gestures.Gesture::<Delegate>k__BackingField
	Object_t * ___U3CDelegateU3Ek__BackingField_23;
	// TouchScript.ITouchManager TouchScript.Gestures.Gesture::<touchManager>k__BackingField
	Object_t * ___U3CtouchManagerU3Ek__BackingField_24;
};
