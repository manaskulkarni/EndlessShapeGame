#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.GestureManagerInstance
struct GestureManagerInstance_t600;
// TouchScript.IGestureManager
struct IGestureManager_t676;
// TouchScript.Gestures.Gesture
struct Gesture_t270;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// System.Action`1<UnityEngine.Transform>
struct Action_1_t677;
// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>>
struct Action_2_t604;
// UnityEngine.Transform
struct Transform_t48;
// System.Predicate`1<TouchScript.ITouch>
struct Predicate_1_t678;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
struct List_1_t601;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t223;
// TouchScript.TouchEventArgs
struct TouchEventArgs_t226;
// TouchScript.Gestures.Gesture/GestureState
#include "TouchScript_TouchScript_Gestures_Gesture_GestureState.h"

// System.Void TouchScript.GestureManagerInstance::.ctor()
extern "C" void GestureManagerInstance__ctor_m3249 (GestureManagerInstance_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::.cctor()
extern "C" void GestureManagerInstance__cctor_m3250 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.IGestureManager TouchScript.GestureManagerInstance::get_Instance()
extern "C" Object_t * GestureManagerInstance_get_Instance_m3251 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::Awake()
extern "C" void GestureManagerInstance_Awake_m3252 (GestureManagerInstance_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::OnEnable()
extern "C" void GestureManagerInstance_OnEnable_m3253 (GestureManagerInstance_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::OnDisable()
extern "C" void GestureManagerInstance_OnDisable_m3254 (GestureManagerInstance_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::OnApplicationQuit()
extern "C" void GestureManagerInstance_OnApplicationQuit_m3255 (GestureManagerInstance_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Gesture/GestureState TouchScript.GestureManagerInstance::GestureChangeState(TouchScript.Gestures.Gesture,TouchScript.Gestures.Gesture/GestureState)
extern "C" int32_t GestureManagerInstance_GestureChangeState_m3256 (GestureManagerInstance_t600 * __this, Gesture_t270 * ___gesture, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::updateBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_updateBegan_m3257 (GestureManagerInstance_t600 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::updateMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_updateMoved_m3258 (GestureManagerInstance_t600 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::updateEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_updateEnded_m3259 (GestureManagerInstance_t600 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::updateCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_updateCancelled_m3260 (GestureManagerInstance_t600 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::update(System.Collections.Generic.IList`1<TouchScript.ITouch>,System.Action`1<UnityEngine.Transform>,System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>>)
extern "C" void GestureManagerInstance_update_m3261 (GestureManagerInstance_t600 * __this, Object_t* ___touches, Action_1_t677 * ___process, Action_2_t604 * ___dispatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::processTarget(UnityEngine.Transform)
extern "C" void GestureManagerInstance_processTarget_m3262 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::processTargetBegan(UnityEngine.Transform)
extern "C" void GestureManagerInstance_processTargetBegan_m3263 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::distributePointsByGestures(UnityEngine.Transform,TouchScript.Gestures.Gesture,System.Predicate`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_distributePointsByGestures_m3264 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, Gesture_t270 * ___gesture, Predicate_1_t678 * ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::resetGestures()
extern "C" void GestureManagerInstance_resetGestures_m3265 (GestureManagerInstance_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::getHierarchyEndingWith(UnityEngine.Transform)
extern "C" List_1_t601 * GestureManagerInstance_getHierarchyEndingWith_m3266 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::getHierarchyBeginningWith(UnityEngine.Transform,System.Boolean)
extern "C" List_1_t601 * GestureManagerInstance_getHierarchyBeginningWith_m3267 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, bool ___includeSelf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::getHierarchyContaining(UnityEngine.Transform)
extern "C" List_1_t601 * GestureManagerInstance_getHierarchyContaining_m3268 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::getEnabledGesturesOnTarget(UnityEngine.Transform)
extern "C" List_1_t601 * GestureManagerInstance_getEnabledGesturesOnTarget_m3269 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.GestureManagerInstance::gestureIsActive(TouchScript.Gestures.Gesture)
extern "C" bool GestureManagerInstance_gestureIsActive_m3270 (GestureManagerInstance_t600 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.GestureManagerInstance::recognizeGestureIfNotPrevented(TouchScript.Gestures.Gesture)
extern "C" bool GestureManagerInstance_recognizeGestureIfNotPrevented_m3271 (GestureManagerInstance_t600 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::failGesture(TouchScript.Gestures.Gesture)
extern "C" void GestureManagerInstance_failGesture_m3272 (GestureManagerInstance_t600 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::frameFinishedHandler(System.Object,System.EventArgs)
extern "C" void GestureManagerInstance_frameFinishedHandler_m3273 (GestureManagerInstance_t600 * __this, Object_t * ___sender, EventArgs_t223 * ___eventArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::frameStartedHandler(System.Object,System.EventArgs)
extern "C" void GestureManagerInstance_frameStartedHandler_m3274 (GestureManagerInstance_t600 * __this, Object_t * ___sender, EventArgs_t223 * ___eventArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::touchBeganHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void GestureManagerInstance_touchBeganHandler_m3275 (GestureManagerInstance_t600 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___touchEventArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::touchMovedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void GestureManagerInstance_touchMovedHandler_m3276 (GestureManagerInstance_t600 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___touchEventArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::touchEndedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void GestureManagerInstance_touchEndedHandler_m3277 (GestureManagerInstance_t600 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___touchEventArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::touchCancelledHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void GestureManagerInstance_touchCancelledHandler_m3278 (GestureManagerInstance_t600 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___touchEventArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::<updateBegan>m__0(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_U3CupdateBeganU3Em__0_m3279 (Object_t * __this /* static, unused */, Gesture_t270 * ___gesture, Object_t* ___touchPoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::<updateMoved>m__1(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_U3CupdateMovedU3Em__1_m3280 (Object_t * __this /* static, unused */, Gesture_t270 * ___gesture, Object_t* ___touchPoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::<updateEnded>m__2(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_U3CupdateEndedU3Em__2_m3281 (Object_t * __this /* static, unused */, Gesture_t270 * ___gesture, Object_t* ___touchPoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::<updateCancelled>m__3(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_U3CupdateCancelledU3Em__3_m3282 (Object_t * __this /* static, unused */, Gesture_t270 * ___gesture, Object_t* ___touchPoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
