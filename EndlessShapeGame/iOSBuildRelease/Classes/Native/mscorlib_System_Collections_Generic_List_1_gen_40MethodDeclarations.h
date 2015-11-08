#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t823;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2995;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t942;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2996;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2997;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2678;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2682;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2685;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_45.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m20263_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1__ctor_m20263(__this, method) (( void (*) (List_1_t823 *, const MethodInfo*))List_1__ctor_m20263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m20264_gshared (List_1_t823 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m20264(__this, ___collection, method) (( void (*) (List_1_t823 *, Object_t*, const MethodInfo*))List_1__ctor_m20264_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m5219_gshared (List_1_t823 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m5219(__this, ___capacity, method) (( void (*) (List_1_t823 *, int32_t, const MethodInfo*))List_1__ctor_m5219_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m20265_gshared (List_1_t823 * __this, UICharInfoU5BU5D_t942* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m20265(__this, ___data, ___size, method) (( void (*) (List_1_t823 *, UICharInfoU5BU5D_t942*, int32_t, const MethodInfo*))List_1__ctor_m20265_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m20266_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20266(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20266_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20267_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20267(__this, method) (( Object_t* (*) (List_1_t823 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20267_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20268_gshared (List_1_t823 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20268(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t823 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20268_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20269_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20269(__this, method) (( Object_t * (*) (List_1_t823 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20269_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20270_gshared (List_1_t823 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20270(__this, ___item, method) (( int32_t (*) (List_1_t823 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20270_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20271_gshared (List_1_t823 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20271(__this, ___item, method) (( bool (*) (List_1_t823 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20271_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20272_gshared (List_1_t823 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20272(__this, ___item, method) (( int32_t (*) (List_1_t823 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20272_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20273_gshared (List_1_t823 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20273(__this, ___index, ___item, method) (( void (*) (List_1_t823 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20273_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20274_gshared (List_1_t823 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20274(__this, ___item, method) (( void (*) (List_1_t823 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20274_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20275_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20275(__this, method) (( bool (*) (List_1_t823 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20275_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m20276_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20276(__this, method) (( bool (*) (List_1_t823 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20276_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20277_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20277(__this, method) (( Object_t * (*) (List_1_t823 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20277_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m20278_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m20278(__this, method) (( bool (*) (List_1_t823 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20278_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m20279_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m20279(__this, method) (( bool (*) (List_1_t823 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20279_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20280_gshared (List_1_t823 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20280(__this, ___index, method) (( Object_t * (*) (List_1_t823 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20280_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20281_gshared (List_1_t823 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20281(__this, ___index, ___value, method) (( void (*) (List_1_t823 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20281_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m20282_gshared (List_1_t823 * __this, UICharInfo_t557  ___item, const MethodInfo* method);
#define List_1_Add_m20282(__this, ___item, method) (( void (*) (List_1_t823 *, UICharInfo_t557 , const MethodInfo*))List_1_Add_m20282_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20283_gshared (List_1_t823 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m20283(__this, ___newCount, method) (( void (*) (List_1_t823 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20283_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20284_gshared (List_1_t823 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m20284(__this, ___collection, method) (( void (*) (List_1_t823 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20284_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20285_gshared (List_1_t823 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m20285(__this, ___enumerable, method) (( void (*) (List_1_t823 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20285_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m20286_gshared (List_1_t823 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m20286(__this, ___collection, method) (( void (*) (List_1_t823 *, Object_t*, const MethodInfo*))List_1_AddRange_m20286_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2678 * List_1_AsReadOnly_m20287_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m20287(__this, method) (( ReadOnlyCollection_1_t2678 * (*) (List_1_t823 *, const MethodInfo*))List_1_AsReadOnly_m20287_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m20288_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_Clear_m20288(__this, method) (( void (*) (List_1_t823 *, const MethodInfo*))List_1_Clear_m20288_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m20289_gshared (List_1_t823 * __this, UICharInfo_t557  ___item, const MethodInfo* method);
#define List_1_Contains_m20289(__this, ___item, method) (( bool (*) (List_1_t823 *, UICharInfo_t557 , const MethodInfo*))List_1_Contains_m20289_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20290_gshared (List_1_t823 * __this, UICharInfoU5BU5D_t942* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m20290(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t823 *, UICharInfoU5BU5D_t942*, int32_t, const MethodInfo*))List_1_CopyTo_m20290_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t557  List_1_Find_m20291_gshared (List_1_t823 * __this, Predicate_1_t2682 * ___match, const MethodInfo* method);
#define List_1_Find_m20291(__this, ___match, method) (( UICharInfo_t557  (*) (List_1_t823 *, Predicate_1_t2682 *, const MethodInfo*))List_1_Find_m20291_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m20292_gshared (Object_t * __this /* static, unused */, Predicate_1_t2682 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m20292(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2682 *, const MethodInfo*))List_1_CheckMatch_m20292_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t823 * List_1_FindAll_m20293_gshared (List_1_t823 * __this, Predicate_1_t2682 * ___match, const MethodInfo* method);
#define List_1_FindAll_m20293(__this, ___match, method) (( List_1_t823 * (*) (List_1_t823 *, Predicate_1_t2682 *, const MethodInfo*))List_1_FindAll_m20293_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t823 * List_1_FindAllStackBits_m20294_gshared (List_1_t823 * __this, Predicate_1_t2682 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m20294(__this, ___match, method) (( List_1_t823 * (*) (List_1_t823 *, Predicate_1_t2682 *, const MethodInfo*))List_1_FindAllStackBits_m20294_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t823 * List_1_FindAllList_m20295_gshared (List_1_t823 * __this, Predicate_1_t2682 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m20295(__this, ___match, method) (( List_1_t823 * (*) (List_1_t823 *, Predicate_1_t2682 *, const MethodInfo*))List_1_FindAllList_m20295_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m20296_gshared (List_1_t823 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2682 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m20296(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t823 *, int32_t, int32_t, Predicate_1_t2682 *, const MethodInfo*))List_1_GetIndex_m20296_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2677  List_1_GetEnumerator_m20297_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m20297(__this, method) (( Enumerator_t2677  (*) (List_1_t823 *, const MethodInfo*))List_1_GetEnumerator_m20297_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20298_gshared (List_1_t823 * __this, UICharInfo_t557  ___item, const MethodInfo* method);
#define List_1_IndexOf_m20298(__this, ___item, method) (( int32_t (*) (List_1_t823 *, UICharInfo_t557 , const MethodInfo*))List_1_IndexOf_m20298_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20299_gshared (List_1_t823 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m20299(__this, ___start, ___delta, method) (( void (*) (List_1_t823 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20299_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20300_gshared (List_1_t823 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m20300(__this, ___index, method) (( void (*) (List_1_t823 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20300_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20301_gshared (List_1_t823 * __this, int32_t ___index, UICharInfo_t557  ___item, const MethodInfo* method);
#define List_1_Insert_m20301(__this, ___index, ___item, method) (( void (*) (List_1_t823 *, int32_t, UICharInfo_t557 , const MethodInfo*))List_1_Insert_m20301_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20302_gshared (List_1_t823 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m20302(__this, ___collection, method) (( void (*) (List_1_t823 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20302_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m20303_gshared (List_1_t823 * __this, UICharInfo_t557  ___item, const MethodInfo* method);
#define List_1_Remove_m20303(__this, ___item, method) (( bool (*) (List_1_t823 *, UICharInfo_t557 , const MethodInfo*))List_1_Remove_m20303_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m20304_gshared (List_1_t823 * __this, Predicate_1_t2682 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m20304(__this, ___match, method) (( int32_t (*) (List_1_t823 *, Predicate_1_t2682 *, const MethodInfo*))List_1_RemoveAll_m20304_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20305_gshared (List_1_t823 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m20305(__this, ___index, method) (( void (*) (List_1_t823 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20305_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m20306_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_Reverse_m20306(__this, method) (( void (*) (List_1_t823 *, const MethodInfo*))List_1_Reverse_m20306_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m20307_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_Sort_m20307(__this, method) (( void (*) (List_1_t823 *, const MethodInfo*))List_1_Sort_m20307_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20308_gshared (List_1_t823 * __this, Comparison_1_t2685 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m20308(__this, ___comparison, method) (( void (*) (List_1_t823 *, Comparison_1_t2685 *, const MethodInfo*))List_1_Sort_m20308_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t942* List_1_ToArray_m20309_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_ToArray_m20309(__this, method) (( UICharInfoU5BU5D_t942* (*) (List_1_t823 *, const MethodInfo*))List_1_ToArray_m20309_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m20310_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m20310(__this, method) (( void (*) (List_1_t823 *, const MethodInfo*))List_1_TrimExcess_m20310_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20311_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m20311(__this, method) (( int32_t (*) (List_1_t823 *, const MethodInfo*))List_1_get_Capacity_m20311_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20312_gshared (List_1_t823 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m20312(__this, ___value, method) (( void (*) (List_1_t823 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20312_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m20313_gshared (List_1_t823 * __this, const MethodInfo* method);
#define List_1_get_Count_m20313(__this, method) (( int32_t (*) (List_1_t823 *, const MethodInfo*))List_1_get_Count_m20313_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t557  List_1_get_Item_m20314_gshared (List_1_t823 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m20314(__this, ___index, method) (( UICharInfo_t557  (*) (List_1_t823 *, int32_t, const MethodInfo*))List_1_get_Item_m20314_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20315_gshared (List_1_t823 * __this, int32_t ___index, UICharInfo_t557  ___value, const MethodInfo* method);
#define List_1_set_Item_m20315(__this, ___index, ___value, method) (( void (*) (List_1_t823 *, int32_t, UICharInfo_t557 , const MethodInfo*))List_1_set_Item_m20315_gshared)(__this, ___index, ___value, method)
