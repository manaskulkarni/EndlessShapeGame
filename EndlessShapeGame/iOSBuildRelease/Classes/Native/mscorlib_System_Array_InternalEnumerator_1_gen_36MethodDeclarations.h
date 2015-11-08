#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36.h"
// System.Collections.Generic.HashSet`1/Link<System.Int32>
#include "System_Core_System_Collections_Generic_HashSet_1_Link_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19621_gshared (InternalEnumerator_1_t2621 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19621(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2621 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19621_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19622_gshared (InternalEnumerator_1_t2621 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19622(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2621 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19622_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19623_gshared (InternalEnumerator_1_t2621 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19623(__this, method) (( void (*) (InternalEnumerator_1_t2621 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19623_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19624_gshared (InternalEnumerator_1_t2621 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19624(__this, method) (( bool (*) (InternalEnumerator_1_t2621 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19624_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Int32>>::get_Current()
extern "C" Link_t2620  InternalEnumerator_1_get_Current_m19625_gshared (InternalEnumerator_1_t2621 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19625(__this, method) (( Link_t2620  (*) (InternalEnumerator_1_t2621 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19625_gshared)(__this, method)
