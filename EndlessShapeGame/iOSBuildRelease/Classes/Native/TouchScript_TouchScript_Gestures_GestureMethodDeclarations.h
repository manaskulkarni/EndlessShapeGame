#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.Gesture
struct Gesture_t270;
// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
struct EventHandler_1_t259;
// UnityEngine.GameObject
struct GameObject_t30;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// TouchScript.IGestureDelegate
struct IGestureDelegate_t609;
// TouchScript.IGestureManager
struct IGestureManager_t676;
// TouchScript.ITouchManager
struct ITouchManager_t254;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t666;
// TouchScript.ITouch
struct ITouch_t257;
// System.Object
struct Object_t;
// TouchScript.Gestures.GestureStateChangeEventArgs
struct GestureStateChangeEventArgs_t227;
// TouchScript.Gestures.Gesture/GestureState
#include "TouchScript_TouchScript_Gestures_Gesture_GestureState.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.Gestures.Gesture::.ctor()
extern "C" void Gesture__ctor_m3303 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::add_StateChanged(System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>)
extern "C" void Gesture_add_StateChanged_m1226 (Gesture_t270 * __this, EventHandler_1_t259 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::remove_StateChanged(System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>)
extern "C" void Gesture_remove_StateChanged_m1229 (Gesture_t270 * __this, EventHandler_1_t259 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Gesture TouchScript.Gestures.Gesture::get_RequireGestureToFail()
extern "C" Gesture_t270 * Gesture_get_RequireGestureToFail_m3304 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_RequireGestureToFail(TouchScript.Gestures.Gesture)
extern "C" void Gesture_set_RequireGestureToFail_m3305 (Gesture_t270 * __this, Gesture_t270 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::get_CombineTouches()
extern "C" bool Gesture_get_CombineTouches_m3306 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_CombineTouches(System.Boolean)
extern "C" void Gesture_set_CombineTouches_m3307 (Gesture_t270 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.Gesture::get_CombineTouchesInterval()
extern "C" float Gesture_get_CombineTouchesInterval_m3308 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_CombineTouchesInterval(System.Single)
extern "C" void Gesture_set_CombineTouchesInterval_m3309 (Gesture_t270 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::get_UseSendMessage()
extern "C" bool Gesture_get_UseSendMessage_m3310 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_UseSendMessage(System.Boolean)
extern "C" void Gesture_set_UseSendMessage_m3311 (Gesture_t270 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::get_SendStateChangeMessages()
extern "C" bool Gesture_get_SendStateChangeMessages_m3312 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_SendStateChangeMessages(System.Boolean)
extern "C" void Gesture_set_SendStateChangeMessages_m3313 (Gesture_t270 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TouchScript.Gestures.Gesture::get_SendMessageTarget()
extern "C" GameObject_t30 * Gesture_get_SendMessageTarget_m3314 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_SendMessageTarget(UnityEngine.GameObject)
extern "C" void Gesture_set_SendMessageTarget_m3315 (Gesture_t270 * __this, GameObject_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::get_State()
extern "C" int32_t Gesture_get_State_m3316 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_State(TouchScript.Gestures.Gesture/GestureState)
extern "C" void Gesture_set_State_m3317 (Gesture_t270 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::get_PreviousState()
extern "C" int32_t Gesture_get_PreviousState_m3318 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_PreviousState(TouchScript.Gestures.Gesture/GestureState)
extern "C" void Gesture_set_PreviousState_m3319 (Gesture_t270 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition()
extern "C" Vector2_t85  Gesture_get_ScreenPosition_m3320 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousScreenPosition()
extern "C" Vector2_t85  Gesture_get_PreviousScreenPosition_m3321 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_NormalizedScreenPosition()
extern "C" Vector2_t85  Gesture_get_NormalizedScreenPosition_m3322 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousNormalizedScreenPosition()
extern "C" Vector2_t85  Gesture_get_PreviousNormalizedScreenPosition_m3323 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<TouchScript.ITouch> TouchScript.Gestures.Gesture::get_ActiveTouches()
extern "C" Object_t* Gesture_get_ActiveTouches_m3324 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.IGestureDelegate TouchScript.Gestures.Gesture::get_Delegate()
extern "C" Object_t * Gesture_get_Delegate_m3325 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_Delegate(TouchScript.IGestureDelegate)
extern "C" void Gesture_set_Delegate_m3326 (Gesture_t270 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.IGestureManager TouchScript.Gestures.Gesture::get_gestureManager()
extern "C" Object_t * Gesture_get_gestureManager_m3327 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouchManager TouchScript.Gestures.Gesture::get_touchManager()
extern "C" Object_t * Gesture_get_touchManager_m3328 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_touchManager(TouchScript.ITouchManager)
extern "C" void Gesture_set_touchManager_m3329 (Gesture_t270 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::AddFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C" void Gesture_AddFriendlyGesture_m3330 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::IsFriendly(TouchScript.Gestures.Gesture)
extern "C" bool Gesture_IsFriendly_m3331 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult()
extern "C" bool Gesture_GetTargetHitResult_m3332 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(TouchScript.Hit.ITouchHit&)
extern "C" bool Gesture_GetTargetHitResult_m3333 (Gesture_t270 * __this, Object_t ** ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(UnityEngine.Vector2)
extern "C" bool Gesture_GetTargetHitResult_m3334 (Gesture_t270 * __this, Vector2_t85  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
extern "C" bool Gesture_GetTargetHitResult_m3335 (Gesture_t270 * __this, Vector2_t85  ___position, Object_t ** ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::HasTouch(TouchScript.ITouch)
extern "C" bool Gesture_HasTouch_m3336 (Gesture_t270 * __this, Object_t * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::CanPreventGesture(TouchScript.Gestures.Gesture)
extern "C" bool Gesture_CanPreventGesture_m3337 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::CanBePreventedByGesture(TouchScript.Gestures.Gesture)
extern "C" bool Gesture_CanBePreventedByGesture_m3338 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::ShouldReceiveTouch(TouchScript.ITouch)
extern "C" bool Gesture_ShouldReceiveTouch_m3339 (Gesture_t270 * __this, Object_t * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::ShouldBegin()
extern "C" bool Gesture_ShouldBegin_m3340 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::Awake()
extern "C" void Gesture_Awake_m3341 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::OnEnable()
extern "C" void Gesture_OnEnable_m3342 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::OnDisable()
extern "C" void Gesture_OnDisable_m3343 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::OnDestroy()
extern "C" void Gesture_OnDestroy_m3344 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::SetState(TouchScript.Gestures.Gesture/GestureState)
extern "C" void Gesture_SetState_m3345 (Gesture_t270 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::Reset()
extern "C" void Gesture_Reset_m3346 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::TouchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_TouchesBegan_m3347 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::TouchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_TouchesMoved_m3348 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::TouchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_TouchesEnded_m3349 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::TouchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_TouchesCancelled_m3350 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::RemoveFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C" void Gesture_RemoveFriendlyGesture_m3351 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::shouldCacheTouchPosition(TouchScript.ITouch)
extern "C" bool Gesture_shouldCacheTouchPosition_m3352 (Gesture_t270 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::setState(TouchScript.Gestures.Gesture/GestureState)
extern "C" bool Gesture_setState_m3353 (Gesture_t270 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_touchesBegan_m3354 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_touchesMoved_m3355 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_touchesEnded_m3356 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::touchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_touchesCancelled_m3357 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::reset()
extern "C" void Gesture_reset_m3358 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onPossible()
extern "C" void Gesture_onPossible_m3359 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onBegan()
extern "C" void Gesture_onBegan_m3360 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onChanged()
extern "C" void Gesture_onChanged_m3361 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onRecognized()
extern "C" void Gesture_onRecognized_m3362 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onFailed()
extern "C" void Gesture_onFailed_m3363 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onCancelled()
extern "C" void Gesture_onCancelled_m3364 (Gesture_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::registerFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C" void Gesture_registerFriendlyGesture_m3365 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::addFriendlyGestureId(TouchScript.Gestures.Gesture)
extern "C" void Gesture_addFriendlyGestureId_m3366 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::unregisterFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C" void Gesture_unregisterFriendlyGesture_m3367 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::removeFriendlyGestureId(TouchScript.Gestures.Gesture)
extern "C" void Gesture_removeFriendlyGestureId_m3368 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::requiredToFailGestureStateChangedHandler(System.Object,TouchScript.Gestures.GestureStateChangeEventArgs)
extern "C" void Gesture_requiredToFailGestureStateChangedHandler_m3369 (Gesture_t270 * __this, Object_t * ___sender, GestureStateChangeEventArgs_t227 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
