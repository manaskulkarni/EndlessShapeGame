#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Int32>
struct Transform_1_t2635;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19820_gshared (Transform_1_t2635 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19820(__this, ___object, ___method, method) (( void (*) (Transform_1_t2635 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19820_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m19821_gshared (Transform_1_t2635 * __this, int32_t ___key, TouchState_t674  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19821(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2635 *, int32_t, TouchState_t674 , const MethodInfo*))Transform_1_Invoke_m19821_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19822_gshared (Transform_1_t2635 * __this, int32_t ___key, TouchState_t674  ___value, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19822(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2635 *, int32_t, TouchState_t674 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19822_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m19823_gshared (Transform_1_t2635 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19823(__this, ___result, method) (( int32_t (*) (Transform_1_t2635 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19823_gshared)(__this, ___result, method)
