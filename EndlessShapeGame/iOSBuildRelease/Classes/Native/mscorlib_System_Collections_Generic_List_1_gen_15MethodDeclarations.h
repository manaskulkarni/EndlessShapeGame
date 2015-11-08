#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t508;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t2932;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t398;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2933;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t566;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t2381;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2385;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2388;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m3185_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1__ctor_m3185(__this, method) (( void (*) (List_1_t508 *, const MethodInfo*))List_1__ctor_m3185_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15836_gshared (List_1_t508 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15836(__this, ___collection, method) (( void (*) (List_1_t508 *, Object_t*, const MethodInfo*))List_1__ctor_m15836_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m5218_gshared (List_1_t508 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m5218(__this, ___capacity, method) (( void (*) (List_1_t508 *, int32_t, const MethodInfo*))List_1__ctor_m5218_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m15837_gshared (List_1_t508 * __this, UIVertexU5BU5D_t398* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m15837(__this, ___data, ___size, method) (( void (*) (List_1_t508 *, UIVertexU5BU5D_t398*, int32_t, const MethodInfo*))List_1__ctor_m15837_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m15838_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15838(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15838_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15839_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15839(__this, method) (( Object_t* (*) (List_1_t508 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15839_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15840_gshared (List_1_t508 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15840(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t508 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15840_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15841_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15841(__this, method) (( Object_t * (*) (List_1_t508 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15841_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15842_gshared (List_1_t508 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15842(__this, ___item, method) (( int32_t (*) (List_1_t508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15842_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15843_gshared (List_1_t508 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15843(__this, ___item, method) (( bool (*) (List_1_t508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15843_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15844_gshared (List_1_t508 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15844(__this, ___item, method) (( int32_t (*) (List_1_t508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15844_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15845_gshared (List_1_t508 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15845(__this, ___index, ___item, method) (( void (*) (List_1_t508 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15845_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15846_gshared (List_1_t508 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15846(__this, ___item, method) (( void (*) (List_1_t508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15846_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15847_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15847(__this, method) (( bool (*) (List_1_t508 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15848_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15848(__this, method) (( bool (*) (List_1_t508 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15848_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15849_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15849(__this, method) (( Object_t * (*) (List_1_t508 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15849_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15850_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15850(__this, method) (( bool (*) (List_1_t508 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15850_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15851_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15851(__this, method) (( bool (*) (List_1_t508 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15851_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15852_gshared (List_1_t508 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15852(__this, ___index, method) (( Object_t * (*) (List_1_t508 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15852_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15853_gshared (List_1_t508 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15853(__this, ___index, ___value, method) (( void (*) (List_1_t508 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15853_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m15854_gshared (List_1_t508 * __this, UIVertex_t403  ___item, const MethodInfo* method);
#define List_1_Add_m15854(__this, ___item, method) (( void (*) (List_1_t508 *, UIVertex_t403 , const MethodInfo*))List_1_Add_m15854_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15855_gshared (List_1_t508 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15855(__this, ___newCount, method) (( void (*) (List_1_t508 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15855_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15856_gshared (List_1_t508 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15856(__this, ___collection, method) (( void (*) (List_1_t508 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15856_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15857_gshared (List_1_t508 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15857(__this, ___enumerable, method) (( void (*) (List_1_t508 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15857_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15858_gshared (List_1_t508 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15858(__this, ___collection, method) (( void (*) (List_1_t508 *, Object_t*, const MethodInfo*))List_1_AddRange_m15858_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2381 * List_1_AsReadOnly_m15859_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15859(__this, method) (( ReadOnlyCollection_1_t2381 * (*) (List_1_t508 *, const MethodInfo*))List_1_AsReadOnly_m15859_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m15860_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_Clear_m15860(__this, method) (( void (*) (List_1_t508 *, const MethodInfo*))List_1_Clear_m15860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m15861_gshared (List_1_t508 * __this, UIVertex_t403  ___item, const MethodInfo* method);
#define List_1_Contains_m15861(__this, ___item, method) (( bool (*) (List_1_t508 *, UIVertex_t403 , const MethodInfo*))List_1_Contains_m15861_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15862_gshared (List_1_t508 * __this, UIVertexU5BU5D_t398* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15862(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t508 *, UIVertexU5BU5D_t398*, int32_t, const MethodInfo*))List_1_CopyTo_m15862_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t403  List_1_Find_m15863_gshared (List_1_t508 * __this, Predicate_1_t2385 * ___match, const MethodInfo* method);
#define List_1_Find_m15863(__this, ___match, method) (( UIVertex_t403  (*) (List_1_t508 *, Predicate_1_t2385 *, const MethodInfo*))List_1_Find_m15863_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15864_gshared (Object_t * __this /* static, unused */, Predicate_1_t2385 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15864(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2385 *, const MethodInfo*))List_1_CheckMatch_m15864_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t508 * List_1_FindAll_m15865_gshared (List_1_t508 * __this, Predicate_1_t2385 * ___match, const MethodInfo* method);
#define List_1_FindAll_m15865(__this, ___match, method) (( List_1_t508 * (*) (List_1_t508 *, Predicate_1_t2385 *, const MethodInfo*))List_1_FindAll_m15865_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t508 * List_1_FindAllStackBits_m15866_gshared (List_1_t508 * __this, Predicate_1_t2385 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m15866(__this, ___match, method) (( List_1_t508 * (*) (List_1_t508 *, Predicate_1_t2385 *, const MethodInfo*))List_1_FindAllStackBits_m15866_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t508 * List_1_FindAllList_m15867_gshared (List_1_t508 * __this, Predicate_1_t2385 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m15867(__this, ___match, method) (( List_1_t508 * (*) (List_1_t508 *, Predicate_1_t2385 *, const MethodInfo*))List_1_FindAllList_m15867_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15868_gshared (List_1_t508 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2385 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15868(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t508 *, int32_t, int32_t, Predicate_1_t2385 *, const MethodInfo*))List_1_GetIndex_m15868_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2380  List_1_GetEnumerator_m15869_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15869(__this, method) (( Enumerator_t2380  (*) (List_1_t508 *, const MethodInfo*))List_1_GetEnumerator_m15869_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15870_gshared (List_1_t508 * __this, UIVertex_t403  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15870(__this, ___item, method) (( int32_t (*) (List_1_t508 *, UIVertex_t403 , const MethodInfo*))List_1_IndexOf_m15870_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15871_gshared (List_1_t508 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15871(__this, ___start, ___delta, method) (( void (*) (List_1_t508 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15871_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15872_gshared (List_1_t508 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15872(__this, ___index, method) (( void (*) (List_1_t508 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15872_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15873_gshared (List_1_t508 * __this, int32_t ___index, UIVertex_t403  ___item, const MethodInfo* method);
#define List_1_Insert_m15873(__this, ___index, ___item, method) (( void (*) (List_1_t508 *, int32_t, UIVertex_t403 , const MethodInfo*))List_1_Insert_m15873_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15874_gshared (List_1_t508 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15874(__this, ___collection, method) (( void (*) (List_1_t508 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15874_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m15875_gshared (List_1_t508 * __this, UIVertex_t403  ___item, const MethodInfo* method);
#define List_1_Remove_m15875(__this, ___item, method) (( bool (*) (List_1_t508 *, UIVertex_t403 , const MethodInfo*))List_1_Remove_m15875_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15876_gshared (List_1_t508 * __this, Predicate_1_t2385 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15876(__this, ___match, method) (( int32_t (*) (List_1_t508 *, Predicate_1_t2385 *, const MethodInfo*))List_1_RemoveAll_m15876_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15877_gshared (List_1_t508 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15877(__this, ___index, method) (( void (*) (List_1_t508 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15877_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m15878_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_Reverse_m15878(__this, method) (( void (*) (List_1_t508 *, const MethodInfo*))List_1_Reverse_m15878_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m15879_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_Sort_m15879(__this, method) (( void (*) (List_1_t508 *, const MethodInfo*))List_1_Sort_m15879_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15880_gshared (List_1_t508 * __this, Comparison_1_t2388 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15880(__this, ___comparison, method) (( void (*) (List_1_t508 *, Comparison_1_t2388 *, const MethodInfo*))List_1_Sort_m15880_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t398* List_1_ToArray_m15881_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_ToArray_m15881(__this, method) (( UIVertexU5BU5D_t398* (*) (List_1_t508 *, const MethodInfo*))List_1_ToArray_m15881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m15882_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15882(__this, method) (( void (*) (List_1_t508 *, const MethodInfo*))List_1_TrimExcess_m15882_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m3186_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m3186(__this, method) (( int32_t (*) (List_1_t508 *, const MethodInfo*))List_1_get_Capacity_m3186_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m3187_gshared (List_1_t508 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m3187(__this, ___value, method) (( void (*) (List_1_t508 *, int32_t, const MethodInfo*))List_1_set_Capacity_m3187_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m15883_gshared (List_1_t508 * __this, const MethodInfo* method);
#define List_1_get_Count_m15883(__this, method) (( int32_t (*) (List_1_t508 *, const MethodInfo*))List_1_get_Count_m15883_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t403  List_1_get_Item_m15884_gshared (List_1_t508 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15884(__this, ___index, method) (( UIVertex_t403  (*) (List_1_t508 *, int32_t, const MethodInfo*))List_1_get_Item_m15884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15885_gshared (List_1_t508 * __this, int32_t ___index, UIVertex_t403  ___value, const MethodInfo* method);
#define List_1_set_Item_m15885(__this, ___index, ___value, method) (( void (*) (List_1_t508 *, int32_t, UIVertex_t403 , const MethodInfo*))List_1_set_Item_m15885_gshared)(__this, ___index, ___value, method)
