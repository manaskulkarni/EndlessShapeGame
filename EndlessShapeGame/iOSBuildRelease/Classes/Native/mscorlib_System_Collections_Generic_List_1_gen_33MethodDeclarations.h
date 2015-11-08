#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>
struct List_1_t644;
// System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit2D>
struct IEnumerable_1_t2983;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t530;
// System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit2D>
struct IEnumerator_1_t2984;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>
struct ICollection_1_t2985;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RaycastHit2D>
struct ReadOnlyCollection_1_t2595;
// System.Predicate`1<UnityEngine.RaycastHit2D>
struct Predicate_1_t2600;
// System.Comparison`1<UnityEngine.RaycastHit2D>
struct Comparison_1_t701;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_42.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::.ctor()
extern "C" void List_1__ctor_m3895_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1__ctor_m3895(__this, method) (( void (*) (List_1_t644 *, const MethodInfo*))List_1__ctor_m3895_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m19076_gshared (List_1_t644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m19076(__this, ___collection, method) (( void (*) (List_1_t644 *, Object_t*, const MethodInfo*))List_1__ctor_m19076_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::.ctor(System.Int32)
extern "C" void List_1__ctor_m19077_gshared (List_1_t644 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m19077(__this, ___capacity, method) (( void (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1__ctor_m19077_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m19078_gshared (List_1_t644 * __this, RaycastHit2DU5BU5D_t530* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m19078(__this, ___data, ___size, method) (( void (*) (List_1_t644 *, RaycastHit2DU5BU5D_t530*, int32_t, const MethodInfo*))List_1__ctor_m19078_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::.cctor()
extern "C" void List_1__cctor_m19079_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m19079(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19079_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19080_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19080(__this, method) (( Object_t* (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19080_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m19081_gshared (List_1_t644 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m19081(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t644 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m19081_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m19082_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19082(__this, method) (( Object_t * (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m19082_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m19083_gshared (List_1_t644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m19083(__this, ___item, method) (( int32_t (*) (List_1_t644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m19083_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m19084_gshared (List_1_t644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m19084(__this, ___item, method) (( bool (*) (List_1_t644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m19084_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m19085_gshared (List_1_t644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m19085(__this, ___item, method) (( int32_t (*) (List_1_t644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m19085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m19086_gshared (List_1_t644 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m19086(__this, ___index, ___item, method) (( void (*) (List_1_t644 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m19086_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m19087_gshared (List_1_t644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m19087(__this, ___item, method) (( void (*) (List_1_t644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m19087_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19088_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19088(__this, method) (( bool (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19088_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m19089_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19089(__this, method) (( bool (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m19089_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m19090_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m19090(__this, method) (( Object_t * (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m19090_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m19091_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m19091(__this, method) (( bool (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m19091_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m19092_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m19092(__this, method) (( bool (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m19092_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m19093_gshared (List_1_t644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m19093(__this, ___index, method) (( Object_t * (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m19093_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m19094_gshared (List_1_t644 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m19094(__this, ___index, ___value, method) (( void (*) (List_1_t644 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m19094_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::Add(T)
extern "C" void List_1_Add_m19095_gshared (List_1_t644 * __this, RaycastHit2D_t532  ___item, const MethodInfo* method);
#define List_1_Add_m19095(__this, ___item, method) (( void (*) (List_1_t644 *, RaycastHit2D_t532 , const MethodInfo*))List_1_Add_m19095_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m19096_gshared (List_1_t644 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m19096(__this, ___newCount, method) (( void (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19096_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m19097_gshared (List_1_t644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m19097(__this, ___collection, method) (( void (*) (List_1_t644 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19097_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m19098_gshared (List_1_t644 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m19098(__this, ___enumerable, method) (( void (*) (List_1_t644 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19098_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3897_gshared (List_1_t644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3897(__this, ___collection, method) (( void (*) (List_1_t644 *, Object_t*, const MethodInfo*))List_1_AddRange_m3897_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2595 * List_1_AsReadOnly_m19099_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m19099(__this, method) (( ReadOnlyCollection_1_t2595 * (*) (List_1_t644 *, const MethodInfo*))List_1_AsReadOnly_m19099_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::Clear()
extern "C" void List_1_Clear_m19100_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_Clear_m19100(__this, method) (( void (*) (List_1_t644 *, const MethodInfo*))List_1_Clear_m19100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::Contains(T)
extern "C" bool List_1_Contains_m19101_gshared (List_1_t644 * __this, RaycastHit2D_t532  ___item, const MethodInfo* method);
#define List_1_Contains_m19101(__this, ___item, method) (( bool (*) (List_1_t644 *, RaycastHit2D_t532 , const MethodInfo*))List_1_Contains_m19101_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m19102_gshared (List_1_t644 * __this, RaycastHit2DU5BU5D_t530* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m19102(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t644 *, RaycastHit2DU5BU5D_t530*, int32_t, const MethodInfo*))List_1_CopyTo_m19102_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::Find(System.Predicate`1<T>)
extern "C" RaycastHit2D_t532  List_1_Find_m19103_gshared (List_1_t644 * __this, Predicate_1_t2600 * ___match, const MethodInfo* method);
#define List_1_Find_m19103(__this, ___match, method) (( RaycastHit2D_t532  (*) (List_1_t644 *, Predicate_1_t2600 *, const MethodInfo*))List_1_Find_m19103_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m19104_gshared (Object_t * __this /* static, unused */, Predicate_1_t2600 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m19104(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2600 *, const MethodInfo*))List_1_CheckMatch_m19104_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t644 * List_1_FindAll_m19105_gshared (List_1_t644 * __this, Predicate_1_t2600 * ___match, const MethodInfo* method);
#define List_1_FindAll_m19105(__this, ___match, method) (( List_1_t644 * (*) (List_1_t644 *, Predicate_1_t2600 *, const MethodInfo*))List_1_FindAll_m19105_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t644 * List_1_FindAllStackBits_m19106_gshared (List_1_t644 * __this, Predicate_1_t2600 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m19106(__this, ___match, method) (( List_1_t644 * (*) (List_1_t644 *, Predicate_1_t2600 *, const MethodInfo*))List_1_FindAllStackBits_m19106_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t644 * List_1_FindAllList_m19107_gshared (List_1_t644 * __this, Predicate_1_t2600 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m19107(__this, ___match, method) (( List_1_t644 * (*) (List_1_t644 *, Predicate_1_t2600 *, const MethodInfo*))List_1_FindAllList_m19107_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m19108_gshared (List_1_t644 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2600 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m19108(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t644 *, int32_t, int32_t, Predicate_1_t2600 *, const MethodInfo*))List_1_GetIndex_m19108_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::GetEnumerator()
extern "C" Enumerator_t2594  List_1_GetEnumerator_m19109_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m19109(__this, method) (( Enumerator_t2594  (*) (List_1_t644 *, const MethodInfo*))List_1_GetEnumerator_m19109_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m19110_gshared (List_1_t644 * __this, RaycastHit2D_t532  ___item, const MethodInfo* method);
#define List_1_IndexOf_m19110(__this, ___item, method) (( int32_t (*) (List_1_t644 *, RaycastHit2D_t532 , const MethodInfo*))List_1_IndexOf_m19110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m19111_gshared (List_1_t644 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m19111(__this, ___start, ___delta, method) (( void (*) (List_1_t644 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19111_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m19112_gshared (List_1_t644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m19112(__this, ___index, method) (( void (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m19113_gshared (List_1_t644 * __this, int32_t ___index, RaycastHit2D_t532  ___item, const MethodInfo* method);
#define List_1_Insert_m19113(__this, ___index, ___item, method) (( void (*) (List_1_t644 *, int32_t, RaycastHit2D_t532 , const MethodInfo*))List_1_Insert_m19113_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m19114_gshared (List_1_t644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m19114(__this, ___collection, method) (( void (*) (List_1_t644 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19114_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::Remove(T)
extern "C" bool List_1_Remove_m19115_gshared (List_1_t644 * __this, RaycastHit2D_t532  ___item, const MethodInfo* method);
#define List_1_Remove_m19115(__this, ___item, method) (( bool (*) (List_1_t644 *, RaycastHit2D_t532 , const MethodInfo*))List_1_Remove_m19115_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m19116_gshared (List_1_t644 * __this, Predicate_1_t2600 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m19116(__this, ___match, method) (( int32_t (*) (List_1_t644 *, Predicate_1_t2600 *, const MethodInfo*))List_1_RemoveAll_m19116_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m19117_gshared (List_1_t644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m19117(__this, ___index, method) (( void (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_RemoveAt_m19117_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::Reverse()
extern "C" void List_1_Reverse_m19118_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_Reverse_m19118(__this, method) (( void (*) (List_1_t644 *, const MethodInfo*))List_1_Reverse_m19118_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::Sort()
extern "C" void List_1_Sort_m19119_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_Sort_m19119(__this, method) (( void (*) (List_1_t644 *, const MethodInfo*))List_1_Sort_m19119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m3899_gshared (List_1_t644 * __this, Comparison_1_t701 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m3899(__this, ___comparison, method) (( void (*) (List_1_t644 *, Comparison_1_t701 *, const MethodInfo*))List_1_Sort_m3899_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::ToArray()
extern "C" RaycastHit2DU5BU5D_t530* List_1_ToArray_m19120_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_ToArray_m19120(__this, method) (( RaycastHit2DU5BU5D_t530* (*) (List_1_t644 *, const MethodInfo*))List_1_ToArray_m19120_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::TrimExcess()
extern "C" void List_1_TrimExcess_m19121_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m19121(__this, method) (( void (*) (List_1_t644 *, const MethodInfo*))List_1_TrimExcess_m19121_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m19122_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m19122(__this, method) (( int32_t (*) (List_1_t644 *, const MethodInfo*))List_1_get_Capacity_m19122_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m19123_gshared (List_1_t644 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m19123(__this, ___value, method) (( void (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19123_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::get_Count()
extern "C" int32_t List_1_get_Count_m19124_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_get_Count_m19124(__this, method) (( int32_t (*) (List_1_t644 *, const MethodInfo*))List_1_get_Count_m19124_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::get_Item(System.Int32)
extern "C" RaycastHit2D_t532  List_1_get_Item_m19125_gshared (List_1_t644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m19125(__this, ___index, method) (( RaycastHit2D_t532  (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_get_Item_m19125_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m19126_gshared (List_1_t644 * __this, int32_t ___index, RaycastHit2D_t532  ___value, const MethodInfo* method);
#define List_1_set_Item_m19126(__this, ___index, ___value, method) (( void (*) (List_1_t644 *, int32_t, RaycastHit2D_t532 , const MethodInfo*))List_1_set_Item_m19126_gshared)(__this, ___index, ___value, method)
