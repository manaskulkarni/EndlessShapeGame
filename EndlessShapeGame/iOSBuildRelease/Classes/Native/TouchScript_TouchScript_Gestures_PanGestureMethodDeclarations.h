#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Gestures.PanGesture
struct PanGesture_t611;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.Gestures.PanGesture::.ctor()
extern "C" void PanGesture__ctor_m3396 (PanGesture_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.PanGesture::get_ScreenPosition()
extern "C" Vector2_t85  PanGesture_get_ScreenPosition_m3397 (PanGesture_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.PanGesture::get_PreviousScreenPosition()
extern "C" Vector2_t85  PanGesture_get_PreviousScreenPosition_m3398 (PanGesture_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PanGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void PanGesture_touchesBegan_m3399 (PanGesture_t611 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PanGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void PanGesture_touchesMoved_m3400 (PanGesture_t611 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PanGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void PanGesture_touchesEnded_m3401 (PanGesture_t611 * __this, Object_t* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PanGesture::reset()
extern "C" void PanGesture_reset_m3402 (PanGesture_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
