#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t474;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t586;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t111;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t2950;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector3>
struct ICollection_1_t2951;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>
struct ReadOnlyCollection_1_t2477;
// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t2482;
// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2485;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_34.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" void List_1__ctor_m17342_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1__ctor_m17342(__this, method) (( void (*) (List_1_t474 *, const MethodInfo*))List_1__ctor_m17342_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17343_gshared (List_1_t474 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17343(__this, ___collection, method) (( void (*) (List_1_t474 *, Object_t*, const MethodInfo*))List_1__ctor_m17343_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17344_gshared (List_1_t474 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17344(__this, ___capacity, method) (( void (*) (List_1_t474 *, int32_t, const MethodInfo*))List_1__ctor_m17344_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m17345_gshared (List_1_t474 * __this, Vector3U5BU5D_t111* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m17345(__this, ___data, ___size, method) (( void (*) (List_1_t474 *, Vector3U5BU5D_t111*, int32_t, const MethodInfo*))List_1__ctor_m17345_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.cctor()
extern "C" void List_1__cctor_m17346_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17346(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17346_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17347_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17347(__this, method) (( Object_t* (*) (List_1_t474 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17347_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17348_gshared (List_1_t474 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17348(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t474 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17348_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17349_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17349(__this, method) (( Object_t * (*) (List_1_t474 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17349_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17350_gshared (List_1_t474 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17350(__this, ___item, method) (( int32_t (*) (List_1_t474 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17350_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17351_gshared (List_1_t474 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17351(__this, ___item, method) (( bool (*) (List_1_t474 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17352_gshared (List_1_t474 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17352(__this, ___item, method) (( int32_t (*) (List_1_t474 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17353_gshared (List_1_t474 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17353(__this, ___index, ___item, method) (( void (*) (List_1_t474 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17354_gshared (List_1_t474 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17354(__this, ___item, method) (( void (*) (List_1_t474 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17354_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17355_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17355(__this, method) (( bool (*) (List_1_t474 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17356_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17356(__this, method) (( bool (*) (List_1_t474 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17356_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17357_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17357(__this, method) (( Object_t * (*) (List_1_t474 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17358_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17358(__this, method) (( bool (*) (List_1_t474 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17358_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17359_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17359(__this, method) (( bool (*) (List_1_t474 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17359_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17360_gshared (List_1_t474 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17360(__this, ___index, method) (( Object_t * (*) (List_1_t474 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17360_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17361_gshared (List_1_t474 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17361(__this, ___index, ___value, method) (( void (*) (List_1_t474 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17361_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
extern "C" void List_1_Add_m17362_gshared (List_1_t474 * __this, Vector3_t28  ___item, const MethodInfo* method);
#define List_1_Add_m17362(__this, ___item, method) (( void (*) (List_1_t474 *, Vector3_t28 , const MethodInfo*))List_1_Add_m17362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17363_gshared (List_1_t474 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17363(__this, ___newCount, method) (( void (*) (List_1_t474 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17363_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17364_gshared (List_1_t474 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17364(__this, ___collection, method) (( void (*) (List_1_t474 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17364_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17365_gshared (List_1_t474 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17365(__this, ___enumerable, method) (( void (*) (List_1_t474 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17365_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3160_gshared (List_1_t474 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3160(__this, ___collection, method) (( void (*) (List_1_t474 *, Object_t*, const MethodInfo*))List_1_AddRange_m3160_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2477 * List_1_AsReadOnly_m17366_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17366(__this, method) (( ReadOnlyCollection_1_t2477 * (*) (List_1_t474 *, const MethodInfo*))List_1_AsReadOnly_m17366_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" void List_1_Clear_m17367_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_Clear_m17367(__this, method) (( void (*) (List_1_t474 *, const MethodInfo*))List_1_Clear_m17367_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool List_1_Contains_m17368_gshared (List_1_t474 * __this, Vector3_t28  ___item, const MethodInfo* method);
#define List_1_Contains_m17368(__this, ___item, method) (( bool (*) (List_1_t474 *, Vector3_t28 , const MethodInfo*))List_1_Contains_m17368_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17369_gshared (List_1_t474 * __this, Vector3U5BU5D_t111* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17369(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t474 *, Vector3U5BU5D_t111*, int32_t, const MethodInfo*))List_1_CopyTo_m17369_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::Find(System.Predicate`1<T>)
extern "C" Vector3_t28  List_1_Find_m17370_gshared (List_1_t474 * __this, Predicate_1_t2482 * ___match, const MethodInfo* method);
#define List_1_Find_m17370(__this, ___match, method) (( Vector3_t28  (*) (List_1_t474 *, Predicate_1_t2482 *, const MethodInfo*))List_1_Find_m17370_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17371_gshared (Object_t * __this /* static, unused */, Predicate_1_t2482 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17371(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2482 *, const MethodInfo*))List_1_CheckMatch_m17371_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t474 * List_1_FindAll_m17372_gshared (List_1_t474 * __this, Predicate_1_t2482 * ___match, const MethodInfo* method);
#define List_1_FindAll_m17372(__this, ___match, method) (( List_1_t474 * (*) (List_1_t474 *, Predicate_1_t2482 *, const MethodInfo*))List_1_FindAll_m17372_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t474 * List_1_FindAllStackBits_m17373_gshared (List_1_t474 * __this, Predicate_1_t2482 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m17373(__this, ___match, method) (( List_1_t474 * (*) (List_1_t474 *, Predicate_1_t2482 *, const MethodInfo*))List_1_FindAllStackBits_m17373_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t474 * List_1_FindAllList_m17374_gshared (List_1_t474 * __this, Predicate_1_t2482 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m17374(__this, ___match, method) (( List_1_t474 * (*) (List_1_t474 *, Predicate_1_t2482 *, const MethodInfo*))List_1_FindAllList_m17374_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17375_gshared (List_1_t474 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2482 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17375(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t474 *, int32_t, int32_t, Predicate_1_t2482 *, const MethodInfo*))List_1_GetIndex_m17375_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t2476  List_1_GetEnumerator_m17376_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17376(__this, method) (( Enumerator_t2476  (*) (List_1_t474 *, const MethodInfo*))List_1_GetEnumerator_m17376_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17377_gshared (List_1_t474 * __this, Vector3_t28  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17377(__this, ___item, method) (( int32_t (*) (List_1_t474 *, Vector3_t28 , const MethodInfo*))List_1_IndexOf_m17377_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17378_gshared (List_1_t474 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17378(__this, ___start, ___delta, method) (( void (*) (List_1_t474 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17378_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17379_gshared (List_1_t474 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17379(__this, ___index, method) (( void (*) (List_1_t474 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17379_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17380_gshared (List_1_t474 * __this, int32_t ___index, Vector3_t28  ___item, const MethodInfo* method);
#define List_1_Insert_m17380(__this, ___index, ___item, method) (( void (*) (List_1_t474 *, int32_t, Vector3_t28 , const MethodInfo*))List_1_Insert_m17380_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17381_gshared (List_1_t474 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17381(__this, ___collection, method) (( void (*) (List_1_t474 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17381_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
extern "C" bool List_1_Remove_m17382_gshared (List_1_t474 * __this, Vector3_t28  ___item, const MethodInfo* method);
#define List_1_Remove_m17382(__this, ___item, method) (( bool (*) (List_1_t474 *, Vector3_t28 , const MethodInfo*))List_1_Remove_m17382_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17383_gshared (List_1_t474 * __this, Predicate_1_t2482 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17383(__this, ___match, method) (( int32_t (*) (List_1_t474 *, Predicate_1_t2482 *, const MethodInfo*))List_1_RemoveAll_m17383_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17384_gshared (List_1_t474 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17384(__this, ___index, method) (( void (*) (List_1_t474 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17384_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Reverse()
extern "C" void List_1_Reverse_m17385_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_Reverse_m17385(__this, method) (( void (*) (List_1_t474 *, const MethodInfo*))List_1_Reverse_m17385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort()
extern "C" void List_1_Sort_m17386_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_Sort_m17386(__this, method) (( void (*) (List_1_t474 *, const MethodInfo*))List_1_Sort_m17386_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17387_gshared (List_1_t474 * __this, Comparison_1_t2485 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17387(__this, ___comparison, method) (( void (*) (List_1_t474 *, Comparison_1_t2485 *, const MethodInfo*))List_1_Sort_m17387_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t111* List_1_ToArray_m17388_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_ToArray_m17388(__this, method) (( Vector3U5BU5D_t111* (*) (List_1_t474 *, const MethodInfo*))List_1_ToArray_m17388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::TrimExcess()
extern "C" void List_1_TrimExcess_m17389_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17389(__this, method) (( void (*) (List_1_t474 *, const MethodInfo*))List_1_TrimExcess_m17389_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17390_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17390(__this, method) (( int32_t (*) (List_1_t474 *, const MethodInfo*))List_1_get_Capacity_m17390_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17391_gshared (List_1_t474 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17391(__this, ___value, method) (( void (*) (List_1_t474 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17391_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t List_1_get_Count_m17392_gshared (List_1_t474 * __this, const MethodInfo* method);
#define List_1_get_Count_m17392(__this, method) (( int32_t (*) (List_1_t474 *, const MethodInfo*))List_1_get_Count_m17392_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t28  List_1_get_Item_m17393_gshared (List_1_t474 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17393(__this, ___index, method) (( Vector3_t28  (*) (List_1_t474 *, int32_t, const MethodInfo*))List_1_get_Item_m17393_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17394_gshared (List_1_t474 * __this, int32_t ___index, Vector3_t28  ___value, const MethodInfo* method);
#define List_1_set_Item_m17394(__this, ___index, ___value, method) (( void (*) (List_1_t474 *, int32_t, Vector3_t28 , const MethodInfo*))List_1_set_Item_m17394_gshared)(__this, ___index, ___value, method)
