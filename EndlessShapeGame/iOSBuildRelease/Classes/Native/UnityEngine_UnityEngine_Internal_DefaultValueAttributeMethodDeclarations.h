#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t925;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m5163 (DefaultValueAttribute_t925 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m5164 (DefaultValueAttribute_t925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern "C" bool DefaultValueAttribute_Equals_m5165 (DefaultValueAttribute_t925 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m5166 (DefaultValueAttribute_t925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
