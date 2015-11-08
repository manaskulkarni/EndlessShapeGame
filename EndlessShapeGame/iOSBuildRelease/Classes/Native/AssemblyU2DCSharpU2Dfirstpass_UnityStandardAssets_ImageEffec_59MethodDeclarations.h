#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.TiltShift
struct TiltShift_t79;
// UnityEngine.RenderTexture
struct RenderTexture_t55;

// System.Void UnityStandardAssets.ImageEffects.TiltShift::.ctor()
extern "C" void TiltShift__ctor_m189 (TiltShift_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.TiltShift::CheckResources()
extern "C" bool TiltShift_CheckResources_m190 (TiltShift_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.TiltShift::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void TiltShift_OnRenderImage_m191 (TiltShift_t79 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
