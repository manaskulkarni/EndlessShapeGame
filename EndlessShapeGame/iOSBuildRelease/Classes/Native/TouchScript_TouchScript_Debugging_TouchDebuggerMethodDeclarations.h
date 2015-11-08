#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Debugging.TouchDebugger
struct TouchDebugger_t593;
// UnityEngine.Texture2D
struct Texture2D_t13;
// TouchScript.ITouch
struct ITouch_t257;
// System.Object
struct Object_t;
// TouchScript.TouchEventArgs
struct TouchEventArgs_t226;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void TouchScript.Debugging.TouchDebugger::.ctor()
extern "C" void TouchDebugger__ctor_m3219 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Debugging.TouchDebugger::get_ShowTouchId()
extern "C" bool TouchDebugger_get_ShowTouchId_m3220 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_ShowTouchId(System.Boolean)
extern "C" void TouchDebugger_set_ShowTouchId_m3221 (TouchDebugger_t593 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Debugging.TouchDebugger::get_ShowTags()
extern "C" bool TouchDebugger_get_ShowTags_m3222 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_ShowTags(System.Boolean)
extern "C" void TouchDebugger_set_ShowTags_m3223 (TouchDebugger_t593 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D TouchScript.Debugging.TouchDebugger::get_TouchTexture()
extern "C" Texture2D_t13 * TouchDebugger_get_TouchTexture_m3224 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_TouchTexture(UnityEngine.Texture2D)
extern "C" void TouchDebugger_set_TouchTexture_m3225 (TouchDebugger_t593 * __this, Texture2D_t13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Debugging.TouchDebugger::get_UseDPI()
extern "C" bool TouchDebugger_get_UseDPI_m3226 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_UseDPI(System.Boolean)
extern "C" void TouchDebugger_set_UseDPI_m3227 (TouchDebugger_t593 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Debugging.TouchDebugger::get_TouchSize()
extern "C" float TouchDebugger_get_TouchSize_m3228 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_TouchSize(System.Single)
extern "C" void TouchDebugger_set_TouchSize_m3229 (TouchDebugger_t593 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TouchScript.Debugging.TouchDebugger::get_FontColor()
extern "C" Color_t12  TouchDebugger_get_FontColor_m3230 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_FontColor(UnityEngine.Color)
extern "C" void TouchDebugger_set_FontColor_m3231 (TouchDebugger_t593 * __this, Color_t12  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::OnEnable()
extern "C" void TouchDebugger_OnEnable_m3232 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::OnDisable()
extern "C" void TouchDebugger_OnDisable_m3233 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::OnGUI()
extern "C" void TouchDebugger_OnGUI_m3234 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::checkDPI()
extern "C" void TouchDebugger_checkDPI_m3235 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::update()
extern "C" void TouchDebugger_update_m3236 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::computeConsts()
extern "C" void TouchDebugger_computeConsts_m3237 (TouchDebugger_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::updateDummy(TouchScript.ITouch)
extern "C" void TouchDebugger_updateDummy_m3238 (TouchDebugger_t593 * __this, Object_t * ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::touchesBeganHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void TouchDebugger_touchesBeganHandler_m3239 (TouchDebugger_t593 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::touchesMovedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void TouchDebugger_touchesMovedHandler_m3240 (TouchDebugger_t593 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::touchesEndedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void TouchDebugger_touchesEndedHandler_m3241 (TouchDebugger_t593 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::touchesCancelledHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void TouchDebugger_touchesCancelledHandler_m3242 (TouchDebugger_t593 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
