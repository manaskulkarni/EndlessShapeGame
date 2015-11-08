#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedList`2<System.Int32,PlayerManager/PlayerPreset>
struct SortedList_2_t244;
// System.Object
struct Object_t;
// System.Collections.Generic.SortedList`2/ValueEnumerator<System.Int32,PlayerManager/PlayerPreset>
#include "System_System_Collections_Generic_SortedList_2_ValueEnumerat_0.h"
// PlayerManager/PlayerPreset
#include "AssemblyU2DCSharp_PlayerManager_PlayerPreset.h"

// System.Void System.Collections.Generic.SortedList`2/ValueEnumerator<System.Int32,PlayerManager/PlayerPreset>::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
extern "C" void ValueEnumerator__ctor_m13423_gshared (ValueEnumerator_t2186 * __this, SortedList_2_t244 * ___l, const MethodInfo* method);
#define ValueEnumerator__ctor_m13423(__this, ___l, method) (( void (*) (ValueEnumerator_t2186 *, SortedList_2_t244 *, const MethodInfo*))ValueEnumerator__ctor_m13423_gshared)(__this, ___l, method)
// System.Object System.Collections.Generic.SortedList`2/ValueEnumerator<System.Int32,PlayerManager/PlayerPreset>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * ValueEnumerator_System_Collections_IEnumerator_get_Current_m13424_gshared (ValueEnumerator_t2186 * __this, const MethodInfo* method);
#define ValueEnumerator_System_Collections_IEnumerator_get_Current_m13424(__this, method) (( Object_t * (*) (ValueEnumerator_t2186 *, const MethodInfo*))ValueEnumerator_System_Collections_IEnumerator_get_Current_m13424_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ValueEnumerator<System.Int32,PlayerManager/PlayerPreset>::Dispose()
extern "C" void ValueEnumerator_Dispose_m13425_gshared (ValueEnumerator_t2186 * __this, const MethodInfo* method);
#define ValueEnumerator_Dispose_m13425(__this, method) (( void (*) (ValueEnumerator_t2186 *, const MethodInfo*))ValueEnumerator_Dispose_m13425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedList`2/ValueEnumerator<System.Int32,PlayerManager/PlayerPreset>::MoveNext()
extern "C" bool ValueEnumerator_MoveNext_m13426_gshared (ValueEnumerator_t2186 * __this, const MethodInfo* method);
#define ValueEnumerator_MoveNext_m13426(__this, method) (( bool (*) (ValueEnumerator_t2186 *, const MethodInfo*))ValueEnumerator_MoveNext_m13426_gshared)(__this, method)
// TValue System.Collections.Generic.SortedList`2/ValueEnumerator<System.Int32,PlayerManager/PlayerPreset>::get_Current()
extern "C" PlayerPreset_t171  ValueEnumerator_get_Current_m13427_gshared (ValueEnumerator_t2186 * __this, const MethodInfo* method);
#define ValueEnumerator_get_Current_m13427(__this, method) (( PlayerPreset_t171  (*) (ValueEnumerator_t2186 *, const MethodInfo*))ValueEnumerator_get_Current_m13427_gshared)(__this, method)
