#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Int32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"

// System.Void System.Array/InternalEnumerator`1<System.Int32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12422_gshared (InternalEnumerator_1_t2105 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12422(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2105 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12422_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12423_gshared (InternalEnumerator_1_t2105 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12423(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2105 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12423_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Int32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12424_gshared (InternalEnumerator_1_t2105 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12424(__this, method) (( void (*) (InternalEnumerator_1_t2105 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12424_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Int32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12425_gshared (InternalEnumerator_1_t2105 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12425(__this, method) (( bool (*) (InternalEnumerator_1_t2105 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12425_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Int32>::get_Current()
extern "C" int32_t InternalEnumerator_1_get_Current_m12426_gshared (InternalEnumerator_1_t2105 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12426(__this, method) (( int32_t (*) (InternalEnumerator_1_t2105 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12426_gshared)(__this, method)
