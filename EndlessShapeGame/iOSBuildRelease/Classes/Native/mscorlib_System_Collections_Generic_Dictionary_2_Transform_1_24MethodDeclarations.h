#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,TouchScript.InputSources.TouchState>
struct Transform_1_t2638;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchState.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,TouchScript.InputSources.TouchState>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19843_gshared (Transform_1_t2638 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19843(__this, ___object, ___method, method) (( void (*) (Transform_1_t2638 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19843_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,TouchScript.InputSources.TouchState>::Invoke(TKey,TValue)
extern "C" TouchState_t674  Transform_1_Invoke_m19844_gshared (Transform_1_t2638 * __this, int32_t ___key, TouchState_t674  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19844(__this, ___key, ___value, method) (( TouchState_t674  (*) (Transform_1_t2638 *, int32_t, TouchState_t674 , const MethodInfo*))Transform_1_Invoke_m19844_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,TouchScript.InputSources.TouchState>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19845_gshared (Transform_1_t2638 * __this, int32_t ___key, TouchState_t674  ___value, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19845(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2638 *, int32_t, TouchState_t674 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19845_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,TouchScript.InputSources.TouchState>::EndInvoke(System.IAsyncResult)
extern "C" TouchState_t674  Transform_1_EndInvoke_m19846_gshared (Transform_1_t2638 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19846(__this, ___result, method) (( TouchState_t674  (*) (Transform_1_t2638 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19846_gshared)(__this, ___result, method)
