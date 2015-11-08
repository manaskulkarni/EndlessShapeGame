#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t478;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2959;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2921;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2960;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2519;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2522;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2523;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m3867_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1__ctor_m3867(__this, method) (( void (*) (List_1_t478 *, const MethodInfo*))List_1__ctor_m3867_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17940_gshared (List_1_t478 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17940(__this, ___collection, method) (( void (*) (List_1_t478 *, Object_t*, const MethodInfo*))List_1__ctor_m17940_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17941_gshared (List_1_t478 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17941(__this, ___capacity, method) (( void (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1__ctor_m17941_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m17942_gshared (List_1_t478 * __this, Int32U5BU5D_t109* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m17942(__this, ___data, ___size, method) (( void (*) (List_1_t478 *, Int32U5BU5D_t109*, int32_t, const MethodInfo*))List_1__ctor_m17942_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m17943_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17943(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17943_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17944_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17944(__this, method) (( Object_t* (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17944_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17945_gshared (List_1_t478 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17945(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t478 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17945_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17946_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17946(__this, method) (( Object_t * (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17946_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17947_gshared (List_1_t478 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17947(__this, ___item, method) (( int32_t (*) (List_1_t478 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17947_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17948_gshared (List_1_t478 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17948(__this, ___item, method) (( bool (*) (List_1_t478 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17948_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17949_gshared (List_1_t478 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17949(__this, ___item, method) (( int32_t (*) (List_1_t478 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17949_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17950_gshared (List_1_t478 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17950(__this, ___index, ___item, method) (( void (*) (List_1_t478 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17950_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17951_gshared (List_1_t478 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17951(__this, ___item, method) (( void (*) (List_1_t478 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17951_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17952_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17952(__this, method) (( bool (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17952_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17953_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17953(__this, method) (( bool (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17953_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17954_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17954(__this, method) (( Object_t * (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17954_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17955_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17955(__this, method) (( bool (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17955_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17956_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17956(__this, method) (( bool (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17956_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17957_gshared (List_1_t478 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17957(__this, ___index, method) (( Object_t * (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17957_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17958_gshared (List_1_t478 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17958(__this, ___index, ___value, method) (( void (*) (List_1_t478 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17958_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m17959_gshared (List_1_t478 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m17959(__this, ___item, method) (( void (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_Add_m17959_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17960_gshared (List_1_t478 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17960(__this, ___newCount, method) (( void (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17960_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17961_gshared (List_1_t478 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17961(__this, ___collection, method) (( void (*) (List_1_t478 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17961_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17962_gshared (List_1_t478 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17962(__this, ___enumerable, method) (( void (*) (List_1_t478 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17962_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3170_gshared (List_1_t478 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3170(__this, ___collection, method) (( void (*) (List_1_t478 *, Object_t*, const MethodInfo*))List_1_AddRange_m3170_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2519 * List_1_AsReadOnly_m17963_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17963(__this, method) (( ReadOnlyCollection_1_t2519 * (*) (List_1_t478 *, const MethodInfo*))List_1_AsReadOnly_m17963_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m17964_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_Clear_m17964(__this, method) (( void (*) (List_1_t478 *, const MethodInfo*))List_1_Clear_m17964_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m17965_gshared (List_1_t478 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m17965(__this, ___item, method) (( bool (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_Contains_m17965_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17966_gshared (List_1_t478 * __this, Int32U5BU5D_t109* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17966(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t478 *, Int32U5BU5D_t109*, int32_t, const MethodInfo*))List_1_CopyTo_m17966_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m17967_gshared (List_1_t478 * __this, Predicate_1_t2522 * ___match, const MethodInfo* method);
#define List_1_Find_m17967(__this, ___match, method) (( int32_t (*) (List_1_t478 *, Predicate_1_t2522 *, const MethodInfo*))List_1_Find_m17967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17968_gshared (Object_t * __this /* static, unused */, Predicate_1_t2522 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17968(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2522 *, const MethodInfo*))List_1_CheckMatch_m17968_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t478 * List_1_FindAll_m17969_gshared (List_1_t478 * __this, Predicate_1_t2522 * ___match, const MethodInfo* method);
#define List_1_FindAll_m17969(__this, ___match, method) (( List_1_t478 * (*) (List_1_t478 *, Predicate_1_t2522 *, const MethodInfo*))List_1_FindAll_m17969_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t478 * List_1_FindAllStackBits_m17970_gshared (List_1_t478 * __this, Predicate_1_t2522 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m17970(__this, ___match, method) (( List_1_t478 * (*) (List_1_t478 *, Predicate_1_t2522 *, const MethodInfo*))List_1_FindAllStackBits_m17970_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t478 * List_1_FindAllList_m17971_gshared (List_1_t478 * __this, Predicate_1_t2522 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m17971(__this, ___match, method) (( List_1_t478 * (*) (List_1_t478 *, Predicate_1_t2522 *, const MethodInfo*))List_1_FindAllList_m17971_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17972_gshared (List_1_t478 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2522 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17972(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t478 *, int32_t, int32_t, Predicate_1_t2522 *, const MethodInfo*))List_1_GetIndex_m17972_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2518  List_1_GetEnumerator_m17973_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17973(__this, method) (( Enumerator_t2518  (*) (List_1_t478 *, const MethodInfo*))List_1_GetEnumerator_m17973_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17974_gshared (List_1_t478 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m17974(__this, ___item, method) (( int32_t (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_IndexOf_m17974_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17975_gshared (List_1_t478 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17975(__this, ___start, ___delta, method) (( void (*) (List_1_t478 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17975_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17976_gshared (List_1_t478 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17976(__this, ___index, method) (( void (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17976_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17977_gshared (List_1_t478 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m17977(__this, ___index, ___item, method) (( void (*) (List_1_t478 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m17977_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17978_gshared (List_1_t478 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17978(__this, ___collection, method) (( void (*) (List_1_t478 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17978_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m17979_gshared (List_1_t478 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m17979(__this, ___item, method) (( bool (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_Remove_m17979_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17980_gshared (List_1_t478 * __this, Predicate_1_t2522 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17980(__this, ___match, method) (( int32_t (*) (List_1_t478 *, Predicate_1_t2522 *, const MethodInfo*))List_1_RemoveAll_m17980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17981_gshared (List_1_t478 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17981(__this, ___index, method) (( void (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17981_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m17982_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_Reverse_m17982(__this, method) (( void (*) (List_1_t478 *, const MethodInfo*))List_1_Reverse_m17982_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m17983_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_Sort_m17983(__this, method) (( void (*) (List_1_t478 *, const MethodInfo*))List_1_Sort_m17983_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17984_gshared (List_1_t478 * __this, Comparison_1_t2523 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17984(__this, ___comparison, method) (( void (*) (List_1_t478 *, Comparison_1_t2523 *, const MethodInfo*))List_1_Sort_m17984_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t109* List_1_ToArray_m17985_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_ToArray_m17985(__this, method) (( Int32U5BU5D_t109* (*) (List_1_t478 *, const MethodInfo*))List_1_ToArray_m17985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m17986_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17986(__this, method) (( void (*) (List_1_t478 *, const MethodInfo*))List_1_TrimExcess_m17986_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17987_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17987(__this, method) (( int32_t (*) (List_1_t478 *, const MethodInfo*))List_1_get_Capacity_m17987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17988_gshared (List_1_t478 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17988(__this, ___value, method) (( void (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17988_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m17989_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_get_Count_m17989(__this, method) (( int32_t (*) (List_1_t478 *, const MethodInfo*))List_1_get_Count_m17989_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m17990_gshared (List_1_t478 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17990(__this, ___index, method) (( int32_t (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_get_Item_m17990_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17991_gshared (List_1_t478 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m17991(__this, ___index, ___value, method) (( void (*) (List_1_t478 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m17991_gshared)(__this, ___index, ___value, method)
