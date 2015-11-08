﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.ImageEffects
struct ImageEffects_t61;
// UnityEngine.Material
struct Material_t5;
// UnityEngine.RenderTexture
struct RenderTexture_t55;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityStandardAssets.ImageEffects.ImageEffects::.ctor()
extern "C" void ImageEffects__ctor_m125 (ImageEffects_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void ImageEffects_RenderDistortion_m126 (Object_t * __this /* static, unused */, Material_t5 * ___material, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, float ___angle, Vector2_t85  ___center, Vector2_t85  ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_Blit_m127 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_BlitWithMaterial_m128 (Object_t * __this /* static, unused */, Material_t5 * ___material, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
