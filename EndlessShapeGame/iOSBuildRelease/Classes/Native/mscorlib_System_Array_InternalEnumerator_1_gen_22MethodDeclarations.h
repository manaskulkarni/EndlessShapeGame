#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14700_gshared (InternalEnumerator_1_t2289 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14700(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2289 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14700_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14701_gshared (InternalEnumerator_1_t2289 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14701(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2289 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14701_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14702_gshared (InternalEnumerator_1_t2289 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14702(__this, method) (( void (*) (InternalEnumerator_1_t2289 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14702_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14703_gshared (InternalEnumerator_1_t2289 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14703(__this, method) (( bool (*) (InternalEnumerator_1_t2289 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14703_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t1194  InternalEnumerator_1_get_Current_m14704_gshared (InternalEnumerator_1_t2289 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14704(__this, method) (( DictionaryEntry_t1194  (*) (InternalEnumerator_1_t2289 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14704_gshared)(__this, method)
