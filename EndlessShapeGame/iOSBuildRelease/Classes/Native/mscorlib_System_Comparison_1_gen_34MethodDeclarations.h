#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t2517;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Comparison`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17936_gshared (Comparison_1_t2517 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17936(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2517 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17936_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17937_gshared (Comparison_1_t2517 * __this, Vector4_t100  ___x, Vector4_t100  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17937(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2517 *, Vector4_t100 , Vector4_t100 , const MethodInfo*))Comparison_1_Invoke_m17937_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17938_gshared (Comparison_1_t2517 * __this, Vector4_t100  ___x, Vector4_t100  ___y, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17938(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2517 *, Vector4_t100 , Vector4_t100 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17938_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17939_gshared (Comparison_1_t2517 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17939(__this, ___result, method) (( int32_t (*) (Comparison_1_t2517 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17939_gshared)(__this, ___result, method)
