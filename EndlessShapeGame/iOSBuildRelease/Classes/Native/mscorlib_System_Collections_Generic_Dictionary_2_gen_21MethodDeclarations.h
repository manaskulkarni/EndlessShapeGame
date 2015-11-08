#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2727;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2310;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t945;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t3006;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t3007;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1193;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t2732;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2736;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__18.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m20989_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20989(__this, method) (( void (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2__ctor_m20989_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20991_gshared (Dictionary_2_t2727 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20991(__this, ___comparer, method) (( void (*) (Dictionary_2_t2727 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20991_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20993_gshared (Dictionary_2_t2727 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20993(__this, ___capacity, method) (( void (*) (Dictionary_2_t2727 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20993_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20995_gshared (Dictionary_2_t2727 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20995(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2727 *, SerializationInfo_t945 *, StreamingContext_t946 , const MethodInfo*))Dictionary_2__ctor_m20995_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20997_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20997(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2727 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20997_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20999_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20999(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2727 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20999_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21001_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21001(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2727 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21001_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21003_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21003(__this, ___key, method) (( bool (*) (Dictionary_2_t2727 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21003_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21005_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21005(__this, ___key, method) (( void (*) (Dictionary_2_t2727 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21005_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21007_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21007(__this, method) (( bool (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21007_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21009_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21009(__this, method) (( Object_t * (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21009_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21011_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21011(__this, method) (( bool (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21011_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21013_gshared (Dictionary_2_t2727 * __this, KeyValuePair_2_t2729  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21013(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2727 *, KeyValuePair_2_t2729 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21013_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21015_gshared (Dictionary_2_t2727 * __this, KeyValuePair_2_t2729  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21015(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2727 *, KeyValuePair_2_t2729 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21015_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21017_gshared (Dictionary_2_t2727 * __this, KeyValuePair_2U5BU5D_t3006* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21017(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2727 *, KeyValuePair_2U5BU5D_t3006*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21017_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21019_gshared (Dictionary_2_t2727 * __this, KeyValuePair_2_t2729  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21019(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2727 *, KeyValuePair_2_t2729 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21019_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21021_gshared (Dictionary_2_t2727 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21021(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2727 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21021_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21023_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21023(__this, method) (( Object_t * (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21023_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21025_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21025(__this, method) (( Object_t* (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21025_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21027_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21027(__this, method) (( Object_t * (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21027_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21029_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21029(__this, method) (( int32_t (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_get_Count_m21029_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m21031_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21031(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2727 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21031_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21033_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21033(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2727 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m21033_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21035_gshared (Dictionary_2_t2727 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21035(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2727 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21035_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21037_gshared (Dictionary_2_t2727 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21037(__this, ___size, method) (( void (*) (Dictionary_2_t2727 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21037_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21039_gshared (Dictionary_2_t2727 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21039(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2727 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21039_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2729  Dictionary_2_make_pair_m21041_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21041(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2729  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m21041_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21043_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21043(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m21043_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m21045_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21045(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m21045_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21047_gshared (Dictionary_2_t2727 * __this, KeyValuePair_2U5BU5D_t3006* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21047(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2727 *, KeyValuePair_2U5BU5D_t3006*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21047_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m21049_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21049(__this, method) (( void (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_Resize_m21049_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21051_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21051(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2727 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m21051_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m21053_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21053(__this, method) (( void (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_Clear_m21053_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21055_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21055(__this, ___key, method) (( bool (*) (Dictionary_2_t2727 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21055_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21057_gshared (Dictionary_2_t2727 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21057(__this, ___value, method) (( bool (*) (Dictionary_2_t2727 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m21057_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21059_gshared (Dictionary_2_t2727 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21059(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2727 *, SerializationInfo_t945 *, StreamingContext_t946 , const MethodInfo*))Dictionary_2_GetObjectData_m21059_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21061_gshared (Dictionary_2_t2727 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21061(__this, ___sender, method) (( void (*) (Dictionary_2_t2727 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21061_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21063_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21063(__this, ___key, method) (( bool (*) (Dictionary_2_t2727 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21063_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21065_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21065(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2727 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m21065_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t2732 * Dictionary_2_get_Keys_m21067_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21067(__this, method) (( KeyCollection_t2732 * (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_get_Keys_m21067_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2736 * Dictionary_2_get_Values_m21069_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21069(__this, method) (( ValueCollection_t2736 * (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_get_Values_m21069_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21071_gshared (Dictionary_2_t2727 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21071(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2727 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21071_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m21073_gshared (Dictionary_2_t2727 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21073(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2727 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21073_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21075_gshared (Dictionary_2_t2727 * __this, KeyValuePair_2_t2729  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21075(__this, ___pair, method) (( bool (*) (Dictionary_2_t2727 *, KeyValuePair_2_t2729 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21075_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2734  Dictionary_2_GetEnumerator_m21077_gshared (Dictionary_2_t2727 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21077(__this, method) (( Enumerator_t2734  (*) (Dictionary_2_t2727 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21077_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1194  Dictionary_2_U3CCopyToU3Em__0_m21079_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21079(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1194  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21079_gshared)(__this /* static, unused */, ___key, ___value, method)
