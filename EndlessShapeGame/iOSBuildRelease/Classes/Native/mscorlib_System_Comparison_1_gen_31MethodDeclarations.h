#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2485;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17485_gshared (Comparison_1_t2485 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17485(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2485 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17485_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17486_gshared (Comparison_1_t2485 * __this, Vector3_t28  ___x, Vector3_t28  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17486(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2485 *, Vector3_t28 , Vector3_t28 , const MethodInfo*))Comparison_1_Invoke_m17486_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17487_gshared (Comparison_1_t2485 * __this, Vector3_t28  ___x, Vector3_t28  ___y, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17487(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2485 *, Vector3_t28 , Vector3_t28 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17487_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17488_gshared (Comparison_1_t2485 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17488(__this, ___result, method) (( int32_t (*) (Comparison_1_t2485 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17488_gshared)(__this, ___result, method)
