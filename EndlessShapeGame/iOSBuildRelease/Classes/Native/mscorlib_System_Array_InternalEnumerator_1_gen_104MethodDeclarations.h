#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_104.h"
// System.Reflection.Emit.ILGenerator/LabelFixup
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m22284_gshared (InternalEnumerator_1_t2866 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m22284(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2866 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m22284_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22285_gshared (InternalEnumerator_1_t2866 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22285(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2866 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22285_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m22286_gshared (InternalEnumerator_1_t2866 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m22286(__this, method) (( void (*) (InternalEnumerator_1_t2866 *, const MethodInfo*))InternalEnumerator_1_Dispose_m22286_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m22287_gshared (InternalEnumerator_1_t2866 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m22287(__this, method) (( bool (*) (InternalEnumerator_1_t2866 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m22287_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Current()
extern "C" LabelFixup_t1600  InternalEnumerator_1_get_Current_m22288_gshared (InternalEnumerator_1_t2866 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m22288(__this, method) (( LabelFixup_t1600  (*) (InternalEnumerator_1_t2866 *, const MethodInfo*))InternalEnumerator_1_get_Current_m22288_gshared)(__this, method)
