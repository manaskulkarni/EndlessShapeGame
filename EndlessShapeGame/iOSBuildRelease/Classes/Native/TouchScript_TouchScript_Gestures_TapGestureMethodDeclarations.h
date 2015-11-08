#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.TapGesture
struct TapGesture_t247;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// TouchScript.ITouch
struct ITouch_t257;
// System.Collections.IEnumerator
struct IEnumerator_t222;

// System.Void TouchScript.Gestures.TapGesture::.ctor()
extern "C" void TapGesture__ctor_m3525 (TapGesture_t247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::add_Tapped(System.EventHandler`1<System.EventArgs>)
extern "C" void TapGesture_add_Tapped_m1189 (TapGesture_t247 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::remove_Tapped(System.EventHandler`1<System.EventArgs>)
extern "C" void TapGesture_remove_Tapped_m1190 (TapGesture_t247 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Gestures.TapGesture::get_NumberOfTapsRequired()
extern "C" int32_t TapGesture_get_NumberOfTapsRequired_m1208 (TapGesture_t247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::set_NumberOfTapsRequired(System.Int32)
extern "C" void TapGesture_set_NumberOfTapsRequired_m3526 (TapGesture_t247 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.TapGesture::get_TimeLimit()
extern "C" float TapGesture_get_TimeLimit_m3527 (TapGesture_t247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::set_TimeLimit(System.Single)
extern "C" void TapGesture_set_TimeLimit_m3528 (TapGesture_t247 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.TapGesture::get_DistanceLimit()
extern "C" float TapGesture_get_DistanceLimit_m3529 (TapGesture_t247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::set_DistanceLimit(System.Single)
extern "C" void TapGesture_set_DistanceLimit_m3530 (TapGesture_t247 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::OnEnable()
extern "C" void TapGesture_OnEnable_m3531 (TapGesture_t247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void TapGesture_touchesBegan_m3532 (TapGesture_t247 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void TapGesture_touchesMoved_m3533 (TapGesture_t247 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void TapGesture_touchesEnded_m3534 (TapGesture_t247 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::touchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void TapGesture_touchesCancelled_m3535 (TapGesture_t247 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::onRecognized()
extern "C" void TapGesture_onRecognized_m3536 (TapGesture_t247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::reset()
extern "C" void TapGesture_reset_m3537 (TapGesture_t247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.TapGesture::shouldCacheTouchPosition(TouchScript.ITouch)
extern "C" bool TapGesture_shouldCacheTouchPosition_m3538 (TapGesture_t247 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TouchScript.Gestures.TapGesture::wait()
extern "C" Object_t * TapGesture_wait_m3539 (TapGesture_t247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
