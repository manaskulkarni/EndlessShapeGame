#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2291;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2279;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14709_gshared (ShimEnumerator_t2291 * __this, Dictionary_2_t2279 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14709(__this, ___host, method) (( void (*) (ShimEnumerator_t2291 *, Dictionary_2_t2279 *, const MethodInfo*))ShimEnumerator__ctor_m14709_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14710_gshared (ShimEnumerator_t2291 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14710(__this, method) (( bool (*) (ShimEnumerator_t2291 *, const MethodInfo*))ShimEnumerator_MoveNext_m14710_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1194  ShimEnumerator_get_Entry_m14711_gshared (ShimEnumerator_t2291 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14711(__this, method) (( DictionaryEntry_t1194  (*) (ShimEnumerator_t2291 *, const MethodInfo*))ShimEnumerator_get_Entry_m14711_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14712_gshared (ShimEnumerator_t2291 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14712(__this, method) (( Object_t * (*) (ShimEnumerator_t2291 *, const MethodInfo*))ShimEnumerator_get_Key_m14712_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14713_gshared (ShimEnumerator_t2291 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14713(__this, method) (( Object_t * (*) (ShimEnumerator_t2291 *, const MethodInfo*))ShimEnumerator_get_Value_m14713_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14714_gshared (ShimEnumerator_t2291 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14714(__this, method) (( Object_t * (*) (ShimEnumerator_t2291 *, const MethodInfo*))ShimEnumerator_get_Current_m14714_gshared)(__this, method)
