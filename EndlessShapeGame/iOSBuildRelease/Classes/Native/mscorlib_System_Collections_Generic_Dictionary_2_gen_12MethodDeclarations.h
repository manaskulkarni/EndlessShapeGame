#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>
struct Dictionary_2_t673;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2278;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t945;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>[]
struct KeyValuePair_2U5BU5D_t2992;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>>
struct IEnumerator_1_t2993;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1193;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,TouchScript.InputSources.TouchState>
struct KeyCollection_t2633;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.InputSources.TouchState>
struct ValueCollection_t2636;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchState.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::.ctor()
extern "C" void Dictionary_2__ctor_m3965_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3965(__this, method) (( void (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2__ctor_m3965_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19733_gshared (Dictionary_2_t673 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19733(__this, ___comparer, method) (( void (*) (Dictionary_2_t673 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19733_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19734_gshared (Dictionary_2_t673 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19734(__this, ___capacity, method) (( void (*) (Dictionary_2_t673 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19734_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19735_gshared (Dictionary_2_t673 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19735(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t673 *, SerializationInfo_t945 *, StreamingContext_t946 , const MethodInfo*))Dictionary_2__ctor_m19735_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19736_gshared (Dictionary_2_t673 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19736(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t673 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19736_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19737_gshared (Dictionary_2_t673 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19737(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t673 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19737_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19738_gshared (Dictionary_2_t673 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19738(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t673 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19738_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19739_gshared (Dictionary_2_t673 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19739(__this, ___key, method) (( bool (*) (Dictionary_2_t673 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19739_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19740_gshared (Dictionary_2_t673 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19740(__this, ___key, method) (( void (*) (Dictionary_2_t673 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19740_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19741_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19741(__this, method) (( bool (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19741_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19742_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19742(__this, method) (( Object_t * (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19742_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19743_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19743(__this, method) (( bool (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19743_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19744_gshared (Dictionary_2_t673 * __this, KeyValuePair_2_t715  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19744(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t673 *, KeyValuePair_2_t715 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19744_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19745_gshared (Dictionary_2_t673 * __this, KeyValuePair_2_t715  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19745(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t673 *, KeyValuePair_2_t715 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19745_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19746_gshared (Dictionary_2_t673 * __this, KeyValuePair_2U5BU5D_t2992* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19746(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t673 *, KeyValuePair_2U5BU5D_t2992*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19746_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19747_gshared (Dictionary_2_t673 * __this, KeyValuePair_2_t715  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19747(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t673 *, KeyValuePair_2_t715 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19747_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19748_gshared (Dictionary_2_t673 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19748(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t673 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19748_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19749_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19749(__this, method) (( Object_t * (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19749_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19750_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19750(__this, method) (( Object_t* (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19750_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19751_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19751(__this, method) (( Object_t * (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19751_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19752_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19752(__this, method) (( int32_t (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_get_Count_m19752_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::get_Item(TKey)
extern "C" TouchState_t674  Dictionary_2_get_Item_m19753_gshared (Dictionary_2_t673 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19753(__this, ___key, method) (( TouchState_t674  (*) (Dictionary_2_t673 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m19753_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19754_gshared (Dictionary_2_t673 * __this, int32_t ___key, TouchState_t674  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19754(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t673 *, int32_t, TouchState_t674 , const MethodInfo*))Dictionary_2_set_Item_m19754_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19755_gshared (Dictionary_2_t673 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19755(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t673 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19755_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19756_gshared (Dictionary_2_t673 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19756(__this, ___size, method) (( void (*) (Dictionary_2_t673 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19756_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19757_gshared (Dictionary_2_t673 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19757(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t673 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19757_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t715  Dictionary_2_make_pair_m19758_gshared (Object_t * __this /* static, unused */, int32_t ___key, TouchState_t674  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19758(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t715  (*) (Object_t * /* static, unused */, int32_t, TouchState_t674 , const MethodInfo*))Dictionary_2_make_pair_m19758_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m19759_gshared (Object_t * __this /* static, unused */, int32_t ___key, TouchState_t674  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m19759(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, TouchState_t674 , const MethodInfo*))Dictionary_2_pick_key_m19759_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::pick_value(TKey,TValue)
extern "C" TouchState_t674  Dictionary_2_pick_value_m19760_gshared (Object_t * __this /* static, unused */, int32_t ___key, TouchState_t674  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19760(__this /* static, unused */, ___key, ___value, method) (( TouchState_t674  (*) (Object_t * /* static, unused */, int32_t, TouchState_t674 , const MethodInfo*))Dictionary_2_pick_value_m19760_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19761_gshared (Dictionary_2_t673 * __this, KeyValuePair_2U5BU5D_t2992* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19761(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t673 *, KeyValuePair_2U5BU5D_t2992*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19761_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::Resize()
extern "C" void Dictionary_2_Resize_m19762_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19762(__this, method) (( void (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_Resize_m19762_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19763_gshared (Dictionary_2_t673 * __this, int32_t ___key, TouchState_t674  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19763(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t673 *, int32_t, TouchState_t674 , const MethodInfo*))Dictionary_2_Add_m19763_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::Clear()
extern "C" void Dictionary_2_Clear_m19764_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19764(__this, method) (( void (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_Clear_m19764_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19765_gshared (Dictionary_2_t673 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19765(__this, ___key, method) (( bool (*) (Dictionary_2_t673 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m19765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19766_gshared (Dictionary_2_t673 * __this, TouchState_t674  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19766(__this, ___value, method) (( bool (*) (Dictionary_2_t673 *, TouchState_t674 , const MethodInfo*))Dictionary_2_ContainsValue_m19766_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19767_gshared (Dictionary_2_t673 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19767(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t673 *, SerializationInfo_t945 *, StreamingContext_t946 , const MethodInfo*))Dictionary_2_GetObjectData_m19767_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19768_gshared (Dictionary_2_t673 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19768(__this, ___sender, method) (( void (*) (Dictionary_2_t673 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19768_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19769_gshared (Dictionary_2_t673 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19769(__this, ___key, method) (( bool (*) (Dictionary_2_t673 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m19769_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19770_gshared (Dictionary_2_t673 * __this, int32_t ___key, TouchState_t674 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19770(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t673 *, int32_t, TouchState_t674 *, const MethodInfo*))Dictionary_2_TryGetValue_m19770_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::get_Keys()
extern "C" KeyCollection_t2633 * Dictionary_2_get_Keys_m19771_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m19771(__this, method) (( KeyCollection_t2633 * (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_get_Keys_m19771_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::get_Values()
extern "C" ValueCollection_t2636 * Dictionary_2_get_Values_m19772_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19772(__this, method) (( ValueCollection_t2636 * (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_get_Values_m19772_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m19773_gshared (Dictionary_2_t673 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19773(__this, ___key, method) (( int32_t (*) (Dictionary_2_t673 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19773_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::ToTValue(System.Object)
extern "C" TouchState_t674  Dictionary_2_ToTValue_m19774_gshared (Dictionary_2_t673 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19774(__this, ___value, method) (( TouchState_t674  (*) (Dictionary_2_t673 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19774_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19775_gshared (Dictionary_2_t673 * __this, KeyValuePair_2_t715  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19775(__this, ___pair, method) (( bool (*) (Dictionary_2_t673 *, KeyValuePair_2_t715 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19775_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::GetEnumerator()
extern "C" Enumerator_t714  Dictionary_2_GetEnumerator_m3966_gshared (Dictionary_2_t673 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3966(__this, method) (( Enumerator_t714  (*) (Dictionary_2_t673 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3966_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1194  Dictionary_2_U3CCopyToU3Em__0_m19776_gshared (Object_t * __this /* static, unused */, int32_t ___key, TouchState_t674  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19776(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1194  (*) (Object_t * /* static, unused */, int32_t, TouchState_t674 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19776_gshared)(__this /* static, unused */, ___key, ___value, method)
