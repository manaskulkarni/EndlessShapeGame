#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.List`1<System.Object>
struct List_1_t2769;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2458;
// System.Object[]
struct ObjectU5BU5D_t234;
// System.String
struct String_t;

// System.Void Boo.Lang.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m21458_gshared (List_1_t2769 * __this, const MethodInfo* method);
#define List_1__ctor_m21458(__this, method) (( void (*) (List_1_t2769 *, const MethodInfo*))List_1__ctor_m21458_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m21459_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21459(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21459_gshared)(__this /* static, unused */, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21460_gshared (List_1_t2769 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21460(__this, ___item, method) (( void (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21460_gshared)(__this, ___item, method)
// System.Collections.IEnumerator Boo.Lang.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m21461_gshared (List_1_t2769 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21461(__this, method) (( Object_t * (*) (List_1_t2769 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21461_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void List_1_System_Collections_Generic_IListU3CTU3E_Insert_m21462_gshared (List_1_t2769 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_Insert_m21462(__this, ___index, ___item, method) (( void (*) (List_1_t2769 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_Generic_IListU3CTU3E_Insert_m21462_gshared)(__this, ___index, ___item, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m21463_gshared (List_1_t2769 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m21463(__this, ___index, method) (( void (*) (List_1_t2769 *, int32_t, const MethodInfo*))List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m21463_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m21464_gshared (List_1_t2769 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m21464(__this, ___item, method) (( bool (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m21464_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m21465_gshared (List_1_t2769 * __this, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m21465(__this, ___value, method) (( int32_t (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21465_gshared)(__this, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m21466_gshared (List_1_t2769 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m21466(__this, ___index, ___value, method) (( void (*) (List_1_t2769 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21466_gshared)(__this, ___index, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m21467_gshared (List_1_t2769 * __this, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m21467(__this, ___value, method) (( void (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21467_gshared)(__this, ___value, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m21468_gshared (List_1_t2769 * __this, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m21468(__this, ___value, method) (( int32_t (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21468_gshared)(__this, ___value, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m21469_gshared (List_1_t2769 * __this, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m21469(__this, ___value, method) (( bool (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21469_gshared)(__this, ___value, method)
// System.Object Boo.Lang.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m21470_gshared (List_1_t2769 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m21470(__this, ___index, method) (( Object_t * (*) (List_1_t2769 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21470_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m21471_gshared (List_1_t2769 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m21471(__this, ___index, ___value, method) (( void (*) (List_1_t2769 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21471_gshared)(__this, ___index, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void List_1_System_Collections_IList_RemoveAt_m21472_gshared (List_1_t2769 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_RemoveAt_m21472(__this, ___index, method) (( void (*) (List_1_t2769 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_RemoveAt_m21472_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m21473_gshared (List_1_t2769 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m21473(__this, method) (( bool (*) (List_1_t2769 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21473_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m21474_gshared (List_1_t2769 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m21474(__this, ___array, ___index, method) (( void (*) (List_1_t2769 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21474_gshared)(__this, ___array, ___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m21475_gshared (List_1_t2769 * __this, const MethodInfo* method);
#define List_1_get_Count_m21475(__this, method) (( int32_t (*) (List_1_t2769 *, const MethodInfo*))List_1_get_Count_m21475_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> Boo.Lang.List`1<System.Object>::GetEnumerator()
extern "C" Object_t* List_1_GetEnumerator_m21476_gshared (List_1_t2769 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m21476(__this, method) (( Object_t* (*) (List_1_t2769 *, const MethodInfo*))List_1_GetEnumerator_m21476_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m21477_gshared (List_1_t2769 * __this, ObjectU5BU5D_t234* ___target, int32_t ___index, const MethodInfo* method);
#define List_1_CopyTo_m21477(__this, ___target, ___index, method) (( void (*) (List_1_t2769 *, ObjectU5BU5D_t234*, int32_t, const MethodInfo*))List_1_CopyTo_m21477_gshared)(__this, ___target, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsSynchronized()
extern "C" bool List_1_get_IsSynchronized_m21478_gshared (List_1_t2769 * __this, const MethodInfo* method);
#define List_1_get_IsSynchronized_m21478(__this, method) (( bool (*) (List_1_t2769 *, const MethodInfo*))List_1_get_IsSynchronized_m21478_gshared)(__this, method)
// System.Object Boo.Lang.List`1<System.Object>::get_SyncRoot()
extern "C" Object_t * List_1_get_SyncRoot_m21479_gshared (List_1_t2769 * __this, const MethodInfo* method);
#define List_1_get_SyncRoot_m21479(__this, method) (( Object_t * (*) (List_1_t2769 *, const MethodInfo*))List_1_get_SyncRoot_m21479_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsReadOnly()
extern "C" bool List_1_get_IsReadOnly_m21480_gshared (List_1_t2769 * __this, const MethodInfo* method);
#define List_1_get_IsReadOnly_m21480(__this, method) (( bool (*) (List_1_t2769 *, const MethodInfo*))List_1_get_IsReadOnly_m21480_gshared)(__this, method)
// T Boo.Lang.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m21481_gshared (List_1_t2769 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m21481(__this, ___index, method) (( Object_t * (*) (List_1_t2769 *, int32_t, const MethodInfo*))List_1_get_Item_m21481_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m21482_gshared (List_1_t2769 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m21482(__this, ___index, ___value, method) (( void (*) (List_1_t2769 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m21482_gshared)(__this, ___index, ___value, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Push(T)
extern "C" List_1_t2769 * List_1_Push_m21483_gshared (List_1_t2769 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Push_m21483(__this, ___item, method) (( List_1_t2769 * (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_Push_m21483_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Add(T)
extern "C" List_1_t2769 * List_1_Add_m21484_gshared (List_1_t2769 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m21484(__this, ___item, method) (( List_1_t2769 * (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_Add_m21484_gshared)(__this, ___item, method)
// System.String Boo.Lang.List`1<System.Object>::ToString()
extern "C" String_t* List_1_ToString_m21485_gshared (List_1_t2769 * __this, const MethodInfo* method);
#define List_1_ToString_m21485(__this, method) (( String_t* (*) (List_1_t2769 *, const MethodInfo*))List_1_ToString_m21485_gshared)(__this, method)
// System.String Boo.Lang.List`1<System.Object>::Join(System.String)
extern "C" String_t* List_1_Join_m21486_gshared (List_1_t2769 * __this, String_t* ___separator, const MethodInfo* method);
#define List_1_Join_m21486(__this, ___separator, method) (( String_t* (*) (List_1_t2769 *, String_t*, const MethodInfo*))List_1_Join_m21486_gshared)(__this, ___separator, method)
// System.Int32 Boo.Lang.List`1<System.Object>::GetHashCode()
extern "C" int32_t List_1_GetHashCode_m21487_gshared (List_1_t2769 * __this, const MethodInfo* method);
#define List_1_GetHashCode_m21487(__this, method) (( int32_t (*) (List_1_t2769 *, const MethodInfo*))List_1_GetHashCode_m21487_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(System.Object)
extern "C" bool List_1_Equals_m21488_gshared (List_1_t2769 * __this, Object_t * ___other, const MethodInfo* method);
#define List_1_Equals_m21488(__this, ___other, method) (( bool (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_Equals_m21488_gshared)(__this, ___other, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(Boo.Lang.List`1<T>)
extern "C" bool List_1_Equals_m21489_gshared (List_1_t2769 * __this, List_1_t2769 * ___other, const MethodInfo* method);
#define List_1_Equals_m21489(__this, ___other, method) (( bool (*) (List_1_t2769 *, List_1_t2769 *, const MethodInfo*))List_1_Equals_m21489_gshared)(__this, ___other, method)
// System.Void Boo.Lang.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m21490_gshared (List_1_t2769 * __this, const MethodInfo* method);
#define List_1_Clear_m21490(__this, method) (( void (*) (List_1_t2769 *, const MethodInfo*))List_1_Clear_m21490_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m21491_gshared (List_1_t2769 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m21491(__this, ___item, method) (( bool (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_Contains_m21491_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m21492_gshared (List_1_t2769 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m21492(__this, ___item, method) (( int32_t (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_IndexOf_m21492_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Insert(System.Int32,T)
extern "C" List_1_t2769 * List_1_Insert_m21493_gshared (List_1_t2769 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m21493(__this, ___index, ___item, method) (( List_1_t2769 * (*) (List_1_t2769 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m21493_gshared)(__this, ___index, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Remove(T)
extern "C" List_1_t2769 * List_1_Remove_m21494_gshared (List_1_t2769 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m21494(__this, ___item, method) (( List_1_t2769 * (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_Remove_m21494_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" List_1_t2769 * List_1_RemoveAt_m21495_gshared (List_1_t2769 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m21495(__this, ___index, method) (( List_1_t2769 * (*) (List_1_t2769 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21495_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::EnsureCapacity(System.Int32)
extern "C" void List_1_EnsureCapacity_m21496_gshared (List_1_t2769 * __this, int32_t ___minCapacity, const MethodInfo* method);
#define List_1_EnsureCapacity_m21496(__this, ___minCapacity, method) (( void (*) (List_1_t2769 *, int32_t, const MethodInfo*))List_1_EnsureCapacity_m21496_gshared)(__this, ___minCapacity, method)
// T[] Boo.Lang.List`1<System.Object>::NewArray(System.Int32)
extern "C" ObjectU5BU5D_t234* List_1_NewArray_m21497_gshared (List_1_t2769 * __this, int32_t ___minCapacity, const MethodInfo* method);
#define List_1_NewArray_m21497(__this, ___minCapacity, method) (( ObjectU5BU5D_t234* (*) (List_1_t2769 *, int32_t, const MethodInfo*))List_1_NewArray_m21497_gshared)(__this, ___minCapacity, method)
// System.Void Boo.Lang.List`1<System.Object>::InnerRemoveAt(System.Int32)
extern "C" void List_1_InnerRemoveAt_m21498_gshared (List_1_t2769 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_InnerRemoveAt_m21498(__this, ___index, method) (( void (*) (List_1_t2769 *, int32_t, const MethodInfo*))List_1_InnerRemoveAt_m21498_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::InnerRemove(T)
extern "C" bool List_1_InnerRemove_m21499_gshared (List_1_t2769 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_InnerRemove_m21499(__this, ___item, method) (( bool (*) (List_1_t2769 *, Object_t *, const MethodInfo*))List_1_InnerRemove_m21499_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" int32_t List_1_CheckIndex_m21500_gshared (List_1_t2769 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21500(__this, ___index, method) (( int32_t (*) (List_1_t2769 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21500_gshared)(__this, ___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::NormalizeIndex(System.Int32)
extern "C" int32_t List_1_NormalizeIndex_m21501_gshared (List_1_t2769 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_NormalizeIndex_m21501(__this, ___index, method) (( int32_t (*) (List_1_t2769 *, int32_t, const MethodInfo*))List_1_NormalizeIndex_m21501_gshared)(__this, ___index, method)
// T Boo.Lang.List`1<System.Object>::Coerce(System.Object)
extern "C" Object_t * List_1_Coerce_m21502_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define List_1_Coerce_m21502(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))List_1_Coerce_m21502_gshared)(__this /* static, unused */, ___value, method)
