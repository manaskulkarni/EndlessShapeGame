#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ShapeManager/ShapeProperties>
struct List_1_t192;
// System.Collections.Generic.IEnumerable`1<ShapeManager/ShapeProperties>
struct IEnumerable_1_t2912;
// ShapeManager/ShapeProperties[]
struct ShapePropertiesU5BU5D_t2193;
// System.Collections.Generic.IEnumerator`1<ShapeManager/ShapeProperties>
struct IEnumerator_1_t2913;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<ShapeManager/ShapeProperties>
struct ICollection_1_t2914;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ShapeManager/ShapeProperties>
struct ReadOnlyCollection_1_t2196;
// System.Predicate`1<ShapeManager/ShapeProperties>
struct Predicate_1_t2201;
// System.Comparison`1<ShapeManager/ShapeProperties>
struct Comparison_1_t2204;
// ShapeManager/ShapeProperties
#include "AssemblyU2DCSharp_ShapeManager_ShapeProperties.h"
// System.Collections.Generic.List`1/Enumerator<ShapeManager/ShapeProperties>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::.ctor()
extern "C" void List_1__ctor_m1160_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1__ctor_m1160(__this, method) (( void (*) (List_1_t192 *, const MethodInfo*))List_1__ctor_m1160_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13452_gshared (List_1_t192 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m13452(__this, ___collection, method) (( void (*) (List_1_t192 *, Object_t*, const MethodInfo*))List_1__ctor_m13452_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13453_gshared (List_1_t192 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m13453(__this, ___capacity, method) (( void (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1__ctor_m13453_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m13454_gshared (List_1_t192 * __this, ShapePropertiesU5BU5D_t2193* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m13454(__this, ___data, ___size, method) (( void (*) (List_1_t192 *, ShapePropertiesU5BU5D_t2193*, int32_t, const MethodInfo*))List_1__ctor_m13454_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::.cctor()
extern "C" void List_1__cctor_m13455_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13455(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13455_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13456_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13456(__this, method) (( Object_t* (*) (List_1_t192 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13456_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13457_gshared (List_1_t192 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13457(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t192 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13457_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13458_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13458(__this, method) (( Object_t * (*) (List_1_t192 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13458_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13459_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13459(__this, ___item, method) (( int32_t (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13459_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13460_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13460(__this, ___item, method) (( bool (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13460_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13461_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13461(__this, ___item, method) (( int32_t (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13461_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13462_gshared (List_1_t192 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13462(__this, ___index, ___item, method) (( void (*) (List_1_t192 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13462_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13463_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13463(__this, ___item, method) (( void (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13463_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13464_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13464(__this, method) (( bool (*) (List_1_t192 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13464_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13465_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13465(__this, method) (( bool (*) (List_1_t192 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13465_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13466_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13466(__this, method) (( Object_t * (*) (List_1_t192 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13466_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13467_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13467(__this, method) (( bool (*) (List_1_t192 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13467_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13468_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13468(__this, method) (( bool (*) (List_1_t192 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13468_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13469_gshared (List_1_t192 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13469(__this, ___index, method) (( Object_t * (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13469_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13470_gshared (List_1_t192 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13470(__this, ___index, ___value, method) (( void (*) (List_1_t192 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13470_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::Add(T)
extern "C" void List_1_Add_m13471_gshared (List_1_t192 * __this, ShapeProperties_t180  ___item, const MethodInfo* method);
#define List_1_Add_m13471(__this, ___item, method) (( void (*) (List_1_t192 *, ShapeProperties_t180 , const MethodInfo*))List_1_Add_m13471_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13472_gshared (List_1_t192 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13472(__this, ___newCount, method) (( void (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13472_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13473_gshared (List_1_t192 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13473(__this, ___collection, method) (( void (*) (List_1_t192 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13473_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13474_gshared (List_1_t192 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13474(__this, ___enumerable, method) (( void (*) (List_1_t192 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13475_gshared (List_1_t192 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13475(__this, ___collection, method) (( void (*) (List_1_t192 *, Object_t*, const MethodInfo*))List_1_AddRange_m13475_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2196 * List_1_AsReadOnly_m13476_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13476(__this, method) (( ReadOnlyCollection_1_t2196 * (*) (List_1_t192 *, const MethodInfo*))List_1_AsReadOnly_m13476_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::Clear()
extern "C" void List_1_Clear_m13477_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_Clear_m13477(__this, method) (( void (*) (List_1_t192 *, const MethodInfo*))List_1_Clear_m13477_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::Contains(T)
extern "C" bool List_1_Contains_m13478_gshared (List_1_t192 * __this, ShapeProperties_t180  ___item, const MethodInfo* method);
#define List_1_Contains_m13478(__this, ___item, method) (( bool (*) (List_1_t192 *, ShapeProperties_t180 , const MethodInfo*))List_1_Contains_m13478_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13479_gshared (List_1_t192 * __this, ShapePropertiesU5BU5D_t2193* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13479(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t192 *, ShapePropertiesU5BU5D_t2193*, int32_t, const MethodInfo*))List_1_CopyTo_m13479_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::Find(System.Predicate`1<T>)
extern "C" ShapeProperties_t180  List_1_Find_m13480_gshared (List_1_t192 * __this, Predicate_1_t2201 * ___match, const MethodInfo* method);
#define List_1_Find_m13480(__this, ___match, method) (( ShapeProperties_t180  (*) (List_1_t192 *, Predicate_1_t2201 *, const MethodInfo*))List_1_Find_m13480_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13481_gshared (Object_t * __this /* static, unused */, Predicate_1_t2201 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13481(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2201 *, const MethodInfo*))List_1_CheckMatch_m13481_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t192 * List_1_FindAll_m13482_gshared (List_1_t192 * __this, Predicate_1_t2201 * ___match, const MethodInfo* method);
#define List_1_FindAll_m13482(__this, ___match, method) (( List_1_t192 * (*) (List_1_t192 *, Predicate_1_t2201 *, const MethodInfo*))List_1_FindAll_m13482_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t192 * List_1_FindAllStackBits_m13483_gshared (List_1_t192 * __this, Predicate_1_t2201 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m13483(__this, ___match, method) (( List_1_t192 * (*) (List_1_t192 *, Predicate_1_t2201 *, const MethodInfo*))List_1_FindAllStackBits_m13483_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t192 * List_1_FindAllList_m13484_gshared (List_1_t192 * __this, Predicate_1_t2201 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m13484(__this, ___match, method) (( List_1_t192 * (*) (List_1_t192 *, Predicate_1_t2201 *, const MethodInfo*))List_1_FindAllList_m13484_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13485_gshared (List_1_t192 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2201 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13485(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t192 *, int32_t, int32_t, Predicate_1_t2201 *, const MethodInfo*))List_1_GetIndex_m13485_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::GetEnumerator()
extern "C" Enumerator_t2195  List_1_GetEnumerator_m13486_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13486(__this, method) (( Enumerator_t2195  (*) (List_1_t192 *, const MethodInfo*))List_1_GetEnumerator_m13486_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13487_gshared (List_1_t192 * __this, ShapeProperties_t180  ___item, const MethodInfo* method);
#define List_1_IndexOf_m13487(__this, ___item, method) (( int32_t (*) (List_1_t192 *, ShapeProperties_t180 , const MethodInfo*))List_1_IndexOf_m13487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13488_gshared (List_1_t192 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13488(__this, ___start, ___delta, method) (( void (*) (List_1_t192 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13488_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13489_gshared (List_1_t192 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13489(__this, ___index, method) (( void (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13489_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13490_gshared (List_1_t192 * __this, int32_t ___index, ShapeProperties_t180  ___item, const MethodInfo* method);
#define List_1_Insert_m13490(__this, ___index, ___item, method) (( void (*) (List_1_t192 *, int32_t, ShapeProperties_t180 , const MethodInfo*))List_1_Insert_m13490_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13491_gshared (List_1_t192 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13491(__this, ___collection, method) (( void (*) (List_1_t192 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13491_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::Remove(T)
extern "C" bool List_1_Remove_m13492_gshared (List_1_t192 * __this, ShapeProperties_t180  ___item, const MethodInfo* method);
#define List_1_Remove_m13492(__this, ___item, method) (( bool (*) (List_1_t192 *, ShapeProperties_t180 , const MethodInfo*))List_1_Remove_m13492_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13493_gshared (List_1_t192 * __this, Predicate_1_t2201 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13493(__this, ___match, method) (( int32_t (*) (List_1_t192 *, Predicate_1_t2201 *, const MethodInfo*))List_1_RemoveAll_m13493_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13494_gshared (List_1_t192 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13494(__this, ___index, method) (( void (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13494_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::Reverse()
extern "C" void List_1_Reverse_m13495_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_Reverse_m13495(__this, method) (( void (*) (List_1_t192 *, const MethodInfo*))List_1_Reverse_m13495_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::Sort()
extern "C" void List_1_Sort_m13496_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_Sort_m13496(__this, method) (( void (*) (List_1_t192 *, const MethodInfo*))List_1_Sort_m13496_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13497_gshared (List_1_t192 * __this, Comparison_1_t2204 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m13497(__this, ___comparison, method) (( void (*) (List_1_t192 *, Comparison_1_t2204 *, const MethodInfo*))List_1_Sort_m13497_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::ToArray()
extern "C" ShapePropertiesU5BU5D_t2193* List_1_ToArray_m13498_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_ToArray_m13498(__this, method) (( ShapePropertiesU5BU5D_t2193* (*) (List_1_t192 *, const MethodInfo*))List_1_ToArray_m13498_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::TrimExcess()
extern "C" void List_1_TrimExcess_m13499_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13499(__this, method) (( void (*) (List_1_t192 *, const MethodInfo*))List_1_TrimExcess_m13499_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13500_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m13500(__this, method) (( int32_t (*) (List_1_t192 *, const MethodInfo*))List_1_get_Capacity_m13500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13501_gshared (List_1_t192 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m13501(__this, ___value, method) (( void (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_set_Capacity_m13501_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::get_Count()
extern "C" int32_t List_1_get_Count_m13502_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_get_Count_m13502(__this, method) (( int32_t (*) (List_1_t192 *, const MethodInfo*))List_1_get_Count_m13502_gshared)(__this, method)
// T System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::get_Item(System.Int32)
extern "C" ShapeProperties_t180  List_1_get_Item_m13503_gshared (List_1_t192 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13503(__this, ___index, method) (( ShapeProperties_t180  (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_get_Item_m13503_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ShapeManager/ShapeProperties>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13504_gshared (List_1_t192 * __this, int32_t ___index, ShapeProperties_t180  ___value, const MethodInfo* method);
#define List_1_set_Item_m13504(__this, ___index, ___value, method) (( void (*) (List_1_t192 *, int32_t, ShapeProperties_t180 , const MethodInfo*))List_1_set_Item_m13504_gshared)(__this, ___index, ___value, method)
