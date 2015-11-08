#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_0.h"

// System.Void System.Array/InternalEnumerator`1<System.Object>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12397_gshared (InternalEnumerator_1_t2100 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12397(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2100 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12397_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12398_gshared (InternalEnumerator_1_t2100 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12398(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2100 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12398_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Object>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12399_gshared (InternalEnumerator_1_t2100 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12399(__this, method) (( void (*) (InternalEnumerator_1_t2100 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12399_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Object>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12400_gshared (InternalEnumerator_1_t2100 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12400(__this, method) (( bool (*) (InternalEnumerator_1_t2100 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12400_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Object>::get_Current()
extern "C" Object_t * InternalEnumerator_1_get_Current_m12401_gshared (InternalEnumerator_1_t2100 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12401(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2100 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12401_gshared)(__this, method)
