#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2685;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m20406_gshared (Comparison_1_t2685 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m20406(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2685 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m20406_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m20407_gshared (Comparison_1_t2685 * __this, UICharInfo_t557  ___x, UICharInfo_t557  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m20407(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2685 *, UICharInfo_t557 , UICharInfo_t557 , const MethodInfo*))Comparison_1_Invoke_m20407_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m20408_gshared (Comparison_1_t2685 * __this, UICharInfo_t557  ___x, UICharInfo_t557  ___y, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m20408(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2685 *, UICharInfo_t557 , UICharInfo_t557 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m20408_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m20409_gshared (Comparison_1_t2685 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m20409(__this, ___result, method) (( int32_t (*) (Comparison_1_t2685 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m20409_gshared)(__this, ___result, method)
