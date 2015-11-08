#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.NoiseAndScratches
struct NoiseAndScratches_t64;
// UnityEngine.Material
struct Material_t5;
// UnityEngine.RenderTexture
struct RenderTexture_t55;

// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::.ctor()
extern "C" void NoiseAndScratches__ctor_m138 (NoiseAndScratches_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::Start()
extern "C" void NoiseAndScratches_Start_m139 (NoiseAndScratches_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::get_material()
extern "C" Material_t5 * NoiseAndScratches_get_material_m140 (NoiseAndScratches_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::OnDisable()
extern "C" void NoiseAndScratches_OnDisable_m141 (NoiseAndScratches_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::SanitizeParameters()
extern "C" void NoiseAndScratches_SanitizeParameters_m142 (NoiseAndScratches_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void NoiseAndScratches_OnRenderImage_m143 (NoiseAndScratches_t64 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
