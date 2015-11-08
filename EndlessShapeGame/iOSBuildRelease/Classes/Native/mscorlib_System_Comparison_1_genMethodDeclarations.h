#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t279;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2636_gshared (Comparison_1_t279 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2636(__this, ___object, ___method, method) (( void (*) (Comparison_1_t279 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2636_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m13748_gshared (Comparison_1_t279 * __this, RaycastResult_t309  ___x, RaycastResult_t309  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m13748(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t279 *, RaycastResult_t309 , RaycastResult_t309 , const MethodInfo*))Comparison_1_Invoke_m13748_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m13749_gshared (Comparison_1_t279 * __this, RaycastResult_t309  ___x, RaycastResult_t309  ___y, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m13749(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t279 *, RaycastResult_t309 , RaycastResult_t309 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m13749_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13750_gshared (Comparison_1_t279 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m13750(__this, ___result, method) (( int32_t (*) (Comparison_1_t279 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m13750_gshared)(__this, ___result, method)
