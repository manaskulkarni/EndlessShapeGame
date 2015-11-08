﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.Tonemapping
struct Tonemapping_t82;
// UnityEngine.RenderTexture
struct RenderTexture_t55;

// System.Void UnityStandardAssets.ImageEffects.Tonemapping::.ctor()
extern "C" void Tonemapping__ctor_m192 (Tonemapping_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CheckResources()
extern "C" bool Tonemapping_CheckResources_m193 (Tonemapping_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
extern "C" float Tonemapping_UpdateCurve_m194 (Tonemapping_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnDisable()
extern "C" void Tonemapping_OnDisable_m195 (Tonemapping_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
extern "C" bool Tonemapping_CreateInternalRenderTexture_m196 (Tonemapping_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Tonemapping_OnRenderImage_m197 (Tonemapping_t82 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
