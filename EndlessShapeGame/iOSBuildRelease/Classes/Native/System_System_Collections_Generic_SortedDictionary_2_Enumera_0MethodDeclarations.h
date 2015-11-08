#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct SortedDictionary_2_t2780;
// System.Object
struct Object_t;
// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct Node_t2782;
// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_Enumera_0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedDictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21702_gshared (Enumerator_t2784 * __this, SortedDictionary_2_t2780 * ___dic, const MethodInfo* method);
#define Enumerator__ctor_m21702(__this, ___dic, method) (( void (*) (Enumerator_t2784 *, SortedDictionary_2_t2780 *, const MethodInfo*))Enumerator__ctor_m21702_gshared)(__this, ___dic, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1194  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21703_gshared (Enumerator_t2784 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21703(__this, method) (( DictionaryEntry_t1194  (*) (Enumerator_t2784 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21703_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21704_gshared (Enumerator_t2784 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21704(__this, method) (( Object_t * (*) (Enumerator_t2784 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21704_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21705_gshared (Enumerator_t2784 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21705(__this, method) (( Object_t * (*) (Enumerator_t2784 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21705_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21706_gshared (Enumerator_t2784 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21706(__this, method) (( Object_t * (*) (Enumerator_t2784 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21706_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2363  Enumerator_get_Current_m21707_gshared (Enumerator_t2784 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21707(__this, method) (( KeyValuePair_2_t2363  (*) (Enumerator_t2784 *, const MethodInfo*))Enumerator_get_Current_m21707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21708_gshared (Enumerator_t2784 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21708(__this, method) (( bool (*) (Enumerator_t2784 *, const MethodInfo*))Enumerator_MoveNext_m21708_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m21709_gshared (Enumerator_t2784 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21709(__this, method) (( void (*) (Enumerator_t2784 *, const MethodInfo*))Enumerator_Dispose_m21709_gshared)(__this, method)
// System.Collections.Generic.SortedDictionary`2/Node<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::get_CurrentNode()
extern "C" Node_t2782 * Enumerator_get_CurrentNode_m21710_gshared (Enumerator_t2784 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentNode_m21710(__this, method) (( Node_t2782 * (*) (Enumerator_t2784 *, const MethodInfo*))Enumerator_get_CurrentNode_m21710_gshared)(__this, method)
