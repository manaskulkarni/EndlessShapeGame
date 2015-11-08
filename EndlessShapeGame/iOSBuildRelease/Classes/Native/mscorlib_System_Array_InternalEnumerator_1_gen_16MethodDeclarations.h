#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,PlayerManager/PlayerPreset>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,PlayerManager/PlayerPreset>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,PlayerManager/PlayerPreset>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13389_gshared (InternalEnumerator_1_t2183 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13389(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2183 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13389_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,PlayerManager/PlayerPreset>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13390_gshared (InternalEnumerator_1_t2183 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13390(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2183 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13390_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,PlayerManager/PlayerPreset>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13391_gshared (InternalEnumerator_1_t2183 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13391(__this, method) (( void (*) (InternalEnumerator_1_t2183 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13391_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,PlayerManager/PlayerPreset>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13392_gshared (InternalEnumerator_1_t2183 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13392(__this, method) (( bool (*) (InternalEnumerator_1_t2183 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13392_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,PlayerManager/PlayerPreset>>::get_Current()
extern "C" KeyValuePair_2_t2182  InternalEnumerator_1_get_Current_m13393_gshared (InternalEnumerator_1_t2183 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13393(__this, method) (( KeyValuePair_2_t2182  (*) (InternalEnumerator_1_t2183 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13393_gshared)(__this, method)
