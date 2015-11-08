#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2503;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17774_gshared (Predicate_1_t2503 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17774(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2503 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17774_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17775_gshared (Predicate_1_t2503 * __this, Vector2_t85  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17775(__this, ___obj, method) (( bool (*) (Predicate_1_t2503 *, Vector2_t85 , const MethodInfo*))Predicate_1_Invoke_m17775_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17776_gshared (Predicate_1_t2503 * __this, Vector2_t85  ___obj, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17776(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2503 *, Vector2_t85 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17776_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17777_gshared (Predicate_1_t2503 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17777(__this, ___result, method) (( bool (*) (Predicate_1_t2503 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17777_gshared)(__this, ___result, method)
