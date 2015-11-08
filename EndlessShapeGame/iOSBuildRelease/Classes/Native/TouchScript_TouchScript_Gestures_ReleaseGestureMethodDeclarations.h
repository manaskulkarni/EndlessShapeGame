#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.ReleaseGesture
struct ReleaseGesture_t251;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// TouchScript.ITouch
struct ITouch_t257;
// TouchScript.Gestures.Gesture
struct Gesture_t270;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;

// System.Void TouchScript.Gestures.ReleaseGesture::.ctor()
extern "C" void ReleaseGesture__ctor_m3451 (ReleaseGesture_t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ReleaseGesture::add_Released(System.EventHandler`1<System.EventArgs>)
extern "C" void ReleaseGesture_add_Released_m1213 (ReleaseGesture_t251 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ReleaseGesture::remove_Released(System.EventHandler`1<System.EventArgs>)
extern "C" void ReleaseGesture_remove_Released_m1228 (ReleaseGesture_t251 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ReleaseGesture::get_IgnoreChildren()
extern "C" bool ReleaseGesture_get_IgnoreChildren_m3452 (ReleaseGesture_t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ReleaseGesture::set_IgnoreChildren(System.Boolean)
extern "C" void ReleaseGesture_set_IgnoreChildren_m3453 (ReleaseGesture_t251 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ReleaseGesture::ShouldReceiveTouch(TouchScript.ITouch)
extern "C" bool ReleaseGesture_ShouldReceiveTouch_m3454 (ReleaseGesture_t251 * __this, Object_t * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ReleaseGesture::CanPreventGesture(TouchScript.Gestures.Gesture)
extern "C" bool ReleaseGesture_CanPreventGesture_m3455 (ReleaseGesture_t251 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ReleaseGesture::CanBePreventedByGesture(TouchScript.Gestures.Gesture)
extern "C" bool ReleaseGesture_CanBePreventedByGesture_m3456 (ReleaseGesture_t251 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ReleaseGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void ReleaseGesture_touchesEnded_m3457 (ReleaseGesture_t251 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ReleaseGesture::onRecognized()
extern "C" void ReleaseGesture_onRecognized_m3458 (ReleaseGesture_t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
