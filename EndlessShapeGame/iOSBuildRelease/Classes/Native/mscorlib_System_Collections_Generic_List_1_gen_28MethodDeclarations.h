#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t477;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_t2956;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t585;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>
struct IEnumerator_1_t2957;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector4>
struct ICollection_1_t2958;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>
struct ReadOnlyCollection_1_t2509;
// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2514;
// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t2517;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
extern "C" void List_1__ctor_m17788_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1__ctor_m17788(__this, method) (( void (*) (List_1_t477 *, const MethodInfo*))List_1__ctor_m17788_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17789_gshared (List_1_t477 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17789(__this, ___collection, method) (( void (*) (List_1_t477 *, Object_t*, const MethodInfo*))List_1__ctor_m17789_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17790_gshared (List_1_t477 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17790(__this, ___capacity, method) (( void (*) (List_1_t477 *, int32_t, const MethodInfo*))List_1__ctor_m17790_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m17791_gshared (List_1_t477 * __this, Vector4U5BU5D_t585* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m17791(__this, ___data, ___size, method) (( void (*) (List_1_t477 *, Vector4U5BU5D_t585*, int32_t, const MethodInfo*))List_1__ctor_m17791_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.cctor()
extern "C" void List_1__cctor_m17792_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17792(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17792_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17793_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17793(__this, method) (( Object_t* (*) (List_1_t477 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17793_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17794_gshared (List_1_t477 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17794(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t477 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17794_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17795_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17795(__this, method) (( Object_t * (*) (List_1_t477 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17795_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17796_gshared (List_1_t477 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17796(__this, ___item, method) (( int32_t (*) (List_1_t477 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17796_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17797_gshared (List_1_t477 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17797(__this, ___item, method) (( bool (*) (List_1_t477 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17797_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17798_gshared (List_1_t477 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17798(__this, ___item, method) (( int32_t (*) (List_1_t477 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17798_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17799_gshared (List_1_t477 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17799(__this, ___index, ___item, method) (( void (*) (List_1_t477 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17799_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17800_gshared (List_1_t477 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17800(__this, ___item, method) (( void (*) (List_1_t477 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17800_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17801_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17801(__this, method) (( bool (*) (List_1_t477 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17801_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17802_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17802(__this, method) (( bool (*) (List_1_t477 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17802_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17803_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17803(__this, method) (( Object_t * (*) (List_1_t477 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17804_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17804(__this, method) (( bool (*) (List_1_t477 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17804_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17805_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17805(__this, method) (( bool (*) (List_1_t477 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17805_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17806_gshared (List_1_t477 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17806(__this, ___index, method) (( Object_t * (*) (List_1_t477 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17806_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17807_gshared (List_1_t477 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17807(__this, ___index, ___value, method) (( void (*) (List_1_t477 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17807_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T)
extern "C" void List_1_Add_m17808_gshared (List_1_t477 * __this, Vector4_t100  ___item, const MethodInfo* method);
#define List_1_Add_m17808(__this, ___item, method) (( void (*) (List_1_t477 *, Vector4_t100 , const MethodInfo*))List_1_Add_m17808_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17809_gshared (List_1_t477 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17809(__this, ___newCount, method) (( void (*) (List_1_t477 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17809_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17810_gshared (List_1_t477 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17810(__this, ___collection, method) (( void (*) (List_1_t477 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17810_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17811_gshared (List_1_t477 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17811(__this, ___enumerable, method) (( void (*) (List_1_t477 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17811_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3168_gshared (List_1_t477 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3168(__this, ___collection, method) (( void (*) (List_1_t477 *, Object_t*, const MethodInfo*))List_1_AddRange_m3168_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2509 * List_1_AsReadOnly_m17812_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17812(__this, method) (( ReadOnlyCollection_1_t2509 * (*) (List_1_t477 *, const MethodInfo*))List_1_AsReadOnly_m17812_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Clear()
extern "C" void List_1_Clear_m17813_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_Clear_m17813(__this, method) (( void (*) (List_1_t477 *, const MethodInfo*))List_1_Clear_m17813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::Contains(T)
extern "C" bool List_1_Contains_m17814_gshared (List_1_t477 * __this, Vector4_t100  ___item, const MethodInfo* method);
#define List_1_Contains_m17814(__this, ___item, method) (( bool (*) (List_1_t477 *, Vector4_t100 , const MethodInfo*))List_1_Contains_m17814_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17815_gshared (List_1_t477 * __this, Vector4U5BU5D_t585* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17815(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t477 *, Vector4U5BU5D_t585*, int32_t, const MethodInfo*))List_1_CopyTo_m17815_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::Find(System.Predicate`1<T>)
extern "C" Vector4_t100  List_1_Find_m17816_gshared (List_1_t477 * __this, Predicate_1_t2514 * ___match, const MethodInfo* method);
#define List_1_Find_m17816(__this, ___match, method) (( Vector4_t100  (*) (List_1_t477 *, Predicate_1_t2514 *, const MethodInfo*))List_1_Find_m17816_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17817_gshared (Object_t * __this /* static, unused */, Predicate_1_t2514 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17817(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2514 *, const MethodInfo*))List_1_CheckMatch_m17817_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t477 * List_1_FindAll_m17818_gshared (List_1_t477 * __this, Predicate_1_t2514 * ___match, const MethodInfo* method);
#define List_1_FindAll_m17818(__this, ___match, method) (( List_1_t477 * (*) (List_1_t477 *, Predicate_1_t2514 *, const MethodInfo*))List_1_FindAll_m17818_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t477 * List_1_FindAllStackBits_m17819_gshared (List_1_t477 * __this, Predicate_1_t2514 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m17819(__this, ___match, method) (( List_1_t477 * (*) (List_1_t477 *, Predicate_1_t2514 *, const MethodInfo*))List_1_FindAllStackBits_m17819_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t477 * List_1_FindAllList_m17820_gshared (List_1_t477 * __this, Predicate_1_t2514 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m17820(__this, ___match, method) (( List_1_t477 * (*) (List_1_t477 *, Predicate_1_t2514 *, const MethodInfo*))List_1_FindAllList_m17820_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17821_gshared (List_1_t477 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2514 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17821(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t477 *, int32_t, int32_t, Predicate_1_t2514 *, const MethodInfo*))List_1_GetIndex_m17821_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::GetEnumerator()
extern "C" Enumerator_t2508  List_1_GetEnumerator_m17822_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17822(__this, method) (( Enumerator_t2508  (*) (List_1_t477 *, const MethodInfo*))List_1_GetEnumerator_m17822_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17823_gshared (List_1_t477 * __this, Vector4_t100  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17823(__this, ___item, method) (( int32_t (*) (List_1_t477 *, Vector4_t100 , const MethodInfo*))List_1_IndexOf_m17823_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17824_gshared (List_1_t477 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17824(__this, ___start, ___delta, method) (( void (*) (List_1_t477 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17824_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17825_gshared (List_1_t477 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17825(__this, ___index, method) (( void (*) (List_1_t477 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17825_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17826_gshared (List_1_t477 * __this, int32_t ___index, Vector4_t100  ___item, const MethodInfo* method);
#define List_1_Insert_m17826(__this, ___index, ___item, method) (( void (*) (List_1_t477 *, int32_t, Vector4_t100 , const MethodInfo*))List_1_Insert_m17826_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17827_gshared (List_1_t477 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17827(__this, ___collection, method) (( void (*) (List_1_t477 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17827_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::Remove(T)
extern "C" bool List_1_Remove_m17828_gshared (List_1_t477 * __this, Vector4_t100  ___item, const MethodInfo* method);
#define List_1_Remove_m17828(__this, ___item, method) (( bool (*) (List_1_t477 *, Vector4_t100 , const MethodInfo*))List_1_Remove_m17828_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17829_gshared (List_1_t477 * __this, Predicate_1_t2514 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17829(__this, ___match, method) (( int32_t (*) (List_1_t477 *, Predicate_1_t2514 *, const MethodInfo*))List_1_RemoveAll_m17829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17830_gshared (List_1_t477 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17830(__this, ___index, method) (( void (*) (List_1_t477 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17830_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Reverse()
extern "C" void List_1_Reverse_m17831_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_Reverse_m17831(__this, method) (( void (*) (List_1_t477 *, const MethodInfo*))List_1_Reverse_m17831_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Sort()
extern "C" void List_1_Sort_m17832_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_Sort_m17832(__this, method) (( void (*) (List_1_t477 *, const MethodInfo*))List_1_Sort_m17832_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17833_gshared (List_1_t477 * __this, Comparison_1_t2517 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17833(__this, ___comparison, method) (( void (*) (List_1_t477 *, Comparison_1_t2517 *, const MethodInfo*))List_1_Sort_m17833_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector4>::ToArray()
extern "C" Vector4U5BU5D_t585* List_1_ToArray_m17834_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_ToArray_m17834(__this, method) (( Vector4U5BU5D_t585* (*) (List_1_t477 *, const MethodInfo*))List_1_ToArray_m17834_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::TrimExcess()
extern "C" void List_1_TrimExcess_m17835_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17835(__this, method) (( void (*) (List_1_t477 *, const MethodInfo*))List_1_TrimExcess_m17835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17836_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17836(__this, method) (( int32_t (*) (List_1_t477 *, const MethodInfo*))List_1_get_Capacity_m17836_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17837_gshared (List_1_t477 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17837(__this, ___value, method) (( void (*) (List_1_t477 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17837_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Count()
extern "C" int32_t List_1_get_Count_m17838_gshared (List_1_t477 * __this, const MethodInfo* method);
#define List_1_get_Count_m17838(__this, method) (( int32_t (*) (List_1_t477 *, const MethodInfo*))List_1_get_Count_m17838_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
extern "C" Vector4_t100  List_1_get_Item_m17839_gshared (List_1_t477 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17839(__this, ___index, method) (( Vector4_t100  (*) (List_1_t477 *, int32_t, const MethodInfo*))List_1_get_Item_m17839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17840_gshared (List_1_t477 * __this, int32_t ___index, Vector4_t100  ___value, const MethodInfo* method);
#define List_1_set_Item_m17840(__this, ___index, ___value, method) (( void (*) (List_1_t477 *, int32_t, Vector4_t100 , const MethodInfo*))List_1_set_Item_m17840_gshared)(__this, ___index, ___value, method)
