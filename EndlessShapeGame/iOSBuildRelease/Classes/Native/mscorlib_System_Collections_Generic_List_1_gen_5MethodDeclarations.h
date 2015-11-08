#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t316;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t2917;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t2243;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t2918;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t2919;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t2246;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2251;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t279;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m2682_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1__ctor_m2682(__this, method) (( void (*) (List_1_t316 *, const MethodInfo*))List_1__ctor_m2682_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14041_gshared (List_1_t316 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14041(__this, ___collection, method) (( void (*) (List_1_t316 *, Object_t*, const MethodInfo*))List_1__ctor_m14041_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14042_gshared (List_1_t316 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14042(__this, ___capacity, method) (( void (*) (List_1_t316 *, int32_t, const MethodInfo*))List_1__ctor_m14042_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m14043_gshared (List_1_t316 * __this, RaycastResultU5BU5D_t2243* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m14043(__this, ___data, ___size, method) (( void (*) (List_1_t316 *, RaycastResultU5BU5D_t2243*, int32_t, const MethodInfo*))List_1__ctor_m14043_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m14044_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14044(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14044_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14045_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14045(__this, method) (( Object_t* (*) (List_1_t316 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14045_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14046_gshared (List_1_t316 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14046(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t316 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14046_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14047_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14047(__this, method) (( Object_t * (*) (List_1_t316 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14047_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14048_gshared (List_1_t316 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14048(__this, ___item, method) (( int32_t (*) (List_1_t316 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14048_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14049_gshared (List_1_t316 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14049(__this, ___item, method) (( bool (*) (List_1_t316 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14049_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14050_gshared (List_1_t316 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14050(__this, ___item, method) (( int32_t (*) (List_1_t316 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14050_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14051_gshared (List_1_t316 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14051(__this, ___index, ___item, method) (( void (*) (List_1_t316 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14051_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14052_gshared (List_1_t316 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14052(__this, ___item, method) (( void (*) (List_1_t316 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14052_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14053_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14053(__this, method) (( bool (*) (List_1_t316 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14053_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14054_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14054(__this, method) (( bool (*) (List_1_t316 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14054_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14055_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14055(__this, method) (( Object_t * (*) (List_1_t316 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14055_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14056_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14056(__this, method) (( bool (*) (List_1_t316 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14056_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14057_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14057(__this, method) (( bool (*) (List_1_t316 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14057_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14058_gshared (List_1_t316 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14058(__this, ___index, method) (( Object_t * (*) (List_1_t316 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14058_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14059_gshared (List_1_t316 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14059(__this, ___index, ___value, method) (( void (*) (List_1_t316 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14059_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m14060_gshared (List_1_t316 * __this, RaycastResult_t309  ___item, const MethodInfo* method);
#define List_1_Add_m14060(__this, ___item, method) (( void (*) (List_1_t316 *, RaycastResult_t309 , const MethodInfo*))List_1_Add_m14060_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14061_gshared (List_1_t316 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14061(__this, ___newCount, method) (( void (*) (List_1_t316 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14061_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14062_gshared (List_1_t316 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14062(__this, ___collection, method) (( void (*) (List_1_t316 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14062_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14063_gshared (List_1_t316 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14063(__this, ___enumerable, method) (( void (*) (List_1_t316 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14063_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14064_gshared (List_1_t316 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14064(__this, ___collection, method) (( void (*) (List_1_t316 *, Object_t*, const MethodInfo*))List_1_AddRange_m14064_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2246 * List_1_AsReadOnly_m14065_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14065(__this, method) (( ReadOnlyCollection_1_t2246 * (*) (List_1_t316 *, const MethodInfo*))List_1_AsReadOnly_m14065_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m14066_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_Clear_m14066(__this, method) (( void (*) (List_1_t316 *, const MethodInfo*))List_1_Clear_m14066_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m14067_gshared (List_1_t316 * __this, RaycastResult_t309  ___item, const MethodInfo* method);
#define List_1_Contains_m14067(__this, ___item, method) (( bool (*) (List_1_t316 *, RaycastResult_t309 , const MethodInfo*))List_1_Contains_m14067_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14068_gshared (List_1_t316 * __this, RaycastResultU5BU5D_t2243* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14068(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t316 *, RaycastResultU5BU5D_t2243*, int32_t, const MethodInfo*))List_1_CopyTo_m14068_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t309  List_1_Find_m14069_gshared (List_1_t316 * __this, Predicate_1_t2251 * ___match, const MethodInfo* method);
#define List_1_Find_m14069(__this, ___match, method) (( RaycastResult_t309  (*) (List_1_t316 *, Predicate_1_t2251 *, const MethodInfo*))List_1_Find_m14069_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14070_gshared (Object_t * __this /* static, unused */, Predicate_1_t2251 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14070(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2251 *, const MethodInfo*))List_1_CheckMatch_m14070_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t316 * List_1_FindAll_m14071_gshared (List_1_t316 * __this, Predicate_1_t2251 * ___match, const MethodInfo* method);
#define List_1_FindAll_m14071(__this, ___match, method) (( List_1_t316 * (*) (List_1_t316 *, Predicate_1_t2251 *, const MethodInfo*))List_1_FindAll_m14071_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t316 * List_1_FindAllStackBits_m14072_gshared (List_1_t316 * __this, Predicate_1_t2251 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m14072(__this, ___match, method) (( List_1_t316 * (*) (List_1_t316 *, Predicate_1_t2251 *, const MethodInfo*))List_1_FindAllStackBits_m14072_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t316 * List_1_FindAllList_m14073_gshared (List_1_t316 * __this, Predicate_1_t2251 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m14073(__this, ___match, method) (( List_1_t316 * (*) (List_1_t316 *, Predicate_1_t2251 *, const MethodInfo*))List_1_FindAllList_m14073_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14074_gshared (List_1_t316 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2251 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14074(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t316 *, int32_t, int32_t, Predicate_1_t2251 *, const MethodInfo*))List_1_GetIndex_m14074_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t2245  List_1_GetEnumerator_m14075_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14075(__this, method) (( Enumerator_t2245  (*) (List_1_t316 *, const MethodInfo*))List_1_GetEnumerator_m14075_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14076_gshared (List_1_t316 * __this, RaycastResult_t309  ___item, const MethodInfo* method);
#define List_1_IndexOf_m14076(__this, ___item, method) (( int32_t (*) (List_1_t316 *, RaycastResult_t309 , const MethodInfo*))List_1_IndexOf_m14076_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14077_gshared (List_1_t316 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14077(__this, ___start, ___delta, method) (( void (*) (List_1_t316 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14077_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14078_gshared (List_1_t316 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14078(__this, ___index, method) (( void (*) (List_1_t316 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14078_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14079_gshared (List_1_t316 * __this, int32_t ___index, RaycastResult_t309  ___item, const MethodInfo* method);
#define List_1_Insert_m14079(__this, ___index, ___item, method) (( void (*) (List_1_t316 *, int32_t, RaycastResult_t309 , const MethodInfo*))List_1_Insert_m14079_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14080_gshared (List_1_t316 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14080(__this, ___collection, method) (( void (*) (List_1_t316 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14080_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m14081_gshared (List_1_t316 * __this, RaycastResult_t309  ___item, const MethodInfo* method);
#define List_1_Remove_m14081(__this, ___item, method) (( bool (*) (List_1_t316 *, RaycastResult_t309 , const MethodInfo*))List_1_Remove_m14081_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14082_gshared (List_1_t316 * __this, Predicate_1_t2251 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14082(__this, ___match, method) (( int32_t (*) (List_1_t316 *, Predicate_1_t2251 *, const MethodInfo*))List_1_RemoveAll_m14082_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14083_gshared (List_1_t316 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14083(__this, ___index, method) (( void (*) (List_1_t316 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14083_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m14084_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_Reverse_m14084(__this, method) (( void (*) (List_1_t316 *, const MethodInfo*))List_1_Reverse_m14084_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m14085_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_Sort_m14085(__this, method) (( void (*) (List_1_t316 *, const MethodInfo*))List_1_Sort_m14085_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m2644_gshared (List_1_t316 * __this, Comparison_1_t279 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m2644(__this, ___comparison, method) (( void (*) (List_1_t316 *, Comparison_1_t279 *, const MethodInfo*))List_1_Sort_m2644_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t2243* List_1_ToArray_m14086_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_ToArray_m14086(__this, method) (( RaycastResultU5BU5D_t2243* (*) (List_1_t316 *, const MethodInfo*))List_1_ToArray_m14086_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m14087_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14087(__this, method) (( void (*) (List_1_t316 *, const MethodInfo*))List_1_TrimExcess_m14087_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14088_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14088(__this, method) (( int32_t (*) (List_1_t316 *, const MethodInfo*))List_1_get_Capacity_m14088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14089_gshared (List_1_t316 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14089(__this, ___value, method) (( void (*) (List_1_t316 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14089_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m14090_gshared (List_1_t316 * __this, const MethodInfo* method);
#define List_1_get_Count_m14090(__this, method) (( int32_t (*) (List_1_t316 *, const MethodInfo*))List_1_get_Count_m14090_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t309  List_1_get_Item_m14091_gshared (List_1_t316 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14091(__this, ___index, method) (( RaycastResult_t309  (*) (List_1_t316 *, int32_t, const MethodInfo*))List_1_get_Item_m14091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14092_gshared (List_1_t316 * __this, int32_t ___index, RaycastResult_t309  ___value, const MethodInfo* method);
#define List_1_set_Item_m14092(__this, ___index, ___value, method) (( void (*) (List_1_t316 *, int32_t, RaycastResult_t309 , const MethodInfo*))List_1_set_Item_m14092_gshared)(__this, ___index, ___value, method)
