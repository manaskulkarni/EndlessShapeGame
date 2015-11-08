#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2224;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2226;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m13856_gshared (ObjectPool_1_t2224 * __this, UnityAction_1_t2226 * ___actionOnGet, UnityAction_1_t2226 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m13856(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2224 *, UnityAction_1_t2226 *, UnityAction_1_t2226 *, const MethodInfo*))ObjectPool_1__ctor_m13856_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m13858_gshared (ObjectPool_1_t2224 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m13858(__this, method) (( int32_t (*) (ObjectPool_1_t2224 *, const MethodInfo*))ObjectPool_1_get_countAll_m13858_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m13860_gshared (ObjectPool_1_t2224 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m13860(__this, ___value, method) (( void (*) (ObjectPool_1_t2224 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m13860_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m13862_gshared (ObjectPool_1_t2224 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m13862(__this, method) (( int32_t (*) (ObjectPool_1_t2224 *, const MethodInfo*))ObjectPool_1_get_countActive_m13862_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m13864_gshared (ObjectPool_1_t2224 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m13864(__this, method) (( int32_t (*) (ObjectPool_1_t2224 *, const MethodInfo*))ObjectPool_1_get_countInactive_m13864_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m13866_gshared (ObjectPool_1_t2224 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m13866(__this, method) (( Object_t * (*) (ObjectPool_1_t2224 *, const MethodInfo*))ObjectPool_1_Get_m13866_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m13868_gshared (ObjectPool_1_t2224 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m13868(__this, ___element, method) (( void (*) (ObjectPool_1_t2224 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m13868_gshared)(__this, ___element, method)
