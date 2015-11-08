#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_77.h"
// System.Collections.Generic.HashSet`1/Link<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Link_gen_0.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m22105_gshared (InternalEnumerator_1_t2829 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m22105(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2829 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m22105_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22106_gshared (InternalEnumerator_1_t2829 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22106(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2829 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22106_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m22107_gshared (InternalEnumerator_1_t2829 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m22107(__this, method) (( void (*) (InternalEnumerator_1_t2829 *, const MethodInfo*))InternalEnumerator_1_Dispose_m22107_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m22108_gshared (InternalEnumerator_1_t2829 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m22108(__this, method) (( bool (*) (InternalEnumerator_1_t2829 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m22108_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_Current()
extern "C" Link_t2828  InternalEnumerator_1_get_Current_m22109_gshared (InternalEnumerator_1_t2829 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m22109(__this, method) (( Link_t2828  (*) (InternalEnumerator_1_t2829 *, const MethodInfo*))InternalEnumerator_1_get_Current_m22109_gshared)(__this, method)
