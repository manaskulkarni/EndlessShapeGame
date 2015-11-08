#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_75.h"
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"

// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m22072_gshared (InternalEnumerator_1_t2824 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m22072(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2824 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m22072_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22073_gshared (InternalEnumerator_1_t2824 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22073(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2824 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22073_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m22074_gshared (InternalEnumerator_1_t2824 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m22074(__this, method) (( void (*) (InternalEnumerator_1_t2824 *, const MethodInfo*))InternalEnumerator_1_Dispose_m22074_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m22075_gshared (InternalEnumerator_1_t2824 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m22075(__this, method) (( bool (*) (InternalEnumerator_1_t2824 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m22075_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
extern "C" Mark_t1143  InternalEnumerator_1_get_Current_m22076_gshared (InternalEnumerator_1_t2824 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m22076(__this, method) (( Mark_t1143  (*) (InternalEnumerator_1_t2824 *, const MethodInfo*))InternalEnumerator_1_get_Current_m22076_gshared)(__this, method)
