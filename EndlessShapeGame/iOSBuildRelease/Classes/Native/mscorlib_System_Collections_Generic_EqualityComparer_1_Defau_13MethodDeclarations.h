#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t2690;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m20540_gshared (DefaultComparer_t2690 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20540(__this, method) (( void (*) (DefaultComparer_t2690 *, const MethodInfo*))DefaultComparer__ctor_m20540_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20541_gshared (DefaultComparer_t2690 * __this, UILineInfo_t555  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m20541(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2690 *, UILineInfo_t555 , const MethodInfo*))DefaultComparer_GetHashCode_m20541_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20542_gshared (DefaultComparer_t2690 * __this, UILineInfo_t555  ___x, UILineInfo_t555  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m20542(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2690 *, UILineInfo_t555 , UILineInfo_t555 , const MethodInfo*))DefaultComparer_Equals_m20542_gshared)(__this, ___x, ___y, method)
