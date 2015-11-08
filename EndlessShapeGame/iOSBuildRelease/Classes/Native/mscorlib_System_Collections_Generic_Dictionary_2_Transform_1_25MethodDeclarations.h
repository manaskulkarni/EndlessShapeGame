#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Collections.DictionaryEntry>
struct Transform_1_t2630;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchState.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19847_gshared (Transform_1_t2630 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19847(__this, ___object, ___method, method) (( void (*) (Transform_1_t2630 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19847_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1194  Transform_1_Invoke_m19848_gshared (Transform_1_t2630 * __this, int32_t ___key, TouchState_t674  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19848(__this, ___key, ___value, method) (( DictionaryEntry_t1194  (*) (Transform_1_t2630 *, int32_t, TouchState_t674 , const MethodInfo*))Transform_1_Invoke_m19848_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19849_gshared (Transform_1_t2630 * __this, int32_t ___key, TouchState_t674  ___value, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19849(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2630 *, int32_t, TouchState_t674 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19849_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1194  Transform_1_EndInvoke_m19850_gshared (Transform_1_t2630 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19850(__this, ___result, method) (( DictionaryEntry_t1194  (*) (Transform_1_t2630 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19850_gshared)(__this, ___result, method)
