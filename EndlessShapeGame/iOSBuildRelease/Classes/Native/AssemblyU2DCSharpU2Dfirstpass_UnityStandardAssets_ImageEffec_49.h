﻿#pragma once
#include <stdint.h>
// UnityEngine.Texture2D
struct Texture2D_t13;
// UnityEngine.Shader
struct Shader_t4;
// UnityEngine.Material
struct Material_t5;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1.h"
// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_48.h"
// UnityStandardAssets.ImageEffects.ScreenOverlay
struct  ScreenOverlay_t69  : public PostEffectsBase_t3
{
	// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode UnityStandardAssets.ImageEffects.ScreenOverlay::blendMode
	int32_t ___blendMode_5;
	// System.Single UnityStandardAssets.ImageEffects.ScreenOverlay::intensity
	float ___intensity_6;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenOverlay::texture
	Texture2D_t13 * ___texture_7;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenOverlay::overlayShader
	Shader_t4 * ___overlayShader_8;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenOverlay::overlayMaterial
	Material_t5 * ___overlayMaterial_9;
};
