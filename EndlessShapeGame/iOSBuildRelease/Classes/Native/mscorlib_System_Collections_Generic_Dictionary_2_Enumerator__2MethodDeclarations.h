#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2279;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14657_gshared (Enumerator_t2284 * __this, Dictionary_2_t2279 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14657(__this, ___dictionary, method) (( void (*) (Enumerator_t2284 *, Dictionary_2_t2279 *, const MethodInfo*))Enumerator__ctor_m14657_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14658_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14658(__this, method) (( Object_t * (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14658_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1194  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14659_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14659(__this, method) (( DictionaryEntry_t1194  (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14659_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14660_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14660(__this, method) (( Object_t * (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14660_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14661_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14661(__this, method) (( Object_t * (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14661_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14662_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14662(__this, method) (( bool (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_MoveNext_m14662_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2154  Enumerator_get_Current_m14663_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14663(__this, method) (( KeyValuePair_2_t2154  (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_get_Current_m14663_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m14664_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14664(__this, method) (( int32_t (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_get_CurrentKey_m14664_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14665_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14665(__this, method) (( Object_t * (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_get_CurrentValue_m14665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14666_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14666(__this, method) (( void (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_VerifyState_m14666_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14667_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14667(__this, method) (( void (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_VerifyCurrent_m14667_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14668_gshared (Enumerator_t2284 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14668(__this, method) (( void (*) (Enumerator_t2284 *, const MethodInfo*))Enumerator_Dispose_m14668_gshared)(__this, method)
