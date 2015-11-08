#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"

// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
extern "C" String_t* SystemInfo_get_graphicsDeviceName_m3827 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
extern "C" int32_t SystemInfo_get_graphicsShaderLevel_m432 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
extern "C" bool SystemInfo_get_supportsRenderTextures_m423 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
extern "C" bool SystemInfo_get_supportsImageEffects_m302 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::get_supports3DTextures()
extern "C" bool SystemInfo_get_supports3DTextures_m373 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
extern "C" bool SystemInfo_get_supportsComputeShaders_m433 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
extern "C" bool SystemInfo_SupportsRenderTextureFormat_m321 (Object_t * __this /* static, unused */, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
