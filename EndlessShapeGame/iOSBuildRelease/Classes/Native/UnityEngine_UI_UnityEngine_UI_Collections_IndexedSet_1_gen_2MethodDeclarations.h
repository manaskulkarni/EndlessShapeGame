#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2307;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2458;
// System.Object[]
struct ObjectU5BU5D_t234;
// System.Predicate`1<System.Object>
struct Predicate_1_t2118;
// System.Comparison`1<System.Object>
struct Comparison_1_t2122;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m14904_gshared (IndexedSet_1_t2307 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m14904(__this, method) (( void (*) (IndexedSet_1_t2307 *, const MethodInfo*))IndexedSet_1__ctor_m14904_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14906_gshared (IndexedSet_1_t2307 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14906(__this, method) (( Object_t * (*) (IndexedSet_1_t2307 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14906_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m14908_gshared (IndexedSet_1_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m14908(__this, ___item, method) (( void (*) (IndexedSet_1_t2307 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m14908_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14910_gshared (IndexedSet_1_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m14910(__this, ___item, method) (( bool (*) (IndexedSet_1_t2307 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m14910_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14912_gshared (IndexedSet_1_t2307 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m14912(__this, method) (( Object_t* (*) (IndexedSet_1_t2307 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m14912_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14914_gshared (IndexedSet_1_t2307 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m14914(__this, method) (( void (*) (IndexedSet_1_t2307 *, const MethodInfo*))IndexedSet_1_Clear_m14914_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14916_gshared (IndexedSet_1_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m14916(__this, ___item, method) (( bool (*) (IndexedSet_1_t2307 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m14916_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14918_gshared (IndexedSet_1_t2307 * __this, ObjectU5BU5D_t234* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m14918(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2307 *, ObjectU5BU5D_t234*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m14918_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14920_gshared (IndexedSet_1_t2307 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m14920(__this, method) (( int32_t (*) (IndexedSet_1_t2307 *, const MethodInfo*))IndexedSet_1_get_Count_m14920_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14922_gshared (IndexedSet_1_t2307 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14922(__this, method) (( bool (*) (IndexedSet_1_t2307 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m14922_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14924_gshared (IndexedSet_1_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m14924(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2307 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m14924_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14926_gshared (IndexedSet_1_t2307 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m14926(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2307 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m14926_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14928_gshared (IndexedSet_1_t2307 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14928(__this, ___index, method) (( void (*) (IndexedSet_1_t2307 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m14928_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14930_gshared (IndexedSet_1_t2307 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m14930(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2307 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m14930_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14932_gshared (IndexedSet_1_t2307 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m14932(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2307 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m14932_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m14933_gshared (IndexedSet_1_t2307 * __this, Predicate_1_t2118 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m14933(__this, ___match, method) (( void (*) (IndexedSet_1_t2307 *, Predicate_1_t2118 *, const MethodInfo*))IndexedSet_1_RemoveAll_m14933_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14934_gshared (IndexedSet_1_t2307 * __this, Comparison_1_t2122 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m14934(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2307 *, Comparison_1_t2122 *, const MethodInfo*))IndexedSet_1_Sort_m14934_gshared)(__this, ___sortLayoutFunction, method)
