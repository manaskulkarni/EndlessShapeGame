#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,TouchScript.InputSources.TouchState>
struct ShimEnumerator_t2640;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>
struct Dictionary_2_t673;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,TouchScript.InputSources.TouchState>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19855_gshared (ShimEnumerator_t2640 * __this, Dictionary_2_t673 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19855(__this, ___host, method) (( void (*) (ShimEnumerator_t2640 *, Dictionary_2_t673 *, const MethodInfo*))ShimEnumerator__ctor_m19855_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,TouchScript.InputSources.TouchState>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19856_gshared (ShimEnumerator_t2640 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19856(__this, method) (( bool (*) (ShimEnumerator_t2640 *, const MethodInfo*))ShimEnumerator_MoveNext_m19856_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,TouchScript.InputSources.TouchState>::get_Entry()
extern "C" DictionaryEntry_t1194  ShimEnumerator_get_Entry_m19857_gshared (ShimEnumerator_t2640 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19857(__this, method) (( DictionaryEntry_t1194  (*) (ShimEnumerator_t2640 *, const MethodInfo*))ShimEnumerator_get_Entry_m19857_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,TouchScript.InputSources.TouchState>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19858_gshared (ShimEnumerator_t2640 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19858(__this, method) (( Object_t * (*) (ShimEnumerator_t2640 *, const MethodInfo*))ShimEnumerator_get_Key_m19858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,TouchScript.InputSources.TouchState>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19859_gshared (ShimEnumerator_t2640 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19859(__this, method) (( Object_t * (*) (ShimEnumerator_t2640 *, const MethodInfo*))ShimEnumerator_get_Value_m19859_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,TouchScript.InputSources.TouchState>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19860_gshared (ShimEnumerator_t2640 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19860(__this, method) (( Object_t * (*) (ShimEnumerator_t2640 *, const MethodInfo*))ShimEnumerator_get_Current_m19860_gshared)(__this, method)
