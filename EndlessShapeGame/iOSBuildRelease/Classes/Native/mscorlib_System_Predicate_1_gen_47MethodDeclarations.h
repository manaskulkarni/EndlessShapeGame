#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2691;
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

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m20543_gshared (Predicate_1_t2691 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m20543(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2691 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m20543_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m20544_gshared (Predicate_1_t2691 * __this, UILineInfo_t555  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m20544(__this, ___obj, method) (( bool (*) (Predicate_1_t2691 *, UILineInfo_t555 , const MethodInfo*))Predicate_1_Invoke_m20544_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m20545_gshared (Predicate_1_t2691 * __this, UILineInfo_t555  ___obj, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m20545(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2691 *, UILineInfo_t555 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m20545_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m20546_gshared (Predicate_1_t2691 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m20546(__this, ___result, method) (( bool (*) (Predicate_1_t2691 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m20546_gshared)(__this, ___result, method)
