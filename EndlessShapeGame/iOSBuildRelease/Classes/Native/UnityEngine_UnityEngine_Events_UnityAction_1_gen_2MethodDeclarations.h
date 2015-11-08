#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t538;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m2829_gshared (UnityAction_1_t538 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m2829(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t538 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m2829_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m15495_gshared (UnityAction_1_t538 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m15495(__this, ___arg0, method) (( void (*) (UnityAction_1_t538 *, bool, const MethodInfo*))UnityAction_1_Invoke_m15495_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m15496_gshared (UnityAction_1_t538 * __this, bool ___arg0, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m15496(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t538 *, bool, AsyncCallback_t93 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m15496_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m15497_gshared (UnityAction_1_t538 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m15497(__this, ___result, method) (( void (*) (UnityAction_1_t538 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m15497_gshared)(__this, ___result, method)
