#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2250;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m14175_gshared (DefaultComparer_t2250 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14175(__this, method) (( void (*) (DefaultComparer_t2250 *, const MethodInfo*))DefaultComparer__ctor_m14175_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14176_gshared (DefaultComparer_t2250 * __this, RaycastResult_t309  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14176(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2250 *, RaycastResult_t309 , const MethodInfo*))DefaultComparer_GetHashCode_m14176_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14177_gshared (DefaultComparer_t2250 * __this, RaycastResult_t309  ___x, RaycastResult_t309  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14177(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2250 *, RaycastResult_t309 , RaycastResult_t309 , const MethodInfo*))DefaultComparer_Equals_m14177_gshared)(__this, ___x, ___y, method)
