#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t2309;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15050_gshared (Transform_1_t2309 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m15050(__this, ___object, ___method, method) (( void (*) (Transform_1_t2309 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m15050_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1194  Transform_1_Invoke_m15051_gshared (Transform_1_t2309 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m15051(__this, ___key, ___value, method) (( DictionaryEntry_t1194  (*) (Transform_1_t2309 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m15051_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15052_gshared (Transform_1_t2309 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m15052(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2309 *, Object_t *, int32_t, AsyncCallback_t93 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m15052_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1194  Transform_1_EndInvoke_m15053_gshared (Transform_1_t2309 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m15053(__this, ___result, method) (( DictionaryEntry_t1194  (*) (Transform_1_t2309 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m15053_gshared)(__this, ___result, method)
