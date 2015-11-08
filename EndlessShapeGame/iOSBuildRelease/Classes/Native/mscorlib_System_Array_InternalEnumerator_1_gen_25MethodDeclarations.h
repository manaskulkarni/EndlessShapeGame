#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14981_gshared (InternalEnumerator_1_t2312 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14981(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2312 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14981_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14982_gshared (InternalEnumerator_1_t2312 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14982(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2312 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14982_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14983_gshared (InternalEnumerator_1_t2312 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14983(__this, method) (( void (*) (InternalEnumerator_1_t2312 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14983_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14984_gshared (InternalEnumerator_1_t2312 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14984(__this, method) (( bool (*) (InternalEnumerator_1_t2312 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14984_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2311  InternalEnumerator_1_get_Current_m14985_gshared (InternalEnumerator_1_t2312 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14985(__this, method) (( KeyValuePair_2_t2311  (*) (InternalEnumerator_1_t2312 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14985_gshared)(__this, method)
