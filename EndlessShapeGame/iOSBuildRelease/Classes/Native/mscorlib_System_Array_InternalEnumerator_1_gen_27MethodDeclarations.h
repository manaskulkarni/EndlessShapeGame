#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.UIVertex>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_27.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15886_gshared (InternalEnumerator_1_t2379 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15886(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2379 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15886_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15887_gshared (InternalEnumerator_1_t2379 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15887(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2379 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15887_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15888_gshared (InternalEnumerator_1_t2379 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15888(__this, method) (( void (*) (InternalEnumerator_1_t2379 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15888_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15889_gshared (InternalEnumerator_1_t2379 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15889(__this, method) (( bool (*) (InternalEnumerator_1_t2379 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15889_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::get_Current()
extern "C" UIVertex_t403  InternalEnumerator_1_get_Current_m15890_gshared (InternalEnumerator_1_t2379 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15890(__this, method) (( UIVertex_t403  (*) (InternalEnumerator_1_t2379 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15890_gshared)(__this, method)
