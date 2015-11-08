#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2694;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m20553_gshared (Comparison_1_t2694 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m20553(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2694 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m20553_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m20554_gshared (Comparison_1_t2694 * __this, UILineInfo_t555  ___x, UILineInfo_t555  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m20554(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2694 *, UILineInfo_t555 , UILineInfo_t555 , const MethodInfo*))Comparison_1_Invoke_m20554_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m20555_gshared (Comparison_1_t2694 * __this, UILineInfo_t555  ___x, UILineInfo_t555  ___y, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m20555(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2694 *, UILineInfo_t555 , UILineInfo_t555 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m20555_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m20556_gshared (Comparison_1_t2694 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m20556(__this, ___result, method) (( int32_t (*) (Comparison_1_t2694 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m20556_gshared)(__this, ___result, method)
