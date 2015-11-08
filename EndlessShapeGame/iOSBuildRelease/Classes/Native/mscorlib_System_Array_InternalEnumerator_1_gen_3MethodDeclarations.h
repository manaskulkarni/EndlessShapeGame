#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Color>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12412_gshared (InternalEnumerator_1_t2103 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12412(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2103 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12412_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Color>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12413_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12413(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2103 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12413_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12414_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12414(__this, method) (( void (*) (InternalEnumerator_1_t2103 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12414_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Color>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12415_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12415(__this, method) (( bool (*) (InternalEnumerator_1_t2103 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12415_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Color>::get_Current()
extern "C" Color_t12  InternalEnumerator_1_get_Current_m12416_gshared (InternalEnumerator_1_t2103 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12416(__this, method) (( Color_t12  (*) (InternalEnumerator_1_t2103 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12416_gshared)(__this, method)
