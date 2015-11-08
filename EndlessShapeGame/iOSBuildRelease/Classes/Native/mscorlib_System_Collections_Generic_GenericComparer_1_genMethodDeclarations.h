#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.DateTime>
struct GenericComparer_1_t2090;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
extern "C" void GenericComparer_1__ctor_m12381_gshared (GenericComparer_1_t2090 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m12381(__this, method) (( void (*) (GenericComparer_1_t2090 *, const MethodInfo*))GenericComparer_1__ctor_m12381_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m22469_gshared (GenericComparer_1_t2090 * __this, DateTime_t833  ___x, DateTime_t833  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m22469(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2090 *, DateTime_t833 , DateTime_t833 , const MethodInfo*))GenericComparer_1_Compare_m22469_gshared)(__this, ___x, ___y, method)
