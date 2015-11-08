#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t980;
// UnityEngine.Object
struct Object_t99;
struct Object_t99_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t234;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m5266_gshared (CachedInvokableCall_1_t980 * __this, Object_t99 * ___target, MethodInfo_t * ___theFunction, bool ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m5266(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t980 *, Object_t99 *, MethodInfo_t *, bool, const MethodInfo*))CachedInvokableCall_1__ctor_m5266_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m21256_gshared (CachedInvokableCall_1_t980 * __this, ObjectU5BU5D_t234* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m21256(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t980 *, ObjectU5BU5D_t234*, const MethodInfo*))CachedInvokableCall_1_Invoke_m21256_gshared)(__this, ___args, method)
