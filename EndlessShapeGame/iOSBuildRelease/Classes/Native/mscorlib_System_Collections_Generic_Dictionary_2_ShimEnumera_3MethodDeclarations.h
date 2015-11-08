#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t2740;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2727;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21162_gshared (ShimEnumerator_t2740 * __this, Dictionary_2_t2727 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21162(__this, ___host, method) (( void (*) (ShimEnumerator_t2740 *, Dictionary_2_t2727 *, const MethodInfo*))ShimEnumerator__ctor_m21162_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21163_gshared (ShimEnumerator_t2740 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21163(__this, method) (( bool (*) (ShimEnumerator_t2740 *, const MethodInfo*))ShimEnumerator_MoveNext_m21163_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t1194  ShimEnumerator_get_Entry_m21164_gshared (ShimEnumerator_t2740 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21164(__this, method) (( DictionaryEntry_t1194  (*) (ShimEnumerator_t2740 *, const MethodInfo*))ShimEnumerator_get_Entry_m21164_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21165_gshared (ShimEnumerator_t2740 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21165(__this, method) (( Object_t * (*) (ShimEnumerator_t2740 *, const MethodInfo*))ShimEnumerator_get_Key_m21165_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21166_gshared (ShimEnumerator_t2740 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21166(__this, method) (( Object_t * (*) (ShimEnumerator_t2740 *, const MethodInfo*))ShimEnumerator_get_Value_m21166_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21167_gshared (ShimEnumerator_t2740 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21167(__this, method) (( Object_t * (*) (ShimEnumerator_t2740 *, const MethodInfo*))ShimEnumerator_get_Current_m21167_gshared)(__this, method)
