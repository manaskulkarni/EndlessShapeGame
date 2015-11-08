#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t2573;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t2977;
// System.Single[]
struct SingleU5BU5D_t242;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t2978;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t2979;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t2575;
// System.Predicate`1<System.Single>
struct Predicate_1_t2581;
// System.Comparison`1<System.Single>
struct Comparison_1_t2582;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_40.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m18771_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1__ctor_m18771(__this, method) (( void (*) (List_1_t2573 *, const MethodInfo*))List_1__ctor_m18771_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m18772_gshared (List_1_t2573 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m18772(__this, ___collection, method) (( void (*) (List_1_t2573 *, Object_t*, const MethodInfo*))List_1__ctor_m18772_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18773_gshared (List_1_t2573 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18773(__this, ___capacity, method) (( void (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1__ctor_m18773_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m18774_gshared (List_1_t2573 * __this, SingleU5BU5D_t242* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m18774(__this, ___data, ___size, method) (( void (*) (List_1_t2573 *, SingleU5BU5D_t242*, int32_t, const MethodInfo*))List_1__ctor_m18774_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m18775_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18775(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18775_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18776_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18776(__this, method) (( Object_t* (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18776_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18777_gshared (List_1_t2573 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18777(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2573 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18777_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18778_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18778(__this, method) (( Object_t * (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18778_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18779_gshared (List_1_t2573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18779(__this, ___item, method) (( int32_t (*) (List_1_t2573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18779_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18780_gshared (List_1_t2573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18780(__this, ___item, method) (( bool (*) (List_1_t2573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18780_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18781_gshared (List_1_t2573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18781(__this, ___item, method) (( int32_t (*) (List_1_t2573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18781_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18782_gshared (List_1_t2573 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18782(__this, ___index, ___item, method) (( void (*) (List_1_t2573 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18782_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18783_gshared (List_1_t2573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18783(__this, ___item, method) (( void (*) (List_1_t2573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18783_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18784_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18784(__this, method) (( bool (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18784_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18785_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18785(__this, method) (( bool (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18785_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18786_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18786(__this, method) (( Object_t * (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18786_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18787_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18787(__this, method) (( bool (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18787_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18788_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18788(__this, method) (( bool (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18788_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18789_gshared (List_1_t2573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18789(__this, ___index, method) (( Object_t * (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18789_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18790_gshared (List_1_t2573 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18790(__this, ___index, ___value, method) (( void (*) (List_1_t2573 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18790_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m18791_gshared (List_1_t2573 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m18791(__this, ___item, method) (( void (*) (List_1_t2573 *, float, const MethodInfo*))List_1_Add_m18791_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18792_gshared (List_1_t2573 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18792(__this, ___newCount, method) (( void (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18792_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18793_gshared (List_1_t2573 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18793(__this, ___collection, method) (( void (*) (List_1_t2573 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18793_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18794_gshared (List_1_t2573 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18794(__this, ___enumerable, method) (( void (*) (List_1_t2573 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18794_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m18795_gshared (List_1_t2573 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m18795(__this, ___collection, method) (( void (*) (List_1_t2573 *, Object_t*, const MethodInfo*))List_1_AddRange_m18795_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2575 * List_1_AsReadOnly_m18796_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18796(__this, method) (( ReadOnlyCollection_1_t2575 * (*) (List_1_t2573 *, const MethodInfo*))List_1_AsReadOnly_m18796_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m18797_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_Clear_m18797(__this, method) (( void (*) (List_1_t2573 *, const MethodInfo*))List_1_Clear_m18797_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m18798_gshared (List_1_t2573 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m18798(__this, ___item, method) (( bool (*) (List_1_t2573 *, float, const MethodInfo*))List_1_Contains_m18798_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18799_gshared (List_1_t2573 * __this, SingleU5BU5D_t242* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18799(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2573 *, SingleU5BU5D_t242*, int32_t, const MethodInfo*))List_1_CopyTo_m18799_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m18800_gshared (List_1_t2573 * __this, Predicate_1_t2581 * ___match, const MethodInfo* method);
#define List_1_Find_m18800(__this, ___match, method) (( float (*) (List_1_t2573 *, Predicate_1_t2581 *, const MethodInfo*))List_1_Find_m18800_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18801_gshared (Object_t * __this /* static, unused */, Predicate_1_t2581 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18801(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2581 *, const MethodInfo*))List_1_CheckMatch_m18801_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t2573 * List_1_FindAll_m18802_gshared (List_1_t2573 * __this, Predicate_1_t2581 * ___match, const MethodInfo* method);
#define List_1_FindAll_m18802(__this, ___match, method) (( List_1_t2573 * (*) (List_1_t2573 *, Predicate_1_t2581 *, const MethodInfo*))List_1_FindAll_m18802_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t2573 * List_1_FindAllStackBits_m18803_gshared (List_1_t2573 * __this, Predicate_1_t2581 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m18803(__this, ___match, method) (( List_1_t2573 * (*) (List_1_t2573 *, Predicate_1_t2581 *, const MethodInfo*))List_1_FindAllStackBits_m18803_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t2573 * List_1_FindAllList_m18804_gshared (List_1_t2573 * __this, Predicate_1_t2581 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m18804(__this, ___match, method) (( List_1_t2573 * (*) (List_1_t2573 *, Predicate_1_t2581 *, const MethodInfo*))List_1_FindAllList_m18804_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18805_gshared (List_1_t2573 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2581 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18805(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2573 *, int32_t, int32_t, Predicate_1_t2581 *, const MethodInfo*))List_1_GetIndex_m18805_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t2574  List_1_GetEnumerator_m18806_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18806(__this, method) (( Enumerator_t2574  (*) (List_1_t2573 *, const MethodInfo*))List_1_GetEnumerator_m18806_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18807_gshared (List_1_t2573 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m18807(__this, ___item, method) (( int32_t (*) (List_1_t2573 *, float, const MethodInfo*))List_1_IndexOf_m18807_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18808_gshared (List_1_t2573 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18808(__this, ___start, ___delta, method) (( void (*) (List_1_t2573 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18808_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18809_gshared (List_1_t2573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18809(__this, ___index, method) (( void (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18809_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18810_gshared (List_1_t2573 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m18810(__this, ___index, ___item, method) (( void (*) (List_1_t2573 *, int32_t, float, const MethodInfo*))List_1_Insert_m18810_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18811_gshared (List_1_t2573 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18811(__this, ___collection, method) (( void (*) (List_1_t2573 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18811_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m18812_gshared (List_1_t2573 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m18812(__this, ___item, method) (( bool (*) (List_1_t2573 *, float, const MethodInfo*))List_1_Remove_m18812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18813_gshared (List_1_t2573 * __this, Predicate_1_t2581 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18813(__this, ___match, method) (( int32_t (*) (List_1_t2573 *, Predicate_1_t2581 *, const MethodInfo*))List_1_RemoveAll_m18813_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18814_gshared (List_1_t2573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18814(__this, ___index, method) (( void (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18814_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m18815_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_Reverse_m18815(__this, method) (( void (*) (List_1_t2573 *, const MethodInfo*))List_1_Reverse_m18815_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m18816_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_Sort_m18816(__this, method) (( void (*) (List_1_t2573 *, const MethodInfo*))List_1_Sort_m18816_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18817_gshared (List_1_t2573 * __this, Comparison_1_t2582 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18817(__this, ___comparison, method) (( void (*) (List_1_t2573 *, Comparison_1_t2582 *, const MethodInfo*))List_1_Sort_m18817_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t242* List_1_ToArray_m18818_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_ToArray_m18818(__this, method) (( SingleU5BU5D_t242* (*) (List_1_t2573 *, const MethodInfo*))List_1_ToArray_m18818_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m18819_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18819(__this, method) (( void (*) (List_1_t2573 *, const MethodInfo*))List_1_TrimExcess_m18819_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18820_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18820(__this, method) (( int32_t (*) (List_1_t2573 *, const MethodInfo*))List_1_get_Capacity_m18820_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18821_gshared (List_1_t2573 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18821(__this, ___value, method) (( void (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18821_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m18822_gshared (List_1_t2573 * __this, const MethodInfo* method);
#define List_1_get_Count_m18822(__this, method) (( int32_t (*) (List_1_t2573 *, const MethodInfo*))List_1_get_Count_m18822_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m18823_gshared (List_1_t2573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18823(__this, ___index, method) (( float (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_get_Item_m18823_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18824_gshared (List_1_t2573 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m18824(__this, ___index, ___value, method) (( void (*) (List_1_t2573 *, int32_t, float, const MethodInfo*))List_1_set_Item_m18824_gshared)(__this, ___index, ___value, method)
