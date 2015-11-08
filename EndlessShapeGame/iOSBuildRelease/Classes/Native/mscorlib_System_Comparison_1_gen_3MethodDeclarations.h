#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit2D>
struct Comparison_1_t701;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit2D>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m3898_gshared (Comparison_1_t701 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m3898(__this, ___object, ___method, method) (( void (*) (Comparison_1_t701 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3898_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit2D>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m19217_gshared (Comparison_1_t701 * __this, RaycastHit2D_t532  ___x, RaycastHit2D_t532  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m19217(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t701 *, RaycastHit2D_t532 , RaycastHit2D_t532 , const MethodInfo*))Comparison_1_Invoke_m19217_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit2D>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m19218_gshared (Comparison_1_t701 * __this, RaycastHit2D_t532  ___x, RaycastHit2D_t532  ___y, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m19218(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t701 *, RaycastHit2D_t532 , RaycastHit2D_t532 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m19218_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit2D>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m19219_gshared (Comparison_1_t701 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m19219(__this, ___result, method) (( int32_t (*) (Comparison_1_t701 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m19219_gshared)(__this, ___result, method)
