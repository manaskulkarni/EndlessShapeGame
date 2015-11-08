#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2811;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2798;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21980_gshared (ShimEnumerator_t2811 * __this, Dictionary_2_t2798 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21980(__this, ___host, method) (( void (*) (ShimEnumerator_t2811 *, Dictionary_2_t2798 *, const MethodInfo*))ShimEnumerator__ctor_m21980_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21981_gshared (ShimEnumerator_t2811 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21981(__this, method) (( bool (*) (ShimEnumerator_t2811 *, const MethodInfo*))ShimEnumerator_MoveNext_m21981_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t1194  ShimEnumerator_get_Entry_m21982_gshared (ShimEnumerator_t2811 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21982(__this, method) (( DictionaryEntry_t1194  (*) (ShimEnumerator_t2811 *, const MethodInfo*))ShimEnumerator_get_Entry_m21982_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21983_gshared (ShimEnumerator_t2811 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21983(__this, method) (( Object_t * (*) (ShimEnumerator_t2811 *, const MethodInfo*))ShimEnumerator_get_Key_m21983_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21984_gshared (ShimEnumerator_t2811 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21984(__this, method) (( Object_t * (*) (ShimEnumerator_t2811 *, const MethodInfo*))ShimEnumerator_get_Value_m21984_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21985_gshared (ShimEnumerator_t2811 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21985(__this, method) (( Object_t * (*) (ShimEnumerator_t2811 *, const MethodInfo*))ShimEnumerator_get_Current_m21985_gshared)(__this, method)
