﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t1065;
// System.Uri
struct Uri_t1043;
// System.String[]
struct StringU5BU5D_t110;
// System.Net.ICredentials
struct ICredentials_t1066;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t945;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m5565 (WebProxy_t1065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m5566 (WebProxy_t1065 * __this, Uri_t1043 * ___address, bool ___bypassOnLocal, StringU5BU5D_t110* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m5567 (WebProxy_t1065 * __this, SerializationInfo_t945 * ___serializationInfo, StreamingContext_t946  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m5568 (WebProxy_t1065 * __this, SerializationInfo_t945 * ___serializationInfo, StreamingContext_t946  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m5569 (WebProxy_t1065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t1043 * WebProxy_GetProxy_m5570 (WebProxy_t1065 * __this, Uri_t1043 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m5571 (WebProxy_t1065 * __this, Uri_t1043 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m5572 (WebProxy_t1065 * __this, SerializationInfo_t945 * ___serializationInfo, StreamingContext_t946  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m5573 (WebProxy_t1065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
