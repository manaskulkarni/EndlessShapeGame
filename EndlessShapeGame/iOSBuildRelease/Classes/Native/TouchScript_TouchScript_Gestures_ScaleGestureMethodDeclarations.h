#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.ScaleGesture
struct ScaleGesture_t615;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.Gestures.ScaleGesture::.ctor()
extern "C" void ScaleGesture__ctor_m3415 (ScaleGesture_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.ScaleGesture::get_MinPointsDistance()
extern "C" float ScaleGesture_get_MinPointsDistance_m3416 (ScaleGesture_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::set_MinPointsDistance(System.Single)
extern "C" void ScaleGesture_set_MinPointsDistance_m3417 (ScaleGesture_t615 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::OnEnable()
extern "C" void ScaleGesture_OnEnable_m3418 (ScaleGesture_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void ScaleGesture_touchesBegan_m3419 (ScaleGesture_t615 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void ScaleGesture_touchesMoved_m3420 (ScaleGesture_t615 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void ScaleGesture_touchesEnded_m3421 (ScaleGesture_t615 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::reset()
extern "C" void ScaleGesture_reset_m3422 (ScaleGesture_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ScaleGesture::gotEnoughTouches()
extern "C" bool ScaleGesture_gotEnoughTouches_m3423 (ScaleGesture_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ScaleGesture::relevantTouches(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" bool ScaleGesture_relevantTouches_m3424 (ScaleGesture_t615 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.ScaleGesture::getPointScreenPosition(System.Int32)
extern "C" Vector2_t85  ScaleGesture_getPointScreenPosition_m3425 (ScaleGesture_t615 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.ScaleGesture::getPointPreviousScreenPosition(System.Int32)
extern "C" Vector2_t85  ScaleGesture_getPointPreviousScreenPosition_m3426 (ScaleGesture_t615 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
