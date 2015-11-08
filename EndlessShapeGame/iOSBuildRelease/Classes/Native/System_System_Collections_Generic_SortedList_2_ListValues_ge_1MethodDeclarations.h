#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>
struct ListValues_t2787;
// System.Collections.Generic.SortedList`2<System.Object,System.Object>
struct SortedList_2_t2785;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t234;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2458;
// System.Array
struct Array_t;

// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
extern "C" void ListValues__ctor_m21750_gshared (ListValues_t2787 * __this, SortedList_2_t2785 * ___host, const MethodInfo* method);
#define ListValues__ctor_m21750(__this, ___host, method) (( void (*) (ListValues_t2787 *, SortedList_2_t2785 *, const MethodInfo*))ListValues__ctor_m21750_gshared)(__this, ___host, method)
// System.Collections.IEnumerator System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ListValues_System_Collections_IEnumerable_GetEnumerator_m21751_gshared (ListValues_t2787 * __this, const MethodInfo* method);
#define ListValues_System_Collections_IEnumerable_GetEnumerator_m21751(__this, method) (( Object_t * (*) (ListValues_t2787 *, const MethodInfo*))ListValues_System_Collections_IEnumerable_GetEnumerator_m21751_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::Add(TValue)
extern "C" void ListValues_Add_m21752_gshared (ListValues_t2787 * __this, Object_t * ___item, const MethodInfo* method);
#define ListValues_Add_m21752(__this, ___item, method) (( void (*) (ListValues_t2787 *, Object_t *, const MethodInfo*))ListValues_Add_m21752_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::Remove(TValue)
extern "C" bool ListValues_Remove_m21753_gshared (ListValues_t2787 * __this, Object_t * ___value, const MethodInfo* method);
#define ListValues_Remove_m21753(__this, ___value, method) (( bool (*) (ListValues_t2787 *, Object_t *, const MethodInfo*))ListValues_Remove_m21753_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::Clear()
extern "C" void ListValues_Clear_m21754_gshared (ListValues_t2787 * __this, const MethodInfo* method);
#define ListValues_Clear_m21754(__this, method) (( void (*) (ListValues_t2787 *, const MethodInfo*))ListValues_Clear_m21754_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ListValues_CopyTo_m21755_gshared (ListValues_t2787 * __this, ObjectU5BU5D_t234* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ListValues_CopyTo_m21755(__this, ___array, ___arrayIndex, method) (( void (*) (ListValues_t2787 *, ObjectU5BU5D_t234*, int32_t, const MethodInfo*))ListValues_CopyTo_m21755_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::Contains(TValue)
extern "C" bool ListValues_Contains_m21756_gshared (ListValues_t2787 * __this, Object_t * ___item, const MethodInfo* method);
#define ListValues_Contains_m21756(__this, ___item, method) (( bool (*) (ListValues_t2787 *, Object_t *, const MethodInfo*))ListValues_Contains_m21756_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::IndexOf(TValue)
extern "C" int32_t ListValues_IndexOf_m21757_gshared (ListValues_t2787 * __this, Object_t * ___item, const MethodInfo* method);
#define ListValues_IndexOf_m21757(__this, ___item, method) (( int32_t (*) (ListValues_t2787 *, Object_t *, const MethodInfo*))ListValues_IndexOf_m21757_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::Insert(System.Int32,TValue)
extern "C" void ListValues_Insert_m21758_gshared (ListValues_t2787 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define ListValues_Insert_m21758(__this, ___index, ___item, method) (( void (*) (ListValues_t2787 *, int32_t, Object_t *, const MethodInfo*))ListValues_Insert_m21758_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::RemoveAt(System.Int32)
extern "C" void ListValues_RemoveAt_m21759_gshared (ListValues_t2787 * __this, int32_t ___index, const MethodInfo* method);
#define ListValues_RemoveAt_m21759(__this, ___index, method) (( void (*) (ListValues_t2787 *, int32_t, const MethodInfo*))ListValues_RemoveAt_m21759_gshared)(__this, ___index, method)
// TValue System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::get_Item(System.Int32)
extern "C" Object_t * ListValues_get_Item_m21760_gshared (ListValues_t2787 * __this, int32_t ___index, const MethodInfo* method);
#define ListValues_get_Item_m21760(__this, ___index, method) (( Object_t * (*) (ListValues_t2787 *, int32_t, const MethodInfo*))ListValues_get_Item_m21760_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::set_Item(System.Int32,TValue)
extern "C" void ListValues_set_Item_m21761_gshared (ListValues_t2787 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ListValues_set_Item_m21761(__this, ___index, ___value, method) (( void (*) (ListValues_t2787 *, int32_t, Object_t *, const MethodInfo*))ListValues_set_Item_m21761_gshared)(__this, ___index, ___value, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ListValues_GetEnumerator_m21762_gshared (ListValues_t2787 * __this, const MethodInfo* method);
#define ListValues_GetEnumerator_m21762(__this, method) (( Object_t* (*) (ListValues_t2787 *, const MethodInfo*))ListValues_GetEnumerator_m21762_gshared)(__this, method)
// System.Int32 System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::get_Count()
extern "C" int32_t ListValues_get_Count_m21763_gshared (ListValues_t2787 * __this, const MethodInfo* method);
#define ListValues_get_Count_m21763(__this, method) (( int32_t (*) (ListValues_t2787 *, const MethodInfo*))ListValues_get_Count_m21763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::get_IsSynchronized()
extern "C" bool ListValues_get_IsSynchronized_m21764_gshared (ListValues_t2787 * __this, const MethodInfo* method);
#define ListValues_get_IsSynchronized_m21764(__this, method) (( bool (*) (ListValues_t2787 *, const MethodInfo*))ListValues_get_IsSynchronized_m21764_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ListValues_get_IsReadOnly_m21765_gshared (ListValues_t2787 * __this, const MethodInfo* method);
#define ListValues_get_IsReadOnly_m21765(__this, method) (( bool (*) (ListValues_t2787 *, const MethodInfo*))ListValues_get_IsReadOnly_m21765_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::get_SyncRoot()
extern "C" Object_t * ListValues_get_SyncRoot_m21766_gshared (ListValues_t2787 * __this, const MethodInfo* method);
#define ListValues_get_SyncRoot_m21766(__this, method) (( Object_t * (*) (ListValues_t2787 *, const MethodInfo*))ListValues_get_SyncRoot_m21766_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::CopyTo(System.Array,System.Int32)
extern "C" void ListValues_CopyTo_m21767_gshared (ListValues_t2787 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ListValues_CopyTo_m21767(__this, ___array, ___arrayIndex, method) (( void (*) (ListValues_t2787 *, Array_t *, int32_t, const MethodInfo*))ListValues_CopyTo_m21767_gshared)(__this, ___array, ___arrayIndex, method)
