#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase
struct TwoPointTransform2DGestureBase_t621;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::.ctor()
extern "C" void TwoPointTransform2DGestureBase__ctor_m3558 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::get_MinPointsDistance()
extern "C" float TwoPointTransform2DGestureBase_get_MinPointsDistance_m3559 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::set_MinPointsDistance(System.Single)
extern "C" void TwoPointTransform2DGestureBase_set_MinPointsDistance_m3560 (TwoPointTransform2DGestureBase_t621 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::get_ScreenPosition()
extern "C" Vector2_t85  TwoPointTransform2DGestureBase_get_ScreenPosition_m3561 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::get_PreviousScreenPosition()
extern "C" Vector2_t85  TwoPointTransform2DGestureBase_get_PreviousScreenPosition_m3562 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::OnEnable()
extern "C" void TwoPointTransform2DGestureBase_OnEnable_m3563 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::gotEnoughTouches()
extern "C" bool TwoPointTransform2DGestureBase_gotEnoughTouches_m3564 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::relevantTouches(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" bool TwoPointTransform2DGestureBase_relevantTouches_m3565 (TwoPointTransform2DGestureBase_t621 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointScreenPosition(System.Int32)
extern "C" Vector2_t85  TwoPointTransform2DGestureBase_getPointScreenPosition_m3566 (TwoPointTransform2DGestureBase_t621 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointPreviousScreenPosition(System.Int32)
extern "C" Vector2_t85  TwoPointTransform2DGestureBase_getPointPreviousScreenPosition_m3567 (TwoPointTransform2DGestureBase_t621 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::restart()
extern "C" void TwoPointTransform2DGestureBase_restart_m3568 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void TwoPointTransform2DGestureBase_touchesEnded_m3569 (TwoPointTransform2DGestureBase_t621 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::reset()
extern "C" void TwoPointTransform2DGestureBase_reset_m3570 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
