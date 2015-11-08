#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.TouchPoint
struct TouchPoint_t664;
// TouchScript.Tags
struct Tags_t637;
// UnityEngine.Transform
struct Transform_t48;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t666;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t624;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t683;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.TouchPoint::.ctor(System.Int32,UnityEngine.Vector2,TouchScript.Tags)
extern "C" void TouchPoint__ctor_m3773 (TouchPoint_t664 * __this, int32_t ___id, Vector2_t85  ___position, Tags_t637 * ___tags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.TouchPoint::get_Id()
extern "C" int32_t TouchPoint_get_Id_m3774 (TouchPoint_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_Id(System.Int32)
extern "C" void TouchPoint_set_Id_m3775 (TouchPoint_t664 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TouchScript.TouchPoint::get_Target()
extern "C" Transform_t48 * TouchPoint_get_Target_m3776 (TouchPoint_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_Target(UnityEngine.Transform)
extern "C" void TouchPoint_set_Target_m3777 (TouchPoint_t664 * __this, Transform_t48 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.TouchPoint::get_Position()
extern "C" Vector2_t85  TouchPoint_get_Position_m3778 (TouchPoint_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.TouchPoint::get_PreviousPosition()
extern "C" Vector2_t85  TouchPoint_get_PreviousPosition_m3779 (TouchPoint_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_PreviousPosition(UnityEngine.Vector2)
extern "C" void TouchPoint_set_PreviousPosition_m3780 (TouchPoint_t664 * __this, Vector2_t85  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.ITouchHit TouchScript.TouchPoint::get_Hit()
extern "C" Object_t * TouchPoint_get_Hit_m3781 (TouchPoint_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_Hit(TouchScript.Hit.ITouchHit)
extern "C" void TouchPoint_set_Hit_m3782 (TouchPoint_t664 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer TouchScript.TouchPoint::get_Layer()
extern "C" TouchLayer_t624 * TouchPoint_get_Layer_m3783 (TouchPoint_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_Layer(TouchScript.Layers.TouchLayer)
extern "C" void TouchPoint_set_Layer_m3784 (TouchPoint_t664 * __this, TouchLayer_t624 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Tags TouchScript.TouchPoint::get_Tags()
extern "C" Tags_t637 * TouchPoint_get_Tags_m3785 (TouchPoint_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_Tags(TouchScript.Tags)
extern "C" void TouchPoint_set_Tags_m3786 (TouchPoint_t664 * __this, Tags_t637 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> TouchScript.TouchPoint::get_Properties()
extern "C" Object_t* TouchPoint_get_Properties_m3787 (TouchPoint_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::ResetPosition()
extern "C" void TouchPoint_ResetPosition_m3788 (TouchPoint_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::SetPosition(UnityEngine.Vector2)
extern "C" void TouchPoint_SetPosition_m3789 (TouchPoint_t664 * __this, Vector2_t85  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
