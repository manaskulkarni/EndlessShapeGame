#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2205;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2458;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object[]
struct ObjectU5BU5D_t234;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m13604_gshared (Queue_1_t2205 * __this, const MethodInfo* method);
#define Queue_1__ctor_m13604(__this, method) (( void (*) (Queue_1_t2205 *, const MethodInfo*))Queue_1__ctor_m13604_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m13606_gshared (Queue_1_t2205 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m13606(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2205 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m13606_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m13608_gshared (Queue_1_t2205 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m13608(__this, method) (( bool (*) (Queue_1_t2205 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m13608_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m13610_gshared (Queue_1_t2205 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m13610(__this, method) (( Object_t * (*) (Queue_1_t2205 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m13610_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13612_gshared (Queue_1_t2205 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13612(__this, method) (( Object_t* (*) (Queue_1_t2205 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13612_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m13614_gshared (Queue_1_t2205 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m13614(__this, method) (( Object_t * (*) (Queue_1_t2205 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m13614_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m13616_gshared (Queue_1_t2205 * __this, ObjectU5BU5D_t234* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m13616(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2205 *, ObjectU5BU5D_t234*, int32_t, const MethodInfo*))Queue_1_CopyTo_m13616_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" Object_t * Queue_1_Dequeue_m13617_gshared (Queue_1_t2205 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m13617(__this, method) (( Object_t * (*) (Queue_1_t2205 *, const MethodInfo*))Queue_1_Dequeue_m13617_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" Object_t * Queue_1_Peek_m13619_gshared (Queue_1_t2205 * __this, const MethodInfo* method);
#define Queue_1_Peek_m13619(__this, method) (( Object_t * (*) (Queue_1_t2205 *, const MethodInfo*))Queue_1_Peek_m13619_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m13620_gshared (Queue_1_t2205 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m13620(__this, ___item, method) (( void (*) (Queue_1_t2205 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m13620_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m13622_gshared (Queue_1_t2205 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m13622(__this, ___new_size, method) (( void (*) (Queue_1_t2205 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m13622_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m13624_gshared (Queue_1_t2205 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m13624(__this, method) (( int32_t (*) (Queue_1_t2205 *, const MethodInfo*))Queue_1_get_Count_m13624_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2206  Queue_1_GetEnumerator_m13626_gshared (Queue_1_t2205 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m13626(__this, method) (( Enumerator_t2206  (*) (Queue_1_t2205 *, const MethodInfo*))Queue_1_GetEnumerator_m13626_gshared)(__this, method)
