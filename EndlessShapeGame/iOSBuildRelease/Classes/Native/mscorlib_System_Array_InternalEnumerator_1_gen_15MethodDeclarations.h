#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<PlayerManager/PlayerPreset>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
// PlayerManager/PlayerPreset
#include "AssemblyU2DCSharp_PlayerManager_PlayerPreset.h"

// System.Void System.Array/InternalEnumerator`1<PlayerManager/PlayerPreset>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13347_gshared (InternalEnumerator_1_t2180 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13347(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2180 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13347_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<PlayerManager/PlayerPreset>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13348_gshared (InternalEnumerator_1_t2180 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13348(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2180 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13348_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<PlayerManager/PlayerPreset>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13349_gshared (InternalEnumerator_1_t2180 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13349(__this, method) (( void (*) (InternalEnumerator_1_t2180 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13349_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<PlayerManager/PlayerPreset>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13350_gshared (InternalEnumerator_1_t2180 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13350(__this, method) (( bool (*) (InternalEnumerator_1_t2180 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13350_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<PlayerManager/PlayerPreset>::get_Current()
extern "C" PlayerPreset_t171  InternalEnumerator_1_get_Current_m13351_gshared (InternalEnumerator_1_t2180 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13351(__this, method) (( PlayerPreset_t171  (*) (InternalEnumerator_1_t2180 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13351_gshared)(__this, method)
