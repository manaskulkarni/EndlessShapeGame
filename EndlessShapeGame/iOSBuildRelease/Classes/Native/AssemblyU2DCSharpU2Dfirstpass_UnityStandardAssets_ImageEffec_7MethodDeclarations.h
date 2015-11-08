#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_t11;
// UnityEngine.RenderTexture
struct RenderTexture_t55;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityStandardAssets.ImageEffects.Bloom::.ctor()
extern "C" void Bloom__ctor_m4 (Bloom_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Bloom::CheckResources()
extern "C" bool Bloom_CheckResources_m5 (Bloom_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_OnRenderImage_m6 (Bloom_t11 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_AddTo_m7 (Bloom_t11 * __this, float ___intensity_, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BlendFlares_m8 (Bloom_t11 * __this, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BrightFilter_m9 (Bloom_t11 * __this, float ___thresh, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BrightFilter_m10 (Bloom_t11 * __this, Color_t12  ___threshColor, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_Vignette_m11 (Bloom_t11 * __this, float ___amount, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
