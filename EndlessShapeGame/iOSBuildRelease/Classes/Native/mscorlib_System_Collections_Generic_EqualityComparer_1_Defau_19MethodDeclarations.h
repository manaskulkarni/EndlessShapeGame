#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2904;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m22539_gshared (DefaultComparer_t2904 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22539(__this, method) (( void (*) (DefaultComparer_t2904 *, const MethodInfo*))DefaultComparer__ctor_m22539_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22540_gshared (DefaultComparer_t2904 * __this, TimeSpan_t1097  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m22540(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2904 *, TimeSpan_t1097 , const MethodInfo*))DefaultComparer_GetHashCode_m22540_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22541_gshared (DefaultComparer_t2904 * __this, TimeSpan_t1097  ___x, TimeSpan_t1097  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m22541(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2904 *, TimeSpan_t1097 , TimeSpan_t1097 , const MethodInfo*))DefaultComparer_Equals_m22541_gshared)(__this, ___x, ___y, method)
