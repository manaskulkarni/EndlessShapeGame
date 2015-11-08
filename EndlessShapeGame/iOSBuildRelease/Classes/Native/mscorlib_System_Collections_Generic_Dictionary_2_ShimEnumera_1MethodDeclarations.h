#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2372;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2361;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15767_gshared (ShimEnumerator_t2372 * __this, Dictionary_2_t2361 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15767(__this, ___host, method) (( void (*) (ShimEnumerator_t2372 *, Dictionary_2_t2361 *, const MethodInfo*))ShimEnumerator__ctor_m15767_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15768_gshared (ShimEnumerator_t2372 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15768(__this, method) (( bool (*) (ShimEnumerator_t2372 *, const MethodInfo*))ShimEnumerator_MoveNext_m15768_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1194  ShimEnumerator_get_Entry_m15769_gshared (ShimEnumerator_t2372 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15769(__this, method) (( DictionaryEntry_t1194  (*) (ShimEnumerator_t2372 *, const MethodInfo*))ShimEnumerator_get_Entry_m15769_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15770_gshared (ShimEnumerator_t2372 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15770(__this, method) (( Object_t * (*) (ShimEnumerator_t2372 *, const MethodInfo*))ShimEnumerator_get_Key_m15770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15771_gshared (ShimEnumerator_t2372 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15771(__this, method) (( Object_t * (*) (ShimEnumerator_t2372 *, const MethodInfo*))ShimEnumerator_get_Value_m15771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15772_gshared (ShimEnumerator_t2372 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15772(__this, method) (( Object_t * (*) (ShimEnumerator_t2372 *, const MethodInfo*))ShimEnumerator_get_Current_m15772_gshared)(__this, method)
