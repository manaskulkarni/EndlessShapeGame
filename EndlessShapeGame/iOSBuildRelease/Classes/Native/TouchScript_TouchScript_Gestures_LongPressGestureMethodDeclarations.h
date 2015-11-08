#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.LongPressGesture
struct LongPressGesture_t258;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// System.Collections.IEnumerator
struct IEnumerator_t222;

// System.Void TouchScript.Gestures.LongPressGesture::.ctor()
extern "C" void LongPressGesture__ctor_m3380 (LongPressGesture_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.LongPressGesture::add_LongPressed(System.EventHandler`1<System.EventArgs>)
extern "C" void LongPressGesture_add_LongPressed_m3381 (LongPressGesture_t258 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.LongPressGesture::remove_LongPressed(System.EventHandler`1<System.EventArgs>)
extern "C" void LongPressGesture_remove_LongPressed_m3382 (LongPressGesture_t258 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Gestures.LongPressGesture::get_MaxTouches()
extern "C" int32_t LongPressGesture_get_MaxTouches_m3383 (LongPressGesture_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.LongPressGesture::set_MaxTouches(System.Int32)
extern "C" void LongPressGesture_set_MaxTouches_m3384 (LongPressGesture_t258 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.LongPressGesture::get_TimeToPress()
extern "C" float LongPressGesture_get_TimeToPress_m1224 (LongPressGesture_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.LongPressGesture::set_TimeToPress(System.Single)
extern "C" void LongPressGesture_set_TimeToPress_m3385 (LongPressGesture_t258 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.LongPressGesture::get_DistanceLimit()
extern "C" float LongPressGesture_get_DistanceLimit_m3386 (LongPressGesture_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.LongPressGesture::set_DistanceLimit(System.Single)
extern "C" void LongPressGesture_set_DistanceLimit_m3387 (LongPressGesture_t258 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.LongPressGesture::OnEnable()
extern "C" void LongPressGesture_OnEnable_m3388 (LongPressGesture_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.LongPressGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void LongPressGesture_touchesBegan_m3389 (LongPressGesture_t258 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.LongPressGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void LongPressGesture_touchesMoved_m3390 (LongPressGesture_t258 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.LongPressGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void LongPressGesture_touchesEnded_m3391 (LongPressGesture_t258 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.LongPressGesture::onRecognized()
extern "C" void LongPressGesture_onRecognized_m3392 (LongPressGesture_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.LongPressGesture::reset()
extern "C" void LongPressGesture_reset_m3393 (LongPressGesture_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TouchScript.Gestures.LongPressGesture::wait()
extern "C" Object_t * LongPressGesture_wait_m3394 (LongPressGesture_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.LongPressGesture::<GetTargetHitResult>__BaseCallProxy0()
extern "C" bool LongPressGesture_U3CGetTargetHitResultU3E__BaseCallProxy0_m3395 (LongPressGesture_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
