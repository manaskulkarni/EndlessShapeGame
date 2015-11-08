#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<TouchScript.InputSources.TouchState>
struct DefaultComparer_t2642;
// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchState.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<TouchScript.InputSources.TouchState>::.ctor()
extern "C" void DefaultComparer__ctor_m19866_gshared (DefaultComparer_t2642 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19866(__this, method) (( void (*) (DefaultComparer_t2642 *, const MethodInfo*))DefaultComparer__ctor_m19866_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<TouchScript.InputSources.TouchState>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19867_gshared (DefaultComparer_t2642 * __this, TouchState_t674  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19867(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2642 *, TouchState_t674 , const MethodInfo*))DefaultComparer_GetHashCode_m19867_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<TouchScript.InputSources.TouchState>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19868_gshared (DefaultComparer_t2642 * __this, TouchState_t674  ___x, TouchState_t674  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19868(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2642 *, TouchState_t674 , TouchState_t674 , const MethodInfo*))DefaultComparer_Equals_m19868_gshared)(__this, ___x, ___y, method)
