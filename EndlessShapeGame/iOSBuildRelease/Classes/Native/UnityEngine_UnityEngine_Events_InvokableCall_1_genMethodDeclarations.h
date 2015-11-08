#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2267;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2226;
// System.Object[]
struct ObjectU5BU5D_t234;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m14394_gshared (InvokableCall_1_t2267 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m14394(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2267 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m14394_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m14395_gshared (InvokableCall_1_t2267 * __this, UnityAction_1_t2226 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m14395(__this, ___action, method) (( void (*) (InvokableCall_1_t2267 *, UnityAction_1_t2226 *, const MethodInfo*))InvokableCall_1__ctor_m14395_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m14396_gshared (InvokableCall_1_t2267 * __this, ObjectU5BU5D_t234* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m14396(__this, ___args, method) (( void (*) (InvokableCall_1_t2267 *, ObjectU5BU5D_t234*, const MethodInfo*))InvokableCall_1_Invoke_m14396_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m14397_gshared (InvokableCall_1_t2267 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m14397(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2267 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m14397_gshared)(__this, ___targetObj, ___method, method)
