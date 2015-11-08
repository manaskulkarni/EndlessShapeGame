#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>
struct ListValues_t2184;
// System.Collections.Generic.SortedList`2<System.Int32,PlayerManager/PlayerPreset>
struct SortedList_2_t244;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// PlayerManager/PlayerPreset[]
struct PlayerPresetU5BU5D_t176;
// System.Collections.Generic.IEnumerator`1<PlayerManager/PlayerPreset>
struct IEnumerator_1_t2911;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// PlayerManager/PlayerPreset
#include "AssemblyU2DCSharp_PlayerManager_PlayerPreset.h"

// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
extern "C" void ListValues__ctor_m13400_gshared (ListValues_t2184 * __this, SortedList_2_t244 * ___host, const MethodInfo* method);
#define ListValues__ctor_m13400(__this, ___host, method) (( void (*) (ListValues_t2184 *, SortedList_2_t244 *, const MethodInfo*))ListValues__ctor_m13400_gshared)(__this, ___host, method)
// System.Collections.IEnumerator System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ListValues_System_Collections_IEnumerable_GetEnumerator_m13401_gshared (ListValues_t2184 * __this, const MethodInfo* method);
#define ListValues_System_Collections_IEnumerable_GetEnumerator_m13401(__this, method) (( Object_t * (*) (ListValues_t2184 *, const MethodInfo*))ListValues_System_Collections_IEnumerable_GetEnumerator_m13401_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::Add(TValue)
extern "C" void ListValues_Add_m13402_gshared (ListValues_t2184 * __this, PlayerPreset_t171  ___item, const MethodInfo* method);
#define ListValues_Add_m13402(__this, ___item, method) (( void (*) (ListValues_t2184 *, PlayerPreset_t171 , const MethodInfo*))ListValues_Add_m13402_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::Remove(TValue)
extern "C" bool ListValues_Remove_m13403_gshared (ListValues_t2184 * __this, PlayerPreset_t171  ___value, const MethodInfo* method);
#define ListValues_Remove_m13403(__this, ___value, method) (( bool (*) (ListValues_t2184 *, PlayerPreset_t171 , const MethodInfo*))ListValues_Remove_m13403_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::Clear()
extern "C" void ListValues_Clear_m13404_gshared (ListValues_t2184 * __this, const MethodInfo* method);
#define ListValues_Clear_m13404(__this, method) (( void (*) (ListValues_t2184 *, const MethodInfo*))ListValues_Clear_m13404_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::CopyTo(TValue[],System.Int32)
extern "C" void ListValues_CopyTo_m13405_gshared (ListValues_t2184 * __this, PlayerPresetU5BU5D_t176* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ListValues_CopyTo_m13405(__this, ___array, ___arrayIndex, method) (( void (*) (ListValues_t2184 *, PlayerPresetU5BU5D_t176*, int32_t, const MethodInfo*))ListValues_CopyTo_m13405_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::Contains(TValue)
extern "C" bool ListValues_Contains_m13406_gshared (ListValues_t2184 * __this, PlayerPreset_t171  ___item, const MethodInfo* method);
#define ListValues_Contains_m13406(__this, ___item, method) (( bool (*) (ListValues_t2184 *, PlayerPreset_t171 , const MethodInfo*))ListValues_Contains_m13406_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::IndexOf(TValue)
extern "C" int32_t ListValues_IndexOf_m13407_gshared (ListValues_t2184 * __this, PlayerPreset_t171  ___item, const MethodInfo* method);
#define ListValues_IndexOf_m13407(__this, ___item, method) (( int32_t (*) (ListValues_t2184 *, PlayerPreset_t171 , const MethodInfo*))ListValues_IndexOf_m13407_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::Insert(System.Int32,TValue)
extern "C" void ListValues_Insert_m13408_gshared (ListValues_t2184 * __this, int32_t ___index, PlayerPreset_t171  ___item, const MethodInfo* method);
#define ListValues_Insert_m13408(__this, ___index, ___item, method) (( void (*) (ListValues_t2184 *, int32_t, PlayerPreset_t171 , const MethodInfo*))ListValues_Insert_m13408_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::RemoveAt(System.Int32)
extern "C" void ListValues_RemoveAt_m13409_gshared (ListValues_t2184 * __this, int32_t ___index, const MethodInfo* method);
#define ListValues_RemoveAt_m13409(__this, ___index, method) (( void (*) (ListValues_t2184 *, int32_t, const MethodInfo*))ListValues_RemoveAt_m13409_gshared)(__this, ___index, method)
// TValue System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::get_Item(System.Int32)
extern "C" PlayerPreset_t171  ListValues_get_Item_m13410_gshared (ListValues_t2184 * __this, int32_t ___index, const MethodInfo* method);
#define ListValues_get_Item_m13410(__this, ___index, method) (( PlayerPreset_t171  (*) (ListValues_t2184 *, int32_t, const MethodInfo*))ListValues_get_Item_m13410_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::set_Item(System.Int32,TValue)
extern "C" void ListValues_set_Item_m13411_gshared (ListValues_t2184 * __this, int32_t ___index, PlayerPreset_t171  ___value, const MethodInfo* method);
#define ListValues_set_Item_m13411(__this, ___index, ___value, method) (( void (*) (ListValues_t2184 *, int32_t, PlayerPreset_t171 , const MethodInfo*))ListValues_set_Item_m13411_gshared)(__this, ___index, ___value, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::GetEnumerator()
extern "C" Object_t* ListValues_GetEnumerator_m13412_gshared (ListValues_t2184 * __this, const MethodInfo* method);
#define ListValues_GetEnumerator_m13412(__this, method) (( Object_t* (*) (ListValues_t2184 *, const MethodInfo*))ListValues_GetEnumerator_m13412_gshared)(__this, method)
// System.Int32 System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::get_Count()
extern "C" int32_t ListValues_get_Count_m13413_gshared (ListValues_t2184 * __this, const MethodInfo* method);
#define ListValues_get_Count_m13413(__this, method) (( int32_t (*) (ListValues_t2184 *, const MethodInfo*))ListValues_get_Count_m13413_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::get_IsSynchronized()
extern "C" bool ListValues_get_IsSynchronized_m13414_gshared (ListValues_t2184 * __this, const MethodInfo* method);
#define ListValues_get_IsSynchronized_m13414(__this, method) (( bool (*) (ListValues_t2184 *, const MethodInfo*))ListValues_get_IsSynchronized_m13414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::get_IsReadOnly()
extern "C" bool ListValues_get_IsReadOnly_m13415_gshared (ListValues_t2184 * __this, const MethodInfo* method);
#define ListValues_get_IsReadOnly_m13415(__this, method) (( bool (*) (ListValues_t2184 *, const MethodInfo*))ListValues_get_IsReadOnly_m13415_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::get_SyncRoot()
extern "C" Object_t * ListValues_get_SyncRoot_m13416_gshared (ListValues_t2184 * __this, const MethodInfo* method);
#define ListValues_get_SyncRoot_m13416(__this, method) (( Object_t * (*) (ListValues_t2184 *, const MethodInfo*))ListValues_get_SyncRoot_m13416_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Int32,PlayerManager/PlayerPreset>::CopyTo(System.Array,System.Int32)
extern "C" void ListValues_CopyTo_m13417_gshared (ListValues_t2184 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ListValues_CopyTo_m13417(__this, ___array, ___arrayIndex, method) (( void (*) (ListValues_t2184 *, Array_t *, int32_t, const MethodInfo*))ListValues_CopyTo_m13417_gshared)(__this, ___array, ___arrayIndex, method)
