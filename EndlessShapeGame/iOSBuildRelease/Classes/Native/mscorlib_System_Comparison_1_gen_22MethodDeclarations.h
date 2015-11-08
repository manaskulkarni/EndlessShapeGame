#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2388;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15981_gshared (Comparison_1_t2388 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15981(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2388 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15981_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15982_gshared (Comparison_1_t2388 * __this, UIVertex_t403  ___x, UIVertex_t403  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15982(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2388 *, UIVertex_t403 , UIVertex_t403 , const MethodInfo*))Comparison_1_Invoke_m15982_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15983_gshared (Comparison_1_t2388 * __this, UIVertex_t403  ___x, UIVertex_t403  ___y, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15983(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2388 *, UIVertex_t403 , UIVertex_t403 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15983_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15984_gshared (Comparison_1_t2388 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15984(__this, ___result, method) (( int32_t (*) (Comparison_1_t2388 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15984_gshared)(__this, ___result, method)
