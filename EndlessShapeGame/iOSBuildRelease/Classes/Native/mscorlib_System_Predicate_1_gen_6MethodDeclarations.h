#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t2118;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12637_gshared (Predicate_1_t2118 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12637(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2118 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12637_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12638_gshared (Predicate_1_t2118 * __this, Object_t * ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12638(__this, ___obj, method) (( bool (*) (Predicate_1_t2118 *, Object_t *, const MethodInfo*))Predicate_1_Invoke_m12638_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12639_gshared (Predicate_1_t2118 * __this, Object_t * ___obj, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12639(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2118 *, Object_t *, AsyncCallback_t93 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12639_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12640_gshared (Predicate_1_t2118 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12640(__this, ___result, method) (( bool (*) (Predicate_1_t2118 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12640_gshared)(__this, ___result, method)
