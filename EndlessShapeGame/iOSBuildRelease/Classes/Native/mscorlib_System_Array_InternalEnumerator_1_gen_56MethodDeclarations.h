#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20258_gshared (InternalEnumerator_1_t2676 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20258(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2676 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20258_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20259_gshared (InternalEnumerator_1_t2676 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20259(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2676 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20259_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20260_gshared (InternalEnumerator_1_t2676 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20260(__this, method) (( void (*) (InternalEnumerator_1_t2676 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20260_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20261_gshared (InternalEnumerator_1_t2676 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20261(__this, method) (( bool (*) (InternalEnumerator_1_t2676 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20261_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::get_Current()
extern "C" CharacterInfo_t821  InternalEnumerator_1_get_Current_m20262_gshared (InternalEnumerator_1_t2676 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20262(__this, method) (( CharacterInfo_t821  (*) (InternalEnumerator_1_t2676 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20262_gshared)(__this, method)
