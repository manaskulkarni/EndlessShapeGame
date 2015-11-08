#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t2484;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m17483_gshared (DefaultComparer_t2484 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17483(__this, method) (( void (*) (DefaultComparer_t2484 *, const MethodInfo*))DefaultComparer__ctor_m17483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m17484_gshared (DefaultComparer_t2484 * __this, Vector3_t28  ___x, Vector3_t28  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m17484(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2484 *, Vector3_t28 , Vector3_t28 , const MethodInfo*))DefaultComparer_Compare_m17484_gshared)(__this, ___x, ___y, method)
