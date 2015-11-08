#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t476;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t696;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t103;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>
struct IEnumerator_1_t697;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector2>
struct ICollection_1_t2955;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>
struct ReadOnlyCollection_1_t2498;
// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2503;
// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2506;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
extern "C" void List_1__ctor_m17641_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1__ctor_m17641(__this, method) (( void (*) (List_1_t476 *, const MethodInfo*))List_1__ctor_m17641_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17642_gshared (List_1_t476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17642(__this, ___collection, method) (( void (*) (List_1_t476 *, Object_t*, const MethodInfo*))List_1__ctor_m17642_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17643_gshared (List_1_t476 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17643(__this, ___capacity, method) (( void (*) (List_1_t476 *, int32_t, const MethodInfo*))List_1__ctor_m17643_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m17644_gshared (List_1_t476 * __this, Vector2U5BU5D_t103* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m17644(__this, ___data, ___size, method) (( void (*) (List_1_t476 *, Vector2U5BU5D_t103*, int32_t, const MethodInfo*))List_1__ctor_m17644_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.cctor()
extern "C" void List_1__cctor_m17645_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17645(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17645_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17646_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17646(__this, method) (( Object_t* (*) (List_1_t476 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17647_gshared (List_1_t476 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17647(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t476 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17647_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17648_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17648(__this, method) (( Object_t * (*) (List_1_t476 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17648_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17649_gshared (List_1_t476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17649(__this, ___item, method) (( int32_t (*) (List_1_t476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17649_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17650_gshared (List_1_t476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17650(__this, ___item, method) (( bool (*) (List_1_t476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17650_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17651_gshared (List_1_t476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17651(__this, ___item, method) (( int32_t (*) (List_1_t476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17652_gshared (List_1_t476 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17652(__this, ___index, ___item, method) (( void (*) (List_1_t476 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17652_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17653_gshared (List_1_t476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17653(__this, ___item, method) (( void (*) (List_1_t476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17653_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17654_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17654(__this, method) (( bool (*) (List_1_t476 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17654_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17655_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17655(__this, method) (( bool (*) (List_1_t476 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17655_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17656_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17656(__this, method) (( Object_t * (*) (List_1_t476 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17656_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17657_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17657(__this, method) (( bool (*) (List_1_t476 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17658_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17658(__this, method) (( bool (*) (List_1_t476 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17659_gshared (List_1_t476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17659(__this, ___index, method) (( Object_t * (*) (List_1_t476 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17660_gshared (List_1_t476 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17660(__this, ___index, ___value, method) (( void (*) (List_1_t476 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17660_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
extern "C" void List_1_Add_m17661_gshared (List_1_t476 * __this, Vector2_t85  ___item, const MethodInfo* method);
#define List_1_Add_m17661(__this, ___item, method) (( void (*) (List_1_t476 *, Vector2_t85 , const MethodInfo*))List_1_Add_m17661_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17662_gshared (List_1_t476 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17662(__this, ___newCount, method) (( void (*) (List_1_t476 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17662_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17663_gshared (List_1_t476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17663(__this, ___collection, method) (( void (*) (List_1_t476 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17663_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17664_gshared (List_1_t476 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17664(__this, ___enumerable, method) (( void (*) (List_1_t476 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17664_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3164_gshared (List_1_t476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3164(__this, ___collection, method) (( void (*) (List_1_t476 *, Object_t*, const MethodInfo*))List_1_AddRange_m3164_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2498 * List_1_AsReadOnly_m17665_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17665(__this, method) (( ReadOnlyCollection_1_t2498 * (*) (List_1_t476 *, const MethodInfo*))List_1_AsReadOnly_m17665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
extern "C" void List_1_Clear_m17666_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_Clear_m17666(__this, method) (( void (*) (List_1_t476 *, const MethodInfo*))List_1_Clear_m17666_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Contains(T)
extern "C" bool List_1_Contains_m17667_gshared (List_1_t476 * __this, Vector2_t85  ___item, const MethodInfo* method);
#define List_1_Contains_m17667(__this, ___item, method) (( bool (*) (List_1_t476 *, Vector2_t85 , const MethodInfo*))List_1_Contains_m17667_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17668_gshared (List_1_t476 * __this, Vector2U5BU5D_t103* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17668(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t476 *, Vector2U5BU5D_t103*, int32_t, const MethodInfo*))List_1_CopyTo_m17668_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::Find(System.Predicate`1<T>)
extern "C" Vector2_t85  List_1_Find_m17669_gshared (List_1_t476 * __this, Predicate_1_t2503 * ___match, const MethodInfo* method);
#define List_1_Find_m17669(__this, ___match, method) (( Vector2_t85  (*) (List_1_t476 *, Predicate_1_t2503 *, const MethodInfo*))List_1_Find_m17669_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17670_gshared (Object_t * __this /* static, unused */, Predicate_1_t2503 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17670(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2503 *, const MethodInfo*))List_1_CheckMatch_m17670_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t476 * List_1_FindAll_m17671_gshared (List_1_t476 * __this, Predicate_1_t2503 * ___match, const MethodInfo* method);
#define List_1_FindAll_m17671(__this, ___match, method) (( List_1_t476 * (*) (List_1_t476 *, Predicate_1_t2503 *, const MethodInfo*))List_1_FindAll_m17671_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t476 * List_1_FindAllStackBits_m17672_gshared (List_1_t476 * __this, Predicate_1_t2503 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m17672(__this, ___match, method) (( List_1_t476 * (*) (List_1_t476 *, Predicate_1_t2503 *, const MethodInfo*))List_1_FindAllStackBits_m17672_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t476 * List_1_FindAllList_m17673_gshared (List_1_t476 * __this, Predicate_1_t2503 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m17673(__this, ___match, method) (( List_1_t476 * (*) (List_1_t476 *, Predicate_1_t2503 *, const MethodInfo*))List_1_FindAllList_m17673_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17674_gshared (List_1_t476 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2503 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17674(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t476 *, int32_t, int32_t, Predicate_1_t2503 *, const MethodInfo*))List_1_GetIndex_m17674_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
extern "C" Enumerator_t2497  List_1_GetEnumerator_m17675_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17675(__this, method) (( Enumerator_t2497  (*) (List_1_t476 *, const MethodInfo*))List_1_GetEnumerator_m17675_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17676_gshared (List_1_t476 * __this, Vector2_t85  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17676(__this, ___item, method) (( int32_t (*) (List_1_t476 *, Vector2_t85 , const MethodInfo*))List_1_IndexOf_m17676_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17677_gshared (List_1_t476 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17677(__this, ___start, ___delta, method) (( void (*) (List_1_t476 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17677_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17678_gshared (List_1_t476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17678(__this, ___index, method) (( void (*) (List_1_t476 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17678_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17679_gshared (List_1_t476 * __this, int32_t ___index, Vector2_t85  ___item, const MethodInfo* method);
#define List_1_Insert_m17679(__this, ___index, ___item, method) (( void (*) (List_1_t476 *, int32_t, Vector2_t85 , const MethodInfo*))List_1_Insert_m17679_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17680_gshared (List_1_t476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17680(__this, ___collection, method) (( void (*) (List_1_t476 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17680_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Remove(T)
extern "C" bool List_1_Remove_m17681_gshared (List_1_t476 * __this, Vector2_t85  ___item, const MethodInfo* method);
#define List_1_Remove_m17681(__this, ___item, method) (( bool (*) (List_1_t476 *, Vector2_t85 , const MethodInfo*))List_1_Remove_m17681_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17682_gshared (List_1_t476 * __this, Predicate_1_t2503 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17682(__this, ___match, method) (( int32_t (*) (List_1_t476 *, Predicate_1_t2503 *, const MethodInfo*))List_1_RemoveAll_m17682_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17683_gshared (List_1_t476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17683(__this, ___index, method) (( void (*) (List_1_t476 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17683_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Reverse()
extern "C" void List_1_Reverse_m17684_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_Reverse_m17684(__this, method) (( void (*) (List_1_t476 *, const MethodInfo*))List_1_Reverse_m17684_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort()
extern "C" void List_1_Sort_m17685_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_Sort_m17685(__this, method) (( void (*) (List_1_t476 *, const MethodInfo*))List_1_Sort_m17685_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17686_gshared (List_1_t476 * __this, Comparison_1_t2506 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17686(__this, ___comparison, method) (( void (*) (List_1_t476 *, Comparison_1_t2506 *, const MethodInfo*))List_1_Sort_m17686_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
extern "C" Vector2U5BU5D_t103* List_1_ToArray_m17687_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_ToArray_m17687(__this, method) (( Vector2U5BU5D_t103* (*) (List_1_t476 *, const MethodInfo*))List_1_ToArray_m17687_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::TrimExcess()
extern "C" void List_1_TrimExcess_m17688_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17688(__this, method) (( void (*) (List_1_t476 *, const MethodInfo*))List_1_TrimExcess_m17688_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17689_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17689(__this, method) (( int32_t (*) (List_1_t476 *, const MethodInfo*))List_1_get_Capacity_m17689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17690_gshared (List_1_t476 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17690(__this, ___value, method) (( void (*) (List_1_t476 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17690_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
extern "C" int32_t List_1_get_Count_m17691_gshared (List_1_t476 * __this, const MethodInfo* method);
#define List_1_get_Count_m17691(__this, method) (( int32_t (*) (List_1_t476 *, const MethodInfo*))List_1_get_Count_m17691_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C" Vector2_t85  List_1_get_Item_m17692_gshared (List_1_t476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17692(__this, ___index, method) (( Vector2_t85  (*) (List_1_t476 *, int32_t, const MethodInfo*))List_1_get_Item_m17692_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17693_gshared (List_1_t476 * __this, int32_t ___index, Vector2_t85  ___value, const MethodInfo* method);
#define List_1_set_Item_m17693(__this, ___index, ___value, method) (( void (*) (List_1_t476 *, int32_t, Vector2_t85 , const MethodInfo*))List_1_set_Item_m17693_gshared)(__this, ___index, ___value, method)
