#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.Simple.SimplePanGesture
struct SimplePanGesture_t612;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.Gestures.Simple.SimplePanGesture::.ctor()
extern "C" void SimplePanGesture__ctor_m3459 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::add_PanStarted(System.EventHandler`1<System.EventArgs>)
extern "C" void SimplePanGesture_add_PanStarted_m3460 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::remove_PanStarted(System.EventHandler`1<System.EventArgs>)
extern "C" void SimplePanGesture_remove_PanStarted_m3461 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::add_Panned(System.EventHandler`1<System.EventArgs>)
extern "C" void SimplePanGesture_add_Panned_m3462 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::remove_Panned(System.EventHandler`1<System.EventArgs>)
extern "C" void SimplePanGesture_remove_Panned_m3463 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::add_PanCompleted(System.EventHandler`1<System.EventArgs>)
extern "C" void SimplePanGesture_add_PanCompleted_m3464 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::remove_PanCompleted(System.EventHandler`1<System.EventArgs>)
extern "C" void SimplePanGesture_remove_PanCompleted_m3465 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.Simple.SimplePanGesture::get_MovementThreshold()
extern "C" float SimplePanGesture_get_MovementThreshold_m3466 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::set_MovementThreshold(System.Single)
extern "C" void SimplePanGesture_set_MovementThreshold_m3467 (SimplePanGesture_t612 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.Simple.SimplePanGesture::get_WorldDeltaPosition()
extern "C" Vector3_t28  SimplePanGesture_get_WorldDeltaPosition_m3468 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::set_WorldDeltaPosition(UnityEngine.Vector3)
extern "C" void SimplePanGesture_set_WorldDeltaPosition_m3469 (SimplePanGesture_t612 * __this, Vector3_t28  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.Simple.SimplePanGesture::get_LocalDeltaPosition()
extern "C" Vector3_t28  SimplePanGesture_get_LocalDeltaPosition_m3470 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Simple.SimplePanGesture::get_ScreenPosition()
extern "C" Vector2_t85  SimplePanGesture_get_ScreenPosition_m3471 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Simple.SimplePanGesture::get_PreviousScreenPosition()
extern "C" Vector2_t85  SimplePanGesture_get_PreviousScreenPosition_m3472 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void SimplePanGesture_touchesMoved_m3473 (SimplePanGesture_t612 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onBegan()
extern "C" void SimplePanGesture_onBegan_m3474 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onChanged()
extern "C" void SimplePanGesture_onChanged_m3475 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onRecognized()
extern "C" void SimplePanGesture_onRecognized_m3476 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onFailed()
extern "C" void SimplePanGesture_onFailed_m3477 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onCancelled()
extern "C" void SimplePanGesture_onCancelled_m3478 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::reset()
extern "C" void SimplePanGesture_reset_m3479 (SimplePanGesture_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
