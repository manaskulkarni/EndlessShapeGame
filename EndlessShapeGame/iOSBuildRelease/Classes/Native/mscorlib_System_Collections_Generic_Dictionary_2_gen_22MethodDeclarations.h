#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2798;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2310;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t945;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3015;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t3016;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1193;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2803;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2807;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m21808_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21808(__this, method) (( void (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2__ctor_m21808_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21809_gshared (Dictionary_2_t2798 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21809(__this, ___comparer, method) (( void (*) (Dictionary_2_t2798 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21809_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21811_gshared (Dictionary_2_t2798 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21811(__this, ___capacity, method) (( void (*) (Dictionary_2_t2798 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21811_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21813_gshared (Dictionary_2_t2798 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21813(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2798 *, SerializationInfo_t945 *, StreamingContext_t946 , const MethodInfo*))Dictionary_2__ctor_m21813_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21815_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21815(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2798 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21815_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21817_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21817(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2798 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21817_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21819_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21819(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2798 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21819_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21821_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21821(__this, ___key, method) (( bool (*) (Dictionary_2_t2798 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21821_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21823_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21823(__this, ___key, method) (( void (*) (Dictionary_2_t2798 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21823_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21825_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21825(__this, method) (( bool (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21825_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21827_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21827(__this, method) (( Object_t * (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21829_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21829(__this, method) (( bool (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21829_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21831_gshared (Dictionary_2_t2798 * __this, KeyValuePair_2_t2800  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21831(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2798 *, KeyValuePair_2_t2800 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21831_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21833_gshared (Dictionary_2_t2798 * __this, KeyValuePair_2_t2800  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21833(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2798 *, KeyValuePair_2_t2800 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21833_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21835_gshared (Dictionary_2_t2798 * __this, KeyValuePair_2U5BU5D_t3015* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21835(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2798 *, KeyValuePair_2U5BU5D_t3015*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21835_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21837_gshared (Dictionary_2_t2798 * __this, KeyValuePair_2_t2800  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21837(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2798 *, KeyValuePair_2_t2800 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21837_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21839_gshared (Dictionary_2_t2798 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21839(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2798 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21839_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21841_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21841(__this, method) (( Object_t * (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21841_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21843_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21843(__this, method) (( Object_t* (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21843_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21845_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21845(__this, method) (( Object_t * (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21845_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21847_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21847(__this, method) (( int32_t (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_get_Count_m21847_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m21849_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21849(__this, ___key, method) (( bool (*) (Dictionary_2_t2798 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21849_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21851_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21851(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2798 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m21851_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21853_gshared (Dictionary_2_t2798 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21853(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2798 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21853_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21855_gshared (Dictionary_2_t2798 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21855(__this, ___size, method) (( void (*) (Dictionary_2_t2798 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21855_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21857_gshared (Dictionary_2_t2798 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21857(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2798 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21857_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2800  Dictionary_2_make_pair_m21859_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21859(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2800  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m21859_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21861_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21861(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m21861_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m21863_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21863(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m21863_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21865_gshared (Dictionary_2_t2798 * __this, KeyValuePair_2U5BU5D_t3015* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21865(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2798 *, KeyValuePair_2U5BU5D_t3015*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21865_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m21867_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21867(__this, method) (( void (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_Resize_m21867_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21869_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21869(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2798 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m21869_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m21871_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21871(__this, method) (( void (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_Clear_m21871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21873_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21873(__this, ___key, method) (( bool (*) (Dictionary_2_t2798 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21873_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21875_gshared (Dictionary_2_t2798 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21875(__this, ___value, method) (( bool (*) (Dictionary_2_t2798 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m21875_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21877_gshared (Dictionary_2_t2798 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21877(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2798 *, SerializationInfo_t945 *, StreamingContext_t946 , const MethodInfo*))Dictionary_2_GetObjectData_m21877_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21879_gshared (Dictionary_2_t2798 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21879(__this, ___sender, method) (( void (*) (Dictionary_2_t2798 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21879_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21881_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21881(__this, ___key, method) (( bool (*) (Dictionary_2_t2798 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21881_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21883_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21883(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2798 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m21883_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2803 * Dictionary_2_get_Keys_m21885_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21885(__this, method) (( KeyCollection_t2803 * (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_get_Keys_m21885_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2807 * Dictionary_2_get_Values_m21887_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21887(__this, method) (( ValueCollection_t2807 * (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_get_Values_m21887_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21889_gshared (Dictionary_2_t2798 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21889(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2798 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21889_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m21891_gshared (Dictionary_2_t2798 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21891(__this, ___value, method) (( bool (*) (Dictionary_2_t2798 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21891_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21893_gshared (Dictionary_2_t2798 * __this, KeyValuePair_2_t2800  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21893(__this, ___pair, method) (( bool (*) (Dictionary_2_t2798 *, KeyValuePair_2_t2800 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21893_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2805  Dictionary_2_GetEnumerator_m21895_gshared (Dictionary_2_t2798 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21895(__this, method) (( Enumerator_t2805  (*) (Dictionary_2_t2798 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21895_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1194  Dictionary_2_U3CCopyToU3Em__0_m21897_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21897(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1194  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21897_gshared)(__this /* static, unused */, ___key, ___value, method)
