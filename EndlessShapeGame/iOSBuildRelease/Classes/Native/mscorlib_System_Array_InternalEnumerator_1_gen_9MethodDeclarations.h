#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Char>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9.h"

// System.Void System.Array/InternalEnumerator`1<System.Char>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12442_gshared (InternalEnumerator_1_t2109 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12442(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2109 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12442_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Char>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12443_gshared (InternalEnumerator_1_t2109 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12443(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2109 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12443_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Char>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12444_gshared (InternalEnumerator_1_t2109 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12444(__this, method) (( void (*) (InternalEnumerator_1_t2109 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12444_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Char>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12445_gshared (InternalEnumerator_1_t2109 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12445(__this, method) (( bool (*) (InternalEnumerator_1_t2109 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12445_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Char>::get_Current()
extern "C" uint16_t InternalEnumerator_1_get_Current_m12446_gshared (InternalEnumerator_1_t2109 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12446(__this, method) (( uint16_t (*) (InternalEnumerator_1_t2109 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12446_gshared)(__this, method)
