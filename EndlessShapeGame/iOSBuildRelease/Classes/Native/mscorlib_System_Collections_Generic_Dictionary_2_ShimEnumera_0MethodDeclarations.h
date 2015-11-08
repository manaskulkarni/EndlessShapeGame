#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2321;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2308;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15058_gshared (ShimEnumerator_t2321 * __this, Dictionary_2_t2308 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15058(__this, ___host, method) (( void (*) (ShimEnumerator_t2321 *, Dictionary_2_t2308 *, const MethodInfo*))ShimEnumerator__ctor_m15058_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15059_gshared (ShimEnumerator_t2321 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15059(__this, method) (( bool (*) (ShimEnumerator_t2321 *, const MethodInfo*))ShimEnumerator_MoveNext_m15059_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1194  ShimEnumerator_get_Entry_m15060_gshared (ShimEnumerator_t2321 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15060(__this, method) (( DictionaryEntry_t1194  (*) (ShimEnumerator_t2321 *, const MethodInfo*))ShimEnumerator_get_Entry_m15060_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15061_gshared (ShimEnumerator_t2321 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15061(__this, method) (( Object_t * (*) (ShimEnumerator_t2321 *, const MethodInfo*))ShimEnumerator_get_Key_m15061_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15062_gshared (ShimEnumerator_t2321 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15062(__this, method) (( Object_t * (*) (ShimEnumerator_t2321 *, const MethodInfo*))ShimEnumerator_get_Value_m15062_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15063_gshared (ShimEnumerator_t2321 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15063(__this, method) (( Object_t * (*) (ShimEnumerator_t2321 *, const MethodInfo*))ShimEnumerator_get_Current_m15063_gshared)(__this, method)
