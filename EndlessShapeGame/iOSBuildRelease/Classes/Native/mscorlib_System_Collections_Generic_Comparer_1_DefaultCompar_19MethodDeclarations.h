#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2902;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m22530_gshared (DefaultComparer_t2902 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22530(__this, method) (( void (*) (DefaultComparer_t2902 *, const MethodInfo*))DefaultComparer__ctor_m22530_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m22531_gshared (DefaultComparer_t2902 * __this, TimeSpan_t1097  ___x, TimeSpan_t1097  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m22531(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2902 *, TimeSpan_t1097 , TimeSpan_t1097 , const MethodInfo*))DefaultComparer_Compare_m22531_gshared)(__this, ___x, ___y, method)
