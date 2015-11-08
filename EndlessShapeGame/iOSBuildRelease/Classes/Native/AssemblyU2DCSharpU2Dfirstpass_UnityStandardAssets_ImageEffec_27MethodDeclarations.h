﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_t42;
// UnityEngine.Material
struct Material_t5;
// UnityEngine.RenderTexture
struct RenderTexture_t55;
// UnityEngine.Texture
struct Texture_t40;

// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
extern "C" void ContrastStretch__ctor_m67 (ContrastStretch_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
extern "C" Material_t5 * ContrastStretch_get_materialLum_m68 (ContrastStretch_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
extern "C" Material_t5 * ContrastStretch_get_materialReduce_m69 (ContrastStretch_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
extern "C" Material_t5 * ContrastStretch_get_materialAdapt_m70 (ContrastStretch_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
extern "C" Material_t5 * ContrastStretch_get_materialApply_m71 (ContrastStretch_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
extern "C" void ContrastStretch_Start_m72 (ContrastStretch_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
extern "C" void ContrastStretch_OnEnable_m73 (ContrastStretch_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
extern "C" void ContrastStretch_OnDisable_m74 (ContrastStretch_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ContrastStretch_OnRenderImage_m75 (ContrastStretch_t42 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
extern "C" void ContrastStretch_CalculateAdaptation_m76 (ContrastStretch_t42 * __this, Texture_t40 * ___curTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
