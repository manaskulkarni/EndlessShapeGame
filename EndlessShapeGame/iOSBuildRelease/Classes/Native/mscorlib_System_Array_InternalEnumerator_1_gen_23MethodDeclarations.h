#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14870_gshared (InternalEnumerator_1_t2302 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14870(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2302 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14870_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14871_gshared (InternalEnumerator_1_t2302 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14871(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2302 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14871_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14872_gshared (InternalEnumerator_1_t2302 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14872(__this, method) (( void (*) (InternalEnumerator_1_t2302 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14872_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14873_gshared (InternalEnumerator_1_t2302 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14873(__this, method) (( bool (*) (InternalEnumerator_1_t2302 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14873_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
extern "C" RaycastHit2D_t532  InternalEnumerator_1_get_Current_m14874_gshared (InternalEnumerator_1_t2302 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14874(__this, method) (( RaycastHit2D_t532  (*) (InternalEnumerator_1_t2302 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14874_gshared)(__this, method)
