#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<ShapeManager/BlockInterval>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_10.h"
// ShapeManager/BlockInterval
#include "AssemblyU2DCSharp_ShapeManager_BlockInterval.h"

// System.Void System.Array/InternalEnumerator`1<ShapeManager/BlockInterval>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12447_gshared (InternalEnumerator_1_t2110 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12447(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2110 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12447_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<ShapeManager/BlockInterval>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12448_gshared (InternalEnumerator_1_t2110 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12448(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2110 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12448_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<ShapeManager/BlockInterval>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12449_gshared (InternalEnumerator_1_t2110 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12449(__this, method) (( void (*) (InternalEnumerator_1_t2110 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12449_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<ShapeManager/BlockInterval>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12450_gshared (InternalEnumerator_1_t2110 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12450(__this, method) (( bool (*) (InternalEnumerator_1_t2110 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12450_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<ShapeManager/BlockInterval>::get_Current()
extern "C" BlockInterval_t183  InternalEnumerator_1_get_Current_m12451_gshared (InternalEnumerator_1_t2110 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12451(__this, method) (( BlockInterval_t183  (*) (InternalEnumerator_1_t2110 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12451_gshared)(__this, method)
