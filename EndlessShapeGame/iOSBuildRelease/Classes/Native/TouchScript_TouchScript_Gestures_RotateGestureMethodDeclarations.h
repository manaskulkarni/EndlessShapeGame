#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.RotateGesture
struct RotateGesture_t613;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.Gestures.RotateGesture::.ctor()
extern "C" void RotateGesture__ctor_m3403 (RotateGesture_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.RotateGesture::get_MinPointsDistance()
extern "C" float RotateGesture_get_MinPointsDistance_m3404 (RotateGesture_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.RotateGesture::set_MinPointsDistance(System.Single)
extern "C" void RotateGesture_set_MinPointsDistance_m3405 (RotateGesture_t613 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.RotateGesture::OnEnable()
extern "C" void RotateGesture_OnEnable_m3406 (RotateGesture_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.RotateGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void RotateGesture_touchesBegan_m3407 (RotateGesture_t613 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.RotateGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void RotateGesture_touchesMoved_m3408 (RotateGesture_t613 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.RotateGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void RotateGesture_touchesEnded_m3409 (RotateGesture_t613 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.RotateGesture::reset()
extern "C" void RotateGesture_reset_m3410 (RotateGesture_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.RotateGesture::gotEnoughTouches()
extern "C" bool RotateGesture_gotEnoughTouches_m3411 (RotateGesture_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.RotateGesture::relevantTouches(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" bool RotateGesture_relevantTouches_m3412 (RotateGesture_t613 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.RotateGesture::getPointScreenPosition(System.Int32)
extern "C" Vector2_t85  RotateGesture_getPointScreenPosition_m3413 (RotateGesture_t613 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.RotateGesture::getPointPreviousScreenPosition(System.Int32)
extern "C" Vector2_t85  RotateGesture_getPointPreviousScreenPosition_m3414 (RotateGesture_t613 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
