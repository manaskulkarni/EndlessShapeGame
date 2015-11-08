#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.RaycastHit>
struct DefaultComparer_t2592;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.RaycastHit>::.ctor()
extern "C" void DefaultComparer__ctor_m19069_gshared (DefaultComparer_t2592 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19069(__this, method) (( void (*) (DefaultComparer_t2592 *, const MethodInfo*))DefaultComparer__ctor_m19069_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.RaycastHit>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m19070_gshared (DefaultComparer_t2592 * __this, RaycastHit_t504  ___x, RaycastHit_t504  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m19070(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2592 *, RaycastHit_t504 , RaycastHit_t504 , const MethodInfo*))DefaultComparer_Compare_m19070_gshared)(__this, ___x, ___y, method)
