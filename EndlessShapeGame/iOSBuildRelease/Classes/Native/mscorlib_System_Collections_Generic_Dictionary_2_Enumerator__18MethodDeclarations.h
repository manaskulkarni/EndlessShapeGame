#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2727;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__18.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21115_gshared (Enumerator_t2734 * __this, Dictionary_2_t2727 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21115(__this, ___dictionary, method) (( void (*) (Enumerator_t2734 *, Dictionary_2_t2727 *, const MethodInfo*))Enumerator__ctor_m21115_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21116_gshared (Enumerator_t2734 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21116(__this, method) (( Object_t * (*) (Enumerator_t2734 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21116_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1194  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21117_gshared (Enumerator_t2734 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21117(__this, method) (( DictionaryEntry_t1194  (*) (Enumerator_t2734 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21117_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21118_gshared (Enumerator_t2734 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21118(__this, method) (( Object_t * (*) (Enumerator_t2734 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21118_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21119_gshared (Enumerator_t2734 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21119(__this, method) (( Object_t * (*) (Enumerator_t2734 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21119_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21120_gshared (Enumerator_t2734 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21120(__this, method) (( bool (*) (Enumerator_t2734 *, const MethodInfo*))Enumerator_MoveNext_m21120_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2729  Enumerator_get_Current_m21121_gshared (Enumerator_t2734 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21121(__this, method) (( KeyValuePair_2_t2729  (*) (Enumerator_t2734 *, const MethodInfo*))Enumerator_get_Current_m21121_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m21122_gshared (Enumerator_t2734 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21122(__this, method) (( Object_t * (*) (Enumerator_t2734 *, const MethodInfo*))Enumerator_get_CurrentKey_m21122_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m21123_gshared (Enumerator_t2734 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21123(__this, method) (( int32_t (*) (Enumerator_t2734 *, const MethodInfo*))Enumerator_get_CurrentValue_m21123_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m21124_gshared (Enumerator_t2734 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21124(__this, method) (( void (*) (Enumerator_t2734 *, const MethodInfo*))Enumerator_VerifyState_m21124_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21125_gshared (Enumerator_t2734 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21125(__this, method) (( void (*) (Enumerator_t2734 *, const MethodInfo*))Enumerator_VerifyCurrent_m21125_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m21126_gshared (Enumerator_t2734 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21126(__this, method) (( void (*) (Enumerator_t2734 *, const MethodInfo*))Enumerator_Dispose_m21126_gshared)(__this, method)
