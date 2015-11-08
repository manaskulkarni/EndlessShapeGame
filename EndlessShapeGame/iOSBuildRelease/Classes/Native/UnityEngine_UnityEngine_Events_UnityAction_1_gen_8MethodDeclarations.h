#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2331;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m15272_gshared (UnityAction_1_t2331 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m15272(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2331 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m15272_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m15273_gshared (UnityAction_1_t2331 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m15273(__this, ___arg0, method) (( void (*) (UnityAction_1_t2331 *, int32_t, const MethodInfo*))UnityAction_1_Invoke_m15273_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m15274_gshared (UnityAction_1_t2331 * __this, int32_t ___arg0, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m15274(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2331 *, int32_t, AsyncCallback_t93 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m15274_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m15275_gshared (UnityAction_1_t2331 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m15275(__this, ___result, method) (( void (*) (UnityAction_1_t2331 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m15275_gshared)(__this, ___result, method)
