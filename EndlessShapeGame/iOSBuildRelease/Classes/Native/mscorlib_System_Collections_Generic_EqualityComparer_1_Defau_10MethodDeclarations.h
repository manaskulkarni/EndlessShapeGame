#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit2D>
struct DefaultComparer_t2599;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit2D>::.ctor()
extern "C" void DefaultComparer__ctor_m19204_gshared (DefaultComparer_t2599 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19204(__this, method) (( void (*) (DefaultComparer_t2599 *, const MethodInfo*))DefaultComparer__ctor_m19204_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit2D>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19205_gshared (DefaultComparer_t2599 * __this, RaycastHit2D_t532  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19205(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2599 *, RaycastHit2D_t532 , const MethodInfo*))DefaultComparer_GetHashCode_m19205_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit2D>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19206_gshared (DefaultComparer_t2599 * __this, RaycastHit2D_t532  ___x, RaycastHit2D_t532  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19206(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2599 *, RaycastHit2D_t532 , RaycastHit2D_t532 , const MethodInfo*))DefaultComparer_Equals_m19206_gshared)(__this, ___x, ___y, method)
