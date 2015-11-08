#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.TouchManager
struct TouchManager_t252;
// TouchScript.ITouchManager
struct ITouchManager_t254;
// TouchScript.Devices.Display.IDisplayDevice
struct IDisplayDevice_t663;
// UnityEngine.GameObject
struct GameObject_t30;
// System.Object
struct Object_t;
// TouchScript.TouchEventArgs
struct TouchEventArgs_t226;
// System.EventArgs
struct EventArgs_t223;
// TouchScript.TouchManager/MessageType
#include "TouchScript_TouchScript_TouchManager_MessageType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.TouchManager::.ctor()
extern "C" void TouchManager__ctor_m3694 (TouchManager_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::.cctor()
extern "C" void TouchManager__cctor_m3695 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouchManager TouchScript.TouchManager::get_Instance()
extern "C" Object_t * TouchManager_get_Instance_m1217 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Devices.Display.IDisplayDevice TouchScript.TouchManager::get_DisplayDevice()
extern "C" Object_t * TouchManager_get_DisplayDevice_m3696 (TouchManager_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::set_DisplayDevice(TouchScript.Devices.Display.IDisplayDevice)
extern "C" void TouchManager_set_DisplayDevice_m3697 (TouchManager_t252 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManager::get_UseSendMessage()
extern "C" bool TouchManager_get_UseSendMessage_m3698 (TouchManager_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::set_UseSendMessage(System.Boolean)
extern "C" void TouchManager_set_UseSendMessage_m3699 (TouchManager_t252 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.TouchManager/MessageType TouchScript.TouchManager::get_SendMessageEvents()
extern "C" int32_t TouchManager_get_SendMessageEvents_m3700 (TouchManager_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::set_SendMessageEvents(TouchScript.TouchManager/MessageType)
extern "C" void TouchManager_set_SendMessageEvents_m3701 (TouchManager_t252 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TouchScript.TouchManager::get_SendMessageTarget()
extern "C" GameObject_t30 * TouchManager_get_SendMessageTarget_m3702 (TouchManager_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::set_SendMessageTarget(UnityEngine.GameObject)
extern "C" void TouchManager_set_SendMessageTarget_m3703 (TouchManager_t252 * __this, GameObject_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManager::IsInvalidPosition(UnityEngine.Vector2)
extern "C" bool TouchManager_IsInvalidPosition_m3704 (Object_t * __this /* static, unused */, Vector2_t85  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::OnEnable()
extern "C" void TouchManager_OnEnable_m3705 (TouchManager_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::updateSubscription()
extern "C" void TouchManager_updateSubscription_m3706 (TouchManager_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::touchesBeganHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void TouchManager_touchesBeganHandler_m3707 (TouchManager_t252 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::touchesMovedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void TouchManager_touchesMovedHandler_m3708 (TouchManager_t252 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::touchesEndedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void TouchManager_touchesEndedHandler_m3709 (TouchManager_t252 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::touchesCancelledHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void TouchManager_touchesCancelledHandler_m3710 (TouchManager_t252 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::frameStartedhandler(System.Object,System.EventArgs)
extern "C" void TouchManager_frameStartedhandler_m3711 (TouchManager_t252 * __this, Object_t * ___sender, EventArgs_t223 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::frameFinishedHandler(System.Object,System.EventArgs)
extern "C" void TouchManager_frameFinishedHandler_m3712 (TouchManager_t252 * __this, Object_t * ___sender, EventArgs_t223 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
