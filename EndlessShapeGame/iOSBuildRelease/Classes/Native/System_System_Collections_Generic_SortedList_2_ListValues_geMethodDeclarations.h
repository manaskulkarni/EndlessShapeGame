#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>
struct ListValues_t2137;
// System.Collections.Generic.SortedList`2<System.Single,System.Object>
struct SortedList_2_t2133;
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

// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
extern "C" void ListValues__ctor_m12880_gshared (ListValues_t2137 * __this, SortedList_2_t2133 * ___host, const MethodInfo* method);
#define ListValues__ctor_m12880(__this, ___host, method) (( void (*) (ListValues_t2137 *, SortedList_2_t2133 *, const MethodInfo*))ListValues__ctor_m12880_gshared)(__this, ___host, method)
// System.Collections.IEnumerator System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ListValues_System_Collections_IEnumerable_GetEnumerator_m12881_gshared (ListValues_t2137 * __this, const MethodInfo* method);
#define ListValues_System_Collections_IEnumerable_GetEnumerator_m12881(__this, method) (( Object_t * (*) (ListValues_t2137 *, const MethodInfo*))ListValues_System_Collections_IEnumerable_GetEnumerator_m12881_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::Add(TValue)
extern "C" void ListValues_Add_m12882_gshared (ListValues_t2137 * __this, Object_t * ___item, const MethodInfo* method);
#define ListValues_Add_m12882(__this, ___item, method) (( void (*) (ListValues_t2137 *, Object_t *, const MethodInfo*))ListValues_Add_m12882_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::Remove(TValue)
extern "C" bool ListValues_Remove_m12883_gshared (ListValues_t2137 * __this, Object_t * ___value, const MethodInfo* method);
#define ListValues_Remove_m12883(__this, ___value, method) (( bool (*) (ListValues_t2137 *, Object_t *, const MethodInfo*))ListValues_Remove_m12883_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::Clear()
extern "C" void ListValues_Clear_m12884_gshared (ListValues_t2137 * __this, const MethodInfo* method);
#define ListValues_Clear_m12884(__this, method) (( void (*) (ListValues_t2137 *, const MethodInfo*))ListValues_Clear_m12884_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ListValues_CopyTo_m12885_gshared (ListValues_t2137 * __this, ObjectU5BU5D_t234* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ListValues_CopyTo_m12885(__this, ___array, ___arrayIndex, method) (( void (*) (ListValues_t2137 *, ObjectU5BU5D_t234*, int32_t, const MethodInfo*))ListValues_CopyTo_m12885_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::Contains(TValue)
extern "C" bool ListValues_Contains_m12886_gshared (ListValues_t2137 * __this, Object_t * ___item, const MethodInfo* method);
#define ListValues_Contains_m12886(__this, ___item, method) (( bool (*) (ListValues_t2137 *, Object_t *, const MethodInfo*))ListValues_Contains_m12886_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::IndexOf(TValue)
extern "C" int32_t ListValues_IndexOf_m12887_gshared (ListValues_t2137 * __this, Object_t * ___item, const MethodInfo* method);
#define ListValues_IndexOf_m12887(__this, ___item, method) (( int32_t (*) (ListValues_t2137 *, Object_t *, const MethodInfo*))ListValues_IndexOf_m12887_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::Insert(System.Int32,TValue)
extern "C" void ListValues_Insert_m12888_gshared (ListValues_t2137 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define ListValues_Insert_m12888(__this, ___index, ___item, method) (( void (*) (ListValues_t2137 *, int32_t, Object_t *, const MethodInfo*))ListValues_Insert_m12888_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::RemoveAt(System.Int32)
extern "C" void ListValues_RemoveAt_m12889_gshared (ListValues_t2137 * __this, int32_t ___index, const MethodInfo* method);
#define ListValues_RemoveAt_m12889(__this, ___index, method) (( void (*) (ListValues_t2137 *, int32_t, const MethodInfo*))ListValues_RemoveAt_m12889_gshared)(__this, ___index, method)
// TValue System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::get_Item(System.Int32)
extern "C" Object_t * ListValues_get_Item_m12890_gshared (ListValues_t2137 * __this, int32_t ___index, const MethodInfo* method);
#define ListValues_get_Item_m12890(__this, ___index, method) (( Object_t * (*) (ListValues_t2137 *, int32_t, const MethodInfo*))ListValues_get_Item_m12890_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::set_Item(System.Int32,TValue)
extern "C" void ListValues_set_Item_m12891_gshared (ListValues_t2137 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ListValues_set_Item_m12891(__this, ___index, ___value, method) (( void (*) (ListValues_t2137 *, int32_t, Object_t *, const MethodInfo*))ListValues_set_Item_m12891_gshared)(__this, ___index, ___value, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::GetEnumerator()
extern "C" Object_t* ListValues_GetEnumerator_m12892_gshared (ListValues_t2137 * __this, const MethodInfo* method);
#define ListValues_GetEnumerator_m12892(__this, method) (( Object_t* (*) (ListValues_t2137 *, const MethodInfo*))ListValues_GetEnumerator_m12892_gshared)(__this, method)
// System.Int32 System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::get_Count()
extern "C" int32_t ListValues_get_Count_m12893_gshared (ListValues_t2137 * __this, const MethodInfo* method);
#define ListValues_get_Count_m12893(__this, method) (( int32_t (*) (ListValues_t2137 *, const MethodInfo*))ListValues_get_Count_m12893_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::get_IsSynchronized()
extern "C" bool ListValues_get_IsSynchronized_m12894_gshared (ListValues_t2137 * __this, const MethodInfo* method);
#define ListValues_get_IsSynchronized_m12894(__this, method) (( bool (*) (ListValues_t2137 *, const MethodInfo*))ListValues_get_IsSynchronized_m12894_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::get_IsReadOnly()
extern "C" bool ListValues_get_IsReadOnly_m12895_gshared (ListValues_t2137 * __this, const MethodInfo* method);
#define ListValues_get_IsReadOnly_m12895(__this, method) (( bool (*) (ListValues_t2137 *, const MethodInfo*))ListValues_get_IsReadOnly_m12895_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::get_SyncRoot()
extern "C" Object_t * ListValues_get_SyncRoot_m12896_gshared (ListValues_t2137 * __this, const MethodInfo* method);
#define ListValues_get_SyncRoot_m12896(__this, method) (( Object_t * (*) (ListValues_t2137 *, const MethodInfo*))ListValues_get_SyncRoot_m12896_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Single,System.Object>::CopyTo(System.Array,System.Int32)
extern "C" void ListValues_CopyTo_m12897_gshared (ListValues_t2137 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ListValues_CopyTo_m12897(__this, ___array, ___arrayIndex, method) (( void (*) (ListValues_t2137 *, Array_t *, int32_t, const MethodInfo*))ListValues_CopyTo_m12897_gshared)(__this, ___array, ___arrayIndex, method)
