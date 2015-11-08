﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t65;
// UnityEngine.RenderTexture
struct RenderTexture_t55;
// UnityEngine.Material
struct Material_t5;
// UnityEngine.Camera
struct Camera_t32;

// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::.ctor()
extern "C" void PostEffectsHelper__ctor_m158 (PostEffectsHelper_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void PostEffectsHelper_OnRenderImage_m159 (PostEffectsHelper_t65 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
extern "C" void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m160 (Object_t * __this /* static, unused */, float ___dist, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, Material_t5 * ___material, Camera_t32 * ___cameraForProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void PostEffectsHelper_DrawBorder_m161 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___dest, Material_t5 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void PostEffectsHelper_DrawLowLevelQuad_m162 (Object_t * __this /* static, unused */, float ___x1, float ___x2, float ___y1, float ___y2, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, Material_t5 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
