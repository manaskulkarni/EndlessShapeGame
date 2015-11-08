#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54.h"
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPoint.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20151_gshared (InternalEnumerator_1_t2668 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20151(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2668 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20151_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20152_gshared (InternalEnumerator_1_t2668 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20152(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2668 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20152_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20153_gshared (InternalEnumerator_1_t2668 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20153(__this, method) (( void (*) (InternalEnumerator_1_t2668 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20153_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20154_gshared (InternalEnumerator_1_t2668 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20154(__this, method) (( bool (*) (InternalEnumerator_1_t2668 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20154_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::get_Current()
extern "C" ContactPoint_t795  InternalEnumerator_1_get_Current_m20155_gshared (InternalEnumerator_1_t2668 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20155(__this, method) (( ContactPoint_t795  (*) (InternalEnumerator_1_t2668 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20155_gshared)(__this, method)
