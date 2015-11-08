#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20038_gshared (InternalEnumerator_1_t2660 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20038(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2660 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20038_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.IntPtr>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20039_gshared (InternalEnumerator_1_t2660 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20039(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2660 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20039_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20040_gshared (InternalEnumerator_1_t2660 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20040(__this, method) (( void (*) (InternalEnumerator_1_t2660 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20040_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.IntPtr>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20041_gshared (InternalEnumerator_1_t2660 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20041(__this, method) (( bool (*) (InternalEnumerator_1_t2660 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20041_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.IntPtr>::get_Current()
extern "C" IntPtr_t InternalEnumerator_1_get_Current_m20042_gshared (InternalEnumerator_1_t2660 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20042(__this, method) (( IntPtr_t (*) (InternalEnumerator_1_t2660 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20042_gshared)(__this, method)
