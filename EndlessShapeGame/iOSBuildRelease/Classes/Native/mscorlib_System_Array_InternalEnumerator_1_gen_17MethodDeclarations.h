#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<ShapeManager/ShapeProperties>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17.h"
// ShapeManager/ShapeProperties
#include "AssemblyU2DCSharp_ShapeManager_ShapeProperties.h"

// System.Void System.Array/InternalEnumerator`1<ShapeManager/ShapeProperties>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13505_gshared (InternalEnumerator_1_t2194 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13505(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2194 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13505_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<ShapeManager/ShapeProperties>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13506_gshared (InternalEnumerator_1_t2194 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13506(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2194 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13506_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<ShapeManager/ShapeProperties>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13507_gshared (InternalEnumerator_1_t2194 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13507(__this, method) (( void (*) (InternalEnumerator_1_t2194 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13507_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<ShapeManager/ShapeProperties>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13508_gshared (InternalEnumerator_1_t2194 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13508(__this, method) (( bool (*) (InternalEnumerator_1_t2194 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13508_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<ShapeManager/ShapeProperties>::get_Current()
extern "C" ShapeProperties_t180  InternalEnumerator_1_get_Current_m13509_gshared (InternalEnumerator_1_t2194 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13509(__this, method) (( ShapeProperties_t180  (*) (InternalEnumerator_1_t2194 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13509_gshared)(__this, method)
