﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2514;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17926_gshared (Predicate_1_t2514 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17926(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2514 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17926_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17927_gshared (Predicate_1_t2514 * __this, Vector4_t100  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17927(__this, ___obj, method) (( bool (*) (Predicate_1_t2514 *, Vector4_t100 , const MethodInfo*))Predicate_1_Invoke_m17927_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17928_gshared (Predicate_1_t2514 * __this, Vector4_t100  ___obj, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17928(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2514 *, Vector4_t100 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17928_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17929_gshared (Predicate_1_t2514 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17929(__this, ___result, method) (( bool (*) (Predicate_1_t2514 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17929_gshared)(__this, ___result, method)
