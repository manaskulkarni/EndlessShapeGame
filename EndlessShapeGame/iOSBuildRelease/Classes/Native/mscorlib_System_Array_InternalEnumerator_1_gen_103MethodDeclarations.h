#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_103.h"
// System.Reflection.Emit.ILGenerator/LabelData
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelData.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m22279_gshared (InternalEnumerator_1_t2865 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m22279(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2865 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m22279_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22280_gshared (InternalEnumerator_1_t2865 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22280(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2865 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22280_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m22281_gshared (InternalEnumerator_1_t2865 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m22281(__this, method) (( void (*) (InternalEnumerator_1_t2865 *, const MethodInfo*))InternalEnumerator_1_Dispose_m22281_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m22282_gshared (InternalEnumerator_1_t2865 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m22282(__this, method) (( bool (*) (InternalEnumerator_1_t2865 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m22282_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Current()
extern "C" LabelData_t1601  InternalEnumerator_1_get_Current_m22283_gshared (InternalEnumerator_1_t2865 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m22283(__this, method) (( LabelData_t1601  (*) (InternalEnumerator_1_t2865 *, const MethodInfo*))InternalEnumerator_1_get_Current_m22283_gshared)(__this, method)
