#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.FlickGesture
struct FlickGesture_t138;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// TouchScript.Gestures.FlickGesture/GestureDirection
#include "TouchScript_TouchScript_Gestures_FlickGesture_GestureDirecti.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.Gestures.FlickGesture::.ctor()
extern "C" void FlickGesture__ctor_m3283 (FlickGesture_t138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::add_Flicked(System.EventHandler`1<System.EventArgs>)
extern "C" void FlickGesture_add_Flicked_m1114 (FlickGesture_t138 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::remove_Flicked(System.EventHandler`1<System.EventArgs>)
extern "C" void FlickGesture_remove_Flicked_m3284 (FlickGesture_t138 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.FlickGesture::get_FlickTime()
extern "C" float FlickGesture_get_FlickTime_m3285 (FlickGesture_t138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_FlickTime(System.Single)
extern "C" void FlickGesture_set_FlickTime_m3286 (FlickGesture_t138 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.FlickGesture::get_MinDistance()
extern "C" float FlickGesture_get_MinDistance_m3287 (FlickGesture_t138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_MinDistance(System.Single)
extern "C" void FlickGesture_set_MinDistance_m3288 (FlickGesture_t138 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.FlickGesture::get_MovementThreshold()
extern "C" float FlickGesture_get_MovementThreshold_m3289 (FlickGesture_t138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_MovementThreshold(System.Single)
extern "C" void FlickGesture_set_MovementThreshold_m3290 (FlickGesture_t138 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.FlickGesture/GestureDirection TouchScript.Gestures.FlickGesture::get_Direction()
extern "C" int32_t FlickGesture_get_Direction_m3291 (FlickGesture_t138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_Direction(TouchScript.Gestures.FlickGesture/GestureDirection)
extern "C" void FlickGesture_set_Direction_m3292 (FlickGesture_t138 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.FlickGesture::get_ScreenFlickVector()
extern "C" Vector2_t85  FlickGesture_get_ScreenFlickVector_m1115 (FlickGesture_t138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_ScreenFlickVector(UnityEngine.Vector2)
extern "C" void FlickGesture_set_ScreenFlickVector_m3293 (FlickGesture_t138 * __this, Vector2_t85  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.FlickGesture::get_ScreenFlickTime()
extern "C" float FlickGesture_get_ScreenFlickTime_m3294 (FlickGesture_t138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_ScreenFlickTime(System.Single)
extern "C" void FlickGesture_set_ScreenFlickTime_m3295 (FlickGesture_t138 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::LateUpdate()
extern "C" void FlickGesture_LateUpdate_m3296 (FlickGesture_t138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void FlickGesture_touchesBegan_m3297 (FlickGesture_t138 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void FlickGesture_touchesMoved_m3298 (FlickGesture_t138 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void FlickGesture_touchesEnded_m3299 (FlickGesture_t138 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::touchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void FlickGesture_touchesCancelled_m3300 (FlickGesture_t138 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::onRecognized()
extern "C" void FlickGesture_onRecognized_m3301 (FlickGesture_t138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::reset()
extern "C" void FlickGesture_reset_m3302 (FlickGesture_t138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
