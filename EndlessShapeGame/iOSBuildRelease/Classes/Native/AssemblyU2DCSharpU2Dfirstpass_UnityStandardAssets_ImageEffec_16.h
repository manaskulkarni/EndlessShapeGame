#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t4;
// UnityEngine.Material
struct Material_t5;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.ImageEffects.Blur
struct  Blur_t22  : public MonoBehaviour_t23
{
	// System.Int32 UnityStandardAssets.ImageEffects.Blur::iterations
	int32_t ___iterations_2;
	// System.Single UnityStandardAssets.ImageEffects.Blur::blurSpread
	float ___blurSpread_3;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Blur::blurShader
	Shader_t4 * ___blurShader_4;
};
struct Blur_t22_StaticFields{
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::m_Material
	Material_t5 * ___m_Material_5;
};
