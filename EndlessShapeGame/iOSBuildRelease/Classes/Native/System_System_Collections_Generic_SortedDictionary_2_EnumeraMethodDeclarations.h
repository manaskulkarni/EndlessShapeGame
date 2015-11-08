#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>
struct SortedDictionary_2_t2152;
// System.Object
struct Object_t;
// System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Object>
struct Node_t2156;
// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_Enumera.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.SortedDictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13131_gshared (Enumerator_t2167 * __this, SortedDictionary_2_t2152 * ___dic, const MethodInfo* method);
#define Enumerator__ctor_m13131(__this, ___dic, method) (( void (*) (Enumerator_t2167 *, SortedDictionary_2_t2152 *, const MethodInfo*))Enumerator__ctor_m13131_gshared)(__this, ___dic, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1194  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13132_gshared (Enumerator_t2167 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13132(__this, method) (( DictionaryEntry_t1194  (*) (Enumerator_t2167 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13132_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13133_gshared (Enumerator_t2167 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13133(__this, method) (( Object_t * (*) (Enumerator_t2167 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13133_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13134_gshared (Enumerator_t2167 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13134(__this, method) (( Object_t * (*) (Enumerator_t2167 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13134_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13135_gshared (Enumerator_t2167 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13135(__this, method) (( Object_t * (*) (Enumerator_t2167 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13135_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2154  Enumerator_get_Current_m13136_gshared (Enumerator_t2167 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13136(__this, method) (( KeyValuePair_2_t2154  (*) (Enumerator_t2167 *, const MethodInfo*))Enumerator_get_Current_m13136_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13137_gshared (Enumerator_t2167 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13137(__this, method) (( bool (*) (Enumerator_t2167 *, const MethodInfo*))Enumerator_MoveNext_m13137_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13138_gshared (Enumerator_t2167 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13138(__this, method) (( void (*) (Enumerator_t2167 *, const MethodInfo*))Enumerator_Dispose_m13138_gshared)(__this, method)
// System.Collections.Generic.SortedDictionary`2/Node<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentNode()
extern "C" Node_t2156 * Enumerator_get_CurrentNode_m13139_gshared (Enumerator_t2167 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentNode_m13139(__this, method) (( Node_t2156 * (*) (Enumerator_t2167 *, const MethodInfo*))Enumerator_get_CurrentNode_m13139_gshared)(__this, method)
