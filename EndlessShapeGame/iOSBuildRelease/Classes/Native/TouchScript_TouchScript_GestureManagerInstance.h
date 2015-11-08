#pragma once
#include <stdint.h>
// TouchScript.GestureManagerInstance
struct GestureManagerInstance_t600;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
struct List_1_t601;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>
struct Dictionary_2_t602;
// System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>
struct Dictionary_2_t603;
// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>>
struct Action_2_t604;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TouchScript.GestureManagerInstance
struct  GestureManagerInstance_t600  : public MonoBehaviour_t23
{
	// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::gesturesToReset
	List_1_t601 * ___gesturesToReset_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::targetTouches
	Dictionary_2_t602 * ___targetTouches_5;
	// System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::gestureTouches
	Dictionary_2_t603 * ___gestureTouches_6;
	// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::activeGestures
	List_1_t601 * ___activeGestures_7;
};
struct GestureManagerInstance_t600_StaticFields{
	// TouchScript.GestureManagerInstance TouchScript.GestureManagerInstance::instance
	GestureManagerInstance_t600 * ___instance_2;
	// System.Boolean TouchScript.GestureManagerInstance::shuttingDown
	bool ___shuttingDown_3;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::<>f__am$cache6
	Action_2_t604 * ___U3CU3Ef__amU24cache6_8;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::<>f__am$cache7
	Action_2_t604 * ___U3CU3Ef__amU24cache7_9;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::<>f__am$cache8
	Action_2_t604 * ___U3CU3Ef__amU24cache8_10;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>> TouchScript.GestureManagerInstance::<>f__am$cache9
	Action_2_t604 * ___U3CU3Ef__amU24cache9_11;
};
