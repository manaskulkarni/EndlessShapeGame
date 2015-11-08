#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t2305;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t506;
// System.Object[]
struct ObjectU5BU5D_t234;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m14900_gshared (InvokableCall_1_t2305 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m14900(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2305 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m14900_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m14901_gshared (InvokableCall_1_t2305 * __this, UnityAction_1_t506 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m14901(__this, ___action, method) (( void (*) (InvokableCall_1_t2305 *, UnityAction_1_t506 *, const MethodInfo*))InvokableCall_1__ctor_m14901_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m14902_gshared (InvokableCall_1_t2305 * __this, ObjectU5BU5D_t234* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m14902(__this, ___args, method) (( void (*) (InvokableCall_1_t2305 *, ObjectU5BU5D_t234*, const MethodInfo*))InvokableCall_1_Invoke_m14902_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m14903_gshared (InvokableCall_1_t2305 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m14903(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2305 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m14903_gshared)(__this, ___targetObj, ___method, method)
