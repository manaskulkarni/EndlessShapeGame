#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
// System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12869_gshared (InternalEnumerator_1_t2136 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12869(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2136 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12869_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12870_gshared (InternalEnumerator_1_t2136 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12870(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2136 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12870_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12871_gshared (InternalEnumerator_1_t2136 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12871(__this, method) (( void (*) (InternalEnumerator_1_t2136 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12871_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12872_gshared (InternalEnumerator_1_t2136 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12872(__this, method) (( bool (*) (InternalEnumerator_1_t2136 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12872_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2135  InternalEnumerator_1_get_Current_m12873_gshared (InternalEnumerator_1_t2136 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12873(__this, method) (( KeyValuePair_2_t2135  (*) (InternalEnumerator_1_t2136 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12873_gshared)(__this, method)
