#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t978;
// UnityEngine.Object
struct Object_t99;
struct Object_t99_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t234;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m5264_gshared (CachedInvokableCall_1_t978 * __this, Object_t99 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m5264(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t978 *, Object_t99 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m5264_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m21250_gshared (CachedInvokableCall_1_t978 * __this, ObjectU5BU5D_t234* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m21250(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t978 *, ObjectU5BU5D_t234*, const MethodInfo*))CachedInvokableCall_1_Invoke_m21250_gshared)(__this, ___args, method)
