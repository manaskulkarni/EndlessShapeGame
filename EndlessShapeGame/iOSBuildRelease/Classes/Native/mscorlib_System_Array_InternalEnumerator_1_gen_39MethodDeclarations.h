#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<TouchScript.InputSources.TouchState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_39.h"
// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchState.h"

// System.Void System.Array/InternalEnumerator`1<TouchScript.InputSources.TouchState>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19787_gshared (InternalEnumerator_1_t2632 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19787(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2632 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19787_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<TouchScript.InputSources.TouchState>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19788_gshared (InternalEnumerator_1_t2632 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19788(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2632 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19788_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<TouchScript.InputSources.TouchState>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19789_gshared (InternalEnumerator_1_t2632 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19789(__this, method) (( void (*) (InternalEnumerator_1_t2632 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19789_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<TouchScript.InputSources.TouchState>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19790_gshared (InternalEnumerator_1_t2632 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19790(__this, method) (( bool (*) (InternalEnumerator_1_t2632 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19790_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<TouchScript.InputSources.TouchState>::get_Current()
extern "C" TouchState_t674  InternalEnumerator_1_get_Current_m19791_gshared (InternalEnumerator_1_t2632 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19791(__this, method) (( TouchState_t674  (*) (InternalEnumerator_1_t2632 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19791_gshared)(__this, method)
