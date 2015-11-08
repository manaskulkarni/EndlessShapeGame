#pragma once
#include <stdint.h>
// System.EventHandler`1<TouchScript.TouchEventArgs>
struct EventHandler_1_t253;
// System.EventHandler
struct EventHandler_t169;
// TouchScript.TouchManagerInstance
struct TouchManagerInstance_t634;
// TouchScript.Devices.Display.IDisplayDevice
struct IDisplayDevice_t663;
// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>
struct List_1_t654;
// System.Collections.Generic.List`1<TouchScript.TouchPoint>
struct List_1_t659;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>
struct Dictionary_2_t660;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t661;
// System.Predicate`1<TouchScript.Layers.TouchLayer>
struct Predicate_1_t662;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TouchScript.TouchManagerInstance
struct  TouchManagerInstance_t634  : public MonoBehaviour_t23
{
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesBeganInvoker
	EventHandler_1_t253 * ___touchesBeganInvoker_2;
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesMovedInvoker
	EventHandler_1_t253 * ___touchesMovedInvoker_3;
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesEndedInvoker
	EventHandler_1_t253 * ___touchesEndedInvoker_4;
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesCancelledInvoker
	EventHandler_1_t253 * ___touchesCancelledInvoker_5;
	// System.EventHandler TouchScript.TouchManagerInstance::frameStartedInvoker
	EventHandler_t169 * ___frameStartedInvoker_6;
	// System.EventHandler TouchScript.TouchManagerInstance::frameFinishedInvoker
	EventHandler_t169 * ___frameFinishedInvoker_7;
	// TouchScript.Devices.Display.IDisplayDevice TouchScript.TouchManagerInstance::displayDevice
	Object_t * ___displayDevice_10;
	// System.Single TouchScript.TouchManagerInstance::dpi
	float ___dpi_11;
	// System.Single TouchScript.TouchManagerInstance::dotsPerCentimeter
	float ___dotsPerCentimeter_12;
	// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManagerInstance::layers
	List_1_t654 * ___layers_13;
	// System.Collections.Generic.List`1<TouchScript.TouchPoint> TouchScript.TouchManagerInstance::touches
	List_1_t659 * ___touches_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint> TouchScript.TouchManagerInstance::idToTouch
	Dictionary_2_t660 * ___idToTouch_15;
	// System.Collections.Generic.List`1<TouchScript.TouchPoint> TouchScript.TouchManagerInstance::touchesBegan
	List_1_t659 * ___touchesBegan_16;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.TouchManagerInstance::touchesUpdated
	HashSet_1_t661 * ___touchesUpdated_17;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.TouchManagerInstance::touchesEnded
	HashSet_1_t661 * ___touchesEnded_18;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.TouchManagerInstance::touchesCancelled
	HashSet_1_t661 * ___touchesCancelled_19;
	// System.Int32 TouchScript.TouchManagerInstance::nextTouchId
	int32_t ___nextTouchId_20;
};
struct TouchManagerInstance_t634_StaticFields{
	// System.Boolean TouchScript.TouchManagerInstance::shuttingDown
	bool ___shuttingDown_8;
	// TouchScript.TouchManagerInstance TouchScript.TouchManagerInstance::instance
	TouchManagerInstance_t634 * ___instance_9;
	// System.Predicate`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManagerInstance::<>f__am$cache13
	Predicate_1_t662 * ___U3CU3Ef__amU24cache13_21;
};
