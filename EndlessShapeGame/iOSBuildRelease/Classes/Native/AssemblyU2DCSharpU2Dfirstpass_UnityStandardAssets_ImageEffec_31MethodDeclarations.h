﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.DepthOfField
struct DepthOfField_t47;
// UnityEngine.RenderTexture
struct RenderTexture_t55;

// System.Void UnityStandardAssets.ImageEffects.DepthOfField::.ctor()
extern "C" void DepthOfField__ctor_m80 (DepthOfField_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::CheckResources()
extern "C" bool DepthOfField_CheckResources_m81 (DepthOfField_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnEnable()
extern "C" void DepthOfField_OnEnable_m82 (DepthOfField_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnDisable()
extern "C" void DepthOfField_OnDisable_m83 (DepthOfField_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::ReleaseComputeResources()
extern "C" void DepthOfField_ReleaseComputeResources_m84 (DepthOfField_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::CreateComputeResources()
extern "C" void DepthOfField_CreateComputeResources_m85 (DepthOfField_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfField::FocalDistance01(System.Single)
extern "C" float DepthOfField_FocalDistance01_m86 (DepthOfField_t47 * __this, float ___worldDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::WriteCoc(UnityEngine.RenderTexture,System.Boolean)
extern "C" void DepthOfField_WriteCoc_m87 (DepthOfField_t47 * __this, RenderTexture_t55 * ___fromTo, bool ___fgDilate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfField_OnRenderImage_m88 (DepthOfField_t47 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
