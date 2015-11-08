#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2361;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2310;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t945;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2786;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2929;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1193;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2365;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2369;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m15506_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15506(__this, method) (( void (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2__ctor_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15508_gshared (Dictionary_2_t2361 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15508(__this, ___comparer, method) (( void (*) (Dictionary_2_t2361 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15508_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15510_gshared (Dictionary_2_t2361 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15510(__this, ___capacity, method) (( void (*) (Dictionary_2_t2361 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15510_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15512_gshared (Dictionary_2_t2361 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15512(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2361 *, SerializationInfo_t945 *, StreamingContext_t946 , const MethodInfo*))Dictionary_2__ctor_m15512_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15514_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15514(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15514_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15516_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15516(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2361 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15516_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15518_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15518(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2361 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15518_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15520_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15520(__this, ___key, method) (( bool (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15520_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15522_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15522(__this, ___key, method) (( void (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15522_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15524_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15524(__this, method) (( bool (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15524_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15526_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15526(__this, method) (( Object_t * (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15526_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15528_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15528(__this, method) (( bool (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15528_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15530_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15530(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2361 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15530_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15532_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15532(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2361 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15532_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15534_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2U5BU5D_t2786* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15534(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2361 *, KeyValuePair_2U5BU5D_t2786*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15534_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15536_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15536(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2361 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15536_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15538_gshared (Dictionary_2_t2361 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15538(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2361 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15538_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15540_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15540(__this, method) (( Object_t * (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15540_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15542_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15542(__this, method) (( Object_t* (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15542_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15544_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15544(__this, method) (( Object_t * (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15544_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15546_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15546(__this, method) (( int32_t (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_get_Count_m15546_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m15548_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15548(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m15548_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15550_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15550(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2361 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15550_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15552_gshared (Dictionary_2_t2361 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15552(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2361 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15552_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15554_gshared (Dictionary_2_t2361 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15554(__this, ___size, method) (( void (*) (Dictionary_2_t2361 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15554_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15556_gshared (Dictionary_2_t2361 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15556(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2361 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15556_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2363  Dictionary_2_make_pair_m15558_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15558(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2363  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15558_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m15560_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15560(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15560_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m15562_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15562(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15562_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15564_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2U5BU5D_t2786* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15564(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2361 *, KeyValuePair_2U5BU5D_t2786*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15564_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m15566_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15566(__this, method) (( void (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_Resize_m15566_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15568_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15568(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2361 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m15568_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m15570_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15570(__this, method) (( void (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_Clear_m15570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15572_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15572(__this, ___key, method) (( bool (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m15572_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15574_gshared (Dictionary_2_t2361 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15574(__this, ___value, method) (( bool (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15574_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15576_gshared (Dictionary_2_t2361 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15576(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2361 *, SerializationInfo_t945 *, StreamingContext_t946 , const MethodInfo*))Dictionary_2_GetObjectData_m15576_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15578_gshared (Dictionary_2_t2361 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15578(__this, ___sender, method) (( void (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15578_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15580_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15580(__this, ___key, method) (( bool (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m15580_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15582_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15582(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2361 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15582_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2365 * Dictionary_2_get_Keys_m15584_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15584(__this, method) (( KeyCollection_t2365 * (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_get_Keys_m15584_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2369 * Dictionary_2_get_Values_m15586_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15586(__this, method) (( ValueCollection_t2369 * (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_get_Values_m15586_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m15588_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15588(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15588_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m15590_gshared (Dictionary_2_t2361 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15590(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15590_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15592_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2_t2363  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15592(__this, ___pair, method) (( bool (*) (Dictionary_2_t2361 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15592_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2367  Dictionary_2_GetEnumerator_m15594_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15594(__this, method) (( Enumerator_t2367  (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15594_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1194  Dictionary_2_U3CCopyToU3Em__0_m15596_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15596(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1194  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15596_gshared)(__this /* static, unused */, ___key, ___value, method)
