#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>
struct UnityAdsDelegate_2_t2768;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate_2__ctor_m21454_gshared (UnityAdsDelegate_2_t2768 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m21454(__this, ___object, ___method, method) (( void (*) (UnityAdsDelegate_2_t2768 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m21454_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C" void UnityAdsDelegate_2_Invoke_m21455_gshared (UnityAdsDelegate_2_t2768 * __this, Object_t * ___p1, Object_t * ___p2, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m21455(__this, ___p1, ___p2, method) (( void (*) (UnityAdsDelegate_2_t2768 *, Object_t *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_Invoke_m21455_gshared)(__this, ___p1, ___p2, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_2_BeginInvoke_m21456_gshared (UnityAdsDelegate_2_t2768 * __this, Object_t * ___p1, Object_t * ___p2, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m21456(__this, ___p1, ___p2, ___callback, ___object, method) (( Object_t * (*) (UnityAdsDelegate_2_t2768 *, Object_t *, Object_t *, AsyncCallback_t93 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m21456_gshared)(__this, ___p1, ___p2, ___callback, ___object, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_2_EndInvoke_m21457_gshared (UnityAdsDelegate_2_t2768 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m21457(__this, ___result, method) (( void (*) (UnityAdsDelegate_2_t2768 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m21457_gshared)(__this, ___result, method)
