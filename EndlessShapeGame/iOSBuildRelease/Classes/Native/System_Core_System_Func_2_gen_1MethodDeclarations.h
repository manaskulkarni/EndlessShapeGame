#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t570;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m17049_gshared (Func_2_t570 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m17049(__this, ___object, ___method, method) (( void (*) (Func_2_t570 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m17049_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
extern "C" bool Func_2_Invoke_m17051_gshared (Func_2_t570 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m17051(__this, ___arg1, method) (( bool (*) (Func_2_t570 *, Object_t *, const MethodInfo*))Func_2_Invoke_m17051_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m17053_gshared (Func_2_t570 * __this, Object_t * ___arg1, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m17053(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t570 *, Object_t *, AsyncCallback_t93 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m17053_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Func_2_EndInvoke_m17055_gshared (Func_2_t570 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m17055(__this, ___result, method) (( bool (*) (Func_2_t570 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m17055_gshared)(__this, ___result, method)
