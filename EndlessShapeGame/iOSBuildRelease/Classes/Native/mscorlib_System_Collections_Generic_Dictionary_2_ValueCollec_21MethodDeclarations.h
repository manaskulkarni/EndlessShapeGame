#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>
struct ValueCollection_t2636;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>
struct Dictionary_2_t673;
// System.Collections.Generic.IEnumerator`1<TouchScript.InputSources.TouchState>
struct IEnumerator_1_t2994;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// TouchScript.InputSources.TouchState[]
struct TouchStateU5BU5D_t2629;
// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchState.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_22.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m19824_gshared (ValueCollection_t2636 * __this, Dictionary_2_t673 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m19824(__this, ___dictionary, method) (( void (*) (ValueCollection_t2636 *, Dictionary_2_t673 *, const MethodInfo*))ValueCollection__ctor_m19824_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m19825_gshared (ValueCollection_t2636 * __this, TouchState_t674  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m19825(__this, ___item, method) (( void (*) (ValueCollection_t2636 *, TouchState_t674 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m19825_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m19826_gshared (ValueCollection_t2636 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m19826(__this, method) (( void (*) (ValueCollection_t2636 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m19826_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m19827_gshared (ValueCollection_t2636 * __this, TouchState_t674  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m19827(__this, ___item, method) (( bool (*) (ValueCollection_t2636 *, TouchState_t674 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m19827_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m19828_gshared (ValueCollection_t2636 * __this, TouchState_t674  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m19828(__this, ___item, method) (( bool (*) (ValueCollection_t2636 *, TouchState_t674 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m19828_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m19829_gshared (ValueCollection_t2636 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m19829(__this, method) (( Object_t* (*) (ValueCollection_t2636 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m19829_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m19830_gshared (ValueCollection_t2636 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m19830(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2636 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m19830_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m19831_gshared (ValueCollection_t2636 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m19831(__this, method) (( Object_t * (*) (ValueCollection_t2636 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m19831_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m19832_gshared (ValueCollection_t2636 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m19832(__this, method) (( bool (*) (ValueCollection_t2636 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m19832_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m19833_gshared (ValueCollection_t2636 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m19833(__this, method) (( bool (*) (ValueCollection_t2636 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m19833_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m19834_gshared (ValueCollection_t2636 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m19834(__this, method) (( Object_t * (*) (ValueCollection_t2636 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m19834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m19835_gshared (ValueCollection_t2636 * __this, TouchStateU5BU5D_t2629* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m19835(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2636 *, TouchStateU5BU5D_t2629*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m19835_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::GetEnumerator()
extern "C" Enumerator_t2637  ValueCollection_GetEnumerator_m19836_gshared (ValueCollection_t2636 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m19836(__this, method) (( Enumerator_t2637  (*) (ValueCollection_t2636 *, const MethodInfo*))ValueCollection_GetEnumerator_m19836_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m19837_gshared (ValueCollection_t2636 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m19837(__this, method) (( int32_t (*) (ValueCollection_t2636 *, const MethodInfo*))ValueCollection_get_Count_m19837_gshared)(__this, method)
