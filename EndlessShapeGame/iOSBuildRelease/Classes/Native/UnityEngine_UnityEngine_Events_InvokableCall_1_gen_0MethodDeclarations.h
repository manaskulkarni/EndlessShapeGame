#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t2304;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t505;
// System.Object[]
struct ObjectU5BU5D_t234;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m14890_gshared (InvokableCall_1_t2304 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m14890(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2304 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m14890_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m14891_gshared (InvokableCall_1_t2304 * __this, UnityAction_1_t505 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m14891(__this, ___action, method) (( void (*) (InvokableCall_1_t2304 *, UnityAction_1_t505 *, const MethodInfo*))InvokableCall_1__ctor_m14891_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m14892_gshared (InvokableCall_1_t2304 * __this, ObjectU5BU5D_t234* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m14892(__this, ___args, method) (( void (*) (InvokableCall_1_t2304 *, ObjectU5BU5D_t234*, const MethodInfo*))InvokableCall_1_Invoke_m14892_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m14893_gshared (InvokableCall_1_t2304 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m14893(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2304 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m14893_gshared)(__this, ___targetObj, ___method, method)
