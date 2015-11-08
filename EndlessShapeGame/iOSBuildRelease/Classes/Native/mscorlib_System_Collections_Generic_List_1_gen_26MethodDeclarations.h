#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t475;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>
struct IEnumerable_1_t2952;
// UnityEngine.Color32[]
struct Color32U5BU5D_t584;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color32>
struct IEnumerator_1_t2953;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Color32>
struct ICollection_1_t2954;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>
struct ReadOnlyCollection_1_t2488;
// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t2493;
// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t2496;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor()
extern "C" void List_1__ctor_m17489_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1__ctor_m17489(__this, method) (( void (*) (List_1_t475 *, const MethodInfo*))List_1__ctor_m17489_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17490_gshared (List_1_t475 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17490(__this, ___collection, method) (( void (*) (List_1_t475 *, Object_t*, const MethodInfo*))List_1__ctor_m17490_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17491_gshared (List_1_t475 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17491(__this, ___capacity, method) (( void (*) (List_1_t475 *, int32_t, const MethodInfo*))List_1__ctor_m17491_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m17492_gshared (List_1_t475 * __this, Color32U5BU5D_t584* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m17492(__this, ___data, ___size, method) (( void (*) (List_1_t475 *, Color32U5BU5D_t584*, int32_t, const MethodInfo*))List_1__ctor_m17492_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.cctor()
extern "C" void List_1__cctor_m17493_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17493(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17493_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17494_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17494(__this, method) (( Object_t* (*) (List_1_t475 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17494_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17495_gshared (List_1_t475 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17495(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t475 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17495_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17496_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17496(__this, method) (( Object_t * (*) (List_1_t475 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17496_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17497_gshared (List_1_t475 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17497(__this, ___item, method) (( int32_t (*) (List_1_t475 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17497_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17498_gshared (List_1_t475 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17498(__this, ___item, method) (( bool (*) (List_1_t475 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17498_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17499_gshared (List_1_t475 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17499(__this, ___item, method) (( int32_t (*) (List_1_t475 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17499_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17500_gshared (List_1_t475 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17500(__this, ___index, ___item, method) (( void (*) (List_1_t475 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17500_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17501_gshared (List_1_t475 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17501(__this, ___item, method) (( void (*) (List_1_t475 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17501_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17502_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17502(__this, method) (( bool (*) (List_1_t475 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17503_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17503(__this, method) (( bool (*) (List_1_t475 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17504_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17504(__this, method) (( Object_t * (*) (List_1_t475 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17504_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17505_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17505(__this, method) (( bool (*) (List_1_t475 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17506_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17506(__this, method) (( bool (*) (List_1_t475 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17506_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17507_gshared (List_1_t475 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17507(__this, ___index, method) (( Object_t * (*) (List_1_t475 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17508_gshared (List_1_t475 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17508(__this, ___index, ___value, method) (( void (*) (List_1_t475 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17508_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(T)
extern "C" void List_1_Add_m17509_gshared (List_1_t475 * __this, Color32_t510  ___item, const MethodInfo* method);
#define List_1_Add_m17509(__this, ___item, method) (( void (*) (List_1_t475 *, Color32_t510 , const MethodInfo*))List_1_Add_m17509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17510_gshared (List_1_t475 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17510(__this, ___newCount, method) (( void (*) (List_1_t475 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17510_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17511_gshared (List_1_t475 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17511(__this, ___collection, method) (( void (*) (List_1_t475 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17511_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17512_gshared (List_1_t475 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17512(__this, ___enumerable, method) (( void (*) (List_1_t475 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17512_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3162_gshared (List_1_t475 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3162(__this, ___collection, method) (( void (*) (List_1_t475 *, Object_t*, const MethodInfo*))List_1_AddRange_m3162_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2488 * List_1_AsReadOnly_m17513_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17513(__this, method) (( ReadOnlyCollection_1_t2488 * (*) (List_1_t475 *, const MethodInfo*))List_1_AsReadOnly_m17513_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
extern "C" void List_1_Clear_m17514_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_Clear_m17514(__this, method) (( void (*) (List_1_t475 *, const MethodInfo*))List_1_Clear_m17514_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Contains(T)
extern "C" bool List_1_Contains_m17515_gshared (List_1_t475 * __this, Color32_t510  ___item, const MethodInfo* method);
#define List_1_Contains_m17515(__this, ___item, method) (( bool (*) (List_1_t475 *, Color32_t510 , const MethodInfo*))List_1_Contains_m17515_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17516_gshared (List_1_t475 * __this, Color32U5BU5D_t584* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17516(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t475 *, Color32U5BU5D_t584*, int32_t, const MethodInfo*))List_1_CopyTo_m17516_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::Find(System.Predicate`1<T>)
extern "C" Color32_t510  List_1_Find_m17517_gshared (List_1_t475 * __this, Predicate_1_t2493 * ___match, const MethodInfo* method);
#define List_1_Find_m17517(__this, ___match, method) (( Color32_t510  (*) (List_1_t475 *, Predicate_1_t2493 *, const MethodInfo*))List_1_Find_m17517_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17518_gshared (Object_t * __this /* static, unused */, Predicate_1_t2493 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17518(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2493 *, const MethodInfo*))List_1_CheckMatch_m17518_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t475 * List_1_FindAll_m17519_gshared (List_1_t475 * __this, Predicate_1_t2493 * ___match, const MethodInfo* method);
#define List_1_FindAll_m17519(__this, ___match, method) (( List_1_t475 * (*) (List_1_t475 *, Predicate_1_t2493 *, const MethodInfo*))List_1_FindAll_m17519_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t475 * List_1_FindAllStackBits_m17520_gshared (List_1_t475 * __this, Predicate_1_t2493 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m17520(__this, ___match, method) (( List_1_t475 * (*) (List_1_t475 *, Predicate_1_t2493 *, const MethodInfo*))List_1_FindAllStackBits_m17520_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t475 * List_1_FindAllList_m17521_gshared (List_1_t475 * __this, Predicate_1_t2493 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m17521(__this, ___match, method) (( List_1_t475 * (*) (List_1_t475 *, Predicate_1_t2493 *, const MethodInfo*))List_1_FindAllList_m17521_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17522_gshared (List_1_t475 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2493 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17522(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t475 *, int32_t, int32_t, Predicate_1_t2493 *, const MethodInfo*))List_1_GetIndex_m17522_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Enumerator_t2487  List_1_GetEnumerator_m17523_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17523(__this, method) (( Enumerator_t2487  (*) (List_1_t475 *, const MethodInfo*))List_1_GetEnumerator_m17523_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17524_gshared (List_1_t475 * __this, Color32_t510  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17524(__this, ___item, method) (( int32_t (*) (List_1_t475 *, Color32_t510 , const MethodInfo*))List_1_IndexOf_m17524_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17525_gshared (List_1_t475 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17525(__this, ___start, ___delta, method) (( void (*) (List_1_t475 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17525_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17526_gshared (List_1_t475 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17526(__this, ___index, method) (( void (*) (List_1_t475 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17526_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17527_gshared (List_1_t475 * __this, int32_t ___index, Color32_t510  ___item, const MethodInfo* method);
#define List_1_Insert_m17527(__this, ___index, ___item, method) (( void (*) (List_1_t475 *, int32_t, Color32_t510 , const MethodInfo*))List_1_Insert_m17527_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17528_gshared (List_1_t475 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17528(__this, ___collection, method) (( void (*) (List_1_t475 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17528_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Remove(T)
extern "C" bool List_1_Remove_m17529_gshared (List_1_t475 * __this, Color32_t510  ___item, const MethodInfo* method);
#define List_1_Remove_m17529(__this, ___item, method) (( bool (*) (List_1_t475 *, Color32_t510 , const MethodInfo*))List_1_Remove_m17529_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17530_gshared (List_1_t475 * __this, Predicate_1_t2493 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17530(__this, ___match, method) (( int32_t (*) (List_1_t475 *, Predicate_1_t2493 *, const MethodInfo*))List_1_RemoveAll_m17530_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17531_gshared (List_1_t475 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17531(__this, ___index, method) (( void (*) (List_1_t475 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17531_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Reverse()
extern "C" void List_1_Reverse_m17532_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_Reverse_m17532(__this, method) (( void (*) (List_1_t475 *, const MethodInfo*))List_1_Reverse_m17532_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort()
extern "C" void List_1_Sort_m17533_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_Sort_m17533(__this, method) (( void (*) (List_1_t475 *, const MethodInfo*))List_1_Sort_m17533_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17534_gshared (List_1_t475 * __this, Comparison_1_t2496 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17534(__this, ___comparison, method) (( void (*) (List_1_t475 *, Comparison_1_t2496 *, const MethodInfo*))List_1_Sort_m17534_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Color32>::ToArray()
extern "C" Color32U5BU5D_t584* List_1_ToArray_m17535_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_ToArray_m17535(__this, method) (( Color32U5BU5D_t584* (*) (List_1_t475 *, const MethodInfo*))List_1_ToArray_m17535_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::TrimExcess()
extern "C" void List_1_TrimExcess_m17536_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17536(__this, method) (( void (*) (List_1_t475 *, const MethodInfo*))List_1_TrimExcess_m17536_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17537_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17537(__this, method) (( int32_t (*) (List_1_t475 *, const MethodInfo*))List_1_get_Capacity_m17537_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17538_gshared (List_1_t475 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17538(__this, ___value, method) (( void (*) (List_1_t475 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17538_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Count()
extern "C" int32_t List_1_get_Count_m17539_gshared (List_1_t475 * __this, const MethodInfo* method);
#define List_1_get_Count_m17539(__this, method) (( int32_t (*) (List_1_t475 *, const MethodInfo*))List_1_get_Count_m17539_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C" Color32_t510  List_1_get_Item_m17540_gshared (List_1_t475 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17540(__this, ___index, method) (( Color32_t510  (*) (List_1_t475 *, int32_t, const MethodInfo*))List_1_get_Item_m17540_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17541_gshared (List_1_t475 * __this, int32_t ___index, Color32_t510  ___value, const MethodInfo* method);
#define List_1_set_Item_m17541(__this, ___index, ___value, method) (( void (*) (List_1_t475 *, int32_t, Color32_t510 , const MethodInfo*))List_1_set_Item_m17541_gshared)(__this, ___index, ___value, method)
