#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2898;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m22513_gshared (DefaultComparer_t2898 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22513(__this, method) (( void (*) (DefaultComparer_t2898 *, const MethodInfo*))DefaultComparer__ctor_m22513_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m22514_gshared (DefaultComparer_t2898 * __this, Guid_t1976  ___x, Guid_t1976  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m22514(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2898 *, Guid_t1976 , Guid_t1976 , const MethodInfo*))DefaultComparer_Compare_m22514_gshared)(__this, ___x, ___y, method)
