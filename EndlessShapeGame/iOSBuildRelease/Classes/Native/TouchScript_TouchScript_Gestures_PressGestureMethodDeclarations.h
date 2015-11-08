#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.PressGesture
struct PressGesture_t250;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// TouchScript.ITouch
struct ITouch_t257;
// TouchScript.Gestures.Gesture
struct Gesture_t270;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;

// System.Void TouchScript.Gestures.PressGesture::.ctor()
extern "C" void PressGesture__ctor_m3443 (PressGesture_t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PressGesture::add_Pressed(System.EventHandler`1<System.EventArgs>)
extern "C" void PressGesture_add_Pressed_m1211 (PressGesture_t250 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PressGesture::remove_Pressed(System.EventHandler`1<System.EventArgs>)
extern "C" void PressGesture_remove_Pressed_m1227 (PressGesture_t250 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.PressGesture::get_IgnoreChildren()
extern "C" bool PressGesture_get_IgnoreChildren_m3444 (PressGesture_t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PressGesture::set_IgnoreChildren(System.Boolean)
extern "C" void PressGesture_set_IgnoreChildren_m3445 (PressGesture_t250 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.PressGesture::ShouldReceiveTouch(TouchScript.ITouch)
extern "C" bool PressGesture_ShouldReceiveTouch_m3446 (PressGesture_t250 * __this, Object_t * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.PressGesture::CanPreventGesture(TouchScript.Gestures.Gesture)
extern "C" bool PressGesture_CanPreventGesture_m3447 (PressGesture_t250 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.PressGesture::CanBePreventedByGesture(TouchScript.Gestures.Gesture)
extern "C" bool PressGesture_CanBePreventedByGesture_m3448 (PressGesture_t250 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PressGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void PressGesture_touchesBegan_m3449 (PressGesture_t250 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PressGesture::onRecognized()
extern "C" void PressGesture_onRecognized_m3450 (PressGesture_t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
