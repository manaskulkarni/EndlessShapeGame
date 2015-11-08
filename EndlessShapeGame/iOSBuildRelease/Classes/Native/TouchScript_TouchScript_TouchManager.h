#pragma once
#include <stdint.h>
// System.Version
struct Version_t655;
// UnityEngine.Object
struct Object_t99;
struct Object_t99_marshaled;
// UnityEngine.GameObject
struct GameObject_t30;
// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>
struct List_1_t654;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// TouchScript.TouchManager/MessageType
#include "TouchScript_TouchScript_TouchManager_MessageType.h"
// TouchScript.TouchManager
struct  TouchManager_t252  : public MonoBehaviour_t23
{
	// UnityEngine.Object TouchScript.TouchManager::displayDevice
	Object_t99 * ___displayDevice_6;
	// System.Boolean TouchScript.TouchManager::useSendMessage
	bool ___useSendMessage_7;
	// TouchScript.TouchManager/MessageType TouchScript.TouchManager::sendMessageEvents
	int32_t ___sendMessageEvents_8;
	// UnityEngine.GameObject TouchScript.TouchManager::sendMessageTarget
	GameObject_t30 * ___sendMessageTarget_9;
	// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManager::layers
	List_1_t654 * ___layers_10;
};
struct TouchManager_t252_StaticFields{
	// UnityEngine.Vector2 TouchScript.TouchManager::INVALID_POSITION
	Vector2_t85  ___INVALID_POSITION_4;
	// System.Version TouchScript.TouchManager::VERSION
	Version_t655 * ___VERSION_5;
};
