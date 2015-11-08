#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t824;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2998;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t943;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2999;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t559;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2687;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2691;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2694;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_46.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m20410_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1__ctor_m20410(__this, method) (( void (*) (List_1_t824 *, const MethodInfo*))List_1__ctor_m20410_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m20411_gshared (List_1_t824 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m20411(__this, ___collection, method) (( void (*) (List_1_t824 *, Object_t*, const MethodInfo*))List_1__ctor_m20411_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m5220_gshared (List_1_t824 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m5220(__this, ___capacity, method) (( void (*) (List_1_t824 *, int32_t, const MethodInfo*))List_1__ctor_m5220_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m20412_gshared (List_1_t824 * __this, UILineInfoU5BU5D_t943* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m20412(__this, ___data, ___size, method) (( void (*) (List_1_t824 *, UILineInfoU5BU5D_t943*, int32_t, const MethodInfo*))List_1__ctor_m20412_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m20413_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20413(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20413_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20414_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20414(__this, method) (( Object_t* (*) (List_1_t824 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20414_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20415_gshared (List_1_t824 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20415(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t824 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20415_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20416_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20416(__this, method) (( Object_t * (*) (List_1_t824 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20416_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20417_gshared (List_1_t824 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20417(__this, ___item, method) (( int32_t (*) (List_1_t824 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20417_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20418_gshared (List_1_t824 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20418(__this, ___item, method) (( bool (*) (List_1_t824 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20418_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20419_gshared (List_1_t824 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20419(__this, ___item, method) (( int32_t (*) (List_1_t824 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20419_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20420_gshared (List_1_t824 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20420(__this, ___index, ___item, method) (( void (*) (List_1_t824 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20420_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20421_gshared (List_1_t824 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20421(__this, ___item, method) (( void (*) (List_1_t824 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20421_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20422_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20422(__this, method) (( bool (*) (List_1_t824 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m20423_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20423(__this, method) (( bool (*) (List_1_t824 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20423_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20424_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20424(__this, method) (( Object_t * (*) (List_1_t824 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20424_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m20425_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m20425(__this, method) (( bool (*) (List_1_t824 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m20426_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m20426(__this, method) (( bool (*) (List_1_t824 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20426_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20427_gshared (List_1_t824 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20427(__this, ___index, method) (( Object_t * (*) (List_1_t824 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20427_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20428_gshared (List_1_t824 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20428(__this, ___index, ___value, method) (( void (*) (List_1_t824 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20428_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m20429_gshared (List_1_t824 * __this, UILineInfo_t555  ___item, const MethodInfo* method);
#define List_1_Add_m20429(__this, ___item, method) (( void (*) (List_1_t824 *, UILineInfo_t555 , const MethodInfo*))List_1_Add_m20429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20430_gshared (List_1_t824 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m20430(__this, ___newCount, method) (( void (*) (List_1_t824 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20430_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20431_gshared (List_1_t824 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m20431(__this, ___collection, method) (( void (*) (List_1_t824 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20431_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20432_gshared (List_1_t824 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m20432(__this, ___enumerable, method) (( void (*) (List_1_t824 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20432_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m20433_gshared (List_1_t824 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m20433(__this, ___collection, method) (( void (*) (List_1_t824 *, Object_t*, const MethodInfo*))List_1_AddRange_m20433_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2687 * List_1_AsReadOnly_m20434_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m20434(__this, method) (( ReadOnlyCollection_1_t2687 * (*) (List_1_t824 *, const MethodInfo*))List_1_AsReadOnly_m20434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m20435_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_Clear_m20435(__this, method) (( void (*) (List_1_t824 *, const MethodInfo*))List_1_Clear_m20435_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m20436_gshared (List_1_t824 * __this, UILineInfo_t555  ___item, const MethodInfo* method);
#define List_1_Contains_m20436(__this, ___item, method) (( bool (*) (List_1_t824 *, UILineInfo_t555 , const MethodInfo*))List_1_Contains_m20436_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20437_gshared (List_1_t824 * __this, UILineInfoU5BU5D_t943* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m20437(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t824 *, UILineInfoU5BU5D_t943*, int32_t, const MethodInfo*))List_1_CopyTo_m20437_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t555  List_1_Find_m20438_gshared (List_1_t824 * __this, Predicate_1_t2691 * ___match, const MethodInfo* method);
#define List_1_Find_m20438(__this, ___match, method) (( UILineInfo_t555  (*) (List_1_t824 *, Predicate_1_t2691 *, const MethodInfo*))List_1_Find_m20438_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m20439_gshared (Object_t * __this /* static, unused */, Predicate_1_t2691 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m20439(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2691 *, const MethodInfo*))List_1_CheckMatch_m20439_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t824 * List_1_FindAll_m20440_gshared (List_1_t824 * __this, Predicate_1_t2691 * ___match, const MethodInfo* method);
#define List_1_FindAll_m20440(__this, ___match, method) (( List_1_t824 * (*) (List_1_t824 *, Predicate_1_t2691 *, const MethodInfo*))List_1_FindAll_m20440_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t824 * List_1_FindAllStackBits_m20441_gshared (List_1_t824 * __this, Predicate_1_t2691 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m20441(__this, ___match, method) (( List_1_t824 * (*) (List_1_t824 *, Predicate_1_t2691 *, const MethodInfo*))List_1_FindAllStackBits_m20441_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t824 * List_1_FindAllList_m20442_gshared (List_1_t824 * __this, Predicate_1_t2691 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m20442(__this, ___match, method) (( List_1_t824 * (*) (List_1_t824 *, Predicate_1_t2691 *, const MethodInfo*))List_1_FindAllList_m20442_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m20443_gshared (List_1_t824 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2691 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m20443(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t824 *, int32_t, int32_t, Predicate_1_t2691 *, const MethodInfo*))List_1_GetIndex_m20443_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2686  List_1_GetEnumerator_m20444_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m20444(__this, method) (( Enumerator_t2686  (*) (List_1_t824 *, const MethodInfo*))List_1_GetEnumerator_m20444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20445_gshared (List_1_t824 * __this, UILineInfo_t555  ___item, const MethodInfo* method);
#define List_1_IndexOf_m20445(__this, ___item, method) (( int32_t (*) (List_1_t824 *, UILineInfo_t555 , const MethodInfo*))List_1_IndexOf_m20445_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20446_gshared (List_1_t824 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m20446(__this, ___start, ___delta, method) (( void (*) (List_1_t824 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20446_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20447_gshared (List_1_t824 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m20447(__this, ___index, method) (( void (*) (List_1_t824 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20447_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20448_gshared (List_1_t824 * __this, int32_t ___index, UILineInfo_t555  ___item, const MethodInfo* method);
#define List_1_Insert_m20448(__this, ___index, ___item, method) (( void (*) (List_1_t824 *, int32_t, UILineInfo_t555 , const MethodInfo*))List_1_Insert_m20448_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20449_gshared (List_1_t824 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m20449(__this, ___collection, method) (( void (*) (List_1_t824 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20449_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m20450_gshared (List_1_t824 * __this, UILineInfo_t555  ___item, const MethodInfo* method);
#define List_1_Remove_m20450(__this, ___item, method) (( bool (*) (List_1_t824 *, UILineInfo_t555 , const MethodInfo*))List_1_Remove_m20450_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m20451_gshared (List_1_t824 * __this, Predicate_1_t2691 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m20451(__this, ___match, method) (( int32_t (*) (List_1_t824 *, Predicate_1_t2691 *, const MethodInfo*))List_1_RemoveAll_m20451_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20452_gshared (List_1_t824 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m20452(__this, ___index, method) (( void (*) (List_1_t824 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20452_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m20453_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_Reverse_m20453(__this, method) (( void (*) (List_1_t824 *, const MethodInfo*))List_1_Reverse_m20453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m20454_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_Sort_m20454(__this, method) (( void (*) (List_1_t824 *, const MethodInfo*))List_1_Sort_m20454_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20455_gshared (List_1_t824 * __this, Comparison_1_t2694 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m20455(__this, ___comparison, method) (( void (*) (List_1_t824 *, Comparison_1_t2694 *, const MethodInfo*))List_1_Sort_m20455_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t943* List_1_ToArray_m20456_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_ToArray_m20456(__this, method) (( UILineInfoU5BU5D_t943* (*) (List_1_t824 *, const MethodInfo*))List_1_ToArray_m20456_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m20457_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m20457(__this, method) (( void (*) (List_1_t824 *, const MethodInfo*))List_1_TrimExcess_m20457_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20458_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m20458(__this, method) (( int32_t (*) (List_1_t824 *, const MethodInfo*))List_1_get_Capacity_m20458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20459_gshared (List_1_t824 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m20459(__this, ___value, method) (( void (*) (List_1_t824 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20459_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m20460_gshared (List_1_t824 * __this, const MethodInfo* method);
#define List_1_get_Count_m20460(__this, method) (( int32_t (*) (List_1_t824 *, const MethodInfo*))List_1_get_Count_m20460_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t555  List_1_get_Item_m20461_gshared (List_1_t824 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m20461(__this, ___index, method) (( UILineInfo_t555  (*) (List_1_t824 *, int32_t, const MethodInfo*))List_1_get_Item_m20461_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20462_gshared (List_1_t824 * __this, int32_t ___index, UILineInfo_t555  ___value, const MethodInfo* method);
#define List_1_set_Item_m20462(__this, ___index, ___value, method) (( void (*) (List_1_t824 *, int32_t, UILineInfo_t555 , const MethodInfo*))List_1_set_Item_m20462_gshared)(__this, ___index, ___value, method)
