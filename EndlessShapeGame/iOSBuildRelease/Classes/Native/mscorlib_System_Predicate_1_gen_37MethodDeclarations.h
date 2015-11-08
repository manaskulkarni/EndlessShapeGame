#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Int32>
struct Predicate_1_t2522;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18064_gshared (Predicate_1_t2522 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m18064(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2522 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m18064_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18065_gshared (Predicate_1_t2522 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m18065(__this, ___obj, method) (( bool (*) (Predicate_1_t2522 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m18065_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18066_gshared (Predicate_1_t2522 * __this, int32_t ___obj, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m18066(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2522 *, int32_t, AsyncCallback_t93 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m18066_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18067_gshared (Predicate_1_t2522 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m18067(__this, ___result, method) (( bool (*) (Predicate_1_t2522 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m18067_gshared)(__this, ___result, method)
