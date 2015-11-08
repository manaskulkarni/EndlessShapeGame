#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2682;
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

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m20396_gshared (Predicate_1_t2682 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m20396(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2682 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m20396_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m20397_gshared (Predicate_1_t2682 * __this, UICharInfo_t557  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m20397(__this, ___obj, method) (( bool (*) (Predicate_1_t2682 *, UICharInfo_t557 , const MethodInfo*))Predicate_1_Invoke_m20397_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m20398_gshared (Predicate_1_t2682 * __this, UICharInfo_t557  ___obj, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m20398(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2682 *, UICharInfo_t557 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m20398_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m20399_gshared (Predicate_1_t2682 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m20399(__this, ___result, method) (( bool (*) (Predicate_1_t2682 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m20399_gshared)(__this, ___result, method)
