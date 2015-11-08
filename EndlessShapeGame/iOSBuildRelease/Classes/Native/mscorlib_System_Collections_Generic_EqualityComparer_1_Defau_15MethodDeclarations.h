#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
struct DefaultComparer_t2814;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::.ctor()
extern "C" void DefaultComparer__ctor_m21994_gshared (DefaultComparer_t2814 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21994(__this, method) (( void (*) (DefaultComparer_t2814 *, const MethodInfo*))DefaultComparer__ctor_m21994_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21995_gshared (DefaultComparer_t2814 * __this, bool ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21995(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2814 *, bool, const MethodInfo*))DefaultComparer_GetHashCode_m21995_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21996_gshared (DefaultComparer_t2814 * __this, bool ___x, bool ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21996(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2814 *, bool, bool, const MethodInfo*))DefaultComparer_Equals_m21996_gshared)(__this, ___x, ___y, method)
