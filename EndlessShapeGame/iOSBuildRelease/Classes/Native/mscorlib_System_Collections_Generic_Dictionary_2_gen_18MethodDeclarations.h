#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2308;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2310;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t945;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2923;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2924;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1193;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2313;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2317;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14935_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14935(__this, method) (( void (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2__ctor_m14935_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14936_gshared (Dictionary_2_t2308 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14936(__this, ___comparer, method) (( void (*) (Dictionary_2_t2308 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14936_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14937_gshared (Dictionary_2_t2308 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14937(__this, ___capacity, method) (( void (*) (Dictionary_2_t2308 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14937_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14938_gshared (Dictionary_2_t2308 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14938(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2308 *, SerializationInfo_t945 *, StreamingContext_t946 , const MethodInfo*))Dictionary_2__ctor_m14938_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14939_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14939(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2308 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14939_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14940_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14940(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2308 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14940_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14941_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14941(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2308 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14941_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14942_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14942(__this, ___key, method) (( bool (*) (Dictionary_2_t2308 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14942_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14943_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14943(__this, ___key, method) (( void (*) (Dictionary_2_t2308 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14943_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14944_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14944(__this, method) (( bool (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14944_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14945_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14945(__this, method) (( Object_t * (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14945_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14946_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14946(__this, method) (( bool (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14946_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14947_gshared (Dictionary_2_t2308 * __this, KeyValuePair_2_t2311  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14947(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2308 *, KeyValuePair_2_t2311 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14947_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14948_gshared (Dictionary_2_t2308 * __this, KeyValuePair_2_t2311  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14948(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2308 *, KeyValuePair_2_t2311 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14948_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14949_gshared (Dictionary_2_t2308 * __this, KeyValuePair_2U5BU5D_t2923* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14949(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2308 *, KeyValuePair_2U5BU5D_t2923*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14949_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14950_gshared (Dictionary_2_t2308 * __this, KeyValuePair_2_t2311  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14950(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2308 *, KeyValuePair_2_t2311 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14950_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14951_gshared (Dictionary_2_t2308 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14951(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2308 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14951_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14952_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14952(__this, method) (( Object_t * (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14952_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14953_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14953(__this, method) (( Object_t* (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14953_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14954_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14954(__this, method) (( Object_t * (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14954_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14955_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14955(__this, method) (( int32_t (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_get_Count_m14955_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14956_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14956(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2308 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14956_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14957_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14957(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2308 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m14957_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14958_gshared (Dictionary_2_t2308 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14958(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2308 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14958_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14959_gshared (Dictionary_2_t2308 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14959(__this, ___size, method) (( void (*) (Dictionary_2_t2308 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14959_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14960_gshared (Dictionary_2_t2308 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14960(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2308 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14960_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2311  Dictionary_2_make_pair_m14961_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14961(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2311  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m14961_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14962_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14962(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m14962_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14963_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14963(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m14963_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14964_gshared (Dictionary_2_t2308 * __this, KeyValuePair_2U5BU5D_t2923* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14964(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2308 *, KeyValuePair_2U5BU5D_t2923*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14964_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m14965_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14965(__this, method) (( void (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_Resize_m14965_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14966_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14966(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2308 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m14966_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14967_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14967(__this, method) (( void (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_Clear_m14967_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14968_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14968(__this, ___key, method) (( bool (*) (Dictionary_2_t2308 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14968_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14969_gshared (Dictionary_2_t2308 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14969(__this, ___value, method) (( bool (*) (Dictionary_2_t2308 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m14969_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14970_gshared (Dictionary_2_t2308 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14970(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2308 *, SerializationInfo_t945 *, StreamingContext_t946 , const MethodInfo*))Dictionary_2_GetObjectData_m14970_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14971_gshared (Dictionary_2_t2308 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14971(__this, ___sender, method) (( void (*) (Dictionary_2_t2308 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14971_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14972_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14972(__this, ___key, method) (( bool (*) (Dictionary_2_t2308 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14972_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14973_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14973(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2308 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14973_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2313 * Dictionary_2_get_Keys_m14974_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14974(__this, method) (( KeyCollection_t2313 * (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_get_Keys_m14974_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2317 * Dictionary_2_get_Values_m14975_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14975(__this, method) (( ValueCollection_t2317 * (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_get_Values_m14975_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14976_gshared (Dictionary_2_t2308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14976(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2308 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14976_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14977_gshared (Dictionary_2_t2308 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14977(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2308 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14977_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14978_gshared (Dictionary_2_t2308 * __this, KeyValuePair_2_t2311  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14978(__this, ___pair, method) (( bool (*) (Dictionary_2_t2308 *, KeyValuePair_2_t2311 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14978_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2315  Dictionary_2_GetEnumerator_m14979_gshared (Dictionary_2_t2308 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14979(__this, method) (( Enumerator_t2315  (*) (Dictionary_2_t2308 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14979_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1194  Dictionary_2_U3CCopyToU3Em__0_m14980_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14980(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1194  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14980_gshared)(__this /* static, unused */, ___key, ___value, method)
