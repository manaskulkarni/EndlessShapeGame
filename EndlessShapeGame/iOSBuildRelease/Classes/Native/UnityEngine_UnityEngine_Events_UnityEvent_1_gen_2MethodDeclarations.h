#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t357;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2331;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t916;

// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" void UnityEvent_1__ctor_m2806_gshared (UnityEvent_1_t357 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2806(__this, method) (( void (*) (UnityEvent_1_t357 *, const MethodInfo*))UnityEvent_1__ctor_m2806_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m15267_gshared (UnityEvent_1_t357 * __this, UnityAction_1_t2331 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m15267(__this, ___call, method) (( void (*) (UnityEvent_1_t357 *, UnityAction_1_t2331 *, const MethodInfo*))UnityEvent_1_AddListener_m15267_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m15268_gshared (UnityEvent_1_t357 * __this, UnityAction_1_t2331 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m15268(__this, ___call, method) (( void (*) (UnityEvent_1_t357 *, UnityAction_1_t2331 *, const MethodInfo*))UnityEvent_1_RemoveListener_m15268_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m15269_gshared (UnityEvent_1_t357 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m15269(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t357 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m15269_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t916 * UnityEvent_1_GetDelegate_m15270_gshared (UnityEvent_1_t357 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15270(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t916 * (*) (UnityEvent_1_t357 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m15270_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t916 * UnityEvent_1_GetDelegate_m15271_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2331 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15271(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t916 * (*) (Object_t * /* static, unused */, UnityAction_1_t2331 *, const MethodInfo*))UnityEvent_1_GetDelegate_m15271_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2809_gshared (UnityEvent_1_t357 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2809(__this, ___arg0, method) (( void (*) (UnityEvent_1_t357 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m2809_gshared)(__this, ___arg0, method)
