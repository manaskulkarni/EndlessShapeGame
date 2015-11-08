#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_87.h"

// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m22169_gshared (InternalEnumerator_1_t2842 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m22169(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2842 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m22169_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22170_gshared (InternalEnumerator_1_t2842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22170(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2842 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22170_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m22171_gshared (InternalEnumerator_1_t2842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m22171(__this, method) (( void (*) (InternalEnumerator_1_t2842 *, const MethodInfo*))InternalEnumerator_1_Dispose_m22171_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m22172_gshared (InternalEnumerator_1_t2842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m22172(__this, method) (( bool (*) (InternalEnumerator_1_t2842 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m22172_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
extern "C" int64_t InternalEnumerator_1_get_Current_m22173_gshared (InternalEnumerator_1_t2842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m22173(__this, method) (( int64_t (*) (InternalEnumerator_1_t2842 *, const MethodInfo*))InternalEnumerator_1_get_Current_m22173_gshared)(__this, method)
