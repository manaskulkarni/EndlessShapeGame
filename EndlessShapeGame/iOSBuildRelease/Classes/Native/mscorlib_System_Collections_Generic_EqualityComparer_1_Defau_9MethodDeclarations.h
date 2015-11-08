#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit>
struct DefaultComparer_t2589;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit>::.ctor()
extern "C" void DefaultComparer__ctor_m19058_gshared (DefaultComparer_t2589 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19058(__this, method) (( void (*) (DefaultComparer_t2589 *, const MethodInfo*))DefaultComparer__ctor_m19058_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19059_gshared (DefaultComparer_t2589 * __this, RaycastHit_t504  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19059(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2589 *, RaycastHit_t504 , const MethodInfo*))DefaultComparer_GetHashCode_m19059_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19060_gshared (DefaultComparer_t2589 * __this, RaycastHit_t504  ___x, RaycastHit_t504  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19060(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2589 *, RaycastHit_t504 , RaycastHit_t504 , const MethodInfo*))DefaultComparer_Equals_m19060_gshared)(__this, ___x, ___y, method)
