#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2798;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21933_gshared (Enumerator_t2805 * __this, Dictionary_2_t2798 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21933(__this, ___dictionary, method) (( void (*) (Enumerator_t2805 *, Dictionary_2_t2798 *, const MethodInfo*))Enumerator__ctor_m21933_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21934_gshared (Enumerator_t2805 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21934(__this, method) (( Object_t * (*) (Enumerator_t2805 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21934_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1194  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21935_gshared (Enumerator_t2805 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21935(__this, method) (( DictionaryEntry_t1194  (*) (Enumerator_t2805 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21935_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21936_gshared (Enumerator_t2805 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21936(__this, method) (( Object_t * (*) (Enumerator_t2805 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21936_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21937_gshared (Enumerator_t2805 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21937(__this, method) (( Object_t * (*) (Enumerator_t2805 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21937_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21938_gshared (Enumerator_t2805 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21938(__this, method) (( bool (*) (Enumerator_t2805 *, const MethodInfo*))Enumerator_MoveNext_m21938_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2800  Enumerator_get_Current_m21939_gshared (Enumerator_t2805 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21939(__this, method) (( KeyValuePair_2_t2800  (*) (Enumerator_t2805 *, const MethodInfo*))Enumerator_get_Current_m21939_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m21940_gshared (Enumerator_t2805 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21940(__this, method) (( Object_t * (*) (Enumerator_t2805 *, const MethodInfo*))Enumerator_get_CurrentKey_m21940_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m21941_gshared (Enumerator_t2805 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21941(__this, method) (( bool (*) (Enumerator_t2805 *, const MethodInfo*))Enumerator_get_CurrentValue_m21941_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m21942_gshared (Enumerator_t2805 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21942(__this, method) (( void (*) (Enumerator_t2805 *, const MethodInfo*))Enumerator_VerifyState_m21942_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21943_gshared (Enumerator_t2805 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21943(__this, method) (( void (*) (Enumerator_t2805 *, const MethodInfo*))Enumerator_VerifyCurrent_m21943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m21944_gshared (Enumerator_t2805 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21944(__this, method) (( void (*) (Enumerator_t2805 *, const MethodInfo*))Enumerator_Dispose_m21944_gshared)(__this, method)
