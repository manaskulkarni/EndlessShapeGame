#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.RaycastHit2D>
struct Predicate_1_t2600;
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

// System.Void System.Predicate`1<UnityEngine.RaycastHit2D>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m19207_gshared (Predicate_1_t2600 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m19207(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2600 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m19207_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.RaycastHit2D>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m19208_gshared (Predicate_1_t2600 * __this, RaycastHit2D_t532  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m19208(__this, ___obj, method) (( bool (*) (Predicate_1_t2600 *, RaycastHit2D_t532 , const MethodInfo*))Predicate_1_Invoke_m19208_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.RaycastHit2D>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m19209_gshared (Predicate_1_t2600 * __this, RaycastHit2D_t532  ___obj, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m19209(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2600 *, RaycastHit2D_t532 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m19209_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.RaycastHit2D>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m19210_gshared (Predicate_1_t2600 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m19210(__this, ___result, method) (( bool (*) (Predicate_1_t2600 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m19210_gshared)(__this, ___result, method)
