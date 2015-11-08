#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2308;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15011_gshared (Enumerator_t2315 * __this, Dictionary_2_t2308 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15011(__this, ___dictionary, method) (( void (*) (Enumerator_t2315 *, Dictionary_2_t2308 *, const MethodInfo*))Enumerator__ctor_m15011_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15012_gshared (Enumerator_t2315 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15012(__this, method) (( Object_t * (*) (Enumerator_t2315 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15012_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1194  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15013_gshared (Enumerator_t2315 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15013(__this, method) (( DictionaryEntry_t1194  (*) (Enumerator_t2315 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15013_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15014_gshared (Enumerator_t2315 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15014(__this, method) (( Object_t * (*) (Enumerator_t2315 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15014_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15015_gshared (Enumerator_t2315 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15015(__this, method) (( Object_t * (*) (Enumerator_t2315 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15015_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15016_gshared (Enumerator_t2315 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15016(__this, method) (( bool (*) (Enumerator_t2315 *, const MethodInfo*))Enumerator_MoveNext_m15016_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2311  Enumerator_get_Current_m15017_gshared (Enumerator_t2315 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15017(__this, method) (( KeyValuePair_2_t2311  (*) (Enumerator_t2315 *, const MethodInfo*))Enumerator_get_Current_m15017_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m15018_gshared (Enumerator_t2315 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15018(__this, method) (( Object_t * (*) (Enumerator_t2315 *, const MethodInfo*))Enumerator_get_CurrentKey_m15018_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m15019_gshared (Enumerator_t2315 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15019(__this, method) (( int32_t (*) (Enumerator_t2315 *, const MethodInfo*))Enumerator_get_CurrentValue_m15019_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m15020_gshared (Enumerator_t2315 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15020(__this, method) (( void (*) (Enumerator_t2315 *, const MethodInfo*))Enumerator_VerifyState_m15020_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15021_gshared (Enumerator_t2315 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15021(__this, method) (( void (*) (Enumerator_t2315 *, const MethodInfo*))Enumerator_VerifyCurrent_m15021_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m15022_gshared (Enumerator_t2315 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15022(__this, method) (( void (*) (Enumerator_t2315 *, const MethodInfo*))Enumerator_Dispose_m15022_gshared)(__this, method)
