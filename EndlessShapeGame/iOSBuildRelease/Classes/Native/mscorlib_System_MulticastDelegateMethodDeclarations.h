#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t91;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t945;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2041;
// System.Delegate
struct Delegate_t112;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m7970 (MulticastDelegate_t91 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m7971 (MulticastDelegate_t91 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m7972 (MulticastDelegate_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2041* MulticastDelegate_GetInvocationList_m7973 (MulticastDelegate_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t112 * MulticastDelegate_CombineImpl_m7974 (MulticastDelegate_t91 * __this, Delegate_t112 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m7975 (MulticastDelegate_t91 * __this, MulticastDelegate_t91 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t91 * MulticastDelegate_KPM_m7976 (Object_t * __this /* static, unused */, MulticastDelegate_t91 * ___needle, MulticastDelegate_t91 * ___haystack, MulticastDelegate_t91 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t112 * MulticastDelegate_RemoveImpl_m7977 (MulticastDelegate_t91 * __this, Delegate_t112 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
