#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21080_gshared (InternalEnumerator_1_t2730 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m21080(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2730 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m21080_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21081_gshared (InternalEnumerator_1_t2730 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21081(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2730 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21081_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21082_gshared (InternalEnumerator_1_t2730 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m21082(__this, method) (( void (*) (InternalEnumerator_1_t2730 *, const MethodInfo*))InternalEnumerator_1_Dispose_m21082_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21083_gshared (InternalEnumerator_1_t2730 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m21083(__this, method) (( bool (*) (InternalEnumerator_1_t2730 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m21083_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::get_Current()
extern "C" KeyValuePair_2_t2729  InternalEnumerator_1_get_Current_m21084_gshared (InternalEnumerator_1_t2730 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m21084(__this, method) (( KeyValuePair_2_t2729  (*) (InternalEnumerator_1_t2730 *, const MethodInfo*))InternalEnumerator_1_get_Current_m21084_gshared)(__this, method)
