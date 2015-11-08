#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
struct DefaultComparer_t2492;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m17624_gshared (DefaultComparer_t2492 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17624(__this, method) (( void (*) (DefaultComparer_t2492 *, const MethodInfo*))DefaultComparer__ctor_m17624_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17625_gshared (DefaultComparer_t2492 * __this, Color32_t510  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17625(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2492 *, Color32_t510 , const MethodInfo*))DefaultComparer_GetHashCode_m17625_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17626_gshared (DefaultComparer_t2492 * __this, Color32_t510  ___x, Color32_t510  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17626(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2492 *, Color32_t510 , Color32_t510 , const MethodInfo*))DefaultComparer_Equals_m17626_gshared)(__this, ___x, ___y, method)
