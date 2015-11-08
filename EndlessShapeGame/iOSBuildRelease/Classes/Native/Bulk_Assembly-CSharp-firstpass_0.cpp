#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>

// System.Array
#include "mscorlib_System_Array.h"

// <Module>
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E.h"
// <Module>
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.AAMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec.h"
// UnityStandardAssets.ImageEffects.AAMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffecMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.Antialiasing
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_0.h"
// UnityStandardAssets.ImageEffects.Antialiasing
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_0MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.Antialiasing::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void Antialiasing__ctor_m0 (Antialiasing_t2 * __this, const MethodInfo* method)
{
	{
		__this->___mode_5 = 1;
		__this->___offsetScale_7 = (0.2f);
		__this->___blurRadius_8 = (18.0f);
		__this->___edgeThresholdMin_9 = (0.05f);
		__this->___edgeThreshold_10 = (0.2f);
		__this->___edgeSharpness_11 = (4.0f);
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::CurrentAAMaterial()
extern "C" Material_t5 * Antialiasing_CurrentAAMaterial_m1 (Antialiasing_t2 * __this, const MethodInfo* method)
{
	Material_t5 * V_0 = {0};
	int32_t V_1 = {0};
	{
		V_0 = (Material_t5 *)NULL;
		int32_t L_0 = (__this->___mode_5);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_003c;
		}
		if (L_1 == 1)
		{
			goto IL_0030;
		}
		if (L_1 == 2)
		{
			goto IL_0048;
		}
		if (L_1 == 3)
		{
			goto IL_0054;
		}
		if (L_1 == 4)
		{
			goto IL_0060;
		}
		if (L_1 == 5)
		{
			goto IL_006c;
		}
		if (L_1 == 6)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0084;
	}

IL_0030:
	{
		Material_t5 * L_2 = (__this->___materialFXAAIII_26);
		V_0 = L_2;
		goto IL_008b;
	}

IL_003c:
	{
		Material_t5 * L_3 = (__this->___materialFXAAII_24);
		V_0 = L_3;
		goto IL_008b;
	}

IL_0048:
	{
		Material_t5 * L_4 = (__this->___materialFXAAPreset2_20);
		V_0 = L_4;
		goto IL_008b;
	}

IL_0054:
	{
		Material_t5 * L_5 = (__this->___materialFXAAPreset3_22);
		V_0 = L_5;
		goto IL_008b;
	}

IL_0060:
	{
		Material_t5 * L_6 = (__this->___nfaa_18);
		V_0 = L_6;
		goto IL_008b;
	}

IL_006c:
	{
		Material_t5 * L_7 = (__this->___ssaa_14);
		V_0 = L_7;
		goto IL_008b;
	}

IL_0078:
	{
		Material_t5 * L_8 = (__this->___dlaa_16);
		V_0 = L_8;
		goto IL_008b;
	}

IL_0084:
	{
		V_0 = (Material_t5 *)NULL;
		goto IL_008b;
	}

IL_008b:
	{
		Material_t5 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::CheckResources()
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern "C" bool Antialiasing_CheckResources_m2 (Antialiasing_t2 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___shaderFXAAPreset2_19);
		Material_t5 * L_1 = (__this->___materialFXAAPreset2_20);
		Material_t5 * L_2 = PostEffectsBase_CreateMaterial_m146(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___materialFXAAPreset2_20 = L_2;
		Shader_t4 * L_3 = (__this->___shaderFXAAPreset3_21);
		Material_t5 * L_4 = (__this->___materialFXAAPreset3_22);
		Material_t5 * L_5 = PostEffectsBase_CreateMaterial_m146(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->___materialFXAAPreset3_22 = L_5;
		Shader_t4 * L_6 = (__this->___shaderFXAAII_23);
		Material_t5 * L_7 = (__this->___materialFXAAII_24);
		Material_t5 * L_8 = PostEffectsBase_CreateMaterial_m146(__this, L_6, L_7, /*hidden argument*/NULL);
		__this->___materialFXAAII_24 = L_8;
		Shader_t4 * L_9 = (__this->___shaderFXAAIII_25);
		Material_t5 * L_10 = (__this->___materialFXAAIII_26);
		Material_t5 * L_11 = PostEffectsBase_CreateMaterial_m146(__this, L_9, L_10, /*hidden argument*/NULL);
		__this->___materialFXAAIII_26 = L_11;
		Shader_t4 * L_12 = (__this->___nfaaShader_17);
		Material_t5 * L_13 = (__this->___nfaa_18);
		Material_t5 * L_14 = PostEffectsBase_CreateMaterial_m146(__this, L_12, L_13, /*hidden argument*/NULL);
		__this->___nfaa_18 = L_14;
		Shader_t4 * L_15 = (__this->___ssaaShader_13);
		Material_t5 * L_16 = (__this->___ssaa_14);
		Material_t5 * L_17 = PostEffectsBase_CreateMaterial_m146(__this, L_15, L_16, /*hidden argument*/NULL);
		__this->___ssaa_14 = L_17;
		Shader_t4 * L_18 = (__this->___dlaaShader_15);
		Material_t5 * L_19 = (__this->___dlaa_16);
		Material_t5 * L_20 = PostEffectsBase_CreateMaterial_m146(__this, L_18, L_19, /*hidden argument*/NULL);
		__this->___dlaa_16 = L_20;
		Shader_t4 * L_21 = (__this->___ssaaShader_13);
		NullCheck(L_21);
		bool L_22 = Shader_get_isSupported_m266(L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00cc;
		}
	}
	{
		PostEffectsBase_NotSupported_m156(__this, /*hidden argument*/NULL);
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		bool L_23 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_23;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Antialiasing::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral1;
extern Il2CppCodeGenString* _stringLiteral2;
extern Il2CppCodeGenString* _stringLiteral3;
extern Il2CppCodeGenString* _stringLiteral4;
extern "C" void Antialiasing_OnRenderImage_m3 (Antialiasing_t2 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t55 * V_0 = {0};
	Material_t5 * G_B21_0 = {0};
	RenderTexture_t55 * G_B21_1 = {0};
	RenderTexture_t55 * G_B21_2 = {0};
	Material_t5 * G_B20_0 = {0};
	RenderTexture_t55 * G_B20_1 = {0};
	RenderTexture_t55 * G_B20_2 = {0};
	int32_t G_B22_0 = 0;
	Material_t5 * G_B22_1 = {0};
	RenderTexture_t55 * G_B22_2 = {0};
	RenderTexture_t55 * G_B22_3 = {0};
	Material_t5 * G_B27_0 = {0};
	RenderTexture_t55 * G_B27_1 = {0};
	RenderTexture_t55 * G_B27_2 = {0};
	Material_t5 * G_B26_0 = {0};
	RenderTexture_t55 * G_B26_1 = {0};
	RenderTexture_t55 * G_B26_2 = {0};
	int32_t G_B28_0 = 0;
	Material_t5 * G_B28_1 = {0};
	RenderTexture_t55 * G_B28_2 = {0};
	RenderTexture_t55 * G_B28_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		int32_t L_3 = (__this->___mode_5);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		Material_t5 * L_4 = (__this->___materialFXAAIII_26);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0084;
		}
	}
	{
		Material_t5 * L_6 = (__this->___materialFXAAIII_26);
		float L_7 = (__this->___edgeThresholdMin_9);
		NullCheck(L_6);
		Material_SetFloat_m269(L_6, _stringLiteral0, L_7, /*hidden argument*/NULL);
		Material_t5 * L_8 = (__this->___materialFXAAIII_26);
		float L_9 = (__this->___edgeThreshold_10);
		NullCheck(L_8);
		Material_SetFloat_m269(L_8, _stringLiteral1, L_9, /*hidden argument*/NULL);
		Material_t5 * L_10 = (__this->___materialFXAAIII_26);
		float L_11 = (__this->___edgeSharpness_11);
		NullCheck(L_10);
		Material_SetFloat_m269(L_10, _stringLiteral2, L_11, /*hidden argument*/NULL);
		RenderTexture_t55 * L_12 = ___source;
		RenderTexture_t55 * L_13 = ___destination;
		Material_t5 * L_14 = (__this->___materialFXAAIII_26);
		Graphics_Blit_m270(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		goto IL_0236;
	}

IL_0084:
	{
		int32_t L_15 = (__this->___mode_5);
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_00b3;
		}
	}
	{
		Material_t5 * L_16 = (__this->___materialFXAAPreset3_22);
		bool L_17 = Object_op_Inequality_m268(NULL /*static, unused*/, L_16, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b3;
		}
	}
	{
		RenderTexture_t55 * L_18 = ___source;
		RenderTexture_t55 * L_19 = ___destination;
		Material_t5 * L_20 = (__this->___materialFXAAPreset3_22);
		Graphics_Blit_m270(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		goto IL_0236;
	}

IL_00b3:
	{
		int32_t L_21 = (__this->___mode_5);
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_00f0;
		}
	}
	{
		Material_t5 * L_22 = (__this->___materialFXAAPreset2_20);
		bool L_23 = Object_op_Inequality_m268(NULL /*static, unused*/, L_22, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00f0;
		}
	}
	{
		RenderTexture_t55 * L_24 = ___source;
		NullCheck(L_24);
		Texture_set_anisoLevel_m271(L_24, 4, /*hidden argument*/NULL);
		RenderTexture_t55 * L_25 = ___source;
		RenderTexture_t55 * L_26 = ___destination;
		Material_t5 * L_27 = (__this->___materialFXAAPreset2_20);
		Graphics_Blit_m270(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		RenderTexture_t55 * L_28 = ___source;
		NullCheck(L_28);
		Texture_set_anisoLevel_m271(L_28, 0, /*hidden argument*/NULL);
		goto IL_0236;
	}

IL_00f0:
	{
		int32_t L_29 = (__this->___mode_5);
		if (L_29)
		{
			goto IL_011e;
		}
	}
	{
		Material_t5 * L_30 = (__this->___materialFXAAII_24);
		bool L_31 = Object_op_Inequality_m268(NULL /*static, unused*/, L_30, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_011e;
		}
	}
	{
		RenderTexture_t55 * L_32 = ___source;
		RenderTexture_t55 * L_33 = ___destination;
		Material_t5 * L_34 = (__this->___materialFXAAII_24);
		Graphics_Blit_m270(NULL /*static, unused*/, L_32, L_33, L_34, /*hidden argument*/NULL);
		goto IL_0236;
	}

IL_011e:
	{
		int32_t L_35 = (__this->___mode_5);
		if ((!(((uint32_t)L_35) == ((uint32_t)5))))
		{
			goto IL_014d;
		}
	}
	{
		Material_t5 * L_36 = (__this->___ssaa_14);
		bool L_37 = Object_op_Inequality_m268(NULL /*static, unused*/, L_36, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_014d;
		}
	}
	{
		RenderTexture_t55 * L_38 = ___source;
		RenderTexture_t55 * L_39 = ___destination;
		Material_t5 * L_40 = (__this->___ssaa_14);
		Graphics_Blit_m270(NULL /*static, unused*/, L_38, L_39, L_40, /*hidden argument*/NULL);
		goto IL_0236;
	}

IL_014d:
	{
		int32_t L_41 = (__this->___mode_5);
		if ((!(((uint32_t)L_41) == ((uint32_t)6))))
		{
			goto IL_01bb;
		}
	}
	{
		Material_t5 * L_42 = (__this->___dlaa_16);
		bool L_43 = Object_op_Inequality_m268(NULL /*static, unused*/, L_42, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01bb;
		}
	}
	{
		RenderTexture_t55 * L_44 = ___source;
		NullCheck(L_44);
		Texture_set_anisoLevel_m271(L_44, 0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_45 = ___source;
		NullCheck(L_45);
		int32_t L_46 = RenderTexture_get_width_m272(L_45, /*hidden argument*/NULL);
		RenderTexture_t55 * L_47 = ___source;
		NullCheck(L_47);
		int32_t L_48 = RenderTexture_get_height_m273(L_47, /*hidden argument*/NULL);
		RenderTexture_t55 * L_49 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, L_46, L_48, /*hidden argument*/NULL);
		V_0 = L_49;
		RenderTexture_t55 * L_50 = ___source;
		RenderTexture_t55 * L_51 = V_0;
		Material_t5 * L_52 = (__this->___dlaa_16);
		Graphics_Blit_m275(NULL /*static, unused*/, L_50, L_51, L_52, 0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_53 = V_0;
		RenderTexture_t55 * L_54 = ___destination;
		Material_t5 * L_55 = (__this->___dlaa_16);
		bool L_56 = (__this->___dlaaSharp_12);
		G_B20_0 = L_55;
		G_B20_1 = L_54;
		G_B20_2 = L_53;
		if (!L_56)
		{
			G_B21_0 = L_55;
			G_B21_1 = L_54;
			G_B21_2 = L_53;
			goto IL_01aa;
		}
	}
	{
		G_B22_0 = 2;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		G_B22_3 = G_B20_2;
		goto IL_01ab;
	}

IL_01aa:
	{
		G_B22_0 = 1;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
		G_B22_3 = G_B21_2;
	}

IL_01ab:
	{
		Graphics_Blit_m275(NULL /*static, unused*/, G_B22_3, G_B22_2, G_B22_1, G_B22_0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_57 = V_0;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		goto IL_0236;
	}

IL_01bb:
	{
		int32_t L_58 = (__this->___mode_5);
		if ((!(((uint32_t)L_58) == ((uint32_t)4))))
		{
			goto IL_022f;
		}
	}
	{
		Material_t5 * L_59 = (__this->___nfaa_18);
		bool L_60 = Object_op_Inequality_m268(NULL /*static, unused*/, L_59, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_022f;
		}
	}
	{
		RenderTexture_t55 * L_61 = ___source;
		NullCheck(L_61);
		Texture_set_anisoLevel_m271(L_61, 0, /*hidden argument*/NULL);
		Material_t5 * L_62 = (__this->___nfaa_18);
		float L_63 = (__this->___offsetScale_7);
		NullCheck(L_62);
		Material_SetFloat_m269(L_62, _stringLiteral3, L_63, /*hidden argument*/NULL);
		Material_t5 * L_64 = (__this->___nfaa_18);
		float L_65 = (__this->___blurRadius_8);
		NullCheck(L_64);
		Material_SetFloat_m269(L_64, _stringLiteral4, L_65, /*hidden argument*/NULL);
		RenderTexture_t55 * L_66 = ___source;
		RenderTexture_t55 * L_67 = ___destination;
		Material_t5 * L_68 = (__this->___nfaa_18);
		bool L_69 = (__this->___showGeneratedNormals_6);
		G_B26_0 = L_68;
		G_B26_1 = L_67;
		G_B26_2 = L_66;
		if (!L_69)
		{
			G_B27_0 = L_68;
			G_B27_1 = L_67;
			G_B27_2 = L_66;
			goto IL_0224;
		}
	}
	{
		G_B28_0 = 1;
		G_B28_1 = G_B26_0;
		G_B28_2 = G_B26_1;
		G_B28_3 = G_B26_2;
		goto IL_0225;
	}

IL_0224:
	{
		G_B28_0 = 0;
		G_B28_1 = G_B27_0;
		G_B28_2 = G_B27_1;
		G_B28_3 = G_B27_2;
	}

IL_0225:
	{
		Graphics_Blit_m275(NULL /*static, unused*/, G_B28_3, G_B28_2, G_B28_1, G_B28_0, /*hidden argument*/NULL);
		goto IL_0236;
	}

IL_022f:
	{
		RenderTexture_t55 * L_70 = ___source;
		RenderTexture_t55 * L_71 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_70, L_71, /*hidden argument*/NULL);
	}

IL_0236:
	{
		return;
	}
}
// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2.h"
// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.Bloom/TweakMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_3.h"
// UnityStandardAssets.ImageEffects.Bloom/TweakMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_3MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_4.h"
// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_4MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_5.h"
// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_5MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.Bloom/BloomQuality
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_6.h"
// UnityStandardAssets.ImageEffects.Bloom/BloomQuality
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_6MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.Bloom
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_7.h"
// UnityStandardAssets.ImageEffects.Bloom
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_7MethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_Mathf.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
struct Camera_t32;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m296_gshared (Component_t102 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m296(__this, method) (( Object_t * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t32_m280(__this, method) (( Camera_t32 * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
// System.Void UnityStandardAssets.ImageEffects.Bloom::.ctor()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void Bloom__ctor_m4 (Bloom_t11 * __this, const MethodInfo* method)
{
	{
		__this->___screenBlendMode_6 = 1;
		__this->___sepBlurSpread_9 = (2.5f);
		__this->___quality_10 = 1;
		__this->___bloomIntensity_11 = (0.5f);
		__this->___bloomThreshold_12 = (0.5f);
		Color_t12  L_0 = Color_get_white_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___bloomThresholdColor_13 = L_0;
		__this->___bloomBlurIterations_14 = 2;
		__this->___hollywoodFlareBlurIterations_15 = 2;
		__this->___lensflareMode_17 = 1;
		__this->___hollyStretchWidth_18 = (2.5f);
		__this->___lensflareThreshold_20 = (0.3f);
		__this->___lensFlareSaturation_21 = (0.75f);
		Color_t12  L_1 = {0};
		Color__ctor_m278(&L_1, (0.4f), (0.4f), (0.8f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorA_22 = L_1;
		Color_t12  L_2 = {0};
		Color__ctor_m278(&L_2, (0.4f), (0.8f), (0.8f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorB_23 = L_2;
		Color_t12  L_3 = {0};
		Color__ctor_m278(&L_3, (0.8f), (0.4f), (0.8f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorC_24 = L_3;
		Color_t12  L_4 = {0};
		Color__ctor_m278(&L_4, (0.8f), (0.4f), (0.0f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorD_25 = L_4;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Bloom::CheckResources()
extern "C" bool Bloom_CheckResources_m5 (Bloom_t11 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___screenBlendShader_29);
		Material_t5 * L_1 = (__this->___screenBlend_30);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___screenBlend_30 = L_2;
		Shader_t4 * L_3 = (__this->___lensFlareShader_27);
		Material_t5 * L_4 = (__this->___lensFlareMaterial_28);
		Material_t5 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->___lensFlareMaterial_28 = L_5;
		Shader_t4 * L_6 = (__this->___blurAndFlaresShader_31);
		Material_t5 * L_7 = (__this->___blurAndFlaresMaterial_32);
		Material_t5 * L_8 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_6, L_7, /*hidden argument*/NULL);
		__this->___blurAndFlaresMaterial_32 = L_8;
		Shader_t4 * L_9 = (__this->___brightPassFilterShader_33);
		Material_t5 * L_10 = (__this->___brightPassFilterMaterial_34);
		Material_t5 * L_11 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_9, L_10, /*hidden argument*/NULL);
		__this->___brightPassFilterMaterial_34 = L_11;
		bool L_12 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_12)
		{
			goto IL_0079;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0079:
	{
		bool L_13 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_13;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.Bloom
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_7MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral6;
extern Il2CppCodeGenString* _stringLiteral7;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral9;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral11;
extern "C" void Bloom_OnRenderImage_m6 (Bloom_t11 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	RenderTexture_t55 * V_8 = {0};
	RenderTexture_t55 * V_9 = {0};
	RenderTexture_t55 * V_10 = {0};
	RenderTexture_t55 * V_11 = {0};
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	RenderTexture_t55 * V_14 = {0};
	RenderTexture_t55 * V_15 = {0};
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	RenderTexture_t55 * V_21 = {0};
	Bloom_t11 * G_B5_0 = {0};
	Bloom_t11 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Bloom_t11 * G_B6_1 = {0};
	Bloom_t11 * G_B10_0 = {0};
	Bloom_t11 * G_B9_0 = {0};
	int32_t G_B11_0 = 0;
	Bloom_t11 * G_B11_1 = {0};
	int32_t G_B16_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.Bloom::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		__this->___doHdr_8 = 0;
		int32_t L_3 = (__this->___hdr_7);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		RenderTexture_t55 * L_4 = ___source;
		NullCheck(L_4);
		int32_t L_5 = RenderTexture_get_format_m279(L_4, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			G_B5_0 = __this;
			goto IL_003f;
		}
	}
	{
		Camera_t32 * L_6 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_6);
		bool L_7 = Camera_get_hdr_m281(L_6, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_7));
		G_B6_1 = G_B4_0;
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0040:
	{
		NullCheck(G_B6_1);
		G_B6_1->___doHdr_8 = G_B6_0;
		goto IL_0059;
	}

IL_004a:
	{
		int32_t L_8 = (__this->___hdr_7);
		__this->___doHdr_8 = ((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
	}

IL_0059:
	{
		bool L_9 = (__this->___doHdr_8);
		G_B9_0 = __this;
		if (!L_9)
		{
			G_B10_0 = __this;
			goto IL_006d;
		}
	}
	{
		bool L_10 = (((PostEffectsBase_t3 *)__this)->___supportHDRTextures_2);
		G_B11_0 = ((int32_t)(L_10));
		G_B11_1 = G_B9_0;
		goto IL_006e;
	}

IL_006d:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
	}

IL_006e:
	{
		NullCheck(G_B11_1);
		G_B11_1->___doHdr_8 = G_B11_0;
		int32_t L_11 = (__this->___screenBlendMode_6);
		V_0 = L_11;
		bool L_12 = (__this->___doHdr_8);
		if (!L_12)
		{
			goto IL_0087;
		}
	}
	{
		V_0 = 1;
	}

IL_0087:
	{
		bool L_13 = (__this->___doHdr_8);
		if (!L_13)
		{
			goto IL_0098;
		}
	}
	{
		G_B16_0 = 2;
		goto IL_0099;
	}

IL_0098:
	{
		G_B16_0 = 7;
	}

IL_0099:
	{
		V_1 = G_B16_0;
		RenderTexture_t55 * L_14 = ___source;
		NullCheck(L_14);
		int32_t L_15 = RenderTexture_get_width_m272(L_14, /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)L_15/(int32_t)2));
		RenderTexture_t55 * L_16 = ___source;
		NullCheck(L_16);
		int32_t L_17 = RenderTexture_get_height_m273(L_16, /*hidden argument*/NULL);
		V_3 = ((int32_t)((int32_t)L_17/(int32_t)2));
		RenderTexture_t55 * L_18 = ___source;
		NullCheck(L_18);
		int32_t L_19 = RenderTexture_get_width_m272(L_18, /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)L_19/(int32_t)4));
		RenderTexture_t55 * L_20 = ___source;
		NullCheck(L_20);
		int32_t L_21 = RenderTexture_get_height_m273(L_20, /*hidden argument*/NULL);
		V_5 = ((int32_t)((int32_t)L_21/(int32_t)4));
		RenderTexture_t55 * L_22 = ___source;
		NullCheck(L_22);
		int32_t L_23 = RenderTexture_get_width_m272(L_22, /*hidden argument*/NULL);
		RenderTexture_t55 * L_24 = ___source;
		NullCheck(L_24);
		int32_t L_25 = RenderTexture_get_height_m273(L_24, /*hidden argument*/NULL);
		V_6 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_23))))/(float)((float)((float)(1.0f)*(float)(((float)L_25))))));
		V_7 = (0.001953125f);
		int32_t L_26 = V_4;
		int32_t L_27 = V_5;
		int32_t L_28 = V_1;
		RenderTexture_t55 * L_29 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_26, L_27, 0, L_28, /*hidden argument*/NULL);
		V_8 = L_29;
		int32_t L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_1;
		RenderTexture_t55 * L_33 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_30, L_31, 0, L_32, /*hidden argument*/NULL);
		V_9 = L_33;
		int32_t L_34 = (__this->___quality_10);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_0150;
		}
	}
	{
		RenderTexture_t55 * L_35 = ___source;
		RenderTexture_t55 * L_36 = V_9;
		Material_t5 * L_37 = (__this->___screenBlend_30);
		Graphics_Blit_m275(NULL /*static, unused*/, L_35, L_36, L_37, 2, /*hidden argument*/NULL);
		int32_t L_38 = V_4;
		int32_t L_39 = V_5;
		int32_t L_40 = V_1;
		RenderTexture_t55 * L_41 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_38, L_39, 0, L_40, /*hidden argument*/NULL);
		V_10 = L_41;
		RenderTexture_t55 * L_42 = V_9;
		RenderTexture_t55 * L_43 = V_10;
		Material_t5 * L_44 = (__this->___screenBlend_30);
		Graphics_Blit_m275(NULL /*static, unused*/, L_42, L_43, L_44, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_45 = V_10;
		RenderTexture_t55 * L_46 = V_8;
		Material_t5 * L_47 = (__this->___screenBlend_30);
		Graphics_Blit_m275(NULL /*static, unused*/, L_45, L_46, L_47, 6, /*hidden argument*/NULL);
		RenderTexture_t55 * L_48 = V_10;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		goto IL_0168;
	}

IL_0150:
	{
		RenderTexture_t55 * L_49 = ___source;
		RenderTexture_t55 * L_50 = V_9;
		Graphics_Blit_m267(NULL /*static, unused*/, L_49, L_50, /*hidden argument*/NULL);
		RenderTexture_t55 * L_51 = V_9;
		RenderTexture_t55 * L_52 = V_8;
		Material_t5 * L_53 = (__this->___screenBlend_30);
		Graphics_Blit_m275(NULL /*static, unused*/, L_51, L_52, L_53, 6, /*hidden argument*/NULL);
	}

IL_0168:
	{
		RenderTexture_t55 * L_54 = V_9;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		int32_t L_55 = V_4;
		int32_t L_56 = V_5;
		int32_t L_57 = V_1;
		RenderTexture_t55 * L_58 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_55, L_56, 0, L_57, /*hidden argument*/NULL);
		V_11 = L_58;
		float L_59 = (__this->___bloomThreshold_12);
		Color_t12  L_60 = (__this->___bloomThresholdColor_13);
		Color_t12  L_61 = Color_op_Multiply_m283(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/NULL);
		RenderTexture_t55 * L_62 = V_8;
		RenderTexture_t55 * L_63 = V_11;
		Bloom_BrightFilter_m10(__this, L_61, L_62, L_63, /*hidden argument*/NULL);
		int32_t L_64 = (__this->___bloomBlurIterations_14);
		if ((((int32_t)L_64) >= ((int32_t)1)))
		{
			goto IL_01af;
		}
	}
	{
		__this->___bloomBlurIterations_14 = 1;
		goto IL_01c4;
	}

IL_01af:
	{
		int32_t L_65 = (__this->___bloomBlurIterations_14);
		if ((((int32_t)L_65) <= ((int32_t)((int32_t)10))))
		{
			goto IL_01c4;
		}
	}
	{
		__this->___bloomBlurIterations_14 = ((int32_t)10);
	}

IL_01c4:
	{
		V_12 = 0;
		goto IL_02db;
	}

IL_01cc:
	{
		int32_t L_66 = V_12;
		float L_67 = (__this->___sepBlurSpread_9);
		V_13 = ((float)((float)((float)((float)(1.0f)+(float)((float)((float)(((float)L_66))*(float)(0.25f)))))*(float)L_67));
		int32_t L_68 = V_4;
		int32_t L_69 = V_5;
		int32_t L_70 = V_1;
		RenderTexture_t55 * L_71 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_68, L_69, 0, L_70, /*hidden argument*/NULL);
		V_14 = L_71;
		Material_t5 * L_72 = (__this->___blurAndFlaresMaterial_32);
		float L_73 = V_13;
		float L_74 = V_7;
		Vector4_t100  L_75 = {0};
		Vector4__ctor_m284(&L_75, (0.0f), ((float)((float)L_73*(float)L_74)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_72);
		Material_SetVector_m285(L_72, _stringLiteral5, L_75, /*hidden argument*/NULL);
		RenderTexture_t55 * L_76 = V_11;
		RenderTexture_t55 * L_77 = V_14;
		Material_t5 * L_78 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m275(NULL /*static, unused*/, L_76, L_77, L_78, 4, /*hidden argument*/NULL);
		RenderTexture_t55 * L_79 = V_11;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		RenderTexture_t55 * L_80 = V_14;
		V_11 = L_80;
		int32_t L_81 = V_4;
		int32_t L_82 = V_5;
		int32_t L_83 = V_1;
		RenderTexture_t55 * L_84 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_81, L_82, 0, L_83, /*hidden argument*/NULL);
		V_14 = L_84;
		Material_t5 * L_85 = (__this->___blurAndFlaresMaterial_32);
		float L_86 = V_13;
		float L_87 = V_6;
		float L_88 = V_7;
		Vector4_t100  L_89 = {0};
		Vector4__ctor_m284(&L_89, ((float)((float)((float)((float)L_86/(float)L_87))*(float)L_88)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_85);
		Material_SetVector_m285(L_85, _stringLiteral5, L_89, /*hidden argument*/NULL);
		RenderTexture_t55 * L_90 = V_11;
		RenderTexture_t55 * L_91 = V_14;
		Material_t5 * L_92 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m275(NULL /*static, unused*/, L_90, L_91, L_92, 4, /*hidden argument*/NULL);
		RenderTexture_t55 * L_93 = V_11;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_93, /*hidden argument*/NULL);
		RenderTexture_t55 * L_94 = V_14;
		V_11 = L_94;
		int32_t L_95 = (__this->___quality_10);
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_02d5;
		}
	}
	{
		int32_t L_96 = V_12;
		if (L_96)
		{
			goto IL_02bd;
		}
	}
	{
		RenderTexture_t55 * L_97 = V_8;
		Graphics_SetRenderTarget_m286(NULL /*static, unused*/, L_97, /*hidden argument*/NULL);
		Color_t12  L_98 = Color_get_black_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Clear_m288(NULL /*static, unused*/, 0, 1, L_98, /*hidden argument*/NULL);
		RenderTexture_t55 * L_99 = V_11;
		RenderTexture_t55 * L_100 = V_8;
		Graphics_Blit_m267(NULL /*static, unused*/, L_99, L_100, /*hidden argument*/NULL);
		goto IL_02d5;
	}

IL_02bd:
	{
		RenderTexture_t55 * L_101 = V_8;
		NullCheck(L_101);
		RenderTexture_MarkRestoreExpected_m289(L_101, /*hidden argument*/NULL);
		RenderTexture_t55 * L_102 = V_11;
		RenderTexture_t55 * L_103 = V_8;
		Material_t5 * L_104 = (__this->___screenBlend_30);
		Graphics_Blit_m275(NULL /*static, unused*/, L_102, L_103, L_104, ((int32_t)10), /*hidden argument*/NULL);
	}

IL_02d5:
	{
		int32_t L_105 = V_12;
		V_12 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02db:
	{
		int32_t L_106 = V_12;
		int32_t L_107 = (__this->___bloomBlurIterations_14);
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_01cc;
		}
	}
	{
		int32_t L_108 = (__this->___quality_10);
		if ((((int32_t)L_108) <= ((int32_t)0)))
		{
			goto IL_0317;
		}
	}
	{
		RenderTexture_t55 * L_109 = V_11;
		Graphics_SetRenderTarget_m286(NULL /*static, unused*/, L_109, /*hidden argument*/NULL);
		Color_t12  L_110 = Color_get_black_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Clear_m288(NULL /*static, unused*/, 0, 1, L_110, /*hidden argument*/NULL);
		RenderTexture_t55 * L_111 = V_8;
		RenderTexture_t55 * L_112 = V_11;
		Material_t5 * L_113 = (__this->___screenBlend_30);
		Graphics_Blit_m275(NULL /*static, unused*/, L_111, L_112, L_113, 6, /*hidden argument*/NULL);
	}

IL_0317:
	{
		float L_114 = (__this->___lensflareIntensity_19);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_115 = ((Mathf_t101_StaticFields*)Mathf_t101_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		if ((!(((float)L_114) > ((float)L_115))))
		{
			goto IL_0710;
		}
	}
	{
		int32_t L_116 = V_4;
		int32_t L_117 = V_5;
		int32_t L_118 = V_1;
		RenderTexture_t55 * L_119 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_116, L_117, 0, L_118, /*hidden argument*/NULL);
		V_15 = L_119;
		int32_t L_120 = (__this->___lensflareMode_17);
		if (L_120)
		{
			goto IL_042f;
		}
	}
	{
		float L_121 = (__this->___lensflareThreshold_20);
		RenderTexture_t55 * L_122 = V_11;
		RenderTexture_t55 * L_123 = V_15;
		Bloom_BrightFilter_m9(__this, L_121, L_122, L_123, /*hidden argument*/NULL);
		int32_t L_124 = (__this->___quality_10);
		if ((((int32_t)L_124) <= ((int32_t)0)))
		{
			goto IL_0411;
		}
	}
	{
		Material_t5 * L_125 = (__this->___blurAndFlaresMaterial_32);
		RenderTexture_t55 * L_126 = V_8;
		NullCheck(L_126);
		int32_t L_127 = RenderTexture_get_height_m273(L_126, /*hidden argument*/NULL);
		Vector4_t100  L_128 = {0};
		Vector4__ctor_m284(&L_128, (0.0f), ((float)((float)(1.5f)/(float)((float)((float)(1.0f)*(float)(((float)L_127)))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_125);
		Material_SetVector_m285(L_125, _stringLiteral5, L_128, /*hidden argument*/NULL);
		RenderTexture_t55 * L_129 = V_8;
		Graphics_SetRenderTarget_m286(NULL /*static, unused*/, L_129, /*hidden argument*/NULL);
		Color_t12  L_130 = Color_get_black_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Clear_m288(NULL /*static, unused*/, 0, 1, L_130, /*hidden argument*/NULL);
		RenderTexture_t55 * L_131 = V_15;
		RenderTexture_t55 * L_132 = V_8;
		Material_t5 * L_133 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m275(NULL /*static, unused*/, L_131, L_132, L_133, 4, /*hidden argument*/NULL);
		Material_t5 * L_134 = (__this->___blurAndFlaresMaterial_32);
		RenderTexture_t55 * L_135 = V_8;
		NullCheck(L_135);
		int32_t L_136 = RenderTexture_get_width_m272(L_135, /*hidden argument*/NULL);
		Vector4_t100  L_137 = {0};
		Vector4__ctor_m284(&L_137, ((float)((float)(1.5f)/(float)((float)((float)(1.0f)*(float)(((float)L_136)))))), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_134);
		Material_SetVector_m285(L_134, _stringLiteral5, L_137, /*hidden argument*/NULL);
		RenderTexture_t55 * L_138 = V_15;
		Graphics_SetRenderTarget_m286(NULL /*static, unused*/, L_138, /*hidden argument*/NULL);
		Color_t12  L_139 = Color_get_black_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Clear_m288(NULL /*static, unused*/, 0, 1, L_139, /*hidden argument*/NULL);
		RenderTexture_t55 * L_140 = V_8;
		RenderTexture_t55 * L_141 = V_15;
		Material_t5 * L_142 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m275(NULL /*static, unused*/, L_140, L_141, L_142, 4, /*hidden argument*/NULL);
	}

IL_0411:
	{
		RenderTexture_t55 * L_143 = V_15;
		RenderTexture_t55 * L_144 = V_15;
		Bloom_Vignette_m11(__this, (0.975f), L_143, L_144, /*hidden argument*/NULL);
		RenderTexture_t55 * L_145 = V_15;
		RenderTexture_t55 * L_146 = V_11;
		Bloom_BlendFlares_m8(__this, L_145, L_146, /*hidden argument*/NULL);
		goto IL_0709;
	}

IL_042f:
	{
		float L_147 = (__this->___flareRotation_16);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_148 = cosf(L_147);
		V_16 = ((float)((float)(1.0f)*(float)L_148));
		float L_149 = (__this->___flareRotation_16);
		float L_150 = sinf(L_149);
		V_17 = ((float)((float)(1.0f)*(float)L_150));
		float L_151 = (__this->___hollyStretchWidth_18);
		float L_152 = V_6;
		float L_153 = V_7;
		V_18 = ((float)((float)((float)((float)((float)((float)L_151*(float)(1.0f)))/(float)L_152))*(float)L_153));
		Material_t5 * L_154 = (__this->___blurAndFlaresMaterial_32);
		float L_155 = V_16;
		float L_156 = V_17;
		Vector4_t100  L_157 = {0};
		Vector4__ctor_m284(&L_157, L_155, L_156, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_154);
		Material_SetVector_m285(L_154, _stringLiteral5, L_157, /*hidden argument*/NULL);
		Material_t5 * L_158 = (__this->___blurAndFlaresMaterial_32);
		float L_159 = (__this->___lensflareThreshold_20);
		Vector4_t100  L_160 = {0};
		Vector4__ctor_m284(&L_160, L_159, (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_158);
		Material_SetVector_m285(L_158, _stringLiteral6, L_160, /*hidden argument*/NULL);
		Material_t5 * L_161 = (__this->___blurAndFlaresMaterial_32);
		Color_t12 * L_162 = &(__this->___flareColorA_22);
		float L_163 = (L_162->___r_0);
		Color_t12 * L_164 = &(__this->___flareColorA_22);
		float L_165 = (L_164->___g_1);
		Color_t12 * L_166 = &(__this->___flareColorA_22);
		float L_167 = (L_166->___b_2);
		Color_t12 * L_168 = &(__this->___flareColorA_22);
		float L_169 = (L_168->___a_3);
		Vector4_t100  L_170 = {0};
		Vector4__ctor_m284(&L_170, L_163, L_165, L_167, L_169, /*hidden argument*/NULL);
		Color_t12 * L_171 = &(__this->___flareColorA_22);
		float L_172 = (L_171->___a_3);
		Vector4_t100  L_173 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_170, L_172, /*hidden argument*/NULL);
		float L_174 = (__this->___lensflareIntensity_19);
		Vector4_t100  L_175 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_173, L_174, /*hidden argument*/NULL);
		NullCheck(L_161);
		Material_SetVector_m285(L_161, _stringLiteral7, L_175, /*hidden argument*/NULL);
		Material_t5 * L_176 = (__this->___blurAndFlaresMaterial_32);
		float L_177 = (__this->___lensFlareSaturation_21);
		NullCheck(L_176);
		Material_SetFloat_m269(L_176, _stringLiteral8, L_177, /*hidden argument*/NULL);
		RenderTexture_t55 * L_178 = V_8;
		NullCheck(L_178);
		RenderTexture_DiscardContents_m291(L_178, /*hidden argument*/NULL);
		RenderTexture_t55 * L_179 = V_15;
		RenderTexture_t55 * L_180 = V_8;
		Material_t5 * L_181 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m275(NULL /*static, unused*/, L_179, L_180, L_181, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_182 = V_15;
		NullCheck(L_182);
		RenderTexture_DiscardContents_m291(L_182, /*hidden argument*/NULL);
		RenderTexture_t55 * L_183 = V_8;
		RenderTexture_t55 * L_184 = V_15;
		Material_t5 * L_185 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m275(NULL /*static, unused*/, L_183, L_184, L_185, 3, /*hidden argument*/NULL);
		Material_t5 * L_186 = (__this->___blurAndFlaresMaterial_32);
		float L_187 = V_16;
		float L_188 = V_18;
		float L_189 = V_17;
		float L_190 = V_18;
		Vector4_t100  L_191 = {0};
		Vector4__ctor_m284(&L_191, ((float)((float)L_187*(float)L_188)), ((float)((float)L_189*(float)L_190)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_186);
		Material_SetVector_m285(L_186, _stringLiteral5, L_191, /*hidden argument*/NULL);
		Material_t5 * L_192 = (__this->___blurAndFlaresMaterial_32);
		float L_193 = (__this->___hollyStretchWidth_18);
		NullCheck(L_192);
		Material_SetFloat_m269(L_192, _stringLiteral9, L_193, /*hidden argument*/NULL);
		RenderTexture_t55 * L_194 = V_8;
		NullCheck(L_194);
		RenderTexture_DiscardContents_m291(L_194, /*hidden argument*/NULL);
		RenderTexture_t55 * L_195 = V_15;
		RenderTexture_t55 * L_196 = V_8;
		Material_t5 * L_197 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m275(NULL /*static, unused*/, L_195, L_196, L_197, 1, /*hidden argument*/NULL);
		Material_t5 * L_198 = (__this->___blurAndFlaresMaterial_32);
		float L_199 = (__this->___hollyStretchWidth_18);
		NullCheck(L_198);
		Material_SetFloat_m269(L_198, _stringLiteral9, ((float)((float)L_199*(float)(2.0f))), /*hidden argument*/NULL);
		RenderTexture_t55 * L_200 = V_15;
		NullCheck(L_200);
		RenderTexture_DiscardContents_m291(L_200, /*hidden argument*/NULL);
		RenderTexture_t55 * L_201 = V_8;
		RenderTexture_t55 * L_202 = V_15;
		Material_t5 * L_203 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m275(NULL /*static, unused*/, L_201, L_202, L_203, 1, /*hidden argument*/NULL);
		Material_t5 * L_204 = (__this->___blurAndFlaresMaterial_32);
		float L_205 = (__this->___hollyStretchWidth_18);
		NullCheck(L_204);
		Material_SetFloat_m269(L_204, _stringLiteral9, ((float)((float)L_205*(float)(4.0f))), /*hidden argument*/NULL);
		RenderTexture_t55 * L_206 = V_8;
		NullCheck(L_206);
		RenderTexture_DiscardContents_m291(L_206, /*hidden argument*/NULL);
		RenderTexture_t55 * L_207 = V_15;
		RenderTexture_t55 * L_208 = V_8;
		Material_t5 * L_209 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m275(NULL /*static, unused*/, L_207, L_208, L_209, 1, /*hidden argument*/NULL);
		V_19 = 0;
		goto IL_06b4;
	}

IL_061a:
	{
		float L_210 = (__this->___hollyStretchWidth_18);
		float L_211 = V_6;
		float L_212 = V_7;
		V_18 = ((float)((float)((float)((float)((float)((float)L_210*(float)(2.0f)))/(float)L_211))*(float)L_212));
		Material_t5 * L_213 = (__this->___blurAndFlaresMaterial_32);
		float L_214 = V_18;
		float L_215 = V_16;
		float L_216 = V_18;
		float L_217 = V_17;
		Vector4_t100  L_218 = {0};
		Vector4__ctor_m284(&L_218, ((float)((float)L_214*(float)L_215)), ((float)((float)L_216*(float)L_217)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_213);
		Material_SetVector_m285(L_213, _stringLiteral5, L_218, /*hidden argument*/NULL);
		RenderTexture_t55 * L_219 = V_15;
		NullCheck(L_219);
		RenderTexture_DiscardContents_m291(L_219, /*hidden argument*/NULL);
		RenderTexture_t55 * L_220 = V_8;
		RenderTexture_t55 * L_221 = V_15;
		Material_t5 * L_222 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m275(NULL /*static, unused*/, L_220, L_221, L_222, 4, /*hidden argument*/NULL);
		Material_t5 * L_223 = (__this->___blurAndFlaresMaterial_32);
		float L_224 = V_18;
		float L_225 = V_16;
		float L_226 = V_18;
		float L_227 = V_17;
		Vector4_t100  L_228 = {0};
		Vector4__ctor_m284(&L_228, ((float)((float)L_224*(float)L_225)), ((float)((float)L_226*(float)L_227)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_223);
		Material_SetVector_m285(L_223, _stringLiteral5, L_228, /*hidden argument*/NULL);
		RenderTexture_t55 * L_229 = V_8;
		NullCheck(L_229);
		RenderTexture_DiscardContents_m291(L_229, /*hidden argument*/NULL);
		RenderTexture_t55 * L_230 = V_15;
		RenderTexture_t55 * L_231 = V_8;
		Material_t5 * L_232 = (__this->___blurAndFlaresMaterial_32);
		Graphics_Blit_m275(NULL /*static, unused*/, L_230, L_231, L_232, 4, /*hidden argument*/NULL);
		int32_t L_233 = V_19;
		V_19 = ((int32_t)((int32_t)L_233+(int32_t)1));
	}

IL_06b4:
	{
		int32_t L_234 = V_19;
		int32_t L_235 = (__this->___hollywoodFlareBlurIterations_15);
		if ((((int32_t)L_234) < ((int32_t)L_235)))
		{
			goto IL_061a;
		}
	}
	{
		int32_t L_236 = (__this->___lensflareMode_17);
		if ((!(((uint32_t)L_236) == ((uint32_t)1))))
		{
			goto IL_06e1;
		}
	}
	{
		RenderTexture_t55 * L_237 = V_8;
		RenderTexture_t55 * L_238 = V_11;
		Bloom_AddTo_m7(__this, (1.0f), L_237, L_238, /*hidden argument*/NULL);
		goto IL_0709;
	}

IL_06e1:
	{
		RenderTexture_t55 * L_239 = V_8;
		RenderTexture_t55 * L_240 = V_15;
		Bloom_Vignette_m11(__this, (1.0f), L_239, L_240, /*hidden argument*/NULL);
		RenderTexture_t55 * L_241 = V_15;
		RenderTexture_t55 * L_242 = V_8;
		Bloom_BlendFlares_m8(__this, L_241, L_242, /*hidden argument*/NULL);
		RenderTexture_t55 * L_243 = V_8;
		RenderTexture_t55 * L_244 = V_11;
		Bloom_AddTo_m7(__this, (1.0f), L_243, L_244, /*hidden argument*/NULL);
	}

IL_0709:
	{
		RenderTexture_t55 * L_245 = V_15;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_245, /*hidden argument*/NULL);
	}

IL_0710:
	{
		int32_t L_246 = V_0;
		V_20 = L_246;
		Material_t5 * L_247 = (__this->___screenBlend_30);
		float L_248 = (__this->___bloomIntensity_11);
		NullCheck(L_247);
		Material_SetFloat_m269(L_247, _stringLiteral10, L_248, /*hidden argument*/NULL);
		Material_t5 * L_249 = (__this->___screenBlend_30);
		RenderTexture_t55 * L_250 = ___source;
		NullCheck(L_249);
		Material_SetTexture_m292(L_249, _stringLiteral11, L_250, /*hidden argument*/NULL);
		int32_t L_251 = (__this->___quality_10);
		if ((((int32_t)L_251) <= ((int32_t)0)))
		{
			goto IL_0776;
		}
	}
	{
		int32_t L_252 = V_2;
		int32_t L_253 = V_3;
		int32_t L_254 = V_1;
		RenderTexture_t55 * L_255 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_252, L_253, 0, L_254, /*hidden argument*/NULL);
		V_21 = L_255;
		RenderTexture_t55 * L_256 = V_11;
		RenderTexture_t55 * L_257 = V_21;
		Graphics_Blit_m267(NULL /*static, unused*/, L_256, L_257, /*hidden argument*/NULL);
		RenderTexture_t55 * L_258 = V_21;
		RenderTexture_t55 * L_259 = ___destination;
		Material_t5 * L_260 = (__this->___screenBlend_30);
		int32_t L_261 = V_20;
		Graphics_Blit_m275(NULL /*static, unused*/, L_258, L_259, L_260, L_261, /*hidden argument*/NULL);
		RenderTexture_t55 * L_262 = V_21;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_262, /*hidden argument*/NULL);
		goto IL_0786;
	}

IL_0776:
	{
		RenderTexture_t55 * L_263 = V_11;
		RenderTexture_t55 * L_264 = ___destination;
		Material_t5 * L_265 = (__this->___screenBlend_30);
		int32_t L_266 = V_20;
		Graphics_Blit_m275(NULL /*static, unused*/, L_263, L_264, L_265, L_266, /*hidden argument*/NULL);
	}

IL_0786:
	{
		RenderTexture_t55 * L_267 = V_8;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_267, /*hidden argument*/NULL);
		RenderTexture_t55 * L_268 = V_11;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_268, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// System.Single
#include "mscorlib_System_Single.h"
extern Il2CppCodeGenString* _stringLiteral10;
extern "C" void Bloom_AddTo_m7 (Bloom_t11 * __this, float ___intensity_, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___screenBlend_30);
		float L_1 = ___intensity_;
		NullCheck(L_0);
		Material_SetFloat_m269(L_0, _stringLiteral10, L_1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_2 = ___to;
		NullCheck(L_2);
		RenderTexture_MarkRestoreExpected_m289(L_2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_3 = ___from;
		RenderTexture_t55 * L_4 = ___to;
		Material_t5 * L_5 = (__this->___screenBlend_30);
		Graphics_Blit_m275(NULL /*static, unused*/, L_3, L_4, L_5, ((int32_t)9), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern Il2CppCodeGenString* _stringLiteral12;
extern Il2CppCodeGenString* _stringLiteral13;
extern Il2CppCodeGenString* _stringLiteral14;
extern Il2CppCodeGenString* _stringLiteral15;
extern "C" void Bloom_BlendFlares_m8 (Bloom_t11 * __this, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___lensFlareMaterial_28);
		Color_t12 * L_1 = &(__this->___flareColorA_22);
		float L_2 = (L_1->___r_0);
		Color_t12 * L_3 = &(__this->___flareColorA_22);
		float L_4 = (L_3->___g_1);
		Color_t12 * L_5 = &(__this->___flareColorA_22);
		float L_6 = (L_5->___b_2);
		Color_t12 * L_7 = &(__this->___flareColorA_22);
		float L_8 = (L_7->___a_3);
		Vector4_t100  L_9 = {0};
		Vector4__ctor_m284(&L_9, L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
		float L_10 = (__this->___lensflareIntensity_19);
		Vector4_t100  L_11 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_m285(L_0, _stringLiteral12, L_11, /*hidden argument*/NULL);
		Material_t5 * L_12 = (__this->___lensFlareMaterial_28);
		Color_t12 * L_13 = &(__this->___flareColorB_23);
		float L_14 = (L_13->___r_0);
		Color_t12 * L_15 = &(__this->___flareColorB_23);
		float L_16 = (L_15->___g_1);
		Color_t12 * L_17 = &(__this->___flareColorB_23);
		float L_18 = (L_17->___b_2);
		Color_t12 * L_19 = &(__this->___flareColorB_23);
		float L_20 = (L_19->___a_3);
		Vector4_t100  L_21 = {0};
		Vector4__ctor_m284(&L_21, L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
		float L_22 = (__this->___lensflareIntensity_19);
		Vector4_t100  L_23 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_12);
		Material_SetVector_m285(L_12, _stringLiteral13, L_23, /*hidden argument*/NULL);
		Material_t5 * L_24 = (__this->___lensFlareMaterial_28);
		Color_t12 * L_25 = &(__this->___flareColorC_24);
		float L_26 = (L_25->___r_0);
		Color_t12 * L_27 = &(__this->___flareColorC_24);
		float L_28 = (L_27->___g_1);
		Color_t12 * L_29 = &(__this->___flareColorC_24);
		float L_30 = (L_29->___b_2);
		Color_t12 * L_31 = &(__this->___flareColorC_24);
		float L_32 = (L_31->___a_3);
		Vector4_t100  L_33 = {0};
		Vector4__ctor_m284(&L_33, L_26, L_28, L_30, L_32, /*hidden argument*/NULL);
		float L_34 = (__this->___lensflareIntensity_19);
		Vector4_t100  L_35 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_24);
		Material_SetVector_m285(L_24, _stringLiteral14, L_35, /*hidden argument*/NULL);
		Material_t5 * L_36 = (__this->___lensFlareMaterial_28);
		Color_t12 * L_37 = &(__this->___flareColorD_25);
		float L_38 = (L_37->___r_0);
		Color_t12 * L_39 = &(__this->___flareColorD_25);
		float L_40 = (L_39->___g_1);
		Color_t12 * L_41 = &(__this->___flareColorD_25);
		float L_42 = (L_41->___b_2);
		Color_t12 * L_43 = &(__this->___flareColorD_25);
		float L_44 = (L_43->___a_3);
		Vector4_t100  L_45 = {0};
		Vector4__ctor_m284(&L_45, L_38, L_40, L_42, L_44, /*hidden argument*/NULL);
		float L_46 = (__this->___lensflareIntensity_19);
		Vector4_t100  L_47 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_36);
		Material_SetVector_m285(L_36, _stringLiteral15, L_47, /*hidden argument*/NULL);
		RenderTexture_t55 * L_48 = ___to;
		NullCheck(L_48);
		RenderTexture_MarkRestoreExpected_m289(L_48, /*hidden argument*/NULL);
		RenderTexture_t55 * L_49 = ___from;
		RenderTexture_t55 * L_50 = ___to;
		Material_t5 * L_51 = (__this->___lensFlareMaterial_28);
		Graphics_Blit_m270(NULL /*static, unused*/, L_49, L_50, L_51, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern Il2CppCodeGenString* _stringLiteral6;
extern "C" void Bloom_BrightFilter_m9 (Bloom_t11 * __this, float ___thresh, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___brightPassFilterMaterial_34);
		float L_1 = ___thresh;
		float L_2 = ___thresh;
		float L_3 = ___thresh;
		float L_4 = ___thresh;
		Vector4_t100  L_5 = {0};
		Vector4__ctor_m284(&L_5, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_m285(L_0, _stringLiteral6, L_5, /*hidden argument*/NULL);
		RenderTexture_t55 * L_6 = ___from;
		RenderTexture_t55 * L_7 = ___to;
		Material_t5 * L_8 = (__this->___brightPassFilterMaterial_34);
		Graphics_Blit_m275(NULL /*static, unused*/, L_6, L_7, L_8, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern Il2CppCodeGenString* _stringLiteral6;
extern "C" void Bloom_BrightFilter_m10 (Bloom_t11 * __this, Color_t12  ___threshColor, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___brightPassFilterMaterial_34);
		Color_t12  L_1 = ___threshColor;
		Vector4_t100  L_2 = Color_op_Implicit_m293(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_m285(L_0, _stringLiteral6, L_2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_3 = ___from;
		RenderTexture_t55 * L_4 = ___to;
		Material_t5 * L_5 = (__this->___brightPassFilterMaterial_34);
		Graphics_Blit_m275(NULL /*static, unused*/, L_3, L_4, L_5, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral11;
extern "C" void Bloom_Vignette_m11 (Bloom_t11 * __this, float ___amount, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t55 * G_B4_0 = {0};
	Material_t5 * G_B6_0 = {0};
	RenderTexture_t55 * G_B6_1 = {0};
	RenderTexture_t55 * G_B6_2 = {0};
	Material_t5 * G_B5_0 = {0};
	RenderTexture_t55 * G_B5_1 = {0};
	RenderTexture_t55 * G_B5_2 = {0};
	int32_t G_B7_0 = 0;
	Material_t5 * G_B7_1 = {0};
	RenderTexture_t55 * G_B7_2 = {0};
	RenderTexture_t55 * G_B7_3 = {0};
	{
		Texture2D_t13 * L_0 = (__this->___lensFlareVignetteMask_26);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		Material_t5 * L_2 = (__this->___screenBlend_30);
		Texture2D_t13 * L_3 = (__this->___lensFlareVignetteMask_26);
		NullCheck(L_2);
		Material_SetTexture_m292(L_2, _stringLiteral11, L_3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_4 = ___to;
		NullCheck(L_4);
		RenderTexture_MarkRestoreExpected_m289(L_4, /*hidden argument*/NULL);
		RenderTexture_t55 * L_5 = ___from;
		RenderTexture_t55 * L_6 = ___to;
		bool L_7 = Object_op_Equality_m295(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		G_B4_0 = ((RenderTexture_t55 *)(NULL));
		goto IL_003f;
	}

IL_003e:
	{
		RenderTexture_t55 * L_8 = ___from;
		G_B4_0 = L_8;
	}

IL_003f:
	{
		RenderTexture_t55 * L_9 = ___to;
		Material_t5 * L_10 = (__this->___screenBlend_30);
		RenderTexture_t55 * L_11 = ___from;
		RenderTexture_t55 * L_12 = ___to;
		bool L_13 = Object_op_Equality_m295(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		G_B5_0 = L_10;
		G_B5_1 = L_9;
		G_B5_2 = G_B4_0;
		if (!L_13)
		{
			G_B6_0 = L_10;
			G_B6_1 = L_9;
			G_B6_2 = G_B4_0;
			goto IL_0058;
		}
	}
	{
		G_B7_0 = 7;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_0059;
	}

IL_0058:
	{
		G_B7_0 = 3;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_0059:
	{
		Graphics_Blit_m275(NULL /*static, unused*/, G_B7_3, G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0063:
	{
		RenderTexture_t55 * L_14 = ___from;
		RenderTexture_t55 * L_15 = ___to;
		bool L_16 = Object_op_Inequality_m268(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		RenderTexture_t55 * L_17 = ___to;
		Graphics_SetRenderTarget_m286(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		Color_t12  L_18 = Color_get_black_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Clear_m288(NULL /*static, unused*/, 0, 1, L_18, /*hidden argument*/NULL);
		RenderTexture_t55 * L_19 = ___from;
		RenderTexture_t55 * L_20 = ___to;
		Graphics_Blit_m267(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// UnityStandardAssets.ImageEffects.LensflareStyle34
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_8.h"
// UnityStandardAssets.ImageEffects.LensflareStyle34
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_8MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.TweakMode34
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_9.h"
// UnityStandardAssets.ImageEffects.TweakMode34
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_9MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.HDRBloomMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_10.h"
// UnityStandardAssets.ImageEffects.HDRBloomMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_10MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.BloomScreenBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_11.h"
// UnityStandardAssets.ImageEffects.BloomScreenBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_11MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.BloomAndFlares
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_12.h"
// UnityStandardAssets.ImageEffects.BloomAndFlares
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_12MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::.ctor()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void BloomAndFlares__ctor_m12 (BloomAndFlares_t18 * __this, const MethodInfo* method)
{
	{
		__this->___screenBlendMode_6 = 1;
		__this->___sepBlurSpread_9 = (1.5f);
		__this->___useSrcAlphaAsMask_10 = (0.5f);
		__this->___bloomIntensity_11 = (1.0f);
		__this->___bloomThreshold_12 = (0.5f);
		__this->___bloomBlurIterations_13 = 2;
		__this->___hollywoodFlareBlurIterations_15 = 2;
		__this->___lensflareMode_16 = 1;
		__this->___hollyStretchWidth_17 = (3.5f);
		__this->___lensflareIntensity_18 = (1.0f);
		__this->___lensflareThreshold_19 = (0.3f);
		Color_t12  L_0 = {0};
		Color__ctor_m278(&L_0, (0.4f), (0.4f), (0.8f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorA_20 = L_0;
		Color_t12  L_1 = {0};
		Color__ctor_m278(&L_1, (0.4f), (0.8f), (0.8f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorB_21 = L_1;
		Color_t12  L_2 = {0};
		Color__ctor_m278(&L_2, (0.8f), (0.4f), (0.8f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorC_22 = L_2;
		Color_t12  L_3 = {0};
		Color__ctor_m278(&L_3, (0.8f), (0.4f), (0.0f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorD_23 = L_3;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::CheckResources()
extern "C" bool BloomAndFlares_CheckResources_m13 (BloomAndFlares_t18 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___screenBlendShader_33);
		Material_t5 * L_1 = (__this->___screenBlend_34);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___screenBlend_34 = L_2;
		Shader_t4 * L_3 = (__this->___lensFlareShader_25);
		Material_t5 * L_4 = (__this->___lensFlareMaterial_26);
		Material_t5 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->___lensFlareMaterial_26 = L_5;
		Shader_t4 * L_6 = (__this->___vignetteShader_27);
		Material_t5 * L_7 = (__this->___vignetteMaterial_28);
		Material_t5 * L_8 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_6, L_7, /*hidden argument*/NULL);
		__this->___vignetteMaterial_28 = L_8;
		Shader_t4 * L_9 = (__this->___separableBlurShader_29);
		Material_t5 * L_10 = (__this->___separableBlurMaterial_30);
		Material_t5 * L_11 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_9, L_10, /*hidden argument*/NULL);
		__this->___separableBlurMaterial_30 = L_11;
		Shader_t4 * L_12 = (__this->___addBrightStuffOneOneShader_31);
		Material_t5 * L_13 = (__this->___addBrightStuffBlendOneOneMaterial_32);
		Material_t5 * L_14 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_12, L_13, /*hidden argument*/NULL);
		__this->___addBrightStuffBlendOneOneMaterial_32 = L_14;
		Shader_t4 * L_15 = (__this->___hollywoodFlaresShader_35);
		Material_t5 * L_16 = (__this->___hollywoodFlaresMaterial_36);
		Material_t5 * L_17 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_15, L_16, /*hidden argument*/NULL);
		__this->___hollywoodFlaresMaterial_36 = L_17;
		Shader_t4 * L_18 = (__this->___brightPassFilterShader_37);
		Material_t5 * L_19 = (__this->___brightPassFilterMaterial_38);
		Material_t5 * L_20 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_18, L_19, /*hidden argument*/NULL);
		__this->___brightPassFilterMaterial_38 = L_20;
		bool L_21 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_21)
		{
			goto IL_00c1;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		bool L_22 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_22;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.BloomAndFlares
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_12MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral16;
extern Il2CppCodeGenString* _stringLiteral17;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral19;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral11;
extern "C" void BloomAndFlares_OnRenderImage_m14 (BloomAndFlares_t18 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	RenderTexture_t55 * V_2 = {0};
	RenderTexture_t55 * V_3 = {0};
	RenderTexture_t55 * V_4 = {0};
	RenderTexture_t55 * V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	RenderTexture_t55 * V_10 = {0};
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	BloomAndFlares_t18 * G_B5_0 = {0};
	BloomAndFlares_t18 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	BloomAndFlares_t18 * G_B6_1 = {0};
	BloomAndFlares_t18 * G_B10_0 = {0};
	BloomAndFlares_t18 * G_B9_0 = {0};
	int32_t G_B11_0 = 0;
	BloomAndFlares_t18 * G_B11_1 = {0};
	int32_t G_B16_0 = 0;
	RenderTexture_t55 * G_B22_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		__this->___doHdr_8 = 0;
		int32_t L_3 = (__this->___hdr_7);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		RenderTexture_t55 * L_4 = ___source;
		NullCheck(L_4);
		int32_t L_5 = RenderTexture_get_format_m279(L_4, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			G_B5_0 = __this;
			goto IL_003f;
		}
	}
	{
		Camera_t32 * L_6 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_6);
		bool L_7 = Camera_get_hdr_m281(L_6, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_7));
		G_B6_1 = G_B4_0;
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0040:
	{
		NullCheck(G_B6_1);
		G_B6_1->___doHdr_8 = G_B6_0;
		goto IL_0059;
	}

IL_004a:
	{
		int32_t L_8 = (__this->___hdr_7);
		__this->___doHdr_8 = ((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
	}

IL_0059:
	{
		bool L_9 = (__this->___doHdr_8);
		G_B9_0 = __this;
		if (!L_9)
		{
			G_B10_0 = __this;
			goto IL_006d;
		}
	}
	{
		bool L_10 = (((PostEffectsBase_t3 *)__this)->___supportHDRTextures_2);
		G_B11_0 = ((int32_t)(L_10));
		G_B11_1 = G_B9_0;
		goto IL_006e;
	}

IL_006d:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
	}

IL_006e:
	{
		NullCheck(G_B11_1);
		G_B11_1->___doHdr_8 = G_B11_0;
		int32_t L_11 = (__this->___screenBlendMode_6);
		V_0 = L_11;
		bool L_12 = (__this->___doHdr_8);
		if (!L_12)
		{
			goto IL_0087;
		}
	}
	{
		V_0 = 1;
	}

IL_0087:
	{
		bool L_13 = (__this->___doHdr_8);
		if (!L_13)
		{
			goto IL_0098;
		}
	}
	{
		G_B16_0 = 2;
		goto IL_0099;
	}

IL_0098:
	{
		G_B16_0 = 7;
	}

IL_0099:
	{
		V_1 = G_B16_0;
		RenderTexture_t55 * L_14 = ___source;
		NullCheck(L_14);
		int32_t L_15 = RenderTexture_get_width_m272(L_14, /*hidden argument*/NULL);
		RenderTexture_t55 * L_16 = ___source;
		NullCheck(L_16);
		int32_t L_17 = RenderTexture_get_height_m273(L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		RenderTexture_t55 * L_19 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_15/(int32_t)2)), ((int32_t)((int32_t)L_17/(int32_t)2)), 0, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		RenderTexture_t55 * L_20 = ___source;
		NullCheck(L_20);
		int32_t L_21 = RenderTexture_get_width_m272(L_20, /*hidden argument*/NULL);
		RenderTexture_t55 * L_22 = ___source;
		NullCheck(L_22);
		int32_t L_23 = RenderTexture_get_height_m273(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_1;
		RenderTexture_t55 * L_25 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_21/(int32_t)4)), ((int32_t)((int32_t)L_23/(int32_t)4)), 0, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		RenderTexture_t55 * L_26 = ___source;
		NullCheck(L_26);
		int32_t L_27 = RenderTexture_get_width_m272(L_26, /*hidden argument*/NULL);
		RenderTexture_t55 * L_28 = ___source;
		NullCheck(L_28);
		int32_t L_29 = RenderTexture_get_height_m273(L_28, /*hidden argument*/NULL);
		int32_t L_30 = V_1;
		RenderTexture_t55 * L_31 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_27/(int32_t)4)), ((int32_t)((int32_t)L_29/(int32_t)4)), 0, L_30, /*hidden argument*/NULL);
		V_4 = L_31;
		RenderTexture_t55 * L_32 = ___source;
		NullCheck(L_32);
		int32_t L_33 = RenderTexture_get_width_m272(L_32, /*hidden argument*/NULL);
		RenderTexture_t55 * L_34 = ___source;
		NullCheck(L_34);
		int32_t L_35 = RenderTexture_get_height_m273(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_1;
		RenderTexture_t55 * L_37 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_33/(int32_t)4)), ((int32_t)((int32_t)L_35/(int32_t)4)), 0, L_36, /*hidden argument*/NULL);
		V_5 = L_37;
		RenderTexture_t55 * L_38 = ___source;
		NullCheck(L_38);
		int32_t L_39 = RenderTexture_get_width_m272(L_38, /*hidden argument*/NULL);
		RenderTexture_t55 * L_40 = ___source;
		NullCheck(L_40);
		int32_t L_41 = RenderTexture_get_height_m273(L_40, /*hidden argument*/NULL);
		V_6 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_39))))/(float)((float)((float)(1.0f)*(float)(((float)L_41))))));
		V_7 = (0.001953125f);
		RenderTexture_t55 * L_42 = ___source;
		RenderTexture_t55 * L_43 = V_2;
		Material_t5 * L_44 = (__this->___screenBlend_34);
		Graphics_Blit_m275(NULL /*static, unused*/, L_42, L_43, L_44, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_45 = V_2;
		RenderTexture_t55 * L_46 = V_3;
		Material_t5 * L_47 = (__this->___screenBlend_34);
		Graphics_Blit_m275(NULL /*static, unused*/, L_45, L_46, L_47, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_48 = V_2;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		float L_49 = (__this->___bloomThreshold_12);
		float L_50 = (__this->___useSrcAlphaAsMask_10);
		RenderTexture_t55 * L_51 = V_3;
		RenderTexture_t55 * L_52 = V_4;
		BloomAndFlares_BrightFilter_m17(__this, L_49, L_50, L_51, L_52, /*hidden argument*/NULL);
		RenderTexture_t55 * L_53 = V_3;
		NullCheck(L_53);
		RenderTexture_DiscardContents_m291(L_53, /*hidden argument*/NULL);
		int32_t L_54 = (__this->___bloomBlurIterations_13);
		if ((((int32_t)L_54) >= ((int32_t)1)))
		{
			goto IL_0170;
		}
	}
	{
		__this->___bloomBlurIterations_13 = 1;
	}

IL_0170:
	{
		V_8 = 0;
		goto IL_0227;
	}

IL_0178:
	{
		int32_t L_55 = V_8;
		float L_56 = (__this->___sepBlurSpread_9);
		V_9 = ((float)((float)((float)((float)(1.0f)+(float)((float)((float)(((float)L_55))*(float)(0.5f)))))*(float)L_56));
		Material_t5 * L_57 = (__this->___separableBlurMaterial_30);
		float L_58 = V_9;
		float L_59 = V_7;
		Vector4_t100  L_60 = {0};
		Vector4__ctor_m284(&L_60, (0.0f), ((float)((float)L_58*(float)L_59)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_57);
		Material_SetVector_m285(L_57, _stringLiteral16, L_60, /*hidden argument*/NULL);
		int32_t L_61 = V_8;
		if (L_61)
		{
			goto IL_01c7;
		}
	}
	{
		RenderTexture_t55 * L_62 = V_4;
		G_B22_0 = L_62;
		goto IL_01c8;
	}

IL_01c7:
	{
		RenderTexture_t55 * L_63 = V_3;
		G_B22_0 = L_63;
	}

IL_01c8:
	{
		V_10 = G_B22_0;
		RenderTexture_t55 * L_64 = V_10;
		RenderTexture_t55 * L_65 = V_5;
		Material_t5 * L_66 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m270(NULL /*static, unused*/, L_64, L_65, L_66, /*hidden argument*/NULL);
		RenderTexture_t55 * L_67 = V_10;
		NullCheck(L_67);
		RenderTexture_DiscardContents_m291(L_67, /*hidden argument*/NULL);
		Material_t5 * L_68 = (__this->___separableBlurMaterial_30);
		float L_69 = V_9;
		float L_70 = V_6;
		float L_71 = V_7;
		Vector4_t100  L_72 = {0};
		Vector4__ctor_m284(&L_72, ((float)((float)((float)((float)L_69/(float)L_70))*(float)L_71)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_68);
		Material_SetVector_m285(L_68, _stringLiteral16, L_72, /*hidden argument*/NULL);
		RenderTexture_t55 * L_73 = V_5;
		RenderTexture_t55 * L_74 = V_3;
		Material_t5 * L_75 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m270(NULL /*static, unused*/, L_73, L_74, L_75, /*hidden argument*/NULL);
		RenderTexture_t55 * L_76 = V_5;
		NullCheck(L_76);
		RenderTexture_DiscardContents_m291(L_76, /*hidden argument*/NULL);
		int32_t L_77 = V_8;
		V_8 = ((int32_t)((int32_t)L_77+(int32_t)1));
	}

IL_0227:
	{
		int32_t L_78 = V_8;
		int32_t L_79 = (__this->___bloomBlurIterations_13);
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_0178;
		}
	}
	{
		bool L_80 = (__this->___lensflares_14);
		if (!L_80)
		{
			goto IL_05e1;
		}
	}
	{
		int32_t L_81 = (__this->___lensflareMode_16);
		if (L_81)
		{
			goto IL_028f;
		}
	}
	{
		float L_82 = (__this->___lensflareThreshold_19);
		RenderTexture_t55 * L_83 = V_3;
		RenderTexture_t55 * L_84 = V_5;
		BloomAndFlares_BrightFilter_m17(__this, L_82, (0.0f), L_83, L_84, /*hidden argument*/NULL);
		RenderTexture_t55 * L_85 = V_3;
		NullCheck(L_85);
		RenderTexture_DiscardContents_m291(L_85, /*hidden argument*/NULL);
		RenderTexture_t55 * L_86 = V_5;
		RenderTexture_t55 * L_87 = V_4;
		BloomAndFlares_Vignette_m18(__this, (0.975f), L_86, L_87, /*hidden argument*/NULL);
		RenderTexture_t55 * L_88 = V_5;
		NullCheck(L_88);
		RenderTexture_DiscardContents_m291(L_88, /*hidden argument*/NULL);
		RenderTexture_t55 * L_89 = V_4;
		RenderTexture_t55 * L_90 = V_3;
		BloomAndFlares_BlendFlares_m16(__this, L_89, L_90, /*hidden argument*/NULL);
		RenderTexture_t55 * L_91 = V_4;
		NullCheck(L_91);
		RenderTexture_DiscardContents_m291(L_91, /*hidden argument*/NULL);
		goto IL_05e1;
	}

IL_028f:
	{
		Material_t5 * L_92 = (__this->___hollywoodFlaresMaterial_36);
		float L_93 = (__this->___lensflareThreshold_19);
		float L_94 = (__this->___lensflareThreshold_19);
		Vector4_t100  L_95 = {0};
		Vector4__ctor_m284(&L_95, L_93, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)-(float)L_94)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_92);
		Material_SetVector_m285(L_92, _stringLiteral17, L_95, /*hidden argument*/NULL);
		Material_t5 * L_96 = (__this->___hollywoodFlaresMaterial_36);
		Color_t12 * L_97 = &(__this->___flareColorA_20);
		float L_98 = (L_97->___r_0);
		Color_t12 * L_99 = &(__this->___flareColorA_20);
		float L_100 = (L_99->___g_1);
		Color_t12 * L_101 = &(__this->___flareColorA_20);
		float L_102 = (L_101->___b_2);
		Color_t12 * L_103 = &(__this->___flareColorA_20);
		float L_104 = (L_103->___a_3);
		Vector4_t100  L_105 = {0};
		Vector4__ctor_m284(&L_105, L_98, L_100, L_102, L_104, /*hidden argument*/NULL);
		Color_t12 * L_106 = &(__this->___flareColorA_20);
		float L_107 = (L_106->___a_3);
		Vector4_t100  L_108 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_105, L_107, /*hidden argument*/NULL);
		float L_109 = (__this->___lensflareIntensity_18);
		Vector4_t100  L_110 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_108, L_109, /*hidden argument*/NULL);
		NullCheck(L_96);
		Material_SetVector_m285(L_96, _stringLiteral18, L_110, /*hidden argument*/NULL);
		RenderTexture_t55 * L_111 = V_5;
		RenderTexture_t55 * L_112 = V_4;
		Material_t5 * L_113 = (__this->___hollywoodFlaresMaterial_36);
		Graphics_Blit_m275(NULL /*static, unused*/, L_111, L_112, L_113, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_114 = V_5;
		NullCheck(L_114);
		RenderTexture_DiscardContents_m291(L_114, /*hidden argument*/NULL);
		RenderTexture_t55 * L_115 = V_4;
		RenderTexture_t55 * L_116 = V_5;
		Material_t5 * L_117 = (__this->___hollywoodFlaresMaterial_36);
		Graphics_Blit_m275(NULL /*static, unused*/, L_115, L_116, L_117, 3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_118 = V_4;
		NullCheck(L_118);
		RenderTexture_DiscardContents_m291(L_118, /*hidden argument*/NULL);
		Material_t5 * L_119 = (__this->___hollywoodFlaresMaterial_36);
		float L_120 = (__this->___sepBlurSpread_9);
		float L_121 = V_6;
		float L_122 = V_7;
		Vector4_t100  L_123 = {0};
		Vector4__ctor_m284(&L_123, ((float)((float)((float)((float)((float)((float)L_120*(float)(1.0f)))/(float)L_121))*(float)L_122)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_119);
		Material_SetVector_m285(L_119, _stringLiteral16, L_123, /*hidden argument*/NULL);
		Material_t5 * L_124 = (__this->___hollywoodFlaresMaterial_36);
		float L_125 = (__this->___hollyStretchWidth_17);
		NullCheck(L_124);
		Material_SetFloat_m269(L_124, _stringLiteral19, L_125, /*hidden argument*/NULL);
		RenderTexture_t55 * L_126 = V_5;
		RenderTexture_t55 * L_127 = V_4;
		Material_t5 * L_128 = (__this->___hollywoodFlaresMaterial_36);
		Graphics_Blit_m275(NULL /*static, unused*/, L_126, L_127, L_128, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_129 = V_5;
		NullCheck(L_129);
		RenderTexture_DiscardContents_m291(L_129, /*hidden argument*/NULL);
		Material_t5 * L_130 = (__this->___hollywoodFlaresMaterial_36);
		float L_131 = (__this->___hollyStretchWidth_17);
		NullCheck(L_130);
		Material_SetFloat_m269(L_130, _stringLiteral19, ((float)((float)L_131*(float)(2.0f))), /*hidden argument*/NULL);
		RenderTexture_t55 * L_132 = V_4;
		RenderTexture_t55 * L_133 = V_5;
		Material_t5 * L_134 = (__this->___hollywoodFlaresMaterial_36);
		Graphics_Blit_m275(NULL /*static, unused*/, L_132, L_133, L_134, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_135 = V_4;
		NullCheck(L_135);
		RenderTexture_DiscardContents_m291(L_135, /*hidden argument*/NULL);
		Material_t5 * L_136 = (__this->___hollywoodFlaresMaterial_36);
		float L_137 = (__this->___hollyStretchWidth_17);
		NullCheck(L_136);
		Material_SetFloat_m269(L_136, _stringLiteral19, ((float)((float)L_137*(float)(4.0f))), /*hidden argument*/NULL);
		RenderTexture_t55 * L_138 = V_5;
		RenderTexture_t55 * L_139 = V_4;
		Material_t5 * L_140 = (__this->___hollywoodFlaresMaterial_36);
		Graphics_Blit_m275(NULL /*static, unused*/, L_138, L_139, L_140, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_141 = V_5;
		NullCheck(L_141);
		RenderTexture_DiscardContents_m291(L_141, /*hidden argument*/NULL);
		int32_t L_142 = (__this->___lensflareMode_16);
		if ((!(((uint32_t)L_142) == ((uint32_t)1))))
		{
			goto IL_04f2;
		}
	}
	{
		V_11 = 0;
		goto IL_04cb;
	}

IL_042d:
	{
		Material_t5 * L_143 = (__this->___separableBlurMaterial_30);
		float L_144 = (__this->___hollyStretchWidth_17);
		float L_145 = V_6;
		float L_146 = V_7;
		Vector4_t100  L_147 = {0};
		Vector4__ctor_m284(&L_147, ((float)((float)((float)((float)((float)((float)L_144*(float)(2.0f)))/(float)L_145))*(float)L_146)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_143);
		Material_SetVector_m285(L_143, _stringLiteral16, L_147, /*hidden argument*/NULL);
		RenderTexture_t55 * L_148 = V_4;
		RenderTexture_t55 * L_149 = V_5;
		Material_t5 * L_150 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m270(NULL /*static, unused*/, L_148, L_149, L_150, /*hidden argument*/NULL);
		RenderTexture_t55 * L_151 = V_4;
		NullCheck(L_151);
		RenderTexture_DiscardContents_m291(L_151, /*hidden argument*/NULL);
		Material_t5 * L_152 = (__this->___separableBlurMaterial_30);
		float L_153 = (__this->___hollyStretchWidth_17);
		float L_154 = V_6;
		float L_155 = V_7;
		Vector4_t100  L_156 = {0};
		Vector4__ctor_m284(&L_156, ((float)((float)((float)((float)((float)((float)L_153*(float)(2.0f)))/(float)L_154))*(float)L_155)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_152);
		Material_SetVector_m285(L_152, _stringLiteral16, L_156, /*hidden argument*/NULL);
		RenderTexture_t55 * L_157 = V_5;
		RenderTexture_t55 * L_158 = V_4;
		Material_t5 * L_159 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m270(NULL /*static, unused*/, L_157, L_158, L_159, /*hidden argument*/NULL);
		RenderTexture_t55 * L_160 = V_5;
		NullCheck(L_160);
		RenderTexture_DiscardContents_m291(L_160, /*hidden argument*/NULL);
		int32_t L_161 = V_11;
		V_11 = ((int32_t)((int32_t)L_161+(int32_t)1));
	}

IL_04cb:
	{
		int32_t L_162 = V_11;
		int32_t L_163 = (__this->___hollywoodFlareBlurIterations_15);
		if ((((int32_t)L_162) < ((int32_t)L_163)))
		{
			goto IL_042d;
		}
	}
	{
		RenderTexture_t55 * L_164 = V_4;
		RenderTexture_t55 * L_165 = V_3;
		BloomAndFlares_AddTo_m15(__this, (1.0f), L_164, L_165, /*hidden argument*/NULL);
		RenderTexture_t55 * L_166 = V_4;
		NullCheck(L_166);
		RenderTexture_DiscardContents_m291(L_166, /*hidden argument*/NULL);
		goto IL_05e1;
	}

IL_04f2:
	{
		V_12 = 0;
		goto IL_0598;
	}

IL_04fa:
	{
		Material_t5 * L_167 = (__this->___separableBlurMaterial_30);
		float L_168 = (__this->___hollyStretchWidth_17);
		float L_169 = V_6;
		float L_170 = V_7;
		Vector4_t100  L_171 = {0};
		Vector4__ctor_m284(&L_171, ((float)((float)((float)((float)((float)((float)L_168*(float)(2.0f)))/(float)L_169))*(float)L_170)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_167);
		Material_SetVector_m285(L_167, _stringLiteral16, L_171, /*hidden argument*/NULL);
		RenderTexture_t55 * L_172 = V_4;
		RenderTexture_t55 * L_173 = V_5;
		Material_t5 * L_174 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m270(NULL /*static, unused*/, L_172, L_173, L_174, /*hidden argument*/NULL);
		RenderTexture_t55 * L_175 = V_4;
		NullCheck(L_175);
		RenderTexture_DiscardContents_m291(L_175, /*hidden argument*/NULL);
		Material_t5 * L_176 = (__this->___separableBlurMaterial_30);
		float L_177 = (__this->___hollyStretchWidth_17);
		float L_178 = V_6;
		float L_179 = V_7;
		Vector4_t100  L_180 = {0};
		Vector4__ctor_m284(&L_180, ((float)((float)((float)((float)((float)((float)L_177*(float)(2.0f)))/(float)L_178))*(float)L_179)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_176);
		Material_SetVector_m285(L_176, _stringLiteral16, L_180, /*hidden argument*/NULL);
		RenderTexture_t55 * L_181 = V_5;
		RenderTexture_t55 * L_182 = V_4;
		Material_t5 * L_183 = (__this->___separableBlurMaterial_30);
		Graphics_Blit_m270(NULL /*static, unused*/, L_181, L_182, L_183, /*hidden argument*/NULL);
		RenderTexture_t55 * L_184 = V_5;
		NullCheck(L_184);
		RenderTexture_DiscardContents_m291(L_184, /*hidden argument*/NULL);
		int32_t L_185 = V_12;
		V_12 = ((int32_t)((int32_t)L_185+(int32_t)1));
	}

IL_0598:
	{
		int32_t L_186 = V_12;
		int32_t L_187 = (__this->___hollywoodFlareBlurIterations_15);
		if ((((int32_t)L_186) < ((int32_t)L_187)))
		{
			goto IL_04fa;
		}
	}
	{
		RenderTexture_t55 * L_188 = V_4;
		RenderTexture_t55 * L_189 = V_5;
		BloomAndFlares_Vignette_m18(__this, (1.0f), L_188, L_189, /*hidden argument*/NULL);
		RenderTexture_t55 * L_190 = V_4;
		NullCheck(L_190);
		RenderTexture_DiscardContents_m291(L_190, /*hidden argument*/NULL);
		RenderTexture_t55 * L_191 = V_5;
		RenderTexture_t55 * L_192 = V_4;
		BloomAndFlares_BlendFlares_m16(__this, L_191, L_192, /*hidden argument*/NULL);
		RenderTexture_t55 * L_193 = V_5;
		NullCheck(L_193);
		RenderTexture_DiscardContents_m291(L_193, /*hidden argument*/NULL);
		RenderTexture_t55 * L_194 = V_4;
		RenderTexture_t55 * L_195 = V_3;
		BloomAndFlares_AddTo_m15(__this, (1.0f), L_194, L_195, /*hidden argument*/NULL);
		RenderTexture_t55 * L_196 = V_4;
		NullCheck(L_196);
		RenderTexture_DiscardContents_m291(L_196, /*hidden argument*/NULL);
	}

IL_05e1:
	{
		Material_t5 * L_197 = (__this->___screenBlend_34);
		float L_198 = (__this->___bloomIntensity_11);
		NullCheck(L_197);
		Material_SetFloat_m269(L_197, _stringLiteral10, L_198, /*hidden argument*/NULL);
		Material_t5 * L_199 = (__this->___screenBlend_34);
		RenderTexture_t55 * L_200 = ___source;
		NullCheck(L_199);
		Material_SetTexture_m292(L_199, _stringLiteral11, L_200, /*hidden argument*/NULL);
		RenderTexture_t55 * L_201 = V_3;
		RenderTexture_t55 * L_202 = ___destination;
		Material_t5 * L_203 = (__this->___screenBlend_34);
		int32_t L_204 = V_0;
		Graphics_Blit_m275(NULL /*static, unused*/, L_201, L_202, L_203, L_204, /*hidden argument*/NULL);
		RenderTexture_t55 * L_205 = V_3;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_205, /*hidden argument*/NULL);
		RenderTexture_t55 * L_206 = V_4;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_206, /*hidden argument*/NULL);
		RenderTexture_t55 * L_207 = V_5;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_207, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// System.Single
#include "mscorlib_System_Single.h"
extern Il2CppCodeGenString* _stringLiteral10;
extern "C" void BloomAndFlares_AddTo_m15 (BloomAndFlares_t18 * __this, float ___intensity_, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___addBrightStuffBlendOneOneMaterial_32);
		float L_1 = ___intensity_;
		NullCheck(L_0);
		Material_SetFloat_m269(L_0, _stringLiteral10, L_1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_2 = ___from;
		RenderTexture_t55 * L_3 = ___to;
		Material_t5 * L_4 = (__this->___addBrightStuffBlendOneOneMaterial_32);
		Graphics_Blit_m270(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern Il2CppCodeGenString* _stringLiteral12;
extern Il2CppCodeGenString* _stringLiteral13;
extern Il2CppCodeGenString* _stringLiteral14;
extern Il2CppCodeGenString* _stringLiteral15;
extern "C" void BloomAndFlares_BlendFlares_m16 (BloomAndFlares_t18 * __this, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___lensFlareMaterial_26);
		Color_t12 * L_1 = &(__this->___flareColorA_20);
		float L_2 = (L_1->___r_0);
		Color_t12 * L_3 = &(__this->___flareColorA_20);
		float L_4 = (L_3->___g_1);
		Color_t12 * L_5 = &(__this->___flareColorA_20);
		float L_6 = (L_5->___b_2);
		Color_t12 * L_7 = &(__this->___flareColorA_20);
		float L_8 = (L_7->___a_3);
		Vector4_t100  L_9 = {0};
		Vector4__ctor_m284(&L_9, L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
		float L_10 = (__this->___lensflareIntensity_18);
		Vector4_t100  L_11 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_m285(L_0, _stringLiteral12, L_11, /*hidden argument*/NULL);
		Material_t5 * L_12 = (__this->___lensFlareMaterial_26);
		Color_t12 * L_13 = &(__this->___flareColorB_21);
		float L_14 = (L_13->___r_0);
		Color_t12 * L_15 = &(__this->___flareColorB_21);
		float L_16 = (L_15->___g_1);
		Color_t12 * L_17 = &(__this->___flareColorB_21);
		float L_18 = (L_17->___b_2);
		Color_t12 * L_19 = &(__this->___flareColorB_21);
		float L_20 = (L_19->___a_3);
		Vector4_t100  L_21 = {0};
		Vector4__ctor_m284(&L_21, L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
		float L_22 = (__this->___lensflareIntensity_18);
		Vector4_t100  L_23 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_12);
		Material_SetVector_m285(L_12, _stringLiteral13, L_23, /*hidden argument*/NULL);
		Material_t5 * L_24 = (__this->___lensFlareMaterial_26);
		Color_t12 * L_25 = &(__this->___flareColorC_22);
		float L_26 = (L_25->___r_0);
		Color_t12 * L_27 = &(__this->___flareColorC_22);
		float L_28 = (L_27->___g_1);
		Color_t12 * L_29 = &(__this->___flareColorC_22);
		float L_30 = (L_29->___b_2);
		Color_t12 * L_31 = &(__this->___flareColorC_22);
		float L_32 = (L_31->___a_3);
		Vector4_t100  L_33 = {0};
		Vector4__ctor_m284(&L_33, L_26, L_28, L_30, L_32, /*hidden argument*/NULL);
		float L_34 = (__this->___lensflareIntensity_18);
		Vector4_t100  L_35 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_24);
		Material_SetVector_m285(L_24, _stringLiteral14, L_35, /*hidden argument*/NULL);
		Material_t5 * L_36 = (__this->___lensFlareMaterial_26);
		Color_t12 * L_37 = &(__this->___flareColorD_23);
		float L_38 = (L_37->___r_0);
		Color_t12 * L_39 = &(__this->___flareColorD_23);
		float L_40 = (L_39->___g_1);
		Color_t12 * L_41 = &(__this->___flareColorD_23);
		float L_42 = (L_41->___b_2);
		Color_t12 * L_43 = &(__this->___flareColorD_23);
		float L_44 = (L_43->___a_3);
		Vector4_t100  L_45 = {0};
		Vector4__ctor_m284(&L_45, L_38, L_40, L_42, L_44, /*hidden argument*/NULL);
		float L_46 = (__this->___lensflareIntensity_18);
		Vector4_t100  L_47 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_36);
		Material_SetVector_m285(L_36, _stringLiteral15, L_47, /*hidden argument*/NULL);
		RenderTexture_t55 * L_48 = ___from;
		RenderTexture_t55 * L_49 = ___to;
		Material_t5 * L_50 = (__this->___lensFlareMaterial_26);
		Graphics_Blit_m270(NULL /*static, unused*/, L_48, L_49, L_50, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern Il2CppCodeGenString* _stringLiteral20;
extern Il2CppCodeGenString* _stringLiteral21;
extern "C" void BloomAndFlares_BrightFilter_m17 (BloomAndFlares_t18 * __this, float ___thresh, float ___useAlphaAsMask, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___doHdr_8);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		Material_t5 * L_1 = (__this->___brightPassFilterMaterial_38);
		float L_2 = ___thresh;
		Vector4_t100  L_3 = {0};
		Vector4__ctor_m284(&L_3, L_2, (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_SetVector_m285(L_1, _stringLiteral20, L_3, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_0035:
	{
		Material_t5 * L_4 = (__this->___brightPassFilterMaterial_38);
		float L_5 = ___thresh;
		float L_6 = ___thresh;
		Vector4_t100  L_7 = {0};
		Vector4__ctor_m284(&L_7, L_5, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)-(float)L_6)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Material_SetVector_m285(L_4, _stringLiteral20, L_7, /*hidden argument*/NULL);
	}

IL_0062:
	{
		Material_t5 * L_8 = (__this->___brightPassFilterMaterial_38);
		float L_9 = ___useAlphaAsMask;
		NullCheck(L_8);
		Material_SetFloat_m269(L_8, _stringLiteral21, L_9, /*hidden argument*/NULL);
		RenderTexture_t55 * L_10 = ___from;
		RenderTexture_t55 * L_11 = ___to;
		Material_t5 * L_12 = (__this->___brightPassFilterMaterial_38);
		Graphics_Blit_m270(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral11;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void BloomAndFlares_Vignette_m18 (BloomAndFlares_t18 * __this, float ___amount, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture2D_t13 * L_0 = (__this->___lensFlareVignetteMask_24);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		Material_t5 * L_2 = (__this->___screenBlend_34);
		Texture2D_t13 * L_3 = (__this->___lensFlareVignetteMask_24);
		NullCheck(L_2);
		Material_SetTexture_m292(L_2, _stringLiteral11, L_3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_4 = ___from;
		RenderTexture_t55 * L_5 = ___to;
		Material_t5 * L_6 = (__this->___screenBlend_34);
		Graphics_Blit_m275(NULL /*static, unused*/, L_4, L_5, L_6, 3, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0039:
	{
		Material_t5 * L_7 = (__this->___vignetteMaterial_28);
		float L_8 = ___amount;
		NullCheck(L_7);
		Material_SetFloat_m269(L_7, _stringLiteral22, L_8, /*hidden argument*/NULL);
		RenderTexture_t55 * L_9 = ___from;
		RenderTexture_t55 * L_10 = ___to;
		Material_t5 * L_11 = (__this->___vignetteMaterial_28);
		Graphics_Blit_m270(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_13.h"
// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_13MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_14.h"
// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_14MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.BloomOptimized
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_15.h"
// UnityStandardAssets.ImageEffects.BloomOptimized
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_15MethodDeclarations.h"
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void BloomOptimized__ctor_m19 (BloomOptimized_t21 * __this, const MethodInfo* method)
{
	{
		__this->___threshold_5 = (0.25f);
		__this->___intensity_6 = (0.75f);
		__this->___blurSize_7 = (1.0f);
		__this->___blurIterations_9 = 1;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.BloomOptimized::CheckResources()
extern "C" bool BloomOptimized_CheckResources_m20 (BloomOptimized_t21 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___fastBloomShader_11);
		Material_t5 * L_1 = (__this->___fastBloomMaterial_12);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___fastBloomMaterial_12 = L_2;
		bool L_3 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		bool L_4 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_4;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::OnDisable()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void BloomOptimized_OnDisable_m21 (BloomOptimized_t21 * __this, const MethodInfo* method)
{
	{
		Material_t5 * L_0 = (__this->___fastBloomMaterial_12);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Material_t5 * L_2 = (__this->___fastBloomMaterial_12);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral23;
extern Il2CppCodeGenString* _stringLiteral24;
extern "C" void BloomOptimized_OnRenderImage_m22 (BloomOptimized_t21 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_t55 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RenderTexture_t55 * V_7 = {0};
	int32_t G_B5_0 = 0;
	float G_B8_0 = 0.0f;
	int32_t G_B11_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.BloomOptimized::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		int32_t L_3 = (__this->___resolution_8);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		G_B5_0 = 4;
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 2;
	}

IL_0025:
	{
		V_0 = G_B5_0;
		int32_t L_4 = (__this->___resolution_8);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		G_B8_0 = (0.5f);
		goto IL_0040;
	}

IL_003b:
	{
		G_B8_0 = (1.0f);
	}

IL_0040:
	{
		V_1 = G_B8_0;
		Material_t5 * L_5 = (__this->___fastBloomMaterial_12);
		float L_6 = (__this->___blurSize_7);
		float L_7 = V_1;
		float L_8 = (__this->___threshold_5);
		float L_9 = (__this->___intensity_6);
		Vector4_t100  L_10 = {0};
		Vector4__ctor_m284(&L_10, ((float)((float)L_6*(float)L_7)), (0.0f), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_SetVector_m285(L_5, _stringLiteral23, L_10, /*hidden argument*/NULL);
		RenderTexture_t55 * L_11 = ___source;
		NullCheck(L_11);
		Texture_set_filterMode_m298(L_11, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_12 = ___source;
		NullCheck(L_12);
		int32_t L_13 = RenderTexture_get_width_m272(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		V_2 = ((int32_t)((int32_t)L_13/(int32_t)L_14));
		RenderTexture_t55 * L_15 = ___source;
		NullCheck(L_15);
		int32_t L_16 = RenderTexture_get_height_m273(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		V_3 = ((int32_t)((int32_t)L_16/(int32_t)L_17));
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		RenderTexture_t55 * L_20 = ___source;
		NullCheck(L_20);
		int32_t L_21 = RenderTexture_get_format_m279(L_20, /*hidden argument*/NULL);
		RenderTexture_t55 * L_22 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_18, L_19, 0, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		RenderTexture_t55 * L_23 = V_4;
		NullCheck(L_23);
		Texture_set_filterMode_m298(L_23, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_24 = ___source;
		RenderTexture_t55 * L_25 = V_4;
		Material_t5 * L_26 = (__this->___fastBloomMaterial_12);
		Graphics_Blit_m275(NULL /*static, unused*/, L_24, L_25, L_26, 1, /*hidden argument*/NULL);
		int32_t L_27 = (__this->___blurType_10);
		if (L_27)
		{
			goto IL_00c0;
		}
	}
	{
		G_B11_0 = 0;
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B11_0 = 2;
	}

IL_00c1:
	{
		V_5 = G_B11_0;
		V_6 = 0;
		goto IL_0175;
	}

IL_00cb:
	{
		Material_t5 * L_28 = (__this->___fastBloomMaterial_12);
		float L_29 = (__this->___blurSize_7);
		float L_30 = V_1;
		int32_t L_31 = V_6;
		float L_32 = (__this->___threshold_5);
		float L_33 = (__this->___intensity_6);
		Vector4_t100  L_34 = {0};
		Vector4__ctor_m284(&L_34, ((float)((float)((float)((float)L_29*(float)L_30))+(float)((float)((float)(((float)L_31))*(float)(1.0f))))), (0.0f), L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_28);
		Material_SetVector_m285(L_28, _stringLiteral23, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_2;
		int32_t L_36 = V_3;
		RenderTexture_t55 * L_37 = ___source;
		NullCheck(L_37);
		int32_t L_38 = RenderTexture_get_format_m279(L_37, /*hidden argument*/NULL);
		RenderTexture_t55 * L_39 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_35, L_36, 0, L_38, /*hidden argument*/NULL);
		V_7 = L_39;
		RenderTexture_t55 * L_40 = V_7;
		NullCheck(L_40);
		Texture_set_filterMode_m298(L_40, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_41 = V_4;
		RenderTexture_t55 * L_42 = V_7;
		Material_t5 * L_43 = (__this->___fastBloomMaterial_12);
		int32_t L_44 = V_5;
		Graphics_Blit_m275(NULL /*static, unused*/, L_41, L_42, L_43, ((int32_t)((int32_t)2+(int32_t)L_44)), /*hidden argument*/NULL);
		RenderTexture_t55 * L_45 = V_4;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		RenderTexture_t55 * L_46 = V_7;
		V_4 = L_46;
		int32_t L_47 = V_2;
		int32_t L_48 = V_3;
		RenderTexture_t55 * L_49 = ___source;
		NullCheck(L_49);
		int32_t L_50 = RenderTexture_get_format_m279(L_49, /*hidden argument*/NULL);
		RenderTexture_t55 * L_51 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_47, L_48, 0, L_50, /*hidden argument*/NULL);
		V_7 = L_51;
		RenderTexture_t55 * L_52 = V_7;
		NullCheck(L_52);
		Texture_set_filterMode_m298(L_52, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_53 = V_4;
		RenderTexture_t55 * L_54 = V_7;
		Material_t5 * L_55 = (__this->___fastBloomMaterial_12);
		int32_t L_56 = V_5;
		Graphics_Blit_m275(NULL /*static, unused*/, L_53, L_54, L_55, ((int32_t)((int32_t)3+(int32_t)L_56)), /*hidden argument*/NULL);
		RenderTexture_t55 * L_57 = V_4;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		RenderTexture_t55 * L_58 = V_7;
		V_4 = L_58;
		int32_t L_59 = V_6;
		V_6 = ((int32_t)((int32_t)L_59+(int32_t)1));
	}

IL_0175:
	{
		int32_t L_60 = V_6;
		int32_t L_61 = (__this->___blurIterations_9);
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00cb;
		}
	}
	{
		Material_t5 * L_62 = (__this->___fastBloomMaterial_12);
		RenderTexture_t55 * L_63 = V_4;
		NullCheck(L_62);
		Material_SetTexture_m292(L_62, _stringLiteral24, L_63, /*hidden argument*/NULL);
		RenderTexture_t55 * L_64 = ___source;
		RenderTexture_t55 * L_65 = ___destination;
		Material_t5 * L_66 = (__this->___fastBloomMaterial_12);
		Graphics_Blit_m275(NULL /*static, unused*/, L_64, L_65, L_66, 0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_67 = V_4;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.Blur
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_16.h"
// UnityStandardAssets.ImageEffects.Blur
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_16MethodDeclarations.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.Blur::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void Blur__ctor_m23 (Blur_t22 * __this, const MethodInfo* method)
{
	{
		__this->___iterations_2 = 3;
		__this->___blurSpread_3 = (0.6f);
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::.cctor()
extern "C" void Blur__cctor_m24 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::get_material()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern TypeInfo* Blur_t22_il2cpp_TypeInfo_var;
extern TypeInfo* Material_t5_il2cpp_TypeInfo_var;
extern "C" Material_t5 * Blur_get_material_m25 (Blur_t22 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Blur_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Material_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Blur_t22_il2cpp_TypeInfo_var);
		Material_t5 * L_0 = ((Blur_t22_StaticFields*)Blur_t22_il2cpp_TypeInfo_var->static_fields)->___m_Material_5;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Shader_t4 * L_2 = (__this->___blurShader_4);
		Material_t5 * L_3 = (Material_t5 *)il2cpp_codegen_object_new (Material_t5_il2cpp_TypeInfo_var);
		Material__ctor_m300(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Blur_t22_il2cpp_TypeInfo_var);
		((Blur_t22_StaticFields*)Blur_t22_il2cpp_TypeInfo_var->static_fields)->___m_Material_5 = L_3;
		Material_t5 * L_4 = ((Blur_t22_StaticFields*)Blur_t22_il2cpp_TypeInfo_var->static_fields)->___m_Material_5;
		NullCheck(L_4);
		Object_set_hideFlags_m301(L_4, ((int32_t)52), /*hidden argument*/NULL);
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Blur_t22_il2cpp_TypeInfo_var);
		Material_t5 * L_5 = ((Blur_t22_StaticFields*)Blur_t22_il2cpp_TypeInfo_var->static_fields)->___m_Material_5;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::OnDisable()
extern TypeInfo* Blur_t22_il2cpp_TypeInfo_var;
extern "C" void Blur_OnDisable_m26 (Blur_t22 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Blur_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Blur_t22_il2cpp_TypeInfo_var);
		Material_t5 * L_0 = ((Blur_t22_StaticFields*)Blur_t22_il2cpp_TypeInfo_var->static_fields)->___m_Material_5;
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Blur_t22_il2cpp_TypeInfo_var);
		Material_t5 * L_2 = ((Blur_t22_StaticFields*)Blur_t22_il2cpp_TypeInfo_var->static_fields)->___m_Material_5;
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::Start()
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.Blur
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_16MethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern "C" void Blur_Start_m27 (Blur_t22 * __this, const MethodInfo* method)
{
	{
		bool L_0 = SystemInfo_get_supportsImageEffects_m302(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		Shader_t4 * L_1 = (__this->___blurShader_4);
		bool L_2 = Object_op_Implicit_m294(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		Material_t5 * L_3 = Blur_get_material_m25(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Shader_t4 * L_4 = Material_get_shader_m304(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = Shader_get_isSupported_m266(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}

IL_0037:
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_003f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern TypeInfo* Vector2U5BU5D_t103_il2cpp_TypeInfo_var;
extern "C" void Blur_FourTapCone_m28 (Blur_t22 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, int32_t ___iteration, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2U5BU5D_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___iteration;
		float L_1 = (__this->___blurSpread_3);
		V_0 = ((float)((float)(0.5f)+(float)((float)((float)(((float)L_0))*(float)L_1))));
		RenderTexture_t55 * L_2 = ___source;
		RenderTexture_t55 * L_3 = ___dest;
		Material_t5 * L_4 = Blur_get_material_m25(__this, /*hidden argument*/NULL);
		Vector2U5BU5D_t103* L_5 = ((Vector2U5BU5D_t103*)SZArrayNew(Vector2U5BU5D_t103_il2cpp_TypeInfo_var, 4));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		float L_6 = V_0;
		float L_7 = V_0;
		Vector2_t85  L_8 = {0};
		Vector2__ctor_m305(&L_8, ((-L_6)), ((-L_7)), /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_5, 0, sizeof(Vector2_t85 ))) = L_8;
		Vector2U5BU5D_t103* L_9 = L_5;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		float L_10 = V_0;
		float L_11 = V_0;
		Vector2_t85  L_12 = {0};
		Vector2__ctor_m305(&L_12, ((-L_10)), L_11, /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_9, 1, sizeof(Vector2_t85 ))) = L_12;
		Vector2U5BU5D_t103* L_13 = L_9;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 2);
		float L_14 = V_0;
		float L_15 = V_0;
		Vector2_t85  L_16 = {0};
		Vector2__ctor_m305(&L_16, L_14, L_15, /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_13, 2, sizeof(Vector2_t85 ))) = L_16;
		Vector2U5BU5D_t103* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 3);
		float L_18 = V_0;
		float L_19 = V_0;
		Vector2_t85  L_20 = {0};
		Vector2__ctor_m305(&L_20, L_18, ((-L_19)), /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_17, 3, sizeof(Vector2_t85 ))) = L_20;
		Graphics_BlitMultiTap_m306(NULL /*static, unused*/, L_2, L_3, L_4, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern TypeInfo* Vector2U5BU5D_t103_il2cpp_TypeInfo_var;
extern "C" void Blur_DownSample4x_m29 (Blur_t22 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2U5BU5D_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		RenderTexture_t55 * L_0 = ___source;
		RenderTexture_t55 * L_1 = ___dest;
		Material_t5 * L_2 = Blur_get_material_m25(__this, /*hidden argument*/NULL);
		Vector2U5BU5D_t103* L_3 = ((Vector2U5BU5D_t103*)SZArrayNew(Vector2U5BU5D_t103_il2cpp_TypeInfo_var, 4));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		float L_4 = V_0;
		float L_5 = V_0;
		Vector2_t85  L_6 = {0};
		Vector2__ctor_m305(&L_6, ((-L_4)), ((-L_5)), /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_3, 0, sizeof(Vector2_t85 ))) = L_6;
		Vector2U5BU5D_t103* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		float L_8 = V_0;
		float L_9 = V_0;
		Vector2_t85  L_10 = {0};
		Vector2__ctor_m305(&L_10, ((-L_8)), L_9, /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_7, 1, sizeof(Vector2_t85 ))) = L_10;
		Vector2U5BU5D_t103* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		float L_12 = V_0;
		float L_13 = V_0;
		Vector2_t85  L_14 = {0};
		Vector2__ctor_m305(&L_14, L_12, L_13, /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_11, 2, sizeof(Vector2_t85 ))) = L_14;
		Vector2U5BU5D_t103* L_15 = L_11;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 3);
		float L_16 = V_0;
		float L_17 = V_0;
		Vector2_t85  L_18 = {0};
		Vector2__ctor_m305(&L_18, L_16, ((-L_17)), /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_15, 3, sizeof(Vector2_t85 ))) = L_18;
		Graphics_BlitMultiTap_m306(NULL /*static, unused*/, L_0, L_1, L_2, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern "C" void Blur_OnRenderImage_m30 (Blur_t22 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_t55 * V_2 = {0};
	int32_t V_3 = 0;
	RenderTexture_t55 * V_4 = {0};
	{
		RenderTexture_t55 * L_0 = ___source;
		NullCheck(L_0);
		int32_t L_1 = RenderTexture_get_width_m272(L_0, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1/(int32_t)4));
		RenderTexture_t55 * L_2 = ___source;
		NullCheck(L_2);
		int32_t L_3 = RenderTexture_get_height_m273(L_2, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_3/(int32_t)4));
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		RenderTexture_t55 * L_6 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, L_4, L_5, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		RenderTexture_t55 * L_7 = ___source;
		RenderTexture_t55 * L_8 = V_2;
		Blur_DownSample4x_m29(__this, L_7, L_8, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_004b;
	}

IL_002a:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		RenderTexture_t55 * L_11 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, L_9, L_10, 0, /*hidden argument*/NULL);
		V_4 = L_11;
		RenderTexture_t55 * L_12 = V_2;
		RenderTexture_t55 * L_13 = V_4;
		int32_t L_14 = V_3;
		Blur_FourTapCone_m28(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		RenderTexture_t55 * L_15 = V_2;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		RenderTexture_t55 * L_16 = V_4;
		V_2 = L_16;
		int32_t L_17 = V_3;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = (__this->___iterations_2);
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_002a;
		}
	}
	{
		RenderTexture_t55 * L_20 = V_2;
		RenderTexture_t55 * L_21 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		RenderTexture_t55 * L_22 = V_2;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.BlurOptimized/BlurType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_17.h"
// UnityStandardAssets.ImageEffects.BlurOptimized/BlurType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_17MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.BlurOptimized
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_18.h"
// UnityStandardAssets.ImageEffects.BlurOptimized
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_18MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.BlurOptimized::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void BlurOptimized__ctor_m31 (BlurOptimized_t25 * __this, const MethodInfo* method)
{
	{
		__this->___downsample_5 = 1;
		__this->___blurSize_6 = (3.0f);
		__this->___blurIterations_7 = 2;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.BlurOptimized::CheckResources()
extern "C" bool BlurOptimized_CheckResources_m32 (BlurOptimized_t25 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___blurShader_9);
		Material_t5 * L_1 = (__this->___blurMaterial_10);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___blurMaterial_10 = L_2;
		bool L_3 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		bool L_4 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_4;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BlurOptimized::OnDisable()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void BlurOptimized_OnDisable_m33 (BlurOptimized_t25 * __this, const MethodInfo* method)
{
	{
		Material_t5 * L_0 = (__this->___blurMaterial_10);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Material_t5 * L_2 = (__this->___blurMaterial_10);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BlurOptimized::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral23;
extern "C" void BlurOptimized_OnRenderImage_m34 (BlurOptimized_t25 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_t55 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	RenderTexture_t55 * V_7 = {0};
	int32_t G_B5_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.BlurOptimized::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		int32_t L_3 = (__this->___downsample_5);
		V_0 = ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31)))))))))));
		Material_t5 * L_4 = (__this->___blurMaterial_10);
		float L_5 = (__this->___blurSize_6);
		float L_6 = V_0;
		float L_7 = (__this->___blurSize_6);
		float L_8 = V_0;
		Vector4_t100  L_9 = {0};
		Vector4__ctor_m284(&L_9, ((float)((float)L_5*(float)L_6)), ((float)((float)((-L_7))*(float)L_8)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Material_SetVector_m285(L_4, _stringLiteral23, L_9, /*hidden argument*/NULL);
		RenderTexture_t55 * L_10 = ___source;
		NullCheck(L_10);
		Texture_set_filterMode_m298(L_10, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_11 = ___source;
		NullCheck(L_11);
		int32_t L_12 = RenderTexture_get_width_m272(L_11, /*hidden argument*/NULL);
		int32_t L_13 = (__this->___downsample_5);
		V_1 = ((int32_t)((int32_t)L_12>>(int32_t)((int32_t)((int32_t)L_13&(int32_t)((int32_t)31)))));
		RenderTexture_t55 * L_14 = ___source;
		NullCheck(L_14);
		int32_t L_15 = RenderTexture_get_height_m273(L_14, /*hidden argument*/NULL);
		int32_t L_16 = (__this->___downsample_5);
		V_2 = ((int32_t)((int32_t)L_15>>(int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)31)))));
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		RenderTexture_t55 * L_19 = ___source;
		NullCheck(L_19);
		int32_t L_20 = RenderTexture_get_format_m279(L_19, /*hidden argument*/NULL);
		RenderTexture_t55 * L_21 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_17, L_18, 0, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		RenderTexture_t55 * L_22 = V_3;
		NullCheck(L_22);
		Texture_set_filterMode_m298(L_22, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_23 = ___source;
		RenderTexture_t55 * L_24 = V_3;
		Material_t5 * L_25 = (__this->___blurMaterial_10);
		Graphics_Blit_m275(NULL /*static, unused*/, L_23, L_24, L_25, 0, /*hidden argument*/NULL);
		int32_t L_26 = (__this->___blurType_8);
		if (L_26)
		{
			goto IL_00ba;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_00bb;
	}

IL_00ba:
	{
		G_B5_0 = 2;
	}

IL_00bb:
	{
		V_4 = G_B5_0;
		V_5 = 0;
		goto IL_0172;
	}

IL_00c5:
	{
		int32_t L_27 = V_5;
		V_6 = ((float)((float)(((float)L_27))*(float)(1.0f)));
		Material_t5 * L_28 = (__this->___blurMaterial_10);
		float L_29 = (__this->___blurSize_6);
		float L_30 = V_0;
		float L_31 = V_6;
		float L_32 = (__this->___blurSize_6);
		float L_33 = V_0;
		float L_34 = V_6;
		Vector4_t100  L_35 = {0};
		Vector4__ctor_m284(&L_35, ((float)((float)((float)((float)L_29*(float)L_30))+(float)L_31)), ((float)((float)((float)((float)((-L_32))*(float)L_33))-(float)L_34)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Material_SetVector_m285(L_28, _stringLiteral23, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		RenderTexture_t55 * L_38 = ___source;
		NullCheck(L_38);
		int32_t L_39 = RenderTexture_get_format_m279(L_38, /*hidden argument*/NULL);
		RenderTexture_t55 * L_40 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_36, L_37, 0, L_39, /*hidden argument*/NULL);
		V_7 = L_40;
		RenderTexture_t55 * L_41 = V_7;
		NullCheck(L_41);
		Texture_set_filterMode_m298(L_41, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_42 = V_3;
		RenderTexture_t55 * L_43 = V_7;
		Material_t5 * L_44 = (__this->___blurMaterial_10);
		int32_t L_45 = V_4;
		Graphics_Blit_m275(NULL /*static, unused*/, L_42, L_43, L_44, ((int32_t)((int32_t)1+(int32_t)L_45)), /*hidden argument*/NULL);
		RenderTexture_t55 * L_46 = V_3;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		RenderTexture_t55 * L_47 = V_7;
		V_3 = L_47;
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		RenderTexture_t55 * L_50 = ___source;
		NullCheck(L_50);
		int32_t L_51 = RenderTexture_get_format_m279(L_50, /*hidden argument*/NULL);
		RenderTexture_t55 * L_52 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_48, L_49, 0, L_51, /*hidden argument*/NULL);
		V_7 = L_52;
		RenderTexture_t55 * L_53 = V_7;
		NullCheck(L_53);
		Texture_set_filterMode_m298(L_53, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_54 = V_3;
		RenderTexture_t55 * L_55 = V_7;
		Material_t5 * L_56 = (__this->___blurMaterial_10);
		int32_t L_57 = V_4;
		Graphics_Blit_m275(NULL /*static, unused*/, L_54, L_55, L_56, ((int32_t)((int32_t)2+(int32_t)L_57)), /*hidden argument*/NULL);
		RenderTexture_t55 * L_58 = V_3;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		RenderTexture_t55 * L_59 = V_7;
		V_3 = L_59;
		int32_t L_60 = V_5;
		V_5 = ((int32_t)((int32_t)L_60+(int32_t)1));
	}

IL_0172:
	{
		int32_t L_61 = V_5;
		int32_t L_62 = (__this->___blurIterations_7);
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00c5;
		}
	}
	{
		RenderTexture_t55 * L_63 = V_3;
		RenderTexture_t55 * L_64 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_63, L_64, /*hidden argument*/NULL);
		RenderTexture_t55 * L_65 = V_3;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_19.h"
// UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_19MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.CameraMotionBlur
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_20.h"
// UnityStandardAssets.ImageEffects.CameraMotionBlur
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_20MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapMode.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
#include "mscorlib_ArrayTypes.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
struct Camera_t32;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m363_gshared (GameObject_t30 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m363(__this, method) (( Object_t * (*) (GameObject_t30 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m363_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
#define GameObject_GetComponent_TisCamera_t32_m359(__this, method) (( Camera_t32 * (*) (GameObject_t30 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m363_gshared)(__this, method)
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.ctor()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void CameraMotionBlur__ctor_m35 (CameraMotionBlur_t27 * __this, const MethodInfo* method)
{
	{
		__this->___filterType_6 = 2;
		Vector3_t28  L_0 = Vector3_get_one_m308(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___previewScale_8 = L_0;
		__this->___rotationScale_10 = (1.0f);
		__this->___maxVelocity_11 = (8.0f);
		__this->___minVelocity_12 = (0.1f);
		__this->___velocityScale_13 = (0.375f);
		__this->___softZDistance_14 = (0.005f);
		__this->___velocityDownsample_15 = 1;
		LayerMask_t29  L_1 = LayerMask_op_Implicit_m309(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		__this->___excludeLayers_16 = L_1;
		__this->___jitter_24 = (0.05f);
		__this->___showVelocityScale_26 = (1.0f);
		Vector3_t28  L_2 = Vector3_get_forward_m310(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___prevFrameForward_31 = L_2;
		Vector3_t28  L_3 = Vector3_get_up_m311(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___prevFrameUp_32 = L_3;
		Vector3_t28  L_4 = Vector3_get_zero_m312(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___prevFramePos_33 = L_4;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.cctor()
extern TypeInfo* CameraMotionBlur_t27_il2cpp_TypeInfo_var;
extern "C" void CameraMotionBlur__cctor_m36 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CameraMotionBlur_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		((CameraMotionBlur_t27_StaticFields*)CameraMotionBlur_t27_il2cpp_TypeInfo_var->static_fields)->___MAX_RADIUS_5 = (10.0f);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::CalculateViewProjection()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
extern "C" void CameraMotionBlur_CalculateViewProjection_m37 (CameraMotionBlur_t27 * __this, const MethodInfo* method)
{
	Matrix4x4_t31  V_0 = {0};
	Matrix4x4_t31  V_1 = {0};
	{
		Camera_t32 * L_0 = (__this->____camera_34);
		NullCheck(L_0);
		Matrix4x4_t31  L_1 = Camera_get_worldToCameraMatrix_m313(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Camera_t32 * L_2 = (__this->____camera_34);
		NullCheck(L_2);
		Matrix4x4_t31  L_3 = Camera_get_projectionMatrix_m314(L_2, /*hidden argument*/NULL);
		Matrix4x4_t31  L_4 = GL_GetGPUProjectionMatrix_m315(NULL /*static, unused*/, L_3, 1, /*hidden argument*/NULL);
		V_1 = L_4;
		Matrix4x4_t31  L_5 = V_1;
		Matrix4x4_t31  L_6 = V_0;
		Matrix4x4_t31  L_7 = Matrix4x4_op_Multiply_m316(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		__this->___currentViewProjMat_27 = L_7;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Start()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.CameraMotionBlur
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_20MethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern "C" void CameraMotionBlur_Start_m38 (CameraMotionBlur_t27 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::CheckResources() */, __this);
		Camera_t32 * L_0 = (__this->____camera_34);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Camera_t32 * L_2 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		__this->____camera_34 = L_2;
	}

IL_0024:
	{
		GameObject_t30 * L_3 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = GameObject_get_activeInHierarchy_m318(L_3, /*hidden argument*/NULL);
		__this->___wasActive_30 = L_4;
		CameraMotionBlur_CalculateViewProjection_m37(__this, /*hidden argument*/NULL);
		CameraMotionBlur_Remember_m43(__this, /*hidden argument*/NULL);
		__this->___wasActive_30 = 0;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnEnable()
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern "C" void CameraMotionBlur_OnEnable_m39 (CameraMotionBlur_t27 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t32 * L_0 = (__this->____camera_34);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Camera_t32 * L_2 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		__this->____camera_34 = L_2;
	}

IL_001d:
	{
		Camera_t32 * L_3 = (__this->____camera_34);
		Camera_t32 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = Camera_get_depthTextureMode_m319(L_4, /*hidden argument*/NULL);
		NullCheck(L_4);
		Camera_set_depthTextureMode_m320(L_4, ((int32_t)((int32_t)L_5|(int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnDisable()
extern "C" void CameraMotionBlur_OnDisable_m40 (CameraMotionBlur_t27 * __this, const MethodInfo* method)
{
	{
		Material_t5 * L_0 = (__this->___motionBlurMaterial_21);
		bool L_1 = Object_op_Inequality_m268(NULL /*static, unused*/, (Object_t99 *)NULL, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		Material_t5 * L_2 = (__this->___motionBlurMaterial_21);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___motionBlurMaterial_21 = (Material_t5 *)NULL;
	}

IL_0023:
	{
		Material_t5 * L_3 = (__this->___dx11MotionBlurMaterial_22);
		bool L_4 = Object_op_Inequality_m268(NULL /*static, unused*/, (Object_t99 *)NULL, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		Material_t5 * L_5 = (__this->___dx11MotionBlurMaterial_22);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___dx11MotionBlurMaterial_22 = (Material_t5 *)NULL;
	}

IL_0046:
	{
		GameObject_t30 * L_6 = (__this->___tmpCam_17);
		bool L_7 = Object_op_Inequality_m268(NULL /*static, unused*/, (Object_t99 *)NULL, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		GameObject_t30 * L_8 = (__this->___tmpCam_17);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		__this->___tmpCam_17 = (GameObject_t30 *)NULL;
	}

IL_0069:
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::CheckResources()
extern "C" bool CameraMotionBlur_CheckResources_m41 (CameraMotionBlur_t27 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m152(__this, 1, 1, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___shader_18);
		Material_t5 * L_1 = (__this->___motionBlurMaterial_21);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___motionBlurMaterial_21 = L_2;
		bool L_3 = (((PostEffectsBase_t3 *)__this)->___supportDX11_3);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_4 = (__this->___filterType_6);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0050;
		}
	}
	{
		Shader_t4 * L_5 = (__this->___dx11MotionBlurShader_19);
		Material_t5 * L_6 = (__this->___dx11MotionBlurMaterial_22);
		Material_t5 * L_7 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_5, L_6, /*hidden argument*/NULL);
		__this->___dx11MotionBlurMaterial_22 = L_7;
	}

IL_0050:
	{
		bool L_8 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0061:
	{
		bool L_9 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_9;
	}
}
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern TypeInfo* CameraMotionBlur_t27_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral25;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral27;
extern Il2CppCodeGenString* _stringLiteral28;
extern Il2CppCodeGenString* _stringLiteral29;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral31;
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral33;
extern Il2CppCodeGenString* _stringLiteral34;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral36;
extern Il2CppCodeGenString* _stringLiteral37;
extern Il2CppCodeGenString* _stringLiteral38;
extern Il2CppCodeGenString* _stringLiteral39;
extern "C" void CameraMotionBlur_OnRenderImage_m42 (CameraMotionBlur_t27 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CameraMotionBlur_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral31 = il2cpp_codegen_string_literal_from_index(31);
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		_stringLiteral34 = il2cpp_codegen_string_literal_from_index(34);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral36 = il2cpp_codegen_string_literal_from_index(36);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	RenderTexture_t55 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	bool V_5 = false;
	RenderTexture_t55 * V_6 = {0};
	RenderTexture_t55 * V_7 = {0};
	Matrix4x4_t31  V_8 = {0};
	Matrix4x4_t31  V_9 = {0};
	Matrix4x4_t31  V_10 = {0};
	Matrix4x4_t31  V_11 = {0};
	Vector4_t100  V_12 = {0};
	float V_13 = 0.0f;
	Vector3_t28  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	Camera_t32 * V_17 = {0};
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		int32_t L_3 = (__this->___filterType_6);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		CameraMotionBlur_StartFrame_m45(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		bool L_4 = SystemInfo_SupportsRenderTextureFormat_m321(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		G_B7_0 = ((int32_t)13);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 2;
	}

IL_0038:
	{
		V_0 = G_B7_0;
		RenderTexture_t55 * L_5 = ___source;
		NullCheck(L_5);
		int32_t L_6 = RenderTexture_get_width_m272(L_5, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___velocityDownsample_15);
		IL2CPP_RUNTIME_CLASS_INIT(CameraMotionBlur_t27_il2cpp_TypeInfo_var);
		int32_t L_8 = CameraMotionBlur_divRoundUp_m46(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		RenderTexture_t55 * L_9 = ___source;
		NullCheck(L_9);
		int32_t L_10 = RenderTexture_get_height_m273(L_9, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___velocityDownsample_15);
		int32_t L_12 = CameraMotionBlur_divRoundUp_m46(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		RenderTexture_t55 * L_14 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_8, L_12, 0, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		V_2 = 1;
		V_3 = 1;
		float L_15 = (__this->___maxVelocity_11);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_16 = Mathf_Max_m322(NULL /*static, unused*/, (2.0f), L_15, /*hidden argument*/NULL);
		__this->___maxVelocity_11 = L_16;
		float L_17 = (__this->___maxVelocity_11);
		V_4 = L_17;
		int32_t L_18 = (__this->___filterType_6);
		if ((!(((uint32_t)L_18) == ((uint32_t)3))))
		{
			goto IL_009f;
		}
	}
	{
		Material_t5 * L_19 = (__this->___dx11MotionBlurMaterial_22);
		bool L_20 = Object_op_Equality_m295(NULL /*static, unused*/, L_19, (Object_t99 *)NULL, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_20));
		goto IL_00a0;
	}

IL_009f:
	{
		G_B10_0 = 0;
	}

IL_00a0:
	{
		V_5 = G_B10_0;
		int32_t L_21 = (__this->___filterType_6);
		if ((((int32_t)L_21) == ((int32_t)2)))
		{
			goto IL_00c1;
		}
	}
	{
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_23 = (__this->___filterType_6);
		if ((!(((uint32_t)L_23) == ((uint32_t)4))))
		{
			goto IL_010d;
		}
	}

IL_00c1:
	{
		float L_24 = (__this->___maxVelocity_11);
		IL2CPP_RUNTIME_CLASS_INIT(CameraMotionBlur_t27_il2cpp_TypeInfo_var);
		float L_25 = ((CameraMotionBlur_t27_StaticFields*)CameraMotionBlur_t27_il2cpp_TypeInfo_var->static_fields)->___MAX_RADIUS_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_26 = Mathf_Min_m323(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		__this->___maxVelocity_11 = L_26;
		RenderTexture_t55 * L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = RenderTexture_get_width_m272(L_27, /*hidden argument*/NULL);
		float L_29 = (__this->___maxVelocity_11);
		int32_t L_30 = CameraMotionBlur_divRoundUp_m46(NULL /*static, unused*/, L_28, (((int32_t)L_29)), /*hidden argument*/NULL);
		V_2 = L_30;
		RenderTexture_t55 * L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32 = RenderTexture_get_height_m273(L_31, /*hidden argument*/NULL);
		float L_33 = (__this->___maxVelocity_11);
		int32_t L_34 = CameraMotionBlur_divRoundUp_m46(NULL /*static, unused*/, L_32, (((int32_t)L_33)), /*hidden argument*/NULL);
		V_3 = L_34;
		RenderTexture_t55 * L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = RenderTexture_get_width_m272(L_35, /*hidden argument*/NULL);
		int32_t L_37 = V_2;
		V_4 = (((float)((int32_t)((int32_t)L_36/(int32_t)L_37))));
		goto IL_013e;
	}

IL_010d:
	{
		RenderTexture_t55 * L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39 = RenderTexture_get_width_m272(L_38, /*hidden argument*/NULL);
		float L_40 = (__this->___maxVelocity_11);
		IL2CPP_RUNTIME_CLASS_INIT(CameraMotionBlur_t27_il2cpp_TypeInfo_var);
		int32_t L_41 = CameraMotionBlur_divRoundUp_m46(NULL /*static, unused*/, L_39, (((int32_t)L_40)), /*hidden argument*/NULL);
		V_2 = L_41;
		RenderTexture_t55 * L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43 = RenderTexture_get_height_m273(L_42, /*hidden argument*/NULL);
		float L_44 = (__this->___maxVelocity_11);
		int32_t L_45 = CameraMotionBlur_divRoundUp_m46(NULL /*static, unused*/, L_43, (((int32_t)L_44)), /*hidden argument*/NULL);
		V_3 = L_45;
		RenderTexture_t55 * L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = RenderTexture_get_width_m272(L_46, /*hidden argument*/NULL);
		int32_t L_48 = V_2;
		V_4 = (((float)((int32_t)((int32_t)L_47/(int32_t)L_48))));
	}

IL_013e:
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_3;
		int32_t L_51 = V_0;
		RenderTexture_t55 * L_52 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_49, L_50, 0, L_51, /*hidden argument*/NULL);
		V_6 = L_52;
		int32_t L_53 = V_2;
		int32_t L_54 = V_3;
		int32_t L_55 = V_0;
		RenderTexture_t55 * L_56 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_53, L_54, 0, L_55, /*hidden argument*/NULL);
		V_7 = L_56;
		RenderTexture_t55 * L_57 = V_1;
		NullCheck(L_57);
		Texture_set_filterMode_m298(L_57, 0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_58 = V_6;
		NullCheck(L_58);
		Texture_set_filterMode_m298(L_58, 0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_59 = V_7;
		NullCheck(L_59);
		Texture_set_filterMode_m298(L_59, 0, /*hidden argument*/NULL);
		Texture2D_t13 * L_60 = (__this->___noiseTexture_23);
		bool L_61 = Object_op_Implicit_m294(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0187;
		}
	}
	{
		Texture2D_t13 * L_62 = (__this->___noiseTexture_23);
		NullCheck(L_62);
		Texture_set_filterMode_m298(L_62, 0, /*hidden argument*/NULL);
	}

IL_0187:
	{
		RenderTexture_t55 * L_63 = ___source;
		NullCheck(L_63);
		Texture_set_wrapMode_m324(L_63, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_64 = V_1;
		NullCheck(L_64);
		Texture_set_wrapMode_m324(L_64, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_65 = V_7;
		NullCheck(L_65);
		Texture_set_wrapMode_m324(L_65, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_66 = V_6;
		NullCheck(L_66);
		Texture_set_wrapMode_m324(L_66, 1, /*hidden argument*/NULL);
		CameraMotionBlur_CalculateViewProjection_m37(__this, /*hidden argument*/NULL);
		GameObject_t30 * L_67 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		bool L_68 = GameObject_get_activeInHierarchy_m318(L_67, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01cc;
		}
	}
	{
		bool L_69 = (__this->___wasActive_30);
		if (L_69)
		{
			goto IL_01cc;
		}
	}
	{
		CameraMotionBlur_Remember_m43(__this, /*hidden argument*/NULL);
	}

IL_01cc:
	{
		GameObject_t30 * L_70 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		NullCheck(L_70);
		bool L_71 = GameObject_get_activeInHierarchy_m318(L_70, /*hidden argument*/NULL);
		__this->___wasActive_30 = L_71;
		Matrix4x4_t31  L_72 = (__this->___currentViewProjMat_27);
		Matrix4x4_t31  L_73 = Matrix4x4_Inverse_m325(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		V_8 = L_73;
		Material_t5 * L_74 = (__this->___motionBlurMaterial_21);
		Matrix4x4_t31  L_75 = V_8;
		NullCheck(L_74);
		Material_SetMatrix_m326(L_74, _stringLiteral25, L_75, /*hidden argument*/NULL);
		Material_t5 * L_76 = (__this->___motionBlurMaterial_21);
		Matrix4x4_t31  L_77 = (__this->___prevViewProjMat_28);
		NullCheck(L_76);
		Material_SetMatrix_m326(L_76, _stringLiteral26, L_77, /*hidden argument*/NULL);
		Material_t5 * L_78 = (__this->___motionBlurMaterial_21);
		Matrix4x4_t31  L_79 = (__this->___prevViewProjMat_28);
		Matrix4x4_t31  L_80 = V_8;
		Matrix4x4_t31  L_81 = Matrix4x4_op_Multiply_m316(NULL /*static, unused*/, L_79, L_80, /*hidden argument*/NULL);
		NullCheck(L_78);
		Material_SetMatrix_m326(L_78, _stringLiteral27, L_81, /*hidden argument*/NULL);
		Material_t5 * L_82 = (__this->___motionBlurMaterial_21);
		float L_83 = V_4;
		NullCheck(L_82);
		Material_SetFloat_m269(L_82, _stringLiteral28, L_83, /*hidden argument*/NULL);
		Material_t5 * L_84 = (__this->___motionBlurMaterial_21);
		float L_85 = V_4;
		NullCheck(L_84);
		Material_SetFloat_m269(L_84, _stringLiteral29, L_85, /*hidden argument*/NULL);
		Material_t5 * L_86 = (__this->___motionBlurMaterial_21);
		float L_87 = (__this->___minVelocity_12);
		NullCheck(L_86);
		Material_SetFloat_m269(L_86, _stringLiteral30, L_87, /*hidden argument*/NULL);
		Material_t5 * L_88 = (__this->___motionBlurMaterial_21);
		float L_89 = (__this->___velocityScale_13);
		NullCheck(L_88);
		Material_SetFloat_m269(L_88, _stringLiteral31, L_89, /*hidden argument*/NULL);
		Material_t5 * L_90 = (__this->___motionBlurMaterial_21);
		float L_91 = (__this->___jitter_24);
		NullCheck(L_90);
		Material_SetFloat_m269(L_90, _stringLiteral32, L_91, /*hidden argument*/NULL);
		Material_t5 * L_92 = (__this->___motionBlurMaterial_21);
		Texture2D_t13 * L_93 = (__this->___noiseTexture_23);
		NullCheck(L_92);
		Material_SetTexture_m292(L_92, _stringLiteral33, L_93, /*hidden argument*/NULL);
		Material_t5 * L_94 = (__this->___motionBlurMaterial_21);
		RenderTexture_t55 * L_95 = V_1;
		NullCheck(L_94);
		Material_SetTexture_m292(L_94, _stringLiteral34, L_95, /*hidden argument*/NULL);
		Material_t5 * L_96 = (__this->___motionBlurMaterial_21);
		RenderTexture_t55 * L_97 = V_7;
		NullCheck(L_96);
		Material_SetTexture_m292(L_96, _stringLiteral35, L_97, /*hidden argument*/NULL);
		Material_t5 * L_98 = (__this->___motionBlurMaterial_21);
		RenderTexture_t55 * L_99 = V_6;
		NullCheck(L_98);
		Material_SetTexture_m292(L_98, _stringLiteral36, L_99, /*hidden argument*/NULL);
		bool L_100 = (__this->___preview_7);
		if (!L_100)
		{
			goto IL_037c;
		}
	}
	{
		Camera_t32 * L_101 = (__this->____camera_34);
		NullCheck(L_101);
		Matrix4x4_t31  L_102 = Camera_get_worldToCameraMatrix_m313(L_101, /*hidden argument*/NULL);
		V_9 = L_102;
		Matrix4x4_t31  L_103 = Matrix4x4_get_identity_m327(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_10 = L_103;
		Vector3_t28  L_104 = (__this->___previewScale_8);
		Vector3_t28  L_105 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_104, (0.3333f), /*hidden argument*/NULL);
		Quaternion_t104  L_106 = Quaternion_get_identity_m329(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t28  L_107 = Vector3_get_one_m308(NULL /*static, unused*/, /*hidden argument*/NULL);
		Matrix4x4_SetTRS_m330((&V_10), L_105, L_106, L_107, /*hidden argument*/NULL);
		Camera_t32 * L_108 = (__this->____camera_34);
		NullCheck(L_108);
		Matrix4x4_t31  L_109 = Camera_get_projectionMatrix_m314(L_108, /*hidden argument*/NULL);
		Matrix4x4_t31  L_110 = GL_GetGPUProjectionMatrix_m315(NULL /*static, unused*/, L_109, 1, /*hidden argument*/NULL);
		V_11 = L_110;
		Matrix4x4_t31  L_111 = V_11;
		Matrix4x4_t31  L_112 = V_10;
		Matrix4x4_t31  L_113 = Matrix4x4_op_Multiply_m316(NULL /*static, unused*/, L_111, L_112, /*hidden argument*/NULL);
		Matrix4x4_t31  L_114 = V_9;
		Matrix4x4_t31  L_115 = Matrix4x4_op_Multiply_m316(NULL /*static, unused*/, L_113, L_114, /*hidden argument*/NULL);
		__this->___prevViewProjMat_28 = L_115;
		Material_t5 * L_116 = (__this->___motionBlurMaterial_21);
		Matrix4x4_t31  L_117 = (__this->___prevViewProjMat_28);
		NullCheck(L_116);
		Material_SetMatrix_m326(L_116, _stringLiteral26, L_117, /*hidden argument*/NULL);
		Material_t5 * L_118 = (__this->___motionBlurMaterial_21);
		Matrix4x4_t31  L_119 = (__this->___prevViewProjMat_28);
		Matrix4x4_t31  L_120 = V_8;
		Matrix4x4_t31  L_121 = Matrix4x4_op_Multiply_m316(NULL /*static, unused*/, L_119, L_120, /*hidden argument*/NULL);
		NullCheck(L_118);
		Material_SetMatrix_m326(L_118, _stringLiteral27, L_121, /*hidden argument*/NULL);
	}

IL_037c:
	{
		int32_t L_122 = (__this->___filterType_6);
		if (L_122)
		{
			goto IL_05cf;
		}
	}
	{
		Vector4_t100  L_123 = Vector4_get_zero_m331(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_12 = L_123;
		Transform_t48 * L_124 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_124);
		Vector3_t28  L_125 = Transform_get_up_m333(L_124, /*hidden argument*/NULL);
		Vector3_t28  L_126 = Vector3_get_up_m311(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_127 = Vector3_Dot_m334(NULL /*static, unused*/, L_125, L_126, /*hidden argument*/NULL);
		V_13 = L_127;
		Vector3_t28  L_128 = (__this->___prevFramePos_33);
		Transform_t48 * L_129 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_129);
		Vector3_t28  L_130 = Transform_get_position_m335(L_129, /*hidden argument*/NULL);
		Vector3_t28  L_131 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_128, L_130, /*hidden argument*/NULL);
		V_14 = L_131;
		float L_132 = Vector3_get_magnitude_m337((&V_14), /*hidden argument*/NULL);
		V_15 = L_132;
		V_16 = (1.0f);
		Transform_t48 * L_133 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_133);
		Vector3_t28  L_134 = Transform_get_up_m333(L_133, /*hidden argument*/NULL);
		Vector3_t28  L_135 = (__this->___prevFrameUp_32);
		float L_136 = Vector3_Angle_m338(NULL /*static, unused*/, L_134, L_135, /*hidden argument*/NULL);
		Camera_t32 * L_137 = (__this->____camera_34);
		NullCheck(L_137);
		float L_138 = Camera_get_fieldOfView_m339(L_137, /*hidden argument*/NULL);
		RenderTexture_t55 * L_139 = ___source;
		NullCheck(L_139);
		int32_t L_140 = RenderTexture_get_width_m272(L_139, /*hidden argument*/NULL);
		V_16 = ((float)((float)((float)((float)L_136/(float)L_138))*(float)((float)((float)(((float)L_140))*(float)(0.75f)))));
		float L_141 = (__this->___rotationScale_10);
		float L_142 = V_16;
		(&V_12)->___x_1 = ((float)((float)L_141*(float)L_142));
		Transform_t48 * L_143 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_143);
		Vector3_t28  L_144 = Transform_get_forward_m340(L_143, /*hidden argument*/NULL);
		Vector3_t28  L_145 = (__this->___prevFrameForward_31);
		float L_146 = Vector3_Angle_m338(NULL /*static, unused*/, L_144, L_145, /*hidden argument*/NULL);
		Camera_t32 * L_147 = (__this->____camera_34);
		NullCheck(L_147);
		float L_148 = Camera_get_fieldOfView_m339(L_147, /*hidden argument*/NULL);
		RenderTexture_t55 * L_149 = ___source;
		NullCheck(L_149);
		int32_t L_150 = RenderTexture_get_width_m272(L_149, /*hidden argument*/NULL);
		V_16 = ((float)((float)((float)((float)L_146/(float)L_148))*(float)((float)((float)(((float)L_150))*(float)(0.75f)))));
		float L_151 = (__this->___rotationScale_10);
		float L_152 = V_13;
		float L_153 = V_16;
		(&V_12)->___y_2 = ((float)((float)((float)((float)L_151*(float)L_152))*(float)L_153));
		Transform_t48 * L_154 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_154);
		Vector3_t28  L_155 = Transform_get_forward_m340(L_154, /*hidden argument*/NULL);
		Vector3_t28  L_156 = (__this->___prevFrameForward_31);
		float L_157 = Vector3_Angle_m338(NULL /*static, unused*/, L_155, L_156, /*hidden argument*/NULL);
		Camera_t32 * L_158 = (__this->____camera_34);
		NullCheck(L_158);
		float L_159 = Camera_get_fieldOfView_m339(L_158, /*hidden argument*/NULL);
		RenderTexture_t55 * L_160 = ___source;
		NullCheck(L_160);
		int32_t L_161 = RenderTexture_get_width_m272(L_160, /*hidden argument*/NULL);
		V_16 = ((float)((float)((float)((float)L_157/(float)L_159))*(float)((float)((float)(((float)L_161))*(float)(0.75f)))));
		float L_162 = (__this->___rotationScale_10);
		float L_163 = V_13;
		float L_164 = V_16;
		(&V_12)->___z_3 = ((float)((float)((float)((float)L_162*(float)((float)((float)(1.0f)-(float)L_163))))*(float)L_164));
		float L_165 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_166 = ((Mathf_t101_StaticFields*)Mathf_t101_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		if ((!(((float)L_165) > ((float)L_166))))
		{
			goto IL_0553;
		}
	}
	{
		float L_167 = (__this->___movementScale_9);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_168 = ((Mathf_t101_StaticFields*)Mathf_t101_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		if ((!(((float)L_167) > ((float)L_168))))
		{
			goto IL_0553;
		}
	}
	{
		float L_169 = (__this->___movementScale_9);
		Transform_t48 * L_170 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_170);
		Vector3_t28  L_171 = Transform_get_forward_m340(L_170, /*hidden argument*/NULL);
		Vector3_t28  L_172 = V_14;
		float L_173 = Vector3_Dot_m334(NULL /*static, unused*/, L_171, L_172, /*hidden argument*/NULL);
		RenderTexture_t55 * L_174 = ___source;
		NullCheck(L_174);
		int32_t L_175 = RenderTexture_get_width_m272(L_174, /*hidden argument*/NULL);
		(&V_12)->___w_4 = ((float)((float)((float)((float)L_169*(float)L_173))*(float)((float)((float)(((float)L_175))*(float)(0.5f)))));
		Vector4_t100 * L_176 = (&V_12);
		float L_177 = (L_176->___x_1);
		float L_178 = (__this->___movementScale_9);
		Transform_t48 * L_179 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_179);
		Vector3_t28  L_180 = Transform_get_up_m333(L_179, /*hidden argument*/NULL);
		Vector3_t28  L_181 = V_14;
		float L_182 = Vector3_Dot_m334(NULL /*static, unused*/, L_180, L_181, /*hidden argument*/NULL);
		RenderTexture_t55 * L_183 = ___source;
		NullCheck(L_183);
		int32_t L_184 = RenderTexture_get_width_m272(L_183, /*hidden argument*/NULL);
		L_176->___x_1 = ((float)((float)L_177+(float)((float)((float)((float)((float)L_178*(float)L_182))*(float)((float)((float)(((float)L_184))*(float)(0.5f)))))));
		Vector4_t100 * L_185 = (&V_12);
		float L_186 = (L_185->___y_2);
		float L_187 = (__this->___movementScale_9);
		Transform_t48 * L_188 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_188);
		Vector3_t28  L_189 = Transform_get_right_m341(L_188, /*hidden argument*/NULL);
		Vector3_t28  L_190 = V_14;
		float L_191 = Vector3_Dot_m334(NULL /*static, unused*/, L_189, L_190, /*hidden argument*/NULL);
		RenderTexture_t55 * L_192 = ___source;
		NullCheck(L_192);
		int32_t L_193 = RenderTexture_get_width_m272(L_192, /*hidden argument*/NULL);
		L_185->___y_2 = ((float)((float)L_186+(float)((float)((float)((float)((float)L_187*(float)L_191))*(float)((float)((float)(((float)L_193))*(float)(0.5f)))))));
	}

IL_0553:
	{
		bool L_194 = (__this->___preview_7);
		if (!L_194)
		{
			goto IL_05b8;
		}
	}
	{
		Material_t5 * L_195 = (__this->___motionBlurMaterial_21);
		Vector3_t28 * L_196 = &(__this->___previewScale_8);
		float L_197 = (L_196->___y_2);
		Vector3_t28 * L_198 = &(__this->___previewScale_8);
		float L_199 = (L_198->___x_1);
		Vector3_t28 * L_200 = &(__this->___previewScale_8);
		float L_201 = (L_200->___z_3);
		Vector4_t100  L_202 = {0};
		Vector4__ctor_m284(&L_202, L_197, L_199, (0.0f), L_201, /*hidden argument*/NULL);
		Vector4_t100  L_203 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_202, (0.5f), /*hidden argument*/NULL);
		Camera_t32 * L_204 = (__this->____camera_34);
		NullCheck(L_204);
		float L_205 = Camera_get_fieldOfView_m339(L_204, /*hidden argument*/NULL);
		Vector4_t100  L_206 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_203, L_205, /*hidden argument*/NULL);
		NullCheck(L_195);
		Material_SetVector_m285(L_195, _stringLiteral37, L_206, /*hidden argument*/NULL);
		goto IL_05ca;
	}

IL_05b8:
	{
		Material_t5 * L_207 = (__this->___motionBlurMaterial_21);
		Vector4_t100  L_208 = V_12;
		NullCheck(L_207);
		Material_SetVector_m285(L_207, _stringLiteral37, L_208, /*hidden argument*/NULL);
	}

IL_05ca:
	{
		goto IL_0660;
	}

IL_05cf:
	{
		RenderTexture_t55 * L_209 = ___source;
		RenderTexture_t55 * L_210 = V_1;
		Material_t5 * L_211 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m275(NULL /*static, unused*/, L_209, L_210, L_211, 0, /*hidden argument*/NULL);
		V_17 = (Camera_t32 *)NULL;
		LayerMask_t29 * L_212 = &(__this->___excludeLayers_16);
		int32_t L_213 = LayerMask_get_value_m342(L_212, /*hidden argument*/NULL);
		if (!L_213)
		{
			goto IL_05f8;
		}
	}
	{
		Camera_t32 * L_214 = CameraMotionBlur_GetTmpCam_m44(__this, /*hidden argument*/NULL);
		V_17 = L_214;
	}

IL_05f8:
	{
		Camera_t32 * L_215 = V_17;
		bool L_216 = Object_op_Implicit_m294(NULL /*static, unused*/, L_215, /*hidden argument*/NULL);
		if (!L_216)
		{
			goto IL_0660;
		}
	}
	{
		LayerMask_t29 * L_217 = &(__this->___excludeLayers_16);
		int32_t L_218 = LayerMask_get_value_m342(L_217, /*hidden argument*/NULL);
		if (!L_218)
		{
			goto IL_0660;
		}
	}
	{
		Shader_t4 * L_219 = (__this->___replacementClear_20);
		bool L_220 = Object_op_Implicit_m294(NULL /*static, unused*/, L_219, /*hidden argument*/NULL);
		if (!L_220)
		{
			goto IL_0660;
		}
	}
	{
		Shader_t4 * L_221 = (__this->___replacementClear_20);
		NullCheck(L_221);
		bool L_222 = Shader_get_isSupported_m266(L_221, /*hidden argument*/NULL);
		if (!L_222)
		{
			goto IL_0660;
		}
	}
	{
		Camera_t32 * L_223 = V_17;
		RenderTexture_t55 * L_224 = V_1;
		NullCheck(L_223);
		Camera_set_targetTexture_m343(L_223, L_224, /*hidden argument*/NULL);
		Camera_t32 * L_225 = V_17;
		LayerMask_t29  L_226 = (__this->___excludeLayers_16);
		int32_t L_227 = LayerMask_op_Implicit_m344(NULL /*static, unused*/, L_226, /*hidden argument*/NULL);
		NullCheck(L_225);
		Camera_set_cullingMask_m345(L_225, L_227, /*hidden argument*/NULL);
		Camera_t32 * L_228 = V_17;
		Shader_t4 * L_229 = (__this->___replacementClear_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_230 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_228);
		Camera_RenderWithShader_m346(L_228, L_229, L_230, /*hidden argument*/NULL);
	}

IL_0660:
	{
		bool L_231 = (__this->___preview_7);
		if (L_231)
		{
			goto IL_068c;
		}
	}
	{
		int32_t L_232 = Time_get_frameCount_m347(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_233 = (__this->___prevFrameCount_29);
		if ((((int32_t)L_232) == ((int32_t)L_233)))
		{
			goto IL_068c;
		}
	}
	{
		int32_t L_234 = Time_get_frameCount_m347(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___prevFrameCount_29 = L_234;
		CameraMotionBlur_Remember_m43(__this, /*hidden argument*/NULL);
	}

IL_068c:
	{
		RenderTexture_t55 * L_235 = ___source;
		NullCheck(L_235);
		Texture_set_filterMode_m298(L_235, 1, /*hidden argument*/NULL);
		bool L_236 = (__this->___showVelocity_25);
		if (!L_236)
		{
			goto IL_06c7;
		}
	}
	{
		Material_t5 * L_237 = (__this->___motionBlurMaterial_21);
		float L_238 = (__this->___showVelocityScale_26);
		NullCheck(L_237);
		Material_SetFloat_m269(L_237, _stringLiteral38, L_238, /*hidden argument*/NULL);
		RenderTexture_t55 * L_239 = V_1;
		RenderTexture_t55 * L_240 = ___destination;
		Material_t5 * L_241 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m275(NULL /*static, unused*/, L_239, L_240, L_241, 1, /*hidden argument*/NULL);
		goto IL_08a8;
	}

IL_06c7:
	{
		int32_t L_242 = (__this->___filterType_6);
		if ((!(((uint32_t)L_242) == ((uint32_t)3))))
		{
			goto IL_07b9;
		}
	}
	{
		bool L_243 = V_5;
		if (L_243)
		{
			goto IL_07b9;
		}
	}
	{
		Material_t5 * L_244 = (__this->___dx11MotionBlurMaterial_22);
		float L_245 = (__this->___minVelocity_12);
		NullCheck(L_244);
		Material_SetFloat_m269(L_244, _stringLiteral30, L_245, /*hidden argument*/NULL);
		Material_t5 * L_246 = (__this->___dx11MotionBlurMaterial_22);
		float L_247 = (__this->___velocityScale_13);
		NullCheck(L_246);
		Material_SetFloat_m269(L_246, _stringLiteral31, L_247, /*hidden argument*/NULL);
		Material_t5 * L_248 = (__this->___dx11MotionBlurMaterial_22);
		float L_249 = (__this->___jitter_24);
		NullCheck(L_248);
		Material_SetFloat_m269(L_248, _stringLiteral32, L_249, /*hidden argument*/NULL);
		Material_t5 * L_250 = (__this->___dx11MotionBlurMaterial_22);
		Texture2D_t13 * L_251 = (__this->___noiseTexture_23);
		NullCheck(L_250);
		Material_SetTexture_m292(L_250, _stringLiteral33, L_251, /*hidden argument*/NULL);
		Material_t5 * L_252 = (__this->___dx11MotionBlurMaterial_22);
		RenderTexture_t55 * L_253 = V_1;
		NullCheck(L_252);
		Material_SetTexture_m292(L_252, _stringLiteral34, L_253, /*hidden argument*/NULL);
		Material_t5 * L_254 = (__this->___dx11MotionBlurMaterial_22);
		RenderTexture_t55 * L_255 = V_7;
		NullCheck(L_254);
		Material_SetTexture_m292(L_254, _stringLiteral35, L_255, /*hidden argument*/NULL);
		Material_t5 * L_256 = (__this->___dx11MotionBlurMaterial_22);
		float L_257 = (__this->___softZDistance_14);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_258 = Mathf_Max_m322(NULL /*static, unused*/, (0.00025f), L_257, /*hidden argument*/NULL);
		NullCheck(L_256);
		Material_SetFloat_m269(L_256, _stringLiteral39, L_258, /*hidden argument*/NULL);
		Material_t5 * L_259 = (__this->___dx11MotionBlurMaterial_22);
		float L_260 = V_4;
		NullCheck(L_259);
		Material_SetFloat_m269(L_259, _stringLiteral29, L_260, /*hidden argument*/NULL);
		RenderTexture_t55 * L_261 = V_1;
		RenderTexture_t55 * L_262 = V_6;
		Material_t5 * L_263 = (__this->___dx11MotionBlurMaterial_22);
		Graphics_Blit_m275(NULL /*static, unused*/, L_261, L_262, L_263, 0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_264 = V_6;
		RenderTexture_t55 * L_265 = V_7;
		Material_t5 * L_266 = (__this->___dx11MotionBlurMaterial_22);
		Graphics_Blit_m275(NULL /*static, unused*/, L_264, L_265, L_266, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_267 = ___source;
		RenderTexture_t55 * L_268 = ___destination;
		Material_t5 * L_269 = (__this->___dx11MotionBlurMaterial_22);
		Graphics_Blit_m275(NULL /*static, unused*/, L_267, L_268, L_269, 2, /*hidden argument*/NULL);
		goto IL_08a8;
	}

IL_07b9:
	{
		int32_t L_270 = (__this->___filterType_6);
		if ((((int32_t)L_270) == ((int32_t)2)))
		{
			goto IL_07cc;
		}
	}
	{
		bool L_271 = V_5;
		if (!L_271)
		{
			goto IL_081e;
		}
	}

IL_07cc:
	{
		Material_t5 * L_272 = (__this->___motionBlurMaterial_21);
		float L_273 = (__this->___softZDistance_14);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_274 = Mathf_Max_m322(NULL /*static, unused*/, (0.00025f), L_273, /*hidden argument*/NULL);
		NullCheck(L_272);
		Material_SetFloat_m269(L_272, _stringLiteral39, L_274, /*hidden argument*/NULL);
		RenderTexture_t55 * L_275 = V_1;
		RenderTexture_t55 * L_276 = V_6;
		Material_t5 * L_277 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m275(NULL /*static, unused*/, L_275, L_276, L_277, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_278 = V_6;
		RenderTexture_t55 * L_279 = V_7;
		Material_t5 * L_280 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m275(NULL /*static, unused*/, L_278, L_279, L_280, 3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_281 = ___source;
		RenderTexture_t55 * L_282 = ___destination;
		Material_t5 * L_283 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m275(NULL /*static, unused*/, L_281, L_282, L_283, 4, /*hidden argument*/NULL);
		goto IL_08a8;
	}

IL_081e:
	{
		int32_t L_284 = (__this->___filterType_6);
		if (L_284)
		{
			goto IL_083c;
		}
	}
	{
		RenderTexture_t55 * L_285 = ___source;
		RenderTexture_t55 * L_286 = ___destination;
		Material_t5 * L_287 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m275(NULL /*static, unused*/, L_285, L_286, L_287, 6, /*hidden argument*/NULL);
		goto IL_08a8;
	}

IL_083c:
	{
		int32_t L_288 = (__this->___filterType_6);
		if ((!(((uint32_t)L_288) == ((uint32_t)4))))
		{
			goto IL_089a;
		}
	}
	{
		Material_t5 * L_289 = (__this->___motionBlurMaterial_21);
		float L_290 = (__this->___softZDistance_14);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_291 = Mathf_Max_m322(NULL /*static, unused*/, (0.00025f), L_290, /*hidden argument*/NULL);
		NullCheck(L_289);
		Material_SetFloat_m269(L_289, _stringLiteral39, L_291, /*hidden argument*/NULL);
		RenderTexture_t55 * L_292 = V_1;
		RenderTexture_t55 * L_293 = V_6;
		Material_t5 * L_294 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m275(NULL /*static, unused*/, L_292, L_293, L_294, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_295 = V_6;
		RenderTexture_t55 * L_296 = V_7;
		Material_t5 * L_297 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m275(NULL /*static, unused*/, L_295, L_296, L_297, 3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_298 = ___source;
		RenderTexture_t55 * L_299 = ___destination;
		Material_t5 * L_300 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m275(NULL /*static, unused*/, L_298, L_299, L_300, 7, /*hidden argument*/NULL);
		goto IL_08a8;
	}

IL_089a:
	{
		RenderTexture_t55 * L_301 = ___source;
		RenderTexture_t55 * L_302 = ___destination;
		Material_t5 * L_303 = (__this->___motionBlurMaterial_21);
		Graphics_Blit_m275(NULL /*static, unused*/, L_301, L_302, L_303, 5, /*hidden argument*/NULL);
	}

IL_08a8:
	{
		RenderTexture_t55 * L_304 = V_1;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_304, /*hidden argument*/NULL);
		RenderTexture_t55 * L_305 = V_6;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_305, /*hidden argument*/NULL);
		RenderTexture_t55 * L_306 = V_7;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_306, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Remember()
extern "C" void CameraMotionBlur_Remember_m43 (CameraMotionBlur_t27 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t31  L_0 = (__this->___currentViewProjMat_27);
		__this->___prevViewProjMat_28 = L_0;
		Transform_t48 * L_1 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t28  L_2 = Transform_get_forward_m340(L_1, /*hidden argument*/NULL);
		__this->___prevFrameForward_31 = L_2;
		Transform_t48 * L_3 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t28  L_4 = Transform_get_up_m333(L_3, /*hidden argument*/NULL);
		__this->___prevFrameUp_32 = L_4;
		Transform_t48 * L_5 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t28  L_6 = Transform_get_position_m335(L_5, /*hidden argument*/NULL);
		__this->___prevFramePos_33 = L_6;
		return;
	}
}
// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::GetTmpCam()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern const Il2CppType* Camera_t32_0_0_0_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t105_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t30_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCamera_t32_m359_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral40;
extern Il2CppCodeGenString* _stringLiteral41;
extern "C" Camera_t32 * CameraMotionBlur_GetTmpCam_m44 (CameraMotionBlur_t27 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t32_0_0_0_var = il2cpp_codegen_type_from_index(1);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		TypeU5BU5D_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GameObject_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		GameObject_GetComponent_TisCamera_t32_m359_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		_stringLiteral40 = il2cpp_codegen_string_literal_from_index(40);
		_stringLiteral41 = il2cpp_codegen_string_literal_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	GameObject_t30 * V_1 = {0};
	{
		GameObject_t30 * L_0 = (__this->___tmpCam_17);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		Camera_t32 * L_2 = (__this->____camera_34);
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m348(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m349(NULL /*static, unused*/, _stringLiteral40, L_3, _stringLiteral41, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		GameObject_t30 * L_6 = GameObject_Find_m350(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		GameObject_t30 * L_7 = V_1;
		bool L_8 = Object_op_Equality_m295(NULL /*static, unused*/, (Object_t99 *)NULL, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_9 = V_0;
		TypeU5BU5D_t105* L_10 = ((TypeU5BU5D_t105*)SZArrayNew(TypeU5BU5D_t105_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(Camera_t32_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0, sizeof(Type_t *))) = (Type_t *)L_11;
		GameObject_t30 * L_12 = (GameObject_t30 *)il2cpp_codegen_object_new (GameObject_t30_il2cpp_TypeInfo_var);
		GameObject__ctor_m352(L_12, L_9, L_10, /*hidden argument*/NULL);
		__this->___tmpCam_17 = L_12;
		goto IL_006a;
	}

IL_0063:
	{
		GameObject_t30 * L_13 = V_1;
		__this->___tmpCam_17 = L_13;
	}

IL_006a:
	{
		GameObject_t30 * L_14 = (__this->___tmpCam_17);
		NullCheck(L_14);
		Object_set_hideFlags_m301(L_14, ((int32_t)52), /*hidden argument*/NULL);
		GameObject_t30 * L_15 = (__this->___tmpCam_17);
		NullCheck(L_15);
		Transform_t48 * L_16 = GameObject_get_transform_m353(L_15, /*hidden argument*/NULL);
		Camera_t32 * L_17 = (__this->____camera_34);
		NullCheck(L_17);
		Transform_t48 * L_18 = Component_get_transform_m332(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t28  L_19 = Transform_get_position_m335(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_m354(L_16, L_19, /*hidden argument*/NULL);
		GameObject_t30 * L_20 = (__this->___tmpCam_17);
		NullCheck(L_20);
		Transform_t48 * L_21 = GameObject_get_transform_m353(L_20, /*hidden argument*/NULL);
		Camera_t32 * L_22 = (__this->____camera_34);
		NullCheck(L_22);
		Transform_t48 * L_23 = Component_get_transform_m332(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Quaternion_t104  L_24 = Transform_get_rotation_m355(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_rotation_m356(L_21, L_24, /*hidden argument*/NULL);
		GameObject_t30 * L_25 = (__this->___tmpCam_17);
		NullCheck(L_25);
		Transform_t48 * L_26 = GameObject_get_transform_m353(L_25, /*hidden argument*/NULL);
		Camera_t32 * L_27 = (__this->____camera_34);
		NullCheck(L_27);
		Transform_t48 * L_28 = Component_get_transform_m332(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t28  L_29 = Transform_get_localScale_m357(L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localScale_m358(L_26, L_29, /*hidden argument*/NULL);
		GameObject_t30 * L_30 = (__this->___tmpCam_17);
		NullCheck(L_30);
		Camera_t32 * L_31 = GameObject_GetComponent_TisCamera_t32_m359(L_30, /*hidden argument*/GameObject_GetComponent_TisCamera_t32_m359_MethodInfo_var);
		Camera_t32 * L_32 = (__this->____camera_34);
		NullCheck(L_31);
		Camera_CopyFrom_m360(L_31, L_32, /*hidden argument*/NULL);
		GameObject_t30 * L_33 = (__this->___tmpCam_17);
		NullCheck(L_33);
		Camera_t32 * L_34 = GameObject_GetComponent_TisCamera_t32_m359(L_33, /*hidden argument*/GameObject_GetComponent_TisCamera_t32_m359_MethodInfo_var);
		NullCheck(L_34);
		Behaviour_set_enabled_m303(L_34, 0, /*hidden argument*/NULL);
		GameObject_t30 * L_35 = (__this->___tmpCam_17);
		NullCheck(L_35);
		Camera_t32 * L_36 = GameObject_GetComponent_TisCamera_t32_m359(L_35, /*hidden argument*/GameObject_GetComponent_TisCamera_t32_m359_MethodInfo_var);
		NullCheck(L_36);
		Camera_set_depthTextureMode_m320(L_36, 0, /*hidden argument*/NULL);
		GameObject_t30 * L_37 = (__this->___tmpCam_17);
		NullCheck(L_37);
		Camera_t32 * L_38 = GameObject_GetComponent_TisCamera_t32_m359(L_37, /*hidden argument*/GameObject_GetComponent_TisCamera_t32_m359_MethodInfo_var);
		NullCheck(L_38);
		Camera_set_clearFlags_m361(L_38, 4, /*hidden argument*/NULL);
		GameObject_t30 * L_39 = (__this->___tmpCam_17);
		NullCheck(L_39);
		Camera_t32 * L_40 = GameObject_GetComponent_TisCamera_t32_m359(L_39, /*hidden argument*/GameObject_GetComponent_TisCamera_t32_m359_MethodInfo_var);
		return L_40;
	}
}
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::StartFrame()
extern "C" void CameraMotionBlur_StartFrame_m45 (CameraMotionBlur_t27 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___prevFramePos_33);
		Transform_t48 * L_1 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t28  L_2 = Transform_get_position_m335(L_1, /*hidden argument*/NULL);
		Vector3_t28  L_3 = Vector3_Slerp_m362(NULL /*static, unused*/, L_0, L_2, (0.75f), /*hidden argument*/NULL);
		__this->___prevFramePos_33 = L_3;
		return;
	}
}
// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t CameraMotionBlur_divRoundUp_m46 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___d, const MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = ___d;
		int32_t L_2 = ___d;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1))-(int32_t)1))/(int32_t)L_2));
	}
}
// UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_21.h"
// UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_21MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.ColorCorrectionCurves
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_22.h"
// UnityStandardAssets.ImageEffects.ColorCorrectionCurves
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_22MethodDeclarations.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::.ctor()
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern TypeInfo* KeyframeU5BU5D_t106_il2cpp_TypeInfo_var;
extern TypeInfo* AnimationCurve_t35_il2cpp_TypeInfo_var;
extern "C" void ColorCorrectionCurves__ctor_m47 (ColorCorrectionCurves_t34 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyframeU5BU5D_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		AnimationCurve_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeyframeU5BU5D_t106* L_0 = ((KeyframeU5BU5D_t106*)SZArrayNew(KeyframeU5BU5D_t106_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Keyframe_t107  L_1 = {0};
		Keyframe__ctor_m364(&L_1, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_0, 0, sizeof(Keyframe_t107 ))) = L_1;
		KeyframeU5BU5D_t106* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Keyframe_t107  L_3 = {0};
		Keyframe__ctor_m364(&L_3, (1.0f), (1.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_2, 1, sizeof(Keyframe_t107 ))) = L_3;
		AnimationCurve_t35 * L_4 = (AnimationCurve_t35 *)il2cpp_codegen_object_new (AnimationCurve_t35_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m365(L_4, L_2, /*hidden argument*/NULL);
		__this->___redChannel_5 = L_4;
		KeyframeU5BU5D_t106* L_5 = ((KeyframeU5BU5D_t106*)SZArrayNew(KeyframeU5BU5D_t106_il2cpp_TypeInfo_var, 2));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		Keyframe_t107  L_6 = {0};
		Keyframe__ctor_m364(&L_6, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_5, 0, sizeof(Keyframe_t107 ))) = L_6;
		KeyframeU5BU5D_t106* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		Keyframe_t107  L_8 = {0};
		Keyframe__ctor_m364(&L_8, (1.0f), (1.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_7, 1, sizeof(Keyframe_t107 ))) = L_8;
		AnimationCurve_t35 * L_9 = (AnimationCurve_t35 *)il2cpp_codegen_object_new (AnimationCurve_t35_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m365(L_9, L_7, /*hidden argument*/NULL);
		__this->___greenChannel_6 = L_9;
		KeyframeU5BU5D_t106* L_10 = ((KeyframeU5BU5D_t106*)SZArrayNew(KeyframeU5BU5D_t106_il2cpp_TypeInfo_var, 2));
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		Keyframe_t107  L_11 = {0};
		Keyframe__ctor_m364(&L_11, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_10, 0, sizeof(Keyframe_t107 ))) = L_11;
		KeyframeU5BU5D_t106* L_12 = L_10;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		Keyframe_t107  L_13 = {0};
		Keyframe__ctor_m364(&L_13, (1.0f), (1.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_12, 1, sizeof(Keyframe_t107 ))) = L_13;
		AnimationCurve_t35 * L_14 = (AnimationCurve_t35 *)il2cpp_codegen_object_new (AnimationCurve_t35_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m365(L_14, L_12, /*hidden argument*/NULL);
		__this->___blueChannel_7 = L_14;
		KeyframeU5BU5D_t106* L_15 = ((KeyframeU5BU5D_t106*)SZArrayNew(KeyframeU5BU5D_t106_il2cpp_TypeInfo_var, 2));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		Keyframe_t107  L_16 = {0};
		Keyframe__ctor_m364(&L_16, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_15, 0, sizeof(Keyframe_t107 ))) = L_16;
		KeyframeU5BU5D_t106* L_17 = L_15;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		Keyframe_t107  L_18 = {0};
		Keyframe__ctor_m364(&L_18, (1.0f), (1.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_17, 1, sizeof(Keyframe_t107 ))) = L_18;
		AnimationCurve_t35 * L_19 = (AnimationCurve_t35 *)il2cpp_codegen_object_new (AnimationCurve_t35_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m365(L_19, L_17, /*hidden argument*/NULL);
		__this->___zCurve_9 = L_19;
		KeyframeU5BU5D_t106* L_20 = ((KeyframeU5BU5D_t106*)SZArrayNew(KeyframeU5BU5D_t106_il2cpp_TypeInfo_var, 2));
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		Keyframe_t107  L_21 = {0};
		Keyframe__ctor_m364(&L_21, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_20, 0, sizeof(Keyframe_t107 ))) = L_21;
		KeyframeU5BU5D_t106* L_22 = L_20;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 1);
		Keyframe_t107  L_23 = {0};
		Keyframe__ctor_m364(&L_23, (1.0f), (1.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_22, 1, sizeof(Keyframe_t107 ))) = L_23;
		AnimationCurve_t35 * L_24 = (AnimationCurve_t35 *)il2cpp_codegen_object_new (AnimationCurve_t35_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m365(L_24, L_22, /*hidden argument*/NULL);
		__this->___depthRedChannel_10 = L_24;
		KeyframeU5BU5D_t106* L_25 = ((KeyframeU5BU5D_t106*)SZArrayNew(KeyframeU5BU5D_t106_il2cpp_TypeInfo_var, 2));
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		Keyframe_t107  L_26 = {0};
		Keyframe__ctor_m364(&L_26, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_25, 0, sizeof(Keyframe_t107 ))) = L_26;
		KeyframeU5BU5D_t106* L_27 = L_25;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 1);
		Keyframe_t107  L_28 = {0};
		Keyframe__ctor_m364(&L_28, (1.0f), (1.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_27, 1, sizeof(Keyframe_t107 ))) = L_28;
		AnimationCurve_t35 * L_29 = (AnimationCurve_t35 *)il2cpp_codegen_object_new (AnimationCurve_t35_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m365(L_29, L_27, /*hidden argument*/NULL);
		__this->___depthGreenChannel_11 = L_29;
		KeyframeU5BU5D_t106* L_30 = ((KeyframeU5BU5D_t106*)SZArrayNew(KeyframeU5BU5D_t106_il2cpp_TypeInfo_var, 2));
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 0);
		Keyframe_t107  L_31 = {0};
		Keyframe__ctor_m364(&L_31, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_30, 0, sizeof(Keyframe_t107 ))) = L_31;
		KeyframeU5BU5D_t106* L_32 = L_30;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		Keyframe_t107  L_33 = {0};
		Keyframe__ctor_m364(&L_33, (1.0f), (1.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_32, 1, sizeof(Keyframe_t107 ))) = L_33;
		AnimationCurve_t35 * L_34 = (AnimationCurve_t35 *)il2cpp_codegen_object_new (AnimationCurve_t35_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m365(L_34, L_32, /*hidden argument*/NULL);
		__this->___depthBlueChannel_12 = L_34;
		__this->___saturation_19 = (1.0f);
		Color_t12  L_35 = Color_get_white_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___selectiveFromColor_21 = L_35;
		Color_t12  L_36 = Color_get_white_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___selectiveToColor_22 = L_36;
		__this->___updateTextures_24 = 1;
		__this->___updateTexturesOnStartup_28 = 1;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::Start()
extern "C" void ColorCorrectionCurves_Start_m48 (ColorCorrectionCurves_t34 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_Start_m150(__this, /*hidden argument*/NULL);
		__this->___updateTexturesOnStartup_28 = 1;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::Awake()
extern "C" void ColorCorrectionCurves_Awake_m49 (ColorCorrectionCurves_t34 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::CheckResources()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern TypeInfo* Texture2D_t13_il2cpp_TypeInfo_var;
extern "C" bool ColorCorrectionCurves_CheckResources_m50 (ColorCorrectionCurves_t34 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___mode_23);
		PostEffectsBase_CheckSupport_m151(__this, ((((int32_t)L_0) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		Shader_t4 * L_1 = (__this->___simpleColorCorrectionCurvesShader_26);
		Material_t5 * L_2 = (__this->___ccMaterial_13);
		Material_t5 * L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_1, L_2, /*hidden argument*/NULL);
		__this->___ccMaterial_13 = L_3;
		Shader_t4 * L_4 = (__this->___colorCorrectionCurvesShader_25);
		Material_t5 * L_5 = (__this->___ccDepthMaterial_14);
		Material_t5 * L_6 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_4, L_5, /*hidden argument*/NULL);
		__this->___ccDepthMaterial_14 = L_6;
		Shader_t4 * L_7 = (__this->___colorCorrectionSelectiveShader_27);
		Material_t5 * L_8 = (__this->___selectiveCcMaterial_15);
		Material_t5 * L_9 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_7, L_8, /*hidden argument*/NULL);
		__this->___selectiveCcMaterial_15 = L_9;
		Texture2D_t13 * L_10 = (__this->___rgbChannelTex_16);
		bool L_11 = Object_op_Implicit_m294(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_007c;
		}
	}
	{
		Texture2D_t13 * L_12 = (Texture2D_t13 *)il2cpp_codegen_object_new (Texture2D_t13_il2cpp_TypeInfo_var);
		Texture2D__ctor_m366(L_12, ((int32_t)256), 4, 5, 0, 1, /*hidden argument*/NULL);
		__this->___rgbChannelTex_16 = L_12;
	}

IL_007c:
	{
		Texture2D_t13 * L_13 = (__this->___rgbDepthChannelTex_17);
		bool L_14 = Object_op_Implicit_m294(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00a0;
		}
	}
	{
		Texture2D_t13 * L_15 = (Texture2D_t13 *)il2cpp_codegen_object_new (Texture2D_t13_il2cpp_TypeInfo_var);
		Texture2D__ctor_m366(L_15, ((int32_t)256), 4, 5, 0, 1, /*hidden argument*/NULL);
		__this->___rgbDepthChannelTex_17 = L_15;
	}

IL_00a0:
	{
		Texture2D_t13 * L_16 = (__this->___zCurveTex_18);
		bool L_17 = Object_op_Implicit_m294(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00c4;
		}
	}
	{
		Texture2D_t13 * L_18 = (Texture2D_t13 *)il2cpp_codegen_object_new (Texture2D_t13_il2cpp_TypeInfo_var);
		Texture2D__ctor_m366(L_18, ((int32_t)256), 1, 5, 0, 1, /*hidden argument*/NULL);
		__this->___zCurveTex_18 = L_18;
	}

IL_00c4:
	{
		Texture2D_t13 * L_19 = (__this->___rgbChannelTex_16);
		NullCheck(L_19);
		Object_set_hideFlags_m301(L_19, ((int32_t)52), /*hidden argument*/NULL);
		Texture2D_t13 * L_20 = (__this->___rgbDepthChannelTex_17);
		NullCheck(L_20);
		Object_set_hideFlags_m301(L_20, ((int32_t)52), /*hidden argument*/NULL);
		Texture2D_t13 * L_21 = (__this->___zCurveTex_18);
		NullCheck(L_21);
		Object_set_hideFlags_m301(L_21, ((int32_t)52), /*hidden argument*/NULL);
		Texture2D_t13 * L_22 = (__this->___rgbChannelTex_16);
		NullCheck(L_22);
		Texture_set_wrapMode_m324(L_22, 1, /*hidden argument*/NULL);
		Texture2D_t13 * L_23 = (__this->___rgbDepthChannelTex_17);
		NullCheck(L_23);
		Texture_set_wrapMode_m324(L_23, 1, /*hidden argument*/NULL);
		Texture2D_t13 * L_24 = (__this->___zCurveTex_18);
		NullCheck(L_24);
		Texture_set_wrapMode_m324(L_24, 1, /*hidden argument*/NULL);
		bool L_25 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_25)
		{
			goto IL_0120;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0120:
	{
		bool L_26 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_26;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::UpdateParameters()
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void ColorCorrectionCurves_UpdateParameters_m51 (ColorCorrectionCurves_t34 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::CheckResources() */, __this);
		AnimationCurve_t35 * L_0 = (__this->___redChannel_5);
		if (!L_0)
		{
			goto IL_0216;
		}
	}
	{
		AnimationCurve_t35 * L_1 = (__this->___greenChannel_6);
		if (!L_1)
		{
			goto IL_0216;
		}
	}
	{
		AnimationCurve_t35 * L_2 = (__this->___blueChannel_7);
		if (!L_2)
		{
			goto IL_0216;
		}
	}
	{
		V_0 = (0.0f);
		goto IL_01ea;
	}

IL_0033:
	{
		AnimationCurve_t35 * L_3 = (__this->___redChannel_5);
		float L_4 = V_0;
		NullCheck(L_3);
		float L_5 = AnimationCurve_Evaluate_m367(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Clamp_m368(NULL /*static, unused*/, L_5, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_6;
		AnimationCurve_t35 * L_7 = (__this->___greenChannel_6);
		float L_8 = V_0;
		NullCheck(L_7);
		float L_9 = AnimationCurve_Evaluate_m367(L_7, L_8, /*hidden argument*/NULL);
		float L_10 = Mathf_Clamp_m368(NULL /*static, unused*/, L_9, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_10;
		AnimationCurve_t35 * L_11 = (__this->___blueChannel_7);
		float L_12 = V_0;
		NullCheck(L_11);
		float L_13 = AnimationCurve_Evaluate_m367(L_11, L_12, /*hidden argument*/NULL);
		float L_14 = Mathf_Clamp_m368(NULL /*static, unused*/, L_13, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_3 = L_14;
		Texture2D_t13 * L_15 = (__this->___rgbChannelTex_16);
		float L_16 = V_0;
		float L_17 = floorf(((float)((float)L_16*(float)(255.0f))));
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_1;
		Color_t12  L_21 = {0};
		Color__ctor_m369(&L_21, L_18, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		Texture2D_SetPixel_m370(L_15, (((int32_t)L_17)), 0, L_21, /*hidden argument*/NULL);
		Texture2D_t13 * L_22 = (__this->___rgbChannelTex_16);
		float L_23 = V_0;
		float L_24 = floorf(((float)((float)L_23*(float)(255.0f))));
		float L_25 = V_2;
		float L_26 = V_2;
		float L_27 = V_2;
		Color_t12  L_28 = {0};
		Color__ctor_m369(&L_28, L_25, L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_22);
		Texture2D_SetPixel_m370(L_22, (((int32_t)L_24)), 1, L_28, /*hidden argument*/NULL);
		Texture2D_t13 * L_29 = (__this->___rgbChannelTex_16);
		float L_30 = V_0;
		float L_31 = floorf(((float)((float)L_30*(float)(255.0f))));
		float L_32 = V_3;
		float L_33 = V_3;
		float L_34 = V_3;
		Color_t12  L_35 = {0};
		Color__ctor_m369(&L_35, L_32, L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_29);
		Texture2D_SetPixel_m370(L_29, (((int32_t)L_31)), 2, L_35, /*hidden argument*/NULL);
		AnimationCurve_t35 * L_36 = (__this->___zCurve_9);
		float L_37 = V_0;
		NullCheck(L_36);
		float L_38 = AnimationCurve_Evaluate_m367(L_36, L_37, /*hidden argument*/NULL);
		float L_39 = Mathf_Clamp_m368(NULL /*static, unused*/, L_38, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_4 = L_39;
		Texture2D_t13 * L_40 = (__this->___zCurveTex_18);
		float L_41 = V_0;
		float L_42 = floorf(((float)((float)L_41*(float)(255.0f))));
		float L_43 = V_4;
		float L_44 = V_4;
		float L_45 = V_4;
		Color_t12  L_46 = {0};
		Color__ctor_m369(&L_46, L_43, L_44, L_45, /*hidden argument*/NULL);
		NullCheck(L_40);
		Texture2D_SetPixel_m370(L_40, (((int32_t)L_42)), 0, L_46, /*hidden argument*/NULL);
		AnimationCurve_t35 * L_47 = (__this->___depthRedChannel_10);
		float L_48 = V_0;
		NullCheck(L_47);
		float L_49 = AnimationCurve_Evaluate_m367(L_47, L_48, /*hidden argument*/NULL);
		float L_50 = Mathf_Clamp_m368(NULL /*static, unused*/, L_49, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_50;
		AnimationCurve_t35 * L_51 = (__this->___depthGreenChannel_11);
		float L_52 = V_0;
		NullCheck(L_51);
		float L_53 = AnimationCurve_Evaluate_m367(L_51, L_52, /*hidden argument*/NULL);
		float L_54 = Mathf_Clamp_m368(NULL /*static, unused*/, L_53, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_54;
		AnimationCurve_t35 * L_55 = (__this->___depthBlueChannel_12);
		float L_56 = V_0;
		NullCheck(L_55);
		float L_57 = AnimationCurve_Evaluate_m367(L_55, L_56, /*hidden argument*/NULL);
		float L_58 = Mathf_Clamp_m368(NULL /*static, unused*/, L_57, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_3 = L_58;
		Texture2D_t13 * L_59 = (__this->___rgbDepthChannelTex_17);
		float L_60 = V_0;
		float L_61 = floorf(((float)((float)L_60*(float)(255.0f))));
		float L_62 = V_1;
		float L_63 = V_1;
		float L_64 = V_1;
		Color_t12  L_65 = {0};
		Color__ctor_m369(&L_65, L_62, L_63, L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		Texture2D_SetPixel_m370(L_59, (((int32_t)L_61)), 0, L_65, /*hidden argument*/NULL);
		Texture2D_t13 * L_66 = (__this->___rgbDepthChannelTex_17);
		float L_67 = V_0;
		float L_68 = floorf(((float)((float)L_67*(float)(255.0f))));
		float L_69 = V_2;
		float L_70 = V_2;
		float L_71 = V_2;
		Color_t12  L_72 = {0};
		Color__ctor_m369(&L_72, L_69, L_70, L_71, /*hidden argument*/NULL);
		NullCheck(L_66);
		Texture2D_SetPixel_m370(L_66, (((int32_t)L_68)), 1, L_72, /*hidden argument*/NULL);
		Texture2D_t13 * L_73 = (__this->___rgbDepthChannelTex_17);
		float L_74 = V_0;
		float L_75 = floorf(((float)((float)L_74*(float)(255.0f))));
		float L_76 = V_3;
		float L_77 = V_3;
		float L_78 = V_3;
		Color_t12  L_79 = {0};
		Color__ctor_m369(&L_79, L_76, L_77, L_78, /*hidden argument*/NULL);
		NullCheck(L_73);
		Texture2D_SetPixel_m370(L_73, (((int32_t)L_75)), 2, L_79, /*hidden argument*/NULL);
		float L_80 = V_0;
		V_0 = ((float)((float)L_80+(float)(0.003921569f)));
	}

IL_01ea:
	{
		float L_81 = V_0;
		if ((((float)L_81) <= ((float)(1.0f))))
		{
			goto IL_0033;
		}
	}
	{
		Texture2D_t13 * L_82 = (__this->___rgbChannelTex_16);
		NullCheck(L_82);
		Texture2D_Apply_m371(L_82, /*hidden argument*/NULL);
		Texture2D_t13 * L_83 = (__this->___rgbDepthChannelTex_17);
		NullCheck(L_83);
		Texture2D_Apply_m371(L_83, /*hidden argument*/NULL);
		Texture2D_t13 * L_84 = (__this->___zCurveTex_18);
		NullCheck(L_84);
		Texture2D_Apply_m371(L_84, /*hidden argument*/NULL);
	}

IL_0216:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::UpdateTextures()
// UnityStandardAssets.ImageEffects.ColorCorrectionCurves
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_22MethodDeclarations.h"
extern "C" void ColorCorrectionCurves_UpdateTextures_m52 (ColorCorrectionCurves_t34 * __this, const MethodInfo* method)
{
	{
		ColorCorrectionCurves_UpdateParameters_m51(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral42;
extern Il2CppCodeGenString* _stringLiteral43;
extern Il2CppCodeGenString* _stringLiteral44;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral45;
extern Il2CppCodeGenString* _stringLiteral46;
extern "C" void ColorCorrectionCurves_OnRenderImage_m53 (ColorCorrectionCurves_t34 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral42 = il2cpp_codegen_string_literal_from_index(42);
		_stringLiteral43 = il2cpp_codegen_string_literal_from_index(43);
		_stringLiteral44 = il2cpp_codegen_string_literal_from_index(44);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t55 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		bool L_3 = (__this->___updateTexturesOnStartup_28);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		ColorCorrectionCurves_UpdateParameters_m51(__this, /*hidden argument*/NULL);
		__this->___updateTexturesOnStartup_28 = 0;
	}

IL_002b:
	{
		bool L_4 = (__this->___useDepthCorrection_8);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		Camera_t32 * L_5 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		Camera_t32 * L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = Camera_get_depthTextureMode_m319(L_6, /*hidden argument*/NULL);
		NullCheck(L_6);
		Camera_set_depthTextureMode_m320(L_6, ((int32_t)((int32_t)L_7|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0049:
	{
		RenderTexture_t55 * L_8 = ___destination;
		V_0 = L_8;
		bool L_9 = (__this->___selectiveCc_20);
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		RenderTexture_t55 * L_10 = ___source;
		NullCheck(L_10);
		int32_t L_11 = RenderTexture_get_width_m272(L_10, /*hidden argument*/NULL);
		RenderTexture_t55 * L_12 = ___source;
		NullCheck(L_12);
		int32_t L_13 = RenderTexture_get_height_m273(L_12, /*hidden argument*/NULL);
		RenderTexture_t55 * L_14 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0068:
	{
		bool L_15 = (__this->___useDepthCorrection_8);
		if (!L_15)
		{
			goto IL_00dd;
		}
	}
	{
		Material_t5 * L_16 = (__this->___ccDepthMaterial_14);
		Texture2D_t13 * L_17 = (__this->___rgbChannelTex_16);
		NullCheck(L_16);
		Material_SetTexture_m292(L_16, _stringLiteral42, L_17, /*hidden argument*/NULL);
		Material_t5 * L_18 = (__this->___ccDepthMaterial_14);
		Texture2D_t13 * L_19 = (__this->___zCurveTex_18);
		NullCheck(L_18);
		Material_SetTexture_m292(L_18, _stringLiteral43, L_19, /*hidden argument*/NULL);
		Material_t5 * L_20 = (__this->___ccDepthMaterial_14);
		Texture2D_t13 * L_21 = (__this->___rgbDepthChannelTex_17);
		NullCheck(L_20);
		Material_SetTexture_m292(L_20, _stringLiteral44, L_21, /*hidden argument*/NULL);
		Material_t5 * L_22 = (__this->___ccDepthMaterial_14);
		float L_23 = (__this->___saturation_19);
		NullCheck(L_22);
		Material_SetFloat_m269(L_22, _stringLiteral8, L_23, /*hidden argument*/NULL);
		RenderTexture_t55 * L_24 = ___source;
		RenderTexture_t55 * L_25 = V_0;
		Material_t5 * L_26 = (__this->___ccDepthMaterial_14);
		Graphics_Blit_m270(NULL /*static, unused*/, L_24, L_25, L_26, /*hidden argument*/NULL);
		goto IL_0116;
	}

IL_00dd:
	{
		Material_t5 * L_27 = (__this->___ccMaterial_13);
		Texture2D_t13 * L_28 = (__this->___rgbChannelTex_16);
		NullCheck(L_27);
		Material_SetTexture_m292(L_27, _stringLiteral42, L_28, /*hidden argument*/NULL);
		Material_t5 * L_29 = (__this->___ccMaterial_13);
		float L_30 = (__this->___saturation_19);
		NullCheck(L_29);
		Material_SetFloat_m269(L_29, _stringLiteral8, L_30, /*hidden argument*/NULL);
		RenderTexture_t55 * L_31 = ___source;
		RenderTexture_t55 * L_32 = V_0;
		Material_t5 * L_33 = (__this->___ccMaterial_13);
		Graphics_Blit_m270(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/NULL);
	}

IL_0116:
	{
		bool L_34 = (__this->___selectiveCc_20);
		if (!L_34)
		{
			goto IL_0160;
		}
	}
	{
		Material_t5 * L_35 = (__this->___selectiveCcMaterial_15);
		Color_t12  L_36 = (__this->___selectiveFromColor_21);
		NullCheck(L_35);
		Material_SetColor_m372(L_35, _stringLiteral45, L_36, /*hidden argument*/NULL);
		Material_t5 * L_37 = (__this->___selectiveCcMaterial_15);
		Color_t12  L_38 = (__this->___selectiveToColor_22);
		NullCheck(L_37);
		Material_SetColor_m372(L_37, _stringLiteral46, L_38, /*hidden argument*/NULL);
		RenderTexture_t55 * L_39 = V_0;
		RenderTexture_t55 * L_40 = ___destination;
		Material_t5 * L_41 = (__this->___selectiveCcMaterial_15);
		Graphics_Blit_m270(NULL /*static, unused*/, L_39, L_40, L_41, /*hidden argument*/NULL);
		RenderTexture_t55 * L_42 = V_0;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
	}

IL_0160:
	{
		return;
	}
}
// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_23.h"
// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_23MethodDeclarations.h"
// UnityEngine.Texture3D
#include "UnityEngine_UnityEngine_Texture3D.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpace.h"
// UnityEngine.Texture3D
#include "UnityEngine_UnityEngine_Texture3DMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettingsMethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ColorCorrectionLookup__ctor_m54 (ColorCorrectionLookup_t36 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___basedOnTempTex_8 = L_0;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::CheckResources()
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
extern "C" bool ColorCorrectionLookup_CheckResources_m55 (ColorCorrectionLookup_t36 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___shader_5);
		Material_t5 * L_1 = (__this->___material_6);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___material_6 = L_2;
		bool L_3 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		bool L_4 = SystemInfo_get_supports3DTextures_m373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}

IL_0035:
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_003b:
	{
		bool L_5 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDisable()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void ColorCorrectionLookup_OnDisable_m56 (ColorCorrectionLookup_t36 * __this, const MethodInfo* method)
{
	{
		Material_t5 * L_0 = (__this->___material_6);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Material_t5 * L_2 = (__this->___material_6);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___material_6 = (Material_t5 *)NULL;
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDestroy()
extern "C" void ColorCorrectionLookup_OnDestroy_m57 (ColorCorrectionLookup_t36 * __this, const MethodInfo* method)
{
	{
		Texture3D_t37 * L_0 = (__this->___converted3DLut_7);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Texture3D_t37 * L_2 = (__this->___converted3DLut_7);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		__this->___converted3DLut_7 = (Texture3D_t37 *)NULL;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::SetIdentityLut()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Texture3D
#include "UnityEngine_UnityEngine_Texture3DMethodDeclarations.h"
extern TypeInfo* ColorU5BU5D_t108_il2cpp_TypeInfo_var;
extern TypeInfo* Texture3D_t37_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ColorCorrectionLookup_SetIdentityLut_m58 (ColorCorrectionLookup_t36 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ColorU5BU5D_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Texture3D_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ColorU5BU5D_t108* V_1 = {0};
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = ((int32_t)16);
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		V_1 = ((ColorU5BU5D_t108*)SZArrayNew(ColorU5BU5D_t108_il2cpp_TypeInfo_var, ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)L_1))*(int32_t)L_2))));
		int32_t L_3 = V_0;
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)(1.0f)*(float)(((float)L_3))))-(float)(1.0f)))));
		V_3 = 0;
		goto IL_009c;
	}

IL_002a:
	{
		V_4 = 0;
		goto IL_0090;
	}

IL_0032:
	{
		V_5 = 0;
		goto IL_0082;
	}

IL_003a:
	{
		ColorU5BU5D_t108* L_4 = V_1;
		int32_t L_5 = V_3;
		int32_t L_6 = V_4;
		int32_t L_7 = V_0;
		int32_t L_8 = V_5;
		int32_t L_9 = V_0;
		int32_t L_10 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_5+(int32_t)((int32_t)((int32_t)L_6*(int32_t)L_7))))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8*(int32_t)L_9))*(int32_t)L_10)))));
		int32_t L_11 = V_3;
		float L_12 = V_2;
		int32_t L_13 = V_4;
		float L_14 = V_2;
		int32_t L_15 = V_5;
		float L_16 = V_2;
		Color_t12  L_17 = {0};
		Color__ctor_m278(&L_17, ((float)((float)((float)((float)(((float)L_11))*(float)(1.0f)))*(float)L_12)), ((float)((float)((float)((float)(((float)L_13))*(float)(1.0f)))*(float)L_14)), ((float)((float)((float)((float)(((float)L_15))*(float)(1.0f)))*(float)L_16)), (1.0f), /*hidden argument*/NULL);
		*((Color_t12 *)(Color_t12 *)SZArrayLdElema(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_5+(int32_t)((int32_t)((int32_t)L_6*(int32_t)L_7))))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8*(int32_t)L_9))*(int32_t)L_10)))), sizeof(Color_t12 ))) = L_17;
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0082:
	{
		int32_t L_19 = V_5;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0090:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_009c:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_002a;
		}
	}
	{
		Texture3D_t37 * L_27 = (__this->___converted3DLut_7);
		bool L_28 = Object_op_Implicit_m294(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00be;
		}
	}
	{
		Texture3D_t37 * L_29 = (__this->___converted3DLut_7);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
	}

IL_00be:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_0;
		int32_t L_32 = V_0;
		Texture3D_t37 * L_33 = (Texture3D_t37 *)il2cpp_codegen_object_new (Texture3D_t37_il2cpp_TypeInfo_var);
		Texture3D__ctor_m374(L_33, L_30, L_31, L_32, 5, 0, /*hidden argument*/NULL);
		__this->___converted3DLut_7 = L_33;
		Texture3D_t37 * L_34 = (__this->___converted3DLut_7);
		ColorU5BU5D_t108* L_35 = V_1;
		NullCheck(L_34);
		Texture3D_SetPixels_m375(L_34, L_35, /*hidden argument*/NULL);
		Texture3D_t37 * L_36 = (__this->___converted3DLut_7);
		NullCheck(L_36);
		Texture3D_Apply_m376(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___basedOnTempTex_8 = L_37;
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::ValidDimensions(UnityEngine.Texture2D)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" bool ColorCorrectionLookup_ValidDimensions_m59 (ColorCorrectionLookup_t36 * __this, Texture2D_t13 * ___tex2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Texture2D_t13 * L_0 = ___tex2d;
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Texture2D_t13 * L_2 = ___tex2d;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		Texture2D_t13 * L_5 = ___tex2d;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_7 = sqrtf((((float)L_6)));
		int32_t L_8 = Mathf_FloorToInt_m377(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)L_8)))
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		return 1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::Convert(UnityEngine.Texture2D,System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_23MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ColorU5BU5D_t108_il2cpp_TypeInfo_var;
extern TypeInfo* Texture3D_t37_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral47;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral49;
extern "C" void ColorCorrectionLookup_Convert_m60 (ColorCorrectionLookup_t36 * __this, Texture2D_t13 * ___temp2DTex, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ColorU5BU5D_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Texture3D_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		_stringLiteral47 = il2cpp_codegen_string_literal_from_index(47);
		_stringLiteral48 = il2cpp_codegen_string_literal_from_index(48);
		_stringLiteral49 = il2cpp_codegen_string_literal_from_index(49);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ColorU5BU5D_t108* V_1 = {0};
	ColorU5BU5D_t108* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		Texture2D_t13 * L_0 = ___temp2DTex;
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0126;
		}
	}
	{
		Texture2D_t13 * L_2 = ___temp2DTex;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_t13 * L_4 = ___temp2DTex;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		V_0 = ((int32_t)((int32_t)L_3*(int32_t)L_5));
		Texture2D_t13 * L_6 = ___temp2DTex;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		V_0 = L_7;
		Texture2D_t13 * L_8 = ___temp2DTex;
		bool L_9 = ColorCorrectionLookup_ValidDimensions_m59(__this, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0052;
		}
	}
	{
		Texture2D_t13 * L_10 = ___temp2DTex;
		NullCheck(L_10);
		String_t* L_11 = Object_get_name_m348(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m349(NULL /*static, unused*/, _stringLiteral47, L_11, _stringLiteral48, /*hidden argument*/NULL);
		Debug_LogWarning_m378(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___basedOnTempTex_8 = L_13;
		return;
	}

IL_0052:
	{
		Texture2D_t13 * L_14 = ___temp2DTex;
		NullCheck(L_14);
		ColorU5BU5D_t108* L_15 = Texture2D_GetPixels_m379(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		ColorU5BU5D_t108* L_16 = V_1;
		NullCheck(L_16);
		V_2 = ((ColorU5BU5D_t108*)SZArrayNew(ColorU5BU5D_t108_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_16)->max_length)))));
		V_3 = 0;
		goto IL_00d1;
	}

IL_0069:
	{
		V_4 = 0;
		goto IL_00c5;
	}

IL_0071:
	{
		V_5 = 0;
		goto IL_00b7;
	}

IL_0079:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_4;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_17-(int32_t)L_18))-(int32_t)1));
		ColorU5BU5D_t108* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_5;
		int32_t L_24 = V_0;
		int32_t L_25 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)((int32_t)((int32_t)((int32_t)L_20+(int32_t)((int32_t)((int32_t)L_21*(int32_t)L_22))))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_23*(int32_t)L_24))*(int32_t)L_25)))));
		ColorU5BU5D_t108* L_26 = V_1;
		int32_t L_27 = V_5;
		int32_t L_28 = V_0;
		int32_t L_29 = V_3;
		int32_t L_30 = V_6;
		int32_t L_31 = V_0;
		int32_t L_32 = V_0;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)L_28))+(int32_t)L_29))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)L_31))*(int32_t)L_32)))));
		*((Color_t12 *)(Color_t12 *)SZArrayLdElema(L_19, ((int32_t)((int32_t)((int32_t)((int32_t)L_20+(int32_t)((int32_t)((int32_t)L_21*(int32_t)L_22))))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_23*(int32_t)L_24))*(int32_t)L_25)))), sizeof(Color_t12 ))) = (*(Color_t12 *)((Color_t12 *)(Color_t12 *)SZArrayLdElema(L_26, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)L_28))+(int32_t)L_29))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)L_31))*(int32_t)L_32)))), sizeof(Color_t12 ))));
		int32_t L_33 = V_5;
		V_5 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_00b7:
	{
		int32_t L_34 = V_5;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00c5:
	{
		int32_t L_37 = V_4;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_39 = V_3;
		V_3 = ((int32_t)((int32_t)L_39+(int32_t)1));
	}

IL_00d1:
	{
		int32_t L_40 = V_3;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0069;
		}
	}
	{
		Texture3D_t37 * L_42 = (__this->___converted3DLut_7);
		bool L_43 = Object_op_Implicit_m294(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_00f3;
		}
	}
	{
		Texture3D_t37 * L_44 = (__this->___converted3DLut_7);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		int32_t L_45 = V_0;
		int32_t L_46 = V_0;
		int32_t L_47 = V_0;
		Texture3D_t37 * L_48 = (Texture3D_t37 *)il2cpp_codegen_object_new (Texture3D_t37_il2cpp_TypeInfo_var);
		Texture3D__ctor_m374(L_48, L_45, L_46, L_47, 5, 0, /*hidden argument*/NULL);
		__this->___converted3DLut_7 = L_48;
		Texture3D_t37 * L_49 = (__this->___converted3DLut_7);
		ColorU5BU5D_t108* L_50 = V_2;
		NullCheck(L_49);
		Texture3D_SetPixels_m375(L_49, L_50, /*hidden argument*/NULL);
		Texture3D_t37 * L_51 = (__this->___converted3DLut_7);
		NullCheck(L_51);
		Texture3D_Apply_m376(L_51, /*hidden argument*/NULL);
		String_t* L_52 = ___path;
		__this->___basedOnTempTex_8 = L_52;
		goto IL_0130;
	}

IL_0126:
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral49, /*hidden argument*/NULL);
	}

IL_0130:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettingsMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral50;
extern Il2CppCodeGenString* _stringLiteral51;
extern Il2CppCodeGenString* _stringLiteral52;
extern "C" void ColorCorrectionLookup_OnRenderImage_m61 (ColorCorrectionLookup_t36 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral50 = il2cpp_codegen_string_literal_from_index(50);
		_stringLiteral51 = il2cpp_codegen_string_literal_from_index(51);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Material_t5 * G_B7_0 = {0};
	RenderTexture_t55 * G_B7_1 = {0};
	RenderTexture_t55 * G_B7_2 = {0};
	Material_t5 * G_B6_0 = {0};
	RenderTexture_t55 * G_B6_1 = {0};
	RenderTexture_t55 * G_B6_2 = {0};
	int32_t G_B8_0 = 0;
	Material_t5 * G_B8_1 = {0};
	RenderTexture_t55 * G_B8_2 = {0};
	RenderTexture_t55 * G_B8_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::CheckResources() */, __this);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1 = SystemInfo_get_supports3DTextures_m373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}

IL_0015:
	{
		RenderTexture_t55 * L_2 = ___source;
		RenderTexture_t55 * L_3 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}

IL_001d:
	{
		Texture3D_t37 * L_4 = (__this->___converted3DLut_7);
		bool L_5 = Object_op_Equality_m295(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ColorCorrectionLookup_SetIdentityLut_m58(__this, /*hidden argument*/NULL);
	}

IL_0034:
	{
		Texture3D_t37 * L_6 = (__this->___converted3DLut_7);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		V_0 = L_7;
		Texture3D_t37 * L_8 = (__this->___converted3DLut_7);
		NullCheck(L_8);
		Texture_set_wrapMode_m324(L_8, 1, /*hidden argument*/NULL);
		Material_t5 * L_9 = (__this->___material_6);
		int32_t L_10 = V_0;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		Material_SetFloat_m269(L_9, _stringLiteral50, ((float)((float)(((float)((int32_t)((int32_t)L_10-(int32_t)1))))/(float)((float)((float)(1.0f)*(float)(((float)L_11)))))), /*hidden argument*/NULL);
		Material_t5 * L_12 = (__this->___material_6);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Material_SetFloat_m269(L_12, _stringLiteral51, ((float)((float)(1.0f)/(float)((float)((float)(2.0f)*(float)(((float)L_13)))))), /*hidden argument*/NULL);
		Material_t5 * L_14 = (__this->___material_6);
		Texture3D_t37 * L_15 = (__this->___converted3DLut_7);
		NullCheck(L_14);
		Material_SetTexture_m292(L_14, _stringLiteral52, L_15, /*hidden argument*/NULL);
		RenderTexture_t55 * L_16 = ___source;
		RenderTexture_t55 * L_17 = ___destination;
		Material_t5 * L_18 = (__this->___material_6);
		int32_t L_19 = QualitySettings_get_activeColorSpace_m381(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B6_0 = L_18;
		G_B6_1 = L_17;
		G_B6_2 = L_16;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			G_B7_0 = L_18;
			G_B7_1 = L_17;
			G_B7_2 = L_16;
			goto IL_00b6;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_00b7:
	{
		Graphics_Blit_m275(NULL /*static, unused*/, G_B8_3, G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.ColorCorrectionRamp
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_24.h"
// UnityStandardAssets.ImageEffects.ColorCorrectionRamp
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_24MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_25MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionRamp::.ctor()
// UnityStandardAssets.ImageEffects.ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_25MethodDeclarations.h"
extern "C" void ColorCorrectionRamp__ctor_m62 (ColorCorrectionRamp_t38 * __this, const MethodInfo* method)
{
	{
		ImageEffectBase__ctor_m121(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionRamp::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral53;
extern "C" void ColorCorrectionRamp_OnRenderImage_m63 (ColorCorrectionRamp_t38 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral53 = il2cpp_codegen_string_literal_from_index(53);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = ImageEffectBase_get_material_m123(__this, /*hidden argument*/NULL);
		Texture_t40 * L_1 = (__this->___textureRamp_4);
		NullCheck(L_0);
		Material_SetTexture_m292(L_0, _stringLiteral53, L_1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_2 = ___source;
		RenderTexture_t55 * L_3 = ___destination;
		Material_t5 * L_4 = ImageEffectBase_get_material_m123(__this, /*hidden argument*/NULL);
		Graphics_Blit_m270(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.ContrastEnhance
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_26.h"
// UnityStandardAssets.ImageEffects.ContrastEnhance
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_26MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.ContrastEnhance::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void ContrastEnhance__ctor_m64 (ContrastEnhance_t41 * __this, const MethodInfo* method)
{
	{
		__this->___intensity_5 = (0.5f);
		__this->___blurSpread_9 = (1.0f);
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.ContrastEnhance::CheckResources()
extern "C" bool ContrastEnhance_CheckResources_m65 (ContrastEnhance_t41 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___contrastCompositeShader_11);
		Material_t5 * L_1 = (__this->___contrastCompositeMaterial_8);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___contrastCompositeMaterial_8 = L_2;
		Shader_t4 * L_3 = (__this->___separableBlurShader_10);
		Material_t5 * L_4 = (__this->___separableBlurMaterial_7);
		Material_t5 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->___separableBlurMaterial_7 = L_5;
		bool L_6 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_6)
		{
			goto IL_0049;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0049:
	{
		bool L_7 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_7;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastEnhance::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral16;
extern Il2CppCodeGenString* _stringLiteral54;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern "C" void ContrastEnhance_OnRenderImage_m66 (ContrastEnhance_t41 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		_stringLiteral54 = il2cpp_codegen_string_literal_from_index(54);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_t55 * V_2 = {0};
	RenderTexture_t55 * V_3 = {0};
	RenderTexture_t55 * V_4 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.ContrastEnhance::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		RenderTexture_t55 * L_3 = ___source;
		NullCheck(L_3);
		int32_t L_4 = RenderTexture_get_width_m272(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		RenderTexture_t55 * L_5 = ___source;
		NullCheck(L_5);
		int32_t L_6 = RenderTexture_get_height_m273(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		RenderTexture_t55 * L_9 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_7/(int32_t)2)), ((int32_t)((int32_t)L_8/(int32_t)2)), 0, /*hidden argument*/NULL);
		V_2 = L_9;
		RenderTexture_t55 * L_10 = ___source;
		RenderTexture_t55 * L_11 = V_2;
		Graphics_Blit_m267(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		RenderTexture_t55 * L_14 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_12/(int32_t)4)), ((int32_t)((int32_t)L_13/(int32_t)4)), 0, /*hidden argument*/NULL);
		V_3 = L_14;
		RenderTexture_t55 * L_15 = V_2;
		RenderTexture_t55 * L_16 = V_3;
		Graphics_Blit_m267(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		RenderTexture_t55 * L_17 = V_2;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		Material_t5 * L_18 = (__this->___separableBlurMaterial_7);
		float L_19 = (__this->___blurSpread_9);
		RenderTexture_t55 * L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21 = RenderTexture_get_height_m273(L_20, /*hidden argument*/NULL);
		Vector4_t100  L_22 = {0};
		Vector4__ctor_m284(&L_22, (0.0f), ((float)((float)((float)((float)L_19*(float)(1.0f)))/(float)(((float)L_21)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Material_SetVector_m285(L_18, _stringLiteral16, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		RenderTexture_t55 * L_25 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_23/(int32_t)4)), ((int32_t)((int32_t)L_24/(int32_t)4)), 0, /*hidden argument*/NULL);
		V_4 = L_25;
		RenderTexture_t55 * L_26 = V_3;
		RenderTexture_t55 * L_27 = V_4;
		Material_t5 * L_28 = (__this->___separableBlurMaterial_7);
		Graphics_Blit_m270(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		RenderTexture_t55 * L_29 = V_3;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		Material_t5 * L_30 = (__this->___separableBlurMaterial_7);
		float L_31 = (__this->___blurSpread_9);
		RenderTexture_t55 * L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33 = RenderTexture_get_width_m272(L_32, /*hidden argument*/NULL);
		Vector4_t100  L_34 = {0};
		Vector4__ctor_m284(&L_34, ((float)((float)((float)((float)L_31*(float)(1.0f)))/(float)(((float)L_33)))), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Material_SetVector_m285(L_30, _stringLiteral16, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		RenderTexture_t55 * L_37 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_35/(int32_t)4)), ((int32_t)((int32_t)L_36/(int32_t)4)), 0, /*hidden argument*/NULL);
		V_3 = L_37;
		RenderTexture_t55 * L_38 = V_4;
		RenderTexture_t55 * L_39 = V_3;
		Material_t5 * L_40 = (__this->___separableBlurMaterial_7);
		Graphics_Blit_m270(NULL /*static, unused*/, L_38, L_39, L_40, /*hidden argument*/NULL);
		RenderTexture_t55 * L_41 = V_4;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		Material_t5 * L_42 = (__this->___contrastCompositeMaterial_8);
		RenderTexture_t55 * L_43 = V_3;
		NullCheck(L_42);
		Material_SetTexture_m292(L_42, _stringLiteral54, L_43, /*hidden argument*/NULL);
		Material_t5 * L_44 = (__this->___contrastCompositeMaterial_8);
		float L_45 = (__this->___intensity_5);
		NullCheck(L_44);
		Material_SetFloat_m269(L_44, _stringLiteral55, L_45, /*hidden argument*/NULL);
		Material_t5 * L_46 = (__this->___contrastCompositeMaterial_8);
		float L_47 = (__this->___threshold_6);
		NullCheck(L_46);
		Material_SetFloat_m269(L_46, _stringLiteral56, L_47, /*hidden argument*/NULL);
		RenderTexture_t55 * L_48 = ___source;
		RenderTexture_t55 * L_49 = ___destination;
		Material_t5 * L_50 = (__this->___contrastCompositeMaterial_8);
		Graphics_Blit_m270(NULL /*static, unused*/, L_48, L_49, L_50, /*hidden argument*/NULL);
		RenderTexture_t55 * L_51 = V_3;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.ContrastStretch
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_27.h"
// UnityStandardAssets.ImageEffects.ContrastStretch
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_27MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* RenderTextureU5BU5D_t43_il2cpp_TypeInfo_var;
extern "C" void ContrastStretch__ctor_m67 (ContrastStretch_t42 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RenderTextureU5BU5D_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___adaptationSpeed_2 = (0.02f);
		__this->___limitMinimum_3 = (0.2f);
		__this->___limitMaximum_4 = (0.6f);
		__this->___adaptRenderTex_5 = ((RenderTextureU5BU5D_t43*)SZArrayNew(RenderTextureU5BU5D_t43_il2cpp_TypeInfo_var, 2));
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern TypeInfo* Material_t5_il2cpp_TypeInfo_var;
extern "C" Material_t5 * ContrastStretch_get_materialLum_m68 (ContrastStretch_t42 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___m_materialLum_8);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t4 * L_2 = (__this->___shaderLum_7);
		Material_t5 * L_3 = (Material_t5 *)il2cpp_codegen_object_new (Material_t5_il2cpp_TypeInfo_var);
		Material__ctor_m300(L_3, L_2, /*hidden argument*/NULL);
		__this->___m_materialLum_8 = L_3;
		Material_t5 * L_4 = (__this->___m_materialLum_8);
		NullCheck(L_4);
		Object_set_hideFlags_m301(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002f:
	{
		Material_t5 * L_5 = (__this->___m_materialLum_8);
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
extern TypeInfo* Material_t5_il2cpp_TypeInfo_var;
extern "C" Material_t5 * ContrastStretch_get_materialReduce_m69 (ContrastStretch_t42 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___m_materialReduce_10);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t4 * L_2 = (__this->___shaderReduce_9);
		Material_t5 * L_3 = (Material_t5 *)il2cpp_codegen_object_new (Material_t5_il2cpp_TypeInfo_var);
		Material__ctor_m300(L_3, L_2, /*hidden argument*/NULL);
		__this->___m_materialReduce_10 = L_3;
		Material_t5 * L_4 = (__this->___m_materialReduce_10);
		NullCheck(L_4);
		Object_set_hideFlags_m301(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002f:
	{
		Material_t5 * L_5 = (__this->___m_materialReduce_10);
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
extern TypeInfo* Material_t5_il2cpp_TypeInfo_var;
extern "C" Material_t5 * ContrastStretch_get_materialAdapt_m70 (ContrastStretch_t42 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___m_materialAdapt_12);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t4 * L_2 = (__this->___shaderAdapt_11);
		Material_t5 * L_3 = (Material_t5 *)il2cpp_codegen_object_new (Material_t5_il2cpp_TypeInfo_var);
		Material__ctor_m300(L_3, L_2, /*hidden argument*/NULL);
		__this->___m_materialAdapt_12 = L_3;
		Material_t5 * L_4 = (__this->___m_materialAdapt_12);
		NullCheck(L_4);
		Object_set_hideFlags_m301(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002f:
	{
		Material_t5 * L_5 = (__this->___m_materialAdapt_12);
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
extern TypeInfo* Material_t5_il2cpp_TypeInfo_var;
extern "C" Material_t5 * ContrastStretch_get_materialApply_m71 (ContrastStretch_t42 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___m_materialApply_14);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t4 * L_2 = (__this->___shaderApply_13);
		Material_t5 * L_3 = (Material_t5 *)il2cpp_codegen_object_new (Material_t5_il2cpp_TypeInfo_var);
		Material__ctor_m300(L_3, L_2, /*hidden argument*/NULL);
		__this->___m_materialApply_14 = L_3;
		Material_t5 * L_4 = (__this->___m_materialApply_14);
		NullCheck(L_4);
		Object_set_hideFlags_m301(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002f:
	{
		Material_t5 * L_5 = (__this->___m_materialApply_14);
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern "C" void ContrastStretch_Start_m72 (ContrastStretch_t42 * __this, const MethodInfo* method)
{
	{
		bool L_0 = SystemInfo_get_supportsImageEffects_m302(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		Shader_t4 * L_1 = (__this->___shaderAdapt_11);
		NullCheck(L_1);
		bool L_2 = Shader_get_isSupported_m266(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		Shader_t4 * L_3 = (__this->___shaderApply_13);
		NullCheck(L_3);
		bool L_4 = Shader_get_isSupported_m266(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		Shader_t4 * L_5 = (__this->___shaderLum_7);
		NullCheck(L_5);
		bool L_6 = Shader_get_isSupported_m266(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		Shader_t4 * L_7 = (__this->___shaderReduce_9);
		NullCheck(L_7);
		bool L_8 = Shader_get_isSupported_m266(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005a;
		}
	}

IL_0052:
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_005a:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern TypeInfo* RenderTexture_t55_il2cpp_TypeInfo_var;
extern "C" void ContrastStretch_OnEnable_m73 (ContrastStretch_t42 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RenderTexture_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0007:
	{
		RenderTextureU5BU5D_t43* L_0 = (__this->___adaptRenderTex_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		bool L_3 = Object_op_Implicit_m294(NULL /*static, unused*/, (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_0, L_2, sizeof(RenderTexture_t55 *))), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		RenderTextureU5BU5D_t43* L_4 = (__this->___adaptRenderTex_5);
		int32_t L_5 = V_0;
		RenderTexture_t55 * L_6 = (RenderTexture_t55 *)il2cpp_codegen_object_new (RenderTexture_t55_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m382(L_6, 1, 1, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_6);
		*((RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_4, L_5, sizeof(RenderTexture_t55 *))) = (RenderTexture_t55 *)L_6;
		RenderTextureU5BU5D_t43* L_7 = (__this->___adaptRenderTex_5);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_7, L_9, sizeof(RenderTexture_t55 *))));
		Object_set_hideFlags_m301((*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_7, L_9, sizeof(RenderTexture_t55 *))), ((int32_t)61), /*hidden argument*/NULL);
	}

IL_0038:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)2)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
extern "C" void ContrastStretch_OnDisable_m74 (ContrastStretch_t42 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		RenderTextureU5BU5D_t43* L_0 = (__this->___adaptRenderTex_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		Object_DestroyImmediate_m297(NULL /*static, unused*/, (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_0, L_2, sizeof(RenderTexture_t55 *))), /*hidden argument*/NULL);
		RenderTextureU5BU5D_t43* L_3 = (__this->___adaptRenderTex_5);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, NULL);
		*((RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_3, L_4, sizeof(RenderTexture_t55 *))) = (RenderTexture_t55 *)NULL;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0007;
		}
	}
	{
		Material_t5 * L_7 = (__this->___m_materialLum_8);
		bool L_8 = Object_op_Implicit_m294(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		Material_t5 * L_9 = (__this->___m_materialLum_8);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_0043:
	{
		Material_t5 * L_10 = (__this->___m_materialReduce_10);
		bool L_11 = Object_op_Implicit_m294(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		Material_t5 * L_12 = (__this->___m_materialReduce_10);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_005e:
	{
		Material_t5 * L_13 = (__this->___m_materialAdapt_12);
		bool L_14 = Object_op_Implicit_m294(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		Material_t5 * L_15 = (__this->___m_materialAdapt_12);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_0079:
	{
		Material_t5 * L_16 = (__this->___m_materialApply_14);
		bool L_17 = Object_op_Implicit_m294(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		Material_t5 * L_18 = (__this->___m_materialApply_14);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
	}

IL_0094:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityStandardAssets.ImageEffects.ContrastStretch
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_27MethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral57;
extern "C" void ContrastStretch_OnRenderImage_m75 (ContrastStretch_t42 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RenderTexture_t55 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RenderTexture_t55 * V_6 = {0};
	{
		RenderTexture_t55 * L_0 = ___source;
		NullCheck(L_0);
		int32_t L_1 = RenderTexture_get_width_m272(L_0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_2 = ___source;
		NullCheck(L_2);
		int32_t L_3 = RenderTexture_get_height_m273(L_2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_4 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, ((int32_t)((int32_t)L_1/(int32_t)1)), ((int32_t)((int32_t)L_3/(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_4;
		RenderTexture_t55 * L_5 = ___source;
		RenderTexture_t55 * L_6 = V_1;
		Material_t5 * L_7 = ContrastStretch_get_materialLum_m68(__this, /*hidden argument*/NULL);
		Graphics_Blit_m270(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0028:
	{
		RenderTexture_t55 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = RenderTexture_get_width_m272(L_8, /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)L_9/(int32_t)2));
		int32_t L_10 = V_4;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		V_4 = 1;
	}

IL_003d:
	{
		RenderTexture_t55 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = RenderTexture_get_height_m273(L_11, /*hidden argument*/NULL);
		V_5 = ((int32_t)((int32_t)L_12/(int32_t)2));
		int32_t L_13 = V_5;
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0052;
		}
	}
	{
		V_5 = 1;
	}

IL_0052:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = V_5;
		RenderTexture_t55 * L_16 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		RenderTexture_t55 * L_17 = V_1;
		RenderTexture_t55 * L_18 = V_6;
		Material_t5 * L_19 = ContrastStretch_get_materialReduce_m69(__this, /*hidden argument*/NULL);
		Graphics_Blit_m270(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		RenderTexture_t55 * L_20 = V_1;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		RenderTexture_t55 * L_21 = V_6;
		V_1 = L_21;
	}

IL_0074:
	{
		RenderTexture_t55 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = RenderTexture_get_width_m272(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RenderTexture_t55 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = RenderTexture_get_height_m273(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) > ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RenderTexture_t55 * L_26 = V_1;
		ContrastStretch_CalculateAdaptation_m76(__this, L_26, /*hidden argument*/NULL);
		Material_t5 * L_27 = ContrastStretch_get_materialApply_m71(__this, /*hidden argument*/NULL);
		RenderTextureU5BU5D_t43* L_28 = (__this->___adaptRenderTex_5);
		int32_t L_29 = (__this->___curAdaptIndex_6);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		int32_t L_30 = L_29;
		NullCheck(L_27);
		Material_SetTexture_m292(L_27, _stringLiteral57, (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_28, L_30, sizeof(RenderTexture_t55 *))), /*hidden argument*/NULL);
		RenderTexture_t55 * L_31 = ___source;
		RenderTexture_t55 * L_32 = ___destination;
		Material_t5 * L_33 = ContrastStretch_get_materialApply_m71(__this, /*hidden argument*/NULL);
		Graphics_Blit_m270(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/NULL);
		RenderTexture_t55 * L_34 = V_1;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral59;
extern "C" void ContrastStretch_CalculateAdaptation_m76 (ContrastStretch_t42 * __this, Texture_t40 * ___curTexture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		int32_t L_0 = (__this->___curAdaptIndex_6);
		V_0 = L_0;
		int32_t L_1 = (__this->___curAdaptIndex_6);
		__this->___curAdaptIndex_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)1))%(int32_t)2));
		float L_2 = (__this->___adaptationSpeed_2);
		float L_3 = Time_get_deltaTime_m383(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_4 = powf(((float)((float)(1.0f)-(float)L_2)), ((float)((float)(30.0f)*(float)L_3)));
		V_1 = ((float)((float)(1.0f)-(float)L_4));
		float L_5 = V_1;
		float L_6 = Mathf_Clamp_m368(NULL /*static, unused*/, L_5, (0.01f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_6;
		Material_t5 * L_7 = ContrastStretch_get_materialAdapt_m70(__this, /*hidden argument*/NULL);
		Texture_t40 * L_8 = ___curTexture;
		NullCheck(L_7);
		Material_SetTexture_m292(L_7, _stringLiteral58, L_8, /*hidden argument*/NULL);
		Material_t5 * L_9 = ContrastStretch_get_materialAdapt_m70(__this, /*hidden argument*/NULL);
		float L_10 = V_1;
		float L_11 = (__this->___limitMinimum_3);
		float L_12 = (__this->___limitMaximum_4);
		Vector4_t100  L_13 = {0};
		Vector4__ctor_m284(&L_13, L_10, L_11, L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Material_SetVector_m285(L_9, _stringLiteral59, L_13, /*hidden argument*/NULL);
		RenderTextureU5BU5D_t43* L_14 = (__this->___adaptRenderTex_5);
		int32_t L_15 = (__this->___curAdaptIndex_6);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Graphics_SetRenderTarget_m286(NULL /*static, unused*/, (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_14, L_16, sizeof(RenderTexture_t55 *))), /*hidden argument*/NULL);
		Color_t12  L_17 = Color_get_black_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Clear_m288(NULL /*static, unused*/, 0, 1, L_17, /*hidden argument*/NULL);
		RenderTextureU5BU5D_t43* L_18 = (__this->___adaptRenderTex_5);
		int32_t L_19 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		RenderTextureU5BU5D_t43* L_21 = (__this->___adaptRenderTex_5);
		int32_t L_22 = (__this->___curAdaptIndex_6);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		Material_t5 * L_24 = ContrastStretch_get_materialAdapt_m70(__this, /*hidden argument*/NULL);
		Graphics_Blit_m270(NULL /*static, unused*/, (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_18, L_20, sizeof(RenderTexture_t55 *))), (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_21, L_23, sizeof(RenderTexture_t55 *))), L_24, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.CreaseShading
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_28.h"
// UnityStandardAssets.ImageEffects.CreaseShading
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_28MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.CreaseShading::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void CreaseShading__ctor_m77 (CreaseShading_t44 * __this, const MethodInfo* method)
{
	{
		__this->___intensity_5 = (0.5f);
		__this->___softness_6 = 1;
		__this->___spread_7 = (1.0f);
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.CreaseShading::CheckResources()
extern "C" bool CreaseShading_CheckResources_m78 (CreaseShading_t44 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 1, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___blurShader_8);
		Material_t5 * L_1 = (__this->___blurMaterial_9);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___blurMaterial_9 = L_2;
		Shader_t4 * L_3 = (__this->___depthFetchShader_10);
		Material_t5 * L_4 = (__this->___depthFetchMaterial_11);
		Material_t5 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->___depthFetchMaterial_11 = L_5;
		Shader_t4 * L_6 = (__this->___creaseApplyShader_12);
		Material_t5 * L_7 = (__this->___creaseApplyMaterial_13);
		Material_t5 * L_8 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_6, L_7, /*hidden argument*/NULL);
		__this->___creaseApplyMaterial_13 = L_8;
		bool L_9 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_9)
		{
			goto IL_0061;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0061:
	{
		bool L_10 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_10;
	}
}
// System.Void UnityStandardAssets.ImageEffects.CreaseShading::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral16;
extern Il2CppCodeGenString* _stringLiteral60;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral55;
extern "C" void CreaseShading_OnRenderImage_m79 (CreaseShading_t44 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		_stringLiteral60 = il2cpp_codegen_string_literal_from_index(60);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	RenderTexture_t55 * V_4 = {0};
	RenderTexture_t55 * V_5 = {0};
	int32_t V_6 = 0;
	RenderTexture_t55 * V_7 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.CreaseShading::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		RenderTexture_t55 * L_3 = ___source;
		NullCheck(L_3);
		int32_t L_4 = RenderTexture_get_width_m272(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		RenderTexture_t55 * L_5 = ___source;
		NullCheck(L_5);
		int32_t L_6 = RenderTexture_get_height_m273(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_7))))/(float)((float)((float)(1.0f)*(float)(((float)L_8))))));
		V_3 = (0.001953125f);
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		RenderTexture_t55 * L_11 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, L_9, L_10, 0, /*hidden argument*/NULL);
		V_4 = L_11;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		RenderTexture_t55 * L_14 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_12/(int32_t)2)), ((int32_t)((int32_t)L_13/(int32_t)2)), 0, /*hidden argument*/NULL);
		V_5 = L_14;
		RenderTexture_t55 * L_15 = ___source;
		RenderTexture_t55 * L_16 = V_4;
		Material_t5 * L_17 = (__this->___depthFetchMaterial_11);
		Graphics_Blit_m270(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		RenderTexture_t55 * L_18 = V_4;
		RenderTexture_t55 * L_19 = V_5;
		Graphics_Blit_m267(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_6 = 0;
		goto IL_0120;
	}

IL_0070:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		RenderTexture_t55 * L_22 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_20/(int32_t)2)), ((int32_t)((int32_t)L_21/(int32_t)2)), 0, /*hidden argument*/NULL);
		V_7 = L_22;
		Material_t5 * L_23 = (__this->___blurMaterial_9);
		float L_24 = (__this->___spread_7);
		float L_25 = V_3;
		Vector4_t100  L_26 = {0};
		Vector4__ctor_m284(&L_26, (0.0f), ((float)((float)L_24*(float)L_25)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Material_SetVector_m285(L_23, _stringLiteral16, L_26, /*hidden argument*/NULL);
		RenderTexture_t55 * L_27 = V_5;
		RenderTexture_t55 * L_28 = V_7;
		Material_t5 * L_29 = (__this->___blurMaterial_9);
		Graphics_Blit_m270(NULL /*static, unused*/, L_27, L_28, L_29, /*hidden argument*/NULL);
		RenderTexture_t55 * L_30 = V_5;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		RenderTexture_t55 * L_31 = V_7;
		V_5 = L_31;
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		RenderTexture_t55 * L_34 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_32/(int32_t)2)), ((int32_t)((int32_t)L_33/(int32_t)2)), 0, /*hidden argument*/NULL);
		V_7 = L_34;
		Material_t5 * L_35 = (__this->___blurMaterial_9);
		float L_36 = (__this->___spread_7);
		float L_37 = V_3;
		float L_38 = V_2;
		Vector4_t100  L_39 = {0};
		Vector4__ctor_m284(&L_39, ((float)((float)((float)((float)L_36*(float)L_37))/(float)L_38)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		Material_SetVector_m285(L_35, _stringLiteral16, L_39, /*hidden argument*/NULL);
		RenderTexture_t55 * L_40 = V_5;
		RenderTexture_t55 * L_41 = V_7;
		Material_t5 * L_42 = (__this->___blurMaterial_9);
		Graphics_Blit_m270(NULL /*static, unused*/, L_40, L_41, L_42, /*hidden argument*/NULL);
		RenderTexture_t55 * L_43 = V_5;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		RenderTexture_t55 * L_44 = V_7;
		V_5 = L_44;
		int32_t L_45 = V_6;
		V_6 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_0120:
	{
		int32_t L_46 = V_6;
		int32_t L_47 = (__this->___softness_6);
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0070;
		}
	}
	{
		Material_t5 * L_48 = (__this->___creaseApplyMaterial_13);
		RenderTexture_t55 * L_49 = V_4;
		NullCheck(L_48);
		Material_SetTexture_m292(L_48, _stringLiteral60, L_49, /*hidden argument*/NULL);
		Material_t5 * L_50 = (__this->___creaseApplyMaterial_13);
		RenderTexture_t55 * L_51 = V_5;
		NullCheck(L_50);
		Material_SetTexture_m292(L_50, _stringLiteral61, L_51, /*hidden argument*/NULL);
		Material_t5 * L_52 = (__this->___creaseApplyMaterial_13);
		float L_53 = (__this->___intensity_5);
		NullCheck(L_52);
		Material_SetFloat_m269(L_52, _stringLiteral55, L_53, /*hidden argument*/NULL);
		RenderTexture_t55 * L_54 = ___source;
		RenderTexture_t55 * L_55 = ___destination;
		Material_t5 * L_56 = (__this->___creaseApplyMaterial_13);
		Graphics_Blit_m270(NULL /*static, unused*/, L_54, L_55, L_56, /*hidden argument*/NULL);
		RenderTexture_t55 * L_57 = V_4;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		RenderTexture_t55 * L_58 = V_5;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.DepthOfField/BlurType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_29.h"
// UnityStandardAssets.ImageEffects.DepthOfField/BlurType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_29MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_30.h"
// UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_30MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.DepthOfField
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_31.h"
// UnityStandardAssets.ImageEffects.DepthOfField
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_31MethodDeclarations.h"
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBuffer.h"
// UnityEngine.ComputeBufferType
#include "UnityEngine_UnityEngine_ComputeBufferType.h"
// UnityEngine.MeshTopology
#include "UnityEngine_UnityEngine_MeshTopology.h"
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBufferMethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void DepthOfField__ctor_m80 (DepthOfField_t47 * __this, const MethodInfo* method)
{
	{
		__this->___focalLength_6 = (10.0f);
		__this->___focalSize_7 = (0.05f);
		__this->___aperture_8 = (11.5f);
		__this->___maxBlurSize_10 = (2.0f);
		__this->___blurSampleCount_13 = 2;
		__this->___foregroundOverlap_15 = (1.0f);
		__this->___dx11BokehThreshold_20 = (0.5f);
		__this->___dx11SpawnHeuristic_21 = (0.0875f);
		__this->___dx11BokehScale_23 = (1.2f);
		__this->___dx11BokehIntensity_24 = (2.5f);
		__this->___focalDistance01_25 = (10.0f);
		__this->___internalBlurWidth_28 = (1.0f);
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::CheckResources()
// UnityStandardAssets.ImageEffects.DepthOfField
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_31MethodDeclarations.h"
extern "C" bool DepthOfField_CheckResources_m81 (DepthOfField_t47 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 1, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___dofHdrShader_16);
		Material_t5 * L_1 = (__this->___dofHdrMaterial_17);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___dofHdrMaterial_17 = L_2;
		bool L_3 = (((PostEffectsBase_t3 *)__this)->___supportDX11_3);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_4 = (__this->___blurType_12);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0055;
		}
	}
	{
		Shader_t4 * L_5 = (__this->___dx11BokehShader_18);
		Material_t5 * L_6 = (__this->___dx11bokehMaterial_19);
		Material_t5 * L_7 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_5, L_6, /*hidden argument*/NULL);
		__this->___dx11bokehMaterial_19 = L_7;
		DepthOfField_CreateComputeResources_m85(__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		bool L_8 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_8)
		{
			goto IL_0066;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0066:
	{
		bool L_9 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_9;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnEnable()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern "C" void DepthOfField_OnEnable_m82 (DepthOfField_t47 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t32 * L_0 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		Camera_t32 * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = Camera_get_depthTextureMode_m319(L_1, /*hidden argument*/NULL);
		NullCheck(L_1);
		Camera_set_depthTextureMode_m320(L_1, ((int32_t)((int32_t)L_2|(int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnDisable()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void DepthOfField_OnDisable_m83 (DepthOfField_t47 * __this, const MethodInfo* method)
{
	{
		DepthOfField_ReleaseComputeResources_m84(__this, /*hidden argument*/NULL);
		Material_t5 * L_0 = (__this->___dofHdrMaterial_17);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Material_t5 * L_2 = (__this->___dofHdrMaterial_17);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		__this->___dofHdrMaterial_17 = (Material_t5 *)NULL;
		Material_t5 * L_3 = (__this->___dx11bokehMaterial_19);
		bool L_4 = Object_op_Implicit_m294(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		Material_t5 * L_5 = (__this->___dx11bokehMaterial_19);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0043:
	{
		__this->___dx11bokehMaterial_19 = (Material_t5 *)NULL;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::ReleaseComputeResources()
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBufferMethodDeclarations.h"
extern "C" void DepthOfField_ReleaseComputeResources_m84 (DepthOfField_t47 * __this, const MethodInfo* method)
{
	{
		ComputeBuffer_t49 * L_0 = (__this->___cbDrawArgs_26);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ComputeBuffer_t49 * L_1 = (__this->___cbDrawArgs_26);
		NullCheck(L_1);
		ComputeBuffer_Release_m384(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		__this->___cbDrawArgs_26 = (ComputeBuffer_t49 *)NULL;
		ComputeBuffer_t49 * L_2 = (__this->___cbPoints_27);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		ComputeBuffer_t49 * L_3 = (__this->___cbPoints_27);
		NullCheck(L_3);
		ComputeBuffer_Release_m384(L_3, /*hidden argument*/NULL);
	}

IL_0033:
	{
		__this->___cbPoints_27 = (ComputeBuffer_t49 *)NULL;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::CreateComputeResources()
extern TypeInfo* ComputeBuffer_t49_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern "C" void DepthOfField_CreateComputeResources_m85 (DepthOfField_t47 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ComputeBuffer_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Int32U5BU5D_t109* V_0 = {0};
	{
		ComputeBuffer_t49 * L_0 = (__this->___cbDrawArgs_26);
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		ComputeBuffer_t49 * L_1 = (ComputeBuffer_t49 *)il2cpp_codegen_object_new (ComputeBuffer_t49_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_m385(L_1, 1, ((int32_t)16), ((int32_t)256), /*hidden argument*/NULL);
		__this->___cbDrawArgs_26 = L_1;
		V_0 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, 4));
		Int32U5BU5D_t109* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, 0, sizeof(int32_t))) = (int32_t)0;
		Int32U5BU5D_t109* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, 1, sizeof(int32_t))) = (int32_t)1;
		Int32U5BU5D_t109* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, 2, sizeof(int32_t))) = (int32_t)0;
		Int32U5BU5D_t109* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, 3, sizeof(int32_t))) = (int32_t)0;
		ComputeBuffer_t49 * L_6 = (__this->___cbDrawArgs_26);
		Int32U5BU5D_t109* L_7 = V_0;
		NullCheck(L_6);
		ComputeBuffer_SetData_m386(L_6, (Array_t *)(Array_t *)L_7, /*hidden argument*/NULL);
	}

IL_0041:
	{
		ComputeBuffer_t49 * L_8 = (__this->___cbPoints_27);
		if (L_8)
		{
			goto IL_005f;
		}
	}
	{
		ComputeBuffer_t49 * L_9 = (ComputeBuffer_t49 *)il2cpp_codegen_object_new (ComputeBuffer_t49_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_m385(L_9, ((int32_t)90000), ((int32_t)28), 2, /*hidden argument*/NULL);
		__this->___cbPoints_27 = L_9;
	}

IL_005f:
	{
		return;
	}
}
// System.Single UnityStandardAssets.ImageEffects.DepthOfField::FocalDistance01(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern "C" float DepthOfField_FocalDistance01_m86 (DepthOfField_t47 * __this, float ___worldDist, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t28  V_0 = {0};
	{
		Camera_t32 * L_0 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		float L_1 = ___worldDist;
		Camera_t32 * L_2 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_2);
		float L_3 = Camera_get_nearClipPlane_m387(L_2, /*hidden argument*/NULL);
		Camera_t32 * L_4 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_4);
		Transform_t48 * L_5 = Component_get_transform_m332(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t28  L_6 = Transform_get_forward_m340(L_5, /*hidden argument*/NULL);
		Vector3_t28  L_7 = Vector3_op_Multiply_m388(NULL /*static, unused*/, ((float)((float)L_1-(float)L_3)), L_6, /*hidden argument*/NULL);
		Camera_t32 * L_8 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_8);
		Transform_t48 * L_9 = Component_get_transform_m332(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t28  L_10 = Transform_get_position_m335(L_9, /*hidden argument*/NULL);
		Vector3_t28  L_11 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t28  L_12 = Camera_WorldToViewportPoint_m390(L_0, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		float L_13 = ((&V_0)->___z_3);
		Camera_t32 * L_14 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_14);
		float L_15 = Camera_get_farClipPlane_m391(L_14, /*hidden argument*/NULL);
		Camera_t32 * L_16 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_16);
		float L_17 = Camera_get_nearClipPlane_m387(L_16, /*hidden argument*/NULL);
		return ((float)((float)L_13/(float)((float)((float)L_15-(float)L_17))));
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::WriteCoc(UnityEngine.RenderTexture,System.Boolean)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral5;
extern "C" void DepthOfField_WriteCoc_m87 (DepthOfField_t47 * __this, RenderTexture_t55 * ___fromTo, bool ___fgDilate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_t55 * V_2 = {0};
	float V_3 = 0.0f;
	RenderTexture_t55 * V_4 = {0};
	{
		Material_t5 * L_0 = (__this->___dofHdrMaterial_17);
		NullCheck(L_0);
		Material_SetTexture_m292(L_0, _stringLiteral62, (Texture_t40 *)NULL, /*hidden argument*/NULL);
		bool L_1 = (__this->___nearBlur_14);
		if (!L_1)
		{
			goto IL_011c;
		}
	}
	{
		bool L_2 = ___fgDilate;
		if (!L_2)
		{
			goto IL_011c;
		}
	}
	{
		RenderTexture_t55 * L_3 = ___fromTo;
		NullCheck(L_3);
		int32_t L_4 = RenderTexture_get_width_m272(L_3, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_4/(int32_t)2));
		RenderTexture_t55 * L_5 = ___fromTo;
		NullCheck(L_5);
		int32_t L_6 = RenderTexture_get_height_m273(L_5, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_6/(int32_t)2));
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		RenderTexture_t55 * L_9 = ___fromTo;
		NullCheck(L_9);
		int32_t L_10 = RenderTexture_get_format_m279(L_9, /*hidden argument*/NULL);
		RenderTexture_t55 * L_11 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_7, L_8, 0, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		RenderTexture_t55 * L_12 = ___fromTo;
		RenderTexture_t55 * L_13 = V_2;
		Material_t5 * L_14 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_12, L_13, L_14, 4, /*hidden argument*/NULL);
		float L_15 = (__this->___internalBlurWidth_28);
		float L_16 = (__this->___foregroundOverlap_15);
		V_3 = ((float)((float)L_15*(float)L_16));
		Material_t5 * L_17 = (__this->___dofHdrMaterial_17);
		float L_18 = V_3;
		float L_19 = V_3;
		Vector4_t100  L_20 = {0};
		Vector4__ctor_m284(&L_20, (0.0f), L_18, (0.0f), L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Material_SetVector_m285(L_17, _stringLiteral5, L_20, /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		RenderTexture_t55 * L_23 = ___fromTo;
		NullCheck(L_23);
		int32_t L_24 = RenderTexture_get_format_m279(L_23, /*hidden argument*/NULL);
		RenderTexture_t55 * L_25 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_21, L_22, 0, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		RenderTexture_t55 * L_26 = V_2;
		RenderTexture_t55 * L_27 = V_4;
		Material_t5 * L_28 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_26, L_27, L_28, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_29 = V_2;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		Material_t5 * L_30 = (__this->___dofHdrMaterial_17);
		float L_31 = V_3;
		float L_32 = V_3;
		Vector4_t100  L_33 = {0};
		Vector4__ctor_m284(&L_33, L_31, (0.0f), (0.0f), L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		Material_SetVector_m285(L_30, _stringLiteral5, L_33, /*hidden argument*/NULL);
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		RenderTexture_t55 * L_36 = ___fromTo;
		NullCheck(L_36);
		int32_t L_37 = RenderTexture_get_format_m279(L_36, /*hidden argument*/NULL);
		RenderTexture_t55 * L_38 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_34, L_35, 0, L_37, /*hidden argument*/NULL);
		V_2 = L_38;
		RenderTexture_t55 * L_39 = V_4;
		RenderTexture_t55 * L_40 = V_2;
		Material_t5 * L_41 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_39, L_40, L_41, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_42 = V_4;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		Material_t5 * L_43 = (__this->___dofHdrMaterial_17);
		RenderTexture_t55 * L_44 = V_2;
		NullCheck(L_43);
		Material_SetTexture_m292(L_43, _stringLiteral62, L_44, /*hidden argument*/NULL);
		RenderTexture_t55 * L_45 = ___fromTo;
		NullCheck(L_45);
		RenderTexture_MarkRestoreExpected_m289(L_45, /*hidden argument*/NULL);
		RenderTexture_t55 * L_46 = ___fromTo;
		RenderTexture_t55 * L_47 = ___fromTo;
		Material_t5 * L_48 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_46, L_47, L_48, ((int32_t)13), /*hidden argument*/NULL);
		RenderTexture_t55 * L_49 = V_2;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_011c:
	{
		RenderTexture_t55 * L_50 = ___fromTo;
		NullCheck(L_50);
		RenderTexture_MarkRestoreExpected_m289(L_50, /*hidden argument*/NULL);
		RenderTexture_t55 * L_51 = ___fromTo;
		RenderTexture_t55 * L_52 = ___fromTo;
		Material_t5 * L_53 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_51, L_52, L_53, 0, /*hidden argument*/NULL);
	}

IL_0130:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral64;
extern Il2CppCodeGenString* _stringLiteral65;
extern Il2CppCodeGenString* _stringLiteral66;
extern Il2CppCodeGenString* _stringLiteral67;
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral69;
extern Il2CppCodeGenString* _stringLiteral70;
extern Il2CppCodeGenString* _stringLiteral71;
extern Il2CppCodeGenString* _stringLiteral62;
extern "C" void DepthOfField_OnRenderImage_m88 (DepthOfField_t47 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral64 = il2cpp_codegen_string_literal_from_index(64);
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		_stringLiteral66 = il2cpp_codegen_string_literal_from_index(66);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		_stringLiteral70 = il2cpp_codegen_string_literal_from_index(70);
		_stringLiteral71 = il2cpp_codegen_string_literal_from_index(71);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t55 * V_0 = {0};
	RenderTexture_t55 * V_1 = {0};
	RenderTexture_t55 * V_2 = {0};
	RenderTexture_t55 * V_3 = {0};
	float V_4 = 0.0f;
	RenderTexture_t55 * V_5 = {0};
	RenderTexture_t55 * V_6 = {0};
	int32_t V_7 = 0;
	Vector3_t28  V_8 = {0};
	DepthOfField_t47 * G_B8_0 = {0};
	DepthOfField_t47 * G_B7_0 = {0};
	float G_B9_0 = 0.0f;
	DepthOfField_t47 * G_B9_1 = {0};
	DepthOfField_t47 * G_B16_0 = {0};
	DepthOfField_t47 * G_B15_0 = {0};
	float G_B17_0 = 0.0f;
	DepthOfField_t47 * G_B17_1 = {0};
	String_t* G_B21_0 = {0};
	Material_t5 * G_B21_1 = {0};
	String_t* G_B20_0 = {0};
	Material_t5 * G_B20_1 = {0};
	RenderTexture_t55 * G_B22_0 = {0};
	String_t* G_B22_1 = {0};
	Material_t5 * G_B22_2 = {0};
	int32_t G_B38_0 = 0;
	Material_t5 * G_B42_0 = {0};
	RenderTexture_t55 * G_B42_1 = {0};
	RenderTexture_t55 * G_B42_2 = {0};
	Material_t5 * G_B41_0 = {0};
	RenderTexture_t55 * G_B41_1 = {0};
	RenderTexture_t55 * G_B41_2 = {0};
	int32_t G_B43_0 = 0;
	Material_t5 * G_B43_1 = {0};
	RenderTexture_t55 * G_B43_2 = {0};
	RenderTexture_t55 * G_B43_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		float L_3 = (__this->___aperture_8);
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_002e;
		}
	}
	{
		__this->___aperture_8 = (0.0f);
	}

IL_002e:
	{
		float L_4 = (__this->___maxBlurSize_10);
		if ((!(((float)L_4) < ((float)(0.1f)))))
		{
			goto IL_0049;
		}
	}
	{
		__this->___maxBlurSize_10 = (0.1f);
	}

IL_0049:
	{
		float L_5 = (__this->___focalSize_7);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Clamp_m368(NULL /*static, unused*/, L_5, (0.0f), (2.0f), /*hidden argument*/NULL);
		__this->___focalSize_7 = L_6;
		float L_7 = (__this->___maxBlurSize_10);
		float L_8 = Mathf_Max_m322(NULL /*static, unused*/, L_7, (0.0f), /*hidden argument*/NULL);
		__this->___internalBlurWidth_28 = L_8;
		Transform_t48 * L_9 = (__this->___focalTransform_9);
		bool L_10 = Object_op_Implicit_m294(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		G_B7_0 = __this;
		if (!L_10)
		{
			G_B8_0 = __this;
			goto IL_00bb;
		}
	}
	{
		Camera_t32 * L_11 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		Transform_t48 * L_12 = (__this->___focalTransform_9);
		NullCheck(L_12);
		Vector3_t28  L_13 = Transform_get_position_m335(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t28  L_14 = Camera_WorldToViewportPoint_m390(L_11, L_13, /*hidden argument*/NULL);
		V_8 = L_14;
		float L_15 = ((&V_8)->___z_3);
		Camera_t32 * L_16 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_16);
		float L_17 = Camera_get_farClipPlane_m391(L_16, /*hidden argument*/NULL);
		G_B9_0 = ((float)((float)L_15/(float)L_17));
		G_B9_1 = G_B7_0;
		goto IL_00c7;
	}

IL_00bb:
	{
		float L_18 = (__this->___focalLength_6);
		float L_19 = DepthOfField_FocalDistance01_m86(__this, L_18, /*hidden argument*/NULL);
		G_B9_0 = L_19;
		G_B9_1 = G_B8_0;
	}

IL_00c7:
	{
		NullCheck(G_B9_1);
		G_B9_1->___focalDistance01_25 = G_B9_0;
		Material_t5 * L_20 = (__this->___dofHdrMaterial_17);
		float L_21 = (__this->___focalSize_7);
		float L_22 = (__this->___aperture_8);
		float L_23 = (__this->___focalDistance01_25);
		Vector4_t100  L_24 = {0};
		Vector4__ctor_m284(&L_24, (1.0f), L_21, ((float)((float)L_22/(float)(10.0f))), L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		Material_SetVector_m285(L_20, _stringLiteral63, L_24, /*hidden argument*/NULL);
		V_0 = (RenderTexture_t55 *)NULL;
		V_1 = (RenderTexture_t55 *)NULL;
		V_2 = (RenderTexture_t55 *)NULL;
		V_3 = (RenderTexture_t55 *)NULL;
		float L_25 = (__this->___internalBlurWidth_28);
		float L_26 = (__this->___foregroundOverlap_15);
		V_4 = ((float)((float)L_25*(float)L_26));
		bool L_27 = (__this->___visualizeFocus_5);
		if (!L_27)
		{
			goto IL_013c;
		}
	}
	{
		RenderTexture_t55 * L_28 = ___source;
		DepthOfField_WriteCoc_m87(__this, L_28, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_29 = ___source;
		RenderTexture_t55 * L_30 = ___destination;
		Material_t5 * L_31 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_29, L_30, L_31, ((int32_t)16), /*hidden argument*/NULL);
		goto IL_0ac0;
	}

IL_013c:
	{
		int32_t L_32 = (__this->___blurType_12);
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_0921;
		}
	}
	{
		Material_t5 * L_33 = (__this->___dx11bokehMaterial_19);
		bool L_34 = Object_op_Implicit_m294(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0921;
		}
	}
	{
		bool L_35 = (__this->___highResolution_11);
		if (!L_35)
		{
			goto IL_050d;
		}
	}
	{
		float L_36 = (__this->___internalBlurWidth_28);
		G_B15_0 = __this;
		if ((!(((float)L_36) < ((float)(0.1f)))))
		{
			G_B16_0 = __this;
			goto IL_017e;
		}
	}
	{
		G_B17_0 = (0.1f);
		G_B17_1 = G_B15_0;
		goto IL_0184;
	}

IL_017e:
	{
		float L_37 = (__this->___internalBlurWidth_28);
		G_B17_0 = L_37;
		G_B17_1 = G_B16_0;
	}

IL_0184:
	{
		NullCheck(G_B17_1);
		G_B17_1->___internalBlurWidth_28 = G_B17_0;
		float L_38 = (__this->___internalBlurWidth_28);
		float L_39 = (__this->___foregroundOverlap_15);
		V_4 = ((float)((float)L_38*(float)L_39));
		RenderTexture_t55 * L_40 = ___source;
		NullCheck(L_40);
		int32_t L_41 = RenderTexture_get_width_m272(L_40, /*hidden argument*/NULL);
		RenderTexture_t55 * L_42 = ___source;
		NullCheck(L_42);
		int32_t L_43 = RenderTexture_get_height_m273(L_42, /*hidden argument*/NULL);
		RenderTexture_t55 * L_44 = ___source;
		NullCheck(L_44);
		int32_t L_45 = RenderTexture_get_format_m279(L_44, /*hidden argument*/NULL);
		RenderTexture_t55 * L_46 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_41, L_43, 0, L_45, /*hidden argument*/NULL);
		V_0 = L_46;
		RenderTexture_t55 * L_47 = ___source;
		NullCheck(L_47);
		int32_t L_48 = RenderTexture_get_width_m272(L_47, /*hidden argument*/NULL);
		RenderTexture_t55 * L_49 = ___source;
		NullCheck(L_49);
		int32_t L_50 = RenderTexture_get_height_m273(L_49, /*hidden argument*/NULL);
		RenderTexture_t55 * L_51 = ___source;
		NullCheck(L_51);
		int32_t L_52 = RenderTexture_get_format_m279(L_51, /*hidden argument*/NULL);
		RenderTexture_t55 * L_53 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_48, L_50, 0, L_52, /*hidden argument*/NULL);
		V_5 = L_53;
		RenderTexture_t55 * L_54 = ___source;
		DepthOfField_WriteCoc_m87(__this, L_54, 0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_55 = ___source;
		NullCheck(L_55);
		int32_t L_56 = RenderTexture_get_width_m272(L_55, /*hidden argument*/NULL);
		RenderTexture_t55 * L_57 = ___source;
		NullCheck(L_57);
		int32_t L_58 = RenderTexture_get_height_m273(L_57, /*hidden argument*/NULL);
		RenderTexture_t55 * L_59 = ___source;
		NullCheck(L_59);
		int32_t L_60 = RenderTexture_get_format_m279(L_59, /*hidden argument*/NULL);
		RenderTexture_t55 * L_61 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_56>>(int32_t)1)), ((int32_t)((int32_t)L_58>>(int32_t)1)), 0, L_60, /*hidden argument*/NULL);
		V_2 = L_61;
		RenderTexture_t55 * L_62 = ___source;
		NullCheck(L_62);
		int32_t L_63 = RenderTexture_get_width_m272(L_62, /*hidden argument*/NULL);
		RenderTexture_t55 * L_64 = ___source;
		NullCheck(L_64);
		int32_t L_65 = RenderTexture_get_height_m273(L_64, /*hidden argument*/NULL);
		RenderTexture_t55 * L_66 = ___source;
		NullCheck(L_66);
		int32_t L_67 = RenderTexture_get_format_m279(L_66, /*hidden argument*/NULL);
		RenderTexture_t55 * L_68 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_63>>(int32_t)1)), ((int32_t)((int32_t)L_65>>(int32_t)1)), 0, L_67, /*hidden argument*/NULL);
		V_3 = L_68;
		RenderTexture_t55 * L_69 = ___source;
		RenderTexture_t55 * L_70 = V_2;
		Material_t5 * L_71 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_69, L_70, L_71, ((int32_t)15), /*hidden argument*/NULL);
		Material_t5 * L_72 = (__this->___dofHdrMaterial_17);
		Vector4_t100  L_73 = {0};
		Vector4__ctor_m284(&L_73, (0.0f), (1.5f), (0.0f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_72);
		Material_SetVector_m285(L_72, _stringLiteral5, L_73, /*hidden argument*/NULL);
		RenderTexture_t55 * L_74 = V_2;
		RenderTexture_t55 * L_75 = V_3;
		Material_t5 * L_76 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_74, L_75, L_76, ((int32_t)19), /*hidden argument*/NULL);
		Material_t5 * L_77 = (__this->___dofHdrMaterial_17);
		Vector4_t100  L_78 = {0};
		Vector4__ctor_m284(&L_78, (1.5f), (0.0f), (0.0f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_77);
		Material_SetVector_m285(L_77, _stringLiteral5, L_78, /*hidden argument*/NULL);
		RenderTexture_t55 * L_79 = V_3;
		RenderTexture_t55 * L_80 = V_2;
		Material_t5 * L_81 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_79, L_80, L_81, ((int32_t)19), /*hidden argument*/NULL);
		bool L_82 = (__this->___nearBlur_14);
		if (!L_82)
		{
			goto IL_02a5;
		}
	}
	{
		RenderTexture_t55 * L_83 = ___source;
		RenderTexture_t55 * L_84 = V_3;
		Material_t5 * L_85 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_83, L_84, L_85, 4, /*hidden argument*/NULL);
	}

IL_02a5:
	{
		Material_t5 * L_86 = (__this->___dx11bokehMaterial_19);
		RenderTexture_t55 * L_87 = V_2;
		NullCheck(L_86);
		Material_SetTexture_m292(L_86, _stringLiteral64, L_87, /*hidden argument*/NULL);
		Material_t5 * L_88 = (__this->___dx11bokehMaterial_19);
		float L_89 = (__this->___dx11SpawnHeuristic_21);
		NullCheck(L_88);
		Material_SetFloat_m269(L_88, _stringLiteral65, L_89, /*hidden argument*/NULL);
		Material_t5 * L_90 = (__this->___dx11bokehMaterial_19);
		float L_91 = (__this->___dx11BokehScale_23);
		float L_92 = (__this->___dx11BokehIntensity_24);
		float L_93 = (__this->___dx11BokehThreshold_20);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_94 = Mathf_Clamp_m368(NULL /*static, unused*/, L_93, (0.005f), (4.0f), /*hidden argument*/NULL);
		float L_95 = (__this->___internalBlurWidth_28);
		Vector4_t100  L_96 = {0};
		Vector4__ctor_m284(&L_96, L_91, L_92, L_94, L_95, /*hidden argument*/NULL);
		NullCheck(L_90);
		Material_SetVector_m285(L_90, _stringLiteral66, L_96, /*hidden argument*/NULL);
		Material_t5 * L_97 = (__this->___dx11bokehMaterial_19);
		bool L_98 = (__this->___nearBlur_14);
		G_B20_0 = _stringLiteral67;
		G_B20_1 = L_97;
		if (!L_98)
		{
			G_B21_0 = _stringLiteral67;
			G_B21_1 = L_97;
			goto IL_0324;
		}
	}
	{
		RenderTexture_t55 * L_99 = V_3;
		G_B22_0 = L_99;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		goto IL_0325;
	}

IL_0324:
	{
		G_B22_0 = ((RenderTexture_t55 *)(NULL));
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
	}

IL_0325:
	{
		NullCheck(G_B22_2);
		Material_SetTexture_m292(G_B22_2, G_B22_1, G_B22_0, /*hidden argument*/NULL);
		ComputeBuffer_t49 * L_100 = (__this->___cbPoints_27);
		Graphics_SetRandomWriteTarget_m392(NULL /*static, unused*/, 1, L_100, /*hidden argument*/NULL);
		RenderTexture_t55 * L_101 = ___source;
		RenderTexture_t55 * L_102 = V_0;
		Material_t5 * L_103 = (__this->___dx11bokehMaterial_19);
		Graphics_Blit_m275(NULL /*static, unused*/, L_101, L_102, L_103, 0, /*hidden argument*/NULL);
		Graphics_ClearRandomWriteTargets_m393(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_104 = (__this->___nearBlur_14);
		if (!L_104)
		{
			goto IL_03c4;
		}
	}
	{
		Material_t5 * L_105 = (__this->___dofHdrMaterial_17);
		float L_106 = V_4;
		float L_107 = V_4;
		Vector4_t100  L_108 = {0};
		Vector4__ctor_m284(&L_108, (0.0f), L_106, (0.0f), L_107, /*hidden argument*/NULL);
		NullCheck(L_105);
		Material_SetVector_m285(L_105, _stringLiteral5, L_108, /*hidden argument*/NULL);
		RenderTexture_t55 * L_109 = V_3;
		RenderTexture_t55 * L_110 = V_2;
		Material_t5 * L_111 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_109, L_110, L_111, 2, /*hidden argument*/NULL);
		Material_t5 * L_112 = (__this->___dofHdrMaterial_17);
		float L_113 = V_4;
		float L_114 = V_4;
		Vector4_t100  L_115 = {0};
		Vector4__ctor_m284(&L_115, L_113, (0.0f), (0.0f), L_114, /*hidden argument*/NULL);
		NullCheck(L_112);
		Material_SetVector_m285(L_112, _stringLiteral5, L_115, /*hidden argument*/NULL);
		RenderTexture_t55 * L_116 = V_2;
		RenderTexture_t55 * L_117 = V_3;
		Material_t5 * L_118 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_116, L_117, L_118, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_119 = V_3;
		RenderTexture_t55 * L_120 = V_0;
		Material_t5 * L_121 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_119, L_120, L_121, 3, /*hidden argument*/NULL);
	}

IL_03c4:
	{
		RenderTexture_t55 * L_122 = V_0;
		RenderTexture_t55 * L_123 = V_5;
		Material_t5 * L_124 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_122, L_123, L_124, ((int32_t)20), /*hidden argument*/NULL);
		Material_t5 * L_125 = (__this->___dofHdrMaterial_17);
		float L_126 = (__this->___internalBlurWidth_28);
		float L_127 = (__this->___internalBlurWidth_28);
		Vector4_t100  L_128 = {0};
		Vector4__ctor_m284(&L_128, L_126, (0.0f), (0.0f), L_127, /*hidden argument*/NULL);
		NullCheck(L_125);
		Material_SetVector_m285(L_125, _stringLiteral5, L_128, /*hidden argument*/NULL);
		RenderTexture_t55 * L_129 = V_0;
		RenderTexture_t55 * L_130 = ___source;
		Material_t5 * L_131 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_129, L_130, L_131, 5, /*hidden argument*/NULL);
		Material_t5 * L_132 = (__this->___dofHdrMaterial_17);
		float L_133 = (__this->___internalBlurWidth_28);
		float L_134 = (__this->___internalBlurWidth_28);
		Vector4_t100  L_135 = {0};
		Vector4__ctor_m284(&L_135, (0.0f), L_133, (0.0f), L_134, /*hidden argument*/NULL);
		NullCheck(L_132);
		Material_SetVector_m285(L_132, _stringLiteral5, L_135, /*hidden argument*/NULL);
		RenderTexture_t55 * L_136 = ___source;
		RenderTexture_t55 * L_137 = V_5;
		Material_t5 * L_138 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_136, L_137, L_138, ((int32_t)21), /*hidden argument*/NULL);
		RenderTexture_t55 * L_139 = V_5;
		Graphics_SetRenderTarget_m286(NULL /*static, unused*/, L_139, /*hidden argument*/NULL);
		ComputeBuffer_t49 * L_140 = (__this->___cbPoints_27);
		ComputeBuffer_t49 * L_141 = (__this->___cbDrawArgs_26);
		ComputeBuffer_CopyCount_m394(NULL /*static, unused*/, L_140, L_141, 0, /*hidden argument*/NULL);
		Material_t5 * L_142 = (__this->___dx11bokehMaterial_19);
		ComputeBuffer_t49 * L_143 = (__this->___cbPoints_27);
		NullCheck(L_142);
		Material_SetBuffer_m395(L_142, _stringLiteral68, L_143, /*hidden argument*/NULL);
		Material_t5 * L_144 = (__this->___dx11bokehMaterial_19);
		Texture2D_t13 * L_145 = (__this->___dx11BokehTexture_22);
		NullCheck(L_144);
		Material_SetTexture_m292(L_144, _stringLiteral69, L_145, /*hidden argument*/NULL);
		Material_t5 * L_146 = (__this->___dx11bokehMaterial_19);
		RenderTexture_t55 * L_147 = ___source;
		NullCheck(L_147);
		int32_t L_148 = RenderTexture_get_width_m272(L_147, /*hidden argument*/NULL);
		RenderTexture_t55 * L_149 = ___source;
		NullCheck(L_149);
		int32_t L_150 = RenderTexture_get_height_m273(L_149, /*hidden argument*/NULL);
		float L_151 = (__this->___internalBlurWidth_28);
		Vector3_t28  L_152 = {0};
		Vector3__ctor_m396(&L_152, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_148)))))), ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_150)))))), L_151, /*hidden argument*/NULL);
		Vector4_t100  L_153 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_152, /*hidden argument*/NULL);
		NullCheck(L_146);
		Material_SetVector_m285(L_146, _stringLiteral70, L_153, /*hidden argument*/NULL);
		Material_t5 * L_154 = (__this->___dx11bokehMaterial_19);
		NullCheck(L_154);
		Material_SetPass_m398(L_154, 2, /*hidden argument*/NULL);
		ComputeBuffer_t49 * L_155 = (__this->___cbDrawArgs_26);
		Graphics_DrawProceduralIndirect_m399(NULL /*static, unused*/, 5, L_155, 0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_156 = V_5;
		RenderTexture_t55 * L_157 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_156, L_157, /*hidden argument*/NULL);
		RenderTexture_t55 * L_158 = V_5;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_158, /*hidden argument*/NULL);
		RenderTexture_t55 * L_159 = V_2;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_159, /*hidden argument*/NULL);
		RenderTexture_t55 * L_160 = V_3;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_160, /*hidden argument*/NULL);
		goto IL_091c;
	}

IL_050d:
	{
		RenderTexture_t55 * L_161 = ___source;
		NullCheck(L_161);
		int32_t L_162 = RenderTexture_get_width_m272(L_161, /*hidden argument*/NULL);
		RenderTexture_t55 * L_163 = ___source;
		NullCheck(L_163);
		int32_t L_164 = RenderTexture_get_height_m273(L_163, /*hidden argument*/NULL);
		RenderTexture_t55 * L_165 = ___source;
		NullCheck(L_165);
		int32_t L_166 = RenderTexture_get_format_m279(L_165, /*hidden argument*/NULL);
		RenderTexture_t55 * L_167 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_162>>(int32_t)1)), ((int32_t)((int32_t)L_164>>(int32_t)1)), 0, L_166, /*hidden argument*/NULL);
		V_0 = L_167;
		RenderTexture_t55 * L_168 = ___source;
		NullCheck(L_168);
		int32_t L_169 = RenderTexture_get_width_m272(L_168, /*hidden argument*/NULL);
		RenderTexture_t55 * L_170 = ___source;
		NullCheck(L_170);
		int32_t L_171 = RenderTexture_get_height_m273(L_170, /*hidden argument*/NULL);
		RenderTexture_t55 * L_172 = ___source;
		NullCheck(L_172);
		int32_t L_173 = RenderTexture_get_format_m279(L_172, /*hidden argument*/NULL);
		RenderTexture_t55 * L_174 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_169>>(int32_t)1)), ((int32_t)((int32_t)L_171>>(int32_t)1)), 0, L_173, /*hidden argument*/NULL);
		V_1 = L_174;
		float L_175 = (__this->___internalBlurWidth_28);
		float L_176 = (__this->___foregroundOverlap_15);
		V_4 = ((float)((float)L_175*(float)L_176));
		RenderTexture_t55 * L_177 = ___source;
		DepthOfField_WriteCoc_m87(__this, L_177, 0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_178 = ___source;
		NullCheck(L_178);
		Texture_set_filterMode_m298(L_178, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_179 = ___source;
		RenderTexture_t55 * L_180 = V_0;
		Material_t5 * L_181 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_179, L_180, L_181, 6, /*hidden argument*/NULL);
		RenderTexture_t55 * L_182 = V_0;
		NullCheck(L_182);
		int32_t L_183 = RenderTexture_get_width_m272(L_182, /*hidden argument*/NULL);
		RenderTexture_t55 * L_184 = V_0;
		NullCheck(L_184);
		int32_t L_185 = RenderTexture_get_height_m273(L_184, /*hidden argument*/NULL);
		RenderTexture_t55 * L_186 = V_0;
		NullCheck(L_186);
		int32_t L_187 = RenderTexture_get_format_m279(L_186, /*hidden argument*/NULL);
		RenderTexture_t55 * L_188 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_183>>(int32_t)1)), ((int32_t)((int32_t)L_185>>(int32_t)1)), 0, L_187, /*hidden argument*/NULL);
		V_2 = L_188;
		RenderTexture_t55 * L_189 = V_0;
		NullCheck(L_189);
		int32_t L_190 = RenderTexture_get_width_m272(L_189, /*hidden argument*/NULL);
		RenderTexture_t55 * L_191 = V_0;
		NullCheck(L_191);
		int32_t L_192 = RenderTexture_get_height_m273(L_191, /*hidden argument*/NULL);
		RenderTexture_t55 * L_193 = V_0;
		NullCheck(L_193);
		int32_t L_194 = RenderTexture_get_format_m279(L_193, /*hidden argument*/NULL);
		RenderTexture_t55 * L_195 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_190>>(int32_t)1)), ((int32_t)((int32_t)L_192>>(int32_t)1)), 0, L_194, /*hidden argument*/NULL);
		V_3 = L_195;
		RenderTexture_t55 * L_196 = V_0;
		RenderTexture_t55 * L_197 = V_2;
		Material_t5 * L_198 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_196, L_197, L_198, ((int32_t)15), /*hidden argument*/NULL);
		Material_t5 * L_199 = (__this->___dofHdrMaterial_17);
		Vector4_t100  L_200 = {0};
		Vector4__ctor_m284(&L_200, (0.0f), (1.5f), (0.0f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_199);
		Material_SetVector_m285(L_199, _stringLiteral5, L_200, /*hidden argument*/NULL);
		RenderTexture_t55 * L_201 = V_2;
		RenderTexture_t55 * L_202 = V_3;
		Material_t5 * L_203 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_201, L_202, L_203, ((int32_t)19), /*hidden argument*/NULL);
		Material_t5 * L_204 = (__this->___dofHdrMaterial_17);
		Vector4_t100  L_205 = {0};
		Vector4__ctor_m284(&L_205, (1.5f), (0.0f), (0.0f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_204);
		Material_SetVector_m285(L_204, _stringLiteral5, L_205, /*hidden argument*/NULL);
		RenderTexture_t55 * L_206 = V_3;
		RenderTexture_t55 * L_207 = V_2;
		Material_t5 * L_208 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_206, L_207, L_208, ((int32_t)19), /*hidden argument*/NULL);
		V_6 = (RenderTexture_t55 *)NULL;
		bool L_209 = (__this->___nearBlur_14);
		if (!L_209)
		{
			goto IL_0667;
		}
	}
	{
		RenderTexture_t55 * L_210 = ___source;
		NullCheck(L_210);
		int32_t L_211 = RenderTexture_get_width_m272(L_210, /*hidden argument*/NULL);
		RenderTexture_t55 * L_212 = ___source;
		NullCheck(L_212);
		int32_t L_213 = RenderTexture_get_height_m273(L_212, /*hidden argument*/NULL);
		RenderTexture_t55 * L_214 = ___source;
		NullCheck(L_214);
		int32_t L_215 = RenderTexture_get_format_m279(L_214, /*hidden argument*/NULL);
		RenderTexture_t55 * L_216 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_211>>(int32_t)1)), ((int32_t)((int32_t)L_213>>(int32_t)1)), 0, L_215, /*hidden argument*/NULL);
		V_6 = L_216;
		RenderTexture_t55 * L_217 = ___source;
		RenderTexture_t55 * L_218 = V_6;
		Material_t5 * L_219 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_217, L_218, L_219, 4, /*hidden argument*/NULL);
	}

IL_0667:
	{
		Material_t5 * L_220 = (__this->___dx11bokehMaterial_19);
		RenderTexture_t55 * L_221 = V_2;
		NullCheck(L_220);
		Material_SetTexture_m292(L_220, _stringLiteral64, L_221, /*hidden argument*/NULL);
		Material_t5 * L_222 = (__this->___dx11bokehMaterial_19);
		float L_223 = (__this->___dx11SpawnHeuristic_21);
		NullCheck(L_222);
		Material_SetFloat_m269(L_222, _stringLiteral65, L_223, /*hidden argument*/NULL);
		Material_t5 * L_224 = (__this->___dx11bokehMaterial_19);
		float L_225 = (__this->___dx11BokehScale_23);
		float L_226 = (__this->___dx11BokehIntensity_24);
		float L_227 = (__this->___dx11BokehThreshold_20);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_228 = Mathf_Clamp_m368(NULL /*static, unused*/, L_227, (0.005f), (4.0f), /*hidden argument*/NULL);
		float L_229 = (__this->___internalBlurWidth_28);
		Vector4_t100  L_230 = {0};
		Vector4__ctor_m284(&L_230, L_225, L_226, L_228, L_229, /*hidden argument*/NULL);
		NullCheck(L_224);
		Material_SetVector_m285(L_224, _stringLiteral66, L_230, /*hidden argument*/NULL);
		Material_t5 * L_231 = (__this->___dx11bokehMaterial_19);
		RenderTexture_t55 * L_232 = V_6;
		NullCheck(L_231);
		Material_SetTexture_m292(L_231, _stringLiteral67, L_232, /*hidden argument*/NULL);
		ComputeBuffer_t49 * L_233 = (__this->___cbPoints_27);
		Graphics_SetRandomWriteTarget_m392(NULL /*static, unused*/, 1, L_233, /*hidden argument*/NULL);
		RenderTexture_t55 * L_234 = V_0;
		RenderTexture_t55 * L_235 = V_1;
		Material_t5 * L_236 = (__this->___dx11bokehMaterial_19);
		Graphics_Blit_m275(NULL /*static, unused*/, L_234, L_235, L_236, 0, /*hidden argument*/NULL);
		Graphics_ClearRandomWriteTargets_m393(NULL /*static, unused*/, /*hidden argument*/NULL);
		RenderTexture_t55 * L_237 = V_2;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_237, /*hidden argument*/NULL);
		RenderTexture_t55 * L_238 = V_3;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_238, /*hidden argument*/NULL);
		bool L_239 = (__this->___nearBlur_14);
		if (!L_239)
		{
			goto IL_0785;
		}
	}
	{
		Material_t5 * L_240 = (__this->___dofHdrMaterial_17);
		float L_241 = V_4;
		float L_242 = V_4;
		Vector4_t100  L_243 = {0};
		Vector4__ctor_m284(&L_243, (0.0f), L_241, (0.0f), L_242, /*hidden argument*/NULL);
		NullCheck(L_240);
		Material_SetVector_m285(L_240, _stringLiteral5, L_243, /*hidden argument*/NULL);
		RenderTexture_t55 * L_244 = V_6;
		RenderTexture_t55 * L_245 = V_0;
		Material_t5 * L_246 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_244, L_245, L_246, 2, /*hidden argument*/NULL);
		Material_t5 * L_247 = (__this->___dofHdrMaterial_17);
		float L_248 = V_4;
		float L_249 = V_4;
		Vector4_t100  L_250 = {0};
		Vector4__ctor_m284(&L_250, L_248, (0.0f), (0.0f), L_249, /*hidden argument*/NULL);
		NullCheck(L_247);
		Material_SetVector_m285(L_247, _stringLiteral5, L_250, /*hidden argument*/NULL);
		RenderTexture_t55 * L_251 = V_0;
		RenderTexture_t55 * L_252 = V_6;
		Material_t5 * L_253 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_251, L_252, L_253, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_254 = V_6;
		RenderTexture_t55 * L_255 = V_1;
		Material_t5 * L_256 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_254, L_255, L_256, 3, /*hidden argument*/NULL);
	}

IL_0785:
	{
		Material_t5 * L_257 = (__this->___dofHdrMaterial_17);
		float L_258 = (__this->___internalBlurWidth_28);
		float L_259 = (__this->___internalBlurWidth_28);
		Vector4_t100  L_260 = {0};
		Vector4__ctor_m284(&L_260, L_258, (0.0f), (0.0f), L_259, /*hidden argument*/NULL);
		NullCheck(L_257);
		Material_SetVector_m285(L_257, _stringLiteral5, L_260, /*hidden argument*/NULL);
		RenderTexture_t55 * L_261 = V_1;
		RenderTexture_t55 * L_262 = V_0;
		Material_t5 * L_263 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_261, L_262, L_263, 5, /*hidden argument*/NULL);
		Material_t5 * L_264 = (__this->___dofHdrMaterial_17);
		float L_265 = (__this->___internalBlurWidth_28);
		float L_266 = (__this->___internalBlurWidth_28);
		Vector4_t100  L_267 = {0};
		Vector4__ctor_m284(&L_267, (0.0f), L_265, (0.0f), L_266, /*hidden argument*/NULL);
		NullCheck(L_264);
		Material_SetVector_m285(L_264, _stringLiteral5, L_267, /*hidden argument*/NULL);
		RenderTexture_t55 * L_268 = V_0;
		RenderTexture_t55 * L_269 = V_1;
		Material_t5 * L_270 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_268, L_269, L_270, 5, /*hidden argument*/NULL);
		RenderTexture_t55 * L_271 = V_1;
		Graphics_SetRenderTarget_m286(NULL /*static, unused*/, L_271, /*hidden argument*/NULL);
		ComputeBuffer_t49 * L_272 = (__this->___cbPoints_27);
		ComputeBuffer_t49 * L_273 = (__this->___cbDrawArgs_26);
		ComputeBuffer_CopyCount_m394(NULL /*static, unused*/, L_272, L_273, 0, /*hidden argument*/NULL);
		Material_t5 * L_274 = (__this->___dx11bokehMaterial_19);
		ComputeBuffer_t49 * L_275 = (__this->___cbPoints_27);
		NullCheck(L_274);
		Material_SetBuffer_m395(L_274, _stringLiteral68, L_275, /*hidden argument*/NULL);
		Material_t5 * L_276 = (__this->___dx11bokehMaterial_19);
		Texture2D_t13 * L_277 = (__this->___dx11BokehTexture_22);
		NullCheck(L_276);
		Material_SetTexture_m292(L_276, _stringLiteral69, L_277, /*hidden argument*/NULL);
		Material_t5 * L_278 = (__this->___dx11bokehMaterial_19);
		RenderTexture_t55 * L_279 = V_1;
		NullCheck(L_279);
		int32_t L_280 = RenderTexture_get_width_m272(L_279, /*hidden argument*/NULL);
		RenderTexture_t55 * L_281 = V_1;
		NullCheck(L_281);
		int32_t L_282 = RenderTexture_get_height_m273(L_281, /*hidden argument*/NULL);
		float L_283 = (__this->___internalBlurWidth_28);
		Vector3_t28  L_284 = {0};
		Vector3__ctor_m396(&L_284, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_280)))))), ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_282)))))), L_283, /*hidden argument*/NULL);
		Vector4_t100  L_285 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_284, /*hidden argument*/NULL);
		NullCheck(L_278);
		Material_SetVector_m285(L_278, _stringLiteral70, L_285, /*hidden argument*/NULL);
		Material_t5 * L_286 = (__this->___dx11bokehMaterial_19);
		NullCheck(L_286);
		Material_SetPass_m398(L_286, 1, /*hidden argument*/NULL);
		ComputeBuffer_t49 * L_287 = (__this->___cbDrawArgs_26);
		Graphics_DrawProceduralIndirect_m399(NULL /*static, unused*/, 5, L_287, 0, /*hidden argument*/NULL);
		Material_t5 * L_288 = (__this->___dofHdrMaterial_17);
		RenderTexture_t55 * L_289 = V_1;
		NullCheck(L_288);
		Material_SetTexture_m292(L_288, _stringLiteral71, L_289, /*hidden argument*/NULL);
		Material_t5 * L_290 = (__this->___dofHdrMaterial_17);
		RenderTexture_t55 * L_291 = V_6;
		NullCheck(L_290);
		Material_SetTexture_m292(L_290, _stringLiteral62, L_291, /*hidden argument*/NULL);
		Material_t5 * L_292 = (__this->___dofHdrMaterial_17);
		RenderTexture_t55 * L_293 = ___source;
		NullCheck(L_293);
		int32_t L_294 = RenderTexture_get_width_m272(L_293, /*hidden argument*/NULL);
		RenderTexture_t55 * L_295 = V_1;
		NullCheck(L_295);
		int32_t L_296 = RenderTexture_get_width_m272(L_295, /*hidden argument*/NULL);
		float L_297 = (__this->___internalBlurWidth_28);
		Vector4_t100  L_298 = Vector4_get_one_m400(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector4_t100  L_299 = Vector4_op_Multiply_m401(NULL /*static, unused*/, ((float)((float)((float)((float)((float)((float)(1.0f)*(float)(((float)L_294))))/(float)((float)((float)(1.0f)*(float)(((float)L_296))))))*(float)L_297)), L_298, /*hidden argument*/NULL);
		NullCheck(L_292);
		Material_SetVector_m285(L_292, _stringLiteral5, L_299, /*hidden argument*/NULL);
		RenderTexture_t55 * L_300 = ___source;
		RenderTexture_t55 * L_301 = ___destination;
		Material_t5 * L_302 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_300, L_301, L_302, ((int32_t)9), /*hidden argument*/NULL);
		RenderTexture_t55 * L_303 = V_6;
		bool L_304 = Object_op_Implicit_m294(NULL /*static, unused*/, L_303, /*hidden argument*/NULL);
		if (!L_304)
		{
			goto IL_091c;
		}
	}
	{
		RenderTexture_t55 * L_305 = V_6;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_305, /*hidden argument*/NULL);
	}

IL_091c:
	{
		goto IL_0ac0;
	}

IL_0921:
	{
		RenderTexture_t55 * L_306 = ___source;
		NullCheck(L_306);
		Texture_set_filterMode_m298(L_306, 1, /*hidden argument*/NULL);
		bool L_307 = (__this->___highResolution_11);
		if (!L_307)
		{
			goto IL_0945;
		}
	}
	{
		float L_308 = (__this->___internalBlurWidth_28);
		__this->___internalBlurWidth_28 = ((float)((float)L_308*(float)(2.0f)));
	}

IL_0945:
	{
		RenderTexture_t55 * L_309 = ___source;
		DepthOfField_WriteCoc_m87(__this, L_309, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_310 = ___source;
		NullCheck(L_310);
		int32_t L_311 = RenderTexture_get_width_m272(L_310, /*hidden argument*/NULL);
		RenderTexture_t55 * L_312 = ___source;
		NullCheck(L_312);
		int32_t L_313 = RenderTexture_get_height_m273(L_312, /*hidden argument*/NULL);
		RenderTexture_t55 * L_314 = ___source;
		NullCheck(L_314);
		int32_t L_315 = RenderTexture_get_format_m279(L_314, /*hidden argument*/NULL);
		RenderTexture_t55 * L_316 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_311>>(int32_t)1)), ((int32_t)((int32_t)L_313>>(int32_t)1)), 0, L_315, /*hidden argument*/NULL);
		V_0 = L_316;
		RenderTexture_t55 * L_317 = ___source;
		NullCheck(L_317);
		int32_t L_318 = RenderTexture_get_width_m272(L_317, /*hidden argument*/NULL);
		RenderTexture_t55 * L_319 = ___source;
		NullCheck(L_319);
		int32_t L_320 = RenderTexture_get_height_m273(L_319, /*hidden argument*/NULL);
		RenderTexture_t55 * L_321 = ___source;
		NullCheck(L_321);
		int32_t L_322 = RenderTexture_get_format_m279(L_321, /*hidden argument*/NULL);
		RenderTexture_t55 * L_323 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_318>>(int32_t)1)), ((int32_t)((int32_t)L_320>>(int32_t)1)), 0, L_322, /*hidden argument*/NULL);
		V_1 = L_323;
		int32_t L_324 = (__this->___blurSampleCount_13);
		if ((((int32_t)L_324) == ((int32_t)2)))
		{
			goto IL_099f;
		}
	}
	{
		int32_t L_325 = (__this->___blurSampleCount_13);
		if ((!(((uint32_t)L_325) == ((uint32_t)1))))
		{
			goto IL_09a6;
		}
	}

IL_099f:
	{
		G_B38_0 = ((int32_t)17);
		goto IL_09a8;
	}

IL_09a6:
	{
		G_B38_0 = ((int32_t)11);
	}

IL_09a8:
	{
		V_7 = G_B38_0;
		bool L_326 = (__this->___highResolution_11);
		if (!L_326)
		{
			goto IL_09f4;
		}
	}
	{
		Material_t5 * L_327 = (__this->___dofHdrMaterial_17);
		float L_328 = (__this->___internalBlurWidth_28);
		float L_329 = (__this->___internalBlurWidth_28);
		Vector4_t100  L_330 = {0};
		Vector4__ctor_m284(&L_330, (0.0f), L_328, (0.025f), L_329, /*hidden argument*/NULL);
		NullCheck(L_327);
		Material_SetVector_m285(L_327, _stringLiteral5, L_330, /*hidden argument*/NULL);
		RenderTexture_t55 * L_331 = ___source;
		RenderTexture_t55 * L_332 = ___destination;
		Material_t5 * L_333 = (__this->___dofHdrMaterial_17);
		int32_t L_334 = V_7;
		Graphics_Blit_m275(NULL /*static, unused*/, L_331, L_332, L_333, L_334, /*hidden argument*/NULL);
		goto IL_0ac0;
	}

IL_09f4:
	{
		Material_t5 * L_335 = (__this->___dofHdrMaterial_17);
		float L_336 = (__this->___internalBlurWidth_28);
		float L_337 = (__this->___internalBlurWidth_28);
		Vector4_t100  L_338 = {0};
		Vector4__ctor_m284(&L_338, (0.0f), L_336, (0.1f), L_337, /*hidden argument*/NULL);
		NullCheck(L_335);
		Material_SetVector_m285(L_335, _stringLiteral5, L_338, /*hidden argument*/NULL);
		RenderTexture_t55 * L_339 = ___source;
		RenderTexture_t55 * L_340 = V_0;
		Material_t5 * L_341 = (__this->___dofHdrMaterial_17);
		Graphics_Blit_m275(NULL /*static, unused*/, L_339, L_340, L_341, 6, /*hidden argument*/NULL);
		RenderTexture_t55 * L_342 = V_0;
		RenderTexture_t55 * L_343 = V_1;
		Material_t5 * L_344 = (__this->___dofHdrMaterial_17);
		int32_t L_345 = V_7;
		Graphics_Blit_m275(NULL /*static, unused*/, L_342, L_343, L_344, L_345, /*hidden argument*/NULL);
		Material_t5 * L_346 = (__this->___dofHdrMaterial_17);
		RenderTexture_t55 * L_347 = V_1;
		NullCheck(L_346);
		Material_SetTexture_m292(L_346, _stringLiteral71, L_347, /*hidden argument*/NULL);
		Material_t5 * L_348 = (__this->___dofHdrMaterial_17);
		NullCheck(L_348);
		Material_SetTexture_m292(L_348, _stringLiteral62, (Texture_t40 *)NULL, /*hidden argument*/NULL);
		Material_t5 * L_349 = (__this->___dofHdrMaterial_17);
		Vector4_t100  L_350 = Vector4_get_one_m400(NULL /*static, unused*/, /*hidden argument*/NULL);
		RenderTexture_t55 * L_351 = ___source;
		NullCheck(L_351);
		int32_t L_352 = RenderTexture_get_width_m272(L_351, /*hidden argument*/NULL);
		RenderTexture_t55 * L_353 = V_1;
		NullCheck(L_353);
		int32_t L_354 = RenderTexture_get_width_m272(L_353, /*hidden argument*/NULL);
		Vector4_t100  L_355 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_350, ((float)((float)((float)((float)(1.0f)*(float)(((float)L_352))))/(float)((float)((float)(1.0f)*(float)(((float)L_354)))))), /*hidden argument*/NULL);
		float L_356 = (__this->___internalBlurWidth_28);
		Vector4_t100  L_357 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_355, L_356, /*hidden argument*/NULL);
		NullCheck(L_349);
		Material_SetVector_m285(L_349, _stringLiteral5, L_357, /*hidden argument*/NULL);
		RenderTexture_t55 * L_358 = ___source;
		RenderTexture_t55 * L_359 = ___destination;
		Material_t5 * L_360 = (__this->___dofHdrMaterial_17);
		int32_t L_361 = (__this->___blurSampleCount_13);
		G_B41_0 = L_360;
		G_B41_1 = L_359;
		G_B41_2 = L_358;
		if ((!(((uint32_t)L_361) == ((uint32_t)2))))
		{
			G_B42_0 = L_360;
			G_B42_1 = L_359;
			G_B42_2 = L_358;
			goto IL_0ab9;
		}
	}
	{
		G_B43_0 = ((int32_t)18);
		G_B43_1 = G_B41_0;
		G_B43_2 = G_B41_1;
		G_B43_3 = G_B41_2;
		goto IL_0abb;
	}

IL_0ab9:
	{
		G_B43_0 = ((int32_t)12);
		G_B43_1 = G_B42_0;
		G_B43_2 = G_B42_1;
		G_B43_3 = G_B42_2;
	}

IL_0abb:
	{
		Graphics_Blit_m275(NULL /*static, unused*/, G_B43_3, G_B43_2, G_B43_1, G_B43_0, /*hidden argument*/NULL);
	}

IL_0ac0:
	{
		RenderTexture_t55 * L_362 = V_0;
		bool L_363 = Object_op_Implicit_m294(NULL /*static, unused*/, L_362, /*hidden argument*/NULL);
		if (!L_363)
		{
			goto IL_0ad1;
		}
	}
	{
		RenderTexture_t55 * L_364 = V_0;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_364, /*hidden argument*/NULL);
	}

IL_0ad1:
	{
		RenderTexture_t55 * L_365 = V_1;
		bool L_366 = Object_op_Implicit_m294(NULL /*static, unused*/, L_365, /*hidden argument*/NULL);
		if (!L_366)
		{
			goto IL_0ae2;
		}
	}
	{
		RenderTexture_t55 * L_367 = V_1;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_367, /*hidden argument*/NULL);
	}

IL_0ae2:
	{
		return;
	}
}
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/Dof34QualitySetting
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_32.h"
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/Dof34QualitySetting
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_32MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofResolution
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_33.h"
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofResolution
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_33MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_34.h"
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_34MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/BokehDestination
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_35.h"
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/BokehDestination
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_35MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_36.h"
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_36MethodDeclarations.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// UnityStandardAssets.ImageEffects.Quads
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_47MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void DepthOfFieldDeprecated__ctor_m89 (DepthOfFieldDeprecated_t54 * __this, const MethodInfo* method)
{
	{
		__this->___quality_7 = 1;
		__this->___resolution_8 = 4;
		__this->___simpleTweakMode_9 = 1;
		__this->___focalPoint_10 = (1.0f);
		__this->___smoothness_11 = (0.5f);
		__this->___focalZStartCurve_13 = (1.0f);
		__this->___focalZEndCurve_14 = (1.0f);
		__this->___focalStartCurve_15 = (2.0f);
		__this->___focalEndCurve_16 = (2.0f);
		__this->___focalDistance01_17 = (0.1f);
		__this->___bluriness_20 = 2;
		__this->___maxBlurSpread_21 = (1.75f);
		__this->___foregroundBlurExtrude_22 = (1.15f);
		__this->___bokehDestination_28 = 1;
		__this->___widthOverHeight_29 = (1.25f);
		__this->___oneOverBaseSize_30 = (0.001953125f);
		__this->___bokehSupport_32 = 1;
		__this->___bokehScale_35 = (2.4f);
		__this->___bokehIntensity_36 = (0.15f);
		__this->___bokehThresholdContrast_37 = (0.1f);
		__this->___bokehThresholdLuminance_38 = (0.55f);
		__this->___bokehDownsample_39 = 1;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.cctor()
extern TypeInfo* DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var;
extern "C" void DepthOfFieldDeprecated__cctor_m90 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		((DepthOfFieldDeprecated_t54_StaticFields*)DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var->static_fields)->___SMOOTH_DOWNSAMPLE_PASS_5 = 6;
		((DepthOfFieldDeprecated_t54_StaticFields*)DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var->static_fields)->___BOKEH_EXTRA_BLUR_6 = (2.0f);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CreateMaterials()
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void DepthOfFieldDeprecated_CreateMaterials_m91 (DepthOfFieldDeprecated_t54 * __this, const MethodInfo* method)
{
	{
		Shader_t4 * L_0 = (__this->___dofBlurShader_23);
		Material_t5 * L_1 = (__this->___dofBlurMaterial_24);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___dofBlurMaterial_24 = L_2;
		Shader_t4 * L_3 = (__this->___dofShader_25);
		Material_t5 * L_4 = (__this->___dofMaterial_26);
		Material_t5 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->___dofMaterial_26 = L_5;
		Shader_t4 * L_6 = (__this->___bokehShader_33);
		NullCheck(L_6);
		bool L_7 = Shader_get_isSupported_m266(L_6, /*hidden argument*/NULL);
		__this->___bokehSupport_32 = L_7;
		bool L_8 = (__this->___bokeh_31);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		bool L_9 = (__this->___bokehSupport_32);
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		Shader_t4 * L_10 = (__this->___bokehShader_33);
		bool L_11 = Object_op_Implicit_m294(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007f;
		}
	}
	{
		Shader_t4 * L_12 = (__this->___bokehShader_33);
		Material_t5 * L_13 = (__this->___bokehMaterial_40);
		Material_t5 * L_14 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_12, L_13, /*hidden argument*/NULL);
		__this->___bokehMaterial_40 = L_14;
	}

IL_007f:
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CheckResources()
extern "C" bool DepthOfFieldDeprecated_CheckResources_m92 (DepthOfFieldDeprecated_t54 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 1, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___dofBlurShader_23);
		Material_t5 * L_1 = (__this->___dofBlurMaterial_24);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___dofBlurMaterial_24 = L_2;
		Shader_t4 * L_3 = (__this->___dofShader_25);
		Material_t5 * L_4 = (__this->___dofMaterial_26);
		Material_t5 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->___dofMaterial_26 = L_5;
		Shader_t4 * L_6 = (__this->___bokehShader_33);
		NullCheck(L_6);
		bool L_7 = Shader_get_isSupported_m266(L_6, /*hidden argument*/NULL);
		__this->___bokehSupport_32 = L_7;
		bool L_8 = (__this->___bokeh_31);
		if (!L_8)
		{
			goto IL_0087;
		}
	}
	{
		bool L_9 = (__this->___bokehSupport_32);
		if (!L_9)
		{
			goto IL_0087;
		}
	}
	{
		Shader_t4 * L_10 = (__this->___bokehShader_33);
		bool L_11 = Object_op_Implicit_m294(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		Shader_t4 * L_12 = (__this->___bokehShader_33);
		Material_t5 * L_13 = (__this->___bokehMaterial_40);
		Material_t5 * L_14 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_12, L_13, /*hidden argument*/NULL);
		__this->___bokehMaterial_40 = L_14;
	}

IL_0087:
	{
		bool L_15 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_15)
		{
			goto IL_0098;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0098:
	{
		bool L_16 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_16;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnDisable()
// UnityStandardAssets.ImageEffects.Quads
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_47MethodDeclarations.h"
extern TypeInfo* Quads_t66_il2cpp_TypeInfo_var;
extern "C" void DepthOfFieldDeprecated_OnDisable_m93 (DepthOfFieldDeprecated_t54 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quads_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		Quads_Cleanup_m166(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnEnable()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern "C" void DepthOfFieldDeprecated_OnEnable_m94 (DepthOfFieldDeprecated_t54 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t32 * L_0 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		__this->____camera_41 = L_0;
		Camera_t32 * L_1 = (__this->____camera_41);
		Camera_t32 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = Camera_get_depthTextureMode_m319(L_2, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_depthTextureMode_m320(L_2, ((int32_t)((int32_t)L_3|(int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::FocalDistance01(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" float DepthOfFieldDeprecated_FocalDistance01_m95 (DepthOfFieldDeprecated_t54 * __this, float ___worldDist, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	{
		Camera_t32 * L_0 = (__this->____camera_41);
		float L_1 = ___worldDist;
		Camera_t32 * L_2 = (__this->____camera_41);
		NullCheck(L_2);
		float L_3 = Camera_get_nearClipPlane_m387(L_2, /*hidden argument*/NULL);
		Camera_t32 * L_4 = (__this->____camera_41);
		NullCheck(L_4);
		Transform_t48 * L_5 = Component_get_transform_m332(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t28  L_6 = Transform_get_forward_m340(L_5, /*hidden argument*/NULL);
		Vector3_t28  L_7 = Vector3_op_Multiply_m388(NULL /*static, unused*/, ((float)((float)L_1-(float)L_3)), L_6, /*hidden argument*/NULL);
		Camera_t32 * L_8 = (__this->____camera_41);
		NullCheck(L_8);
		Transform_t48 * L_9 = Component_get_transform_m332(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t28  L_10 = Transform_get_position_m335(L_9, /*hidden argument*/NULL);
		Vector3_t28  L_11 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t28  L_12 = Camera_WorldToViewportPoint_m390(L_0, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		float L_13 = ((&V_0)->___z_3);
		Camera_t32 * L_14 = (__this->____camera_41);
		NullCheck(L_14);
		float L_15 = Camera_get_farClipPlane_m391(L_14, /*hidden argument*/NULL);
		Camera_t32 * L_16 = (__this->____camera_41);
		NullCheck(L_16);
		float L_17 = Camera_get_nearClipPlane_m387(L_16, /*hidden argument*/NULL);
		return ((float)((float)L_13/(float)((float)((float)L_15-(float)L_17))));
	}
}
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetDividerBasedOnQuality()
extern "C" int32_t DepthOfFieldDeprecated_GetDividerBasedOnQuality_m96 (DepthOfFieldDeprecated_t54 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		int32_t L_0 = (__this->___resolution_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0015;
		}
	}
	{
		V_0 = 2;
		goto IL_0023;
	}

IL_0015:
	{
		int32_t L_1 = (__this->___resolution_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0023;
		}
	}
	{
		V_0 = 2;
	}

IL_0023:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetLowResolutionDividerBasedOnQuality(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t DepthOfFieldDeprecated_GetLowResolutionDividerBasedOnQuality_m97 (DepthOfFieldDeprecated_t54 * __this, int32_t ___baseDivider, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___baseDivider;
		V_0 = L_0;
		int32_t L_1 = (__this->___resolution_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2*(int32_t)2));
	}

IL_0012:
	{
		int32_t L_3 = (__this->___resolution_8);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4*(int32_t)2));
	}

IL_0022:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_36MethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern TypeInfo* DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral72;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral73;
extern Il2CppCodeGenString* _stringLiteral6;
extern Il2CppCodeGenString* _stringLiteral74;
extern Il2CppCodeGenString* _stringLiteral75;
extern Il2CppCodeGenString* _stringLiteral76;
extern Il2CppCodeGenString* _stringLiteral77;
extern "C" void DepthOfFieldDeprecated_OnRenderImage_m98 (DepthOfFieldDeprecated_t54 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral72 = il2cpp_codegen_string_literal_from_index(72);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		_stringLiteral73 = il2cpp_codegen_string_literal_from_index(73);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		_stringLiteral74 = il2cpp_codegen_string_literal_from_index(74);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		_stringLiteral76 = il2cpp_codegen_string_literal_from_index(76);
		_stringLiteral77 = il2cpp_codegen_string_literal_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	Vector3_t28  V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector3_t28  V_6 = {0};
	DepthOfFieldDeprecated_t54 * G_B6_0 = {0};
	DepthOfFieldDeprecated_t54 * G_B5_0 = {0};
	int32_t G_B7_0 = 0;
	DepthOfFieldDeprecated_t54 * G_B7_1 = {0};
	float G_B10_0 = 0.0f;
	DepthOfFieldDeprecated_t54 * G_B13_0 = {0};
	DepthOfFieldDeprecated_t54 * G_B12_0 = {0};
	float G_B14_0 = 0.0f;
	DepthOfFieldDeprecated_t54 * G_B14_1 = {0};
	int32_t G_B17_0 = 0;
	int32_t G_B24_0 = 0;
	String_t* G_B27_0 = {0};
	Material_t5 * G_B27_1 = {0};
	String_t* G_B26_0 = {0};
	Material_t5 * G_B26_1 = {0};
	float G_B28_0 = 0.0f;
	String_t* G_B28_1 = {0};
	Material_t5 * G_B28_2 = {0};
	float G_B30_0 = 0.0f;
	String_t* G_B30_1 = {0};
	Material_t5 * G_B30_2 = {0};
	float G_B29_0 = 0.0f;
	String_t* G_B29_1 = {0};
	Material_t5 * G_B29_2 = {0};
	float G_B31_0 = 0.0f;
	float G_B31_1 = 0.0f;
	String_t* G_B31_2 = {0};
	Material_t5 * G_B31_3 = {0};
	RenderTexture_t55 * G_B40_0 = {0};
	RenderTexture_t55 * G_B39_0 = {0};
	RenderTexture_t55 * G_B41_0 = {0};
	RenderTexture_t55 * G_B41_1 = {0};
	Material_t5 * G_B43_0 = {0};
	RenderTexture_t55 * G_B43_1 = {0};
	RenderTexture_t55 * G_B43_2 = {0};
	Material_t5 * G_B42_0 = {0};
	RenderTexture_t55 * G_B42_1 = {0};
	RenderTexture_t55 * G_B42_2 = {0};
	int32_t G_B44_0 = 0;
	Material_t5 * G_B44_1 = {0};
	RenderTexture_t55 * G_B44_2 = {0};
	RenderTexture_t55 * G_B44_3 = {0};
	Material_t5 * G_B51_0 = {0};
	RenderTexture_t55 * G_B51_1 = {0};
	RenderTexture_t55 * G_B51_2 = {0};
	Material_t5 * G_B50_0 = {0};
	RenderTexture_t55 * G_B50_1 = {0};
	RenderTexture_t55 * G_B50_2 = {0};
	int32_t G_B52_0 = 0;
	Material_t5 * G_B52_1 = {0};
	RenderTexture_t55 * G_B52_2 = {0};
	RenderTexture_t55 * G_B52_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		float L_3 = (__this->___smoothness_11);
		if ((!(((float)L_3) < ((float)(0.1f)))))
		{
			goto IL_002e;
		}
	}
	{
		__this->___smoothness_11 = (0.1f);
	}

IL_002e:
	{
		bool L_4 = (__this->___bokeh_31);
		G_B5_0 = __this;
		if (!L_4)
		{
			G_B6_0 = __this;
			goto IL_0042;
		}
	}
	{
		bool L_5 = (__this->___bokehSupport_32);
		G_B7_0 = ((int32_t)(L_5));
		G_B7_1 = G_B5_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_0043:
	{
		NullCheck(G_B7_1);
		G_B7_1->___bokeh_31 = G_B7_0;
		bool L_6 = (__this->___bokeh_31);
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var);
		float L_7 = ((DepthOfFieldDeprecated_t54_StaticFields*)DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var->static_fields)->___BOKEH_EXTRA_BLUR_6;
		G_B10_0 = L_7;
		goto IL_0062;
	}

IL_005d:
	{
		G_B10_0 = (1.0f);
	}

IL_0062:
	{
		V_0 = G_B10_0;
		int32_t L_8 = (__this->___quality_7);
		V_1 = ((((int32_t)L_8) > ((int32_t)1))? 1 : 0);
		float L_9 = (__this->___focalSize_19);
		Camera_t32 * L_10 = (__this->____camera_41);
		NullCheck(L_10);
		float L_11 = Camera_get_farClipPlane_m391(L_10, /*hidden argument*/NULL);
		Camera_t32 * L_12 = (__this->____camera_41);
		NullCheck(L_12);
		float L_13 = Camera_get_nearClipPlane_m387(L_12, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_9/(float)((float)((float)L_11-(float)L_13))));
		bool L_14 = (__this->___simpleTweakMode_9);
		if (!L_14)
		{
			goto IL_0130;
		}
	}
	{
		Transform_t48 * L_15 = (__this->___objectFocus_18);
		bool L_16 = Object_op_Implicit_m294(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		G_B12_0 = __this;
		if (!L_16)
		{
			G_B13_0 = __this;
			goto IL_00d8;
		}
	}
	{
		Camera_t32 * L_17 = (__this->____camera_41);
		Transform_t48 * L_18 = (__this->___objectFocus_18);
		NullCheck(L_18);
		Vector3_t28  L_19 = Transform_get_position_m335(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t28  L_20 = Camera_WorldToViewportPoint_m390(L_17, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		float L_21 = ((&V_6)->___z_3);
		Camera_t32 * L_22 = (__this->____camera_41);
		NullCheck(L_22);
		float L_23 = Camera_get_farClipPlane_m391(L_22, /*hidden argument*/NULL);
		G_B14_0 = ((float)((float)L_21/(float)L_23));
		G_B14_1 = G_B12_0;
		goto IL_00e4;
	}

IL_00d8:
	{
		float L_24 = (__this->___focalPoint_10);
		float L_25 = DepthOfFieldDeprecated_FocalDistance01_m95(__this, L_24, /*hidden argument*/NULL);
		G_B14_0 = L_25;
		G_B14_1 = G_B13_0;
	}

IL_00e4:
	{
		NullCheck(G_B14_1);
		G_B14_1->___focalDistance01_17 = G_B14_0;
		float L_26 = (__this->___focalDistance01_17);
		float L_27 = (__this->___smoothness_11);
		__this->___focalStartCurve_15 = ((float)((float)L_26*(float)L_27));
		float L_28 = (__this->___focalStartCurve_15);
		__this->___focalEndCurve_16 = L_28;
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_0129;
		}
	}
	{
		float L_30 = (__this->___focalPoint_10);
		Camera_t32 * L_31 = (__this->____camera_41);
		NullCheck(L_31);
		float L_32 = Camera_get_nearClipPlane_m387(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_33 = ((Mathf_t101_StaticFields*)Mathf_t101_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		G_B17_0 = ((((float)L_30) > ((float)((float)((float)L_32+(float)L_33))))? 1 : 0);
		goto IL_012a;
	}

IL_0129:
	{
		G_B17_0 = 0;
	}

IL_012a:
	{
		V_1 = G_B17_0;
		goto IL_01d0;
	}

IL_0130:
	{
		Transform_t48 * L_34 = (__this->___objectFocus_18);
		bool L_35 = Object_op_Implicit_m294(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0183;
		}
	}
	{
		Camera_t32 * L_36 = (__this->____camera_41);
		Transform_t48 * L_37 = (__this->___objectFocus_18);
		NullCheck(L_37);
		Vector3_t28  L_38 = Transform_get_position_m335(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t28  L_39 = Camera_WorldToViewportPoint_m390(L_36, L_38, /*hidden argument*/NULL);
		V_3 = L_39;
		float L_40 = ((&V_3)->___z_3);
		Camera_t32 * L_41 = (__this->____camera_41);
		NullCheck(L_41);
		float L_42 = Camera_get_farClipPlane_m391(L_41, /*hidden argument*/NULL);
		(&V_3)->___z_3 = ((float)((float)L_40/(float)L_42));
		float L_43 = ((&V_3)->___z_3);
		__this->___focalDistance01_17 = L_43;
		goto IL_0195;
	}

IL_0183:
	{
		float L_44 = (__this->___focalZDistance_12);
		float L_45 = DepthOfFieldDeprecated_FocalDistance01_m95(__this, L_44, /*hidden argument*/NULL);
		__this->___focalDistance01_17 = L_45;
	}

IL_0195:
	{
		float L_46 = (__this->___focalZStartCurve_13);
		__this->___focalStartCurve_15 = L_46;
		float L_47 = (__this->___focalZEndCurve_14);
		__this->___focalEndCurve_16 = L_47;
		bool L_48 = V_1;
		if (!L_48)
		{
			goto IL_01ce;
		}
	}
	{
		float L_49 = (__this->___focalPoint_10);
		Camera_t32 * L_50 = (__this->____camera_41);
		NullCheck(L_50);
		float L_51 = Camera_get_nearClipPlane_m387(L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_52 = ((Mathf_t101_StaticFields*)Mathf_t101_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		G_B24_0 = ((((float)L_49) > ((float)((float)((float)L_51+(float)L_52))))? 1 : 0);
		goto IL_01cf;
	}

IL_01ce:
	{
		G_B24_0 = 0;
	}

IL_01cf:
	{
		V_1 = G_B24_0;
	}

IL_01d0:
	{
		RenderTexture_t55 * L_53 = ___source;
		NullCheck(L_53);
		int32_t L_54 = RenderTexture_get_width_m272(L_53, /*hidden argument*/NULL);
		RenderTexture_t55 * L_55 = ___source;
		NullCheck(L_55);
		int32_t L_56 = RenderTexture_get_height_m273(L_55, /*hidden argument*/NULL);
		__this->___widthOverHeight_29 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_54))))/(float)((float)((float)(1.0f)*(float)(((float)L_56))))));
		__this->___oneOverBaseSize_30 = (0.001953125f);
		Material_t5 * L_57 = (__this->___dofMaterial_26);
		float L_58 = (__this->___foregroundBlurExtrude_22);
		NullCheck(L_57);
		Material_SetFloat_m269(L_57, _stringLiteral72, L_58, /*hidden argument*/NULL);
		Material_t5 * L_59 = (__this->___dofMaterial_26);
		bool L_60 = (__this->___simpleTweakMode_9);
		G_B26_0 = _stringLiteral63;
		G_B26_1 = L_59;
		if (!L_60)
		{
			G_B27_0 = _stringLiteral63;
			G_B27_1 = L_59;
			goto IL_0239;
		}
	}
	{
		float L_61 = (__this->___focalStartCurve_15);
		G_B28_0 = ((float)((float)(1.0f)/(float)L_61));
		G_B28_1 = G_B26_0;
		G_B28_2 = G_B26_1;
		goto IL_023f;
	}

IL_0239:
	{
		float L_62 = (__this->___focalStartCurve_15);
		G_B28_0 = L_62;
		G_B28_1 = G_B27_0;
		G_B28_2 = G_B27_1;
	}

IL_023f:
	{
		bool L_63 = (__this->___simpleTweakMode_9);
		G_B29_0 = G_B28_0;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		if (!L_63)
		{
			G_B30_0 = G_B28_0;
			G_B30_1 = G_B28_1;
			G_B30_2 = G_B28_2;
			goto IL_025b;
		}
	}
	{
		float L_64 = (__this->___focalEndCurve_16);
		G_B31_0 = ((float)((float)(1.0f)/(float)L_64));
		G_B31_1 = G_B29_0;
		G_B31_2 = G_B29_1;
		G_B31_3 = G_B29_2;
		goto IL_0261;
	}

IL_025b:
	{
		float L_65 = (__this->___focalEndCurve_16);
		G_B31_0 = L_65;
		G_B31_1 = G_B30_0;
		G_B31_2 = G_B30_1;
		G_B31_3 = G_B30_2;
	}

IL_0261:
	{
		float L_66 = V_2;
		float L_67 = (__this->___focalDistance01_17);
		Vector4_t100  L_68 = {0};
		Vector4__ctor_m284(&L_68, G_B31_1, G_B31_0, ((float)((float)L_66*(float)(0.5f))), L_67, /*hidden argument*/NULL);
		NullCheck(G_B31_3);
		Material_SetVector_m285(G_B31_3, G_B31_2, L_68, /*hidden argument*/NULL);
		Material_t5 * L_69 = (__this->___dofMaterial_26);
		RenderTexture_t55 * L_70 = ___source;
		NullCheck(L_70);
		int32_t L_71 = RenderTexture_get_width_m272(L_70, /*hidden argument*/NULL);
		RenderTexture_t55 * L_72 = ___source;
		NullCheck(L_72);
		int32_t L_73 = RenderTexture_get_height_m273(L_72, /*hidden argument*/NULL);
		Vector4_t100  L_74 = {0};
		Vector4__ctor_m284(&L_74, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_71)))))), ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_73)))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_69);
		Material_SetVector_m285(L_69, _stringLiteral73, L_74, /*hidden argument*/NULL);
		int32_t L_75 = DepthOfFieldDeprecated_GetDividerBasedOnQuality_m96(__this, /*hidden argument*/NULL);
		V_4 = L_75;
		int32_t L_76 = V_4;
		int32_t L_77 = DepthOfFieldDeprecated_GetLowResolutionDividerBasedOnQuality_m97(__this, L_76, /*hidden argument*/NULL);
		V_5 = L_77;
		bool L_78 = V_1;
		RenderTexture_t55 * L_79 = ___source;
		int32_t L_80 = V_4;
		int32_t L_81 = V_5;
		DepthOfFieldDeprecated_AllocateTextures_m105(__this, L_78, L_79, L_80, L_81, /*hidden argument*/NULL);
		RenderTexture_t55 * L_82 = ___source;
		RenderTexture_t55 * L_83 = ___source;
		Material_t5 * L_84 = (__this->___dofMaterial_26);
		Graphics_Blit_m275(NULL /*static, unused*/, L_82, L_83, L_84, 3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_85 = ___source;
		RenderTexture_t55 * L_86 = (__this->___mediumRezWorkTexture_43);
		DepthOfFieldDeprecated_Downsample_m102(__this, L_85, L_86, /*hidden argument*/NULL);
		RenderTexture_t55 * L_87 = (__this->___mediumRezWorkTexture_43);
		RenderTexture_t55 * L_88 = (__this->___mediumRezWorkTexture_43);
		float L_89 = (__this->___maxBlurSpread_21);
		DepthOfFieldDeprecated_Blur_m99(__this, L_87, L_88, 1, 4, L_89, /*hidden argument*/NULL);
		bool L_90 = (__this->___bokeh_31);
		if (!L_90)
		{
			goto IL_03a3;
		}
	}
	{
		int32_t L_91 = (__this->___bokehDestination_28);
		if (!((int32_t)((int32_t)2&(int32_t)L_91)))
		{
			goto IL_03a3;
		}
	}
	{
		Material_t5 * L_92 = (__this->___dofMaterial_26);
		float L_93 = (__this->___bokehThresholdContrast_37);
		float L_94 = (__this->___bokehThresholdLuminance_38);
		Vector4_t100  L_95 = {0};
		Vector4__ctor_m284(&L_95, L_93, L_94, (0.95f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_92);
		Material_SetVector_m285(L_92, _stringLiteral6, L_95, /*hidden argument*/NULL);
		RenderTexture_t55 * L_96 = (__this->___mediumRezWorkTexture_43);
		RenderTexture_t55 * L_97 = (__this->___bokehSource2_47);
		Material_t5 * L_98 = (__this->___dofMaterial_26);
		Graphics_Blit_m275(NULL /*static, unused*/, L_96, L_97, L_98, ((int32_t)11), /*hidden argument*/NULL);
		RenderTexture_t55 * L_99 = (__this->___mediumRezWorkTexture_43);
		RenderTexture_t55 * L_100 = (__this->___lowRezWorkTexture_45);
		Graphics_Blit_m267(NULL /*static, unused*/, L_99, L_100, /*hidden argument*/NULL);
		RenderTexture_t55 * L_101 = (__this->___lowRezWorkTexture_45);
		RenderTexture_t55 * L_102 = (__this->___lowRezWorkTexture_45);
		int32_t L_103 = (__this->___bluriness_20);
		float L_104 = (__this->___maxBlurSpread_21);
		float L_105 = V_0;
		DepthOfFieldDeprecated_Blur_m99(__this, L_101, L_102, L_103, 0, ((float)((float)L_104*(float)L_105)), /*hidden argument*/NULL);
		goto IL_03d4;
	}

IL_03a3:
	{
		RenderTexture_t55 * L_106 = (__this->___mediumRezWorkTexture_43);
		RenderTexture_t55 * L_107 = (__this->___lowRezWorkTexture_45);
		DepthOfFieldDeprecated_Downsample_m102(__this, L_106, L_107, /*hidden argument*/NULL);
		RenderTexture_t55 * L_108 = (__this->___lowRezWorkTexture_45);
		RenderTexture_t55 * L_109 = (__this->___lowRezWorkTexture_45);
		int32_t L_110 = (__this->___bluriness_20);
		float L_111 = (__this->___maxBlurSpread_21);
		DepthOfFieldDeprecated_Blur_m99(__this, L_108, L_109, L_110, 0, L_111, /*hidden argument*/NULL);
	}

IL_03d4:
	{
		Material_t5 * L_112 = (__this->___dofBlurMaterial_24);
		RenderTexture_t55 * L_113 = (__this->___lowRezWorkTexture_45);
		NullCheck(L_112);
		Material_SetTexture_m292(L_112, _stringLiteral74, L_113, /*hidden argument*/NULL);
		Material_t5 * L_114 = (__this->___dofBlurMaterial_24);
		RenderTexture_t55 * L_115 = (__this->___mediumRezWorkTexture_43);
		NullCheck(L_114);
		Material_SetTexture_m292(L_114, _stringLiteral75, L_115, /*hidden argument*/NULL);
		RenderTexture_t55 * L_116 = (__this->___finalDefocus_44);
		Material_t5 * L_117 = (__this->___dofBlurMaterial_24);
		Graphics_Blit_m275(NULL /*static, unused*/, (Texture_t40 *)NULL, L_116, L_117, 3, /*hidden argument*/NULL);
		bool L_118 = (__this->___bokeh_31);
		if (!L_118)
		{
			goto IL_0443;
		}
	}
	{
		int32_t L_119 = (__this->___bokehDestination_28);
		if (!((int32_t)((int32_t)2&(int32_t)L_119)))
		{
			goto IL_0443;
		}
	}
	{
		RenderTexture_t55 * L_120 = (__this->___bokehSource2_47);
		RenderTexture_t55 * L_121 = (__this->___bokehSource_46);
		RenderTexture_t55 * L_122 = (__this->___finalDefocus_44);
		DepthOfFieldDeprecated_AddBokeh_m103(__this, L_120, L_121, L_122, /*hidden argument*/NULL);
	}

IL_0443:
	{
		Material_t5 * L_123 = (__this->___dofMaterial_26);
		RenderTexture_t55 * L_124 = (__this->___finalDefocus_44);
		NullCheck(L_123);
		Material_SetTexture_m292(L_123, _stringLiteral76, L_124, /*hidden argument*/NULL);
		Material_t5 * L_125 = (__this->___dofMaterial_26);
		RenderTexture_t55 * L_126 = (__this->___mediumRezWorkTexture_43);
		NullCheck(L_125);
		Material_SetTexture_m292(L_125, _stringLiteral75, L_126, /*hidden argument*/NULL);
		RenderTexture_t55 * L_127 = ___source;
		bool L_128 = V_1;
		G_B39_0 = L_127;
		if (!L_128)
		{
			G_B40_0 = L_127;
			goto IL_0481;
		}
	}
	{
		RenderTexture_t55 * L_129 = (__this->___foregroundTexture_42);
		G_B41_0 = L_129;
		G_B41_1 = G_B39_0;
		goto IL_0482;
	}

IL_0481:
	{
		RenderTexture_t55 * L_130 = ___destination;
		G_B41_0 = L_130;
		G_B41_1 = G_B40_0;
	}

IL_0482:
	{
		Material_t5 * L_131 = (__this->___dofMaterial_26);
		bool L_132 = (__this->___visualize_27);
		G_B42_0 = L_131;
		G_B42_1 = G_B41_0;
		G_B42_2 = G_B41_1;
		if (!L_132)
		{
			G_B43_0 = L_131;
			G_B43_1 = G_B41_0;
			G_B43_2 = G_B41_1;
			goto IL_0499;
		}
	}
	{
		G_B44_0 = 2;
		G_B44_1 = G_B42_0;
		G_B44_2 = G_B42_1;
		G_B44_3 = G_B42_2;
		goto IL_049a;
	}

IL_0499:
	{
		G_B44_0 = 0;
		G_B44_1 = G_B43_0;
		G_B44_2 = G_B43_1;
		G_B44_3 = G_B43_2;
	}

IL_049a:
	{
		Graphics_Blit_m275(NULL /*static, unused*/, G_B44_3, G_B44_2, G_B44_1, G_B44_0, /*hidden argument*/NULL);
		bool L_133 = V_1;
		if (!L_133)
		{
			goto IL_0608;
		}
	}
	{
		RenderTexture_t55 * L_134 = (__this->___foregroundTexture_42);
		RenderTexture_t55 * L_135 = ___source;
		Material_t5 * L_136 = (__this->___dofMaterial_26);
		Graphics_Blit_m275(NULL /*static, unused*/, L_134, L_135, L_136, 5, /*hidden argument*/NULL);
		RenderTexture_t55 * L_137 = ___source;
		RenderTexture_t55 * L_138 = (__this->___mediumRezWorkTexture_43);
		DepthOfFieldDeprecated_Downsample_m102(__this, L_137, L_138, /*hidden argument*/NULL);
		RenderTexture_t55 * L_139 = (__this->___mediumRezWorkTexture_43);
		RenderTexture_t55 * L_140 = (__this->___mediumRezWorkTexture_43);
		float L_141 = (__this->___maxBlurSpread_21);
		DepthOfFieldDeprecated_BlurFg_m100(__this, L_139, L_140, 1, 2, L_141, /*hidden argument*/NULL);
		bool L_142 = (__this->___bokeh_31);
		if (!L_142)
		{
			goto IL_0578;
		}
	}
	{
		int32_t L_143 = (__this->___bokehDestination_28);
		if (!((int32_t)((int32_t)2&(int32_t)L_143)))
		{
			goto IL_0578;
		}
	}
	{
		Material_t5 * L_144 = (__this->___dofMaterial_26);
		float L_145 = (__this->___bokehThresholdContrast_37);
		float L_146 = (__this->___bokehThresholdLuminance_38);
		Vector4_t100  L_147 = {0};
		Vector4__ctor_m284(&L_147, ((float)((float)L_145*(float)(0.5f))), L_146, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_144);
		Material_SetVector_m285(L_144, _stringLiteral6, L_147, /*hidden argument*/NULL);
		RenderTexture_t55 * L_148 = (__this->___mediumRezWorkTexture_43);
		RenderTexture_t55 * L_149 = (__this->___bokehSource2_47);
		Material_t5 * L_150 = (__this->___dofMaterial_26);
		Graphics_Blit_m275(NULL /*static, unused*/, L_148, L_149, L_150, ((int32_t)11), /*hidden argument*/NULL);
		RenderTexture_t55 * L_151 = (__this->___mediumRezWorkTexture_43);
		RenderTexture_t55 * L_152 = (__this->___lowRezWorkTexture_45);
		Graphics_Blit_m267(NULL /*static, unused*/, L_151, L_152, /*hidden argument*/NULL);
		RenderTexture_t55 * L_153 = (__this->___lowRezWorkTexture_45);
		RenderTexture_t55 * L_154 = (__this->___lowRezWorkTexture_45);
		int32_t L_155 = (__this->___bluriness_20);
		float L_156 = (__this->___maxBlurSpread_21);
		float L_157 = V_0;
		DepthOfFieldDeprecated_BlurFg_m100(__this, L_153, L_154, L_155, 1, ((float)((float)L_156*(float)L_157)), /*hidden argument*/NULL);
		goto IL_0597;
	}

IL_0578:
	{
		RenderTexture_t55 * L_158 = (__this->___mediumRezWorkTexture_43);
		RenderTexture_t55 * L_159 = (__this->___lowRezWorkTexture_45);
		int32_t L_160 = (__this->___bluriness_20);
		float L_161 = (__this->___maxBlurSpread_21);
		DepthOfFieldDeprecated_BlurFg_m100(__this, L_158, L_159, L_160, 1, L_161, /*hidden argument*/NULL);
	}

IL_0597:
	{
		RenderTexture_t55 * L_162 = (__this->___lowRezWorkTexture_45);
		RenderTexture_t55 * L_163 = (__this->___finalDefocus_44);
		Graphics_Blit_m267(NULL /*static, unused*/, L_162, L_163, /*hidden argument*/NULL);
		Material_t5 * L_164 = (__this->___dofMaterial_26);
		RenderTexture_t55 * L_165 = (__this->___finalDefocus_44);
		NullCheck(L_164);
		Material_SetTexture_m292(L_164, _stringLiteral77, L_165, /*hidden argument*/NULL);
		RenderTexture_t55 * L_166 = ___source;
		RenderTexture_t55 * L_167 = ___destination;
		Material_t5 * L_168 = (__this->___dofMaterial_26);
		bool L_169 = (__this->___visualize_27);
		G_B50_0 = L_168;
		G_B50_1 = L_167;
		G_B50_2 = L_166;
		if (!L_169)
		{
			G_B51_0 = L_168;
			G_B51_1 = L_167;
			G_B51_2 = L_166;
			goto IL_05d7;
		}
	}
	{
		G_B52_0 = 1;
		G_B52_1 = G_B50_0;
		G_B52_2 = G_B50_1;
		G_B52_3 = G_B50_2;
		goto IL_05d8;
	}

IL_05d7:
	{
		G_B52_0 = 4;
		G_B52_1 = G_B51_0;
		G_B52_2 = G_B51_1;
		G_B52_3 = G_B51_2;
	}

IL_05d8:
	{
		Graphics_Blit_m275(NULL /*static, unused*/, G_B52_3, G_B52_2, G_B52_1, G_B52_0, /*hidden argument*/NULL);
		bool L_170 = (__this->___bokeh_31);
		if (!L_170)
		{
			goto IL_0608;
		}
	}
	{
		int32_t L_171 = (__this->___bokehDestination_28);
		if (!((int32_t)((int32_t)2&(int32_t)L_171)))
		{
			goto IL_0608;
		}
	}
	{
		RenderTexture_t55 * L_172 = (__this->___bokehSource2_47);
		RenderTexture_t55 * L_173 = (__this->___bokehSource_46);
		RenderTexture_t55 * L_174 = ___destination;
		DepthOfFieldDeprecated_AddBokeh_m103(__this, L_172, L_173, L_174, /*hidden argument*/NULL);
	}

IL_0608:
	{
		DepthOfFieldDeprecated_ReleaseTextures_m104(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_34.h"
extern Il2CppCodeGenString* _stringLiteral16;
extern "C" void DepthOfFieldDeprecated_Blur_m99 (DepthOfFieldDeprecated_t54 * __this, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t55 * V_0 = {0};
	{
		RenderTexture_t55 * L_0 = ___to;
		NullCheck(L_0);
		int32_t L_1 = RenderTexture_get_width_m272(L_0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_2 = ___to;
		NullCheck(L_2);
		int32_t L_3 = RenderTexture_get_height_m273(L_2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_4 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = ___iterations;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_00b1;
		}
	}
	{
		RenderTexture_t55 * L_6 = ___from;
		RenderTexture_t55 * L_7 = ___to;
		int32_t L_8 = ___blurPass;
		float L_9 = ___spread;
		RenderTexture_t55 * L_10 = V_0;
		DepthOfFieldDeprecated_BlurHex_m101(__this, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		int32_t L_11 = ___iterations;
		if ((((int32_t)L_11) <= ((int32_t)2)))
		{
			goto IL_00ac;
		}
	}
	{
		Material_t5 * L_12 = (__this->___dofBlurMaterial_24);
		float L_13 = ___spread;
		float L_14 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_15 = {0};
		Vector4__ctor_m284(&L_15, (0.0f), ((float)((float)L_13*(float)L_14)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Material_SetVector_m285(L_12, _stringLiteral16, L_15, /*hidden argument*/NULL);
		RenderTexture_t55 * L_16 = ___to;
		RenderTexture_t55 * L_17 = V_0;
		Material_t5 * L_18 = (__this->___dofBlurMaterial_24);
		int32_t L_19 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		Material_t5 * L_20 = (__this->___dofBlurMaterial_24);
		float L_21 = ___spread;
		float L_22 = (__this->___widthOverHeight_29);
		float L_23 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_24 = {0};
		Vector4__ctor_m284(&L_24, ((float)((float)((float)((float)L_21/(float)L_22))*(float)L_23)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Material_SetVector_m285(L_20, _stringLiteral16, L_24, /*hidden argument*/NULL);
		RenderTexture_t55 * L_25 = V_0;
		RenderTexture_t55 * L_26 = ___to;
		Material_t5 * L_27 = (__this->___dofBlurMaterial_24);
		int32_t L_28 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		goto IL_0130;
	}

IL_00b1:
	{
		Material_t5 * L_29 = (__this->___dofBlurMaterial_24);
		float L_30 = ___spread;
		float L_31 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_32 = {0};
		Vector4__ctor_m284(&L_32, (0.0f), ((float)((float)L_30*(float)L_31)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Material_SetVector_m285(L_29, _stringLiteral16, L_32, /*hidden argument*/NULL);
		RenderTexture_t55 * L_33 = ___from;
		RenderTexture_t55 * L_34 = V_0;
		Material_t5 * L_35 = (__this->___dofBlurMaterial_24);
		int32_t L_36 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_33, L_34, L_35, L_36, /*hidden argument*/NULL);
		Material_t5 * L_37 = (__this->___dofBlurMaterial_24);
		float L_38 = ___spread;
		float L_39 = (__this->___widthOverHeight_29);
		float L_40 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_41 = {0};
		Vector4__ctor_m284(&L_41, ((float)((float)((float)((float)L_38/(float)L_39))*(float)L_40)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		Material_SetVector_m285(L_37, _stringLiteral16, L_41, /*hidden argument*/NULL);
		RenderTexture_t55 * L_42 = V_0;
		RenderTexture_t55 * L_43 = ___to;
		Material_t5 * L_44 = (__this->___dofBlurMaterial_24);
		int32_t L_45 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_42, L_43, L_44, L_45, /*hidden argument*/NULL);
	}

IL_0130:
	{
		RenderTexture_t55 * L_46 = V_0;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
extern Il2CppCodeGenString* _stringLiteral78;
extern Il2CppCodeGenString* _stringLiteral16;
extern "C" void DepthOfFieldDeprecated_BlurFg_m100 (DepthOfFieldDeprecated_t54 * __this, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral78 = il2cpp_codegen_string_literal_from_index(78);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t55 * V_0 = {0};
	{
		Material_t5 * L_0 = (__this->___dofBlurMaterial_24);
		RenderTexture_t55 * L_1 = ___from;
		NullCheck(L_0);
		Material_SetTexture_m292(L_0, _stringLiteral78, L_1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_2 = ___to;
		NullCheck(L_2);
		int32_t L_3 = RenderTexture_get_width_m272(L_2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_4 = ___to;
		NullCheck(L_4);
		int32_t L_5 = RenderTexture_get_height_m273(L_4, /*hidden argument*/NULL);
		RenderTexture_t55 * L_6 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = ___iterations;
		if ((((int32_t)L_7) <= ((int32_t)1)))
		{
			goto IL_00c2;
		}
	}
	{
		RenderTexture_t55 * L_8 = ___from;
		RenderTexture_t55 * L_9 = ___to;
		int32_t L_10 = ___blurPass;
		float L_11 = ___spread;
		RenderTexture_t55 * L_12 = V_0;
		DepthOfFieldDeprecated_BlurHex_m101(__this, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = ___iterations;
		if ((((int32_t)L_13) <= ((int32_t)2)))
		{
			goto IL_00bd;
		}
	}
	{
		Material_t5 * L_14 = (__this->___dofBlurMaterial_24);
		float L_15 = ___spread;
		float L_16 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_17 = {0};
		Vector4__ctor_m284(&L_17, (0.0f), ((float)((float)L_15*(float)L_16)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Material_SetVector_m285(L_14, _stringLiteral16, L_17, /*hidden argument*/NULL);
		RenderTexture_t55 * L_18 = ___to;
		RenderTexture_t55 * L_19 = V_0;
		Material_t5 * L_20 = (__this->___dofBlurMaterial_24);
		int32_t L_21 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		Material_t5 * L_22 = (__this->___dofBlurMaterial_24);
		float L_23 = ___spread;
		float L_24 = (__this->___widthOverHeight_29);
		float L_25 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_26 = {0};
		Vector4__ctor_m284(&L_26, ((float)((float)((float)((float)L_23/(float)L_24))*(float)L_25)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Material_SetVector_m285(L_22, _stringLiteral16, L_26, /*hidden argument*/NULL);
		RenderTexture_t55 * L_27 = V_0;
		RenderTexture_t55 * L_28 = ___to;
		Material_t5 * L_29 = (__this->___dofBlurMaterial_24);
		int32_t L_30 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		goto IL_0141;
	}

IL_00c2:
	{
		Material_t5 * L_31 = (__this->___dofBlurMaterial_24);
		float L_32 = ___spread;
		float L_33 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_34 = {0};
		Vector4__ctor_m284(&L_34, (0.0f), ((float)((float)L_32*(float)L_33)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Material_SetVector_m285(L_31, _stringLiteral16, L_34, /*hidden argument*/NULL);
		RenderTexture_t55 * L_35 = ___from;
		RenderTexture_t55 * L_36 = V_0;
		Material_t5 * L_37 = (__this->___dofBlurMaterial_24);
		int32_t L_38 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
		Material_t5 * L_39 = (__this->___dofBlurMaterial_24);
		float L_40 = ___spread;
		float L_41 = (__this->___widthOverHeight_29);
		float L_42 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_43 = {0};
		Vector4__ctor_m284(&L_43, ((float)((float)((float)((float)L_40/(float)L_41))*(float)L_42)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		Material_SetVector_m285(L_39, _stringLiteral16, L_43, /*hidden argument*/NULL);
		RenderTexture_t55 * L_44 = V_0;
		RenderTexture_t55 * L_45 = ___to;
		Material_t5 * L_46 = (__this->___dofBlurMaterial_24);
		int32_t L_47 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_44, L_45, L_46, L_47, /*hidden argument*/NULL);
	}

IL_0141:
	{
		RenderTexture_t55 * L_48 = V_0;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
extern Il2CppCodeGenString* _stringLiteral16;
extern "C" void DepthOfFieldDeprecated_BlurHex_m101 (DepthOfFieldDeprecated_t54 * __this, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, int32_t ___blurPass, float ___spread, RenderTexture_t55 * ___tmp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___dofBlurMaterial_24);
		float L_1 = ___spread;
		float L_2 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_3 = {0};
		Vector4__ctor_m284(&L_3, (0.0f), ((float)((float)L_1*(float)L_2)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_m285(L_0, _stringLiteral16, L_3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_4 = ___from;
		RenderTexture_t55 * L_5 = ___tmp;
		Material_t5 * L_6 = (__this->___dofBlurMaterial_24);
		int32_t L_7 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		Material_t5 * L_8 = (__this->___dofBlurMaterial_24);
		float L_9 = ___spread;
		float L_10 = (__this->___widthOverHeight_29);
		float L_11 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_12 = {0};
		Vector4__ctor_m284(&L_12, ((float)((float)((float)((float)L_9/(float)L_10))*(float)L_11)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_SetVector_m285(L_8, _stringLiteral16, L_12, /*hidden argument*/NULL);
		RenderTexture_t55 * L_13 = ___tmp;
		RenderTexture_t55 * L_14 = ___to;
		Material_t5 * L_15 = (__this->___dofBlurMaterial_24);
		int32_t L_16 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		Material_t5 * L_17 = (__this->___dofBlurMaterial_24);
		float L_18 = ___spread;
		float L_19 = (__this->___widthOverHeight_29);
		float L_20 = (__this->___oneOverBaseSize_30);
		float L_21 = ___spread;
		float L_22 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_23 = {0};
		Vector4__ctor_m284(&L_23, ((float)((float)((float)((float)L_18/(float)L_19))*(float)L_20)), ((float)((float)L_21*(float)L_22)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Material_SetVector_m285(L_17, _stringLiteral16, L_23, /*hidden argument*/NULL);
		RenderTexture_t55 * L_24 = ___to;
		RenderTexture_t55 * L_25 = ___tmp;
		Material_t5 * L_26 = (__this->___dofBlurMaterial_24);
		int32_t L_27 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		Material_t5 * L_28 = (__this->___dofBlurMaterial_24);
		float L_29 = ___spread;
		float L_30 = (__this->___widthOverHeight_29);
		float L_31 = (__this->___oneOverBaseSize_30);
		float L_32 = ___spread;
		float L_33 = (__this->___oneOverBaseSize_30);
		Vector4_t100  L_34 = {0};
		Vector4__ctor_m284(&L_34, ((float)((float)((float)((float)L_29/(float)L_30))*(float)L_31)), ((float)((float)((-L_32))*(float)L_33)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Material_SetVector_m285(L_28, _stringLiteral16, L_34, /*hidden argument*/NULL);
		RenderTexture_t55 * L_35 = ___tmp;
		RenderTexture_t55 * L_36 = ___to;
		Material_t5 * L_37 = (__this->___dofBlurMaterial_24);
		int32_t L_38 = ___blurPass;
		Graphics_Blit_m275(NULL /*static, unused*/, L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern TypeInfo* DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral73;
extern "C" void DepthOfFieldDeprecated_Downsample_m102 (DepthOfFieldDeprecated_t54 * __this, RenderTexture_t55 * ___from, RenderTexture_t55 * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		_stringLiteral73 = il2cpp_codegen_string_literal_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___dofMaterial_26);
		RenderTexture_t55 * L_1 = ___to;
		NullCheck(L_1);
		int32_t L_2 = RenderTexture_get_width_m272(L_1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_3 = ___to;
		NullCheck(L_3);
		int32_t L_4 = RenderTexture_get_height_m273(L_3, /*hidden argument*/NULL);
		Vector4_t100  L_5 = {0};
		Vector4__ctor_m284(&L_5, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_2)))))), ((float)((float)(1.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_4)))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_m285(L_0, _stringLiteral73, L_5, /*hidden argument*/NULL);
		RenderTexture_t55 * L_6 = ___from;
		RenderTexture_t55 * L_7 = ___to;
		Material_t5 * L_8 = (__this->___dofMaterial_26);
		IL2CPP_RUNTIME_CLASS_INIT(DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var);
		int32_t L_9 = ((DepthOfFieldDeprecated_t54_StaticFields*)DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var->static_fields)->___SMOOTH_DOWNSAMPLE_PASS_5;
		Graphics_Blit_m275(NULL /*static, unused*/, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
extern TypeInfo* Quads_t66_il2cpp_TypeInfo_var;
extern TypeInfo* DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral79;
extern Il2CppCodeGenString* _stringLiteral69;
extern Il2CppCodeGenString* _stringLiteral80;
extern Il2CppCodeGenString* _stringLiteral10;
extern "C" void DepthOfFieldDeprecated_AddBokeh_m103 (DepthOfFieldDeprecated_t54 * __this, RenderTexture_t55 * ___bokehInfo, RenderTexture_t55 * ___tempTex, RenderTexture_t55 * ___finalTarget, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quads_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		_stringLiteral79 = il2cpp_codegen_string_literal_from_index(79);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		_stringLiteral80 = il2cpp_codegen_string_literal_from_index(80);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	MeshU5BU5D_t67* V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Mesh_t98 * V_3 = {0};
	MeshU5BU5D_t67* V_4 = {0};
	int32_t V_5 = 0;
	{
		Material_t5 * L_0 = (__this->___bokehMaterial_40);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0167;
		}
	}
	{
		RenderTexture_t55 * L_2 = ___tempTex;
		NullCheck(L_2);
		int32_t L_3 = RenderTexture_get_width_m272(L_2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_4 = ___tempTex;
		NullCheck(L_4);
		int32_t L_5 = RenderTexture_get_height_m273(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_6 = Quads_GetMeshes_m167(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		RenderTexture_t55 * L_7 = ___tempTex;
		RenderTexture_set_active_m402(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Color_t12  L_8 = {0};
		Color__ctor_m278(&L_8, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GL_Clear_m288(NULL /*static, unused*/, 0, 1, L_8, /*hidden argument*/NULL);
		GL_PushMatrix_m403(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_LoadIdentity_m404(NULL /*static, unused*/, /*hidden argument*/NULL);
		RenderTexture_t55 * L_9 = ___bokehInfo;
		NullCheck(L_9);
		Texture_set_filterMode_m298(L_9, 0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_10 = ___bokehInfo;
		NullCheck(L_10);
		int32_t L_11 = RenderTexture_get_width_m272(L_10, /*hidden argument*/NULL);
		RenderTexture_t55 * L_12 = ___bokehInfo;
		NullCheck(L_12);
		int32_t L_13 = RenderTexture_get_height_m273(L_12, /*hidden argument*/NULL);
		V_1 = ((float)((float)((float)((float)(((float)L_11))*(float)(1.0f)))/(float)((float)((float)(((float)L_13))*(float)(1.0f)))));
		RenderTexture_t55 * L_14 = ___bokehInfo;
		NullCheck(L_14);
		int32_t L_15 = RenderTexture_get_width_m272(L_14, /*hidden argument*/NULL);
		V_2 = ((float)((float)(2.0f)/(float)((float)((float)(1.0f)*(float)(((float)L_15))))));
		float L_16 = V_2;
		float L_17 = (__this->___bokehScale_35);
		float L_18 = (__this->___maxBlurSpread_21);
		IL2CPP_RUNTIME_CLASS_INIT(DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var);
		float L_19 = ((DepthOfFieldDeprecated_t54_StaticFields*)DepthOfFieldDeprecated_t54_il2cpp_TypeInfo_var->static_fields)->___BOKEH_EXTRA_BLUR_6;
		float L_20 = (__this->___oneOverBaseSize_30);
		V_2 = ((float)((float)L_16+(float)((float)((float)((float)((float)((float)((float)L_17*(float)L_18))*(float)L_19))*(float)L_20))));
		Material_t5 * L_21 = (__this->___bokehMaterial_40);
		RenderTexture_t55 * L_22 = ___bokehInfo;
		NullCheck(L_21);
		Material_SetTexture_m292(L_21, _stringLiteral79, L_22, /*hidden argument*/NULL);
		Material_t5 * L_23 = (__this->___bokehMaterial_40);
		Texture2D_t13 * L_24 = (__this->___bokehTexture_34);
		NullCheck(L_23);
		Material_SetTexture_m292(L_23, _stringLiteral69, L_24, /*hidden argument*/NULL);
		Material_t5 * L_25 = (__this->___bokehMaterial_40);
		float L_26 = V_2;
		float L_27 = V_2;
		float L_28 = V_1;
		float L_29 = V_1;
		Vector4_t100  L_30 = {0};
		Vector4__ctor_m284(&L_30, L_26, ((float)((float)L_27*(float)L_28)), (0.5f), ((float)((float)(0.5f)*(float)L_29)), /*hidden argument*/NULL);
		NullCheck(L_25);
		Material_SetVector_m285(L_25, _stringLiteral80, L_30, /*hidden argument*/NULL);
		Material_t5 * L_31 = (__this->___bokehMaterial_40);
		float L_32 = (__this->___bokehIntensity_36);
		NullCheck(L_31);
		Material_SetFloat_m269(L_31, _stringLiteral10, L_32, /*hidden argument*/NULL);
		Material_t5 * L_33 = (__this->___bokehMaterial_40);
		NullCheck(L_33);
		Material_SetPass_m398(L_33, 0, /*hidden argument*/NULL);
		MeshU5BU5D_t67* L_34 = V_0;
		V_4 = L_34;
		V_5 = 0;
		goto IL_0142;
	}

IL_0120:
	{
		MeshU5BU5D_t67* L_35 = V_4;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		int32_t L_37 = L_36;
		V_3 = (*(Mesh_t98 **)(Mesh_t98 **)SZArrayLdElema(L_35, L_37, sizeof(Mesh_t98 *)));
		Mesh_t98 * L_38 = V_3;
		bool L_39 = Object_op_Implicit_m294(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_013c;
		}
	}
	{
		Mesh_t98 * L_40 = V_3;
		Matrix4x4_t31  L_41 = Matrix4x4_get_identity_m327(NULL /*static, unused*/, /*hidden argument*/NULL);
		Graphics_DrawMeshNow_m405(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
	}

IL_013c:
	{
		int32_t L_42 = V_5;
		V_5 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_0142:
	{
		int32_t L_43 = V_5;
		MeshU5BU5D_t67* L_44 = V_4;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)(((Array_t *)L_44)->max_length))))))
		{
			goto IL_0120;
		}
	}
	{
		GL_PopMatrix_m406(NULL /*static, unused*/, /*hidden argument*/NULL);
		RenderTexture_t55 * L_45 = ___tempTex;
		RenderTexture_t55 * L_46 = ___finalTarget;
		Material_t5 * L_47 = (__this->___dofMaterial_26);
		Graphics_Blit_m275(NULL /*static, unused*/, L_45, L_46, L_47, 8, /*hidden argument*/NULL);
		RenderTexture_t55 * L_48 = ___bokehInfo;
		NullCheck(L_48);
		Texture_set_filterMode_m298(L_48, 1, /*hidden argument*/NULL);
	}

IL_0167:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::ReleaseTextures()
extern "C" void DepthOfFieldDeprecated_ReleaseTextures_m104 (DepthOfFieldDeprecated_t54 * __this, const MethodInfo* method)
{
	{
		RenderTexture_t55 * L_0 = (__this->___foregroundTexture_42);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RenderTexture_t55 * L_2 = (__this->___foregroundTexture_42);
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		RenderTexture_t55 * L_3 = (__this->___finalDefocus_44);
		bool L_4 = Object_op_Implicit_m294(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		RenderTexture_t55 * L_5 = (__this->___finalDefocus_44);
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		RenderTexture_t55 * L_6 = (__this->___mediumRezWorkTexture_43);
		bool L_7 = Object_op_Implicit_m294(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		RenderTexture_t55 * L_8 = (__this->___mediumRezWorkTexture_43);
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0051:
	{
		RenderTexture_t55 * L_9 = (__this->___lowRezWorkTexture_45);
		bool L_10 = Object_op_Implicit_m294(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		RenderTexture_t55 * L_11 = (__this->___lowRezWorkTexture_45);
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_006c:
	{
		RenderTexture_t55 * L_12 = (__this->___bokehSource_46);
		bool L_13 = Object_op_Implicit_m294(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0087;
		}
	}
	{
		RenderTexture_t55 * L_14 = (__this->___bokehSource_46);
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_0087:
	{
		RenderTexture_t55 * L_15 = (__this->___bokehSource2_47);
		bool L_16 = Object_op_Implicit_m294(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a2;
		}
	}
	{
		RenderTexture_t55 * L_17 = (__this->___bokehSource2_47);
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void DepthOfFieldDeprecated_AllocateTextures_m105 (DepthOfFieldDeprecated_t54 * __this, bool ___blurForeground, RenderTexture_t55 * ___source, int32_t ___divider, int32_t ___lowTexDivider, const MethodInfo* method)
{
	{
		__this->___foregroundTexture_42 = (RenderTexture_t55 *)NULL;
		bool L_0 = ___blurForeground;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		NullCheck(L_1);
		int32_t L_2 = RenderTexture_get_width_m272(L_1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_3 = ___source;
		NullCheck(L_3);
		int32_t L_4 = RenderTexture_get_height_m273(L_3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_5 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, L_2, L_4, 0, /*hidden argument*/NULL);
		__this->___foregroundTexture_42 = L_5;
	}

IL_0025:
	{
		RenderTexture_t55 * L_6 = ___source;
		NullCheck(L_6);
		int32_t L_7 = RenderTexture_get_width_m272(L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___divider;
		RenderTexture_t55 * L_9 = ___source;
		NullCheck(L_9);
		int32_t L_10 = RenderTexture_get_height_m273(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___divider;
		RenderTexture_t55 * L_12 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_7/(int32_t)L_8)), ((int32_t)((int32_t)L_10/(int32_t)L_11)), 0, /*hidden argument*/NULL);
		__this->___mediumRezWorkTexture_43 = L_12;
		RenderTexture_t55 * L_13 = ___source;
		NullCheck(L_13);
		int32_t L_14 = RenderTexture_get_width_m272(L_13, /*hidden argument*/NULL);
		int32_t L_15 = ___divider;
		RenderTexture_t55 * L_16 = ___source;
		NullCheck(L_16);
		int32_t L_17 = RenderTexture_get_height_m273(L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___divider;
		RenderTexture_t55 * L_19 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_14/(int32_t)L_15)), ((int32_t)((int32_t)L_17/(int32_t)L_18)), 0, /*hidden argument*/NULL);
		__this->___finalDefocus_44 = L_19;
		RenderTexture_t55 * L_20 = ___source;
		NullCheck(L_20);
		int32_t L_21 = RenderTexture_get_width_m272(L_20, /*hidden argument*/NULL);
		int32_t L_22 = ___lowTexDivider;
		RenderTexture_t55 * L_23 = ___source;
		NullCheck(L_23);
		int32_t L_24 = RenderTexture_get_height_m273(L_23, /*hidden argument*/NULL);
		int32_t L_25 = ___lowTexDivider;
		RenderTexture_t55 * L_26 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_21/(int32_t)L_22)), ((int32_t)((int32_t)L_24/(int32_t)L_25)), 0, /*hidden argument*/NULL);
		__this->___lowRezWorkTexture_45 = L_26;
		__this->___bokehSource_46 = (RenderTexture_t55 *)NULL;
		__this->___bokehSource2_47 = (RenderTexture_t55 *)NULL;
		bool L_27 = (__this->___bokeh_31);
		if (!L_27)
		{
			goto IL_0131;
		}
	}
	{
		RenderTexture_t55 * L_28 = ___source;
		NullCheck(L_28);
		int32_t L_29 = RenderTexture_get_width_m272(L_28, /*hidden argument*/NULL);
		int32_t L_30 = ___lowTexDivider;
		int32_t L_31 = (__this->___bokehDownsample_39);
		RenderTexture_t55 * L_32 = ___source;
		NullCheck(L_32);
		int32_t L_33 = RenderTexture_get_height_m273(L_32, /*hidden argument*/NULL);
		int32_t L_34 = ___lowTexDivider;
		int32_t L_35 = (__this->___bokehDownsample_39);
		RenderTexture_t55 * L_36 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_29/(int32_t)((int32_t)((int32_t)L_30*(int32_t)L_31)))), ((int32_t)((int32_t)L_33/(int32_t)((int32_t)((int32_t)L_34*(int32_t)L_35)))), 0, 2, /*hidden argument*/NULL);
		__this->___bokehSource_46 = L_36;
		RenderTexture_t55 * L_37 = ___source;
		NullCheck(L_37);
		int32_t L_38 = RenderTexture_get_width_m272(L_37, /*hidden argument*/NULL);
		int32_t L_39 = ___lowTexDivider;
		int32_t L_40 = (__this->___bokehDownsample_39);
		RenderTexture_t55 * L_41 = ___source;
		NullCheck(L_41);
		int32_t L_42 = RenderTexture_get_height_m273(L_41, /*hidden argument*/NULL);
		int32_t L_43 = ___lowTexDivider;
		int32_t L_44 = (__this->___bokehDownsample_39);
		RenderTexture_t55 * L_45 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_38/(int32_t)((int32_t)((int32_t)L_39*(int32_t)L_40)))), ((int32_t)((int32_t)L_42/(int32_t)((int32_t)((int32_t)L_43*(int32_t)L_44)))), 0, 2, /*hidden argument*/NULL);
		__this->___bokehSource2_47 = L_45;
		RenderTexture_t55 * L_46 = (__this->___bokehSource_46);
		NullCheck(L_46);
		Texture_set_filterMode_m298(L_46, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_47 = (__this->___bokehSource2_47);
		NullCheck(L_47);
		Texture_set_filterMode_m298(L_47, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_48 = (__this->___bokehSource2_47);
		RenderTexture_set_active_m402(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		Color_t12  L_49 = {0};
		Color__ctor_m278(&L_49, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GL_Clear_m288(NULL /*static, unused*/, 0, 1, L_49, /*hidden argument*/NULL);
	}

IL_0131:
	{
		RenderTexture_t55 * L_50 = ___source;
		NullCheck(L_50);
		Texture_set_filterMode_m298(L_50, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_51 = (__this->___finalDefocus_44);
		NullCheck(L_51);
		Texture_set_filterMode_m298(L_51, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_52 = (__this->___mediumRezWorkTexture_43);
		NullCheck(L_52);
		Texture_set_filterMode_m298(L_52, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_53 = (__this->___lowRezWorkTexture_45);
		NullCheck(L_53);
		Texture_set_filterMode_m298(L_53, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_54 = (__this->___foregroundTexture_42);
		bool L_55 = Object_op_Implicit_m294(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_0178;
		}
	}
	{
		RenderTexture_t55 * L_56 = (__this->___foregroundTexture_42);
		NullCheck(L_56);
		Texture_set_filterMode_m298(L_56, 1, /*hidden argument*/NULL);
	}

IL_0178:
	{
		return;
	}
}
// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_37.h"
// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_37MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.EdgeDetection
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_38.h"
// UnityStandardAssets.ImageEffects.EdgeDetection
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_38MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.EdgeDetection::.ctor()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void EdgeDetection__ctor_m106 (EdgeDetection_t57 * __this, const MethodInfo* method)
{
	{
		__this->___mode_5 = 3;
		__this->___sensitivityDepth_6 = (1.0f);
		__this->___sensitivityNormals_7 = (1.0f);
		__this->___lumThreshold_8 = (0.2f);
		__this->___edgeExp_9 = (1.0f);
		__this->___sampleDist_10 = (1.0f);
		Color_t12  L_0 = Color_get_white_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___edgesOnlyBgColor_12 = L_0;
		__this->___oldMode_15 = 3;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.EdgeDetection::CheckResources()
// UnityStandardAssets.ImageEffects.EdgeDetection
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_38MethodDeclarations.h"
extern "C" bool EdgeDetection_CheckResources_m107 (EdgeDetection_t57 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 1, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___edgeDetectShader_13);
		Material_t5 * L_1 = (__this->___edgeDetectMaterial_14);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___edgeDetectMaterial_14 = L_2;
		int32_t L_3 = (__this->___mode_5);
		int32_t L_4 = (__this->___oldMode_15);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0037;
		}
	}
	{
		EdgeDetection_SetCameraFlag_m109(__this, /*hidden argument*/NULL);
	}

IL_0037:
	{
		int32_t L_5 = (__this->___mode_5);
		__this->___oldMode_15 = L_5;
		bool L_6 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0054:
	{
		bool L_7 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_7;
	}
}
// System.Void UnityStandardAssets.ImageEffects.EdgeDetection::Start()
extern "C" void EdgeDetection_Start_m108 (EdgeDetection_t57 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mode_5);
		__this->___oldMode_15 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.EdgeDetection::SetCameraFlag()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern "C" void EdgeDetection_SetCameraFlag_m109 (EdgeDetection_t57 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___mode_5);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = (__this->___mode_5);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0030;
		}
	}

IL_0018:
	{
		Camera_t32 * L_2 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		Camera_t32 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = Camera_get_depthTextureMode_m319(L_3, /*hidden argument*/NULL);
		NullCheck(L_3);
		Camera_set_depthTextureMode_m320(L_3, ((int32_t)((int32_t)L_4|(int32_t)1)), /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_0030:
	{
		int32_t L_5 = (__this->___mode_5);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = (__this->___mode_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_005a;
		}
	}

IL_0047:
	{
		Camera_t32 * L_7 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		Camera_t32 * L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = Camera_get_depthTextureMode_m319(L_8, /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_depthTextureMode_m320(L_8, ((int32_t)((int32_t)L_9|(int32_t)2)), /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.EdgeDetection::OnEnable()
extern "C" void EdgeDetection_OnEnable_m110 (EdgeDetection_t57 * __this, const MethodInfo* method)
{
	{
		EdgeDetection_SetCameraFlag_m109(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.EdgeDetection::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral81;
extern Il2CppCodeGenString* _stringLiteral82;
extern Il2CppCodeGenString* _stringLiteral83;
extern Il2CppCodeGenString* _stringLiteral84;
extern Il2CppCodeGenString* _stringLiteral85;
extern Il2CppCodeGenString* _stringLiteral86;
extern "C" void EdgeDetection_OnRenderImage_m111 (EdgeDetection_t57 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral81 = il2cpp_codegen_string_literal_from_index(81);
		_stringLiteral82 = il2cpp_codegen_string_literal_from_index(82);
		_stringLiteral83 = il2cpp_codegen_string_literal_from_index(83);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		_stringLiteral86 = il2cpp_codegen_string_literal_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.EdgeDetection::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		float L_3 = (__this->___sensitivityDepth_6);
		float L_4 = (__this->___sensitivityNormals_7);
		Vector2__ctor_m305((&V_0), L_3, L_4, /*hidden argument*/NULL);
		Material_t5 * L_5 = (__this->___edgeDetectMaterial_14);
		float L_6 = ((&V_0)->___x_1);
		float L_7 = ((&V_0)->___y_2);
		float L_8 = ((&V_0)->___y_2);
		Vector4_t100  L_9 = {0};
		Vector4__ctor_m284(&L_9, L_6, L_7, (1.0f), L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_SetVector_m285(L_5, _stringLiteral81, L_9, /*hidden argument*/NULL);
		Material_t5 * L_10 = (__this->___edgeDetectMaterial_14);
		float L_11 = (__this->___edgesOnly_11);
		NullCheck(L_10);
		Material_SetFloat_m269(L_10, _stringLiteral82, L_11, /*hidden argument*/NULL);
		Material_t5 * L_12 = (__this->___edgeDetectMaterial_14);
		float L_13 = (__this->___sampleDist_10);
		NullCheck(L_12);
		Material_SetFloat_m269(L_12, _stringLiteral83, L_13, /*hidden argument*/NULL);
		Material_t5 * L_14 = (__this->___edgeDetectMaterial_14);
		Color_t12  L_15 = (__this->___edgesOnlyBgColor_12);
		Vector4_t100  L_16 = Color_op_Implicit_m293(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Material_SetVector_m285(L_14, _stringLiteral84, L_16, /*hidden argument*/NULL);
		Material_t5 * L_17 = (__this->___edgeDetectMaterial_14);
		float L_18 = (__this->___edgeExp_9);
		NullCheck(L_17);
		Material_SetFloat_m269(L_17, _stringLiteral85, L_18, /*hidden argument*/NULL);
		Material_t5 * L_19 = (__this->___edgeDetectMaterial_14);
		float L_20 = (__this->___lumThreshold_8);
		NullCheck(L_19);
		Material_SetFloat_m269(L_19, _stringLiteral86, L_20, /*hidden argument*/NULL);
		RenderTexture_t55 * L_21 = ___source;
		RenderTexture_t55 * L_22 = ___destination;
		Material_t5 * L_23 = (__this->___edgeDetectMaterial_14);
		int32_t L_24 = (__this->___mode_5);
		Graphics_Blit_m275(NULL /*static, unused*/, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.Fisheye
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_39.h"
// UnityStandardAssets.ImageEffects.Fisheye
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_39MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.Fisheye::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void Fisheye__ctor_m112 (Fisheye_t58 * __this, const MethodInfo* method)
{
	{
		__this->___strengthX_5 = (0.05f);
		__this->___strengthY_6 = (0.05f);
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Fisheye::CheckResources()
extern "C" bool Fisheye_CheckResources_m113 (Fisheye_t58 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___fishEyeShader_7);
		Material_t5 * L_1 = (__this->___fisheyeMaterial_8);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___fisheyeMaterial_8 = L_2;
		bool L_3 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		bool L_4 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_4;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Fisheye::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral55;
extern "C" void Fisheye_OnRenderImage_m114 (Fisheye_t58 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.Fisheye::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		V_0 = (0.15625f);
		RenderTexture_t55 * L_3 = ___source;
		NullCheck(L_3);
		int32_t L_4 = RenderTexture_get_width_m272(L_3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_5 = ___source;
		NullCheck(L_5);
		int32_t L_6 = RenderTexture_get_height_m273(L_5, /*hidden argument*/NULL);
		V_1 = ((float)((float)((float)((float)(((float)L_4))*(float)(1.0f)))/(float)((float)((float)(((float)L_6))*(float)(1.0f)))));
		Material_t5 * L_7 = (__this->___fisheyeMaterial_8);
		float L_8 = (__this->___strengthX_5);
		float L_9 = V_1;
		float L_10 = V_0;
		float L_11 = (__this->___strengthY_6);
		float L_12 = V_0;
		float L_13 = (__this->___strengthX_5);
		float L_14 = V_1;
		float L_15 = V_0;
		float L_16 = (__this->___strengthY_6);
		float L_17 = V_0;
		Vector4_t100  L_18 = {0};
		Vector4__ctor_m284(&L_18, ((float)((float)((float)((float)L_8*(float)L_9))*(float)L_10)), ((float)((float)L_11*(float)L_12)), ((float)((float)((float)((float)L_13*(float)L_14))*(float)L_15)), ((float)((float)L_16*(float)L_17)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_SetVector_m285(L_7, _stringLiteral55, L_18, /*hidden argument*/NULL);
		RenderTexture_t55 * L_19 = ___source;
		RenderTexture_t55 * L_20 = ___destination;
		Material_t5 * L_21 = (__this->___fisheyeMaterial_8);
		Graphics_Blit_m270(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.GlobalFog
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_40.h"
// UnityStandardAssets.ImageEffects.GlobalFog
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_40MethodDeclarations.h"
// UnityEngine.FogMode
#include "UnityEngine_UnityEngine_FogMode.h"
// UnityEngine.RenderSettings
#include "UnityEngine_UnityEngine_RenderSettingsMethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void GlobalFog__ctor_m115 (GlobalFog_t59 * __this, const MethodInfo* method)
{
	{
		__this->___distanceFog_5 = 1;
		__this->___heightFog_7 = 1;
		__this->___height_8 = (1.0f);
		__this->___heightDensity_9 = (2.0f);
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::CheckResources()
extern "C" bool GlobalFog_CheckResources_m116 (GlobalFog_t59 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 1, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___fogShader_11);
		Material_t5 * L_1 = (__this->___fogMaterial_12);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___fogMaterial_12 = L_2;
		bool L_3 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		bool L_4 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_4;
	}
}
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.RenderSettings
#include "UnityEngine_UnityEngine_RenderSettingsMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.GlobalFog
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_40MethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral87;
extern Il2CppCodeGenString* _stringLiteral88;
extern Il2CppCodeGenString* _stringLiteral89;
extern Il2CppCodeGenString* _stringLiteral90;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral92;
extern "C" void GlobalFog_OnRenderImage_m117 (GlobalFog_t59 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		_stringLiteral88 = il2cpp_codegen_string_literal_from_index(88);
		_stringLiteral89 = il2cpp_codegen_string_literal_from_index(89);
		_stringLiteral90 = il2cpp_codegen_string_literal_from_index(90);
		_stringLiteral91 = il2cpp_codegen_string_literal_from_index(91);
		_stringLiteral92 = il2cpp_codegen_string_literal_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Camera_t32 * V_0 = {0};
	Transform_t48 * V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Matrix4x4_t31  V_6 = {0};
	float V_7 = 0.0f;
	Vector3_t28  V_8 = {0};
	Vector3_t28  V_9 = {0};
	Vector3_t28  V_10 = {0};
	float V_11 = 0.0f;
	Vector3_t28  V_12 = {0};
	Vector3_t28  V_13 = {0};
	Vector3_t28  V_14 = {0};
	Vector3_t28  V_15 = {0};
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	int32_t V_18 = {0};
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	Vector4_t100  V_22 = {0};
	bool V_23 = false;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	int32_t V_26 = 0;
	float G_B7_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B13_0 = 0.0f;
	Vector4_t100 * G_B15_0 = {0};
	Vector4_t100 * G_B14_0 = {0};
	float G_B16_0 = 0.0f;
	Vector4_t100 * G_B16_1 = {0};
	Vector4_t100 * G_B18_0 = {0};
	Vector4_t100 * G_B17_0 = {0};
	float G_B19_0 = 0.0f;
	Vector4_t100 * G_B19_1 = {0};
	float G_B21_0 = 0.0f;
	String_t* G_B21_1 = {0};
	Material_t5 * G_B21_2 = {0};
	float G_B20_0 = 0.0f;
	String_t* G_B20_1 = {0};
	Material_t5 * G_B20_2 = {0};
	int32_t G_B22_0 = 0;
	float G_B22_1 = 0.0f;
	String_t* G_B22_2 = {0};
	Material_t5 * G_B22_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::CheckResources() */, __this);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = (__this->___distanceFog_5);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		bool L_2 = (__this->___heightFog_7);
		if (L_2)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		RenderTexture_t55 * L_3 = ___source;
		RenderTexture_t55 * L_4 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0029:
	{
		Camera_t32 * L_5 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		V_0 = L_5;
		Camera_t32 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t48 * L_7 = Component_get_transform_m332(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Camera_t32 * L_8 = V_0;
		NullCheck(L_8);
		float L_9 = Camera_get_nearClipPlane_m387(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Camera_t32 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = Camera_get_farClipPlane_m391(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		Camera_t32 * L_12 = V_0;
		NullCheck(L_12);
		float L_13 = Camera_get_fieldOfView_m339(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		Camera_t32 * L_14 = V_0;
		NullCheck(L_14);
		float L_15 = Camera_get_aspect_m407(L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		Matrix4x4_t31  L_16 = Matrix4x4_get_identity_m327(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_16;
		float L_17 = V_4;
		V_7 = ((float)((float)L_17*(float)(0.5f)));
		Transform_t48 * L_18 = V_1;
		NullCheck(L_18);
		Vector3_t28  L_19 = Transform_get_right_m341(L_18, /*hidden argument*/NULL);
		float L_20 = V_2;
		Vector3_t28  L_21 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		float L_22 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_23 = tanf(((float)((float)L_22*(float)(0.0174532924f))));
		Vector3_t28  L_24 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		float L_25 = V_5;
		Vector3_t28  L_26 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		V_8 = L_26;
		Transform_t48 * L_27 = V_1;
		NullCheck(L_27);
		Vector3_t28  L_28 = Transform_get_up_m333(L_27, /*hidden argument*/NULL);
		float L_29 = V_2;
		Vector3_t28  L_30 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		float L_31 = V_7;
		float L_32 = tanf(((float)((float)L_31*(float)(0.0174532924f))));
		Vector3_t28  L_33 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_30, L_32, /*hidden argument*/NULL);
		V_9 = L_33;
		Transform_t48 * L_34 = V_1;
		NullCheck(L_34);
		Vector3_t28  L_35 = Transform_get_forward_m340(L_34, /*hidden argument*/NULL);
		float L_36 = V_2;
		Vector3_t28  L_37 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector3_t28  L_38 = V_8;
		Vector3_t28  L_39 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		Vector3_t28  L_40 = V_9;
		Vector3_t28  L_41 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		V_10 = L_41;
		float L_42 = Vector3_get_magnitude_m337((&V_10), /*hidden argument*/NULL);
		float L_43 = V_3;
		float L_44 = V_2;
		V_11 = ((float)((float)((float)((float)L_42*(float)L_43))/(float)L_44));
		Vector3_Normalize_m408((&V_10), /*hidden argument*/NULL);
		Vector3_t28  L_45 = V_10;
		float L_46 = V_11;
		Vector3_t28  L_47 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		V_10 = L_47;
		Transform_t48 * L_48 = V_1;
		NullCheck(L_48);
		Vector3_t28  L_49 = Transform_get_forward_m340(L_48, /*hidden argument*/NULL);
		float L_50 = V_2;
		Vector3_t28  L_51 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_49, L_50, /*hidden argument*/NULL);
		Vector3_t28  L_52 = V_8;
		Vector3_t28  L_53 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		Vector3_t28  L_54 = V_9;
		Vector3_t28  L_55 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/NULL);
		V_12 = L_55;
		Vector3_Normalize_m408((&V_12), /*hidden argument*/NULL);
		Vector3_t28  L_56 = V_12;
		float L_57 = V_11;
		Vector3_t28  L_58 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_56, L_57, /*hidden argument*/NULL);
		V_12 = L_58;
		Transform_t48 * L_59 = V_1;
		NullCheck(L_59);
		Vector3_t28  L_60 = Transform_get_forward_m340(L_59, /*hidden argument*/NULL);
		float L_61 = V_2;
		Vector3_t28  L_62 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_60, L_61, /*hidden argument*/NULL);
		Vector3_t28  L_63 = V_8;
		Vector3_t28  L_64 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_62, L_63, /*hidden argument*/NULL);
		Vector3_t28  L_65 = V_9;
		Vector3_t28  L_66 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_64, L_65, /*hidden argument*/NULL);
		V_13 = L_66;
		Vector3_Normalize_m408((&V_13), /*hidden argument*/NULL);
		Vector3_t28  L_67 = V_13;
		float L_68 = V_11;
		Vector3_t28  L_69 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		V_13 = L_69;
		Transform_t48 * L_70 = V_1;
		NullCheck(L_70);
		Vector3_t28  L_71 = Transform_get_forward_m340(L_70, /*hidden argument*/NULL);
		float L_72 = V_2;
		Vector3_t28  L_73 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_71, L_72, /*hidden argument*/NULL);
		Vector3_t28  L_74 = V_8;
		Vector3_t28  L_75 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_73, L_74, /*hidden argument*/NULL);
		Vector3_t28  L_76 = V_9;
		Vector3_t28  L_77 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/NULL);
		V_14 = L_77;
		Vector3_Normalize_m408((&V_14), /*hidden argument*/NULL);
		Vector3_t28  L_78 = V_14;
		float L_79 = V_11;
		Vector3_t28  L_80 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/NULL);
		V_14 = L_80;
		Vector3_t28  L_81 = V_10;
		Vector4_t100  L_82 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		Matrix4x4_SetRow_m409((&V_6), 0, L_82, /*hidden argument*/NULL);
		Vector3_t28  L_83 = V_12;
		Vector4_t100  L_84 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		Matrix4x4_SetRow_m409((&V_6), 1, L_84, /*hidden argument*/NULL);
		Vector3_t28  L_85 = V_13;
		Vector4_t100  L_86 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
		Matrix4x4_SetRow_m409((&V_6), 2, L_86, /*hidden argument*/NULL);
		Vector3_t28  L_87 = V_14;
		Vector4_t100  L_88 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		Matrix4x4_SetRow_m409((&V_6), 3, L_88, /*hidden argument*/NULL);
		Transform_t48 * L_89 = V_1;
		NullCheck(L_89);
		Vector3_t28  L_90 = Transform_get_position_m335(L_89, /*hidden argument*/NULL);
		V_15 = L_90;
		float L_91 = ((&V_15)->___y_2);
		float L_92 = (__this->___height_8);
		V_16 = ((float)((float)L_91-(float)L_92));
		float L_93 = V_16;
		if ((!(((float)L_93) <= ((float)(0.0f)))))
		{
			goto IL_01dc;
		}
	}
	{
		G_B7_0 = (1.0f);
		goto IL_01e1;
	}

IL_01dc:
	{
		G_B7_0 = (0.0f);
	}

IL_01e1:
	{
		V_17 = G_B7_0;
		Material_t5 * L_94 = (__this->___fogMaterial_12);
		Matrix4x4_t31  L_95 = V_6;
		NullCheck(L_94);
		Material_SetMatrix_m326(L_94, _stringLiteral87, L_95, /*hidden argument*/NULL);
		Material_t5 * L_96 = (__this->___fogMaterial_12);
		Vector3_t28  L_97 = V_15;
		Vector4_t100  L_98 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_97, /*hidden argument*/NULL);
		NullCheck(L_96);
		Material_SetVector_m285(L_96, _stringLiteral88, L_98, /*hidden argument*/NULL);
		Material_t5 * L_99 = (__this->___fogMaterial_12);
		float L_100 = (__this->___height_8);
		float L_101 = V_16;
		float L_102 = V_17;
		float L_103 = (__this->___heightDensity_9);
		Vector4_t100  L_104 = {0};
		Vector4__ctor_m284(&L_104, L_100, L_101, L_102, ((float)((float)L_103*(float)(0.5f))), /*hidden argument*/NULL);
		NullCheck(L_99);
		Material_SetVector_m285(L_99, _stringLiteral89, L_104, /*hidden argument*/NULL);
		Material_t5 * L_105 = (__this->___fogMaterial_12);
		float L_106 = (__this->___startDistance_10);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_107 = Mathf_Max_m322(NULL /*static, unused*/, L_106, (0.0f), /*hidden argument*/NULL);
		Vector4_t100  L_108 = {0};
		Vector4__ctor_m284(&L_108, ((-L_107)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_105);
		Material_SetVector_m285(L_105, _stringLiteral90, L_108, /*hidden argument*/NULL);
		int32_t L_109 = RenderSettings_get_fogMode_m410(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_18 = L_109;
		float L_110 = RenderSettings_get_fogDensity_m411(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_19 = L_110;
		float L_111 = RenderSettings_get_fogStartDistance_m412(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_20 = L_111;
		float L_112 = RenderSettings_get_fogEndDistance_m413(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_21 = L_112;
		int32_t L_113 = V_18;
		V_23 = ((((int32_t)L_113) == ((int32_t)1))? 1 : 0);
		bool L_114 = V_23;
		if (!L_114)
		{
			goto IL_02a0;
		}
	}
	{
		float L_115 = V_21;
		float L_116 = V_20;
		G_B10_0 = ((float)((float)L_115-(float)L_116));
		goto IL_02a5;
	}

IL_02a0:
	{
		G_B10_0 = (0.0f);
	}

IL_02a5:
	{
		V_24 = G_B10_0;
		float L_117 = V_24;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_118 = fabsf(L_117);
		if ((!(((float)L_118) > ((float)(0.0001f)))))
		{
			goto IL_02c5;
		}
	}
	{
		float L_119 = V_24;
		G_B13_0 = ((float)((float)(1.0f)/(float)L_119));
		goto IL_02ca;
	}

IL_02c5:
	{
		G_B13_0 = (0.0f);
	}

IL_02ca:
	{
		V_25 = G_B13_0;
		float L_120 = V_19;
		(&V_22)->___x_1 = ((float)((float)L_120*(float)(1.2011224f)));
		float L_121 = V_19;
		(&V_22)->___y_2 = ((float)((float)L_121*(float)(1.442695f)));
		bool L_122 = V_23;
		G_B14_0 = (&V_22);
		if (!L_122)
		{
			G_B15_0 = (&V_22);
			goto IL_02fb;
		}
	}
	{
		float L_123 = V_25;
		G_B16_0 = ((-L_123));
		G_B16_1 = G_B14_0;
		goto IL_0300;
	}

IL_02fb:
	{
		G_B16_0 = (0.0f);
		G_B16_1 = G_B15_0;
	}

IL_0300:
	{
		G_B16_1->___z_3 = G_B16_0;
		bool L_124 = V_23;
		G_B17_0 = (&V_22);
		if (!L_124)
		{
			G_B18_0 = (&V_22);
			goto IL_0318;
		}
	}
	{
		float L_125 = V_21;
		float L_126 = V_25;
		G_B19_0 = ((float)((float)L_125*(float)L_126));
		G_B19_1 = G_B17_0;
		goto IL_031d;
	}

IL_0318:
	{
		G_B19_0 = (0.0f);
		G_B19_1 = G_B18_0;
	}

IL_031d:
	{
		G_B19_1->___w_4 = G_B19_0;
		Material_t5 * L_127 = (__this->___fogMaterial_12);
		Vector4_t100  L_128 = V_22;
		NullCheck(L_127);
		Material_SetVector_m285(L_127, _stringLiteral91, L_128, /*hidden argument*/NULL);
		Material_t5 * L_129 = (__this->___fogMaterial_12);
		int32_t L_130 = V_18;
		bool L_131 = (__this->___useRadialDistance_6);
		G_B20_0 = (((float)L_130));
		G_B20_1 = _stringLiteral92;
		G_B20_2 = L_129;
		if (!L_131)
		{
			G_B21_0 = (((float)L_130));
			G_B21_1 = _stringLiteral92;
			G_B21_2 = L_129;
			goto IL_0353;
		}
	}
	{
		G_B22_0 = 1;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		G_B22_3 = G_B20_2;
		goto IL_0354;
	}

IL_0353:
	{
		G_B22_0 = 0;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
		G_B22_3 = G_B21_2;
	}

IL_0354:
	{
		Vector4_t100  L_132 = {0};
		Vector4__ctor_m284(&L_132, G_B22_1, (((float)G_B22_0)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(G_B22_3);
		Material_SetVector_m285(G_B22_3, G_B22_2, L_132, /*hidden argument*/NULL);
		V_26 = 0;
		bool L_133 = (__this->___distanceFog_5);
		if (!L_133)
		{
			goto IL_038a;
		}
	}
	{
		bool L_134 = (__this->___heightFog_7);
		if (!L_134)
		{
			goto IL_038a;
		}
	}
	{
		V_26 = 0;
		goto IL_03a0;
	}

IL_038a:
	{
		bool L_135 = (__this->___distanceFog_5);
		if (!L_135)
		{
			goto IL_039d;
		}
	}
	{
		V_26 = 1;
		goto IL_03a0;
	}

IL_039d:
	{
		V_26 = 2;
	}

IL_03a0:
	{
		RenderTexture_t55 * L_136 = ___source;
		RenderTexture_t55 * L_137 = ___destination;
		Material_t5 * L_138 = (__this->___fogMaterial_12);
		int32_t L_139 = V_26;
		GlobalFog_CustomGraphicsBlit_m118(NULL /*static, unused*/, L_136, L_137, L_138, L_139, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void GlobalFog_CustomGraphicsBlit_m118 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, Material_t5 * ___fxMaterial, int32_t ___passNr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		RenderTexture_t55 * L_0 = ___dest;
		RenderTexture_set_active_m402(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Material_t5 * L_1 = ___fxMaterial;
		RenderTexture_t55 * L_2 = ___source;
		NullCheck(L_1);
		Material_SetTexture_m292(L_1, _stringLiteral69, L_2, /*hidden argument*/NULL);
		GL_PushMatrix_m403(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_LoadOrtho_m414(NULL /*static, unused*/, /*hidden argument*/NULL);
		Material_t5 * L_3 = ___fxMaterial;
		int32_t L_4 = ___passNr;
		NullCheck(L_3);
		Material_SetPass_m398(L_3, L_4, /*hidden argument*/NULL);
		GL_Begin_m415(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 0, (0.0f), (0.0f), /*hidden argument*/NULL);
		GL_Vertex3_m417(NULL /*static, unused*/, (0.0f), (0.0f), (3.0f), /*hidden argument*/NULL);
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 0, (1.0f), (0.0f), /*hidden argument*/NULL);
		GL_Vertex3_m417(NULL /*static, unused*/, (1.0f), (0.0f), (2.0f), /*hidden argument*/NULL);
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 0, (1.0f), (1.0f), /*hidden argument*/NULL);
		GL_Vertex3_m417(NULL /*static, unused*/, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 0, (0.0f), (1.0f), /*hidden argument*/NULL);
		GL_Vertex3_m417(NULL /*static, unused*/, (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		GL_End_m418(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_PopMatrix_m406(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.Grayscale
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_41.h"
// UnityStandardAssets.ImageEffects.Grayscale
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_41MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.Grayscale::.ctor()
// UnityStandardAssets.ImageEffects.ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_25MethodDeclarations.h"
extern "C" void Grayscale__ctor_m119 (Grayscale_t60 * __this, const MethodInfo* method)
{
	{
		ImageEffectBase__ctor_m121(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Grayscale::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral53;
extern Il2CppCodeGenString* _stringLiteral93;
extern "C" void Grayscale_OnRenderImage_m120 (Grayscale_t60 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral53 = il2cpp_codegen_string_literal_from_index(53);
		_stringLiteral93 = il2cpp_codegen_string_literal_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = ImageEffectBase_get_material_m123(__this, /*hidden argument*/NULL);
		Texture_t40 * L_1 = (__this->___textureRamp_4);
		NullCheck(L_0);
		Material_SetTexture_m292(L_0, _stringLiteral53, L_1, /*hidden argument*/NULL);
		Material_t5 * L_2 = ImageEffectBase_get_material_m123(__this, /*hidden argument*/NULL);
		float L_3 = (__this->___rampOffset_5);
		NullCheck(L_2);
		Material_SetFloat_m269(L_2, _stringLiteral93, L_3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_4 = ___source;
		RenderTexture_t55 * L_5 = ___destination;
		Material_t5 * L_6 = ImageEffectBase_get_material_m123(__this, /*hidden argument*/NULL);
		Graphics_Blit_m270(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_25.h"
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void ImageEffectBase__ctor_m121 (ImageEffectBase_t39 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::Start()
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern "C" void ImageEffectBase_Start_m122 (ImageEffectBase_t39 * __this, const MethodInfo* method)
{
	{
		bool L_0 = SystemInfo_get_supportsImageEffects_m302(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		Shader_t4 * L_1 = (__this->___shader_2);
		bool L_2 = Object_op_Implicit_m294(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Shader_t4 * L_3 = (__this->___shader_2);
		NullCheck(L_3);
		bool L_4 = Shader_get_isSupported_m266(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}

IL_0032:
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
	}

IL_0039:
	{
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::get_material()
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern TypeInfo* Material_t5_il2cpp_TypeInfo_var;
extern "C" Material_t5 * ImageEffectBase_get_material_m123 (ImageEffectBase_t39 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___m_Material_3);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t4 * L_2 = (__this->___shader_2);
		Material_t5 * L_3 = (Material_t5 *)il2cpp_codegen_object_new (Material_t5_il2cpp_TypeInfo_var);
		Material__ctor_m300(L_3, L_2, /*hidden argument*/NULL);
		__this->___m_Material_3 = L_3;
		Material_t5 * L_4 = (__this->___m_Material_3);
		NullCheck(L_4);
		Object_set_hideFlags_m301(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002f:
	{
		Material_t5 * L_5 = (__this->___m_Material_3);
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::OnDisable()
extern "C" void ImageEffectBase_OnDisable_m124 (ImageEffectBase_t39 * __this, const MethodInfo* method)
{
	{
		Material_t5 * L_0 = (__this->___m_Material_3);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Material_t5 * L_2 = (__this->___m_Material_3);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// UnityStandardAssets.ImageEffects.ImageEffects
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_42.h"
// UnityStandardAssets.ImageEffects.ImageEffects
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_42MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ImageEffects__ctor_m125 (ImageEffects_t61 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral94;
extern Il2CppCodeGenString* _stringLiteral95;
extern Il2CppCodeGenString* _stringLiteral96;
extern "C" void ImageEffects_RenderDistortion_m126 (Object_t * __this /* static, unused */, Material_t5 * ___material, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, float ___angle, Vector2_t85  ___center, Vector2_t85  ___radius, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral94 = il2cpp_codegen_string_literal_from_index(94);
		_stringLiteral95 = il2cpp_codegen_string_literal_from_index(95);
		_stringLiteral96 = il2cpp_codegen_string_literal_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Matrix4x4_t31  V_1 = {0};
	Vector2_t85  V_2 = {0};
	{
		RenderTexture_t55 * L_0 = ___source;
		NullCheck(L_0);
		Vector2_t85  L_1 = Texture_get_texelSize_m420(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = ((&V_2)->___y_2);
		V_0 = ((((float)L_2) < ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		float L_4 = ((&___center)->___y_2);
		(&___center)->___y_2 = ((float)((float)(1.0f)-(float)L_4));
		float L_5 = ___angle;
		___angle = ((-L_5));
	}

IL_0034:
	{
		Vector3_t28  L_6 = Vector3_get_zero_m312(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = ___angle;
		Quaternion_t104  L_8 = Quaternion_Euler_m421(NULL /*static, unused*/, (0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		Vector3_t28  L_9 = Vector3_get_one_m308(NULL /*static, unused*/, /*hidden argument*/NULL);
		Matrix4x4_t31  L_10 = Matrix4x4_TRS_m422(NULL /*static, unused*/, L_6, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Material_t5 * L_11 = ___material;
		Matrix4x4_t31  L_12 = V_1;
		NullCheck(L_11);
		Material_SetMatrix_m326(L_11, _stringLiteral94, L_12, /*hidden argument*/NULL);
		Material_t5 * L_13 = ___material;
		float L_14 = ((&___center)->___x_1);
		float L_15 = ((&___center)->___y_2);
		float L_16 = ((&___radius)->___x_1);
		float L_17 = ((&___radius)->___y_2);
		Vector4_t100  L_18 = {0};
		Vector4__ctor_m284(&L_18, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_m285(L_13, _stringLiteral95, L_18, /*hidden argument*/NULL);
		Material_t5 * L_19 = ___material;
		float L_20 = ___angle;
		NullCheck(L_19);
		Material_SetFloat_m269(L_19, _stringLiteral96, ((float)((float)L_20*(float)(0.0174532924f))), /*hidden argument*/NULL);
		RenderTexture_t55 * L_21 = ___source;
		RenderTexture_t55 * L_22 = ___destination;
		Material_t5 * L_23 = ___material;
		Graphics_Blit_m270(NULL /*static, unused*/, L_21, L_22, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_Blit_m127 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, const MethodInfo* method)
{
	{
		RenderTexture_t55 * L_0 = ___source;
		RenderTexture_t55 * L_1 = ___dest;
		Graphics_Blit_m267(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_BlitWithMaterial_m128 (Object_t * __this /* static, unused */, Material_t5 * ___material, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, const MethodInfo* method)
{
	{
		RenderTexture_t55 * L_0 = ___source;
		RenderTexture_t55 * L_1 = ___dest;
		Material_t5 * L_2 = ___material;
		Graphics_Blit_m270(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.MotionBlur
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_43.h"
// UnityStandardAssets.ImageEffects.MotionBlur
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_43MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.MotionBlur::.ctor()
// UnityStandardAssets.ImageEffects.ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_25MethodDeclarations.h"
extern "C" void MotionBlur__ctor_m129 (MotionBlur_t62 * __this, const MethodInfo* method)
{
	{
		__this->___blurAmount_4 = (0.8f);
		ImageEffectBase__ctor_m121(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.MotionBlur::Start()
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern "C" void MotionBlur_Start_m130 (MotionBlur_t62 * __this, const MethodInfo* method)
{
	{
		bool L_0 = SystemInfo_get_supportsRenderTextures_m423(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		ImageEffectBase_Start_m122(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.MotionBlur::OnDisable()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void MotionBlur_OnDisable_m131 (MotionBlur_t62 * __this, const MethodInfo* method)
{
	{
		ImageEffectBase_OnDisable_m124(__this, /*hidden argument*/NULL);
		RenderTexture_t55 * L_0 = (__this->___accumTexture_6);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.MotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern TypeInfo* RenderTexture_t55_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral69;
extern Il2CppCodeGenString* _stringLiteral97;
extern "C" void MotionBlur_OnRenderImage_m132 (MotionBlur_t62 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RenderTexture_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		_stringLiteral97 = il2cpp_codegen_string_literal_from_index(97);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t55 * V_0 = {0};
	{
		RenderTexture_t55 * L_0 = (__this->___accumTexture_6);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_003d;
		}
	}
	{
		RenderTexture_t55 * L_2 = (__this->___accumTexture_6);
		NullCheck(L_2);
		int32_t L_3 = RenderTexture_get_width_m272(L_2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_4 = ___source;
		NullCheck(L_4);
		int32_t L_5 = RenderTexture_get_width_m272(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_003d;
		}
	}
	{
		RenderTexture_t55 * L_6 = (__this->___accumTexture_6);
		NullCheck(L_6);
		int32_t L_7 = RenderTexture_get_height_m273(L_6, /*hidden argument*/NULL);
		RenderTexture_t55 * L_8 = ___source;
		NullCheck(L_8);
		int32_t L_9 = RenderTexture_get_height_m273(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0079;
		}
	}

IL_003d:
	{
		RenderTexture_t55 * L_10 = (__this->___accumTexture_6);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		RenderTexture_t55 * L_11 = ___source;
		NullCheck(L_11);
		int32_t L_12 = RenderTexture_get_width_m272(L_11, /*hidden argument*/NULL);
		RenderTexture_t55 * L_13 = ___source;
		NullCheck(L_13);
		int32_t L_14 = RenderTexture_get_height_m273(L_13, /*hidden argument*/NULL);
		RenderTexture_t55 * L_15 = (RenderTexture_t55 *)il2cpp_codegen_object_new (RenderTexture_t55_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m382(L_15, L_12, L_14, 0, /*hidden argument*/NULL);
		__this->___accumTexture_6 = L_15;
		RenderTexture_t55 * L_16 = (__this->___accumTexture_6);
		NullCheck(L_16);
		Object_set_hideFlags_m301(L_16, ((int32_t)61), /*hidden argument*/NULL);
		RenderTexture_t55 * L_17 = ___source;
		RenderTexture_t55 * L_18 = (__this->___accumTexture_6);
		Graphics_Blit_m267(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
	}

IL_0079:
	{
		bool L_19 = (__this->___extraBlur_5);
		if (!L_19)
		{
			goto IL_00c4;
		}
	}
	{
		RenderTexture_t55 * L_20 = ___source;
		NullCheck(L_20);
		int32_t L_21 = RenderTexture_get_width_m272(L_20, /*hidden argument*/NULL);
		RenderTexture_t55 * L_22 = ___source;
		NullCheck(L_22);
		int32_t L_23 = RenderTexture_get_height_m273(L_22, /*hidden argument*/NULL);
		RenderTexture_t55 * L_24 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_21/(int32_t)4)), ((int32_t)((int32_t)L_23/(int32_t)4)), 0, /*hidden argument*/NULL);
		V_0 = L_24;
		RenderTexture_t55 * L_25 = (__this->___accumTexture_6);
		NullCheck(L_25);
		RenderTexture_MarkRestoreExpected_m289(L_25, /*hidden argument*/NULL);
		RenderTexture_t55 * L_26 = (__this->___accumTexture_6);
		RenderTexture_t55 * L_27 = V_0;
		Graphics_Blit_m267(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		RenderTexture_t55 * L_28 = V_0;
		RenderTexture_t55 * L_29 = (__this->___accumTexture_6);
		Graphics_Blit_m267(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		RenderTexture_t55 * L_30 = V_0;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		float L_31 = (__this->___blurAmount_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_32 = Mathf_Clamp_m368(NULL /*static, unused*/, L_31, (0.0f), (0.92f), /*hidden argument*/NULL);
		__this->___blurAmount_4 = L_32;
		Material_t5 * L_33 = ImageEffectBase_get_material_m123(__this, /*hidden argument*/NULL);
		RenderTexture_t55 * L_34 = (__this->___accumTexture_6);
		NullCheck(L_33);
		Material_SetTexture_m292(L_33, _stringLiteral69, L_34, /*hidden argument*/NULL);
		Material_t5 * L_35 = ImageEffectBase_get_material_m123(__this, /*hidden argument*/NULL);
		float L_36 = (__this->___blurAmount_4);
		NullCheck(L_35);
		Material_SetFloat_m269(L_35, _stringLiteral97, ((float)((float)(1.0f)-(float)L_36)), /*hidden argument*/NULL);
		RenderTexture_t55 * L_37 = (__this->___accumTexture_6);
		NullCheck(L_37);
		RenderTexture_MarkRestoreExpected_m289(L_37, /*hidden argument*/NULL);
		RenderTexture_t55 * L_38 = ___source;
		RenderTexture_t55 * L_39 = (__this->___accumTexture_6);
		Material_t5 * L_40 = ImageEffectBase_get_material_m123(__this, /*hidden argument*/NULL);
		Graphics_Blit_m270(NULL /*static, unused*/, L_38, L_39, L_40, /*hidden argument*/NULL);
		RenderTexture_t55 * L_41 = (__this->___accumTexture_6);
		RenderTexture_t55 * L_42 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.NoiseAndGrain
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_44.h"
// UnityStandardAssets.ImageEffects.NoiseAndGrain
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_44MethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.ctor()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void NoiseAndGrain__ctor_m133 (NoiseAndGrain_t63 * __this, const MethodInfo* method)
{
	{
		__this->___intensityMultiplier_5 = (0.25f);
		__this->___generalIntensity_6 = (0.5f);
		__this->___blackIntensity_7 = (1.0f);
		__this->___whiteIntensity_8 = (1.0f);
		__this->___midGrey_9 = (0.2f);
		Vector3_t28  L_0 = {0};
		Vector3__ctor_m396(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___intensities_13 = L_0;
		Vector3_t28  L_1 = {0};
		Vector3__ctor_m396(&L_1, (64.0f), (64.0f), (64.0f), /*hidden argument*/NULL);
		__this->___tiling_14 = L_1;
		__this->___monochromeTiling_15 = (64.0f);
		__this->___filterMode_16 = 1;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.cctor()
extern TypeInfo* NoiseAndGrain_t63_il2cpp_TypeInfo_var;
extern "C" void NoiseAndGrain__cctor_m134 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NoiseAndGrain_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		((NoiseAndGrain_t63_StaticFields*)NoiseAndGrain_t63_il2cpp_TypeInfo_var->static_fields)->___TILE_AMOUNT_22 = (64.0f);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::CheckResources()
extern "C" bool NoiseAndGrain_CheckResources_m135 (NoiseAndGrain_t63 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___noiseShader_18);
		Material_t5 * L_1 = (__this->___noiseMaterial_19);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___noiseMaterial_19 = L_2;
		bool L_3 = (__this->___dx11Grain_10);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		bool L_4 = (((PostEffectsBase_t3 *)__this)->___supportDX11_3);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		Shader_t4 * L_5 = (__this->___dx11NoiseShader_20);
		Material_t5 * L_6 = (__this->___dx11NoiseMaterial_21);
		Material_t5 * L_7 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_5, L_6, /*hidden argument*/NULL);
		__this->___dx11NoiseMaterial_21 = L_7;
	}

IL_004e:
	{
		bool L_8 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_8)
		{
			goto IL_005f;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_005f:
	{
		bool L_9 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_9;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.NoiseAndGrain
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_44MethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern TypeInfo* NoiseAndGrain_t63_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral98;
extern Il2CppCodeGenString* _stringLiteral99;
extern Il2CppCodeGenString* _stringLiteral33;
extern Il2CppCodeGenString* _stringLiteral100;
extern Il2CppCodeGenString* _stringLiteral101;
extern Il2CppCodeGenString* _stringLiteral102;
extern Il2CppCodeGenString* _stringLiteral103;
extern "C" void NoiseAndGrain_OnRenderImage_m136 (NoiseAndGrain_t63 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		NoiseAndGrain_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		_stringLiteral98 = il2cpp_codegen_string_literal_from_index(98);
		_stringLiteral99 = il2cpp_codegen_string_literal_from_index(99);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		_stringLiteral100 = il2cpp_codegen_string_literal_from_index(100);
		_stringLiteral101 = il2cpp_codegen_string_literal_from_index(101);
		_stringLiteral102 = il2cpp_codegen_string_literal_from_index(102);
		_stringLiteral103 = il2cpp_codegen_string_literal_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t55 * V_0 = {0};
	RenderTexture_t55 * V_1 = {0};
	String_t* G_B9_0 = {0};
	Material_t5 * G_B9_1 = {0};
	String_t* G_B8_0 = {0};
	Material_t5 * G_B8_1 = {0};
	Vector3_t28  G_B10_0 = {0};
	String_t* G_B10_1 = {0};
	Material_t5 * G_B10_2 = {0};
	Texture2D_t13 * G_B13_0 = {0};
	Material_t5 * G_B13_1 = {0};
	RenderTexture_t55 * G_B13_2 = {0};
	RenderTexture_t55 * G_B13_3 = {0};
	Texture2D_t13 * G_B12_0 = {0};
	Material_t5 * G_B12_1 = {0};
	RenderTexture_t55 * G_B12_2 = {0};
	RenderTexture_t55 * G_B12_3 = {0};
	int32_t G_B14_0 = 0;
	Texture2D_t13 * G_B14_1 = {0};
	Material_t5 * G_B14_2 = {0};
	RenderTexture_t55 * G_B14_3 = {0};
	RenderTexture_t55 * G_B14_4 = {0};
	Texture2D_t13 * G_B17_0 = {0};
	Material_t5 * G_B17_1 = {0};
	RenderTexture_t55 * G_B17_2 = {0};
	RenderTexture_t55 * G_B17_3 = {0};
	Texture2D_t13 * G_B16_0 = {0};
	Material_t5 * G_B16_1 = {0};
	RenderTexture_t55 * G_B16_2 = {0};
	RenderTexture_t55 * G_B16_3 = {0};
	int32_t G_B18_0 = 0;
	Texture2D_t13 * G_B18_1 = {0};
	Material_t5 * G_B18_2 = {0};
	RenderTexture_t55 * G_B18_3 = {0};
	RenderTexture_t55 * G_B18_4 = {0};
	String_t* G_B24_0 = {0};
	Material_t5 * G_B24_1 = {0};
	String_t* G_B23_0 = {0};
	Material_t5 * G_B23_1 = {0};
	Vector3_t28  G_B25_0 = {0};
	String_t* G_B25_1 = {0};
	Material_t5 * G_B25_2 = {0};
	String_t* G_B27_0 = {0};
	Material_t5 * G_B27_1 = {0};
	String_t* G_B26_0 = {0};
	Material_t5 * G_B26_1 = {0};
	Vector3_t28  G_B28_0 = {0};
	String_t* G_B28_1 = {0};
	Material_t5 * G_B28_2 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::CheckResources() */, __this);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Texture2D_t13 * L_1 = (__this->___noiseTexture_17);
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, (Object_t99 *)NULL, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0045;
		}
	}

IL_001c:
	{
		RenderTexture_t55 * L_3 = ___source;
		RenderTexture_t55 * L_4 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Texture2D_t13 * L_5 = (__this->___noiseTexture_17);
		bool L_6 = Object_op_Equality_m295(NULL /*static, unused*/, (Object_t99 *)NULL, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		Transform_t48 * L_7 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		Debug_LogWarning_m424(NULL /*static, unused*/, _stringLiteral98, L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}

IL_0045:
	{
		float L_8 = (__this->___softness_11);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Clamp_m368(NULL /*static, unused*/, L_8, (0.0f), (0.99f), /*hidden argument*/NULL);
		__this->___softness_11 = L_9;
		bool L_10 = (__this->___dx11Grain_10);
		if (!L_10)
		{
			goto IL_0200;
		}
	}
	{
		bool L_11 = (((PostEffectsBase_t3 *)__this)->___supportDX11_3);
		if (!L_11)
		{
			goto IL_0200;
		}
	}
	{
		Material_t5 * L_12 = (__this->___dx11NoiseMaterial_21);
		int32_t L_13 = Time_get_frameCount_m347(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		Material_SetFloat_m269(L_12, _stringLiteral99, (((float)L_13)), /*hidden argument*/NULL);
		Material_t5 * L_14 = (__this->___dx11NoiseMaterial_21);
		Texture2D_t13 * L_15 = (__this->___noiseTexture_17);
		NullCheck(L_14);
		Material_SetTexture_m292(L_14, _stringLiteral33, L_15, /*hidden argument*/NULL);
		Material_t5 * L_16 = (__this->___dx11NoiseMaterial_21);
		bool L_17 = (__this->___monochrome_12);
		G_B8_0 = _stringLiteral100;
		G_B8_1 = L_16;
		if (!L_17)
		{
			G_B9_0 = _stringLiteral100;
			G_B9_1 = L_16;
			goto IL_00c2;
		}
	}
	{
		Vector3_t28  L_18 = Vector3_get_one_m308(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B10_0 = L_18;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00c8;
	}

IL_00c2:
	{
		Vector3_t28  L_19 = (__this->___intensities_13);
		G_B10_0 = L_19;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00c8:
	{
		Vector4_t100  L_20 = Vector4_op_Implicit_m397(NULL /*static, unused*/, G_B10_0, /*hidden argument*/NULL);
		NullCheck(G_B10_2);
		Material_SetVector_m285(G_B10_2, G_B10_1, L_20, /*hidden argument*/NULL);
		Material_t5 * L_21 = (__this->___dx11NoiseMaterial_21);
		float L_22 = (__this->___midGrey_9);
		float L_23 = (__this->___midGrey_9);
		float L_24 = (__this->___midGrey_9);
		Vector3_t28  L_25 = {0};
		Vector3__ctor_m396(&L_25, L_22, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)-(float)L_23)))), ((float)((float)(-1.0f)/(float)L_24)), /*hidden argument*/NULL);
		Vector4_t100  L_26 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		NullCheck(L_21);
		Material_SetVector_m285(L_21, _stringLiteral101, L_26, /*hidden argument*/NULL);
		Material_t5 * L_27 = (__this->___dx11NoiseMaterial_21);
		float L_28 = (__this->___generalIntensity_6);
		float L_29 = (__this->___blackIntensity_7);
		float L_30 = (__this->___whiteIntensity_8);
		Vector3_t28  L_31 = {0};
		Vector3__ctor_m396(&L_31, L_28, L_29, L_30, /*hidden argument*/NULL);
		float L_32 = (__this->___intensityMultiplier_5);
		Vector3_t28  L_33 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		Vector4_t100  L_34 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		NullCheck(L_27);
		Material_SetVector_m285(L_27, _stringLiteral102, L_34, /*hidden argument*/NULL);
		float L_35 = (__this->___softness_11);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_36 = ((Mathf_t101_StaticFields*)Mathf_t101_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		if ((!(((float)L_35) > ((float)L_36))))
		{
			goto IL_01d6;
		}
	}
	{
		RenderTexture_t55 * L_37 = ___source;
		NullCheck(L_37);
		int32_t L_38 = RenderTexture_get_width_m272(L_37, /*hidden argument*/NULL);
		float L_39 = (__this->___softness_11);
		RenderTexture_t55 * L_40 = ___source;
		NullCheck(L_40);
		int32_t L_41 = RenderTexture_get_height_m273(L_40, /*hidden argument*/NULL);
		float L_42 = (__this->___softness_11);
		RenderTexture_t55 * L_43 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, (((int32_t)((float)((float)(((float)L_38))*(float)((float)((float)(1.0f)-(float)L_39)))))), (((int32_t)((float)((float)(((float)L_41))*(float)((float)((float)(1.0f)-(float)L_42)))))), /*hidden argument*/NULL);
		V_0 = L_43;
		RenderTexture_t55 * L_44 = ___source;
		RenderTexture_t55 * L_45 = V_0;
		Material_t5 * L_46 = (__this->___dx11NoiseMaterial_21);
		Texture2D_t13 * L_47 = (__this->___noiseTexture_17);
		bool L_48 = (__this->___monochrome_12);
		G_B12_0 = L_47;
		G_B12_1 = L_46;
		G_B12_2 = L_45;
		G_B12_3 = L_44;
		if (!L_48)
		{
			G_B13_0 = L_47;
			G_B13_1 = L_46;
			G_B13_2 = L_45;
			G_B13_3 = L_44;
			goto IL_01a6;
		}
	}
	{
		G_B14_0 = 3;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		G_B14_4 = G_B12_3;
		goto IL_01a7;
	}

IL_01a6:
	{
		G_B14_0 = 2;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
		G_B14_4 = G_B13_3;
	}

IL_01a7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NoiseAndGrain_t63_il2cpp_TypeInfo_var);
		NoiseAndGrain_DrawNoiseQuadGrid_m137(NULL /*static, unused*/, G_B14_4, G_B14_3, G_B14_2, G_B14_1, G_B14_0, /*hidden argument*/NULL);
		Material_t5 * L_49 = (__this->___dx11NoiseMaterial_21);
		RenderTexture_t55 * L_50 = V_0;
		NullCheck(L_49);
		Material_SetTexture_m292(L_49, _stringLiteral33, L_50, /*hidden argument*/NULL);
		RenderTexture_t55 * L_51 = ___source;
		RenderTexture_t55 * L_52 = ___destination;
		Material_t5 * L_53 = (__this->___dx11NoiseMaterial_21);
		Graphics_Blit_m275(NULL /*static, unused*/, L_51, L_52, L_53, 4, /*hidden argument*/NULL);
		RenderTexture_t55 * L_54 = V_0;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		goto IL_01fb;
	}

IL_01d6:
	{
		RenderTexture_t55 * L_55 = ___source;
		RenderTexture_t55 * L_56 = ___destination;
		Material_t5 * L_57 = (__this->___dx11NoiseMaterial_21);
		Texture2D_t13 * L_58 = (__this->___noiseTexture_17);
		bool L_59 = (__this->___monochrome_12);
		G_B16_0 = L_58;
		G_B16_1 = L_57;
		G_B16_2 = L_56;
		G_B16_3 = L_55;
		if (!L_59)
		{
			G_B17_0 = L_58;
			G_B17_1 = L_57;
			G_B17_2 = L_56;
			G_B17_3 = L_55;
			goto IL_01f5;
		}
	}
	{
		G_B18_0 = 1;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		G_B18_4 = G_B16_3;
		goto IL_01f6;
	}

IL_01f5:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
		G_B18_4 = G_B17_3;
	}

IL_01f6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NoiseAndGrain_t63_il2cpp_TypeInfo_var);
		NoiseAndGrain_DrawNoiseQuadGrid_m137(NULL /*static, unused*/, G_B18_4, G_B18_3, G_B18_2, G_B18_1, G_B18_0, /*hidden argument*/NULL);
	}

IL_01fb:
	{
		goto IL_03b5;
	}

IL_0200:
	{
		Texture2D_t13 * L_60 = (__this->___noiseTexture_17);
		bool L_61 = Object_op_Implicit_m294(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_022d;
		}
	}
	{
		Texture2D_t13 * L_62 = (__this->___noiseTexture_17);
		NullCheck(L_62);
		Texture_set_wrapMode_m324(L_62, 0, /*hidden argument*/NULL);
		Texture2D_t13 * L_63 = (__this->___noiseTexture_17);
		int32_t L_64 = (__this->___filterMode_16);
		NullCheck(L_63);
		Texture_set_filterMode_m298(L_63, L_64, /*hidden argument*/NULL);
	}

IL_022d:
	{
		Material_t5 * L_65 = (__this->___noiseMaterial_19);
		Texture2D_t13 * L_66 = (__this->___noiseTexture_17);
		NullCheck(L_65);
		Material_SetTexture_m292(L_65, _stringLiteral33, L_66, /*hidden argument*/NULL);
		Material_t5 * L_67 = (__this->___noiseMaterial_19);
		bool L_68 = (__this->___monochrome_12);
		G_B23_0 = _stringLiteral100;
		G_B23_1 = L_67;
		if (!L_68)
		{
			G_B24_0 = _stringLiteral100;
			G_B24_1 = L_67;
			goto IL_0263;
		}
	}
	{
		Vector3_t28  L_69 = Vector3_get_one_m308(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B25_0 = L_69;
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_0269;
	}

IL_0263:
	{
		Vector3_t28  L_70 = (__this->___intensities_13);
		G_B25_0 = L_70;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_0269:
	{
		Vector4_t100  L_71 = Vector4_op_Implicit_m397(NULL /*static, unused*/, G_B25_0, /*hidden argument*/NULL);
		NullCheck(G_B25_2);
		Material_SetVector_m285(G_B25_2, G_B25_1, L_71, /*hidden argument*/NULL);
		Material_t5 * L_72 = (__this->___noiseMaterial_19);
		bool L_73 = (__this->___monochrome_12);
		G_B26_0 = _stringLiteral103;
		G_B26_1 = L_72;
		if (!L_73)
		{
			G_B27_0 = _stringLiteral103;
			G_B27_1 = L_72;
			goto IL_029e;
		}
	}
	{
		Vector3_t28  L_74 = Vector3_get_one_m308(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_75 = (__this->___monochromeTiling_15);
		Vector3_t28  L_76 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_74, L_75, /*hidden argument*/NULL);
		G_B28_0 = L_76;
		G_B28_1 = G_B26_0;
		G_B28_2 = G_B26_1;
		goto IL_02a4;
	}

IL_029e:
	{
		Vector3_t28  L_77 = (__this->___tiling_14);
		G_B28_0 = L_77;
		G_B28_1 = G_B27_0;
		G_B28_2 = G_B27_1;
	}

IL_02a4:
	{
		Vector4_t100  L_78 = Vector4_op_Implicit_m397(NULL /*static, unused*/, G_B28_0, /*hidden argument*/NULL);
		NullCheck(G_B28_2);
		Material_SetVector_m285(G_B28_2, G_B28_1, L_78, /*hidden argument*/NULL);
		Material_t5 * L_79 = (__this->___noiseMaterial_19);
		float L_80 = (__this->___midGrey_9);
		float L_81 = (__this->___midGrey_9);
		float L_82 = (__this->___midGrey_9);
		Vector3_t28  L_83 = {0};
		Vector3__ctor_m396(&L_83, L_80, ((float)((float)(1.0f)/(float)((float)((float)(1.0f)-(float)L_81)))), ((float)((float)(-1.0f)/(float)L_82)), /*hidden argument*/NULL);
		Vector4_t100  L_84 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		NullCheck(L_79);
		Material_SetVector_m285(L_79, _stringLiteral101, L_84, /*hidden argument*/NULL);
		Material_t5 * L_85 = (__this->___noiseMaterial_19);
		float L_86 = (__this->___generalIntensity_6);
		float L_87 = (__this->___blackIntensity_7);
		float L_88 = (__this->___whiteIntensity_8);
		Vector3_t28  L_89 = {0};
		Vector3__ctor_m396(&L_89, L_86, L_87, L_88, /*hidden argument*/NULL);
		float L_90 = (__this->___intensityMultiplier_5);
		Vector3_t28  L_91 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_89, L_90, /*hidden argument*/NULL);
		Vector4_t100  L_92 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_91, /*hidden argument*/NULL);
		NullCheck(L_85);
		Material_SetVector_m285(L_85, _stringLiteral102, L_92, /*hidden argument*/NULL);
		float L_93 = (__this->___softness_11);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_94 = ((Mathf_t101_StaticFields*)Mathf_t101_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		if ((!(((float)L_93) > ((float)L_94))))
		{
			goto IL_03a1;
		}
	}
	{
		RenderTexture_t55 * L_95 = ___source;
		NullCheck(L_95);
		int32_t L_96 = RenderTexture_get_width_m272(L_95, /*hidden argument*/NULL);
		float L_97 = (__this->___softness_11);
		RenderTexture_t55 * L_98 = ___source;
		NullCheck(L_98);
		int32_t L_99 = RenderTexture_get_height_m273(L_98, /*hidden argument*/NULL);
		float L_100 = (__this->___softness_11);
		RenderTexture_t55 * L_101 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, (((int32_t)((float)((float)(((float)L_96))*(float)((float)((float)(1.0f)-(float)L_97)))))), (((int32_t)((float)((float)(((float)L_99))*(float)((float)((float)(1.0f)-(float)L_100)))))), /*hidden argument*/NULL);
		V_1 = L_101;
		RenderTexture_t55 * L_102 = ___source;
		RenderTexture_t55 * L_103 = V_1;
		Material_t5 * L_104 = (__this->___noiseMaterial_19);
		Texture2D_t13 * L_105 = (__this->___noiseTexture_17);
		IL2CPP_RUNTIME_CLASS_INIT(NoiseAndGrain_t63_il2cpp_TypeInfo_var);
		NoiseAndGrain_DrawNoiseQuadGrid_m137(NULL /*static, unused*/, L_102, L_103, L_104, L_105, 2, /*hidden argument*/NULL);
		Material_t5 * L_106 = (__this->___noiseMaterial_19);
		RenderTexture_t55 * L_107 = V_1;
		NullCheck(L_106);
		Material_SetTexture_m292(L_106, _stringLiteral33, L_107, /*hidden argument*/NULL);
		RenderTexture_t55 * L_108 = ___source;
		RenderTexture_t55 * L_109 = ___destination;
		Material_t5 * L_110 = (__this->___noiseMaterial_19);
		Graphics_Blit_m275(NULL /*static, unused*/, L_108, L_109, L_110, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_111 = V_1;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_111, /*hidden argument*/NULL);
		goto IL_03b5;
	}

IL_03a1:
	{
		RenderTexture_t55 * L_112 = ___source;
		RenderTexture_t55 * L_113 = ___destination;
		Material_t5 * L_114 = (__this->___noiseMaterial_19);
		Texture2D_t13 * L_115 = (__this->___noiseTexture_17);
		IL2CPP_RUNTIME_CLASS_INIT(NoiseAndGrain_t63_il2cpp_TypeInfo_var);
		NoiseAndGrain_DrawNoiseQuadGrid_m137(NULL /*static, unused*/, L_112, L_113, L_114, L_115, 0, /*hidden argument*/NULL);
	}

IL_03b5:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,System.Int32)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern TypeInfo* NoiseAndGrain_t63_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void NoiseAndGrain_DrawNoiseQuadGrid_m137 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, Material_t5 * ___fxMaterial, Texture2D_t13 * ___noise, int32_t ___passNr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NoiseAndGrain_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	{
		RenderTexture_t55 * L_0 = ___dest;
		RenderTexture_set_active_m402(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Texture2D_t13 * L_1 = ___noise;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		V_0 = ((float)((float)(((float)L_2))*(float)(1.0f)));
		RenderTexture_t55 * L_3 = ___source;
		NullCheck(L_3);
		int32_t L_4 = RenderTexture_get_width_m272(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NoiseAndGrain_t63_il2cpp_TypeInfo_var);
		float L_5 = ((NoiseAndGrain_t63_StaticFields*)NoiseAndGrain_t63_il2cpp_TypeInfo_var->static_fields)->___TILE_AMOUNT_22;
		V_1 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_4))))/(float)L_5));
		Material_t5 * L_6 = ___fxMaterial;
		RenderTexture_t55 * L_7 = ___source;
		NullCheck(L_6);
		Material_SetTexture_m292(L_6, _stringLiteral69, L_7, /*hidden argument*/NULL);
		GL_PushMatrix_m403(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_LoadOrtho_m414(NULL /*static, unused*/, /*hidden argument*/NULL);
		RenderTexture_t55 * L_8 = ___source;
		NullCheck(L_8);
		int32_t L_9 = RenderTexture_get_width_m272(L_8, /*hidden argument*/NULL);
		RenderTexture_t55 * L_10 = ___source;
		NullCheck(L_10);
		int32_t L_11 = RenderTexture_get_height_m273(L_10, /*hidden argument*/NULL);
		V_2 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_9))))/(float)((float)((float)(1.0f)*(float)(((float)L_11))))));
		float L_12 = V_1;
		V_3 = ((float)((float)(1.0f)/(float)L_12));
		float L_13 = V_3;
		float L_14 = V_2;
		V_4 = ((float)((float)L_13*(float)L_14));
		float L_15 = V_0;
		Texture2D_t13 * L_16 = ___noise;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		V_5 = ((float)((float)L_15/(float)((float)((float)(((float)L_17))*(float)(1.0f)))));
		Material_t5 * L_18 = ___fxMaterial;
		int32_t L_19 = ___passNr;
		NullCheck(L_18);
		Material_SetPass_m398(L_18, L_19, /*hidden argument*/NULL);
		GL_Begin_m415(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		V_6 = (0.0f);
		goto IL_01bf;
	}

IL_0093:
	{
		V_7 = (0.0f);
		goto IL_01ad;
	}

IL_009f:
	{
		float L_20 = Random_Range_m425(NULL /*static, unused*/, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_8 = L_20;
		float L_21 = Random_Range_m425(NULL /*static, unused*/, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_9 = L_21;
		float L_22 = V_8;
		float L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_24 = floorf(((float)((float)L_22*(float)L_23)));
		float L_25 = V_0;
		V_8 = ((float)((float)L_24/(float)L_25));
		float L_26 = V_9;
		float L_27 = V_0;
		float L_28 = floorf(((float)((float)L_26*(float)L_27)));
		float L_29 = V_0;
		V_9 = ((float)((float)L_28/(float)L_29));
		float L_30 = V_0;
		V_10 = ((float)((float)(1.0f)/(float)L_30));
		float L_31 = V_8;
		float L_32 = V_9;
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 0, L_31, L_32, /*hidden argument*/NULL);
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 1, (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_33 = V_6;
		float L_34 = V_7;
		GL_Vertex3_m417(NULL /*static, unused*/, L_33, L_34, (0.1f), /*hidden argument*/NULL);
		float L_35 = V_8;
		float L_36 = V_5;
		float L_37 = V_10;
		float L_38 = V_9;
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 0, ((float)((float)L_35+(float)((float)((float)L_36*(float)L_37)))), L_38, /*hidden argument*/NULL);
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 1, (1.0f), (0.0f), /*hidden argument*/NULL);
		float L_39 = V_6;
		float L_40 = V_3;
		float L_41 = V_7;
		GL_Vertex3_m417(NULL /*static, unused*/, ((float)((float)L_39+(float)L_40)), L_41, (0.1f), /*hidden argument*/NULL);
		float L_42 = V_8;
		float L_43 = V_5;
		float L_44 = V_10;
		float L_45 = V_9;
		float L_46 = V_5;
		float L_47 = V_10;
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 0, ((float)((float)L_42+(float)((float)((float)L_43*(float)L_44)))), ((float)((float)L_45+(float)((float)((float)L_46*(float)L_47)))), /*hidden argument*/NULL);
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 1, (1.0f), (1.0f), /*hidden argument*/NULL);
		float L_48 = V_6;
		float L_49 = V_3;
		float L_50 = V_7;
		float L_51 = V_4;
		GL_Vertex3_m417(NULL /*static, unused*/, ((float)((float)L_48+(float)L_49)), ((float)((float)L_50+(float)L_51)), (0.1f), /*hidden argument*/NULL);
		float L_52 = V_8;
		float L_53 = V_9;
		float L_54 = V_5;
		float L_55 = V_10;
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 0, L_52, ((float)((float)L_53+(float)((float)((float)L_54*(float)L_55)))), /*hidden argument*/NULL);
		GL_MultiTexCoord2_m416(NULL /*static, unused*/, 1, (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_56 = V_6;
		float L_57 = V_7;
		float L_58 = V_4;
		GL_Vertex3_m417(NULL /*static, unused*/, L_56, ((float)((float)L_57+(float)L_58)), (0.1f), /*hidden argument*/NULL);
		float L_59 = V_7;
		float L_60 = V_4;
		V_7 = ((float)((float)L_59+(float)L_60));
	}

IL_01ad:
	{
		float L_61 = V_7;
		if ((((float)L_61) < ((float)(1.0f))))
		{
			goto IL_009f;
		}
	}
	{
		float L_62 = V_6;
		float L_63 = V_3;
		V_6 = ((float)((float)L_62+(float)L_63));
	}

IL_01bf:
	{
		float L_64 = V_6;
		if ((((float)L_64) < ((float)(1.0f))))
		{
			goto IL_0093;
		}
	}
	{
		GL_End_m418(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_PopMatrix_m406(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.NoiseAndScratches
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_45.h"
// UnityStandardAssets.ImageEffects.NoiseAndScratches
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_45MethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void NoiseAndScratches__ctor_m138 (NoiseAndScratches_t64 * __this, const MethodInfo* method)
{
	{
		__this->___monochrome_2 = 1;
		__this->___grainIntensityMin_4 = (0.1f);
		__this->___grainIntensityMax_5 = (0.2f);
		__this->___grainSize_6 = (2.0f);
		__this->___scratchIntensityMin_7 = (0.05f);
		__this->___scratchIntensityMax_8 = (0.25f);
		__this->___scratchFPS_9 = (10.0f);
		__this->___scratchJitter_10 = (0.01f);
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::Start()
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral104;
extern "C" void NoiseAndScratches_Start_m139 (NoiseAndScratches_t64 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral104 = il2cpp_codegen_string_literal_from_index(104);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SystemInfo_get_supportsImageEffects_m302(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		Shader_t4 * L_1 = (__this->___shaderRGB_13);
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		Shader_t4 * L_3 = (__this->___shaderYUV_14);
		bool L_4 = Object_op_Equality_m295(NULL /*static, unused*/, L_3, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004a;
		}
	}

IL_0034:
	{
		Debug_Log_m426(NULL /*static, unused*/, _stringLiteral104, /*hidden argument*/NULL);
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_004a:
	{
		Shader_t4 * L_5 = (__this->___shaderRGB_13);
		NullCheck(L_5);
		bool L_6 = Shader_get_isSupported_m266(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0066;
		}
	}
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_0066:
	{
		Shader_t4 * L_7 = (__this->___shaderYUV_14);
		NullCheck(L_7);
		bool L_8 = Shader_get_isSupported_m266(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_007d;
		}
	}
	{
		__this->___rgbFallback_3 = 1;
	}

IL_007d:
	{
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::get_material()
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern TypeInfo* Material_t5_il2cpp_TypeInfo_var;
extern "C" Material_t5 * NoiseAndScratches_get_material_m140 (NoiseAndScratches_t64 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Material_t5 * G_B9_0 = {0};
	{
		Material_t5 * L_0 = (__this->___m_MaterialRGB_15);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t4 * L_2 = (__this->___shaderRGB_13);
		Material_t5 * L_3 = (Material_t5 *)il2cpp_codegen_object_new (Material_t5_il2cpp_TypeInfo_var);
		Material__ctor_m300(L_3, L_2, /*hidden argument*/NULL);
		__this->___m_MaterialRGB_15 = L_3;
		Material_t5 * L_4 = (__this->___m_MaterialRGB_15);
		NullCheck(L_4);
		Object_set_hideFlags_m301(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002f:
	{
		Material_t5 * L_5 = (__this->___m_MaterialYUV_16);
		bool L_6 = Object_op_Equality_m295(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0069;
		}
	}
	{
		bool L_7 = (__this->___rgbFallback_3);
		if (L_7)
		{
			goto IL_0069;
		}
	}
	{
		Shader_t4 * L_8 = (__this->___shaderYUV_14);
		Material_t5 * L_9 = (Material_t5 *)il2cpp_codegen_object_new (Material_t5_il2cpp_TypeInfo_var);
		Material__ctor_m300(L_9, L_8, /*hidden argument*/NULL);
		__this->___m_MaterialYUV_16 = L_9;
		Material_t5 * L_10 = (__this->___m_MaterialYUV_16);
		NullCheck(L_10);
		Object_set_hideFlags_m301(L_10, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_0069:
	{
		bool L_11 = (__this->___rgbFallback_3);
		if (L_11)
		{
			goto IL_008a;
		}
	}
	{
		bool L_12 = (__this->___monochrome_2);
		if (L_12)
		{
			goto IL_008a;
		}
	}
	{
		Material_t5 * L_13 = (__this->___m_MaterialYUV_16);
		G_B9_0 = L_13;
		goto IL_0090;
	}

IL_008a:
	{
		Material_t5 * L_14 = (__this->___m_MaterialRGB_15);
		G_B9_0 = L_14;
	}

IL_0090:
	{
		return G_B9_0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::OnDisable()
extern "C" void NoiseAndScratches_OnDisable_m141 (NoiseAndScratches_t64 * __this, const MethodInfo* method)
{
	{
		Material_t5 * L_0 = (__this->___m_MaterialRGB_15);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Material_t5 * L_2 = (__this->___m_MaterialRGB_15);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		Material_t5 * L_3 = (__this->___m_MaterialYUV_16);
		bool L_4 = Object_op_Implicit_m294(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		Material_t5 * L_5 = (__this->___m_MaterialYUV_16);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::SanitizeParameters()
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void NoiseAndScratches_SanitizeParameters_m142 (NoiseAndScratches_t64 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___grainIntensityMin_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m368(NULL /*static, unused*/, L_0, (0.0f), (5.0f), /*hidden argument*/NULL);
		__this->___grainIntensityMin_4 = L_1;
		float L_2 = (__this->___grainIntensityMax_5);
		float L_3 = Mathf_Clamp_m368(NULL /*static, unused*/, L_2, (0.0f), (5.0f), /*hidden argument*/NULL);
		__this->___grainIntensityMax_5 = L_3;
		float L_4 = (__this->___scratchIntensityMin_7);
		float L_5 = Mathf_Clamp_m368(NULL /*static, unused*/, L_4, (0.0f), (5.0f), /*hidden argument*/NULL);
		__this->___scratchIntensityMin_7 = L_5;
		float L_6 = (__this->___scratchIntensityMax_8);
		float L_7 = Mathf_Clamp_m368(NULL /*static, unused*/, L_6, (0.0f), (5.0f), /*hidden argument*/NULL);
		__this->___scratchIntensityMax_8 = L_7;
		float L_8 = (__this->___scratchFPS_9);
		float L_9 = Mathf_Clamp_m368(NULL /*static, unused*/, L_8, (1.0f), (30.0f), /*hidden argument*/NULL);
		__this->___scratchFPS_9 = L_9;
		float L_10 = (__this->___scratchJitter_10);
		float L_11 = Mathf_Clamp_m368(NULL /*static, unused*/, L_10, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___scratchJitter_10 = L_11;
		float L_12 = (__this->___grainSize_6);
		float L_13 = Mathf_Clamp_m368(NULL /*static, unused*/, L_12, (0.1f), (50.0f), /*hidden argument*/NULL);
		__this->___grainSize_6 = L_13;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityStandardAssets.ImageEffects.NoiseAndScratches
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_45MethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral105;
extern Il2CppCodeGenString* _stringLiteral106;
extern Il2CppCodeGenString* _stringLiteral107;
extern Il2CppCodeGenString* _stringLiteral108;
extern Il2CppCodeGenString* _stringLiteral10;
extern "C" void NoiseAndScratches_OnRenderImage_m143 (NoiseAndScratches_t64 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral105 = il2cpp_codegen_string_literal_from_index(105);
		_stringLiteral106 = il2cpp_codegen_string_literal_from_index(106);
		_stringLiteral107 = il2cpp_codegen_string_literal_from_index(107);
		_stringLiteral108 = il2cpp_codegen_string_literal_from_index(108);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Material_t5 * V_0 = {0};
	float V_1 = 0.0f;
	{
		NoiseAndScratches_SanitizeParameters_m142(__this, /*hidden argument*/NULL);
		float L_0 = (__this->___scratchTimeLeft_17);
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		float L_1 = Random_get_value_m427(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = (__this->___scratchFPS_9);
		__this->___scratchTimeLeft_17 = ((float)((float)((float)((float)L_1*(float)(2.0f)))/(float)L_2));
		float L_3 = Random_get_value_m427(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scratchX_18 = L_3;
		float L_4 = Random_get_value_m427(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scratchY_19 = L_4;
	}

IL_0044:
	{
		float L_5 = (__this->___scratchTimeLeft_17);
		float L_6 = Time_get_deltaTime_m383(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scratchTimeLeft_17 = ((float)((float)L_5-(float)L_6));
		Material_t5 * L_7 = NoiseAndScratches_get_material_m140(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		Material_t5 * L_8 = V_0;
		Texture_t40 * L_9 = (__this->___grainTexture_11);
		NullCheck(L_8);
		Material_SetTexture_m292(L_8, _stringLiteral105, L_9, /*hidden argument*/NULL);
		Material_t5 * L_10 = V_0;
		Texture_t40 * L_11 = (__this->___scratchTexture_12);
		NullCheck(L_10);
		Material_SetTexture_m292(L_10, _stringLiteral106, L_11, /*hidden argument*/NULL);
		float L_12 = (__this->___grainSize_6);
		V_1 = ((float)((float)(1.0f)/(float)L_12));
		Material_t5 * L_13 = V_0;
		float L_14 = Random_get_value_m427(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = Random_get_value_m427(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_16 = Screen_get_width_m428(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture_t40 * L_17 = (__this->___grainTexture_11);
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		float L_19 = V_1;
		int32_t L_20 = Screen_get_height_m429(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture_t40 * L_21 = (__this->___grainTexture_11);
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_21);
		float L_23 = V_1;
		Vector4_t100  L_24 = {0};
		Vector4__ctor_m284(&L_24, L_14, L_15, ((float)((float)((float)((float)(((float)L_16))/(float)(((float)L_18))))*(float)L_19)), ((float)((float)((float)((float)(((float)L_20))/(float)(((float)L_22))))*(float)L_23)), /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_m285(L_13, _stringLiteral107, L_24, /*hidden argument*/NULL);
		Material_t5 * L_25 = V_0;
		float L_26 = (__this->___scratchX_18);
		float L_27 = Random_get_value_m427(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_28 = (__this->___scratchJitter_10);
		float L_29 = (__this->___scratchY_19);
		float L_30 = Random_get_value_m427(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_31 = (__this->___scratchJitter_10);
		int32_t L_32 = Screen_get_width_m428(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture_t40 * L_33 = (__this->___scratchTexture_12);
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_33);
		int32_t L_35 = Screen_get_height_m429(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture_t40 * L_36 = (__this->___scratchTexture_12);
		NullCheck(L_36);
		int32_t L_37 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_36);
		Vector4_t100  L_38 = {0};
		Vector4__ctor_m284(&L_38, ((float)((float)L_26+(float)((float)((float)L_27*(float)L_28)))), ((float)((float)L_29+(float)((float)((float)L_30*(float)L_31)))), ((float)((float)(((float)L_32))/(float)(((float)L_34)))), ((float)((float)(((float)L_35))/(float)(((float)L_37)))), /*hidden argument*/NULL);
		NullCheck(L_25);
		Material_SetVector_m285(L_25, _stringLiteral108, L_38, /*hidden argument*/NULL);
		Material_t5 * L_39 = V_0;
		float L_40 = (__this->___grainIntensityMin_4);
		float L_41 = (__this->___grainIntensityMax_5);
		float L_42 = Random_Range_m425(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		float L_43 = (__this->___scratchIntensityMin_7);
		float L_44 = (__this->___scratchIntensityMax_8);
		float L_45 = Random_Range_m425(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		Vector4_t100  L_46 = {0};
		Vector4__ctor_m284(&L_46, L_42, L_45, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		Material_SetVector_m285(L_39, _stringLiteral10, L_46, /*hidden argument*/NULL);
		RenderTexture_t55 * L_47 = ___source;
		RenderTexture_t55 * L_48 = ___destination;
		Material_t5 * L_49 = V_0;
		Graphics_Blit_m270(NULL /*static, unused*/, L_47, L_48, L_49, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void PostEffectsBase__ctor_m144 (PostEffectsBase_t3 * __this, const MethodInfo* method)
{
	{
		__this->___supportHDRTextures_2 = 1;
		__this->___isSupported_4 = 1;
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t110_il2cpp_TypeInfo_var;
extern TypeInfo* Material_t5_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral109;
extern Il2CppCodeGenString* _stringLiteral110;
extern Il2CppCodeGenString* _stringLiteral111;
extern Il2CppCodeGenString* _stringLiteral112;
extern "C" Material_t5 * PostEffectsBase_CheckShaderAndCreateMaterial_m145 (PostEffectsBase_t3 * __this, Shader_t4 * ___s, Material_t5 * ___m2Create, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		StringU5BU5D_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		Material_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral109 = il2cpp_codegen_string_literal_from_index(109);
		_stringLiteral110 = il2cpp_codegen_string_literal_from_index(110);
		_stringLiteral111 = il2cpp_codegen_string_literal_from_index(111);
		_stringLiteral112 = il2cpp_codegen_string_literal_from_index(112);
		s_Il2CppMethodIntialized = true;
	}
	{
		Shader_t4 * L_0 = ___s;
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Object::ToString() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m430(NULL /*static, unused*/, _stringLiteral109, L_2, /*hidden argument*/NULL);
		Debug_Log_m426(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return (Material_t5 *)NULL;
	}

IL_0029:
	{
		Shader_t4 * L_4 = ___s;
		NullCheck(L_4);
		bool L_5 = Shader_get_isSupported_m266(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		Material_t5 * L_6 = ___m2Create;
		bool L_7 = Object_op_Implicit_m294(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		Material_t5 * L_8 = ___m2Create;
		NullCheck(L_8);
		Shader_t4 * L_9 = Material_get_shader_m304(L_8, /*hidden argument*/NULL);
		Shader_t4 * L_10 = ___s;
		bool L_11 = Object_op_Equality_m295(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		Material_t5 * L_12 = ___m2Create;
		return L_12;
	}

IL_0052:
	{
		Shader_t4 * L_13 = ___s;
		NullCheck(L_13);
		bool L_14 = Shader_get_isSupported_m266(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_009f;
		}
	}
	{
		PostEffectsBase_NotSupported_m156(__this, /*hidden argument*/NULL);
		StringU5BU5D_t110* L_15 = ((StringU5BU5D_t110*)SZArrayNew(StringU5BU5D_t110_il2cpp_TypeInfo_var, 5));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, _stringLiteral110);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 0, sizeof(String_t*))) = (String_t*)_stringLiteral110;
		StringU5BU5D_t110* L_16 = L_15;
		Shader_t4 * L_17 = ___s;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Object::ToString() */, L_17);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 1, sizeof(String_t*))) = (String_t*)L_18;
		StringU5BU5D_t110* L_19 = L_16;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, _stringLiteral111);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2, sizeof(String_t*))) = (String_t*)_stringLiteral111;
		StringU5BU5D_t110* L_20 = L_19;
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Object::ToString() */, __this);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_21);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 3, sizeof(String_t*))) = (String_t*)L_21;
		StringU5BU5D_t110* L_22 = L_20;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 4);
		ArrayElementTypeCheck (L_22, _stringLiteral112);
		*((String_t**)(String_t**)SZArrayLdElema(L_22, 4, sizeof(String_t*))) = (String_t*)_stringLiteral112;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m431(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		Debug_Log_m426(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		return (Material_t5 *)NULL;
	}

IL_009f:
	{
		Shader_t4 * L_24 = ___s;
		Material_t5 * L_25 = (Material_t5 *)il2cpp_codegen_object_new (Material_t5_il2cpp_TypeInfo_var);
		Material__ctor_m300(L_25, L_24, /*hidden argument*/NULL);
		___m2Create = L_25;
		Material_t5 * L_26 = ___m2Create;
		NullCheck(L_26);
		Object_set_hideFlags_m301(L_26, ((int32_t)52), /*hidden argument*/NULL);
		Material_t5 * L_27 = ___m2Create;
		bool L_28 = Object_op_Implicit_m294(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00bc;
		}
	}
	{
		Material_t5 * L_29 = ___m2Create;
		return L_29;
	}

IL_00bc:
	{
		return (Material_t5 *)NULL;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Material_t5_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral109;
extern "C" Material_t5 * PostEffectsBase_CreateMaterial_m146 (PostEffectsBase_t3 * __this, Shader_t4 * ___s, Material_t5 * ___m2Create, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Material_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral109 = il2cpp_codegen_string_literal_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	{
		Shader_t4 * L_0 = ___s;
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Object::ToString() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m430(NULL /*static, unused*/, _stringLiteral109, L_2, /*hidden argument*/NULL);
		Debug_Log_m426(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return (Material_t5 *)NULL;
	}

IL_0022:
	{
		Material_t5 * L_4 = ___m2Create;
		bool L_5 = Object_op_Implicit_m294(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		Material_t5 * L_6 = ___m2Create;
		NullCheck(L_6);
		Shader_t4 * L_7 = Material_get_shader_m304(L_6, /*hidden argument*/NULL);
		Shader_t4 * L_8 = ___s;
		bool L_9 = Object_op_Equality_m295(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		Shader_t4 * L_10 = ___s;
		NullCheck(L_10);
		bool L_11 = Shader_get_isSupported_m266(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		Material_t5 * L_12 = ___m2Create;
		return L_12;
	}

IL_004b:
	{
		Shader_t4 * L_13 = ___s;
		NullCheck(L_13);
		bool L_14 = Shader_get_isSupported_m266(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0058;
		}
	}
	{
		return (Material_t5 *)NULL;
	}

IL_0058:
	{
		Shader_t4 * L_15 = ___s;
		Material_t5 * L_16 = (Material_t5 *)il2cpp_codegen_object_new (Material_t5_il2cpp_TypeInfo_var);
		Material__ctor_m300(L_16, L_15, /*hidden argument*/NULL);
		___m2Create = L_16;
		Material_t5 * L_17 = ___m2Create;
		NullCheck(L_17);
		Object_set_hideFlags_m301(L_17, ((int32_t)52), /*hidden argument*/NULL);
		Material_t5 * L_18 = ___m2Create;
		bool L_19 = Object_op_Implicit_m294(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		Material_t5 * L_20 = ___m2Create;
		return L_20;
	}

IL_0075:
	{
		return (Material_t5 *)NULL;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
extern "C" void PostEffectsBase_OnEnable_m147 (PostEffectsBase_t3 * __this, const MethodInfo* method)
{
	{
		__this->___isSupported_4 = 1;
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
extern "C" bool PostEffectsBase_CheckSupport_m148 (PostEffectsBase_t3 * __this, const MethodInfo* method)
{
	{
		bool L_0 = PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral113;
extern Il2CppCodeGenString* _stringLiteral114;
extern "C" bool PostEffectsBase_CheckResources_m149 (PostEffectsBase_t3 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral113 = il2cpp_codegen_string_literal_from_index(113);
		_stringLiteral114 = il2cpp_codegen_string_literal_from_index(114);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Object::ToString() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m349(NULL /*static, unused*/, _stringLiteral113, L_0, _stringLiteral114, /*hidden argument*/NULL);
		Debug_LogWarning_m378(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___isSupported_4);
		return L_2;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
extern "C" void PostEffectsBase_Start_m150 (PostEffectsBase_t3 * __this, const MethodInfo* method)
{
	{
		VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern "C" bool PostEffectsBase_CheckSupport_m151 (PostEffectsBase_t3 * __this, bool ___needDepth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	PostEffectsBase_t3 * G_B2_0 = {0};
	PostEffectsBase_t3 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	PostEffectsBase_t3 * G_B3_1 = {0};
	{
		__this->___isSupported_4 = 1;
		bool L_0 = SystemInfo_SupportsRenderTextureFormat_m321(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		__this->___supportHDRTextures_2 = L_0;
		int32_t L_1 = SystemInfo_get_graphicsShaderLevel_m432(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)50))))
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		bool L_2 = SystemInfo_get_supportsComputeShaders_m433(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		G_B3_1->___supportDX11_3 = G_B3_0;
		bool L_3 = SystemInfo_get_supportsImageEffects_m302(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		bool L_4 = SystemInfo_get_supportsRenderTextures_m423(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0049;
		}
	}

IL_0041:
	{
		PostEffectsBase_NotSupported_m156(__this, /*hidden argument*/NULL);
		return 0;
	}

IL_0049:
	{
		bool L_5 = ___needDepth;
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		bool L_6 = SystemInfo_SupportsRenderTextureFormat_m321(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0062;
		}
	}
	{
		PostEffectsBase_NotSupported_m156(__this, /*hidden argument*/NULL);
		return 0;
	}

IL_0062:
	{
		bool L_7 = ___needDepth;
		if (!L_7)
		{
			goto IL_007b;
		}
	}
	{
		Camera_t32 * L_8 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		Camera_t32 * L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = Camera_get_depthTextureMode_m319(L_9, /*hidden argument*/NULL);
		NullCheck(L_9);
		Camera_set_depthTextureMode_m320(L_9, ((int32_t)((int32_t)L_10|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_007b:
	{
		return 1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C" bool PostEffectsBase_CheckSupport_m152 (PostEffectsBase_t3 * __this, bool ___needDepth, bool ___needHdr, const MethodInfo* method)
{
	{
		bool L_0 = ___needDepth;
		bool L_1 = PostEffectsBase_CheckSupport_m151(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		bool L_2 = ___needHdr;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = (__this->___supportHDRTextures_2);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		PostEffectsBase_NotSupported_m156(__this, /*hidden argument*/NULL);
		return 0;
	}

IL_0027:
	{
		return 1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
extern "C" bool PostEffectsBase_Dx11Support_m153 (PostEffectsBase_t3 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___supportDX11_3);
		return L_0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral115;
extern Il2CppCodeGenString* _stringLiteral116;
extern "C" void PostEffectsBase_ReportAutoDisable_m154 (PostEffectsBase_t3 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Object::ToString() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m349(NULL /*static, unused*/, _stringLiteral115, L_0, _stringLiteral116, /*hidden argument*/NULL);
		Debug_LogWarning_m378(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
extern TypeInfo* StringU5BU5D_t110_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral110;
extern Il2CppCodeGenString* _stringLiteral111;
extern Il2CppCodeGenString* _stringLiteral117;
extern "C" bool PostEffectsBase_CheckShader_m155 (PostEffectsBase_t3 * __this, Shader_t4 * ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral110 = il2cpp_codegen_string_literal_from_index(110);
		_stringLiteral111 = il2cpp_codegen_string_literal_from_index(111);
		_stringLiteral117 = il2cpp_codegen_string_literal_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t110* L_0 = ((StringU5BU5D_t110*)SZArrayNew(StringU5BU5D_t110_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral110);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral110;
		StringU5BU5D_t110* L_1 = L_0;
		Shader_t4 * L_2 = ___s;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Object::ToString() */, L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_3);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1, sizeof(String_t*))) = (String_t*)L_3;
		StringU5BU5D_t110* L_4 = L_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, _stringLiteral111);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2, sizeof(String_t*))) = (String_t*)_stringLiteral111;
		StringU5BU5D_t110* L_5 = L_4;
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Object::ToString() */, __this);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 3, sizeof(String_t*))) = (String_t*)L_6;
		StringU5BU5D_t110* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 4);
		ArrayElementTypeCheck (L_7, _stringLiteral117);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 4, sizeof(String_t*))) = (String_t*)_stringLiteral117;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m431(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Debug_Log_m426(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Shader_t4 * L_9 = ___s;
		NullCheck(L_9);
		bool L_10 = Shader_get_isSupported_m266(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		PostEffectsBase_NotSupported_m156(__this, /*hidden argument*/NULL);
		return 0;
	}

IL_004d:
	{
		return 0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
extern "C" void PostEffectsBase_NotSupported_m156 (PostEffectsBase_t3 * __this, const MethodInfo* method)
{
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		__this->___isSupported_4 = 0;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
extern "C" void PostEffectsBase_DrawBorder_m157 (PostEffectsBase_t3 * __this, RenderTexture_t55 * ___dest, Material_t5 * ___material, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		RenderTexture_t55 * L_0 = ___dest;
		RenderTexture_set_active_m402(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_4 = 1;
		GL_PushMatrix_m403(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_LoadOrtho_m414(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = 0;
		goto IL_028d;
	}

IL_001b:
	{
		Material_t5 * L_1 = ___material;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		Material_SetPass_m398(L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		V_6 = (1.0f);
		V_7 = (0.0f);
		goto IL_004c;
	}

IL_003e:
	{
		V_6 = (0.0f);
		V_7 = (1.0f);
	}

IL_004c:
	{
		V_0 = (0.0f);
		RenderTexture_t55 * L_4 = ___dest;
		NullCheck(L_4);
		int32_t L_5 = RenderTexture_get_width_m272(L_4, /*hidden argument*/NULL);
		V_1 = ((float)((float)(0.0f)+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_5))*(float)(1.0f)))))));
		V_2 = (0.0f);
		V_3 = (1.0f);
		GL_Begin_m415(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		float L_6 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_6, /*hidden argument*/NULL);
		float L_7 = V_0;
		float L_8 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_7, L_8, (0.1f), /*hidden argument*/NULL);
		float L_9 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_9, /*hidden argument*/NULL);
		float L_10 = V_1;
		float L_11 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_10, L_11, (0.1f), /*hidden argument*/NULL);
		float L_12 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_12, /*hidden argument*/NULL);
		float L_13 = V_1;
		float L_14 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_13, L_14, (0.1f), /*hidden argument*/NULL);
		float L_15 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_15, /*hidden argument*/NULL);
		float L_16 = V_0;
		float L_17 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_16, L_17, (0.1f), /*hidden argument*/NULL);
		RenderTexture_t55 * L_18 = ___dest;
		NullCheck(L_18);
		int32_t L_19 = RenderTexture_get_width_m272(L_18, /*hidden argument*/NULL);
		V_0 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_19))*(float)(1.0f)))))));
		V_1 = (1.0f);
		V_2 = (0.0f);
		V_3 = (1.0f);
		float L_20 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_20, /*hidden argument*/NULL);
		float L_21 = V_0;
		float L_22 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_21, L_22, (0.1f), /*hidden argument*/NULL);
		float L_23 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_23, /*hidden argument*/NULL);
		float L_24 = V_1;
		float L_25 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_24, L_25, (0.1f), /*hidden argument*/NULL);
		float L_26 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_26, /*hidden argument*/NULL);
		float L_27 = V_1;
		float L_28 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_27, L_28, (0.1f), /*hidden argument*/NULL);
		float L_29 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_29, /*hidden argument*/NULL);
		float L_30 = V_0;
		float L_31 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_30, L_31, (0.1f), /*hidden argument*/NULL);
		V_0 = (0.0f);
		V_1 = (1.0f);
		V_2 = (0.0f);
		RenderTexture_t55 * L_32 = ___dest;
		NullCheck(L_32);
		int32_t L_33 = RenderTexture_get_height_m273(L_32, /*hidden argument*/NULL);
		V_3 = ((float)((float)(0.0f)+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_33))*(float)(1.0f)))))));
		float L_34 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_34, /*hidden argument*/NULL);
		float L_35 = V_0;
		float L_36 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_35, L_36, (0.1f), /*hidden argument*/NULL);
		float L_37 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_37, /*hidden argument*/NULL);
		float L_38 = V_1;
		float L_39 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_38, L_39, (0.1f), /*hidden argument*/NULL);
		float L_40 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_40, /*hidden argument*/NULL);
		float L_41 = V_1;
		float L_42 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_41, L_42, (0.1f), /*hidden argument*/NULL);
		float L_43 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_43, /*hidden argument*/NULL);
		float L_44 = V_0;
		float L_45 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_44, L_45, (0.1f), /*hidden argument*/NULL);
		V_0 = (0.0f);
		V_1 = (1.0f);
		RenderTexture_t55 * L_46 = ___dest;
		NullCheck(L_46);
		int32_t L_47 = RenderTexture_get_height_m273(L_46, /*hidden argument*/NULL);
		V_2 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_47))*(float)(1.0f)))))));
		V_3 = (1.0f);
		float L_48 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_48, /*hidden argument*/NULL);
		float L_49 = V_0;
		float L_50 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_49, L_50, (0.1f), /*hidden argument*/NULL);
		float L_51 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_51, /*hidden argument*/NULL);
		float L_52 = V_1;
		float L_53 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_52, L_53, (0.1f), /*hidden argument*/NULL);
		float L_54 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_54, /*hidden argument*/NULL);
		float L_55 = V_1;
		float L_56 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_55, L_56, (0.1f), /*hidden argument*/NULL);
		float L_57 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_57, /*hidden argument*/NULL);
		float L_58 = V_0;
		float L_59 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_58, L_59, (0.1f), /*hidden argument*/NULL);
		GL_End_m418(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_60 = V_5;
		V_5 = ((int32_t)((int32_t)L_60+(int32_t)1));
	}

IL_028d:
	{
		int32_t L_61 = V_5;
		Material_t5 * L_62 = ___material;
		NullCheck(L_62);
		int32_t L_63 = Material_get_passCount_m435(L_62, /*hidden argument*/NULL);
		if ((((int32_t)L_61) < ((int32_t)L_63)))
		{
			goto IL_001b;
		}
	}
	{
		GL_PopMatrix_m406(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.PostEffectsHelper
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_46.h"
// UnityStandardAssets.ImageEffects.PostEffectsHelper
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_46MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void PostEffectsHelper__ctor_m158 (PostEffectsHelper_t65 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral118;
extern "C" void PostEffectsHelper_OnRenderImage_m159 (PostEffectsHelper_t65 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m426(NULL /*static, unused*/, _stringLiteral118, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m160 (Object_t * __this /* static, unused */, float ___dist, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, Material_t5 * ___material, Camera_t32 * ___cameraForProjectionMatrix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		RenderTexture_t55 * L_0 = ___dest;
		RenderTexture_set_active_m402(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Material_t5 * L_1 = ___material;
		RenderTexture_t55 * L_2 = ___source;
		NullCheck(L_1);
		Material_SetTexture_m292(L_1, _stringLiteral69, L_2, /*hidden argument*/NULL);
		V_0 = 1;
		GL_PushMatrix_m403(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_LoadIdentity_m404(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t32 * L_3 = ___cameraForProjectionMatrix;
		NullCheck(L_3);
		Matrix4x4_t31  L_4 = Camera_get_projectionMatrix_m314(L_3, /*hidden argument*/NULL);
		GL_LoadProjectionMatrix_m436(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Camera_t32 * L_5 = ___cameraForProjectionMatrix;
		NullCheck(L_5);
		float L_6 = Camera_get_fieldOfView_m339(L_5, /*hidden argument*/NULL);
		V_1 = ((float)((float)((float)((float)L_6*(float)(0.5f)))*(float)(0.0174532924f)));
		float L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_8 = cosf(L_7);
		float L_9 = V_1;
		float L_10 = sinf(L_9);
		V_2 = ((float)((float)L_8/(float)L_10));
		Camera_t32 * L_11 = ___cameraForProjectionMatrix;
		NullCheck(L_11);
		float L_12 = Camera_get_aspect_m407(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13 = V_3;
		float L_14 = V_2;
		V_4 = ((float)((float)L_13/(float)((-L_14))));
		float L_15 = V_3;
		float L_16 = V_2;
		V_5 = ((float)((float)L_15/(float)L_16));
		float L_17 = V_2;
		V_6 = ((float)((float)(1.0f)/(float)((-L_17))));
		float L_18 = V_2;
		V_7 = ((float)((float)(1.0f)/(float)L_18));
		V_8 = (1.0f);
		float L_19 = V_4;
		float L_20 = ___dist;
		float L_21 = V_8;
		V_4 = ((float)((float)L_19*(float)((float)((float)L_20*(float)L_21))));
		float L_22 = V_5;
		float L_23 = ___dist;
		float L_24 = V_8;
		V_5 = ((float)((float)L_22*(float)((float)((float)L_23*(float)L_24))));
		float L_25 = V_6;
		float L_26 = ___dist;
		float L_27 = V_8;
		V_6 = ((float)((float)L_25*(float)((float)((float)L_26*(float)L_27))));
		float L_28 = V_7;
		float L_29 = ___dist;
		float L_30 = V_8;
		V_7 = ((float)((float)L_28*(float)((float)((float)L_29*(float)L_30))));
		float L_31 = ___dist;
		V_9 = ((-L_31));
		V_10 = 0;
		goto IL_0146;
	}

IL_00a9:
	{
		Material_t5 * L_32 = ___material;
		int32_t L_33 = V_10;
		NullCheck(L_32);
		Material_SetPass_m398(L_32, L_33, /*hidden argument*/NULL);
		GL_Begin_m415(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		bool L_34 = V_0;
		if (!L_34)
		{
			goto IL_00d1;
		}
	}
	{
		V_11 = (1.0f);
		V_12 = (0.0f);
		goto IL_00df;
	}

IL_00d1:
	{
		V_11 = (0.0f);
		V_12 = (1.0f);
	}

IL_00df:
	{
		float L_35 = V_11;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_35, /*hidden argument*/NULL);
		float L_36 = V_4;
		float L_37 = V_6;
		float L_38 = V_9;
		GL_Vertex3_m417(NULL /*static, unused*/, L_36, L_37, L_38, /*hidden argument*/NULL);
		float L_39 = V_11;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_39, /*hidden argument*/NULL);
		float L_40 = V_5;
		float L_41 = V_6;
		float L_42 = V_9;
		GL_Vertex3_m417(NULL /*static, unused*/, L_40, L_41, L_42, /*hidden argument*/NULL);
		float L_43 = V_12;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_43, /*hidden argument*/NULL);
		float L_44 = V_5;
		float L_45 = V_7;
		float L_46 = V_9;
		GL_Vertex3_m417(NULL /*static, unused*/, L_44, L_45, L_46, /*hidden argument*/NULL);
		float L_47 = V_12;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_47, /*hidden argument*/NULL);
		float L_48 = V_4;
		float L_49 = V_7;
		float L_50 = V_9;
		GL_Vertex3_m417(NULL /*static, unused*/, L_48, L_49, L_50, /*hidden argument*/NULL);
		GL_End_m418(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_51 = V_10;
		V_10 = ((int32_t)((int32_t)L_51+(int32_t)1));
	}

IL_0146:
	{
		int32_t L_52 = V_10;
		Material_t5 * L_53 = ___material;
		NullCheck(L_53);
		int32_t L_54 = Material_get_passCount_m435(L_53, /*hidden argument*/NULL);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_00a9;
		}
	}
	{
		GL_PopMatrix_m406(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void PostEffectsHelper_DrawBorder_m161 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___dest, Material_t5 * ___material, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		RenderTexture_t55 * L_0 = ___dest;
		RenderTexture_set_active_m402(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_4 = 1;
		GL_PushMatrix_m403(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_LoadOrtho_m414(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = 0;
		goto IL_028d;
	}

IL_001b:
	{
		Material_t5 * L_1 = ___material;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		Material_SetPass_m398(L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		V_6 = (1.0f);
		V_7 = (0.0f);
		goto IL_004c;
	}

IL_003e:
	{
		V_6 = (0.0f);
		V_7 = (1.0f);
	}

IL_004c:
	{
		V_0 = (0.0f);
		RenderTexture_t55 * L_4 = ___dest;
		NullCheck(L_4);
		int32_t L_5 = RenderTexture_get_width_m272(L_4, /*hidden argument*/NULL);
		V_1 = ((float)((float)(0.0f)+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_5))*(float)(1.0f)))))));
		V_2 = (0.0f);
		V_3 = (1.0f);
		GL_Begin_m415(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		float L_6 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_6, /*hidden argument*/NULL);
		float L_7 = V_0;
		float L_8 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_7, L_8, (0.1f), /*hidden argument*/NULL);
		float L_9 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_9, /*hidden argument*/NULL);
		float L_10 = V_1;
		float L_11 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_10, L_11, (0.1f), /*hidden argument*/NULL);
		float L_12 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_12, /*hidden argument*/NULL);
		float L_13 = V_1;
		float L_14 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_13, L_14, (0.1f), /*hidden argument*/NULL);
		float L_15 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_15, /*hidden argument*/NULL);
		float L_16 = V_0;
		float L_17 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_16, L_17, (0.1f), /*hidden argument*/NULL);
		RenderTexture_t55 * L_18 = ___dest;
		NullCheck(L_18);
		int32_t L_19 = RenderTexture_get_width_m272(L_18, /*hidden argument*/NULL);
		V_0 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_19))*(float)(1.0f)))))));
		V_1 = (1.0f);
		V_2 = (0.0f);
		V_3 = (1.0f);
		float L_20 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_20, /*hidden argument*/NULL);
		float L_21 = V_0;
		float L_22 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_21, L_22, (0.1f), /*hidden argument*/NULL);
		float L_23 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_23, /*hidden argument*/NULL);
		float L_24 = V_1;
		float L_25 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_24, L_25, (0.1f), /*hidden argument*/NULL);
		float L_26 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_26, /*hidden argument*/NULL);
		float L_27 = V_1;
		float L_28 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_27, L_28, (0.1f), /*hidden argument*/NULL);
		float L_29 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_29, /*hidden argument*/NULL);
		float L_30 = V_0;
		float L_31 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_30, L_31, (0.1f), /*hidden argument*/NULL);
		V_0 = (0.0f);
		V_1 = (1.0f);
		V_2 = (0.0f);
		RenderTexture_t55 * L_32 = ___dest;
		NullCheck(L_32);
		int32_t L_33 = RenderTexture_get_height_m273(L_32, /*hidden argument*/NULL);
		V_3 = ((float)((float)(0.0f)+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_33))*(float)(1.0f)))))));
		float L_34 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_34, /*hidden argument*/NULL);
		float L_35 = V_0;
		float L_36 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_35, L_36, (0.1f), /*hidden argument*/NULL);
		float L_37 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_37, /*hidden argument*/NULL);
		float L_38 = V_1;
		float L_39 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_38, L_39, (0.1f), /*hidden argument*/NULL);
		float L_40 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_40, /*hidden argument*/NULL);
		float L_41 = V_1;
		float L_42 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_41, L_42, (0.1f), /*hidden argument*/NULL);
		float L_43 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_43, /*hidden argument*/NULL);
		float L_44 = V_0;
		float L_45 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_44, L_45, (0.1f), /*hidden argument*/NULL);
		V_0 = (0.0f);
		V_1 = (1.0f);
		RenderTexture_t55 * L_46 = ___dest;
		NullCheck(L_46);
		int32_t L_47 = RenderTexture_get_height_m273(L_46, /*hidden argument*/NULL);
		V_2 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_47))*(float)(1.0f)))))));
		V_3 = (1.0f);
		float L_48 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_48, /*hidden argument*/NULL);
		float L_49 = V_0;
		float L_50 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_49, L_50, (0.1f), /*hidden argument*/NULL);
		float L_51 = V_6;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_51, /*hidden argument*/NULL);
		float L_52 = V_1;
		float L_53 = V_2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_52, L_53, (0.1f), /*hidden argument*/NULL);
		float L_54 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_54, /*hidden argument*/NULL);
		float L_55 = V_1;
		float L_56 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_55, L_56, (0.1f), /*hidden argument*/NULL);
		float L_57 = V_7;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_57, /*hidden argument*/NULL);
		float L_58 = V_0;
		float L_59 = V_3;
		GL_Vertex3_m417(NULL /*static, unused*/, L_58, L_59, (0.1f), /*hidden argument*/NULL);
		GL_End_m418(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_60 = V_5;
		V_5 = ((int32_t)((int32_t)L_60+(int32_t)1));
	}

IL_028d:
	{
		int32_t L_61 = V_5;
		Material_t5 * L_62 = ___material;
		NullCheck(L_62);
		int32_t L_63 = Material_get_passCount_m435(L_62, /*hidden argument*/NULL);
		if ((((int32_t)L_61) < ((int32_t)L_63)))
		{
			goto IL_001b;
		}
	}
	{
		GL_PopMatrix_m406(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" void PostEffectsHelper_DrawLowLevelQuad_m162 (Object_t * __this /* static, unused */, float ___x1, float ___x2, float ___y1, float ___y2, RenderTexture_t55 * ___source, RenderTexture_t55 * ___dest, Material_t5 * ___material, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		RenderTexture_t55 * L_0 = ___dest;
		RenderTexture_set_active_m402(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Material_t5 * L_1 = ___material;
		RenderTexture_t55 * L_2 = ___source;
		NullCheck(L_1);
		Material_SetTexture_m292(L_1, _stringLiteral69, L_2, /*hidden argument*/NULL);
		V_0 = 1;
		GL_PushMatrix_m403(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_LoadOrtho_m414(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_00bf;
	}

IL_0028:
	{
		Material_t5 * L_3 = ___material;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Material_SetPass_m398(L_3, L_4, /*hidden argument*/NULL);
		GL_Begin_m415(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		V_2 = (1.0f);
		V_3 = (0.0f);
		goto IL_005a;
	}

IL_004e:
	{
		V_2 = (0.0f);
		V_3 = (1.0f);
	}

IL_005a:
	{
		float L_6 = V_2;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_6, /*hidden argument*/NULL);
		float L_7 = ___x1;
		float L_8 = ___y1;
		GL_Vertex3_m417(NULL /*static, unused*/, L_7, L_8, (0.1f), /*hidden argument*/NULL);
		float L_9 = V_2;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_9, /*hidden argument*/NULL);
		float L_10 = ___x2;
		float L_11 = ___y1;
		GL_Vertex3_m417(NULL /*static, unused*/, L_10, L_11, (0.1f), /*hidden argument*/NULL);
		float L_12 = V_3;
		GL_TexCoord2_m434(NULL /*static, unused*/, (1.0f), L_12, /*hidden argument*/NULL);
		float L_13 = ___x2;
		float L_14 = ___y2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_13, L_14, (0.1f), /*hidden argument*/NULL);
		float L_15 = V_3;
		GL_TexCoord2_m434(NULL /*static, unused*/, (0.0f), L_15, /*hidden argument*/NULL);
		float L_16 = ___x1;
		float L_17 = ___y2;
		GL_Vertex3_m417(NULL /*static, unused*/, L_16, L_17, (0.1f), /*hidden argument*/NULL);
		GL_End_m418(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_00bf:
	{
		int32_t L_19 = V_1;
		Material_t5 * L_20 = ___material;
		NullCheck(L_20);
		int32_t L_21 = Material_get_passCount_m435(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0028;
		}
	}
	{
		GL_PopMatrix_m406(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.Quads
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_47.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.Quads::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Quads__ctor_m163 (Quads_t66 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Quads::.cctor()
extern "C" void Quads__cctor_m164 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Quads::HasMeshes()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* Quads_t66_il2cpp_TypeInfo_var;
extern "C" bool Quads_HasMeshes_m165 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quads_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	Mesh_t98 * V_0 = {0};
	MeshU5BU5D_t67* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_0 = ((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_1 = ((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_002f;
	}

IL_0019:
	{
		MeshU5BU5D_t67* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Mesh_t98 **)(Mesh_t98 **)SZArrayLdElema(L_2, L_4, sizeof(Mesh_t98 *)));
		Mesh_t98 * L_5 = V_0;
		bool L_6 = Object_op_Equality_m295(NULL /*static, unused*/, (Object_t99 *)NULL, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_8 = V_2;
		MeshU5BU5D_t67* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0019;
		}
	}
	{
		return 1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Quads::Cleanup()
extern TypeInfo* Quads_t66_il2cpp_TypeInfo_var;
extern "C" void Quads_Cleanup_m166 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quads_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_0 = ((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_1 = ((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		bool L_4 = Object_op_Inequality_m268(NULL /*static, unused*/, (Object_t99 *)NULL, (*(Mesh_t98 **)(Mesh_t98 **)SZArrayLdElema(L_1, L_3, sizeof(Mesh_t98 *))), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_5 = ((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_DestroyImmediate_m297(NULL /*static, unused*/, (*(Mesh_t98 **)(Mesh_t98 **)SZArrayLdElema(L_5, L_7, sizeof(Mesh_t98 *))), /*hidden argument*/NULL);
		MeshU5BU5D_t67* L_8 = ((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, NULL);
		*((Mesh_t98 **)(Mesh_t98 **)SZArrayLdElema(L_8, L_9, sizeof(Mesh_t98 *))) = (Mesh_t98 *)NULL;
	}

IL_0038:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_12 = ((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0 = (MeshU5BU5D_t67*)NULL;
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::GetMeshes(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityStandardAssets.ImageEffects.Quads
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_47MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Quads_t66_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern TypeInfo* MeshU5BU5D_t67_il2cpp_TypeInfo_var;
extern "C" MeshU5BU5D_t67* Quads_GetMeshes_m167 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quads_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		MeshU5BU5D_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		bool L_0 = Quads_HasMeshes_m165(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___currentQuads_1;
		int32_t L_2 = ___totalWidth;
		int32_t L_3 = ___totalHeight;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)((int32_t)L_2*(int32_t)L_3))))))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_4 = ((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		return L_4;
	}

IL_001d:
	{
		V_0 = ((int32_t)10833);
		int32_t L_5 = ___totalWidth;
		int32_t L_6 = ___totalHeight;
		V_1 = ((int32_t)((int32_t)L_5*(int32_t)L_6));
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___currentQuads_1 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_CeilToInt_m437(NULL /*static, unused*/, ((float)((float)((float)((float)(1.0f)*(float)(((float)L_8))))/(float)((float)((float)(1.0f)*(float)(((float)L_9)))))), /*hidden argument*/NULL);
		V_2 = L_10;
		int32_t L_11 = V_2;
		((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0 = ((MeshU5BU5D_t67*)SZArrayNew(MeshU5BU5D_t67_il2cpp_TypeInfo_var, L_11));
		V_3 = 0;
		V_4 = 0;
		V_3 = 0;
		goto IL_0089;
	}

IL_005b:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_15 = Mathf_Clamp_m438(NULL /*static, unused*/, ((int32_t)((int32_t)L_12-(int32_t)L_13)), 0, L_14, /*hidden argument*/NULL);
		int32_t L_16 = Mathf_FloorToInt_m377(NULL /*static, unused*/, (((float)L_15)), /*hidden argument*/NULL);
		V_5 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_17 = ((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		int32_t L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = V_3;
		int32_t L_21 = ___totalWidth;
		int32_t L_22 = ___totalHeight;
		Mesh_t98 * L_23 = Quads_GetMesh_m168(NULL /*static, unused*/, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		ArrayElementTypeCheck (L_17, L_23);
		*((Mesh_t98 **)(Mesh_t98 **)SZArrayLdElema(L_17, L_18, sizeof(Mesh_t98 *))) = (Mesh_t98 *)L_23;
		int32_t L_24 = V_4;
		V_4 = ((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		V_3 = ((int32_t)((int32_t)L_25+(int32_t)L_26));
	}

IL_0089:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t66_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_29 = ((Quads_t66_StaticFields*)Quads_t66_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		return L_29;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* Mesh_t98_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3U5BU5D_t111_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2U5BU5D_t103_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" Mesh_t98 * Quads_GetMesh_m168 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mesh_t98_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Vector3U5BU5D_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector2U5BU5D_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Mesh_t98 * V_0 = {0};
	Vector3U5BU5D_t111* V_1 = {0};
	Vector2U5BU5D_t103* V_2 = {0};
	Vector2U5BU5D_t103* V_3 = {0};
	Int32U5BU5D_t109* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t28  V_11 = {0};
	{
		Mesh_t98 * L_0 = (Mesh_t98 *)il2cpp_codegen_object_new (Mesh_t98_il2cpp_TypeInfo_var);
		Mesh__ctor_m439(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Mesh_t98 * L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_m301(L_1, ((int32_t)52), /*hidden argument*/NULL);
		int32_t L_2 = ___triCount;
		V_1 = ((Vector3U5BU5D_t111*)SZArrayNew(Vector3U5BU5D_t111_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)4))));
		int32_t L_3 = ___triCount;
		V_2 = ((Vector2U5BU5D_t103*)SZArrayNew(Vector2U5BU5D_t103_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_3*(int32_t)4))));
		int32_t L_4 = ___triCount;
		V_3 = ((Vector2U5BU5D_t103*)SZArrayNew(Vector2U5BU5D_t103_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_4*(int32_t)4))));
		int32_t L_5 = ___triCount;
		V_4 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_5*(int32_t)6))));
		V_5 = 0;
		goto IL_01ed;
	}

IL_003b:
	{
		int32_t L_6 = V_5;
		V_6 = ((int32_t)((int32_t)L_6*(int32_t)4));
		int32_t L_7 = V_5;
		V_7 = ((int32_t)((int32_t)L_7*(int32_t)6));
		int32_t L_8 = ___triOffset;
		int32_t L_9 = V_5;
		V_8 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		int32_t L_10 = V_8;
		int32_t L_11 = ___totalWidth;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_12 = floorf((((float)((int32_t)((int32_t)L_10%(int32_t)L_11)))));
		int32_t L_13 = ___totalWidth;
		V_9 = ((float)((float)L_12/(float)(((float)L_13))));
		int32_t L_14 = V_8;
		int32_t L_15 = ___totalWidth;
		float L_16 = floorf((((float)((int32_t)((int32_t)L_14/(int32_t)L_15)))));
		int32_t L_17 = ___totalHeight;
		V_10 = ((float)((float)L_16/(float)(((float)L_17))));
		float L_18 = V_9;
		float L_19 = V_10;
		Vector3__ctor_m396((&V_11), ((float)((float)((float)((float)L_18*(float)(2.0f)))-(float)(1.0f))), ((float)((float)((float)((float)L_19*(float)(2.0f)))-(float)(1.0f))), (1.0f), /*hidden argument*/NULL);
		Vector3U5BU5D_t111* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		Vector3_t28  L_22 = V_11;
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_20, L_21, sizeof(Vector3_t28 ))) = L_22;
		Vector3U5BU5D_t111* L_23 = V_1;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)((int32_t)L_24+(int32_t)1)));
		Vector3_t28  L_25 = V_11;
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_23, ((int32_t)((int32_t)L_24+(int32_t)1)), sizeof(Vector3_t28 ))) = L_25;
		Vector3U5BU5D_t111* L_26 = V_1;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)((int32_t)L_27+(int32_t)2)));
		Vector3_t28  L_28 = V_11;
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_26, ((int32_t)((int32_t)L_27+(int32_t)2)), sizeof(Vector3_t28 ))) = L_28;
		Vector3U5BU5D_t111* L_29 = V_1;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)((int32_t)L_30+(int32_t)3)));
		Vector3_t28  L_31 = V_11;
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_29, ((int32_t)((int32_t)L_30+(int32_t)3)), sizeof(Vector3_t28 ))) = L_31;
		Vector2U5BU5D_t103* L_32 = V_2;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		Vector2_t85  L_34 = {0};
		Vector2__ctor_m305(&L_34, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_32, L_33, sizeof(Vector2_t85 ))) = L_34;
		Vector2U5BU5D_t103* L_35 = V_2;
		int32_t L_36 = V_6;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, ((int32_t)((int32_t)L_36+(int32_t)1)));
		Vector2_t85  L_37 = {0};
		Vector2__ctor_m305(&L_37, (1.0f), (0.0f), /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_35, ((int32_t)((int32_t)L_36+(int32_t)1)), sizeof(Vector2_t85 ))) = L_37;
		Vector2U5BU5D_t103* L_38 = V_2;
		int32_t L_39 = V_6;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)((int32_t)L_39+(int32_t)2)));
		Vector2_t85  L_40 = {0};
		Vector2__ctor_m305(&L_40, (0.0f), (1.0f), /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_38, ((int32_t)((int32_t)L_39+(int32_t)2)), sizeof(Vector2_t85 ))) = L_40;
		Vector2U5BU5D_t103* L_41 = V_2;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)((int32_t)L_42+(int32_t)3)));
		Vector2_t85  L_43 = {0};
		Vector2__ctor_m305(&L_43, (1.0f), (1.0f), /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_41, ((int32_t)((int32_t)L_42+(int32_t)3)), sizeof(Vector2_t85 ))) = L_43;
		Vector2U5BU5D_t103* L_44 = V_3;
		int32_t L_45 = V_6;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		float L_46 = V_9;
		float L_47 = V_10;
		Vector2_t85  L_48 = {0};
		Vector2__ctor_m305(&L_48, L_46, L_47, /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_44, L_45, sizeof(Vector2_t85 ))) = L_48;
		Vector2U5BU5D_t103* L_49 = V_3;
		int32_t L_50 = V_6;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, ((int32_t)((int32_t)L_50+(int32_t)1)));
		float L_51 = V_9;
		float L_52 = V_10;
		Vector2_t85  L_53 = {0};
		Vector2__ctor_m305(&L_53, L_51, L_52, /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_49, ((int32_t)((int32_t)L_50+(int32_t)1)), sizeof(Vector2_t85 ))) = L_53;
		Vector2U5BU5D_t103* L_54 = V_3;
		int32_t L_55 = V_6;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)L_55+(int32_t)2)));
		float L_56 = V_9;
		float L_57 = V_10;
		Vector2_t85  L_58 = {0};
		Vector2__ctor_m305(&L_58, L_56, L_57, /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_54, ((int32_t)((int32_t)L_55+(int32_t)2)), sizeof(Vector2_t85 ))) = L_58;
		Vector2U5BU5D_t103* L_59 = V_3;
		int32_t L_60 = V_6;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, ((int32_t)((int32_t)L_60+(int32_t)3)));
		float L_61 = V_9;
		float L_62 = V_10;
		Vector2_t85  L_63 = {0};
		Vector2__ctor_m305(&L_63, L_61, L_62, /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_59, ((int32_t)((int32_t)L_60+(int32_t)3)), sizeof(Vector2_t85 ))) = L_63;
		Int32U5BU5D_t109* L_64 = V_4;
		int32_t L_65 = V_7;
		int32_t L_66 = V_6;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_64, L_65, sizeof(int32_t))) = (int32_t)L_66;
		Int32U5BU5D_t109* L_67 = V_4;
		int32_t L_68 = V_7;
		int32_t L_69 = V_6;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, ((int32_t)((int32_t)L_68+(int32_t)1)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, ((int32_t)((int32_t)L_68+(int32_t)1)), sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
		Int32U5BU5D_t109* L_70 = V_4;
		int32_t L_71 = V_7;
		int32_t L_72 = V_6;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, ((int32_t)((int32_t)L_71+(int32_t)2)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_70, ((int32_t)((int32_t)L_71+(int32_t)2)), sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_72+(int32_t)2));
		Int32U5BU5D_t109* L_73 = V_4;
		int32_t L_74 = V_7;
		int32_t L_75 = V_6;
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, ((int32_t)((int32_t)L_74+(int32_t)3)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_73, ((int32_t)((int32_t)L_74+(int32_t)3)), sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_75+(int32_t)1));
		Int32U5BU5D_t109* L_76 = V_4;
		int32_t L_77 = V_7;
		int32_t L_78 = V_6;
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, ((int32_t)((int32_t)L_77+(int32_t)4)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_76, ((int32_t)((int32_t)L_77+(int32_t)4)), sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_78+(int32_t)2));
		Int32U5BU5D_t109* L_79 = V_4;
		int32_t L_80 = V_7;
		int32_t L_81 = V_6;
		NullCheck(L_79);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_79, ((int32_t)((int32_t)L_80+(int32_t)5)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_79, ((int32_t)((int32_t)L_80+(int32_t)5)), sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_81+(int32_t)3));
		int32_t L_82 = V_5;
		V_5 = ((int32_t)((int32_t)L_82+(int32_t)1));
	}

IL_01ed:
	{
		int32_t L_83 = V_5;
		int32_t L_84 = ___triCount;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_003b;
		}
	}
	{
		Mesh_t98 * L_85 = V_0;
		Vector3U5BU5D_t111* L_86 = V_1;
		NullCheck(L_85);
		Mesh_set_vertices_m440(L_85, L_86, /*hidden argument*/NULL);
		Mesh_t98 * L_87 = V_0;
		Int32U5BU5D_t109* L_88 = V_4;
		NullCheck(L_87);
		Mesh_set_triangles_m441(L_87, L_88, /*hidden argument*/NULL);
		Mesh_t98 * L_89 = V_0;
		Vector2U5BU5D_t103* L_90 = V_2;
		NullCheck(L_89);
		Mesh_set_uv_m442(L_89, L_90, /*hidden argument*/NULL);
		Mesh_t98 * L_91 = V_0;
		Vector2U5BU5D_t103* L_92 = V_3;
		NullCheck(L_91);
		Mesh_set_uv2_m443(L_91, L_92, /*hidden argument*/NULL);
		Mesh_t98 * L_93 = V_0;
		return L_93;
	}
}
// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_48.h"
// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_48MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.ScreenOverlay
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_49.h"
// UnityStandardAssets.ImageEffects.ScreenOverlay
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_49MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.ScreenOverlay::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void ScreenOverlay__ctor_m169 (ScreenOverlay_t69 * __this, const MethodInfo* method)
{
	{
		__this->___blendMode_5 = 3;
		__this->___intensity_6 = (1.0f);
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.ScreenOverlay::CheckResources()
extern "C" bool ScreenOverlay_CheckResources_m170 (ScreenOverlay_t69 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___overlayShader_8);
		Material_t5 * L_1 = (__this->___overlayMaterial_9);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___overlayMaterial_9 = L_2;
		bool L_3 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		bool L_4 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_4;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenOverlay::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral119;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral120;
extern "C" void ScreenOverlay_OnRenderImage_m171 (ScreenOverlay_t69 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral119 = il2cpp_codegen_string_literal_from_index(119);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral120 = il2cpp_codegen_string_literal_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t100  V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.ScreenOverlay::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		Vector4__ctor_m284((&V_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Material_t5 * L_3 = (__this->___overlayMaterial_9);
		Vector4_t100  L_4 = V_0;
		NullCheck(L_3);
		Material_SetVector_m285(L_3, _stringLiteral119, L_4, /*hidden argument*/NULL);
		Material_t5 * L_5 = (__this->___overlayMaterial_9);
		float L_6 = (__this->___intensity_6);
		NullCheck(L_5);
		Material_SetFloat_m269(L_5, _stringLiteral10, L_6, /*hidden argument*/NULL);
		Material_t5 * L_7 = (__this->___overlayMaterial_9);
		Texture2D_t13 * L_8 = (__this->___texture_7);
		NullCheck(L_7);
		Material_SetTexture_m292(L_7, _stringLiteral120, L_8, /*hidden argument*/NULL);
		RenderTexture_t55 * L_9 = ___source;
		RenderTexture_t55 * L_10 = ___destination;
		Material_t5 * L_11 = (__this->___overlayMaterial_9);
		int32_t L_12 = (__this->___blendMode_5);
		Graphics_Blit_m275(NULL /*static, unused*/, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_50.h"
// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_50MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void ScreenSpaceAmbientObscurance__ctor_m172 (ScreenSpaceAmbientObscurance_t70 * __this, const MethodInfo* method)
{
	{
		__this->___intensity_5 = (0.5f);
		__this->___radius_6 = (0.2f);
		__this->___blurIterations_7 = 1;
		__this->___blurFilterDistance_8 = (1.25f);
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::CheckResources()
extern "C" bool ScreenSpaceAmbientObscurance_CheckResources_m173 (ScreenSpaceAmbientObscurance_t70 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 1, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___aoShader_11);
		Material_t5 * L_1 = (__this->___aoMaterial_12);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___aoMaterial_12 = L_2;
		bool L_3 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		bool L_4 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_4;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::OnDisable()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void ScreenSpaceAmbientObscurance_OnDisable_m174 (ScreenSpaceAmbientObscurance_t70 * __this, const MethodInfo* method)
{
	{
		Material_t5 * L_0 = (__this->___aoMaterial_12);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Material_t5 * L_2 = (__this->___aoMaterial_12);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		__this->___aoMaterial_12 = (Material_t5 *)NULL;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral121;
extern Il2CppCodeGenString* _stringLiteral122;
extern Il2CppCodeGenString* _stringLiteral123;
extern Il2CppCodeGenString* _stringLiteral124;
extern Il2CppCodeGenString* _stringLiteral125;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral126;
extern Il2CppCodeGenString* _stringLiteral127;
extern Il2CppCodeGenString* _stringLiteral128;
extern "C" void ScreenSpaceAmbientObscurance_OnRenderImage_m175 (ScreenSpaceAmbientObscurance_t70 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral121 = il2cpp_codegen_string_literal_from_index(121);
		_stringLiteral122 = il2cpp_codegen_string_literal_from_index(122);
		_stringLiteral123 = il2cpp_codegen_string_literal_from_index(123);
		_stringLiteral124 = il2cpp_codegen_string_literal_from_index(124);
		_stringLiteral125 = il2cpp_codegen_string_literal_from_index(125);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t31  V_0 = {0};
	Matrix4x4_t31  V_1 = {0};
	Vector4_t100  V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RenderTexture_t55 * V_5 = {0};
	RenderTexture_t55 * V_6 = {0};
	int32_t V_7 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		Camera_t32 * L_3 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_3);
		Matrix4x4_t31  L_4 = Camera_get_projectionMatrix_m314(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Matrix4x4_t31  L_5 = Matrix4x4_get_inverse_m444((&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = Screen_get_width_m428(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = Matrix4x4_get_Item_m445((&V_0), 0, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m429(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = Matrix4x4_get_Item_m445((&V_0), 5, /*hidden argument*/NULL);
		float L_10 = Matrix4x4_get_Item_m445((&V_0), 2, /*hidden argument*/NULL);
		float L_11 = Matrix4x4_get_Item_m445((&V_0), 0, /*hidden argument*/NULL);
		float L_12 = Matrix4x4_get_Item_m445((&V_0), 6, /*hidden argument*/NULL);
		float L_13 = Matrix4x4_get_Item_m445((&V_0), 5, /*hidden argument*/NULL);
		Vector4__ctor_m284((&V_2), ((float)((float)(-2.0f)/(float)((float)((float)(((float)L_6))*(float)L_7)))), ((float)((float)(-2.0f)/(float)((float)((float)(((float)L_8))*(float)L_9)))), ((float)((float)((float)((float)(1.0f)-(float)L_10))/(float)L_11)), ((float)((float)((float)((float)(1.0f)+(float)L_12))/(float)L_13)), /*hidden argument*/NULL);
		Material_t5 * L_14 = (__this->___aoMaterial_12);
		Vector4_t100  L_15 = V_2;
		NullCheck(L_14);
		Material_SetVector_m285(L_14, _stringLiteral121, L_15, /*hidden argument*/NULL);
		Material_t5 * L_16 = (__this->___aoMaterial_12);
		Matrix4x4_t31  L_17 = V_1;
		NullCheck(L_16);
		Material_SetMatrix_m326(L_16, _stringLiteral122, L_17, /*hidden argument*/NULL);
		Material_t5 * L_18 = (__this->___aoMaterial_12);
		Texture2D_t13 * L_19 = (__this->___rand_10);
		NullCheck(L_18);
		Material_SetTexture_m292(L_18, _stringLiteral123, L_19, /*hidden argument*/NULL);
		Material_t5 * L_20 = (__this->___aoMaterial_12);
		float L_21 = (__this->___radius_6);
		NullCheck(L_20);
		Material_SetFloat_m269(L_20, _stringLiteral124, L_21, /*hidden argument*/NULL);
		Material_t5 * L_22 = (__this->___aoMaterial_12);
		float L_23 = (__this->___radius_6);
		float L_24 = (__this->___radius_6);
		NullCheck(L_22);
		Material_SetFloat_m269(L_22, _stringLiteral125, ((float)((float)L_23*(float)L_24)), /*hidden argument*/NULL);
		Material_t5 * L_25 = (__this->___aoMaterial_12);
		float L_26 = (__this->___intensity_5);
		NullCheck(L_25);
		Material_SetFloat_m269(L_25, _stringLiteral10, L_26, /*hidden argument*/NULL);
		Material_t5 * L_27 = (__this->___aoMaterial_12);
		float L_28 = (__this->___blurFilterDistance_8);
		NullCheck(L_27);
		Material_SetFloat_m269(L_27, _stringLiteral126, L_28, /*hidden argument*/NULL);
		RenderTexture_t55 * L_29 = ___source;
		NullCheck(L_29);
		int32_t L_30 = RenderTexture_get_width_m272(L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		RenderTexture_t55 * L_31 = ___source;
		NullCheck(L_31);
		int32_t L_32 = RenderTexture_get_height_m273(L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		int32_t L_33 = V_3;
		int32_t L_34 = (__this->___downsample_9);
		int32_t L_35 = V_4;
		int32_t L_36 = (__this->___downsample_9);
		RenderTexture_t55 * L_37 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, ((int32_t)((int32_t)L_33>>(int32_t)((int32_t)((int32_t)L_34&(int32_t)((int32_t)31))))), ((int32_t)((int32_t)L_35>>(int32_t)((int32_t)((int32_t)L_36&(int32_t)((int32_t)31))))), /*hidden argument*/NULL);
		V_5 = L_37;
		RenderTexture_t55 * L_38 = ___source;
		RenderTexture_t55 * L_39 = V_5;
		Material_t5 * L_40 = (__this->___aoMaterial_12);
		Graphics_Blit_m275(NULL /*static, unused*/, L_38, L_39, L_40, 0, /*hidden argument*/NULL);
		int32_t L_41 = (__this->___downsample_9);
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		int32_t L_42 = V_3;
		int32_t L_43 = V_4;
		RenderTexture_t55 * L_44 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		V_6 = L_44;
		RenderTexture_t55 * L_45 = V_5;
		RenderTexture_t55 * L_46 = V_6;
		Material_t5 * L_47 = (__this->___aoMaterial_12);
		Graphics_Blit_m275(NULL /*static, unused*/, L_45, L_46, L_47, 4, /*hidden argument*/NULL);
		RenderTexture_t55 * L_48 = V_5;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		RenderTexture_t55 * L_49 = V_6;
		V_5 = L_49;
	}

IL_018a:
	{
		V_7 = 0;
		goto IL_0222;
	}

IL_0192:
	{
		Material_t5 * L_50 = (__this->___aoMaterial_12);
		Vector2_t85  L_51 = {0};
		Vector2__ctor_m305(&L_51, (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_t100  L_52 = Vector4_op_Implicit_m446(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		Material_SetVector_m285(L_50, _stringLiteral127, L_52, /*hidden argument*/NULL);
		int32_t L_53 = V_3;
		int32_t L_54 = V_4;
		RenderTexture_t55 * L_55 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/NULL);
		V_6 = L_55;
		RenderTexture_t55 * L_56 = V_5;
		RenderTexture_t55 * L_57 = V_6;
		Material_t5 * L_58 = (__this->___aoMaterial_12);
		Graphics_Blit_m275(NULL /*static, unused*/, L_56, L_57, L_58, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_59 = V_5;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		Material_t5 * L_60 = (__this->___aoMaterial_12);
		Vector2_t85  L_61 = {0};
		Vector2__ctor_m305(&L_61, (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t100  L_62 = Vector4_op_Implicit_m446(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
		NullCheck(L_60);
		Material_SetVector_m285(L_60, _stringLiteral127, L_62, /*hidden argument*/NULL);
		int32_t L_63 = V_3;
		int32_t L_64 = V_4;
		RenderTexture_t55 * L_65 = RenderTexture_GetTemporary_m274(NULL /*static, unused*/, L_63, L_64, /*hidden argument*/NULL);
		V_5 = L_65;
		RenderTexture_t55 * L_66 = V_6;
		RenderTexture_t55 * L_67 = V_5;
		Material_t5 * L_68 = (__this->___aoMaterial_12);
		Graphics_Blit_m275(NULL /*static, unused*/, L_66, L_67, L_68, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_69 = V_6;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		int32_t L_70 = V_7;
		V_7 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0222:
	{
		int32_t L_71 = V_7;
		int32_t L_72 = (__this->___blurIterations_7);
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_0192;
		}
	}
	{
		Material_t5 * L_73 = (__this->___aoMaterial_12);
		RenderTexture_t55 * L_74 = V_5;
		NullCheck(L_73);
		Material_SetTexture_m292(L_73, _stringLiteral128, L_74, /*hidden argument*/NULL);
		RenderTexture_t55 * L_75 = ___source;
		RenderTexture_t55 * L_76 = ___destination;
		Material_t5 * L_77 = (__this->___aoMaterial_12);
		Graphics_Blit_m275(NULL /*static, unused*/, L_75, L_76, L_77, 2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_78 = V_5;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_78, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_51.h"
// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_51MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_52.h"
// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_52MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void ScreenSpaceAmbientOcclusion__ctor_m176 (ScreenSpaceAmbientOcclusion_t72 * __this, const MethodInfo* method)
{
	{
		__this->___m_Radius_2 = (0.4f);
		__this->___m_SampleCount_3 = 1;
		__this->___m_OcclusionIntensity_4 = (1.5f);
		__this->___m_Blur_5 = 2;
		__this->___m_Downsampling_6 = 2;
		__this->___m_OcclusionAttenuation_7 = (1.0f);
		__this->___m_MinZ_8 = (0.01f);
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterial(UnityEngine.Shader)
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern TypeInfo* Material_t5_il2cpp_TypeInfo_var;
extern "C" Material_t5 * ScreenSpaceAmbientOcclusion_CreateMaterial_m177 (Object_t * __this /* static, unused */, Shader_t4 * ___shader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Material_t5 * V_0 = {0};
	{
		Shader_t4 * L_0 = ___shader;
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (Material_t5 *)NULL;
	}

IL_000d:
	{
		Shader_t4 * L_2 = ___shader;
		Material_t5 * L_3 = (Material_t5 *)il2cpp_codegen_object_new (Material_t5_il2cpp_TypeInfo_var);
		Material__ctor_m300(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Material_t5 * L_4 = V_0;
		NullCheck(L_4);
		Object_set_hideFlags_m301(L_4, ((int32_t)61), /*hidden argument*/NULL);
		Material_t5 * L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::DestroyMaterial(UnityEngine.Material)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void ScreenSpaceAmbientOcclusion_DestroyMaterial_m178 (Object_t * __this /* static, unused */, Material_t5 * ___mat, const MethodInfo* method)
{
	{
		Material_t5 * L_0 = ___mat;
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Material_t5 * L_2 = ___mat;
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		___mat = (Material_t5 *)NULL;
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnDisable()
// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_52MethodDeclarations.h"
extern "C" void ScreenSpaceAmbientOcclusion_OnDisable_m179 (ScreenSpaceAmbientOcclusion_t72 * __this, const MethodInfo* method)
{
	{
		Material_t5 * L_0 = (__this->___m_SSAOMaterial_10);
		ScreenSpaceAmbientOcclusion_DestroyMaterial_m178(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::Start()
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern "C" void ScreenSpaceAmbientOcclusion_Start_m180 (ScreenSpaceAmbientOcclusion_t72 * __this, const MethodInfo* method)
{
	{
		bool L_0 = SystemInfo_get_supportsImageEffects_m302(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1 = SystemInfo_SupportsRenderTextureFormat_m321(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}

IL_0015:
	{
		__this->___m_Supported_12 = 0;
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0024:
	{
		ScreenSpaceAmbientOcclusion_CreateMaterials_m182(__this, /*hidden argument*/NULL);
		Material_t5 * L_2 = (__this->___m_SSAOMaterial_10);
		bool L_3 = Object_op_Implicit_m294(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		Material_t5 * L_4 = (__this->___m_SSAOMaterial_10);
		NullCheck(L_4);
		int32_t L_5 = Material_get_passCount_m435(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)5)))
		{
			goto IL_005a;
		}
	}

IL_004b:
	{
		__this->___m_Supported_12 = 0;
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_005a:
	{
		__this->___m_Supported_12 = 1;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnEnable()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern "C" void ScreenSpaceAmbientOcclusion_OnEnable_m181 (ScreenSpaceAmbientOcclusion_t72 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t32 * L_0 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		Camera_t32 * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = Camera_get_depthTextureMode_m319(L_1, /*hidden argument*/NULL);
		NullCheck(L_1);
		Camera_set_depthTextureMode_m320(L_1, ((int32_t)((int32_t)L_2|(int32_t)2)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterials()
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral129;
extern "C" void ScreenSpaceAmbientOcclusion_CreateMaterials_m182 (ScreenSpaceAmbientOcclusion_t72 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral129 = il2cpp_codegen_string_literal_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t5 * L_0 = (__this->___m_SSAOMaterial_10);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		Shader_t4 * L_2 = (__this->___m_SSAOShader_9);
		NullCheck(L_2);
		bool L_3 = Shader_get_isSupported_m266(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		Shader_t4 * L_4 = (__this->___m_SSAOShader_9);
		Material_t5 * L_5 = ScreenSpaceAmbientOcclusion_CreateMaterial_m177(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->___m_SSAOMaterial_10 = L_5;
		Material_t5 * L_6 = (__this->___m_SSAOMaterial_10);
		Texture2D_t13 * L_7 = (__this->___m_RandomTexture_11);
		NullCheck(L_6);
		Material_SetTexture_m292(L_6, _stringLiteral129, L_7, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral130;
extern Il2CppCodeGenString* _stringLiteral131;
extern Il2CppCodeGenString* _stringLiteral132;
extern Il2CppCodeGenString* _stringLiteral133;
extern Il2CppCodeGenString* _stringLiteral134;
extern "C" void ScreenSpaceAmbientOcclusion_OnRenderImage_m183 (ScreenSpaceAmbientOcclusion_t72 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		_stringLiteral131 = il2cpp_codegen_string_literal_from_index(131);
		_stringLiteral132 = il2cpp_codegen_string_literal_from_index(132);
		_stringLiteral133 = il2cpp_codegen_string_literal_from_index(133);
		_stringLiteral134 = il2cpp_codegen_string_literal_from_index(134);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t55 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	RenderTexture_t55 * V_8 = {0};
	RenderTexture_t55 * V_9 = {0};
	RenderTexture_t55 * G_B9_0 = {0};
	{
		bool L_0 = (__this->___m_Supported_12);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Shader_t4 * L_1 = (__this->___m_SSAOShader_9);
		NullCheck(L_1);
		bool L_2 = Shader_get_isSupported_m266(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}

IL_001b:
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0023:
	{
		ScreenSpaceAmbientOcclusion_CreateMaterials_m182(__this, /*hidden argument*/NULL);
		int32_t L_3 = (__this->___m_Downsampling_6);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_4 = Mathf_Clamp_m438(NULL /*static, unused*/, L_3, 1, 6, /*hidden argument*/NULL);
		__this->___m_Downsampling_6 = L_4;
		float L_5 = (__this->___m_Radius_2);
		float L_6 = Mathf_Clamp_m368(NULL /*static, unused*/, L_5, (0.05f), (1.0f), /*hidden argument*/NULL);
		__this->___m_Radius_2 = L_6;
		float L_7 = (__this->___m_MinZ_8);
		float L_8 = Mathf_Clamp_m368(NULL /*static, unused*/, L_7, (1.0E-05f), (0.5f), /*hidden argument*/NULL);
		__this->___m_MinZ_8 = L_8;
		float L_9 = (__this->___m_OcclusionIntensity_4);
		float L_10 = Mathf_Clamp_m368(NULL /*static, unused*/, L_9, (0.5f), (4.0f), /*hidden argument*/NULL);
		__this->___m_OcclusionIntensity_4 = L_10;
		float L_11 = (__this->___m_OcclusionAttenuation_7);
		float L_12 = Mathf_Clamp_m368(NULL /*static, unused*/, L_11, (0.2f), (2.0f), /*hidden argument*/NULL);
		__this->___m_OcclusionAttenuation_7 = L_12;
		int32_t L_13 = (__this->___m_Blur_5);
		int32_t L_14 = Mathf_Clamp_m438(NULL /*static, unused*/, L_13, 0, 4, /*hidden argument*/NULL);
		__this->___m_Blur_5 = L_14;
		RenderTexture_t55 * L_15 = ___source;
		NullCheck(L_15);
		int32_t L_16 = RenderTexture_get_width_m272(L_15, /*hidden argument*/NULL);
		int32_t L_17 = (__this->___m_Downsampling_6);
		RenderTexture_t55 * L_18 = ___source;
		NullCheck(L_18);
		int32_t L_19 = RenderTexture_get_height_m273(L_18, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___m_Downsampling_6);
		RenderTexture_t55 * L_21 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, ((int32_t)((int32_t)L_16/(int32_t)L_17)), ((int32_t)((int32_t)L_19/(int32_t)L_20)), 0, /*hidden argument*/NULL);
		V_0 = L_21;
		Camera_t32 * L_22 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_22);
		float L_23 = Camera_get_fieldOfView_m339(L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		Camera_t32 * L_24 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_24);
		float L_25 = Camera_get_farClipPlane_m391(L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		float L_26 = V_1;
		float L_27 = tanf(((float)((float)((float)((float)L_26*(float)(0.0174532924f)))*(float)(0.5f))));
		float L_28 = V_2;
		V_3 = ((float)((float)L_27*(float)L_28));
		float L_29 = V_3;
		Camera_t32 * L_30 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_30);
		float L_31 = Camera_get_aspect_m407(L_30, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_29*(float)L_31));
		Material_t5 * L_32 = (__this->___m_SSAOMaterial_10);
		float L_33 = V_4;
		float L_34 = V_3;
		float L_35 = V_2;
		Vector3_t28  L_36 = {0};
		Vector3__ctor_m396(&L_36, L_33, L_34, L_35, /*hidden argument*/NULL);
		Vector4_t100  L_37 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		NullCheck(L_32);
		Material_SetVector_m285(L_32, _stringLiteral130, L_37, /*hidden argument*/NULL);
		Texture2D_t13 * L_38 = (__this->___m_RandomTexture_11);
		bool L_39 = Object_op_Implicit_m294(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0165;
		}
	}
	{
		Texture2D_t13 * L_40 = (__this->___m_RandomTexture_11);
		NullCheck(L_40);
		int32_t L_41 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_40);
		V_5 = L_41;
		Texture2D_t13 * L_42 = (__this->___m_RandomTexture_11);
		NullCheck(L_42);
		int32_t L_43 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_42);
		V_6 = L_43;
		goto IL_016b;
	}

IL_0165:
	{
		V_5 = 1;
		V_6 = 1;
	}

IL_016b:
	{
		Material_t5 * L_44 = (__this->___m_SSAOMaterial_10);
		RenderTexture_t55 * L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = RenderTexture_get_width_m272(L_45, /*hidden argument*/NULL);
		int32_t L_47 = V_5;
		RenderTexture_t55 * L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = RenderTexture_get_height_m273(L_48, /*hidden argument*/NULL);
		int32_t L_50 = V_6;
		Vector3_t28  L_51 = {0};
		Vector3__ctor_m396(&L_51, ((float)((float)(((float)L_46))/(float)(((float)L_47)))), ((float)((float)(((float)L_49))/(float)(((float)L_50)))), (0.0f), /*hidden argument*/NULL);
		Vector4_t100  L_52 = Vector4_op_Implicit_m397(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		NullCheck(L_44);
		Material_SetVector_m285(L_44, _stringLiteral131, L_52, /*hidden argument*/NULL);
		Material_t5 * L_53 = (__this->___m_SSAOMaterial_10);
		float L_54 = (__this->___m_Radius_2);
		float L_55 = (__this->___m_MinZ_8);
		float L_56 = (__this->___m_OcclusionAttenuation_7);
		float L_57 = (__this->___m_OcclusionIntensity_4);
		Vector4_t100  L_58 = {0};
		Vector4__ctor_m284(&L_58, L_54, L_55, ((float)((float)(1.0f)/(float)L_56)), L_57, /*hidden argument*/NULL);
		NullCheck(L_53);
		Material_SetVector_m285(L_53, _stringLiteral132, L_58, /*hidden argument*/NULL);
		int32_t L_59 = (__this->___m_Blur_5);
		V_7 = ((((int32_t)L_59) > ((int32_t)0))? 1 : 0);
		bool L_60 = V_7;
		if (!L_60)
		{
			goto IL_01eb;
		}
	}
	{
		G_B9_0 = ((RenderTexture_t55 *)(NULL));
		goto IL_01ec;
	}

IL_01eb:
	{
		RenderTexture_t55 * L_61 = ___source;
		G_B9_0 = L_61;
	}

IL_01ec:
	{
		RenderTexture_t55 * L_62 = V_0;
		Material_t5 * L_63 = (__this->___m_SSAOMaterial_10);
		int32_t L_64 = (__this->___m_SampleCount_3);
		Graphics_Blit_m275(NULL /*static, unused*/, G_B9_0, L_62, L_63, L_64, /*hidden argument*/NULL);
		bool L_65 = V_7;
		if (!L_65)
		{
			goto IL_02e4;
		}
	}
	{
		RenderTexture_t55 * L_66 = ___source;
		NullCheck(L_66);
		int32_t L_67 = RenderTexture_get_width_m272(L_66, /*hidden argument*/NULL);
		RenderTexture_t55 * L_68 = ___source;
		NullCheck(L_68);
		int32_t L_69 = RenderTexture_get_height_m273(L_68, /*hidden argument*/NULL);
		RenderTexture_t55 * L_70 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, L_67, L_69, 0, /*hidden argument*/NULL);
		V_8 = L_70;
		Material_t5 * L_71 = (__this->___m_SSAOMaterial_10);
		int32_t L_72 = (__this->___m_Blur_5);
		RenderTexture_t55 * L_73 = ___source;
		NullCheck(L_73);
		int32_t L_74 = RenderTexture_get_width_m272(L_73, /*hidden argument*/NULL);
		Vector4_t100  L_75 = {0};
		Vector4__ctor_m284(&L_75, ((float)((float)(((float)L_72))/(float)(((float)L_74)))), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_71);
		Material_SetVector_m285(L_71, _stringLiteral133, L_75, /*hidden argument*/NULL);
		Material_t5 * L_76 = (__this->___m_SSAOMaterial_10);
		RenderTexture_t55 * L_77 = V_0;
		NullCheck(L_76);
		Material_SetTexture_m292(L_76, _stringLiteral134, L_77, /*hidden argument*/NULL);
		RenderTexture_t55 * L_78 = V_8;
		Material_t5 * L_79 = (__this->___m_SSAOMaterial_10);
		Graphics_Blit_m275(NULL /*static, unused*/, (Texture_t40 *)NULL, L_78, L_79, 3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_80 = V_0;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
		RenderTexture_t55 * L_81 = ___source;
		NullCheck(L_81);
		int32_t L_82 = RenderTexture_get_width_m272(L_81, /*hidden argument*/NULL);
		RenderTexture_t55 * L_83 = ___source;
		NullCheck(L_83);
		int32_t L_84 = RenderTexture_get_height_m273(L_83, /*hidden argument*/NULL);
		RenderTexture_t55 * L_85 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, L_82, L_84, 0, /*hidden argument*/NULL);
		V_9 = L_85;
		Material_t5 * L_86 = (__this->___m_SSAOMaterial_10);
		int32_t L_87 = (__this->___m_Blur_5);
		RenderTexture_t55 * L_88 = ___source;
		NullCheck(L_88);
		int32_t L_89 = RenderTexture_get_height_m273(L_88, /*hidden argument*/NULL);
		Vector4_t100  L_90 = {0};
		Vector4__ctor_m284(&L_90, (0.0f), ((float)((float)(((float)L_87))/(float)(((float)L_89)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_86);
		Material_SetVector_m285(L_86, _stringLiteral133, L_90, /*hidden argument*/NULL);
		Material_t5 * L_91 = (__this->___m_SSAOMaterial_10);
		RenderTexture_t55 * L_92 = V_8;
		NullCheck(L_91);
		Material_SetTexture_m292(L_91, _stringLiteral134, L_92, /*hidden argument*/NULL);
		RenderTexture_t55 * L_93 = ___source;
		RenderTexture_t55 * L_94 = V_9;
		Material_t5 * L_95 = (__this->___m_SSAOMaterial_10);
		Graphics_Blit_m275(NULL /*static, unused*/, L_93, L_94, L_95, 3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_96 = V_8;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_96, /*hidden argument*/NULL);
		RenderTexture_t55 * L_97 = V_9;
		V_0 = L_97;
	}

IL_02e4:
	{
		Material_t5 * L_98 = (__this->___m_SSAOMaterial_10);
		RenderTexture_t55 * L_99 = V_0;
		NullCheck(L_98);
		Material_SetTexture_m292(L_98, _stringLiteral134, L_99, /*hidden argument*/NULL);
		RenderTexture_t55 * L_100 = ___source;
		RenderTexture_t55 * L_101 = ___destination;
		Material_t5 * L_102 = (__this->___m_SSAOMaterial_10);
		Graphics_Blit_m275(NULL /*static, unused*/, L_100, L_101, L_102, 4, /*hidden argument*/NULL);
		RenderTexture_t55 * L_103 = V_0;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_103, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.SepiaTone
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_53.h"
// UnityStandardAssets.ImageEffects.SepiaTone
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_53MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.SepiaTone::.ctor()
// UnityStandardAssets.ImageEffects.ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_25MethodDeclarations.h"
extern "C" void SepiaTone__ctor_m184 (SepiaTone_t73 * __this, const MethodInfo* method)
{
	{
		ImageEffectBase__ctor_m121(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.SepiaTone::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern "C" void SepiaTone_OnRenderImage_m185 (SepiaTone_t73 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	{
		RenderTexture_t55 * L_0 = ___source;
		RenderTexture_t55 * L_1 = ___destination;
		Material_t5 * L_2 = ImageEffectBase_get_material_m123(__this, /*hidden argument*/NULL);
		Graphics_Blit_m270(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_54.h"
// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_54MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_55.h"
// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_55MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.SunShafts
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_56.h"
// UnityStandardAssets.ImageEffects.SunShafts
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_56MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.SunShafts::.ctor()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void SunShafts__ctor_m186 (SunShafts_t76 * __this, const MethodInfo* method)
{
	{
		__this->___resolution_5 = 1;
		__this->___radialBlurIterations_8 = 2;
		Color_t12  L_0 = Color_get_white_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___sunColor_9 = L_0;
		Color_t12  L_1 = {0};
		Color__ctor_m369(&L_1, (0.87f), (0.74f), (0.65f), /*hidden argument*/NULL);
		__this->___sunThreshold_10 = L_1;
		__this->___sunShaftBlurRadius_11 = (2.5f);
		__this->___sunShaftIntensity_12 = (1.15f);
		__this->___maxRadius_13 = (0.75f);
		__this->___useDepthTexture_14 = 1;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.SunShafts::CheckResources()
extern "C" bool SunShafts_CheckResources_m187 (SunShafts_t76 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___useDepthTexture_14);
		PostEffectsBase_CheckSupport_m151(__this, L_0, /*hidden argument*/NULL);
		Shader_t4 * L_1 = (__this->___sunShaftsShader_15);
		Material_t5 * L_2 = (__this->___sunShaftsMaterial_16);
		Material_t5 * L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_1, L_2, /*hidden argument*/NULL);
		__this->___sunShaftsMaterial_16 = L_3;
		Shader_t4 * L_4 = (__this->___simpleClearShader_17);
		Material_t5 * L_5 = (__this->___simpleClearMaterial_18);
		Material_t5 * L_6 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_4, L_5, /*hidden argument*/NULL);
		__this->___simpleClearMaterial_18 = L_6;
		bool L_7 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_004e:
	{
		bool L_8 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_8;
	}
}
// System.Void UnityStandardAssets.ImageEffects.SunShafts::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral135;
extern Il2CppCodeGenString* _stringLiteral136;
extern Il2CppCodeGenString* _stringLiteral137;
extern Il2CppCodeGenString* _stringLiteral138;
extern Il2CppCodeGenString* _stringLiteral139;
extern Il2CppCodeGenString* _stringLiteral11;
extern "C" void SunShafts_OnRenderImage_m188 (SunShafts_t76 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral135 = il2cpp_codegen_string_literal_from_index(135);
		_stringLiteral136 = il2cpp_codegen_string_literal_from_index(136);
		_stringLiteral137 = il2cpp_codegen_string_literal_from_index(137);
		_stringLiteral138 = il2cpp_codegen_string_literal_from_index(138);
		_stringLiteral139 = il2cpp_codegen_string_literal_from_index(139);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t28  V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_t55 * V_4 = {0};
	RenderTexture_t55 * V_5 = {0};
	int32_t V_6 = {0};
	RenderTexture_t55 * V_7 = {0};
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	int32_t G_B15_0 = 0;
	Material_t5 * G_B25_0 = {0};
	RenderTexture_t55 * G_B25_1 = {0};
	RenderTexture_t55 * G_B25_2 = {0};
	Material_t5 * G_B24_0 = {0};
	RenderTexture_t55 * G_B24_1 = {0};
	RenderTexture_t55 * G_B24_2 = {0};
	int32_t G_B26_0 = 0;
	Material_t5 * G_B26_1 = {0};
	RenderTexture_t55 * G_B26_2 = {0};
	RenderTexture_t55 * G_B26_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.SunShafts::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		bool L_3 = (__this->___useDepthTexture_14);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		Camera_t32 * L_4 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		Camera_t32 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = Camera_get_depthTextureMode_m319(L_5, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_depthTextureMode_m320(L_5, ((int32_t)((int32_t)L_6|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0031:
	{
		V_0 = 4;
		int32_t L_7 = (__this->___resolution_5);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		V_0 = 2;
		goto IL_0054;
	}

IL_0046:
	{
		int32_t L_8 = (__this->___resolution_5);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0054;
		}
	}
	{
		V_0 = 1;
	}

IL_0054:
	{
		Vector3_t28  L_9 = Vector3_get_one_m308(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t28  L_10 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_9, (0.5f), /*hidden argument*/NULL);
		V_1 = L_10;
		Transform_t48 * L_11 = (__this->___sunTransform_7);
		bool L_12 = Object_op_Implicit_m294(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		Camera_t32 * L_13 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		Transform_t48 * L_14 = (__this->___sunTransform_7);
		NullCheck(L_14);
		Vector3_t28  L_15 = Transform_get_position_m335(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t28  L_16 = Camera_WorldToViewportPoint_m390(L_13, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_00a6;
	}

IL_0090:
	{
		Vector3__ctor_m396((&V_1), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
	}

IL_00a6:
	{
		RenderTexture_t55 * L_17 = ___source;
		NullCheck(L_17);
		int32_t L_18 = RenderTexture_get_width_m272(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		V_2 = ((int32_t)((int32_t)L_18/(int32_t)L_19));
		RenderTexture_t55 * L_20 = ___source;
		NullCheck(L_20);
		int32_t L_21 = RenderTexture_get_height_m273(L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		V_3 = ((int32_t)((int32_t)L_21/(int32_t)L_22));
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		RenderTexture_t55 * L_25 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, L_23, L_24, 0, /*hidden argument*/NULL);
		V_5 = L_25;
		Material_t5 * L_26 = (__this->___sunShaftsMaterial_16);
		Vector4_t100  L_27 = {0};
		Vector4__ctor_m284(&L_27, (1.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_28 = (__this->___sunShaftBlurRadius_11);
		Vector4_t100  L_29 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		Material_SetVector_m285(L_26, _stringLiteral135, L_29, /*hidden argument*/NULL);
		Material_t5 * L_30 = (__this->___sunShaftsMaterial_16);
		float L_31 = ((&V_1)->___x_1);
		float L_32 = ((&V_1)->___y_2);
		float L_33 = ((&V_1)->___z_3);
		float L_34 = (__this->___maxRadius_13);
		Vector4_t100  L_35 = {0};
		Vector4__ctor_m284(&L_35, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		Material_SetVector_m285(L_30, _stringLiteral136, L_35, /*hidden argument*/NULL);
		Material_t5 * L_36 = (__this->___sunShaftsMaterial_16);
		Color_t12  L_37 = (__this->___sunThreshold_10);
		Vector4_t100  L_38 = Color_op_Implicit_m293(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		Material_SetVector_m285(L_36, _stringLiteral137, L_38, /*hidden argument*/NULL);
		bool L_39 = (__this->___useDepthTexture_14);
		if (L_39)
		{
			goto IL_01bc;
		}
	}
	{
		Camera_t32 * L_40 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_40);
		bool L_41 = Camera_get_hdr_m281(L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0163;
		}
	}
	{
		G_B15_0 = ((int32_t)9);
		goto IL_0164;
	}

IL_0163:
	{
		G_B15_0 = 7;
	}

IL_0164:
	{
		V_6 = G_B15_0;
		RenderTexture_t55 * L_42 = ___source;
		NullCheck(L_42);
		int32_t L_43 = RenderTexture_get_width_m272(L_42, /*hidden argument*/NULL);
		RenderTexture_t55 * L_44 = ___source;
		NullCheck(L_44);
		int32_t L_45 = RenderTexture_get_height_m273(L_44, /*hidden argument*/NULL);
		int32_t L_46 = V_6;
		RenderTexture_t55 * L_47 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_43, L_45, 0, L_46, /*hidden argument*/NULL);
		V_7 = L_47;
		RenderTexture_t55 * L_48 = V_7;
		RenderTexture_set_active_m402(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		Camera_t32 * L_49 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		GL_ClearWithSkybox_m447(NULL /*static, unused*/, 0, L_49, /*hidden argument*/NULL);
		Material_t5 * L_50 = (__this->___sunShaftsMaterial_16);
		RenderTexture_t55 * L_51 = V_7;
		NullCheck(L_50);
		Material_SetTexture_m292(L_50, _stringLiteral138, L_51, /*hidden argument*/NULL);
		RenderTexture_t55 * L_52 = ___source;
		RenderTexture_t55 * L_53 = V_5;
		Material_t5 * L_54 = (__this->___sunShaftsMaterial_16);
		Graphics_Blit_m275(NULL /*static, unused*/, L_52, L_53, L_54, 3, /*hidden argument*/NULL);
		RenderTexture_t55 * L_55 = V_7;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		goto IL_01cb;
	}

IL_01bc:
	{
		RenderTexture_t55 * L_56 = ___source;
		RenderTexture_t55 * L_57 = V_5;
		Material_t5 * L_58 = (__this->___sunShaftsMaterial_16);
		Graphics_Blit_m275(NULL /*static, unused*/, L_56, L_57, L_58, 2, /*hidden argument*/NULL);
	}

IL_01cb:
	{
		RenderTexture_t55 * L_59 = V_5;
		Material_t5 * L_60 = (__this->___simpleClearMaterial_18);
		PostEffectsBase_DrawBorder_m157(__this, L_59, L_60, /*hidden argument*/NULL);
		int32_t L_61 = (__this->___radialBlurIterations_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_62 = Mathf_Clamp_m438(NULL /*static, unused*/, L_61, 1, 4, /*hidden argument*/NULL);
		__this->___radialBlurIterations_8 = L_62;
		float L_63 = (__this->___sunShaftBlurRadius_11);
		V_8 = ((float)((float)L_63*(float)(0.00130208337f)));
		Material_t5 * L_64 = (__this->___sunShaftsMaterial_16);
		float L_65 = V_8;
		float L_66 = V_8;
		Vector4_t100  L_67 = {0};
		Vector4__ctor_m284(&L_67, L_65, L_66, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_64);
		Material_SetVector_m285(L_64, _stringLiteral135, L_67, /*hidden argument*/NULL);
		Material_t5 * L_68 = (__this->___sunShaftsMaterial_16);
		float L_69 = ((&V_1)->___x_1);
		float L_70 = ((&V_1)->___y_2);
		float L_71 = ((&V_1)->___z_3);
		float L_72 = (__this->___maxRadius_13);
		Vector4_t100  L_73 = {0};
		Vector4__ctor_m284(&L_73, L_69, L_70, L_71, L_72, /*hidden argument*/NULL);
		NullCheck(L_68);
		Material_SetVector_m285(L_68, _stringLiteral136, L_73, /*hidden argument*/NULL);
		V_9 = 0;
		goto IL_032b;
	}

IL_0255:
	{
		int32_t L_74 = V_2;
		int32_t L_75 = V_3;
		RenderTexture_t55 * L_76 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, L_74, L_75, 0, /*hidden argument*/NULL);
		V_4 = L_76;
		RenderTexture_t55 * L_77 = V_5;
		RenderTexture_t55 * L_78 = V_4;
		Material_t5 * L_79 = (__this->___sunShaftsMaterial_16);
		Graphics_Blit_m275(NULL /*static, unused*/, L_77, L_78, L_79, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_80 = V_5;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
		float L_81 = (__this->___sunShaftBlurRadius_11);
		int32_t L_82 = V_9;
		V_8 = ((float)((float)((float)((float)L_81*(float)((float)((float)((float)((float)((float)((float)(((float)L_82))*(float)(2.0f)))+(float)(1.0f)))*(float)(6.0f)))))/(float)(768.0f)));
		Material_t5 * L_83 = (__this->___sunShaftsMaterial_16);
		float L_84 = V_8;
		float L_85 = V_8;
		Vector4_t100  L_86 = {0};
		Vector4__ctor_m284(&L_86, L_84, L_85, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_83);
		Material_SetVector_m285(L_83, _stringLiteral135, L_86, /*hidden argument*/NULL);
		int32_t L_87 = V_2;
		int32_t L_88 = V_3;
		RenderTexture_t55 * L_89 = RenderTexture_GetTemporary_m307(NULL /*static, unused*/, L_87, L_88, 0, /*hidden argument*/NULL);
		V_5 = L_89;
		RenderTexture_t55 * L_90 = V_4;
		RenderTexture_t55 * L_91 = V_5;
		Material_t5 * L_92 = (__this->___sunShaftsMaterial_16);
		Graphics_Blit_m275(NULL /*static, unused*/, L_90, L_91, L_92, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_93 = V_4;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_93, /*hidden argument*/NULL);
		float L_94 = (__this->___sunShaftBlurRadius_11);
		int32_t L_95 = V_9;
		V_8 = ((float)((float)((float)((float)L_94*(float)((float)((float)((float)((float)((float)((float)(((float)L_95))*(float)(2.0f)))+(float)(2.0f)))*(float)(6.0f)))))/(float)(768.0f)));
		Material_t5 * L_96 = (__this->___sunShaftsMaterial_16);
		float L_97 = V_8;
		float L_98 = V_8;
		Vector4_t100  L_99 = {0};
		Vector4__ctor_m284(&L_99, L_97, L_98, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_96);
		Material_SetVector_m285(L_96, _stringLiteral135, L_99, /*hidden argument*/NULL);
		int32_t L_100 = V_9;
		V_9 = ((int32_t)((int32_t)L_100+(int32_t)1));
	}

IL_032b:
	{
		int32_t L_101 = V_9;
		int32_t L_102 = (__this->___radialBlurIterations_8);
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_0255;
		}
	}
	{
		float L_103 = ((&V_1)->___z_3);
		if ((!(((float)L_103) >= ((float)(0.0f)))))
		{
			goto IL_039a;
		}
	}
	{
		Material_t5 * L_104 = (__this->___sunShaftsMaterial_16);
		Color_t12 * L_105 = &(__this->___sunColor_9);
		float L_106 = (L_105->___r_0);
		Color_t12 * L_107 = &(__this->___sunColor_9);
		float L_108 = (L_107->___g_1);
		Color_t12 * L_109 = &(__this->___sunColor_9);
		float L_110 = (L_109->___b_2);
		Color_t12 * L_111 = &(__this->___sunColor_9);
		float L_112 = (L_111->___a_3);
		Vector4_t100  L_113 = {0};
		Vector4__ctor_m284(&L_113, L_106, L_108, L_110, L_112, /*hidden argument*/NULL);
		float L_114 = (__this->___sunShaftIntensity_12);
		Vector4_t100  L_115 = Vector4_op_Multiply_m290(NULL /*static, unused*/, L_113, L_114, /*hidden argument*/NULL);
		NullCheck(L_104);
		Material_SetVector_m285(L_104, _stringLiteral139, L_115, /*hidden argument*/NULL);
		goto IL_03af;
	}

IL_039a:
	{
		Material_t5 * L_116 = (__this->___sunShaftsMaterial_16);
		Vector4_t100  L_117 = Vector4_get_zero_m331(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_116);
		Material_SetVector_m285(L_116, _stringLiteral139, L_117, /*hidden argument*/NULL);
	}

IL_03af:
	{
		Material_t5 * L_118 = (__this->___sunShaftsMaterial_16);
		RenderTexture_t55 * L_119 = V_5;
		NullCheck(L_118);
		Material_SetTexture_m292(L_118, _stringLiteral11, L_119, /*hidden argument*/NULL);
		RenderTexture_t55 * L_120 = ___source;
		RenderTexture_t55 * L_121 = ___destination;
		Material_t5 * L_122 = (__this->___sunShaftsMaterial_16);
		int32_t L_123 = (__this->___screenBlendMode_6);
		G_B24_0 = L_122;
		G_B24_1 = L_121;
		G_B24_2 = L_120;
		if (L_123)
		{
			G_B25_0 = L_122;
			G_B25_1 = L_121;
			G_B25_2 = L_120;
			goto IL_03da;
		}
	}
	{
		G_B26_0 = 0;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		G_B26_3 = G_B24_2;
		goto IL_03db;
	}

IL_03da:
	{
		G_B26_0 = 4;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
		G_B26_3 = G_B25_2;
	}

IL_03db:
	{
		Graphics_Blit_m275(NULL /*static, unused*/, G_B26_3, G_B26_2, G_B26_1, G_B26_0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_124 = V_5;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_124, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_57.h"
// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_57MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_58.h"
// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_58MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.TiltShift
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_59.h"
// UnityStandardAssets.ImageEffects.TiltShift
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_59MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.TiltShift::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void TiltShift__ctor_m189 (TiltShift_t79 * __this, const MethodInfo* method)
{
	{
		__this->___quality_6 = 1;
		__this->___blurArea_7 = (1.0f);
		__this->___maxBlurSize_8 = (5.0f);
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.TiltShift::CheckResources()
extern "C" bool TiltShift_CheckResources_m190 (TiltShift_t79 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 1, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___tiltShiftShader_10);
		Material_t5 * L_1 = (__this->___tiltShiftMaterial_11);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___tiltShiftMaterial_11 = L_2;
		bool L_3 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		bool L_4 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_4;
	}
}
// System.Void UnityStandardAssets.ImageEffects.TiltShift::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral140;
extern Il2CppCodeGenString* _stringLiteral141;
extern Il2CppCodeGenString* _stringLiteral142;
extern "C" void TiltShift_OnRenderImage_m191 (TiltShift_t79 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral140 = il2cpp_codegen_string_literal_from_index(140);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		_stringLiteral142 = il2cpp_codegen_string_literal_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t55 * V_0 = {0};
	int32_t V_1 = 0;
	String_t* G_B4_0 = {0};
	Material_t5 * G_B4_1 = {0};
	String_t* G_B3_0 = {0};
	Material_t5 * G_B3_1 = {0};
	float G_B5_0 = 0.0f;
	String_t* G_B5_1 = {0};
	Material_t5 * G_B5_2 = {0};
	Material_t5 * G_B9_0 = {0};
	RenderTexture_t55 * G_B9_1 = {0};
	RenderTexture_t55 * G_B9_2 = {0};
	Material_t5 * G_B8_0 = {0};
	RenderTexture_t55 * G_B8_1 = {0};
	RenderTexture_t55 * G_B8_2 = {0};
	int32_t G_B10_0 = 0;
	Material_t5 * G_B10_1 = {0};
	RenderTexture_t55 * G_B10_2 = {0};
	RenderTexture_t55 * G_B10_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.TiltShift::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		Material_t5 * L_3 = (__this->___tiltShiftMaterial_11);
		float L_4 = (__this->___maxBlurSize_8);
		G_B3_0 = _stringLiteral140;
		G_B3_1 = L_3;
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			G_B4_0 = _stringLiteral140;
			G_B4_1 = L_3;
			goto IL_0038;
		}
	}
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_003e;
	}

IL_0038:
	{
		float L_5 = (__this->___maxBlurSize_8);
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_003e:
	{
		NullCheck(G_B5_2);
		Material_SetFloat_m269(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
		Material_t5 * L_6 = (__this->___tiltShiftMaterial_11);
		float L_7 = (__this->___blurArea_7);
		NullCheck(L_6);
		Material_SetFloat_m269(L_6, _stringLiteral141, L_7, /*hidden argument*/NULL);
		RenderTexture_t55 * L_8 = ___source;
		NullCheck(L_8);
		Texture_set_filterMode_m298(L_8, 1, /*hidden argument*/NULL);
		RenderTexture_t55 * L_9 = ___destination;
		V_0 = L_9;
		int32_t L_10 = (__this->___downsample_9);
		if ((!(((float)(((float)L_10))) > ((float)(0.0f)))))
		{
			goto IL_00a7;
		}
	}
	{
		RenderTexture_t55 * L_11 = ___source;
		NullCheck(L_11);
		int32_t L_12 = RenderTexture_get_width_m272(L_11, /*hidden argument*/NULL);
		int32_t L_13 = (__this->___downsample_9);
		RenderTexture_t55 * L_14 = ___source;
		NullCheck(L_14);
		int32_t L_15 = RenderTexture_get_height_m273(L_14, /*hidden argument*/NULL);
		int32_t L_16 = (__this->___downsample_9);
		RenderTexture_t55 * L_17 = ___source;
		NullCheck(L_17);
		int32_t L_18 = RenderTexture_get_format_m279(L_17, /*hidden argument*/NULL);
		RenderTexture_t55 * L_19 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_12>>(int32_t)((int32_t)((int32_t)L_13&(int32_t)((int32_t)31))))), ((int32_t)((int32_t)L_15>>(int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)31))))), 0, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		RenderTexture_t55 * L_20 = V_0;
		NullCheck(L_20);
		Texture_set_filterMode_m298(L_20, 1, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		int32_t L_21 = (__this->___quality_6);
		V_1 = L_21;
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22*(int32_t)2));
		RenderTexture_t55 * L_23 = ___source;
		RenderTexture_t55 * L_24 = V_0;
		Material_t5 * L_25 = (__this->___tiltShiftMaterial_11);
		int32_t L_26 = (__this->___mode_5);
		G_B8_0 = L_25;
		G_B8_1 = L_24;
		G_B8_2 = L_23;
		if (L_26)
		{
			G_B9_0 = L_25;
			G_B9_1 = L_24;
			G_B9_2 = L_23;
			goto IL_00cb;
		}
	}
	{
		int32_t L_27 = V_1;
		G_B10_0 = L_27;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_00ce;
	}

IL_00cb:
	{
		int32_t L_28 = V_1;
		G_B10_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_00ce:
	{
		Graphics_Blit_m275(NULL /*static, unused*/, G_B10_3, G_B10_2, G_B10_1, G_B10_0, /*hidden argument*/NULL);
		int32_t L_29 = (__this->___downsample_9);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00fe;
		}
	}
	{
		Material_t5 * L_30 = (__this->___tiltShiftMaterial_11);
		RenderTexture_t55 * L_31 = V_0;
		NullCheck(L_30);
		Material_SetTexture_m292(L_30, _stringLiteral142, L_31, /*hidden argument*/NULL);
		RenderTexture_t55 * L_32 = ___source;
		RenderTexture_t55 * L_33 = ___destination;
		Material_t5 * L_34 = (__this->___tiltShiftMaterial_11);
		Graphics_Blit_m275(NULL /*static, unused*/, L_32, L_33, L_34, 6, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		RenderTexture_t55 * L_35 = V_0;
		RenderTexture_t55 * L_36 = ___destination;
		bool L_37 = Object_op_Inequality_m268(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0110;
		}
	}
	{
		RenderTexture_t55 * L_38 = V_0;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
	}

IL_0110:
	{
		return;
	}
}
// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_60.h"
// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_60MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_61.h"
// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_61MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.Tonemapping
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_62.h"
// UnityStandardAssets.ImageEffects.Tonemapping
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_62MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void Tonemapping__ctor_m192 (Tonemapping_t82 * __this, const MethodInfo* method)
{
	{
		__this->___type_5 = 3;
		__this->___adaptiveTextureSize_6 = ((int32_t)256);
		__this->___exposureAdjustment_9 = (1.5f);
		__this->___middleGrey_10 = (0.4f);
		__this->___white_11 = (2.0f);
		__this->___adaptionSpeed_12 = (1.5f);
		__this->___validRenderTextureFormat_14 = 1;
		__this->___rtFormat_17 = 2;
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CheckResources()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern TypeInfo* Texture2D_t13_il2cpp_TypeInfo_var;
extern "C" bool Tonemapping_CheckResources_m193 (Tonemapping_t82 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		PostEffectsBase_CheckSupport_m152(__this, 0, 1, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___tonemapper_13);
		Material_t5 * L_1 = (__this->___tonemapMaterial_15);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___tonemapMaterial_15 = L_2;
		Texture2D_t13 * L_3 = (__this->___curveTex_8);
		bool L_4 = Object_op_Implicit_m294(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_5 = (__this->___type_5);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		Texture2D_t13 * L_6 = (Texture2D_t13 *)il2cpp_codegen_object_new (Texture2D_t13_il2cpp_TypeInfo_var);
		Texture2D__ctor_m366(L_6, ((int32_t)256), 1, 5, 0, 1, /*hidden argument*/NULL);
		__this->___curveTex_8 = L_6;
		Texture2D_t13 * L_7 = (__this->___curveTex_8);
		NullCheck(L_7);
		Texture_set_filterMode_m298(L_7, 1, /*hidden argument*/NULL);
		Texture2D_t13 * L_8 = (__this->___curveTex_8);
		NullCheck(L_8);
		Texture_set_wrapMode_m324(L_8, 1, /*hidden argument*/NULL);
		Texture2D_t13 * L_9 = (__this->___curveTex_8);
		NullCheck(L_9);
		Object_set_hideFlags_m301(L_9, ((int32_t)52), /*hidden argument*/NULL);
	}

IL_0076:
	{
		bool L_10 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_10)
		{
			goto IL_0087;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0087:
	{
		bool L_11 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_11;
	}
}
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern TypeInfo* KeyframeU5BU5D_t106_il2cpp_TypeInfo_var;
extern TypeInfo* AnimationCurve_t35_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" float Tonemapping_UpdateCurve_m194 (Tonemapping_t82 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyframeU5BU5D_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		AnimationCurve_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Keyframe_t107  V_3 = {0};
	{
		V_0 = (1.0f);
		AnimationCurve_t35 * L_0 = (__this->___remapCurve_7);
		NullCheck(L_0);
		KeyframeU5BU5D_t106* L_1 = AnimationCurve_get_keys_m448(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		KeyframeU5BU5D_t106* L_2 = ((KeyframeU5BU5D_t106*)SZArrayNew(KeyframeU5BU5D_t106_il2cpp_TypeInfo_var, 2));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		Keyframe_t107  L_3 = {0};
		Keyframe__ctor_m364(&L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_2, 0, sizeof(Keyframe_t107 ))) = L_3;
		KeyframeU5BU5D_t106* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		Keyframe_t107  L_5 = {0};
		Keyframe__ctor_m364(&L_5, (2.0f), (1.0f), /*hidden argument*/NULL);
		*((Keyframe_t107 *)(Keyframe_t107 *)SZArrayLdElema(L_4, 1, sizeof(Keyframe_t107 ))) = L_5;
		AnimationCurve_t35 * L_6 = (AnimationCurve_t35 *)il2cpp_codegen_object_new (AnimationCurve_t35_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m365(L_6, L_4, /*hidden argument*/NULL);
		__this->___remapCurve_7 = L_6;
	}

IL_0060:
	{
		AnimationCurve_t35 * L_7 = (__this->___remapCurve_7);
		if (!L_7)
		{
			goto IL_00fc;
		}
	}
	{
		AnimationCurve_t35 * L_8 = (__this->___remapCurve_7);
		NullCheck(L_8);
		int32_t L_9 = AnimationCurve_get_length_m449(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_009d;
		}
	}
	{
		AnimationCurve_t35 * L_10 = (__this->___remapCurve_7);
		AnimationCurve_t35 * L_11 = (__this->___remapCurve_7);
		NullCheck(L_11);
		int32_t L_12 = AnimationCurve_get_length_m449(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Keyframe_t107  L_13 = AnimationCurve_get_Item_m450(L_10, ((int32_t)((int32_t)L_12-(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_13;
		float L_14 = Keyframe_get_time_m451((&V_3), /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_009d:
	{
		V_1 = (0.0f);
		goto IL_00e6;
	}

IL_00a8:
	{
		AnimationCurve_t35 * L_15 = (__this->___remapCurve_7);
		float L_16 = V_1;
		float L_17 = V_0;
		NullCheck(L_15);
		float L_18 = AnimationCurve_Evaluate_m367(L_15, ((float)((float)((float)((float)L_16*(float)(1.0f)))*(float)L_17)), /*hidden argument*/NULL);
		V_2 = L_18;
		Texture2D_t13 * L_19 = (__this->___curveTex_8);
		float L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_21 = floorf(((float)((float)L_20*(float)(255.0f))));
		float L_22 = V_2;
		float L_23 = V_2;
		float L_24 = V_2;
		Color_t12  L_25 = {0};
		Color__ctor_m369(&L_25, L_22, L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_19);
		Texture2D_SetPixel_m370(L_19, (((int32_t)L_21)), 0, L_25, /*hidden argument*/NULL);
		float L_26 = V_1;
		V_1 = ((float)((float)L_26+(float)(0.003921569f)));
	}

IL_00e6:
	{
		float L_27 = V_1;
		if ((((float)L_27) <= ((float)(1.0f))))
		{
			goto IL_00a8;
		}
	}
	{
		Texture2D_t13 * L_28 = (__this->___curveTex_8);
		NullCheck(L_28);
		Texture2D_Apply_m371(L_28, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		float L_29 = V_0;
		return ((float)((float)(1.0f)/(float)L_29));
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnDisable()
extern "C" void Tonemapping_OnDisable_m195 (Tonemapping_t82 * __this, const MethodInfo* method)
{
	{
		RenderTexture_t55 * L_0 = (__this->___rt_16);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RenderTexture_t55 * L_2 = (__this->___rt_16);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___rt_16 = (RenderTexture_t55 *)NULL;
	}

IL_0022:
	{
		Material_t5 * L_3 = (__this->___tonemapMaterial_15);
		bool L_4 = Object_op_Implicit_m294(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		Material_t5 * L_5 = (__this->___tonemapMaterial_15);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___tonemapMaterial_15 = (Material_t5 *)NULL;
	}

IL_0044:
	{
		Texture2D_t13 * L_6 = (__this->___curveTex_8);
		bool L_7 = Object_op_Implicit_m294(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		Texture2D_t13 * L_8 = (__this->___curveTex_8);
		Object_DestroyImmediate_m297(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		__this->___curveTex_8 = (Texture2D_t13 *)NULL;
	}

IL_0066:
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern TypeInfo* RenderTexture_t55_il2cpp_TypeInfo_var;
extern "C" bool Tonemapping_CreateInternalRenderTexture_m196 (Tonemapping_t82 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RenderTexture_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	Tonemapping_t82 * G_B4_0 = {0};
	Tonemapping_t82 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	Tonemapping_t82 * G_B5_1 = {0};
	{
		RenderTexture_t55 * L_0 = (__this->___rt_16);
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		bool L_2 = SystemInfo_SupportsRenderTextureFormat_m321(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		G_B3_0 = __this;
		if (!L_2)
		{
			G_B4_0 = __this;
			goto IL_0026;
		}
	}
	{
		G_B5_0 = ((int32_t)13);
		G_B5_1 = G_B3_0;
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B4_0;
	}

IL_0027:
	{
		NullCheck(G_B5_1);
		G_B5_1->___rtFormat_17 = G_B5_0;
		int32_t L_3 = (__this->___rtFormat_17);
		RenderTexture_t55 * L_4 = (RenderTexture_t55 *)il2cpp_codegen_object_new (RenderTexture_t55_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m452(L_4, 1, 1, 0, L_3, /*hidden argument*/NULL);
		__this->___rt_16 = L_4;
		RenderTexture_t55 * L_5 = (__this->___rt_16);
		NullCheck(L_5);
		Object_set_hideFlags_m301(L_5, ((int32_t)52), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityStandardAssets.ImageEffects.Tonemapping
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_62MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern TypeInfo* RenderTextureU5BU5D_t43_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral143;
extern Il2CppCodeGenString* _stringLiteral144;
extern Il2CppCodeGenString* _stringLiteral145;
extern Il2CppCodeGenString* _stringLiteral146;
extern Il2CppCodeGenString* _stringLiteral147;
extern Il2CppCodeGenString* _stringLiteral148;
extern Il2CppCodeGenString* _stringLiteral149;
extern "C" void Tonemapping_OnRenderImage_m197 (Tonemapping_t82 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RenderTextureU5BU5D_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral143 = il2cpp_codegen_string_literal_from_index(143);
		_stringLiteral144 = il2cpp_codegen_string_literal_from_index(144);
		_stringLiteral145 = il2cpp_codegen_string_literal_from_index(145);
		_stringLiteral146 = il2cpp_codegen_string_literal_from_index(146);
		_stringLiteral147 = il2cpp_codegen_string_literal_from_index(147);
		_stringLiteral148 = il2cpp_codegen_string_literal_from_index(148);
		_stringLiteral149 = il2cpp_codegen_string_literal_from_index(149);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	RenderTexture_t55 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RenderTextureU5BU5D_t43* V_5 = {0};
	int32_t V_6 = 0;
	RenderTexture_t55 * V_7 = {0};
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Tonemapping_t82 * G_B4_0 = {0};
	Tonemapping_t82 * G_B3_0 = {0};
	float G_B5_0 = 0.0f;
	Tonemapping_t82 * G_B5_1 = {0};
	Tonemapping_t82 * G_B29_0 = {0};
	Tonemapping_t82 * G_B28_0 = {0};
	float G_B30_0 = 0.0f;
	Tonemapping_t82 * G_B30_1 = {0};
	Material_t5 * G_B32_0 = {0};
	RenderTexture_t55 * G_B32_1 = {0};
	RenderTexture_t55 * G_B32_2 = {0};
	Material_t5 * G_B31_0 = {0};
	RenderTexture_t55 * G_B31_1 = {0};
	RenderTexture_t55 * G_B31_2 = {0};
	int32_t G_B33_0 = 0;
	Material_t5 * G_B33_1 = {0};
	RenderTexture_t55 * G_B33_2 = {0};
	RenderTexture_t55 * G_B33_3 = {0};
	Tonemapping_t82 * G_B35_0 = {0};
	Tonemapping_t82 * G_B34_0 = {0};
	float G_B36_0 = 0.0f;
	Tonemapping_t82 * G_B36_1 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		float L_3 = (__this->___exposureAdjustment_9);
		G_B3_0 = __this;
		if ((!(((float)L_3) < ((float)(0.001f)))))
		{
			G_B4_0 = __this;
			goto IL_002e;
		}
	}
	{
		G_B5_0 = (0.001f);
		G_B5_1 = G_B3_0;
		goto IL_0034;
	}

IL_002e:
	{
		float L_4 = (__this->___exposureAdjustment_9);
		G_B5_0 = L_4;
		G_B5_1 = G_B4_0;
	}

IL_0034:
	{
		NullCheck(G_B5_1);
		G_B5_1->___exposureAdjustment_9 = G_B5_0;
		int32_t L_5 = (__this->___type_5);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		float L_6 = Tonemapping_UpdateCurve_m194(__this, /*hidden argument*/NULL);
		V_0 = L_6;
		Material_t5 * L_7 = (__this->___tonemapMaterial_15);
		float L_8 = V_0;
		NullCheck(L_7);
		Material_SetFloat_m269(L_7, _stringLiteral143, L_8, /*hidden argument*/NULL);
		Material_t5 * L_9 = (__this->___tonemapMaterial_15);
		Texture2D_t13 * L_10 = (__this->___curveTex_8);
		NullCheck(L_9);
		Material_SetTexture_m292(L_9, _stringLiteral144, L_10, /*hidden argument*/NULL);
		RenderTexture_t55 * L_11 = ___source;
		RenderTexture_t55 * L_12 = ___destination;
		Material_t5 * L_13 = (__this->___tonemapMaterial_15);
		Graphics_Blit_m275(NULL /*static, unused*/, L_11, L_12, L_13, 4, /*hidden argument*/NULL);
		return;
	}

IL_0082:
	{
		int32_t L_14 = (__this->___type_5);
		if (L_14)
		{
			goto IL_00b2;
		}
	}
	{
		Material_t5 * L_15 = (__this->___tonemapMaterial_15);
		float L_16 = (__this->___exposureAdjustment_9);
		NullCheck(L_15);
		Material_SetFloat_m269(L_15, _stringLiteral145, L_16, /*hidden argument*/NULL);
		RenderTexture_t55 * L_17 = ___source;
		RenderTexture_t55 * L_18 = ___destination;
		Material_t5 * L_19 = (__this->___tonemapMaterial_15);
		Graphics_Blit_m275(NULL /*static, unused*/, L_17, L_18, L_19, 6, /*hidden argument*/NULL);
		return;
	}

IL_00b2:
	{
		int32_t L_20 = (__this->___type_5);
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_00e3;
		}
	}
	{
		Material_t5 * L_21 = (__this->___tonemapMaterial_15);
		float L_22 = (__this->___exposureAdjustment_9);
		NullCheck(L_21);
		Material_SetFloat_m269(L_21, _stringLiteral145, L_22, /*hidden argument*/NULL);
		RenderTexture_t55 * L_23 = ___source;
		RenderTexture_t55 * L_24 = ___destination;
		Material_t5 * L_25 = (__this->___tonemapMaterial_15);
		Graphics_Blit_m275(NULL /*static, unused*/, L_23, L_24, L_25, 5, /*hidden argument*/NULL);
		return;
	}

IL_00e3:
	{
		int32_t L_26 = (__this->___type_5);
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_0114;
		}
	}
	{
		Material_t5 * L_27 = (__this->___tonemapMaterial_15);
		float L_28 = (__this->___exposureAdjustment_9);
		NullCheck(L_27);
		Material_SetFloat_m269(L_27, _stringLiteral145, L_28, /*hidden argument*/NULL);
		RenderTexture_t55 * L_29 = ___source;
		RenderTexture_t55 * L_30 = ___destination;
		Material_t5 * L_31 = (__this->___tonemapMaterial_15);
		Graphics_Blit_m275(NULL /*static, unused*/, L_29, L_30, L_31, 8, /*hidden argument*/NULL);
		return;
	}

IL_0114:
	{
		int32_t L_32 = (__this->___type_5);
		if ((!(((uint32_t)L_32) == ((uint32_t)4))))
		{
			goto IL_014b;
		}
	}
	{
		Material_t5 * L_33 = (__this->___tonemapMaterial_15);
		float L_34 = (__this->___exposureAdjustment_9);
		NullCheck(L_33);
		Material_SetFloat_m269(L_33, _stringLiteral145, ((float)((float)(0.5f)*(float)L_34)), /*hidden argument*/NULL);
		RenderTexture_t55 * L_35 = ___source;
		RenderTexture_t55 * L_36 = ___destination;
		Material_t5 * L_37 = (__this->___tonemapMaterial_15);
		Graphics_Blit_m275(NULL /*static, unused*/, L_35, L_36, L_37, 7, /*hidden argument*/NULL);
		return;
	}

IL_014b:
	{
		bool L_38 = Tonemapping_CreateInternalRenderTexture_m196(__this, /*hidden argument*/NULL);
		V_1 = L_38;
		int32_t L_39 = (__this->___adaptiveTextureSize_6);
		int32_t L_40 = (__this->___adaptiveTextureSize_6);
		int32_t L_41 = (__this->___rtFormat_17);
		RenderTexture_t55 * L_42 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_39, L_40, 0, L_41, /*hidden argument*/NULL);
		V_2 = L_42;
		RenderTexture_t55 * L_43 = ___source;
		RenderTexture_t55 * L_44 = V_2;
		Graphics_Blit_m267(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		RenderTexture_t55 * L_45 = V_2;
		NullCheck(L_45);
		int32_t L_46 = RenderTexture_get_width_m272(L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_47 = Mathf_Log_m453(NULL /*static, unused*/, ((float)((float)(((float)L_46))*(float)(1.0f))), (2.0f), /*hidden argument*/NULL);
		V_3 = (((int32_t)L_47));
		V_4 = 2;
		int32_t L_48 = V_3;
		V_5 = ((RenderTextureU5BU5D_t43*)SZArrayNew(RenderTextureU5BU5D_t43_il2cpp_TypeInfo_var, L_48));
		V_6 = 0;
		goto IL_01cd;
	}

IL_019e:
	{
		RenderTextureU5BU5D_t43* L_49 = V_5;
		int32_t L_50 = V_6;
		RenderTexture_t55 * L_51 = V_2;
		NullCheck(L_51);
		int32_t L_52 = RenderTexture_get_width_m272(L_51, /*hidden argument*/NULL);
		int32_t L_53 = V_4;
		RenderTexture_t55 * L_54 = V_2;
		NullCheck(L_54);
		int32_t L_55 = RenderTexture_get_width_m272(L_54, /*hidden argument*/NULL);
		int32_t L_56 = V_4;
		int32_t L_57 = (__this->___rtFormat_17);
		RenderTexture_t55 * L_58 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_52/(int32_t)L_53)), ((int32_t)((int32_t)L_55/(int32_t)L_56)), 0, L_57, /*hidden argument*/NULL);
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		ArrayElementTypeCheck (L_49, L_58);
		*((RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_49, L_50, sizeof(RenderTexture_t55 *))) = (RenderTexture_t55 *)L_58;
		int32_t L_59 = V_4;
		V_4 = ((int32_t)((int32_t)L_59*(int32_t)2));
		int32_t L_60 = V_6;
		V_6 = ((int32_t)((int32_t)L_60+(int32_t)1));
	}

IL_01cd:
	{
		int32_t L_61 = V_6;
		int32_t L_62 = V_3;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_019e;
		}
	}
	{
		RenderTextureU5BU5D_t43* L_63 = V_5;
		int32_t L_64 = V_3;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, ((int32_t)((int32_t)L_64-(int32_t)1)));
		int32_t L_65 = ((int32_t)((int32_t)L_64-(int32_t)1));
		V_7 = (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_63, L_65, sizeof(RenderTexture_t55 *)));
		RenderTexture_t55 * L_66 = V_2;
		RenderTextureU5BU5D_t43* L_67 = V_5;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, 0);
		int32_t L_68 = 0;
		Material_t5 * L_69 = (__this->___tonemapMaterial_15);
		Graphics_Blit_m275(NULL /*static, unused*/, L_66, (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_67, L_68, sizeof(RenderTexture_t55 *))), L_69, 1, /*hidden argument*/NULL);
		int32_t L_70 = (__this->___type_5);
		if ((!(((uint32_t)L_70) == ((uint32_t)6))))
		{
			goto IL_0239;
		}
	}
	{
		V_8 = 0;
		goto IL_022a;
	}

IL_0202:
	{
		RenderTextureU5BU5D_t43* L_71 = V_5;
		int32_t L_72 = V_8;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		int32_t L_73 = L_72;
		RenderTextureU5BU5D_t43* L_74 = V_5;
		int32_t L_75 = V_8;
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, ((int32_t)((int32_t)L_75+(int32_t)1)));
		int32_t L_76 = ((int32_t)((int32_t)L_75+(int32_t)1));
		Material_t5 * L_77 = (__this->___tonemapMaterial_15);
		Graphics_Blit_m275(NULL /*static, unused*/, (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_71, L_73, sizeof(RenderTexture_t55 *))), (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_74, L_76, sizeof(RenderTexture_t55 *))), L_77, ((int32_t)9), /*hidden argument*/NULL);
		RenderTextureU5BU5D_t43* L_78 = V_5;
		int32_t L_79 = V_8;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, ((int32_t)((int32_t)L_79+(int32_t)1)));
		int32_t L_80 = ((int32_t)((int32_t)L_79+(int32_t)1));
		V_7 = (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_78, L_80, sizeof(RenderTexture_t55 *)));
		int32_t L_81 = V_8;
		V_8 = ((int32_t)((int32_t)L_81+(int32_t)1));
	}

IL_022a:
	{
		int32_t L_82 = V_8;
		int32_t L_83 = V_3;
		if ((((int32_t)L_82) < ((int32_t)((int32_t)((int32_t)L_83-(int32_t)1)))))
		{
			goto IL_0202;
		}
	}
	{
		goto IL_0277;
	}

IL_0239:
	{
		int32_t L_84 = (__this->___type_5);
		if ((!(((uint32_t)L_84) == ((uint32_t)5))))
		{
			goto IL_0277;
		}
	}
	{
		V_9 = 0;
		goto IL_026d;
	}

IL_024d:
	{
		RenderTextureU5BU5D_t43* L_85 = V_5;
		int32_t L_86 = V_9;
		NullCheck(L_85);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_85, L_86);
		int32_t L_87 = L_86;
		RenderTextureU5BU5D_t43* L_88 = V_5;
		int32_t L_89 = V_9;
		NullCheck(L_88);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_88, ((int32_t)((int32_t)L_89+(int32_t)1)));
		int32_t L_90 = ((int32_t)((int32_t)L_89+(int32_t)1));
		Graphics_Blit_m267(NULL /*static, unused*/, (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_85, L_87, sizeof(RenderTexture_t55 *))), (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_88, L_90, sizeof(RenderTexture_t55 *))), /*hidden argument*/NULL);
		RenderTextureU5BU5D_t43* L_91 = V_5;
		int32_t L_92 = V_9;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, ((int32_t)((int32_t)L_92+(int32_t)1)));
		int32_t L_93 = ((int32_t)((int32_t)L_92+(int32_t)1));
		V_7 = (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_91, L_93, sizeof(RenderTexture_t55 *)));
		int32_t L_94 = V_9;
		V_9 = ((int32_t)((int32_t)L_94+(int32_t)1));
	}

IL_026d:
	{
		int32_t L_95 = V_9;
		int32_t L_96 = V_3;
		if ((((int32_t)L_95) < ((int32_t)((int32_t)((int32_t)L_96-(int32_t)1)))))
		{
			goto IL_024d;
		}
	}

IL_0277:
	{
		float L_97 = (__this->___adaptionSpeed_12);
		G_B28_0 = __this;
		if ((!(((float)L_97) < ((float)(0.001f)))))
		{
			G_B29_0 = __this;
			goto IL_0292;
		}
	}
	{
		G_B30_0 = (0.001f);
		G_B30_1 = G_B28_0;
		goto IL_0298;
	}

IL_0292:
	{
		float L_98 = (__this->___adaptionSpeed_12);
		G_B30_0 = L_98;
		G_B30_1 = G_B29_0;
	}

IL_0298:
	{
		NullCheck(G_B30_1);
		G_B30_1->___adaptionSpeed_12 = G_B30_0;
		Material_t5 * L_99 = (__this->___tonemapMaterial_15);
		float L_100 = (__this->___adaptionSpeed_12);
		NullCheck(L_99);
		Material_SetFloat_m269(L_99, _stringLiteral146, L_100, /*hidden argument*/NULL);
		RenderTexture_t55 * L_101 = (__this->___rt_16);
		NullCheck(L_101);
		RenderTexture_MarkRestoreExpected_m289(L_101, /*hidden argument*/NULL);
		RenderTexture_t55 * L_102 = V_7;
		RenderTexture_t55 * L_103 = (__this->___rt_16);
		Material_t5 * L_104 = (__this->___tonemapMaterial_15);
		bool L_105 = V_1;
		G_B31_0 = L_104;
		G_B31_1 = L_103;
		G_B31_2 = L_102;
		if (!L_105)
		{
			G_B32_0 = L_104;
			G_B32_1 = L_103;
			G_B32_2 = L_102;
			goto IL_02d8;
		}
	}
	{
		G_B33_0 = 3;
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		G_B33_3 = G_B31_2;
		goto IL_02d9;
	}

IL_02d8:
	{
		G_B33_0 = 2;
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
		G_B33_3 = G_B32_2;
	}

IL_02d9:
	{
		Graphics_Blit_m275(NULL /*static, unused*/, G_B33_3, G_B33_2, G_B33_1, G_B33_0, /*hidden argument*/NULL);
		float L_106 = (__this->___middleGrey_10);
		G_B34_0 = __this;
		if ((!(((float)L_106) < ((float)(0.001f)))))
		{
			G_B35_0 = __this;
			goto IL_02f9;
		}
	}
	{
		G_B36_0 = (0.001f);
		G_B36_1 = G_B34_0;
		goto IL_02ff;
	}

IL_02f9:
	{
		float L_107 = (__this->___middleGrey_10);
		G_B36_0 = L_107;
		G_B36_1 = G_B35_0;
	}

IL_02ff:
	{
		NullCheck(G_B36_1);
		G_B36_1->___middleGrey_10 = G_B36_0;
		Material_t5 * L_108 = (__this->___tonemapMaterial_15);
		float L_109 = (__this->___middleGrey_10);
		float L_110 = (__this->___middleGrey_10);
		float L_111 = (__this->___middleGrey_10);
		float L_112 = (__this->___white_11);
		float L_113 = (__this->___white_11);
		Vector4_t100  L_114 = {0};
		Vector4__ctor_m284(&L_114, L_109, L_110, L_111, ((float)((float)L_112*(float)L_113)), /*hidden argument*/NULL);
		NullCheck(L_108);
		Material_SetVector_m285(L_108, _stringLiteral147, L_114, /*hidden argument*/NULL);
		Material_t5 * L_115 = (__this->___tonemapMaterial_15);
		RenderTexture_t55 * L_116 = (__this->___rt_16);
		NullCheck(L_115);
		Material_SetTexture_m292(L_115, _stringLiteral148, L_116, /*hidden argument*/NULL);
		int32_t L_117 = (__this->___type_5);
		if ((!(((uint32_t)L_117) == ((uint32_t)5))))
		{
			goto IL_036d;
		}
	}
	{
		RenderTexture_t55 * L_118 = ___source;
		RenderTexture_t55 * L_119 = ___destination;
		Material_t5 * L_120 = (__this->___tonemapMaterial_15);
		Graphics_Blit_m275(NULL /*static, unused*/, L_118, L_119, L_120, 0, /*hidden argument*/NULL);
		goto IL_039e;
	}

IL_036d:
	{
		int32_t L_121 = (__this->___type_5);
		if ((!(((uint32_t)L_121) == ((uint32_t)6))))
		{
			goto IL_038d;
		}
	}
	{
		RenderTexture_t55 * L_122 = ___source;
		RenderTexture_t55 * L_123 = ___destination;
		Material_t5 * L_124 = (__this->___tonemapMaterial_15);
		Graphics_Blit_m275(NULL /*static, unused*/, L_122, L_123, L_124, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_039e;
	}

IL_038d:
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral149, /*hidden argument*/NULL);
		RenderTexture_t55 * L_125 = ___source;
		RenderTexture_t55 * L_126 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_125, L_126, /*hidden argument*/NULL);
	}

IL_039e:
	{
		V_10 = 0;
		goto IL_03b6;
	}

IL_03a6:
	{
		RenderTextureU5BU5D_t43* L_127 = V_5;
		int32_t L_128 = V_10;
		NullCheck(L_127);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_127, L_128);
		int32_t L_129 = L_128;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, (*(RenderTexture_t55 **)(RenderTexture_t55 **)SZArrayLdElema(L_127, L_129, sizeof(RenderTexture_t55 *))), /*hidden argument*/NULL);
		int32_t L_130 = V_10;
		V_10 = ((int32_t)((int32_t)L_130+(int32_t)1));
	}

IL_03b6:
	{
		int32_t L_131 = V_10;
		int32_t L_132 = V_3;
		if ((((int32_t)L_131) < ((int32_t)L_132)))
		{
			goto IL_03a6;
		}
	}
	{
		RenderTexture_t55 * L_133 = V_2;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_133, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.Triangles
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_63.h"
// UnityStandardAssets.ImageEffects.Triangles
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_63MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.Triangles::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Triangles__ctor_m198 (Triangles_t83 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::.cctor()
extern "C" void Triangles__cctor_m199 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* Triangles_t83_il2cpp_TypeInfo_var;
extern "C" bool Triangles_HasMeshes_m200 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Triangles_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_0 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		V_0 = 0;
		goto IL_002b;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_1 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		bool L_4 = Object_op_Equality_m295(NULL /*static, unused*/, (Object_t99 *)NULL, (*(Mesh_t98 **)(Mesh_t98 **)SZArrayLdElema(L_1, L_3, sizeof(Mesh_t98 *))), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		return 0;
	}

IL_0027:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_7 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		return 1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::Cleanup()
extern TypeInfo* Triangles_t83_il2cpp_TypeInfo_var;
extern "C" void Triangles_Cleanup_m201 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Triangles_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_0 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_1 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		bool L_4 = Object_op_Inequality_m268(NULL /*static, unused*/, (Object_t99 *)NULL, (*(Mesh_t98 **)(Mesh_t98 **)SZArrayLdElema(L_1, L_3, sizeof(Mesh_t98 *))), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_5 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_DestroyImmediate_m297(NULL /*static, unused*/, (*(Mesh_t98 **)(Mesh_t98 **)SZArrayLdElema(L_5, L_7, sizeof(Mesh_t98 *))), /*hidden argument*/NULL);
		MeshU5BU5D_t67* L_8 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, NULL);
		*((Mesh_t98 **)(Mesh_t98 **)SZArrayLdElema(L_8, L_9, sizeof(Mesh_t98 *))) = (Mesh_t98 *)NULL;
	}

IL_0038:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_12 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0 = (MeshU5BU5D_t67*)NULL;
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::GetMeshes(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityStandardAssets.ImageEffects.Triangles
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_63MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Triangles_t83_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern TypeInfo* MeshU5BU5D_t67_il2cpp_TypeInfo_var;
extern "C" MeshU5BU5D_t67* Triangles_GetMeshes_m202 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Triangles_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		MeshU5BU5D_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		bool L_0 = Triangles_HasMeshes_m200(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___currentTris_1;
		int32_t L_2 = ___totalWidth;
		int32_t L_3 = ___totalHeight;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)((int32_t)L_2*(int32_t)L_3))))))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_4 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		return L_4;
	}

IL_001d:
	{
		V_0 = ((int32_t)21666);
		int32_t L_5 = ___totalWidth;
		int32_t L_6 = ___totalHeight;
		V_1 = ((int32_t)((int32_t)L_5*(int32_t)L_6));
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___currentTris_1 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_CeilToInt_m437(NULL /*static, unused*/, ((float)((float)((float)((float)(1.0f)*(float)(((float)L_8))))/(float)((float)((float)(1.0f)*(float)(((float)L_9)))))), /*hidden argument*/NULL);
		V_2 = L_10;
		int32_t L_11 = V_2;
		((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0 = ((MeshU5BU5D_t67*)SZArrayNew(MeshU5BU5D_t67_il2cpp_TypeInfo_var, L_11));
		V_3 = 0;
		V_4 = 0;
		V_3 = 0;
		goto IL_0089;
	}

IL_005b:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_15 = Mathf_Clamp_m438(NULL /*static, unused*/, ((int32_t)((int32_t)L_12-(int32_t)L_13)), 0, L_14, /*hidden argument*/NULL);
		int32_t L_16 = Mathf_FloorToInt_m377(NULL /*static, unused*/, (((float)L_15)), /*hidden argument*/NULL);
		V_5 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_17 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		int32_t L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = V_3;
		int32_t L_21 = ___totalWidth;
		int32_t L_22 = ___totalHeight;
		Mesh_t98 * L_23 = Triangles_GetMesh_m203(NULL /*static, unused*/, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		ArrayElementTypeCheck (L_17, L_23);
		*((Mesh_t98 **)(Mesh_t98 **)SZArrayLdElema(L_17, L_18, sizeof(Mesh_t98 *))) = (Mesh_t98 *)L_23;
		int32_t L_24 = V_4;
		V_4 = ((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		V_3 = ((int32_t)((int32_t)L_25+(int32_t)L_26));
	}

IL_0089:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t83_il2cpp_TypeInfo_var);
		MeshU5BU5D_t67* L_29 = ((Triangles_t83_StaticFields*)Triangles_t83_il2cpp_TypeInfo_var->static_fields)->___meshes_0;
		return L_29;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* Mesh_t98_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3U5BU5D_t111_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2U5BU5D_t103_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" Mesh_t98 * Triangles_GetMesh_m203 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mesh_t98_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Vector3U5BU5D_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Vector2U5BU5D_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Mesh_t98 * V_0 = {0};
	Vector3U5BU5D_t111* V_1 = {0};
	Vector2U5BU5D_t103* V_2 = {0};
	Vector2U5BU5D_t103* V_3 = {0};
	Int32U5BU5D_t109* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t28  V_10 = {0};
	{
		Mesh_t98 * L_0 = (Mesh_t98 *)il2cpp_codegen_object_new (Mesh_t98_il2cpp_TypeInfo_var);
		Mesh__ctor_m439(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Mesh_t98 * L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_m301(L_1, ((int32_t)52), /*hidden argument*/NULL);
		int32_t L_2 = ___triCount;
		V_1 = ((Vector3U5BU5D_t111*)SZArrayNew(Vector3U5BU5D_t111_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)3))));
		int32_t L_3 = ___triCount;
		V_2 = ((Vector2U5BU5D_t103*)SZArrayNew(Vector2U5BU5D_t103_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_3*(int32_t)3))));
		int32_t L_4 = ___triCount;
		V_3 = ((Vector2U5BU5D_t103*)SZArrayNew(Vector2U5BU5D_t103_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_4*(int32_t)3))));
		int32_t L_5 = ___triCount;
		V_4 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_5*(int32_t)3))));
		V_5 = 0;
		goto IL_017f;
	}

IL_003b:
	{
		int32_t L_6 = V_5;
		V_6 = ((int32_t)((int32_t)L_6*(int32_t)3));
		int32_t L_7 = ___triOffset;
		int32_t L_8 = V_5;
		V_7 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		int32_t L_9 = V_7;
		int32_t L_10 = ___totalWidth;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_11 = floorf((((float)((int32_t)((int32_t)L_9%(int32_t)L_10)))));
		int32_t L_12 = ___totalWidth;
		V_8 = ((float)((float)L_11/(float)(((float)L_12))));
		int32_t L_13 = V_7;
		int32_t L_14 = ___totalWidth;
		float L_15 = floorf((((float)((int32_t)((int32_t)L_13/(int32_t)L_14)))));
		int32_t L_16 = ___totalHeight;
		V_9 = ((float)((float)L_15/(float)(((float)L_16))));
		float L_17 = V_8;
		float L_18 = V_9;
		Vector3__ctor_m396((&V_10), ((float)((float)((float)((float)L_17*(float)(2.0f)))-(float)(1.0f))), ((float)((float)((float)((float)L_18*(float)(2.0f)))-(float)(1.0f))), (1.0f), /*hidden argument*/NULL);
		Vector3U5BU5D_t111* L_19 = V_1;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		Vector3_t28  L_21 = V_10;
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_19, L_20, sizeof(Vector3_t28 ))) = L_21;
		Vector3U5BU5D_t111* L_22 = V_1;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, ((int32_t)((int32_t)L_23+(int32_t)1)));
		Vector3_t28  L_24 = V_10;
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_22, ((int32_t)((int32_t)L_23+(int32_t)1)), sizeof(Vector3_t28 ))) = L_24;
		Vector3U5BU5D_t111* L_25 = V_1;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)((int32_t)L_26+(int32_t)2)));
		Vector3_t28  L_27 = V_10;
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_25, ((int32_t)((int32_t)L_26+(int32_t)2)), sizeof(Vector3_t28 ))) = L_27;
		Vector2U5BU5D_t103* L_28 = V_2;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		Vector2_t85  L_30 = {0};
		Vector2__ctor_m305(&L_30, (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_28, L_29, sizeof(Vector2_t85 ))) = L_30;
		Vector2U5BU5D_t103* L_31 = V_2;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)((int32_t)L_32+(int32_t)1)));
		Vector2_t85  L_33 = {0};
		Vector2__ctor_m305(&L_33, (1.0f), (0.0f), /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_31, ((int32_t)((int32_t)L_32+(int32_t)1)), sizeof(Vector2_t85 ))) = L_33;
		Vector2U5BU5D_t103* L_34 = V_2;
		int32_t L_35 = V_6;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)2)));
		Vector2_t85  L_36 = {0};
		Vector2__ctor_m305(&L_36, (0.0f), (1.0f), /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_34, ((int32_t)((int32_t)L_35+(int32_t)2)), sizeof(Vector2_t85 ))) = L_36;
		Vector2U5BU5D_t103* L_37 = V_3;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		float L_39 = V_8;
		float L_40 = V_9;
		Vector2_t85  L_41 = {0};
		Vector2__ctor_m305(&L_41, L_39, L_40, /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_37, L_38, sizeof(Vector2_t85 ))) = L_41;
		Vector2U5BU5D_t103* L_42 = V_3;
		int32_t L_43 = V_6;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)L_43+(int32_t)1)));
		float L_44 = V_8;
		float L_45 = V_9;
		Vector2_t85  L_46 = {0};
		Vector2__ctor_m305(&L_46, L_44, L_45, /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_42, ((int32_t)((int32_t)L_43+(int32_t)1)), sizeof(Vector2_t85 ))) = L_46;
		Vector2U5BU5D_t103* L_47 = V_3;
		int32_t L_48 = V_6;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, ((int32_t)((int32_t)L_48+(int32_t)2)));
		float L_49 = V_8;
		float L_50 = V_9;
		Vector2_t85  L_51 = {0};
		Vector2__ctor_m305(&L_51, L_49, L_50, /*hidden argument*/NULL);
		*((Vector2_t85 *)(Vector2_t85 *)SZArrayLdElema(L_47, ((int32_t)((int32_t)L_48+(int32_t)2)), sizeof(Vector2_t85 ))) = L_51;
		Int32U5BU5D_t109* L_52 = V_4;
		int32_t L_53 = V_6;
		int32_t L_54 = V_6;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_52, L_53, sizeof(int32_t))) = (int32_t)L_54;
		Int32U5BU5D_t109* L_55 = V_4;
		int32_t L_56 = V_6;
		int32_t L_57 = V_6;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, ((int32_t)((int32_t)L_56+(int32_t)1)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_55, ((int32_t)((int32_t)L_56+(int32_t)1)), sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_57+(int32_t)1));
		Int32U5BU5D_t109* L_58 = V_4;
		int32_t L_59 = V_6;
		int32_t L_60 = V_6;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, ((int32_t)((int32_t)L_59+(int32_t)2)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_58, ((int32_t)((int32_t)L_59+(int32_t)2)), sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_60+(int32_t)2));
		int32_t L_61 = V_5;
		V_5 = ((int32_t)((int32_t)L_61+(int32_t)1));
	}

IL_017f:
	{
		int32_t L_62 = V_5;
		int32_t L_63 = ___triCount;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_003b;
		}
	}
	{
		Mesh_t98 * L_64 = V_0;
		Vector3U5BU5D_t111* L_65 = V_1;
		NullCheck(L_64);
		Mesh_set_vertices_m440(L_64, L_65, /*hidden argument*/NULL);
		Mesh_t98 * L_66 = V_0;
		Int32U5BU5D_t109* L_67 = V_4;
		NullCheck(L_66);
		Mesh_set_triangles_m441(L_66, L_67, /*hidden argument*/NULL);
		Mesh_t98 * L_68 = V_0;
		Vector2U5BU5D_t103* L_69 = V_2;
		NullCheck(L_68);
		Mesh_set_uv_m442(L_68, L_69, /*hidden argument*/NULL);
		Mesh_t98 * L_70 = V_0;
		Vector2U5BU5D_t103* L_71 = V_3;
		NullCheck(L_70);
		Mesh_set_uv2_m443(L_70, L_71, /*hidden argument*/NULL);
		Mesh_t98 * L_72 = V_0;
		return L_72;
	}
}
// UnityStandardAssets.ImageEffects.Twirl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_64.h"
// UnityStandardAssets.ImageEffects.Twirl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_64MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.Twirl::.ctor()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_25MethodDeclarations.h"
extern "C" void Twirl__ctor_m204 (Twirl_t84 * __this, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = {0};
		Vector2__ctor_m305(&L_0, (0.3f), (0.3f), /*hidden argument*/NULL);
		__this->___radius_4 = L_0;
		__this->___angle_5 = (50.0f);
		Vector2_t85  L_1 = {0};
		Vector2__ctor_m305(&L_1, (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___center_6 = L_1;
		ImageEffectBase__ctor_m121(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Twirl::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityStandardAssets.ImageEffects.ImageEffects
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_42MethodDeclarations.h"
extern "C" void Twirl_OnRenderImage_m205 (Twirl_t84 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	{
		Material_t5 * L_0 = ImageEffectBase_get_material_m123(__this, /*hidden argument*/NULL);
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		float L_3 = (__this->___angle_5);
		Vector2_t85  L_4 = (__this->___center_6);
		Vector2_t85  L_5 = (__this->___radius_4);
		ImageEffects_RenderDistortion_m126(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_65.h"
// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_65MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_66.h"
// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_66MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::.ctor()
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"
extern "C" void VignetteAndChromaticAberration__ctor_m206 (VignetteAndChromaticAberration_t87 * __this, const MethodInfo* method)
{
	{
		__this->___intensity_6 = (0.375f);
		__this->___chromaticAberration_7 = (0.2f);
		__this->___axialAberration_8 = (0.5f);
		__this->___blurSpread_10 = (0.75f);
		__this->___luminanceDependency_11 = (0.25f);
		__this->___blurDistance_12 = (2.5f);
		PostEffectsBase__ctor_m144(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::CheckResources()
extern "C" bool VignetteAndChromaticAberration_CheckResources_m207 (VignetteAndChromaticAberration_t87 * __this, const MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m151(__this, 0, /*hidden argument*/NULL);
		Shader_t4 * L_0 = (__this->___vignetteShader_13);
		Material_t5 * L_1 = (__this->___m_VignetteMaterial_16);
		Material_t5 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___m_VignetteMaterial_16 = L_2;
		Shader_t4 * L_3 = (__this->___separableBlurShader_14);
		Material_t5 * L_4 = (__this->___m_SeparableBlurMaterial_17);
		Material_t5 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->___m_SeparableBlurMaterial_17 = L_5;
		Shader_t4 * L_6 = (__this->___chromAberrationShader_15);
		Material_t5 * L_7 = (__this->___m_ChromAberrationMaterial_18);
		Material_t5 * L_8 = PostEffectsBase_CheckShaderAndCreateMaterial_m145(__this, L_6, L_7, /*hidden argument*/NULL);
		__this->___m_ChromAberrationMaterial_18 = L_8;
		bool L_9 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		if (L_9)
		{
			goto IL_0061;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m154(__this, /*hidden argument*/NULL);
	}

IL_0061:
	{
		bool L_10 = (((PostEffectsBase_t3 *)__this)->___isSupported_4);
		return L_10;
	}
}
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral16;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral150;
extern Il2CppCodeGenString* _stringLiteral151;
extern Il2CppCodeGenString* _stringLiteral152;
extern Il2CppCodeGenString* _stringLiteral153;
extern Il2CppCodeGenString* _stringLiteral154;
extern Il2CppCodeGenString* _stringLiteral155;
extern "C" void VignetteAndChromaticAberration_OnRenderImage_m208 (VignetteAndChromaticAberration_t87 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral150 = il2cpp_codegen_string_literal_from_index(150);
		_stringLiteral151 = il2cpp_codegen_string_literal_from_index(151);
		_stringLiteral152 = il2cpp_codegen_string_literal_from_index(152);
		_stringLiteral153 = il2cpp_codegen_string_literal_from_index(153);
		_stringLiteral154 = il2cpp_codegen_string_literal_from_index(154);
		_stringLiteral155 = il2cpp_codegen_string_literal_from_index(155);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	RenderTexture_t55 * V_5 = {0};
	RenderTexture_t55 * V_6 = {0};
	int32_t V_7 = 0;
	RenderTexture_t55 * V_8 = {0};
	int32_t G_B5_0 = 0;
	RenderTexture_t55 * G_B17_0 = {0};
	Material_t5 * G_B19_0 = {0};
	RenderTexture_t55 * G_B19_1 = {0};
	RenderTexture_t55 * G_B19_2 = {0};
	Material_t5 * G_B18_0 = {0};
	RenderTexture_t55 * G_B18_1 = {0};
	RenderTexture_t55 * G_B18_2 = {0};
	int32_t G_B20_0 = 0;
	Material_t5 * G_B20_1 = {0};
	RenderTexture_t55 * G_B20_2 = {0};
	RenderTexture_t55 * G_B20_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		Graphics_Blit_m267(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		RenderTexture_t55 * L_3 = ___source;
		NullCheck(L_3);
		int32_t L_4 = RenderTexture_get_width_m272(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		RenderTexture_t55 * L_5 = ___source;
		NullCheck(L_5);
		int32_t L_6 = RenderTexture_get_height_m273(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (__this->___blur_9);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_8 = fabsf(L_7);
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_004a;
		}
	}
	{
		float L_9 = (__this->___intensity_6);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_10 = fabsf(L_9);
		G_B5_0 = ((((float)L_10) > ((float)(0.0f)))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 1;
	}

IL_004b:
	{
		V_2 = G_B5_0;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_3 = ((float)((float)((float)((float)(1.0f)*(float)(((float)L_11))))/(float)((float)((float)(1.0f)*(float)(((float)L_12))))));
		V_5 = (RenderTexture_t55 *)NULL;
		V_6 = (RenderTexture_t55 *)NULL;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_01cb;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		RenderTexture_t55 * L_16 = ___source;
		NullCheck(L_16);
		int32_t L_17 = RenderTexture_get_format_m279(L_16, /*hidden argument*/NULL);
		RenderTexture_t55 * L_18 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, L_14, L_15, 0, L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		float L_19 = (__this->___blur_9);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_20 = fabsf(L_19);
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_017e;
		}
	}
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		RenderTexture_t55 * L_23 = ___source;
		NullCheck(L_23);
		int32_t L_24 = RenderTexture_get_format_m279(L_23, /*hidden argument*/NULL);
		RenderTexture_t55 * L_25 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_21/(int32_t)2)), ((int32_t)((int32_t)L_22/(int32_t)2)), 0, L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		RenderTexture_t55 * L_26 = ___source;
		RenderTexture_t55 * L_27 = V_6;
		Material_t5 * L_28 = (__this->___m_ChromAberrationMaterial_18);
		Graphics_Blit_m275(NULL /*static, unused*/, L_26, L_27, L_28, 0, /*hidden argument*/NULL);
		V_7 = 0;
		goto IL_0176;
	}

IL_00ba:
	{
		Material_t5 * L_29 = (__this->___m_SeparableBlurMaterial_17);
		float L_30 = (__this->___blurSpread_10);
		Vector4_t100  L_31 = {0};
		Vector4__ctor_m284(&L_31, (0.0f), ((float)((float)L_30*(float)(0.001953125f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Material_SetVector_m285(L_29, _stringLiteral16, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		RenderTexture_t55 * L_34 = ___source;
		NullCheck(L_34);
		int32_t L_35 = RenderTexture_get_format_m279(L_34, /*hidden argument*/NULL);
		RenderTexture_t55 * L_36 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_32/(int32_t)2)), ((int32_t)((int32_t)L_33/(int32_t)2)), 0, L_35, /*hidden argument*/NULL);
		V_8 = L_36;
		RenderTexture_t55 * L_37 = V_6;
		RenderTexture_t55 * L_38 = V_8;
		Material_t5 * L_39 = (__this->___m_SeparableBlurMaterial_17);
		Graphics_Blit_m270(NULL /*static, unused*/, L_37, L_38, L_39, /*hidden argument*/NULL);
		RenderTexture_t55 * L_40 = V_6;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		Material_t5 * L_41 = (__this->___m_SeparableBlurMaterial_17);
		float L_42 = (__this->___blurSpread_10);
		float L_43 = V_3;
		Vector4_t100  L_44 = {0};
		Vector4__ctor_m284(&L_44, ((float)((float)((float)((float)L_42*(float)(0.001953125f)))/(float)L_43)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		Material_SetVector_m285(L_41, _stringLiteral16, L_44, /*hidden argument*/NULL);
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		RenderTexture_t55 * L_47 = ___source;
		NullCheck(L_47);
		int32_t L_48 = RenderTexture_get_format_m279(L_47, /*hidden argument*/NULL);
		RenderTexture_t55 * L_49 = RenderTexture_GetTemporary_m282(NULL /*static, unused*/, ((int32_t)((int32_t)L_45/(int32_t)2)), ((int32_t)((int32_t)L_46/(int32_t)2)), 0, L_48, /*hidden argument*/NULL);
		V_6 = L_49;
		RenderTexture_t55 * L_50 = V_8;
		RenderTexture_t55 * L_51 = V_6;
		Material_t5 * L_52 = (__this->___m_SeparableBlurMaterial_17);
		Graphics_Blit_m270(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
		RenderTexture_t55 * L_53 = V_8;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		int32_t L_54 = V_7;
		V_7 = ((int32_t)((int32_t)L_54+(int32_t)1));
	}

IL_0176:
	{
		int32_t L_55 = V_7;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_00ba;
		}
	}

IL_017e:
	{
		Material_t5 * L_56 = (__this->___m_VignetteMaterial_16);
		float L_57 = (__this->___intensity_6);
		NullCheck(L_56);
		Material_SetFloat_m269(L_56, _stringLiteral10, L_57, /*hidden argument*/NULL);
		Material_t5 * L_58 = (__this->___m_VignetteMaterial_16);
		float L_59 = (__this->___blur_9);
		NullCheck(L_58);
		Material_SetFloat_m269(L_58, _stringLiteral150, L_59, /*hidden argument*/NULL);
		Material_t5 * L_60 = (__this->___m_VignetteMaterial_16);
		RenderTexture_t55 * L_61 = V_6;
		NullCheck(L_60);
		Material_SetTexture_m292(L_60, _stringLiteral151, L_61, /*hidden argument*/NULL);
		RenderTexture_t55 * L_62 = ___source;
		RenderTexture_t55 * L_63 = V_5;
		Material_t5 * L_64 = (__this->___m_VignetteMaterial_16);
		Graphics_Blit_m275(NULL /*static, unused*/, L_62, L_63, L_64, 0, /*hidden argument*/NULL);
	}

IL_01cb:
	{
		Material_t5 * L_65 = (__this->___m_ChromAberrationMaterial_18);
		float L_66 = (__this->___chromaticAberration_7);
		NullCheck(L_65);
		Material_SetFloat_m269(L_65, _stringLiteral152, L_66, /*hidden argument*/NULL);
		Material_t5 * L_67 = (__this->___m_ChromAberrationMaterial_18);
		float L_68 = (__this->___axialAberration_8);
		NullCheck(L_67);
		Material_SetFloat_m269(L_67, _stringLiteral153, L_68, /*hidden argument*/NULL);
		Material_t5 * L_69 = (__this->___m_ChromAberrationMaterial_18);
		float L_70 = (__this->___blurDistance_12);
		float L_71 = (__this->___blurDistance_12);
		Vector2_t85  L_72 = {0};
		Vector2__ctor_m305(&L_72, ((-L_70)), L_71, /*hidden argument*/NULL);
		Vector4_t100  L_73 = Vector4_op_Implicit_m446(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		NullCheck(L_69);
		Material_SetVector_m285(L_69, _stringLiteral154, L_73, /*hidden argument*/NULL);
		Material_t5 * L_74 = (__this->___m_ChromAberrationMaterial_18);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_75 = ((Mathf_t101_StaticFields*)Mathf_t101_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		float L_76 = (__this->___luminanceDependency_11);
		float L_77 = Mathf_Max_m322(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/NULL);
		NullCheck(L_74);
		Material_SetFloat_m269(L_74, _stringLiteral155, ((float)((float)(1.0f)/(float)L_77)), /*hidden argument*/NULL);
		bool L_78 = V_2;
		if (!L_78)
		{
			goto IL_0257;
		}
	}
	{
		RenderTexture_t55 * L_79 = V_5;
		NullCheck(L_79);
		Texture_set_wrapMode_m324(L_79, 1, /*hidden argument*/NULL);
		goto IL_025e;
	}

IL_0257:
	{
		RenderTexture_t55 * L_80 = ___source;
		NullCheck(L_80);
		Texture_set_wrapMode_m324(L_80, 1, /*hidden argument*/NULL);
	}

IL_025e:
	{
		bool L_81 = V_2;
		if (!L_81)
		{
			goto IL_026b;
		}
	}
	{
		RenderTexture_t55 * L_82 = V_5;
		G_B17_0 = L_82;
		goto IL_026c;
	}

IL_026b:
	{
		RenderTexture_t55 * L_83 = ___source;
		G_B17_0 = L_83;
	}

IL_026c:
	{
		RenderTexture_t55 * L_84 = ___destination;
		Material_t5 * L_85 = (__this->___m_ChromAberrationMaterial_18);
		int32_t L_86 = (__this->___mode_5);
		G_B18_0 = L_85;
		G_B18_1 = L_84;
		G_B18_2 = G_B17_0;
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			G_B19_0 = L_85;
			G_B19_1 = L_84;
			G_B19_2 = G_B17_0;
			goto IL_0285;
		}
	}
	{
		G_B20_0 = 2;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		goto IL_0286;
	}

IL_0285:
	{
		G_B20_0 = 1;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
	}

IL_0286:
	{
		Graphics_Blit_m275(NULL /*static, unused*/, G_B20_3, G_B20_2, G_B20_1, G_B20_0, /*hidden argument*/NULL);
		RenderTexture_t55 * L_87 = V_5;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		RenderTexture_t55 * L_88 = V_6;
		RenderTexture_ReleaseTemporary_m276(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.ImageEffects.Vortex
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_67.h"
// UnityStandardAssets.ImageEffects.Vortex
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_67MethodDeclarations.h"
// System.Void UnityStandardAssets.ImageEffects.Vortex::.ctor()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityStandardAssets.ImageEffects.ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_25MethodDeclarations.h"
extern "C" void Vortex__ctor_m209 (Vortex_t88 * __this, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = {0};
		Vector2__ctor_m305(&L_0, (0.4f), (0.4f), /*hidden argument*/NULL);
		__this->___radius_4 = L_0;
		__this->___angle_5 = (50.0f);
		Vector2_t85  L_1 = {0};
		Vector2__ctor_m305(&L_1, (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___center_6 = L_1;
		ImageEffectBase__ctor_m121(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Vortex::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityStandardAssets.ImageEffects.ImageEffects
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_42MethodDeclarations.h"
extern "C" void Vortex_OnRenderImage_m210 (Vortex_t88 * __this, RenderTexture_t55 * ___source, RenderTexture_t55 * ___destination, const MethodInfo* method)
{
	{
		Material_t5 * L_0 = ImageEffectBase_get_material_m123(__this, /*hidden argument*/NULL);
		RenderTexture_t55 * L_1 = ___source;
		RenderTexture_t55 * L_2 = ___destination;
		float L_3 = (__this->___angle_5);
		Vector2_t85  L_4 = (__this->___center_6);
		Vector2_t85  L_5 = (__this->___radius_4);
		ImageEffects_RenderDistortion_m126(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// KTGameCenter/GCStatus
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_GCStatus.h"
// KTGameCenter/GCStatus
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_GCStatusMethodDeclarations.h"
// KTGameCenter/UserAuthenticatationDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_UserAuthenticatat.h"
// KTGameCenter/UserAuthenticatationDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_UserAuthenticatatMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void KTGameCenter/UserAuthenticatationDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UserAuthenticatationDelegate__ctor_m211 (UserAuthenticatationDelegate_t90 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void KTGameCenter/UserAuthenticatationDelegate::Invoke(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void UserAuthenticatationDelegate_Invoke_m212 (UserAuthenticatationDelegate_t90 * __this, String_t* ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UserAuthenticatationDelegate_Invoke_m212((UserAuthenticatationDelegate_t90 *)__this->___prev_9,___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UserAuthenticatationDelegate_t90(Il2CppObject* delegate, String_t* ___value)
{
	typedef void (STDCALL *native_function_ptr_type)(char*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___value' to native representation
	char* ____value_marshaled = { 0 };
	____value_marshaled = il2cpp_codegen_marshal_string(___value);

	// Native function invocation
	_il2cpp_pinvoke_func(____value_marshaled);

	// Marshaling cleanup of parameter '___value' native representation
	il2cpp_codegen_marshal_free(____value_marshaled);
	____value_marshaled = NULL;

}
// System.IAsyncResult KTGameCenter/UserAuthenticatationDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * UserAuthenticatationDelegate_BeginInvoke_m213 (UserAuthenticatationDelegate_t90 * __this, String_t* ___value, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void KTGameCenter/UserAuthenticatationDelegate::EndInvoke(System.IAsyncResult)
extern "C" void UserAuthenticatationDelegate_EndInvoke_m214 (UserAuthenticatationDelegate_t90 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// KTGameCenter/ScoreSubmissionDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_ScoreSubmissionDe.h"
// KTGameCenter/ScoreSubmissionDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_ScoreSubmissionDeMethodDeclarations.h"
// System.Void KTGameCenter/ScoreSubmissionDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void ScoreSubmissionDelegate__ctor_m215 (ScoreSubmissionDelegate_t94 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void KTGameCenter/ScoreSubmissionDelegate::Invoke(System.String,System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void ScoreSubmissionDelegate_Invoke_m216 (ScoreSubmissionDelegate_t94 * __this, String_t* ___leaderboardId, String_t* ___error, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ScoreSubmissionDelegate_Invoke_m216((ScoreSubmissionDelegate_t94 *)__this->___prev_9,___leaderboardId, ___error, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___leaderboardId, String_t* ___error, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___leaderboardId, ___error,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___leaderboardId, String_t* ___error, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___leaderboardId, ___error,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___error, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___leaderboardId, ___error,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ScoreSubmissionDelegate_t94(Il2CppObject* delegate, String_t* ___leaderboardId, String_t* ___error)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___leaderboardId' to native representation
	char* ____leaderboardId_marshaled = { 0 };
	____leaderboardId_marshaled = il2cpp_codegen_marshal_string(___leaderboardId);

	// Marshaling of parameter '___error' to native representation
	char* ____error_marshaled = { 0 };
	____error_marshaled = il2cpp_codegen_marshal_string(___error);

	// Native function invocation
	_il2cpp_pinvoke_func(____leaderboardId_marshaled, ____error_marshaled);

	// Marshaling cleanup of parameter '___leaderboardId' native representation
	il2cpp_codegen_marshal_free(____leaderboardId_marshaled);
	____leaderboardId_marshaled = NULL;

	// Marshaling cleanup of parameter '___error' native representation
	il2cpp_codegen_marshal_free(____error_marshaled);
	____error_marshaled = NULL;

}
// System.IAsyncResult KTGameCenter/ScoreSubmissionDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * ScoreSubmissionDelegate_BeginInvoke_m217 (ScoreSubmissionDelegate_t94 * __this, String_t* ___leaderboardId, String_t* ___error, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___leaderboardId;
	__d_args[1] = ___error;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void KTGameCenter/ScoreSubmissionDelegate::EndInvoke(System.IAsyncResult)
extern "C" void ScoreSubmissionDelegate_EndInvoke_m218 (ScoreSubmissionDelegate_t94 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// KTGameCenter/AchievementSubmissionDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_AchievementSubmis.h"
// KTGameCenter/AchievementSubmissionDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_AchievementSubmisMethodDeclarations.h"
// System.Void KTGameCenter/AchievementSubmissionDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void AchievementSubmissionDelegate__ctor_m219 (AchievementSubmissionDelegate_t95 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void KTGameCenter/AchievementSubmissionDelegate::Invoke(System.String,System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void AchievementSubmissionDelegate_Invoke_m220 (AchievementSubmissionDelegate_t95 * __this, String_t* ___achId, String_t* ___error, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AchievementSubmissionDelegate_Invoke_m220((AchievementSubmissionDelegate_t95 *)__this->___prev_9,___achId, ___error, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___achId, String_t* ___error, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___achId, ___error,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___achId, String_t* ___error, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___achId, ___error,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___error, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___achId, ___error,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AchievementSubmissionDelegate_t95(Il2CppObject* delegate, String_t* ___achId, String_t* ___error)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___achId' to native representation
	char* ____achId_marshaled = { 0 };
	____achId_marshaled = il2cpp_codegen_marshal_string(___achId);

	// Marshaling of parameter '___error' to native representation
	char* ____error_marshaled = { 0 };
	____error_marshaled = il2cpp_codegen_marshal_string(___error);

	// Native function invocation
	_il2cpp_pinvoke_func(____achId_marshaled, ____error_marshaled);

	// Marshaling cleanup of parameter '___achId' native representation
	il2cpp_codegen_marshal_free(____achId_marshaled);
	____achId_marshaled = NULL;

	// Marshaling cleanup of parameter '___error' native representation
	il2cpp_codegen_marshal_free(____error_marshaled);
	____error_marshaled = NULL;

}
// System.IAsyncResult KTGameCenter/AchievementSubmissionDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * AchievementSubmissionDelegate_BeginInvoke_m221 (AchievementSubmissionDelegate_t95 * __this, String_t* ___achId, String_t* ___error, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___achId;
	__d_args[1] = ___error;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void KTGameCenter/AchievementSubmissionDelegate::EndInvoke(System.IAsyncResult)
extern "C" void AchievementSubmissionDelegate_EndInvoke_m222 (AchievementSubmissionDelegate_t95 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// KTGameCenter/ResetAchievementsDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_ResetAchievements.h"
// KTGameCenter/ResetAchievementsDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_ResetAchievementsMethodDeclarations.h"
// System.Void KTGameCenter/ResetAchievementsDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void ResetAchievementsDelegate__ctor_m223 (ResetAchievementsDelegate_t96 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void KTGameCenter/ResetAchievementsDelegate::Invoke(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void ResetAchievementsDelegate_Invoke_m224 (ResetAchievementsDelegate_t96 * __this, String_t* ___error, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResetAchievementsDelegate_Invoke_m224((ResetAchievementsDelegate_t96 *)__this->___prev_9,___error, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___error, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___error,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___error, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___error,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___error,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ResetAchievementsDelegate_t96(Il2CppObject* delegate, String_t* ___error)
{
	typedef void (STDCALL *native_function_ptr_type)(char*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___error' to native representation
	char* ____error_marshaled = { 0 };
	____error_marshaled = il2cpp_codegen_marshal_string(___error);

	// Native function invocation
	_il2cpp_pinvoke_func(____error_marshaled);

	// Marshaling cleanup of parameter '___error' native representation
	il2cpp_codegen_marshal_free(____error_marshaled);
	____error_marshaled = NULL;

}
// System.IAsyncResult KTGameCenter/ResetAchievementsDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * ResetAchievementsDelegate_BeginInvoke_m225 (ResetAchievementsDelegate_t96 * __this, String_t* ___error, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___error;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void KTGameCenter/ResetAchievementsDelegate::EndInvoke(System.IAsyncResult)
extern "C" void ResetAchievementsDelegate_EndInvoke_m226 (ResetAchievementsDelegate_t96 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// KTGameCenter
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter.h"
// KTGameCenter
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenterMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Void KTGameCenter::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void KTGameCenter__ctor_m227 (KTGameCenter_t97 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KTGameCenter::add_GCUserAuthenticated(KTGameCenter/UserAuthenticatationDelegate)
// KTGameCenter/UserAuthenticatationDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_UserAuthenticatat.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* UserAuthenticatationDelegate_t90_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_add_GCUserAuthenticated_m228 (KTGameCenter_t97 * __this, UserAuthenticatationDelegate_t90 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserAuthenticatationDelegate_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserAuthenticatationDelegate_t90 * L_0 = (__this->___GCUserAuthenticated_7);
		UserAuthenticatationDelegate_t90 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GCUserAuthenticated_7 = ((UserAuthenticatationDelegate_t90 *)CastclassSealed(L_2, UserAuthenticatationDelegate_t90_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void KTGameCenter::remove_GCUserAuthenticated(KTGameCenter/UserAuthenticatationDelegate)
extern TypeInfo* UserAuthenticatationDelegate_t90_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_remove_GCUserAuthenticated_m229 (KTGameCenter_t97 * __this, UserAuthenticatationDelegate_t90 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserAuthenticatationDelegate_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserAuthenticatationDelegate_t90 * L_0 = (__this->___GCUserAuthenticated_7);
		UserAuthenticatationDelegate_t90 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GCUserAuthenticated_7 = ((UserAuthenticatationDelegate_t90 *)CastclassSealed(L_2, UserAuthenticatationDelegate_t90_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void KTGameCenter::add_GCScoreSubmitted(KTGameCenter/ScoreSubmissionDelegate)
// KTGameCenter/ScoreSubmissionDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_ScoreSubmissionDe.h"
extern TypeInfo* ScoreSubmissionDelegate_t94_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_add_GCScoreSubmitted_m230 (KTGameCenter_t97 * __this, ScoreSubmissionDelegate_t94 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreSubmissionDelegate_t94_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreSubmissionDelegate_t94 * L_0 = (__this->___GCScoreSubmitted_8);
		ScoreSubmissionDelegate_t94 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GCScoreSubmitted_8 = ((ScoreSubmissionDelegate_t94 *)CastclassSealed(L_2, ScoreSubmissionDelegate_t94_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void KTGameCenter::remove_GCScoreSubmitted(KTGameCenter/ScoreSubmissionDelegate)
extern TypeInfo* ScoreSubmissionDelegate_t94_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_remove_GCScoreSubmitted_m231 (KTGameCenter_t97 * __this, ScoreSubmissionDelegate_t94 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreSubmissionDelegate_t94_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreSubmissionDelegate_t94 * L_0 = (__this->___GCScoreSubmitted_8);
		ScoreSubmissionDelegate_t94 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GCScoreSubmitted_8 = ((ScoreSubmissionDelegate_t94 *)CastclassSealed(L_2, ScoreSubmissionDelegate_t94_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void KTGameCenter::add_GCAchievementSubmitted(KTGameCenter/AchievementSubmissionDelegate)
// KTGameCenter/AchievementSubmissionDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_AchievementSubmis.h"
extern TypeInfo* AchievementSubmissionDelegate_t95_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_add_GCAchievementSubmitted_m232 (KTGameCenter_t97 * __this, AchievementSubmissionDelegate_t95 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementSubmissionDelegate_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	{
		AchievementSubmissionDelegate_t95 * L_0 = (__this->___GCAchievementSubmitted_9);
		AchievementSubmissionDelegate_t95 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GCAchievementSubmitted_9 = ((AchievementSubmissionDelegate_t95 *)CastclassSealed(L_2, AchievementSubmissionDelegate_t95_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void KTGameCenter::remove_GCAchievementSubmitted(KTGameCenter/AchievementSubmissionDelegate)
extern TypeInfo* AchievementSubmissionDelegate_t95_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_remove_GCAchievementSubmitted_m233 (KTGameCenter_t97 * __this, AchievementSubmissionDelegate_t95 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementSubmissionDelegate_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	{
		AchievementSubmissionDelegate_t95 * L_0 = (__this->___GCAchievementSubmitted_9);
		AchievementSubmissionDelegate_t95 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GCAchievementSubmitted_9 = ((AchievementSubmissionDelegate_t95 *)CastclassSealed(L_2, AchievementSubmissionDelegate_t95_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void KTGameCenter::add_GCAchievementsReset(KTGameCenter/ResetAchievementsDelegate)
// KTGameCenter/ResetAchievementsDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_ResetAchievements.h"
extern TypeInfo* ResetAchievementsDelegate_t96_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_add_GCAchievementsReset_m234 (KTGameCenter_t97 * __this, ResetAchievementsDelegate_t96 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ResetAchievementsDelegate_t96_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		ResetAchievementsDelegate_t96 * L_0 = (__this->___GCAchievementsReset_10);
		ResetAchievementsDelegate_t96 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GCAchievementsReset_10 = ((ResetAchievementsDelegate_t96 *)CastclassSealed(L_2, ResetAchievementsDelegate_t96_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void KTGameCenter::remove_GCAchievementsReset(KTGameCenter/ResetAchievementsDelegate)
extern TypeInfo* ResetAchievementsDelegate_t96_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_remove_GCAchievementsReset_m235 (KTGameCenter_t97 * __this, ResetAchievementsDelegate_t96 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ResetAchievementsDelegate_t96_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		ResetAchievementsDelegate_t96 * L_0 = (__this->___GCAchievementsReset_10);
		ResetAchievementsDelegate_t96 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GCAchievementsReset_10 = ((ResetAchievementsDelegate_t96 *)CastclassSealed(L_2, ResetAchievementsDelegate_t96_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void KTGameCenter::authenticateLocalUser(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" {void DEFAULT_CALL authenticateLocalUser(char*);}
extern "C" void KTGameCenter_authenticateLocalUser_m236 (Object_t * __this /* static, unused */, String_t* ___gameobjectName, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)authenticateLocalUser;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'authenticateLocalUser'"));
		}
	}

	// Marshaling of parameter '___gameobjectName' to native representation
	char* ____gameobjectName_marshaled = { 0 };
	____gameobjectName_marshaled = il2cpp_codegen_marshal_string(___gameobjectName);

	// Native function invocation
	_il2cpp_pinvoke_func(____gameobjectName_marshaled);

	// Marshaling cleanup of parameter '___gameobjectName' native representation
	il2cpp_codegen_marshal_free(____gameobjectName_marshaled);
	____gameobjectName_marshaled = NULL;

}
// System.Void KTGameCenter::showLeaderboard(System.String)
extern "C" {void DEFAULT_CALL showLeaderboard(char*);}
extern "C" void KTGameCenter_showLeaderboard_m237 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)showLeaderboard;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'showLeaderboard'"));
		}
	}

	// Marshaling of parameter '___leaderboardId' to native representation
	char* ____leaderboardId_marshaled = { 0 };
	____leaderboardId_marshaled = il2cpp_codegen_marshal_string(___leaderboardId);

	// Native function invocation
	_il2cpp_pinvoke_func(____leaderboardId_marshaled);

	// Marshaling cleanup of parameter '___leaderboardId' native representation
	il2cpp_codegen_marshal_free(____leaderboardId_marshaled);
	____leaderboardId_marshaled = NULL;

}
// System.Void KTGameCenter::resetAchievements()
extern "C" {void DEFAULT_CALL resetAchievements();}
extern "C" void KTGameCenter_resetAchievements_m238 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)resetAchievements;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'resetAchievements'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void KTGameCenter::submitScore(System.Int32,System.String)
extern "C" {void DEFAULT_CALL submitScore(int32_t, char*);}
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void KTGameCenter_submitScore_m239 (Object_t * __this /* static, unused */, int32_t ___score, String_t* ___leaderboard, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)submitScore;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'submitScore'"));
		}
	}

	// Marshaling of parameter '___score' to native representation

	// Marshaling of parameter '___leaderboard' to native representation
	char* ____leaderboard_marshaled = { 0 };
	____leaderboard_marshaled = il2cpp_codegen_marshal_string(___leaderboard);

	// Native function invocation
	_il2cpp_pinvoke_func(___score, ____leaderboard_marshaled);

	// Marshaling cleanup of parameter '___score' native representation

	// Marshaling cleanup of parameter '___leaderboard' native representation
	il2cpp_codegen_marshal_free(____leaderboard_marshaled);
	____leaderboard_marshaled = NULL;

}
// System.Void KTGameCenter::submitAchievement(System.Int32,System.String,System.Boolean)
extern "C" {void DEFAULT_CALL submitAchievement(int32_t, char*, int32_t);}
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void KTGameCenter_submitAchievement_m240 (Object_t * __this /* static, unused */, int32_t ___percantage, String_t* ___achivement, bool ___showBanner, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)submitAchievement;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'submitAchievement'"));
		}
	}

	// Marshaling of parameter '___percantage' to native representation

	// Marshaling of parameter '___achivement' to native representation
	char* ____achivement_marshaled = { 0 };
	____achivement_marshaled = il2cpp_codegen_marshal_string(___achivement);

	// Marshaling of parameter '___showBanner' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___percantage, ____achivement_marshaled, ___showBanner);

	// Marshaling cleanup of parameter '___percantage' native representation

	// Marshaling cleanup of parameter '___achivement' native representation
	il2cpp_codegen_marshal_free(____achivement_marshaled);
	____achivement_marshaled = NULL;

	// Marshaling cleanup of parameter '___showBanner' native representation

}
// System.Void KTGameCenter::showAchievements()
extern "C" {void DEFAULT_CALL showAchievements();}
extern "C" void KTGameCenter_showAchievements_m241 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)showAchievements;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'showAchievements'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void KTGameCenter::submitFloatScore(System.Single,System.Int32,System.String)
extern "C" {void DEFAULT_CALL submitFloatScore(float, int32_t, char*);}
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void KTGameCenter_submitFloatScore_m242 (Object_t * __this /* static, unused */, float ___score, int32_t ___decimals, String_t* ___leaderboard, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)submitFloatScore;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'submitFloatScore'"));
		}
	}

	// Marshaling of parameter '___score' to native representation

	// Marshaling of parameter '___decimals' to native representation

	// Marshaling of parameter '___leaderboard' to native representation
	char* ____leaderboard_marshaled = { 0 };
	____leaderboard_marshaled = il2cpp_codegen_marshal_string(___leaderboard);

	// Native function invocation
	_il2cpp_pinvoke_func(___score, ___decimals, ____leaderboard_marshaled);

	// Marshaling cleanup of parameter '___score' native representation

	// Marshaling cleanup of parameter '___decimals' native representation

	// Marshaling cleanup of parameter '___leaderboard' native representation
	il2cpp_codegen_marshal_free(____leaderboard_marshaled);
	____leaderboard_marshaled = NULL;

}
// System.Void KTGameCenter::Awake()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* KTGameCenter_t97_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_Awake_m243 (KTGameCenter_t97 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KTGameCenter_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		KTGameCenter_t97 * L_0 = ((KTGameCenter_t97_StaticFields*)KTGameCenter_t97_il2cpp_TypeInfo_var->static_fields)->___sharedInstance_2;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		((KTGameCenter_t97_StaticFields*)KTGameCenter_t97_il2cpp_TypeInfo_var->static_fields)->___sharedInstance_2 = __this;
	}

IL_0016:
	{
		return;
	}
}
// System.Void KTGameCenter::OnEnable()
extern TypeInfo* KTGameCenter_t97_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_OnEnable_m244 (KTGameCenter_t97 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KTGameCenter_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		KTGameCenter_t97 * L_0 = ((KTGameCenter_t97_StaticFields*)KTGameCenter_t97_il2cpp_TypeInfo_var->static_fields)->___sharedInstance_2;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		((KTGameCenter_t97_StaticFields*)KTGameCenter_t97_il2cpp_TypeInfo_var->static_fields)->___sharedInstance_2 = __this;
	}

IL_0016:
	{
		return;
	}
}
// System.Void KTGameCenter::Start()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" void KTGameCenter_Start_m245 (KTGameCenter_t97 * __this, const MethodInfo* method)
{
	{
		GameObject_t30 * L_0 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m456(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// KTGameCenter KTGameCenter::SharedCenter()
extern TypeInfo* KTGameCenter_t97_il2cpp_TypeInfo_var;
extern "C" KTGameCenter_t97 * KTGameCenter_SharedCenter_m246 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KTGameCenter_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		KTGameCenter_t97 * L_0 = ((KTGameCenter_t97_StaticFields*)KTGameCenter_t97_il2cpp_TypeInfo_var->static_fields)->___sharedInstance_2;
		return L_0;
	}
}
// System.Void KTGameCenter::Authenticate()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// KTGameCenter
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenterMethodDeclarations.h"
extern "C" void KTGameCenter_Authenticate_m247 (KTGameCenter_t97 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (__this->___currentStatus_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		return;
	}

IL_0018:
	{
		__this->___currentStatus_3 = 0;
		GameObject_t30 * L_2 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m348(L_2, /*hidden argument*/NULL);
		KTGameCenter_authenticateLocalUser_m236(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KTGameCenter::ShowLeaderboard(System.String)
extern "C" void KTGameCenter_ShowLeaderboard_m248 (KTGameCenter_t97 * __this, String_t* ___leadboardId, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		String_t* L_1 = ___leadboardId;
		KTGameCenter_showLeaderboard_m237(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KTGameCenter::ShowAchievements()
extern "C" void KTGameCenter_ShowAchievements_m249 (KTGameCenter_t97 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		KTGameCenter_showAchievements_m241(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KTGameCenter::ResetAchievements()
extern "C" void KTGameCenter_ResetAchievements_m250 (KTGameCenter_t97 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		KTGameCenter_resetAchievements_m238(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KTGameCenter::SubmitScore(System.Int32,System.String)
extern "C" void KTGameCenter_SubmitScore_m251 (KTGameCenter_t97 * __this, int32_t ___score, String_t* ___leaderboardId, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		int32_t L_1 = ___score;
		String_t* L_2 = ___leaderboardId;
		KTGameCenter_submitScore_m239(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KTGameCenter::SubmitFloatScore(System.Single,System.Int32,System.String)
extern "C" void KTGameCenter_SubmitFloatScore_m252 (KTGameCenter_t97 * __this, float ___score, int32_t ___decimals, String_t* ___leaderboardId, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		float L_1 = ___score;
		int32_t L_2 = ___decimals;
		String_t* L_3 = ___leaderboardId;
		KTGameCenter_submitFloatScore_m242(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KTGameCenter::SubmitAchievement(System.Int32,System.String,System.Boolean)
extern "C" void KTGameCenter_SubmitAchievement_m253 (KTGameCenter_t97 * __this, int32_t ___percantage, String_t* ___achivementId, bool ___showBanner, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		int32_t L_1 = ___percantage;
		String_t* L_2 = ___achivementId;
		bool L_3 = ___showBanner;
		KTGameCenter_submitAchievement_m240(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean KTGameCenter::IsGameCenterAuthenticated()
extern "C" bool KTGameCenter_IsGameCenterAuthenticated_m254 (KTGameCenter_t97 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___currentStatus_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		return 0;
	}
}
// System.String KTGameCenter::get_PlayerAlias()
extern "C" String_t* KTGameCenter_get_PlayerAlias_m255 (KTGameCenter_t97 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___playerAlias_5);
		return L_0;
	}
}
// System.String KTGameCenter::get_PlayerName()
extern "C" String_t* KTGameCenter_get_PlayerName_m256 (KTGameCenter_t97 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___playerName_4);
		return L_0;
	}
}
// System.String KTGameCenter::get_PlayerId()
extern "C" String_t* KTGameCenter_get_PlayerId_m257 (KTGameCenter_t97 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___playerId_6);
		return L_0;
	}
}
// System.Void KTGameCenter::IsAuthenticated(System.String)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// KTGameCenter/UserAuthenticatationDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_UserAuthenticatatMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral156;
extern "C" void KTGameCenter_IsAuthenticated_m258 (KTGameCenter_t97 * __this, String_t* ___error, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral156 = il2cpp_codegen_string_literal_from_index(156);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___error;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m458(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		__this->___currentStatus_3 = 1;
		UserAuthenticatationDelegate_t90 * L_3 = (__this->___GCUserAuthenticated_7);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		UserAuthenticatationDelegate_t90 * L_4 = (__this->___GCUserAuthenticated_7);
		NullCheck(L_4);
		UserAuthenticatationDelegate_Invoke_m212(L_4, _stringLiteral156, /*hidden argument*/NULL);
	}

IL_0032:
	{
		goto IL_004e;
	}

IL_0037:
	{
		UserAuthenticatationDelegate_t90 * L_5 = (__this->___GCUserAuthenticated_7);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		UserAuthenticatationDelegate_t90 * L_6 = (__this->___GCUserAuthenticated_7);
		String_t* L_7 = ___error;
		NullCheck(L_6);
		UserAuthenticatationDelegate_Invoke_m212(L_6, L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void KTGameCenter::GameCenterAvailable(System.String)
extern "C" void KTGameCenter_GameCenterAvailable_m259 (KTGameCenter_t97 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void KTGameCenter::ProcessGC(System.String)
extern "C" void KTGameCenter_ProcessGC_m260 (KTGameCenter_t97 * __this, String_t* ___error, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void KTGameCenter::ReloadScoresCompleted(System.String)
extern "C" void KTGameCenter_ReloadScoresCompleted_m261 (KTGameCenter_t97 * __this, String_t* ___result, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void KTGameCenter::ScoreSubmitted(System.String)
// KTGameCenter/ScoreSubmissionDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_ScoreSubmissionDeMethodDeclarations.h"
extern TypeInfo* CharU5BU5D_t113_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_ScoreSubmitted_m262 (KTGameCenter_t97 * __this, String_t* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t110* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		String_t* L_0 = ___result;
		CharU5BU5D_t113* L_1 = ((CharU5BU5D_t113*)SZArrayNew(CharU5BU5D_t113_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)95);
		NullCheck(L_0);
		StringU5BU5D_t110* L_2 = String_Split_m459(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t110* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_3, L_4, sizeof(String_t*)));
		StringU5BU5D_t110* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		int32_t L_6 = 1;
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_5, L_6, sizeof(String_t*)));
		ScoreSubmissionDelegate_t94 * L_7 = (__this->___GCScoreSubmitted_8);
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		ScoreSubmissionDelegate_t94 * L_8 = (__this->___GCScoreSubmitted_8);
		String_t* L_9 = V_1;
		String_t* L_10 = V_2;
		NullCheck(L_8);
		ScoreSubmissionDelegate_Invoke_m216(L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void KTGameCenter::AchievementSubmitted(System.String)
// KTGameCenter/AchievementSubmissionDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_AchievementSubmisMethodDeclarations.h"
extern TypeInfo* CharU5BU5D_t113_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_AchievementSubmitted_m263 (KTGameCenter_t97 * __this, String_t* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t110* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		String_t* L_0 = ___result;
		CharU5BU5D_t113* L_1 = ((CharU5BU5D_t113*)SZArrayNew(CharU5BU5D_t113_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)95);
		NullCheck(L_0);
		StringU5BU5D_t110* L_2 = String_Split_m459(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t110* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_3, L_4, sizeof(String_t*)));
		StringU5BU5D_t110* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		int32_t L_6 = 1;
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_5, L_6, sizeof(String_t*)));
		AchievementSubmissionDelegate_t95 * L_7 = (__this->___GCAchievementSubmitted_9);
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		AchievementSubmissionDelegate_t95 * L_8 = (__this->___GCAchievementSubmitted_9);
		String_t* L_9 = V_1;
		String_t* L_10 = V_2;
		NullCheck(L_8);
		AchievementSubmissionDelegate_Invoke_m220(L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void KTGameCenter::AchievementReset(System.String)
// KTGameCenter/ResetAchievementsDelegate
#include "AssemblyU2DCSharpU2Dfirstpass_KTGameCenter_ResetAchievementsMethodDeclarations.h"
extern "C" void KTGameCenter_AchievementReset_m264 (KTGameCenter_t97 * __this, String_t* ___error, const MethodInfo* method)
{
	{
		ResetAchievementsDelegate_t96 * L_0 = (__this->___GCAchievementsReset_10);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ResetAchievementsDelegate_t96 * L_1 = (__this->___GCAchievementsReset_10);
		String_t* L_2 = ___error;
		NullCheck(L_1);
		ResetAchievementsDelegate_Invoke_m224(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void KTGameCenter::SetVariables(System.String)
extern TypeInfo* CharU5BU5D_t113_il2cpp_TypeInfo_var;
extern "C" void KTGameCenter_SetVariables_m265 (KTGameCenter_t97 * __this, String_t* ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t110* V_0 = {0};
	{
		String_t* L_0 = ___val;
		CharU5BU5D_t113* L_1 = ((CharU5BU5D_t113*)SZArrayNew(CharU5BU5D_t113_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)95);
		NullCheck(L_0);
		StringU5BU5D_t110* L_2 = String_Split_m459(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t110* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		__this->___playerAlias_5 = (*(String_t**)(String_t**)SZArrayLdElema(L_3, L_4, sizeof(String_t*)));
		StringU5BU5D_t110* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		int32_t L_6 = 1;
		__this->___playerName_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_5, L_6, sizeof(String_t*)));
		StringU5BU5D_t110* L_7 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		int32_t L_8 = 2;
		__this->___playerId_6 = (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8, sizeof(String_t*)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
