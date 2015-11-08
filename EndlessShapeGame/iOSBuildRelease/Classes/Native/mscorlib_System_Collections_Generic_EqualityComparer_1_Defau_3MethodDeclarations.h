#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2384;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m15968_gshared (DefaultComparer_t2384 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15968(__this, method) (( void (*) (DefaultComparer_t2384 *, const MethodInfo*))DefaultComparer__ctor_m15968_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15969_gshared (DefaultComparer_t2384 * __this, UIVertex_t403  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15969(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2384 *, UIVertex_t403 , const MethodInfo*))DefaultComparer_GetHashCode_m15969_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15970_gshared (DefaultComparer_t2384 * __this, UIVertex_t403  ___x, UIVertex_t403  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15970(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2384 *, UIVertex_t403 , UIVertex_t403 , const MethodInfo*))DefaultComparer_Equals_m15970_gshared)(__this, ___x, ___y, method)
