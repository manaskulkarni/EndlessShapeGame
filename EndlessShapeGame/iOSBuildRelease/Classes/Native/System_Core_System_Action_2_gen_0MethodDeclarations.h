#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`2<System.Object,System.Object>
struct Action_2_t2572;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_2__ctor_m18757_gshared (Action_2_t2572 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m18757(__this, ___object, ___method, method) (( void (*) (Action_2_t2572 *, Object_t *, IntPtr_t, const MethodInfo*))Action_2__ctor_m18757_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C" void Action_2_Invoke_m18758_gshared (Action_2_t2572 * __this, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m18758(__this, ___arg1, ___arg2, method) (( void (*) (Action_2_t2572 *, Object_t *, Object_t *, const MethodInfo*))Action_2_Invoke_m18758_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_2_BeginInvoke_m18760_gshared (Action_2_t2572 * __this, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m18760(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Action_2_t2572 *, Object_t *, Object_t *, AsyncCallback_t93 *, Object_t *, const MethodInfo*))Action_2_BeginInvoke_m18760_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_2_EndInvoke_m18762_gshared (Action_2_t2572 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m18762(__this, ___result, method) (( void (*) (Action_2_t2572 *, Object_t *, const MethodInfo*))Action_2_EndInvoke_m18762_gshared)(__this, ___result, method)
