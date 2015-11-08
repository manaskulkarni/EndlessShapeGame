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
#include "TouchScript_U3CModuleU3E.h"
// <Module>
#include "TouchScript_U3CModuleU3EMethodDeclarations.h"
// TouchScript.Behaviors.FullscreenTarget/TargetType
#include "TouchScript_TouchScript_Behaviors_FullscreenTarget_TargetTyp.h"
// TouchScript.Behaviors.FullscreenTarget/TargetType
#include "TouchScript_TouchScript_Behaviors_FullscreenTarget_TargetTypMethodDeclarations.h"
// TouchScript.Behaviors.FullscreenTarget
#include "TouchScript_TouchScript_Behaviors_FullscreenTarget.h"
// TouchScript.Behaviors.FullscreenTarget
#include "TouchScript_TouchScript_Behaviors_FullscreenTargetMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxCollider.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxColliderMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
struct BoxCollider_t684;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m296_gshared (Component_t102 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m296(__this, method) (( Object_t * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
#define Component_GetComponent_TisBoxCollider_t684_m3807(__this, method) (( BoxCollider_t684 * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
struct Camera_t32;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t32_m280(__this, method) (( Camera_t32 * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
// System.Void TouchScript.Behaviors.FullscreenTarget::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void FullscreenTarget__ctor_m3190 (FullscreenTarget_t589 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Behaviors.FullscreenTarget::Awake()
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral314;
extern "C" void FullscreenTarget_Awake_m3191 (FullscreenTarget_t589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral314 = il2cpp_codegen_string_literal_from_index(314);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_LogWarning_m378(NULL /*static, unused*/, _stringLiteral314, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Behaviors.FullscreenTarget::Update()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxColliderMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisBoxCollider_t684_m3807_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern "C" void FullscreenTarget_Update_m3192 (FullscreenTarget_t589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisBoxCollider_t684_m3807_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484013);
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	BoxCollider_t684 * V_0 = {0};
	Camera_t32 * V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		BoxCollider_t684 * L_0 = Component_GetComponent_TisBoxCollider_t684_m3807(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t684_m3807_MethodInfo_var);
		V_0 = L_0;
		Camera_t32 * L_1 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		V_1 = L_1;
		Camera_t32 * L_2 = V_1;
		NullCheck(L_2);
		float L_3 = Camera_get_fieldOfView_m339(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_4 = tanf(((float)((float)((float)((float)L_3/(float)(360.0f)))*(float)(3.14159274f))));
		V_2 = ((float)((float)(2.0f)*(float)L_4));
		int32_t L_5 = (__this->___Type_2);
		if (L_5)
		{
			goto IL_0060;
		}
	}
	{
		float L_6 = V_2;
		Camera_t32 * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = Camera_get_farClipPlane_m391(L_7, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_6*(float)L_8));
		BoxCollider_t684 * L_9 = V_0;
		Camera_t32 * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = Camera_get_farClipPlane_m391(L_10, /*hidden argument*/NULL);
		Vector3_t28  L_12 = {0};
		Vector3__ctor_m396(&L_12, (0.0f), (0.0f), L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		BoxCollider_set_center_m3808(L_9, L_12, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_0060:
	{
		int32_t L_13 = (__this->___Type_2);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_009c;
		}
	}
	{
		float L_14 = V_2;
		Camera_t32 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = Camera_get_nearClipPlane_m387(L_15, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_14*(float)((float)((float)L_16+(float)(0.0051f)))));
		BoxCollider_t684 * L_17 = V_0;
		Camera_t32 * L_18 = V_1;
		NullCheck(L_18);
		float L_19 = Camera_get_nearClipPlane_m387(L_18, /*hidden argument*/NULL);
		Vector3_t28  L_20 = {0};
		Vector3__ctor_m396(&L_20, (0.0f), (0.0f), ((float)((float)L_19+(float)(0.0051f))), /*hidden argument*/NULL);
		NullCheck(L_17);
		BoxCollider_set_center_m3808(L_17, L_20, /*hidden argument*/NULL);
	}

IL_009c:
	{
		int32_t L_21 = Screen_get_width_m428(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_22 = Screen_get_height_m429(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_23 = V_2;
		V_3 = ((float)((float)((float)((float)(((float)L_21))/(float)(((float)L_22))))*(float)L_23));
		BoxCollider_t684 * L_24 = V_0;
		float L_25 = V_3;
		float L_26 = V_2;
		Vector3_t28  L_27 = {0};
		Vector3__ctor_m396(&L_27, L_25, L_26, (0.01f), /*hidden argument*/NULL);
		NullCheck(L_24);
		BoxCollider_set_size_m3809(L_24, L_27, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Behaviors.Transformer2D
#include "TouchScript_TouchScript_Behaviors_Transformer2D.h"
// TouchScript.Behaviors.Transformer2D
#include "TouchScript_TouchScript_Behaviors_Transformer2DMethodDeclarations.h"
// TouchScript.Gestures.Simple.SimplePanGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimplePanGesture.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_gen.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// TouchScript.Gestures.Simple.SimpleScaleGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimpleScaleGesture.h"
// TouchScript.Gestures.Simple.SimpleRotateGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimpleRotateGesture.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_genMethodDeclarations.h"
// TouchScript.Gestures.Simple.SimplePanGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimplePanGestureMethodDeclarations.h"
// TouchScript.Gestures.Simple.SimpleScaleGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimpleScaleGestureMethodDeclarations.h"
// TouchScript.Gestures.Simple.SimpleRotateGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimpleRotateGestureMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
struct SimplePanGesture_t612;
// Declaration !!0 UnityEngine.Component::GetComponent<TouchScript.Gestures.Simple.SimplePanGesture>()
// !!0 UnityEngine.Component::GetComponent<TouchScript.Gestures.Simple.SimplePanGesture>()
#define Component_GetComponent_TisSimplePanGesture_t612_m3810(__this, method) (( SimplePanGesture_t612 * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
struct SimpleScaleGesture_t616;
// Declaration !!0 UnityEngine.Component::GetComponent<TouchScript.Gestures.Simple.SimpleScaleGesture>()
// !!0 UnityEngine.Component::GetComponent<TouchScript.Gestures.Simple.SimpleScaleGesture>()
#define Component_GetComponent_TisSimpleScaleGesture_t616_m3811(__this, method) (( SimpleScaleGesture_t616 * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
struct SimpleRotateGesture_t614;
// Declaration !!0 UnityEngine.Component::GetComponent<TouchScript.Gestures.Simple.SimpleRotateGesture>()
// !!0 UnityEngine.Component::GetComponent<TouchScript.Gestures.Simple.SimpleRotateGesture>()
#define Component_GetComponent_TisSimpleRotateGesture_t614_m3812(__this, method) (( SimpleRotateGesture_t614 * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
// System.Void TouchScript.Behaviors.Transformer2D::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void Transformer2D__ctor_m3193 (Transformer2D_t590 * __this, const MethodInfo* method)
{
	{
		__this->___Speed_2 = (10.0f);
		__this->___PanMultiplier_3 = (1.0f);
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer2D::Awake()
// TouchScript.Behaviors.Transformer2D
#include "TouchScript_TouchScript_Behaviors_Transformer2DMethodDeclarations.h"
extern "C" void Transformer2D_Awake_m3194 (Transformer2D_t590 * __this, const MethodInfo* method)
{
	{
		Transformer2D_setDefaults_m3198(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer2D::OnEnable()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_genMethodDeclarations.h"
// TouchScript.Gestures.Simple.SimplePanGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimplePanGestureMethodDeclarations.h"
// TouchScript.Gestures.Simple.SimpleScaleGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimpleScaleGestureMethodDeclarations.h"
// TouchScript.Gestures.Simple.SimpleRotateGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimpleRotateGestureMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisSimplePanGesture_t612_m3810_MethodInfo_var;
extern const MethodInfo* Transformer2D_panHandler_m3199_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m1113_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSimpleScaleGesture_t616_m3811_MethodInfo_var;
extern const MethodInfo* Transformer2D_scaleHandler_m3201_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSimpleRotateGesture_t614_m3812_MethodInfo_var;
extern const MethodInfo* Transformer2D_rotateHandler_m3200_MethodInfo_var;
extern "C" void Transformer2D_OnEnable_m3195 (Transformer2D_t590 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		Component_GetComponent_TisSimplePanGesture_t612_m3810_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484014);
		Transformer2D_panHandler_m3199_MethodInfo_var = il2cpp_codegen_method_info_from_index(367);
		EventHandler_1__ctor_m1113_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		Component_GetComponent_TisSimpleScaleGesture_t616_m3811_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484016);
		Transformer2D_scaleHandler_m3201_MethodInfo_var = il2cpp_codegen_method_info_from_index(369);
		Component_GetComponent_TisSimpleRotateGesture_t614_m3812_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484018);
		Transformer2D_rotateHandler_m3200_MethodInfo_var = il2cpp_codegen_method_info_from_index(371);
		s_Il2CppMethodIntialized = true;
	}
	{
		SimplePanGesture_t612 * L_0 = Component_GetComponent_TisSimplePanGesture_t612_m3810(__this, /*hidden argument*/Component_GetComponent_TisSimplePanGesture_t612_m3810_MethodInfo_var);
		bool L_1 = Object_op_Inequality_m268(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		SimplePanGesture_t612 * L_2 = Component_GetComponent_TisSimplePanGesture_t612_m3810(__this, /*hidden argument*/Component_GetComponent_TisSimplePanGesture_t612_m3810_MethodInfo_var);
		IntPtr_t L_3 = { (void*)Transformer2D_panHandler_m3199_MethodInfo_var };
		EventHandler_1_t241 * L_4 = (EventHandler_1_t241 *)il2cpp_codegen_object_new (EventHandler_1_t241_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1113(L_4, __this, L_3, /*hidden argument*/EventHandler_1__ctor_m1113_MethodInfo_var);
		NullCheck(L_2);
		SimplePanGesture_add_Panned_m3462(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		SimpleScaleGesture_t616 * L_5 = Component_GetComponent_TisSimpleScaleGesture_t616_m3811(__this, /*hidden argument*/Component_GetComponent_TisSimpleScaleGesture_t616_m3811_MethodInfo_var);
		bool L_6 = Object_op_Inequality_m268(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		SimpleScaleGesture_t616 * L_7 = Component_GetComponent_TisSimpleScaleGesture_t616_m3811(__this, /*hidden argument*/Component_GetComponent_TisSimpleScaleGesture_t616_m3811_MethodInfo_var);
		IntPtr_t L_8 = { (void*)Transformer2D_scaleHandler_m3201_MethodInfo_var };
		EventHandler_1_t241 * L_9 = (EventHandler_1_t241 *)il2cpp_codegen_object_new (EventHandler_1_t241_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1113(L_9, __this, L_8, /*hidden argument*/EventHandler_1__ctor_m1113_MethodInfo_var);
		NullCheck(L_7);
		SimpleScaleGesture_add_Scaled_m3503(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0050:
	{
		SimpleRotateGesture_t614 * L_10 = Component_GetComponent_TisSimpleRotateGesture_t614_m3812(__this, /*hidden argument*/Component_GetComponent_TisSimpleRotateGesture_t614_m3812_MethodInfo_var);
		bool L_11 = Object_op_Inequality_m268(NULL /*static, unused*/, L_10, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		SimpleRotateGesture_t614 * L_12 = Component_GetComponent_TisSimpleRotateGesture_t614_m3812(__this, /*hidden argument*/Component_GetComponent_TisSimpleRotateGesture_t614_m3812_MethodInfo_var);
		IntPtr_t L_13 = { (void*)Transformer2D_rotateHandler_m3200_MethodInfo_var };
		EventHandler_1_t241 * L_14 = (EventHandler_1_t241 *)il2cpp_codegen_object_new (EventHandler_1_t241_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1113(L_14, __this, L_13, /*hidden argument*/EventHandler_1__ctor_m1113_MethodInfo_var);
		NullCheck(L_12);
		SimpleRotateGesture_add_Rotated_m3483(L_12, L_14, /*hidden argument*/NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer2D::OnDisable()
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisSimplePanGesture_t612_m3810_MethodInfo_var;
extern const MethodInfo* Transformer2D_panHandler_m3199_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m1113_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSimpleScaleGesture_t616_m3811_MethodInfo_var;
extern const MethodInfo* Transformer2D_scaleHandler_m3201_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSimpleRotateGesture_t614_m3812_MethodInfo_var;
extern const MethodInfo* Transformer2D_rotateHandler_m3200_MethodInfo_var;
extern "C" void Transformer2D_OnDisable_m3196 (Transformer2D_t590 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		Component_GetComponent_TisSimplePanGesture_t612_m3810_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484014);
		Transformer2D_panHandler_m3199_MethodInfo_var = il2cpp_codegen_method_info_from_index(367);
		EventHandler_1__ctor_m1113_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		Component_GetComponent_TisSimpleScaleGesture_t616_m3811_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484016);
		Transformer2D_scaleHandler_m3201_MethodInfo_var = il2cpp_codegen_method_info_from_index(369);
		Component_GetComponent_TisSimpleRotateGesture_t614_m3812_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484018);
		Transformer2D_rotateHandler_m3200_MethodInfo_var = il2cpp_codegen_method_info_from_index(371);
		s_Il2CppMethodIntialized = true;
	}
	{
		SimplePanGesture_t612 * L_0 = Component_GetComponent_TisSimplePanGesture_t612_m3810(__this, /*hidden argument*/Component_GetComponent_TisSimplePanGesture_t612_m3810_MethodInfo_var);
		bool L_1 = Object_op_Inequality_m268(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		SimplePanGesture_t612 * L_2 = Component_GetComponent_TisSimplePanGesture_t612_m3810(__this, /*hidden argument*/Component_GetComponent_TisSimplePanGesture_t612_m3810_MethodInfo_var);
		IntPtr_t L_3 = { (void*)Transformer2D_panHandler_m3199_MethodInfo_var };
		EventHandler_1_t241 * L_4 = (EventHandler_1_t241 *)il2cpp_codegen_object_new (EventHandler_1_t241_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1113(L_4, __this, L_3, /*hidden argument*/EventHandler_1__ctor_m1113_MethodInfo_var);
		NullCheck(L_2);
		SimplePanGesture_remove_Panned_m3463(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		SimpleScaleGesture_t616 * L_5 = Component_GetComponent_TisSimpleScaleGesture_t616_m3811(__this, /*hidden argument*/Component_GetComponent_TisSimpleScaleGesture_t616_m3811_MethodInfo_var);
		bool L_6 = Object_op_Inequality_m268(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		SimpleScaleGesture_t616 * L_7 = Component_GetComponent_TisSimpleScaleGesture_t616_m3811(__this, /*hidden argument*/Component_GetComponent_TisSimpleScaleGesture_t616_m3811_MethodInfo_var);
		IntPtr_t L_8 = { (void*)Transformer2D_scaleHandler_m3201_MethodInfo_var };
		EventHandler_1_t241 * L_9 = (EventHandler_1_t241 *)il2cpp_codegen_object_new (EventHandler_1_t241_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1113(L_9, __this, L_8, /*hidden argument*/EventHandler_1__ctor_m1113_MethodInfo_var);
		NullCheck(L_7);
		SimpleScaleGesture_remove_Scaled_m3504(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0050:
	{
		SimpleRotateGesture_t614 * L_10 = Component_GetComponent_TisSimpleRotateGesture_t614_m3812(__this, /*hidden argument*/Component_GetComponent_TisSimpleRotateGesture_t614_m3812_MethodInfo_var);
		bool L_11 = Object_op_Inequality_m268(NULL /*static, unused*/, L_10, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		SimpleRotateGesture_t614 * L_12 = Component_GetComponent_TisSimpleRotateGesture_t614_m3812(__this, /*hidden argument*/Component_GetComponent_TisSimpleRotateGesture_t614_m3812_MethodInfo_var);
		IntPtr_t L_13 = { (void*)Transformer2D_rotateHandler_m3200_MethodInfo_var };
		EventHandler_1_t241 * L_14 = (EventHandler_1_t241 *)il2cpp_codegen_object_new (EventHandler_1_t241_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1113(L_14, __this, L_13, /*hidden argument*/EventHandler_1__ctor_m1113_MethodInfo_var);
		NullCheck(L_12);
		SimpleRotateGesture_remove_Rotated_m3484(L_12, L_14, /*hidden argument*/NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer2D::Update()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void Transformer2D_Update_m3197 (Transformer2D_t590 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t28  V_1 = {0};
	Vector3_t28  V_2 = {0};
	Vector3_t28  V_3 = {0};
	Vector3_t28  V_4 = {0};
	Vector3_t28  V_5 = {0};
	Vector3_t28  V_6 = {0};
	Vector3_t28  V_7 = {0};
	Vector3_t28  V_8 = {0};
	Vector3_t28  V_9 = {0};
	Vector3_t28  V_10 = {0};
	Vector3_t28  V_11 = {0};
	Vector3_t28  V_12 = {0};
	Vector3_t28  V_13 = {0};
	Vector3_t28  V_14 = {0};
	Quaternion_t104  V_15 = {0};
	{
		float L_0 = (__this->___Speed_2);
		float L_1 = Time_get_deltaTime_m383(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_0*(float)L_1));
		Transform_t48 * L_2 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t28  L_3 = Transform_get_localPosition_m1196(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = ((&V_1)->___x_1);
		Vector3_t28 * L_5 = &(__this->___lastLocalPosition_7);
		float L_6 = (L_5->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m2715(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		Vector3_t28 * L_8 = &(__this->___localPositionToGo_4);
		Transform_t48 * L_9 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t28  L_10 = Transform_get_localPosition_m1196(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = ((&V_2)->___x_1);
		L_8->___x_1 = L_11;
	}

IL_0053:
	{
		Transform_t48 * L_12 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t28  L_13 = Transform_get_localPosition_m1196(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		float L_14 = ((&V_3)->___y_2);
		Vector3_t28 * L_15 = &(__this->___lastLocalPosition_7);
		float L_16 = (L_15->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		bool L_17 = Mathf_Approximately_m2715(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_009a;
		}
	}
	{
		Vector3_t28 * L_18 = &(__this->___localPositionToGo_4);
		Transform_t48 * L_19 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t28  L_20 = Transform_get_localPosition_m1196(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21 = ((&V_4)->___y_2);
		L_18->___y_2 = L_21;
	}

IL_009a:
	{
		Transform_t48 * L_22 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t28  L_23 = Transform_get_localPosition_m1196(L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		float L_24 = ((&V_5)->___z_3);
		Vector3_t28 * L_25 = &(__this->___lastLocalPosition_7);
		float L_26 = (L_25->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		bool L_27 = Mathf_Approximately_m2715(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00e2;
		}
	}
	{
		Vector3_t28 * L_28 = &(__this->___localPositionToGo_4);
		Transform_t48 * L_29 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t28  L_30 = Transform_get_localPosition_m1196(L_29, /*hidden argument*/NULL);
		V_6 = L_30;
		float L_31 = ((&V_6)->___z_3);
		L_28->___z_3 = L_31;
	}

IL_00e2:
	{
		Transform_t48 * L_32 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		Transform_t48 * L_33 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t28  L_34 = Transform_get_localPosition_m1196(L_33, /*hidden argument*/NULL);
		Vector3_t28  L_35 = (__this->___localPositionToGo_4);
		float L_36 = V_0;
		Vector3_t28  L_37 = Vector3_Lerp_m3059(NULL /*static, unused*/, L_34, L_35, L_36, /*hidden argument*/NULL);
		Vector3_t28  L_38 = L_37;
		V_7 = L_38;
		__this->___lastLocalPosition_7 = L_38;
		Vector3_t28  L_39 = V_7;
		NullCheck(L_32);
		Transform_set_localPosition_m1215(L_32, L_39, /*hidden argument*/NULL);
		Transform_t48 * L_40 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t28  L_41 = Transform_get_localScale_m357(L_40, /*hidden argument*/NULL);
		V_7 = L_41;
		float L_42 = ((&V_7)->___x_1);
		Vector3_t28 * L_43 = &(__this->___lastLocalScale_8);
		float L_44 = (L_43->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		bool L_45 = Mathf_Approximately_m2715(NULL /*static, unused*/, L_42, L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0157;
		}
	}
	{
		Vector3_t28 * L_46 = &(__this->___localScaleToGo_5);
		Transform_t48 * L_47 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_t28  L_48 = Transform_get_localScale_m357(L_47, /*hidden argument*/NULL);
		V_8 = L_48;
		float L_49 = ((&V_8)->___x_1);
		L_46->___x_1 = L_49;
	}

IL_0157:
	{
		Transform_t48 * L_50 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_t28  L_51 = Transform_get_localScale_m357(L_50, /*hidden argument*/NULL);
		V_9 = L_51;
		float L_52 = ((&V_9)->___y_2);
		Vector3_t28 * L_53 = &(__this->___lastLocalScale_8);
		float L_54 = (L_53->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		bool L_55 = Mathf_Approximately_m2715(NULL /*static, unused*/, L_52, L_54, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_019f;
		}
	}
	{
		Vector3_t28 * L_56 = &(__this->___localScaleToGo_5);
		Transform_t48 * L_57 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		Vector3_t28  L_58 = Transform_get_localScale_m357(L_57, /*hidden argument*/NULL);
		V_10 = L_58;
		float L_59 = ((&V_10)->___y_2);
		L_56->___y_2 = L_59;
	}

IL_019f:
	{
		Transform_t48 * L_60 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		Vector3_t28  L_61 = Transform_get_localScale_m357(L_60, /*hidden argument*/NULL);
		V_11 = L_61;
		float L_62 = ((&V_11)->___z_3);
		Vector3_t28 * L_63 = &(__this->___lastLocalScale_8);
		float L_64 = (L_63->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		bool L_65 = Mathf_Approximately_m2715(NULL /*static, unused*/, L_62, L_64, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_01e7;
		}
	}
	{
		Vector3_t28 * L_66 = &(__this->___localScaleToGo_5);
		Transform_t48 * L_67 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		Vector3_t28  L_68 = Transform_get_localScale_m357(L_67, /*hidden argument*/NULL);
		V_12 = L_68;
		float L_69 = ((&V_12)->___z_3);
		L_66->___z_3 = L_69;
	}

IL_01e7:
	{
		Transform_t48 * L_70 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector3_t28  L_71 = Transform_get_localScale_m357(L_70, /*hidden argument*/NULL);
		Vector3_t28  L_72 = (__this->___localScaleToGo_5);
		float L_73 = V_0;
		Vector3_t28  L_74 = Vector3_Lerp_m3059(NULL /*static, unused*/, L_71, L_72, L_73, /*hidden argument*/NULL);
		V_13 = L_74;
		Vector3_t28  L_75 = V_13;
		Transform_t48 * L_76 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_76);
		Vector3_t28  L_77 = Transform_get_localScale_m357(L_76, /*hidden argument*/NULL);
		bool L_78 = Vector3_op_Inequality_m3008(NULL /*static, unused*/, L_75, L_77, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_022f;
		}
	}
	{
		Transform_t48 * L_79 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		Vector3_t28  L_80 = V_13;
		Vector3_t28  L_81 = L_80;
		V_14 = L_81;
		__this->___lastLocalScale_8 = L_81;
		Vector3_t28  L_82 = V_14;
		NullCheck(L_79);
		Transform_set_localScale_m358(L_79, L_82, /*hidden argument*/NULL);
	}

IL_022f:
	{
		Transform_t48 * L_83 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_83);
		Quaternion_t104  L_84 = Transform_get_localRotation_m1235(L_83, /*hidden argument*/NULL);
		Quaternion_t104  L_85 = (__this->___lastLocalRotation_9);
		bool L_86 = Quaternion_op_Inequality_m3009(NULL /*static, unused*/, L_84, L_85, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_025b;
		}
	}
	{
		Transform_t48 * L_87 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_87);
		Quaternion_t104  L_88 = Transform_get_localRotation_m1235(L_87, /*hidden argument*/NULL);
		__this->___localRotationToGo_6 = L_88;
	}

IL_025b:
	{
		Transform_t48 * L_89 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		Transform_t48 * L_90 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_90);
		Quaternion_t104  L_91 = Transform_get_localRotation_m1235(L_90, /*hidden argument*/NULL);
		Quaternion_t104  L_92 = (__this->___localRotationToGo_6);
		float L_93 = V_0;
		Quaternion_t104  L_94 = Quaternion_Lerp_m1236(NULL /*static, unused*/, L_91, L_92, L_93, /*hidden argument*/NULL);
		Quaternion_t104  L_95 = L_94;
		V_15 = L_95;
		__this->___lastLocalRotation_9 = L_95;
		Quaternion_t104  L_96 = V_15;
		NullCheck(L_89);
		Transform_set_localRotation_m1237(L_89, L_96, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer2D::setDefaults()
extern "C" void Transformer2D_setDefaults_m3198 (Transformer2D_t590 * __this, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	Quaternion_t104  V_1 = {0};
	{
		Transform_t48 * L_0 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t28  L_1 = Transform_get_localPosition_m1196(L_0, /*hidden argument*/NULL);
		Vector3_t28  L_2 = L_1;
		V_0 = L_2;
		__this->___lastLocalPosition_7 = L_2;
		Vector3_t28  L_3 = V_0;
		__this->___localPositionToGo_4 = L_3;
		Transform_t48 * L_4 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t104  L_5 = Transform_get_localRotation_m1235(L_4, /*hidden argument*/NULL);
		Quaternion_t104  L_6 = L_5;
		V_1 = L_6;
		__this->___lastLocalRotation_9 = L_6;
		Quaternion_t104  L_7 = V_1;
		__this->___localRotationToGo_6 = L_7;
		Transform_t48 * L_8 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t28  L_9 = Transform_get_localScale_m357(L_8, /*hidden argument*/NULL);
		Vector3_t28  L_10 = L_9;
		V_0 = L_10;
		__this->___lastLocalScale_8 = L_10;
		Vector3_t28  L_11 = V_0;
		__this->___localScaleToGo_5 = L_11;
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer2D::panHandler(System.Object,System.EventArgs)
// System.Object
#include "mscorlib_System_Object.h"
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
extern TypeInfo* SimplePanGesture_t612_il2cpp_TypeInfo_var;
extern "C" void Transformer2D_panHandler_m3199 (Transformer2D_t590 * __this, Object_t * ___sender, EventArgs_t223 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimplePanGesture_t612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	SimplePanGesture_t612 * V_0 = {0};
	{
		Object_t * L_0 = ___sender;
		V_0 = ((SimplePanGesture_t612 *)CastclassClass(L_0, SimplePanGesture_t612_il2cpp_TypeInfo_var));
		Vector3_t28  L_1 = (__this->___localPositionToGo_4);
		SimplePanGesture_t612 * L_2 = V_0;
		NullCheck(L_2);
		Vector3_t28  L_3 = SimplePanGesture_get_LocalDeltaPosition_m3470(L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___PanMultiplier_3);
		Vector3_t28  L_5 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Vector3_t28  L_6 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		__this->___localPositionToGo_4 = L_6;
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer2D::rotateHandler(System.Object,System.EventArgs)
extern TypeInfo* SimpleRotateGesture_t614_il2cpp_TypeInfo_var;
extern "C" void Transformer2D_rotateHandler_m3200 (Transformer2D_t590 * __this, Object_t * ___sender, EventArgs_t223 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleRotateGesture_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	SimpleRotateGesture_t614 * V_0 = {0};
	{
		Object_t * L_0 = ___sender;
		V_0 = ((SimpleRotateGesture_t614 *)CastclassClass(L_0, SimpleRotateGesture_t614_il2cpp_TypeInfo_var));
		SimpleRotateGesture_t614 * L_1 = V_0;
		NullCheck(L_1);
		float L_2 = SimpleRotateGesture_get_DeltaRotation_m3489(L_1, /*hidden argument*/NULL);
		float L_3 = fabsf(L_2);
		if ((!(((double)(((double)L_3))) > ((double)(0.01)))))
		{
			goto IL_0090;
		}
	}
	{
		Transform_t48 * L_4 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t48 * L_5 = Transform_get_parent_m1205(L_4, /*hidden argument*/NULL);
		bool L_6 = Object_op_Equality_m295(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		SimpleRotateGesture_t614 * L_7 = V_0;
		NullCheck(L_7);
		float L_8 = SimpleRotateGesture_get_DeltaRotation_m3489(L_7, /*hidden argument*/NULL);
		SimpleRotateGesture_t614 * L_9 = V_0;
		NullCheck(L_9);
		Vector3_t28  L_10 = SimpleRotateGesture_get_RotationAxis_m3491(L_9, /*hidden argument*/NULL);
		Quaternion_t104  L_11 = Quaternion_AngleAxis_m3813(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		Quaternion_t104  L_12 = (__this->___localRotationToGo_6);
		Quaternion_t104  L_13 = Quaternion_op_Multiply_m1238(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		__this->___localRotationToGo_6 = L_13;
		goto IL_0090;
	}

IL_005e:
	{
		SimpleRotateGesture_t614 * L_14 = V_0;
		NullCheck(L_14);
		float L_15 = SimpleRotateGesture_get_DeltaRotation_m3489(L_14, /*hidden argument*/NULL);
		Transform_t48 * L_16 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_t48 * L_17 = Transform_get_parent_m1205(L_16, /*hidden argument*/NULL);
		SimpleRotateGesture_t614 * L_18 = V_0;
		NullCheck(L_18);
		Vector3_t28  L_19 = SimpleRotateGesture_get_RotationAxis_m3491(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t28  L_20 = Transform_InverseTransformDirection_m3814(L_17, L_19, /*hidden argument*/NULL);
		Quaternion_t104  L_21 = Quaternion_AngleAxis_m3813(NULL /*static, unused*/, L_15, L_20, /*hidden argument*/NULL);
		Quaternion_t104  L_22 = (__this->___localRotationToGo_6);
		Quaternion_t104  L_23 = Quaternion_op_Multiply_m1238(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		__this->___localRotationToGo_6 = L_23;
	}

IL_0090:
	{
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer2D::scaleHandler(System.Object,System.EventArgs)
extern TypeInfo* SimpleScaleGesture_t616_il2cpp_TypeInfo_var;
extern "C" void Transformer2D_scaleHandler_m3201 (Transformer2D_t590 * __this, Object_t * ___sender, EventArgs_t223 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleScaleGesture_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(383);
		s_Il2CppMethodIntialized = true;
	}
	SimpleScaleGesture_t616 * V_0 = {0};
	{
		Object_t * L_0 = ___sender;
		V_0 = ((SimpleScaleGesture_t616 *)CastclassClass(L_0, SimpleScaleGesture_t616_il2cpp_TypeInfo_var));
		SimpleScaleGesture_t616 * L_1 = V_0;
		NullCheck(L_1);
		float L_2 = SimpleScaleGesture_get_LocalDeltaScale_m3509(L_1, /*hidden argument*/NULL);
		float L_3 = fabsf(((float)((float)L_2-(float)(1.0f))));
		if ((!(((double)(((double)L_3))) > ((double)(1.0E-05)))))
		{
			goto IL_003e;
		}
	}
	{
		Vector3_t28  L_4 = (__this->___localScaleToGo_5);
		SimpleScaleGesture_t616 * L_5 = V_0;
		NullCheck(L_5);
		float L_6 = SimpleScaleGesture_get_LocalDeltaScale_m3509(L_5, /*hidden argument*/NULL);
		Vector3_t28  L_7 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		__this->___localScaleToGo_5 = L_7;
	}

IL_003e:
	{
		return;
	}
}
// TouchScript.Clusters.Clusters
#include "TouchScript_TouchScript_Clusters_Clusters.h"
// TouchScript.Clusters.Clusters
#include "TouchScript_TouchScript_Clusters_ClustersMethodDeclarations.h"
// System.Collections.Generic.List`1<TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_List_1_gen_30.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// TouchScript.TouchManager
#include "TouchScript_TouchScript_TouchManager.h"
// System.Collections.Generic.List`1<TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// TouchScript.TouchManager
#include "TouchScript_TouchScript_TouchManagerMethodDeclarations.h"
// TouchScript.Utils.ClusterUtils
#include "TouchScript_TouchScript_Utils_ClusterUtilsMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.Void TouchScript.Clusters.Clusters::.ctor()
// System.Collections.Generic.List`1<TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// TouchScript.Clusters.Clusters
#include "TouchScript_TouchScript_Clusters_ClustersMethodDeclarations.h"
extern TypeInfo* List_1_t592_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3815_MethodInfo_var;
extern "C" void Clusters__ctor_m3202 (Clusters_t591 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		List_1__ctor_m3815_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484020);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t592 * L_0 = (List_1_t592 *)il2cpp_codegen_object_new (List_1_t592_il2cpp_TypeInfo_var);
		List_1__ctor_m3815(L_0, /*hidden argument*/List_1__ctor_m3815_MethodInfo_var);
		__this->___points_2 = L_0;
		List_1_t592 * L_1 = (List_1_t592 *)il2cpp_codegen_object_new (List_1_t592_il2cpp_TypeInfo_var);
		List_1__ctor_m3815(L_1, /*hidden argument*/List_1__ctor_m3815_MethodInfo_var);
		__this->___cluster1_4 = L_1;
		List_1_t592 * L_2 = (List_1_t592 *)il2cpp_codegen_object_new (List_1_t592_il2cpp_TypeInfo_var);
		List_1__ctor_m3815(L_2, /*hidden argument*/List_1__ctor_m3815_MethodInfo_var);
		__this->___cluster2_5 = L_2;
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		Clusters_set_MinPointsDistance_m3205(__this, (0.0f), /*hidden argument*/NULL);
		Clusters_markDirty_m3217(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TouchScript.Clusters.Clusters::get_PointsCount()
extern "C" int32_t Clusters_get_PointsCount_m3203 (Clusters_t591 * __this, const MethodInfo* method)
{
	{
		List_1_t592 * L_0 = (__this->___points_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Single TouchScript.Clusters.Clusters::get_MinPointsDistance()
extern "C" float Clusters_get_MinPointsDistance_m3204 (Clusters_t591 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___minPointDistance_6);
		return L_0;
	}
}
// System.Void TouchScript.Clusters.Clusters::set_MinPointsDistance(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Clusters_set_MinPointsDistance_m3205 (Clusters_t591 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___minPointDistance_6 = L_0;
		float L_1 = ___value;
		float L_2 = ___value;
		__this->___minPointDistanceSqr_7 = ((float)((float)L_1*(float)L_2));
		return;
	}
}
// System.Boolean TouchScript.Clusters.Clusters::get_HasClusters()
extern "C" bool Clusters_get_HasClusters_m3206 (Clusters_t591 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___dirty_3);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Clusters_distributePoints_m3215(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		bool L_1 = (__this->___hasClusters_8);
		return L_1;
	}
}
// UnityEngine.Vector2 TouchScript.Clusters.Clusters::GetCenterPosition(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// TouchScript.Utils.ClusterUtils
#include "TouchScript_TouchScript_Utils_ClusterUtilsMethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ClusterUtils_t667_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  Clusters_GetCenterPosition_m3207 (Clusters_t591 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ClusterUtils_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	int32_t V_1 = 0;
	{
		bool L_0 = Clusters_get_HasClusters_m3206(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_1 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = ___id;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0047;
	}

IL_0025:
	{
		List_1_t592 * L_5 = (__this->___cluster1_4);
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		Vector2_t85  L_6 = ClusterUtils_Get2DCenterPosition_m3791(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_004d;
	}

IL_0036:
	{
		List_1_t592 * L_7 = (__this->___cluster2_5);
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		Vector2_t85  L_8 = ClusterUtils_Get2DCenterPosition_m3791(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_004d;
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_9 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_9;
	}

IL_004d:
	{
		Vector2_t85  L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Vector2 TouchScript.Clusters.Clusters::GetPreviousCenterPosition(System.Int32)
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ClusterUtils_t667_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  Clusters_GetPreviousCenterPosition_m3208 (Clusters_t591 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ClusterUtils_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	int32_t V_1 = 0;
	{
		bool L_0 = Clusters_get_HasClusters_m3206(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_1 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = ___id;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0047;
	}

IL_0025:
	{
		List_1_t592 * L_5 = (__this->___cluster1_4);
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		Vector2_t85  L_6 = ClusterUtils_GetPrevious2DCenterPosition_m3792(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_004d;
	}

IL_0036:
	{
		List_1_t592 * L_7 = (__this->___cluster2_5);
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		Vector2_t85  L_8 = ClusterUtils_GetPrevious2DCenterPosition_m3792(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_004d;
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_9 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_9;
	}

IL_004d:
	{
		Vector2_t85  L_10 = V_0;
		return L_10;
	}
}
// System.Void TouchScript.Clusters.Clusters::AddPoint(TouchScript.ITouch)
extern "C" void Clusters_AddPoint_m3209 (Clusters_t591 * __this, Object_t * ___point, const MethodInfo* method)
{
	{
		List_1_t592 * L_0 = (__this->___points_2);
		Object_t * L_1 = ___point;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<TouchScript.ITouch>::Contains(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		List_1_t592 * L_3 = (__this->___points_2);
		Object_t * L_4 = ___point;
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Add(!0) */, L_3, L_4);
		Clusters_markDirty_m3217(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Clusters.Clusters::AddPoints(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* IEnumerable_1_t255_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t256_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" void Clusters_AddPoints_m3210 (Clusters_t591 * __this, Object_t* ___points, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		IEnumerator_1_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___points;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TouchScript.ITouch>::GetEnumerator() */, IEnumerable_1_t255_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_0;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TouchScript.ITouch>::get_Current() */, IEnumerator_1_t256_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			Object_t * L_4 = V_1;
			Clusters_AddPoint_m3209(__this, L_4, /*hidden argument*/NULL);
		}

IL_001a:
		{
			Object_t* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x37, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Object_t* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_8);
		}

IL_0036:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void TouchScript.Clusters.Clusters::RemovePoint(TouchScript.ITouch)
extern "C" void Clusters_RemovePoint_m3211 (Clusters_t591 * __this, Object_t * ___point, const MethodInfo* method)
{
	{
		List_1_t592 * L_0 = (__this->___points_2);
		Object_t * L_1 = ___point;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<TouchScript.ITouch>::Contains(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		List_1_t592 * L_3 = (__this->___points_2);
		Object_t * L_4 = ___point;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<TouchScript.ITouch>::Remove(!0) */, L_3, L_4);
		Clusters_markDirty_m3217(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Clusters.Clusters::RemovePoints(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* IEnumerable_1_t255_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t256_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" void Clusters_RemovePoints_m3212 (Clusters_t591 * __this, Object_t* ___points, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		IEnumerator_1_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___points;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TouchScript.ITouch>::GetEnumerator() */, IEnumerable_1_t255_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_0;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TouchScript.ITouch>::get_Current() */, IEnumerator_1_t256_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			Object_t * L_4 = V_1;
			Clusters_RemovePoint_m3211(__this, L_4, /*hidden argument*/NULL);
		}

IL_001a:
		{
			Object_t* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x37, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Object_t* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_8);
		}

IL_0036:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void TouchScript.Clusters.Clusters::RemoveAllPoints()
extern "C" void Clusters_RemoveAllPoints_m3213 (Clusters_t591 * __this, const MethodInfo* method)
{
	{
		List_1_t592 * L_0 = (__this->___points_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Clear() */, L_0);
		Clusters_markDirty_m3217(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Clusters.Clusters::Invalidate()
extern "C" void Clusters_Invalidate_m3214 (Clusters_t591 * __this, const MethodInfo* method)
{
	{
		Clusters_markDirty_m3217(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Clusters.Clusters::distributePoints()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ClusterUtils_t667_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral315;
extern "C" void Clusters_distributePoints_m3215 (Clusters_t591 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ClusterUtils_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		_stringLiteral315 = il2cpp_codegen_string_literal_from_index(315);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	Vector2_t85  V_5 = {0};
	Vector2_t85  V_6 = {0};
	Object_t * V_7 = {0};
	Object_t * V_8 = {0};
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	Object_t * V_12 = {0};
	float V_13 = 0.0f;
	Vector2_t85  V_14 = {0};
	Vector2_t85  V_15 = {0};
	int32_t V_16 = 0;
	Object_t * V_17 = {0};
	Vector2_t85  V_18 = {0};
	Vector2_t85  V_19 = {0};
	{
		List_1_t592 * L_0 = (__this->___cluster1_4);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Clear() */, L_0);
		List_1_t592 * L_1 = (__this->___cluster2_5);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Clear() */, L_1);
		bool L_2 = Clusters_checkClusters_m3216(__this, /*hidden argument*/NULL);
		__this->___hasClusters_8 = L_2;
		bool L_3 = (__this->___hasClusters_8);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		List_1_t592 * L_4 = (__this->___cluster1_4);
		List_1_t592 * L_5 = (__this->___points_2);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_5, 0);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Add(!0) */, L_4, L_6);
		List_1_t592 * L_7 = (__this->___cluster2_5);
		List_1_t592 * L_8 = (__this->___points_2);
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_8, 1);
		NullCheck(L_7);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Add(!0) */, L_7, L_9);
		List_1_t592 * L_10 = (__this->___points_2);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_10);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}

IL_0070:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_13;
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_14;
		V_3 = _stringLiteral315;
		V_4 = _stringLiteral315;
		goto IL_021e;
	}

IL_008e:
	{
		List_1_t592 * L_15 = (__this->___cluster1_4);
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		Vector2_t85  L_16 = ClusterUtils_Get2DCenterPosition_m3791(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		List_1_t592 * L_17 = (__this->___cluster2_5);
		Vector2_t85  L_18 = ClusterUtils_Get2DCenterPosition_m3791(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		V_7 = (Object_t *)NULL;
		V_8 = (Object_t *)NULL;
		V_9 = (-std::numeric_limits<float>::max());
		V_10 = (-std::numeric_limits<float>::max());
		V_11 = 0;
		goto IL_012d;
	}

IL_00c4:
	{
		List_1_t592 * L_19 = (__this->___points_2);
		int32_t L_20 = V_11;
		NullCheck(L_19);
		Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_19, L_20);
		V_12 = L_21;
		Vector2_t85  L_22 = V_5;
		Object_t * L_23 = V_12;
		NullCheck(L_23);
		Vector2_t85  L_24 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_23);
		Vector2_t85  L_25 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
		V_14 = L_25;
		float L_26 = Vector2_get_sqrMagnitude_m1156((&V_14), /*hidden argument*/NULL);
		V_13 = L_26;
		float L_27 = V_13;
		float L_28 = V_10;
		if ((!(((float)L_27) > ((float)L_28))))
		{
			goto IL_00fd;
		}
	}
	{
		float L_29 = V_13;
		V_10 = L_29;
		Object_t * L_30 = V_12;
		V_8 = L_30;
	}

IL_00fd:
	{
		Vector2_t85  L_31 = V_6;
		Object_t * L_32 = V_12;
		NullCheck(L_32);
		Vector2_t85  L_33 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_32);
		Vector2_t85  L_34 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		V_15 = L_34;
		float L_35 = Vector2_get_sqrMagnitude_m1156((&V_15), /*hidden argument*/NULL);
		V_13 = L_35;
		float L_36 = V_13;
		float L_37 = V_9;
		if ((!(((float)L_36) > ((float)L_37))))
		{
			goto IL_0127;
		}
	}
	{
		float L_38 = V_13;
		V_9 = L_38;
		Object_t * L_39 = V_12;
		V_7 = L_39;
	}

IL_0127:
	{
		int32_t L_40 = V_11;
		V_11 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_012d:
	{
		int32_t L_41 = V_11;
		int32_t L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_00c4;
		}
	}
	{
		Object_t * L_43 = V_7;
		Object_t * L_44 = V_8;
		if ((!(((Object_t*)(Object_t *)L_43) == ((Object_t*)(Object_t *)L_44))))
		{
			goto IL_0161;
		}
	}
	{
		Vector2_t85  L_45 = V_5;
		Vector2_t85  L_46 = V_6;
		Vector2_t85  L_47 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		Vector2_t85  L_48 = Vector2_op_Multiply_m1117(NULL /*static, unused*/, L_47, (0.5f), /*hidden argument*/NULL);
		V_5 = L_48;
		Object_t * L_49 = V_8;
		NullCheck(L_49);
		Vector2_t85  L_50 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_49);
		V_6 = L_50;
		goto IL_0173;
	}

IL_0161:
	{
		Object_t * L_51 = V_7;
		NullCheck(L_51);
		Vector2_t85  L_52 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_51);
		V_5 = L_52;
		Object_t * L_53 = V_8;
		NullCheck(L_53);
		Vector2_t85  L_54 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_53);
		V_6 = L_54;
	}

IL_0173:
	{
		List_1_t592 * L_55 = (__this->___cluster1_4);
		NullCheck(L_55);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Clear() */, L_55);
		List_1_t592 * L_56 = (__this->___cluster2_5);
		NullCheck(L_56);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Clear() */, L_56);
		V_16 = 0;
		goto IL_01f8;
	}

IL_0191:
	{
		List_1_t592 * L_57 = (__this->___points_2);
		int32_t L_58 = V_16;
		NullCheck(L_57);
		Object_t * L_59 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_57, L_58);
		V_17 = L_59;
		Vector2_t85  L_60 = V_5;
		Object_t * L_61 = V_17;
		NullCheck(L_61);
		Vector2_t85  L_62 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_61);
		Vector2_t85  L_63 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_60, L_62, /*hidden argument*/NULL);
		V_18 = L_63;
		float L_64 = Vector2_get_sqrMagnitude_m1156((&V_18), /*hidden argument*/NULL);
		Vector2_t85  L_65 = V_6;
		Object_t * L_66 = V_17;
		NullCheck(L_66);
		Vector2_t85  L_67 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_66);
		Vector2_t85  L_68 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_65, L_67, /*hidden argument*/NULL);
		V_19 = L_68;
		float L_69 = Vector2_get_sqrMagnitude_m1156((&V_19), /*hidden argument*/NULL);
		if ((!(((float)L_64) < ((float)L_69))))
		{
			goto IL_01e5;
		}
	}
	{
		List_1_t592 * L_70 = (__this->___cluster1_4);
		Object_t * L_71 = V_17;
		NullCheck(L_70);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Add(!0) */, L_70, L_71);
		goto IL_01f2;
	}

IL_01e5:
	{
		List_1_t592 * L_72 = (__this->___cluster2_5);
		Object_t * L_73 = V_17;
		NullCheck(L_72);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Add(!0) */, L_72, L_73);
	}

IL_01f2:
	{
		int32_t L_74 = V_16;
		V_16 = ((int32_t)((int32_t)L_74+(int32_t)1));
	}

IL_01f8:
	{
		int32_t L_75 = V_16;
		int32_t L_76 = V_0;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_77 = V_3;
		V_1 = L_77;
		String_t* L_78 = V_4;
		V_2 = L_78;
		List_1_t592 * L_79 = (__this->___cluster1_4);
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		String_t* L_80 = ClusterUtils_GetPointsHash_m3793(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		V_3 = L_80;
		List_1_t592 * L_81 = (__this->___cluster2_5);
		String_t* L_82 = ClusterUtils_GetPointsHash_m3793(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		V_4 = L_82;
	}

IL_021e:
	{
		String_t* L_83 = V_1;
		String_t* L_84 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_85 = String_op_Inequality_m2969(NULL /*static, unused*/, L_83, L_84, /*hidden argument*/NULL);
		if (L_85)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_86 = V_2;
		String_t* L_87 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_88 = String_op_Inequality_m2969(NULL /*static, unused*/, L_86, L_87, /*hidden argument*/NULL);
		if (L_88)
		{
			goto IL_008e;
		}
	}
	{
		Clusters_markClean_m3218(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TouchScript.Clusters.Clusters::checkClusters()
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" bool Clusters_checkClusters_m3216 (Clusters_t591 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t85  V_1 = {0};
	Vector2_t85  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector2_t85  V_7 = {0};
	Vector2_t85  V_8 = {0};
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	{
		List_1_t592 * L_0 = (__this->___points_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_0);
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_007b;
		}
	}
	{
		List_1_t592 * L_4 = (__this->___points_2);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_4, 0);
		NullCheck(L_5);
		Vector2_t85  L_6 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
		List_1_t592 * L_7 = (__this->___points_2);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_7, 1);
		NullCheck(L_8);
		Vector2_t85  L_9 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_8);
		V_2 = L_9;
		float L_10 = ((&V_1)->___x_1);
		float L_11 = ((&V_2)->___x_1);
		V_3 = ((float)((float)L_10-(float)L_11));
		float L_12 = ((&V_1)->___y_2);
		float L_13 = ((&V_2)->___y_2);
		V_4 = ((float)((float)L_12-(float)L_13));
		float L_14 = V_3;
		float L_15 = V_3;
		float L_16 = V_4;
		float L_17 = V_4;
		float L_18 = (__this->___minPointDistanceSqr_7);
		if ((!(((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))) >= ((float)L_18))))
		{
			goto IL_0079;
		}
	}
	{
		return 1;
	}

IL_0079:
	{
		return 0;
	}

IL_007b:
	{
		V_5 = 0;
		goto IL_0104;
	}

IL_0083:
	{
		int32_t L_19 = V_5;
		V_6 = ((int32_t)((int32_t)L_19+(int32_t)1));
		goto IL_00f6;
	}

IL_008e:
	{
		List_1_t592 * L_20 = (__this->___points_2);
		int32_t L_21 = V_5;
		NullCheck(L_20);
		Object_t * L_22 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_20, L_21);
		NullCheck(L_22);
		Vector2_t85  L_23 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_22);
		V_7 = L_23;
		List_1_t592 * L_24 = (__this->___points_2);
		int32_t L_25 = V_6;
		NullCheck(L_24);
		Object_t * L_26 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_24, L_25);
		NullCheck(L_26);
		Vector2_t85  L_27 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_26);
		V_8 = L_27;
		float L_28 = ((&V_7)->___x_1);
		float L_29 = ((&V_8)->___x_1);
		V_9 = ((float)((float)L_28-(float)L_29));
		float L_30 = ((&V_7)->___y_2);
		float L_31 = ((&V_8)->___y_2);
		V_10 = ((float)((float)L_30-(float)L_31));
		float L_32 = V_9;
		float L_33 = V_9;
		float L_34 = V_10;
		float L_35 = V_10;
		float L_36 = (__this->___minPointDistanceSqr_7);
		if ((!(((float)((float)((float)((float)((float)L_32*(float)L_33))+(float)((float)((float)L_34*(float)L_35))))) >= ((float)L_36))))
		{
			goto IL_00f0;
		}
	}
	{
		return 1;
	}

IL_00f0:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00f6:
	{
		int32_t L_38 = V_6;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_0104:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0083;
		}
	}
	{
		return 0;
	}
}
// System.Void TouchScript.Clusters.Clusters::markDirty()
extern "C" void Clusters_markDirty_m3217 (Clusters_t591 * __this, const MethodInfo* method)
{
	{
		__this->___dirty_3 = 1;
		return;
	}
}
// System.Void TouchScript.Clusters.Clusters::markClean()
extern "C" void Clusters_markClean_m3218 (Clusters_t591 * __this, const MethodInfo* method)
{
	{
		__this->___dirty_3 = 0;
		return;
	}
}
// TouchScript.Debugging.TouchDebugger
#include "TouchScript_TouchScript_Debugging_TouchDebugger.h"
// TouchScript.Debugging.TouchDebugger
#include "TouchScript_TouchScript_Debugging_TouchDebuggerMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// TouchScript.TouchEventArgs
#include "TouchScript_TouchScript_TouchEventArgs.h"
// System.EventHandler`1<TouchScript.TouchEventArgs>
#include "mscorlib_System_EventHandler_1_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
// TouchScript.Tags
#include "TouchScript_TouchScript_Tags.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
// System.EventHandler`1<TouchScript.TouchEventArgs>
#include "mscorlib_System_EventHandler_1_gen_0MethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// TouchScript.TouchEventArgs
#include "TouchScript_TouchScript_TouchEventArgsMethodDeclarations.h"
// TouchScript.Tags
#include "TouchScript_TouchScript_TagsMethodDeclarations.h"
// System.Void TouchScript.Debugging.TouchDebugger::.ctor()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* Dictionary_2_t594_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t595_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3816_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3817_MethodInfo_var;
extern "C" void TouchDebugger__ctor_m3219 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		Dictionary_2_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		Dictionary_2__ctor_m3816_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484021);
		Dictionary_2__ctor_m3817_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484022);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___showTouchId_2 = 1;
		__this->___useDPI_5 = 1;
		__this->___touchSize_6 = (1.0f);
		Color_t12  L_0 = {0};
		Color__ctor_m278(&L_0, (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___fontColor_7 = L_0;
		Dictionary_2_t594 * L_1 = (Dictionary_2_t594 *)il2cpp_codegen_object_new (Dictionary_2_t594_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3816(L_1, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m3816_MethodInfo_var);
		__this->___dummies_8 = L_1;
		Dictionary_2_t595 * L_2 = (Dictionary_2_t595 *)il2cpp_codegen_object_new (Dictionary_2_t595_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3817(L_2, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m3817_MethodInfo_var);
		__this->___tags_9 = L_2;
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TouchScript.Debugging.TouchDebugger::get_ShowTouchId()
extern "C" bool TouchDebugger_get_ShowTouchId_m3220 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___showTouchId_2);
		return L_0;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::set_ShowTouchId(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void TouchDebugger_set_ShowTouchId_m3221 (TouchDebugger_t593 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___showTouchId_2 = L_0;
		return;
	}
}
// System.Boolean TouchScript.Debugging.TouchDebugger::get_ShowTags()
extern "C" bool TouchDebugger_get_ShowTags_m3222 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___showTags_3);
		return L_0;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::set_ShowTags(System.Boolean)
extern "C" void TouchDebugger_set_ShowTags_m3223 (TouchDebugger_t593 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___showTags_3 = L_0;
		return;
	}
}
// UnityEngine.Texture2D TouchScript.Debugging.TouchDebugger::get_TouchTexture()
extern "C" Texture2D_t13 * TouchDebugger_get_TouchTexture_m3224 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	{
		Texture2D_t13 * L_0 = (__this->___texture_4);
		return L_0;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::set_TouchTexture(UnityEngine.Texture2D)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// TouchScript.Debugging.TouchDebugger
#include "TouchScript_TouchScript_Debugging_TouchDebuggerMethodDeclarations.h"
extern "C" void TouchDebugger_set_TouchTexture_m3225 (TouchDebugger_t593 * __this, Texture2D_t13 * ___value, const MethodInfo* method)
{
	{
		Texture2D_t13 * L_0 = ___value;
		__this->___texture_4 = L_0;
		TouchDebugger_update_m3236(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TouchScript.Debugging.TouchDebugger::get_UseDPI()
extern "C" bool TouchDebugger_get_UseDPI_m3226 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___useDPI_5);
		return L_0;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::set_UseDPI(System.Boolean)
extern "C" void TouchDebugger_set_UseDPI_m3227 (TouchDebugger_t593 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___useDPI_5 = L_0;
		TouchDebugger_update_m3236(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single TouchScript.Debugging.TouchDebugger::get_TouchSize()
extern "C" float TouchDebugger_get_TouchSize_m3228 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___touchSize_6);
		return L_0;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::set_TouchSize(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void TouchDebugger_set_TouchSize_m3229 (TouchDebugger_t593 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___touchSize_6 = L_0;
		TouchDebugger_update_m3236(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color TouchScript.Debugging.TouchDebugger::get_FontColor()
extern "C" Color_t12  TouchDebugger_get_FontColor_m3230 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	{
		Color_t12  L_0 = (__this->___fontColor_7);
		return L_0;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::set_FontColor(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void TouchDebugger_set_FontColor_m3231 (TouchDebugger_t593 * __this, Color_t12  ___value, const MethodInfo* method)
{
	{
		Color_t12  L_0 = ___value;
		__this->___fontColor_7 = L_0;
		return;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::OnEnable()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// TouchScript.TouchManager
#include "TouchScript_TouchScript_TouchManagerMethodDeclarations.h"
// System.EventHandler`1<TouchScript.TouchEventArgs>
#include "mscorlib_System_EventHandler_1_gen_0MethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern const MethodInfo* TouchDebugger_touchesBeganHandler_m3239_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m1218_MethodInfo_var;
extern const MethodInfo* TouchDebugger_touchesEndedHandler_m3241_MethodInfo_var;
extern const MethodInfo* TouchDebugger_touchesMovedHandler_m3240_MethodInfo_var;
extern const MethodInfo* TouchDebugger_touchesCancelledHandler_m3242_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral316;
extern "C" void TouchDebugger_OnEnable_m3232 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		TouchDebugger_touchesBeganHandler_m3239_MethodInfo_var = il2cpp_codegen_method_info_from_index(375);
		EventHandler_1__ctor_m1218_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		TouchDebugger_touchesEndedHandler_m3241_MethodInfo_var = il2cpp_codegen_method_info_from_index(376);
		TouchDebugger_touchesMovedHandler_m3240_MethodInfo_var = il2cpp_codegen_method_info_from_index(377);
		TouchDebugger_touchesCancelledHandler_m3242_MethodInfo_var = il2cpp_codegen_method_info_from_index(378);
		_stringLiteral316 = il2cpp_codegen_string_literal_from_index(316);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture2D_t13 * L_0 = TouchDebugger_get_TouchTexture_m3224(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral316, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		TouchDebugger_update_m3236(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_2 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_3 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_4 = { (void*)TouchDebugger_touchesBeganHandler_m3239_MethodInfo_var };
		EventHandler_1_t253 * L_5 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_5, __this, L_4, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_3);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(4 /* System.Void TouchScript.ITouchManager::add_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_3, L_5);
		Object_t * L_6 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_7 = { (void*)TouchDebugger_touchesEndedHandler_m3241_MethodInfo_var };
		EventHandler_1_t253 * L_8 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_8, __this, L_7, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(8 /* System.Void TouchScript.ITouchManager::add_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_6, L_8);
		Object_t * L_9 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_10 = { (void*)TouchDebugger_touchesMovedHandler_m3240_MethodInfo_var };
		EventHandler_1_t253 * L_11 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_11, __this, L_10, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_9);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(6 /* System.Void TouchScript.ITouchManager::add_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_9, L_11);
		Object_t * L_12 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_13 = { (void*)TouchDebugger_touchesCancelledHandler_m3242_MethodInfo_var };
		EventHandler_1_t253 * L_14 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_14, __this, L_13, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(10 /* System.Void TouchScript.ITouchManager::add_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_12, L_14);
	}

IL_0084:
	{
		return;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::OnDisable()
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern const MethodInfo* TouchDebugger_touchesBeganHandler_m3239_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m1218_MethodInfo_var;
extern const MethodInfo* TouchDebugger_touchesEndedHandler_m3241_MethodInfo_var;
extern const MethodInfo* TouchDebugger_touchesMovedHandler_m3240_MethodInfo_var;
extern const MethodInfo* TouchDebugger_touchesCancelledHandler_m3242_MethodInfo_var;
extern "C" void TouchDebugger_OnDisable_m3233 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		TouchDebugger_touchesBeganHandler_m3239_MethodInfo_var = il2cpp_codegen_method_info_from_index(375);
		EventHandler_1__ctor_m1218_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		TouchDebugger_touchesEndedHandler_m3241_MethodInfo_var = il2cpp_codegen_method_info_from_index(376);
		TouchDebugger_touchesMovedHandler_m3240_MethodInfo_var = il2cpp_codegen_method_info_from_index(377);
		TouchDebugger_touchesCancelledHandler_m3242_MethodInfo_var = il2cpp_codegen_method_info_from_index(378);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_0 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_1 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TouchDebugger_touchesBeganHandler_m3239_MethodInfo_var };
		EventHandler_1_t253 * L_3 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_3, __this, L_2, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_1);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(5 /* System.Void TouchScript.ITouchManager::remove_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_1, L_3);
		Object_t * L_4 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)TouchDebugger_touchesEndedHandler_m3241_MethodInfo_var };
		EventHandler_1_t253 * L_6 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_6, __this, L_5, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(9 /* System.Void TouchScript.ITouchManager::remove_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_4, L_6);
		Object_t * L_7 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_8 = { (void*)TouchDebugger_touchesMovedHandler_m3240_MethodInfo_var };
		EventHandler_1_t253 * L_9 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_9, __this, L_8, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_7);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(7 /* System.Void TouchScript.ITouchManager::remove_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_7, L_9);
		Object_t * L_10 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_11 = { (void*)TouchDebugger_touchesCancelledHandler_m3242_MethodInfo_var };
		EventHandler_1_t253 * L_12 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_12, __this, L_11, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(11 /* System.Void TouchScript.ITouchManager::remove_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_10, L_12);
	}

IL_0062:
	{
		return;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::OnGUI()
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t246_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3818_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3819_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3820_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3824_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3825_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral317;
extern Il2CppCodeGenString* _stringLiteral318;
extern "C" void TouchDebugger_OnGUI_m3234 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		Int32_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m3818_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484027);
		Enumerator_get_Current_m3819_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484028);
		KeyValuePair_2_get_Value_m3820_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484029);
		Enumerator_MoveNext_m3824_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484030);
		Enumerator_Dispose_m3825_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484031);
		_stringLiteral317 = il2cpp_codegen_string_literal_from_index(317);
		_stringLiteral318 = il2cpp_codegen_string_literal_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	Enumerator_t685  V_0 = {0};
	KeyValuePair_2_t686  V_1 = {0};
	float V_2 = 0.0f;
	Vector2_t85  V_3 = {0};
	float V_4 = 0.0f;
	Vector2_t85  V_5 = {0};
	String_t* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Texture2D_t13 * L_0 = TouchDebugger_get_TouchTexture_m3224(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		GUIStyle_t220 * L_2 = (__this->___style_23);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUISkin_t231 * L_3 = GUI_get_skin_m1078(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		GUIStyle_t220 * L_4 = GUISkin_get_label_m1079(L_3, /*hidden argument*/NULL);
		GUIStyle_t220 * L_5 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m1245(L_5, L_4, /*hidden argument*/NULL);
		__this->___style_23 = L_5;
	}

IL_0032:
	{
		TouchDebugger_checkDPI_m3235(__this, /*hidden argument*/NULL);
		GUIStyle_t220 * L_6 = (__this->___style_23);
		int32_t L_7 = (__this->___fontSize_22);
		NullCheck(L_6);
		GUIStyle_set_fontSize_m1080(L_6, L_7, /*hidden argument*/NULL);
		Dictionary_2_t594 * L_8 = (__this->___dummies_8);
		NullCheck(L_8);
		Enumerator_t685  L_9 = Dictionary_2_GetEnumerator_m3818(L_8, /*hidden argument*/Dictionary_2_GetEnumerator_m3818_MethodInfo_var);
		V_0 = L_9;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_025a;
		}

IL_005a:
		{
			KeyValuePair_2_t686  L_10 = Enumerator_get_Current_m3819((&V_0), /*hidden argument*/Enumerator_get_Current_m3819_MethodInfo_var);
			V_1 = L_10;
			Object_t * L_11 = KeyValuePair_2_get_Value_m3820((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3820_MethodInfo_var);
			NullCheck(L_11);
			Vector2_t85  L_12 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_11);
			V_3 = L_12;
			float L_13 = ((&V_3)->___x_1);
			V_2 = L_13;
			int32_t L_14 = Screen_get_height_m429(NULL /*static, unused*/, /*hidden argument*/NULL);
			Object_t * L_15 = KeyValuePair_2_get_Value_m3820((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3820_MethodInfo_var);
			NullCheck(L_15);
			Vector2_t85  L_16 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_15);
			V_5 = L_16;
			float L_17 = ((&V_5)->___y_2);
			V_4 = ((float)((float)(((float)L_14))-(float)L_17));
			float L_18 = V_2;
			int32_t L_19 = (__this->___halfTextureWidth_16);
			float L_20 = V_4;
			int32_t L_21 = (__this->___halfTextureHeight_17);
			int32_t L_22 = (__this->___textureWidth_14);
			int32_t L_23 = (__this->___textureHeight_15);
			Rect_t232  L_24 = {0};
			Rect__ctor_m1081(&L_24, ((float)((float)L_18-(float)(((float)L_19)))), ((float)((float)L_20-(float)(((float)L_21)))), (((float)L_22)), (((float)L_23)), /*hidden argument*/NULL);
			Texture2D_t13 * L_25 = TouchDebugger_get_TouchTexture_m3224(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
			GUI_DrawTexture_m3821(NULL /*static, unused*/, L_24, L_25, 2, /*hidden argument*/NULL);
			Object_t * L_26 = KeyValuePair_2_get_Value_m3820((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3820_MethodInfo_var);
			NullCheck(L_26);
			int32_t L_27 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_26);
			V_7 = L_27;
			V_8 = 0;
			bool L_28 = TouchDebugger_get_ShowTouchId_m3220(__this, /*hidden argument*/NULL);
			if (!L_28)
			{
				goto IL_0185;
			}
		}

IL_00e3:
		{
			int32_t L_29 = V_7;
			int32_t L_30 = L_29;
			Object_t * L_31 = Box(Int32_t246_il2cpp_TypeInfo_var, &L_30);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_32 = String_Concat_m2646(NULL /*static, unused*/, _stringLiteral317, L_31, /*hidden argument*/NULL);
			V_6 = L_32;
			Color_t12  L_33 = Color_get_black_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
			GUI_set_color_m3822(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
			float L_34 = V_2;
			int32_t L_35 = (__this->___xOffset_18);
			float L_36 = (__this->___shadowOffset_13);
			float L_37 = V_4;
			int32_t L_38 = (__this->___yOffset_19);
			float L_39 = (__this->___shadowOffset_13);
			int32_t L_40 = (__this->___labelWidth_20);
			int32_t L_41 = (__this->___labelHeight_21);
			Rect_t232  L_42 = {0};
			Rect__ctor_m1081(&L_42, ((float)((float)((float)((float)L_34+(float)(((float)L_35))))+(float)L_36)), ((float)((float)((float)((float)L_37+(float)(((float)L_38))))+(float)L_39)), (((float)L_40)), (((float)L_41)), /*hidden argument*/NULL);
			String_t* L_43 = V_6;
			GUIStyle_t220 * L_44 = (__this->___style_23);
			GUI_Label_m3823(NULL /*static, unused*/, L_42, L_43, L_44, /*hidden argument*/NULL);
			Color_t12  L_45 = (__this->___fontColor_7);
			GUI_set_color_m3822(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
			float L_46 = V_2;
			int32_t L_47 = (__this->___xOffset_18);
			float L_48 = V_4;
			int32_t L_49 = (__this->___yOffset_19);
			int32_t L_50 = (__this->___labelWidth_20);
			int32_t L_51 = (__this->___labelHeight_21);
			Rect_t232  L_52 = {0};
			Rect__ctor_m1081(&L_52, ((float)((float)L_46+(float)(((float)L_47)))), ((float)((float)L_48+(float)(((float)L_49)))), (((float)L_50)), (((float)L_51)), /*hidden argument*/NULL);
			String_t* L_53 = V_6;
			GUIStyle_t220 * L_54 = (__this->___style_23);
			GUI_Label_m3823(NULL /*static, unused*/, L_52, L_53, L_54, /*hidden argument*/NULL);
			int32_t L_55 = V_8;
			V_8 = ((int32_t)((int32_t)L_55+(int32_t)1));
		}

IL_0185:
		{
			bool L_56 = TouchDebugger_get_ShowTags_m3222(__this, /*hidden argument*/NULL);
			if (!L_56)
			{
				goto IL_025a;
			}
		}

IL_0190:
		{
			Dictionary_2_t595 * L_57 = (__this->___tags_9);
			int32_t L_58 = V_7;
			NullCheck(L_57);
			bool L_59 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsKey(!0) */, L_57, L_58);
			if (!L_59)
			{
				goto IL_025a;
			}
		}

IL_01a2:
		{
			Dictionary_2_t595 * L_60 = (__this->___tags_9);
			int32_t L_61 = V_7;
			NullCheck(L_60);
			String_t* L_62 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(25 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(!0) */, L_60, L_61);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_63 = String_Concat_m430(NULL /*static, unused*/, _stringLiteral318, L_62, /*hidden argument*/NULL);
			V_6 = L_63;
			Color_t12  L_64 = Color_get_black_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
			GUI_set_color_m3822(NULL /*static, unused*/, L_64, /*hidden argument*/NULL);
			float L_65 = V_2;
			int32_t L_66 = (__this->___xOffset_18);
			float L_67 = (__this->___shadowOffset_13);
			float L_68 = V_4;
			int32_t L_69 = (__this->___yOffset_19);
			int32_t L_70 = (__this->___fontSize_22);
			int32_t L_71 = V_8;
			float L_72 = (__this->___shadowOffset_13);
			int32_t L_73 = (__this->___labelWidth_20);
			int32_t L_74 = (__this->___labelHeight_21);
			Rect_t232  L_75 = {0};
			Rect__ctor_m1081(&L_75, ((float)((float)((float)((float)L_65+(float)(((float)L_66))))+(float)L_67)), ((float)((float)((float)((float)((float)((float)L_68+(float)(((float)L_69))))+(float)(((float)((int32_t)((int32_t)L_70*(int32_t)L_71))))))+(float)L_72)), (((float)L_73)), (((float)L_74)), /*hidden argument*/NULL);
			String_t* L_76 = V_6;
			GUIStyle_t220 * L_77 = (__this->___style_23);
			GUI_Label_m3823(NULL /*static, unused*/, L_75, L_76, L_77, /*hidden argument*/NULL);
			Color_t12  L_78 = (__this->___fontColor_7);
			GUI_set_color_m3822(NULL /*static, unused*/, L_78, /*hidden argument*/NULL);
			float L_79 = V_2;
			int32_t L_80 = (__this->___xOffset_18);
			float L_81 = V_4;
			int32_t L_82 = (__this->___yOffset_19);
			int32_t L_83 = (__this->___fontSize_22);
			int32_t L_84 = V_8;
			int32_t L_85 = (__this->___labelWidth_20);
			int32_t L_86 = (__this->___labelHeight_21);
			Rect_t232  L_87 = {0};
			Rect__ctor_m1081(&L_87, ((float)((float)L_79+(float)(((float)L_80)))), ((float)((float)((float)((float)L_81+(float)(((float)L_82))))+(float)(((float)((int32_t)((int32_t)L_83*(int32_t)L_84)))))), (((float)L_85)), (((float)L_86)), /*hidden argument*/NULL);
			String_t* L_88 = V_6;
			GUIStyle_t220 * L_89 = (__this->___style_23);
			GUI_Label_m3823(NULL /*static, unused*/, L_87, L_88, L_89, /*hidden argument*/NULL);
		}

IL_025a:
		{
			bool L_90 = Enumerator_MoveNext_m3824((&V_0), /*hidden argument*/Enumerator_MoveNext_m3824_MethodInfo_var);
			if (L_90)
			{
				goto IL_005a;
			}
		}

IL_0266:
		{
			IL2CPP_LEAVE(0x279, FINALLY_026b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_026b;
	}

FINALLY_026b:
	{ // begin finally (depth: 1)
		NullCheck((&V_0));
		Enumerator_Dispose_m3825((&V_0), Enumerator_Dispose_m3825_MethodInfo_var);
		IL2CPP_END_FINALLY(619)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(619)
	{
		IL2CPP_JUMP_TBL(0x279, IL_0279)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0279:
	{
		return;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::checkDPI()
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void TouchDebugger_checkDPI_m3235 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___useDPI_5);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		float L_1 = (__this->___dpi_12);
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_2 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = (float)InterfaceFuncInvoker0< float >::Invoke(14 /* System.Single TouchScript.ITouchManager::get_DPI() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		bool L_4 = Mathf_Approximately_m2715(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		TouchDebugger_update_m3236(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::update()
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern "C" void TouchDebugger_update_m3236 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___useDPI_5);
		if (!L_0)
		{
			goto IL_008c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_1 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2 = (float)InterfaceFuncInvoker0< float >::Invoke(14 /* System.Single TouchScript.ITouchManager::get_DPI() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_1);
		__this->___dpi_12 = L_2;
		Texture2D_t13 * L_3 = (__this->___texture_4);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		float L_5 = (__this->___touchSize_6);
		__this->___textureDPI_10 = ((float)((float)((float)((float)(((float)L_4))*(float)(2.54f)))/(float)L_5));
		float L_6 = (__this->___dpi_12);
		float L_7 = (__this->___textureDPI_10);
		__this->___scale_11 = ((float)((float)L_6/(float)L_7));
		Texture2D_t13 * L_8 = (__this->___texture_4);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		float L_10 = (__this->___scale_11);
		__this->___textureWidth_14 = (((int32_t)((float)((float)(((float)L_9))*(float)L_10))));
		Texture2D_t13 * L_11 = (__this->___texture_4);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		float L_13 = (__this->___scale_11);
		__this->___textureHeight_15 = (((int32_t)((float)((float)(((float)L_12))*(float)L_13))));
		TouchDebugger_computeConsts_m3237(__this, /*hidden argument*/NULL);
		goto IL_00ad;
	}

IL_008c:
	{
		__this->___textureWidth_14 = ((int32_t)32);
		__this->___textureHeight_15 = ((int32_t)32);
		__this->___scale_11 = (0.25f);
		TouchDebugger_computeConsts_m3237(__this, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		return;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::computeConsts()
extern "C" void TouchDebugger_computeConsts_m3237 (TouchDebugger_t593 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___textureWidth_14);
		__this->___halfTextureWidth_16 = ((int32_t)((int32_t)L_0/(int32_t)2));
		int32_t L_1 = (__this->___textureHeight_15);
		__this->___halfTextureHeight_17 = ((int32_t)((int32_t)L_1/(int32_t)2));
		int32_t L_2 = (__this->___textureWidth_14);
		__this->___xOffset_18 = (((int32_t)((float)((float)(((float)L_2))*(float)(0.35f)))));
		int32_t L_3 = (__this->___textureHeight_15);
		__this->___yOffset_19 = (((int32_t)((float)((float)(((float)L_3))*(float)(0.35f)))));
		float L_4 = (__this->___scale_11);
		__this->___fontSize_22 = (((int32_t)((float)((float)(32.0f)*(float)L_4))));
		float L_5 = (__this->___scale_11);
		__this->___shadowOffset_13 = ((float)((float)(2.0f)*(float)L_5));
		int32_t L_6 = (__this->___fontSize_22);
		__this->___labelWidth_20 = ((int32_t)((int32_t)((int32_t)20)*(int32_t)L_6));
		int32_t L_7 = (__this->___fontSize_22);
		__this->___labelHeight_21 = ((int32_t)((int32_t)2*(int32_t)L_7));
		return;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::updateDummy(TouchScript.ITouch)
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" void TouchDebugger_updateDummy_m3238 (TouchDebugger_t593 * __this, Object_t * ___dummy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t594 * L_0 = (__this->___dummies_8);
		Object_t * L_1 = ___dummy;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_1);
		Object_t * L_3 = ___dummy;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.ITouch>::set_Item(!0,!1) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::touchesBeganHandler(System.Object,TouchScript.TouchEventArgs)
// System.Object
#include "mscorlib_System_Object.h"
// TouchScript.TouchEventArgs
#include "TouchScript_TouchScript_TouchEventArgs.h"
// TouchScript.TouchEventArgs
#include "TouchScript_TouchScript_TouchEventArgsMethodDeclarations.h"
// TouchScript.Tags
#include "TouchScript_TouchScript_TagsMethodDeclarations.h"
extern TypeInfo* IEnumerable_1_t255_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t256_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" void TouchDebugger_touchesBeganHandler_m3239 (TouchDebugger_t593 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		IEnumerator_1_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		TouchEventArgs_t226 * L_0 = ___e;
		NullCheck(L_0);
		Object_t* L_1 = TouchEventArgs_get_Touches_m1220(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TouchScript.ITouch>::GetEnumerator() */, IEnumerable_1_t255_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_0011:
		{
			Object_t* L_3 = V_0;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TouchScript.ITouch>::get_Current() */, IEnumerator_1_t256_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			Dictionary_2_t594 * L_5 = (__this->___dummies_8);
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			int32_t L_7 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_6);
			Object_t * L_8 = V_1;
			NullCheck(L_5);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.ITouch>::Add(!0,!1) */, L_5, L_7, L_8);
			Object_t * L_9 = V_1;
			NullCheck(L_9);
			Tags_t637 * L_10 = (Tags_t637 *)InterfaceFuncInvoker0< Tags_t637 * >::Invoke(6 /* TouchScript.Tags TouchScript.ITouch::get_Tags() */, ITouch_t257_il2cpp_TypeInfo_var, L_9);
			NullCheck(L_10);
			int32_t L_11 = Tags_get_Count_m3689(L_10, /*hidden argument*/NULL);
			if ((((int32_t)L_11) <= ((int32_t)0)))
			{
				goto IL_0057;
			}
		}

IL_003b:
		{
			Dictionary_2_t595 * L_12 = (__this->___tags_9);
			Object_t * L_13 = V_1;
			NullCheck(L_13);
			int32_t L_14 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_13);
			Object_t * L_15 = V_1;
			NullCheck(L_15);
			Tags_t637 * L_16 = (Tags_t637 *)InterfaceFuncInvoker0< Tags_t637 * >::Invoke(6 /* TouchScript.Tags TouchScript.ITouch::get_Tags() */, ITouch_t257_il2cpp_TypeInfo_var, L_15);
			NullCheck(L_16);
			String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
			NullCheck(L_12);
			VirtActionInvoker2< int32_t, String_t* >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1) */, L_12, L_14, L_17);
		}

IL_0057:
		{
			Object_t* L_18 = V_0;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0011;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		{
			Object_t* L_20 = V_0;
			if (!L_20)
			{
				goto IL_0073;
			}
		}

IL_006d:
		{
			Object_t* L_21 = V_0;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_21);
		}

IL_0073:
		{
			IL2CPP_END_FINALLY(103)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0074:
	{
		return;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::touchesMovedHandler(System.Object,TouchScript.TouchEventArgs)
extern TypeInfo* IEnumerable_1_t255_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t256_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" void TouchDebugger_touchesMovedHandler_m3240 (TouchDebugger_t593 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		IEnumerator_1_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		TouchEventArgs_t226 * L_0 = ___e;
		NullCheck(L_0);
		Object_t* L_1 = TouchEventArgs_get_Touches_m1220(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TouchScript.ITouch>::GetEnumerator() */, IEnumerable_1_t255_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_0011:
		{
			Object_t* L_3 = V_0;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TouchScript.ITouch>::get_Current() */, IEnumerator_1_t256_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			Dictionary_2_t594 * L_5 = (__this->___dummies_8);
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			int32_t L_7 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_6);
			NullCheck(L_5);
			bool L_8 = (bool)VirtFuncInvoker2< bool, int32_t, Object_t ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.ITouch>::TryGetValue(!0,!1&) */, L_5, L_7, (&V_2));
			if (L_8)
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004c);
		}

IL_0035:
		{
			Object_t * L_9 = V_1;
			TouchDebugger_updateDummy_m3238(__this, L_9, /*hidden argument*/NULL);
		}

IL_003c:
		{
			Object_t* L_10 = V_0;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		{
			Object_t* L_12 = V_0;
			if (!L_12)
			{
				goto IL_0058;
			}
		}

IL_0052:
		{
			Object_t* L_13 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_13);
		}

IL_0058:
		{
			IL2CPP_END_FINALLY(76)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0059:
	{
		return;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::touchesEndedHandler(System.Object,TouchScript.TouchEventArgs)
extern TypeInfo* IEnumerable_1_t255_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t256_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" void TouchDebugger_touchesEndedHandler_m3241 (TouchDebugger_t593 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		IEnumerator_1_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		TouchEventArgs_t226 * L_0 = ___e;
		NullCheck(L_0);
		Object_t* L_1 = TouchEventArgs_get_Touches_m1220(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TouchScript.ITouch>::GetEnumerator() */, IEnumerable_1_t255_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0011:
		{
			Object_t* L_3 = V_0;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TouchScript.ITouch>::get_Current() */, IEnumerator_1_t256_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			Dictionary_2_t594 * L_5 = (__this->___dummies_8);
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			int32_t L_7 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_6);
			NullCheck(L_5);
			bool L_8 = (bool)VirtFuncInvoker2< bool, int32_t, Object_t ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.ITouch>::TryGetValue(!0,!1&) */, L_5, L_7, (&V_2));
			if (L_8)
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0057);
		}

IL_0035:
		{
			Dictionary_2_t594 * L_9 = (__this->___dummies_8);
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			int32_t L_11 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_10);
			NullCheck(L_9);
			VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.ITouch>::Remove(!0) */, L_9, L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_0;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0011;
			}
		}

IL_0052:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_0;
			if (!L_14)
			{
				goto IL_0063;
			}
		}

IL_005d:
		{
			Object_t* L_15 = V_0;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_15);
		}

IL_0063:
		{
			IL2CPP_END_FINALLY(87)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0064:
	{
		return;
	}
}
// System.Void TouchScript.Debugging.TouchDebugger::touchesCancelledHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void TouchDebugger_touchesCancelledHandler_m3242 (TouchDebugger_t593 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___sender;
		TouchEventArgs_t226 * L_1 = ___e;
		TouchDebugger_touchesEndedHandler_m3241(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Devices.Display.GenericDisplayDevice
#include "TouchScript_TouchScript_Devices_Display_GenericDisplayDevice.h"
// TouchScript.Devices.Display.GenericDisplayDevice
#include "TouchScript_TouchScript_Devices_Display_GenericDisplayDeviceMethodDeclarations.h"
// System.Nullable`1<System.Boolean>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
// TouchScript.Devices.Display.DisplayDevice
#include "TouchScript_TouchScript_Devices_Display_DisplayDevice.h"
// TouchScript.Devices.Display.DisplayDevice
#include "TouchScript_TouchScript_Devices_Display_DisplayDeviceMethodDeclarations.h"
// System.Nullable`1<System.Boolean>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"
// System.Void TouchScript.Devices.Display.GenericDisplayDevice::.ctor()
// TouchScript.Devices.Display.DisplayDevice
#include "TouchScript_TouchScript_Devices_Display_DisplayDeviceMethodDeclarations.h"
extern "C" void GenericDisplayDevice__ctor_m3243 (GenericDisplayDevice_t596 * __this, const MethodInfo* method)
{
	{
		DisplayDevice__ctor_m3596(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Devices.Display.GenericDisplayDevice::.cctor()
extern "C" void GenericDisplayDevice__cctor_m3244 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean TouchScript.Devices.Display.GenericDisplayDevice::get_IsLaptop()
// System.Nullable`1<System.Boolean>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
extern TypeInfo* GenericDisplayDevice_t596_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t687_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m3826_MethodInfo_var;
extern const MethodInfo* Nullable_1__ctor_m3831_MethodInfo_var;
extern const MethodInfo* Nullable_1_GetValueOrDefault_m3832_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral319;
extern "C" bool GenericDisplayDevice_get_IsLaptop_m3245 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericDisplayDevice_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(389);
		Regex_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(390);
		Nullable_1_get_HasValue_m3826_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484032);
		Nullable_1__ctor_m3831_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484033);
		Nullable_1_GetValueOrDefault_m3832_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		_stringLiteral319 = il2cpp_codegen_string_literal_from_index(319);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t598  V_0 = {0};
	String_t* V_1 = {0};
	Regex_t687 * V_2 = {0};
	Nullable_1_t598  V_3 = {0};
	int32_t G_B7_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GenericDisplayDevice_t596_il2cpp_TypeInfo_var);
		Nullable_1_t598  L_0 = ((GenericDisplayDevice_t596_StaticFields*)GenericDisplayDevice_t596_il2cpp_TypeInfo_var->static_fields)->___isLaptop_4;
		V_0 = L_0;
		bool L_1 = Nullable_1_get_HasValue_m3826((&V_0), /*hidden argument*/Nullable_1_get_HasValue_m3826_MethodInfo_var);
		if (!((((int32_t)L_1) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_2 = SystemInfo_get_graphicsDeviceName_m3827(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m3828(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Regex_t687 * L_4 = (Regex_t687 *)il2cpp_codegen_object_new (Regex_t687_il2cpp_TypeInfo_var);
		Regex__ctor_m3829(L_4, _stringLiteral319, 1, /*hidden argument*/NULL);
		V_2 = L_4;
		Regex_t687 * L_5 = V_2;
		String_t* L_6 = V_1;
		NullCheck(L_5);
		bool L_7 = Regex_IsMatch_m3830(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		Nullable_1_t598  L_8 = {0};
		Nullable_1__ctor_m3831(&L_8, 1, /*hidden argument*/Nullable_1__ctor_m3831_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GenericDisplayDevice_t596_il2cpp_TypeInfo_var);
		((GenericDisplayDevice_t596_StaticFields*)GenericDisplayDevice_t596_il2cpp_TypeInfo_var->static_fields)->___isLaptop_4 = L_8;
		goto IL_0053;
	}

IL_0048:
	{
		Nullable_1_t598  L_9 = {0};
		Nullable_1__ctor_m3831(&L_9, 0, /*hidden argument*/Nullable_1__ctor_m3831_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GenericDisplayDevice_t596_il2cpp_TypeInfo_var);
		((GenericDisplayDevice_t596_StaticFields*)GenericDisplayDevice_t596_il2cpp_TypeInfo_var->static_fields)->___isLaptop_4 = L_9;
	}

IL_0053:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GenericDisplayDevice_t596_il2cpp_TypeInfo_var);
		Nullable_1_t598  L_10 = ((GenericDisplayDevice_t596_StaticFields*)GenericDisplayDevice_t596_il2cpp_TypeInfo_var->static_fields)->___isLaptop_4;
		V_3 = L_10;
		bool L_11 = Nullable_1_GetValueOrDefault_m3832((&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_m3832_MethodInfo_var);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_006c;
		}
	}
	{
		bool L_12 = Nullable_1_get_HasValue_m3826((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m3826_MethodInfo_var);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_006d;
	}

IL_006c:
	{
		G_B7_0 = 0;
	}

IL_006d:
	{
		return G_B7_0;
	}
}
// System.Void TouchScript.Devices.Display.GenericDisplayDevice::OnEnable()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// TouchScript.Devices.Display.GenericDisplayDevice
#include "TouchScript_TouchScript_Devices_Display_GenericDisplayDeviceMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* RuntimePlatform_t689_il2cpp_TypeInfo_var;
extern TypeInfo* GenericDisplayDevice_t596_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral320;
extern "C" void GenericDisplayDevice_OnEnable_m3246 (GenericDisplayDevice_t596 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RuntimePlatform_t689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(391);
		GenericDisplayDevice_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(389);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral320 = il2cpp_codegen_string_literal_from_index(320);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	Resolution_t688  V_2 = {0};
	Resolution_t688  V_3 = {0};
	int32_t V_4 = 0;
	Resolution_t688  V_5 = {0};
	Resolution_t688  V_6 = {0};
	int32_t V_7 = 0;
	Resolution_t688  V_8 = {0};
	Resolution_t688  V_9 = {0};
	int32_t V_10 = 0;
	Resolution_t688  V_11 = {0};
	Resolution_t688  V_12 = {0};
	int32_t V_13 = 0;
	Resolution_t688  V_14 = {0};
	Resolution_t688  V_15 = {0};
	int32_t V_16 = 0;
	Resolution_t688  V_17 = {0};
	Resolution_t688  V_18 = {0};
	{
		DisplayDevice_OnEnable_m3601(__this, /*hidden argument*/NULL);
		int32_t L_0 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(RuntimePlatform_t689_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		DisplayDevice_set_Name_m3598(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GenericDisplayDevice_t596_il2cpp_TypeInfo_var);
		bool L_4 = GenericDisplayDevice_get_IsLaptop_m3245(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_5 = DisplayDevice_get_Name_m3597(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m430(NULL /*static, unused*/, L_5, _stringLiteral320, /*hidden argument*/NULL);
		DisplayDevice_set_Name_m3598(__this, L_6, /*hidden argument*/NULL);
	}

IL_003b:
	{
		float L_7 = Screen_get_dpi_m3124(NULL /*static, unused*/, /*hidden argument*/NULL);
		((DisplayDevice_t597 *)__this)->___dpi_3 = L_7;
		float L_8 = (((DisplayDevice_t597 *)__this)->___dpi_3);
		if ((!(((float)L_8) < ((float)(1.401298E-45f)))))
		{
			goto IL_04e8;
		}
	}
	{
		int32_t L_9 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if (L_10 == 0)
		{
			goto IL_00bf;
		}
		if (L_10 == 1)
		{
			goto IL_00bf;
		}
		if (L_10 == 2)
		{
			goto IL_00bf;
		}
		if (L_10 == 3)
		{
			goto IL_00bf;
		}
		if (L_10 == 4)
		{
			goto IL_00bf;
		}
		if (L_10 == 5)
		{
			goto IL_00bf;
		}
		if (L_10 == 6)
		{
			goto IL_04e8;
		}
		if (L_10 == 7)
		{
			goto IL_00bf;
		}
		if (L_10 == 8)
		{
			goto IL_0402;
		}
		if (L_10 == 9)
		{
			goto IL_04e8;
		}
		if (L_10 == 10)
		{
			goto IL_04e8;
		}
		if (L_10 == 11)
		{
			goto IL_0320;
		}
		if (L_10 == 12)
		{
			goto IL_04e8;
		}
		if (L_10 == 13)
		{
			goto IL_00bf;
		}
		if (L_10 == 14)
		{
			goto IL_04e8;
		}
		if (L_10 == 15)
		{
			goto IL_04e8;
		}
		if (L_10 == 16)
		{
			goto IL_04e8;
		}
		if (L_10 == 17)
		{
			goto IL_04e8;
		}
		if (L_10 == 18)
		{
			goto IL_04c8;
		}
		if (L_10 == 19)
		{
			goto IL_04c8;
		}
		if (L_10 == 20)
		{
			goto IL_04c8;
		}
		if (L_10 == 21)
		{
			goto IL_04d8;
		}
	}
	{
		goto IL_04e8;
	}

IL_00bf:
	{
		Resolution_t688  L_11 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_11;
		int32_t L_12 = Resolution_get_width_m3834((&V_2), /*hidden argument*/NULL);
		Resolution_t688  L_13 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_13;
		int32_t L_14 = Resolution_get_height_m3835((&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_15 = Mathf_Max_m2991(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		Resolution_t688  L_16 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_16;
		int32_t L_17 = Resolution_get_width_m3834((&V_5), /*hidden argument*/NULL);
		Resolution_t688  L_18 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_18;
		int32_t L_19 = Resolution_get_height_m3835((&V_6), /*hidden argument*/NULL);
		int32_t L_20 = Mathf_Min_m2993(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)3840))))
		{
			goto IL_0139;
		}
	}
	{
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)2160))))
		{
			goto IL_0129;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (150.0f);
		goto IL_0134;
	}

IL_0129:
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (200.0f);
	}

IL_0134:
	{
		goto IL_031b;
	}

IL_0139:
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)2880))))
		{
			goto IL_0160;
		}
	}
	{
		int32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)1800)))))
		{
			goto IL_0160;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (220.0f);
		goto IL_031b;
	}

IL_0160:
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)2560))))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_26 = V_4;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)1600))))
		{
			goto IL_01a1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GenericDisplayDevice_t596_il2cpp_TypeInfo_var);
		bool L_27 = GenericDisplayDevice_get_IsLaptop_m3245(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0191;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (226.0f);
		goto IL_019c;
	}

IL_0191:
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (101.0f);
	}

IL_019c:
	{
		goto IL_01b8;
	}

IL_01a1:
	{
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)1440))))
		{
			goto IL_01b8;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (109.0f);
	}

IL_01b8:
	{
		goto IL_031b;
	}

IL_01bd:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)2048))))
		{
			goto IL_01f4;
		}
	}
	{
		int32_t L_30 = V_4;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)1152))))
		{
			goto IL_01e4;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (100.0f);
		goto IL_01ef;
	}

IL_01e4:
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (171.0f);
	}

IL_01ef:
	{
		goto IL_031b;
	}

IL_01f4:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)1920))))
		{
			goto IL_026d;
		}
	}
	{
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)1440))))
		{
			goto IL_021b;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (110.0f);
		goto IL_0268;
	}

IL_021b:
	{
		int32_t L_33 = V_4;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)1200))))
		{
			goto IL_0237;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (90.0f);
		goto IL_0268;
	}

IL_0237:
	{
		int32_t L_34 = V_4;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)1080))))
		{
			goto IL_0268;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GenericDisplayDevice_t596_il2cpp_TypeInfo_var);
		bool L_35 = GenericDisplayDevice_get_IsLaptop_m3245(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_025d;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (130.0f);
		goto IL_0268;
	}

IL_025d:
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (92.0f);
	}

IL_0268:
	{
		goto IL_031b;
	}

IL_026d:
	{
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)1680))))
		{
			goto IL_0288;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (129.0f);
		goto IL_031b;
	}

IL_0288:
	{
		int32_t L_37 = V_1;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)1600))))
		{
			goto IL_02a3;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (140.0f);
		goto IL_031b;
	}

IL_02a3:
	{
		int32_t L_38 = V_1;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)1440))))
		{
			goto IL_02da;
		}
	}
	{
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)1050))))
		{
			goto IL_02ca;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (125.0f);
		goto IL_02d5;
	}

IL_02ca:
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (110.0f);
	}

IL_02d5:
	{
		goto IL_031b;
	}

IL_02da:
	{
		int32_t L_40 = V_1;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)1366))))
		{
			goto IL_02f5;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (125.0f);
		goto IL_031b;
	}

IL_02f5:
	{
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)1280))))
		{
			goto IL_0310;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (110.0f);
		goto IL_031b;
	}

IL_0310:
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (96.0f);
	}

IL_031b:
	{
		goto IL_04e8;
	}

IL_0320:
	{
		Resolution_t688  L_42 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_8 = L_42;
		int32_t L_43 = Resolution_get_width_m3834((&V_8), /*hidden argument*/NULL);
		Resolution_t688  L_44 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_9 = L_44;
		int32_t L_45 = Resolution_get_height_m3835((&V_9), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_46 = Mathf_Max_m2991(NULL /*static, unused*/, L_43, L_45, /*hidden argument*/NULL);
		V_7 = L_46;
		Resolution_t688  L_47 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_11 = L_47;
		int32_t L_48 = Resolution_get_width_m3834((&V_11), /*hidden argument*/NULL);
		Resolution_t688  L_49 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_12 = L_49;
		int32_t L_50 = Resolution_get_height_m3835((&V_12), /*hidden argument*/NULL);
		int32_t L_51 = Mathf_Min_m2993(NULL /*static, unused*/, L_48, L_50, /*hidden argument*/NULL);
		V_10 = L_51;
		int32_t L_52 = V_7;
		if ((((int32_t)L_52) < ((int32_t)((int32_t)1280))))
		{
			goto IL_039e;
		}
	}
	{
		int32_t L_53 = V_10;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)800))))
		{
			goto IL_038e;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (285.0f);
		goto IL_0399;
	}

IL_038e:
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (312.0f);
	}

IL_0399:
	{
		goto IL_03fd;
	}

IL_039e:
	{
		int32_t L_54 = V_7;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)1024))))
		{
			goto IL_03ba;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (171.0f);
		goto IL_03fd;
	}

IL_03ba:
	{
		int32_t L_55 = V_7;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)960))))
		{
			goto IL_03d6;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (256.0f);
		goto IL_03fd;
	}

IL_03d6:
	{
		int32_t L_56 = V_7;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)800))))
		{
			goto IL_03f2;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (240.0f);
		goto IL_03fd;
	}

IL_03f2:
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (160.0f);
	}

IL_03fd:
	{
		goto IL_04e8;
	}

IL_0402:
	{
		Resolution_t688  L_57 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_14 = L_57;
		int32_t L_58 = Resolution_get_width_m3834((&V_14), /*hidden argument*/NULL);
		Resolution_t688  L_59 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_15 = L_59;
		int32_t L_60 = Resolution_get_height_m3835((&V_15), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_61 = Mathf_Max_m2991(NULL /*static, unused*/, L_58, L_60, /*hidden argument*/NULL);
		V_13 = L_61;
		Resolution_t688  L_62 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_17 = L_62;
		int32_t L_63 = Resolution_get_width_m3834((&V_17), /*hidden argument*/NULL);
		Resolution_t688  L_64 = Screen_get_currentResolution_m3833(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_18 = L_64;
		int32_t L_65 = Resolution_get_height_m3835((&V_18), /*hidden argument*/NULL);
		int32_t L_66 = Mathf_Min_m2993(NULL /*static, unused*/, L_63, L_65, /*hidden argument*/NULL);
		V_16 = L_66;
		int32_t L_67 = V_13;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)2048))))
		{
			goto IL_0464;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (290.0f);
		goto IL_04c3;
	}

IL_0464:
	{
		int32_t L_68 = V_13;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)1136))))
		{
			goto IL_0480;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (326.0f);
		goto IL_04c3;
	}

IL_0480:
	{
		int32_t L_69 = V_13;
		if ((((int32_t)L_69) < ((int32_t)((int32_t)1024))))
		{
			goto IL_049c;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (160.0f);
		goto IL_04c3;
	}

IL_049c:
	{
		int32_t L_70 = V_13;
		if ((((int32_t)L_70) < ((int32_t)((int32_t)960))))
		{
			goto IL_04b8;
		}
	}
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (326.0f);
		goto IL_04c3;
	}

IL_04b8:
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (160.0f);
	}

IL_04c3:
	{
		goto IL_04e8;
	}

IL_04c8:
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (160.0f);
		goto IL_04e8;
	}

IL_04d8:
	{
		((DisplayDevice_t597 *)__this)->___dpi_3 = (160.0f);
		goto IL_04e8;
	}

IL_04e8:
	{
		return;
	}
}
// TouchScript.GestureManager
#include "TouchScript_TouchScript_GestureManager.h"
// TouchScript.GestureManager
#include "TouchScript_TouchScript_GestureManagerMethodDeclarations.h"
// TouchScript.GestureManagerInstance
#include "TouchScript_TouchScript_GestureManagerInstanceMethodDeclarations.h"
// System.Void TouchScript.GestureManager::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void GestureManager__ctor_m3247 (GestureManager_t599 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.IGestureManager TouchScript.GestureManager::get_Instance()
// TouchScript.GestureManagerInstance
#include "TouchScript_TouchScript_GestureManagerInstanceMethodDeclarations.h"
extern TypeInfo* GestureManagerInstance_t600_il2cpp_TypeInfo_var;
extern "C" Object_t * GestureManager_get_Instance_m3248 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GestureManagerInstance_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		Object_t * L_0 = GestureManagerInstance_get_Instance_m3251(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// TouchScript.GestureManagerInstance
#include "TouchScript_TouchScript_GestureManagerInstance.h"
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8.h"
// System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
#include "TouchScript_ArrayTypes.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// System.EventHandler
#include "mscorlib_System_EventHandler.h"
// TouchScript.Gestures.Gesture/GestureState
#include "TouchScript_TouchScript_Gestures_Gesture_GestureState.h"
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_Gesture.h"
#include "mscorlib_ArrayTypes.h"
// System.Action`1<UnityEngine.Transform>
#include "mscorlib_System_Action_1_gen_0.h"
// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>>
#include "System_Core_System_Action_2_gen.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0.h"
// System.Collections.Generic.List`1/Enumerator<TouchScript.Gestures.Gesture>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti.h"
// System.Predicate`1<TouchScript.ITouch>
#include "mscorlib_System_Predicate_1_gen_2.h"
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
// System.Action`1<UnityEngine.Transform>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>>
#include "System_Core_System_Action_2_genMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollectiMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<TouchScript.Gestures.Gesture>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// System.Predicate`1<TouchScript.ITouch>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
struct GestureManagerInstanceU5BU5D_t690;
struct ObjectU5BU5D_t234;
// Declaration !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C" ObjectU5BU5D_t234* Object_FindObjectsOfType_TisObject_t_m1145_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectsOfType_TisObject_t_m1145(__this /* static, unused */, method) (( ObjectU5BU5D_t234* (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectsOfType_TisObject_t_m1145_gshared)(__this /* static, unused */, method)
// Declaration !!0[] UnityEngine.Object::FindObjectsOfType<TouchScript.GestureManagerInstance>()
// !!0[] UnityEngine.Object::FindObjectsOfType<TouchScript.GestureManagerInstance>()
#define Object_FindObjectsOfType_TisGestureManagerInstance_t600_m3839(__this /* static, unused */, method) (( GestureManagerInstanceU5BU5D_t690* (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectsOfType_TisObject_t_m1145_gshared)(__this /* static, unused */, method)
struct GestureManagerInstance_t600;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m1136_gshared (GameObject_t30 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m1136(__this, method) (( Object_t * (*) (GameObject_t30 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1136_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<TouchScript.GestureManagerInstance>()
// !!0 UnityEngine.GameObject::AddComponent<TouchScript.GestureManagerInstance>()
#define GameObject_AddComponent_TisGestureManagerInstance_t600_m3840(__this, method) (( GestureManagerInstance_t600 * (*) (GameObject_t30 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1136_gshared)(__this, method)
struct GestureU5BU5D_t694;
struct ObjectU5BU5D_t234;
// Declaration !!0[] UnityEngine.Component::GetComponents<System.Object>()
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" ObjectU5BU5D_t234* Component_GetComponents_TisObject_t_m1209_gshared (Component_t102 * __this, const MethodInfo* method);
#define Component_GetComponents_TisObject_t_m1209(__this, method) (( ObjectU5BU5D_t234* (*) (Component_t102 *, const MethodInfo*))Component_GetComponents_TisObject_t_m1209_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponents<TouchScript.Gestures.Gesture>()
// !!0[] UnityEngine.Component::GetComponents<TouchScript.Gestures.Gesture>()
#define Component_GetComponents_TisGesture_t270_m3858(__this, method) (( GestureU5BU5D_t694* (*) (Component_t102 *, const MethodInfo*))Component_GetComponents_TisObject_t_m1209_gshared)(__this, method)
// System.Void TouchScript.GestureManagerInstance::.ctor()
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* List_1_t601_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t602_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t603_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3836_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3837_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3838_MethodInfo_var;
extern "C" void GestureManagerInstance__ctor_m3249 (GestureManagerInstance_t600 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		Dictionary_2_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		Dictionary_2_t603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		List_1__ctor_m3836_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484035);
		Dictionary_2__ctor_m3837_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484036);
		Dictionary_2__ctor_m3838_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484037);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t601 * L_0 = (List_1_t601 *)il2cpp_codegen_object_new (List_1_t601_il2cpp_TypeInfo_var);
		List_1__ctor_m3836(L_0, ((int32_t)10), /*hidden argument*/List_1__ctor_m3836_MethodInfo_var);
		__this->___gesturesToReset_4 = L_0;
		Dictionary_2_t602 * L_1 = (Dictionary_2_t602 *)il2cpp_codegen_object_new (Dictionary_2_t602_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3837(L_1, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m3837_MethodInfo_var);
		__this->___targetTouches_5 = L_1;
		Dictionary_2_t603 * L_2 = (Dictionary_2_t603 *)il2cpp_codegen_object_new (Dictionary_2_t603_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3838(L_2, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m3838_MethodInfo_var);
		__this->___gestureTouches_6 = L_2;
		List_1_t601 * L_3 = (List_1_t601 *)il2cpp_codegen_object_new (List_1_t601_il2cpp_TypeInfo_var);
		List_1__ctor_m3836(L_3, ((int32_t)10), /*hidden argument*/List_1__ctor_m3836_MethodInfo_var);
		__this->___activeGestures_7 = L_3;
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::.cctor()
extern "C" void GestureManagerInstance__cctor_m3250 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// TouchScript.IGestureManager TouchScript.GestureManagerInstance::get_Instance()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* GestureManagerInstance_t600_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t30_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectsOfType_TisGestureManagerInstance_t600_m3839_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisGestureManagerInstance_t600_m3840_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral321;
extern "C" Object_t * GestureManagerInstance_get_Instance_m3251 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GestureManagerInstance_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		GameObject_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Object_FindObjectsOfType_TisGestureManagerInstance_t600_m3839_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484038);
		GameObject_AddComponent_TisGestureManagerInstance_t600_m3840_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484039);
		_stringLiteral321 = il2cpp_codegen_string_literal_from_index(321);
		s_Il2CppMethodIntialized = true;
	}
	GestureManagerInstanceU5BU5D_t690* V_0 = {0};
	GameObject_t30 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		bool L_0 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___shuttingDown_3;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		GestureManagerInstance_t600 * L_1 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006f;
		}
	}
	{
		bool L_3 = Application_get_isPlaying_m2808(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_0028:
	{
		GestureManagerInstanceU5BU5D_t690* L_4 = Object_FindObjectsOfType_TisGestureManagerInstance_t600_m3839(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisGestureManagerInstance_t600_m3839_MethodInfo_var);
		V_0 = L_4;
		GestureManagerInstanceU5BU5D_t690* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)(((Array_t *)L_5)->max_length))))
		{
			goto IL_005e;
		}
	}
	{
		GameObject_t30 * L_6 = (GameObject_t30 *)il2cpp_codegen_object_new (GameObject_t30_il2cpp_TypeInfo_var);
		GameObject__ctor_m2776(L_6, _stringLiteral321, /*hidden argument*/NULL);
		V_1 = L_6;
		GameObject_t30 * L_7 = V_1;
		NullCheck(L_7);
		Object_set_hideFlags_m301(L_7, 1, /*hidden argument*/NULL);
		GameObject_t30 * L_8 = V_1;
		Object_DontDestroyOnLoad_m456(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		GameObject_t30 * L_9 = V_1;
		NullCheck(L_9);
		GestureManagerInstance_t600 * L_10 = GameObject_AddComponent_TisGestureManagerInstance_t600_m3840(L_9, /*hidden argument*/GameObject_AddComponent_TisGestureManagerInstance_t600_m3840_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___instance_2 = L_10;
		goto IL_006f;
	}

IL_005e:
	{
		GestureManagerInstanceU5BU5D_t690* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))) < ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		GestureManagerInstanceU5BU5D_t690* L_12 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___instance_2 = (*(GestureManagerInstance_t600 **)(GestureManagerInstance_t600 **)SZArrayLdElema(L_12, L_13, sizeof(GestureManagerInstance_t600 *)));
	}

IL_006f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		GestureManagerInstance_t600 * L_14 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		return L_14;
	}
}
// System.Void TouchScript.GestureManagerInstance::Awake()
extern TypeInfo* GestureManagerInstance_t600_il2cpp_TypeInfo_var;
extern "C" void GestureManagerInstance_Awake_m3252 (GestureManagerInstance_t600 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GestureManagerInstance_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		GestureManagerInstance_t600 * L_0 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
	}

IL_0016:
	{
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::OnEnable()
// TouchScript.TouchManager
#include "TouchScript_TouchScript_TouchManagerMethodDeclarations.h"
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
// System.EventHandler`1<TouchScript.TouchEventArgs>
#include "mscorlib_System_EventHandler_1_gen_0MethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandler_t169_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* GestureManagerInstance_frameStartedHandler_m3274_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_frameFinishedHandler_m3273_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_touchBeganHandler_m3275_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m1218_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_touchMovedHandler_m3276_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_touchEndedHandler_m3277_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_touchCancelledHandler_m3278_MethodInfo_var;
extern "C" void GestureManagerInstance_OnEnable_m3253 (GestureManagerInstance_t600 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		EventHandler_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		GestureManagerInstance_frameStartedHandler_m3274_MethodInfo_var = il2cpp_codegen_method_info_from_index(392);
		GestureManagerInstance_frameFinishedHandler_m3273_MethodInfo_var = il2cpp_codegen_method_info_from_index(393);
		GestureManagerInstance_touchBeganHandler_m3275_MethodInfo_var = il2cpp_codegen_method_info_from_index(394);
		EventHandler_1__ctor_m1218_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		GestureManagerInstance_touchMovedHandler_m3276_MethodInfo_var = il2cpp_codegen_method_info_from_index(395);
		GestureManagerInstance_touchEndedHandler_m3277_MethodInfo_var = il2cpp_codegen_method_info_from_index(396);
		GestureManagerInstance_touchCancelledHandler_m3278_MethodInfo_var = il2cpp_codegen_method_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_0 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0078;
		}
	}
	{
		Object_t * L_2 = V_0;
		IntPtr_t L_3 = { (void*)GestureManagerInstance_frameStartedHandler_m3274_MethodInfo_var };
		EventHandler_t169 * L_4 = (EventHandler_t169 *)il2cpp_codegen_object_new (EventHandler_t169_il2cpp_TypeInfo_var);
		EventHandler__ctor_m1098(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_t169 * >::Invoke(0 /* System.Void TouchScript.ITouchManager::add_FrameStarted(System.EventHandler) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_2, L_4);
		Object_t * L_5 = V_0;
		IntPtr_t L_6 = { (void*)GestureManagerInstance_frameFinishedHandler_m3273_MethodInfo_var };
		EventHandler_t169 * L_7 = (EventHandler_t169 *)il2cpp_codegen_object_new (EventHandler_t169_il2cpp_TypeInfo_var);
		EventHandler__ctor_m1098(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_t169 * >::Invoke(2 /* System.Void TouchScript.ITouchManager::add_FrameFinished(System.EventHandler) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_5, L_7);
		Object_t * L_8 = V_0;
		IntPtr_t L_9 = { (void*)GestureManagerInstance_touchBeganHandler_m3275_MethodInfo_var };
		EventHandler_1_t253 * L_10 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_10, __this, L_9, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(4 /* System.Void TouchScript.ITouchManager::add_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_8, L_10);
		Object_t * L_11 = V_0;
		IntPtr_t L_12 = { (void*)GestureManagerInstance_touchMovedHandler_m3276_MethodInfo_var };
		EventHandler_1_t253 * L_13 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_13, __this, L_12, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(6 /* System.Void TouchScript.ITouchManager::add_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_11, L_13);
		Object_t * L_14 = V_0;
		IntPtr_t L_15 = { (void*)GestureManagerInstance_touchEndedHandler_m3277_MethodInfo_var };
		EventHandler_1_t253 * L_16 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_16, __this, L_15, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(8 /* System.Void TouchScript.ITouchManager::add_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_14, L_16);
		Object_t * L_17 = V_0;
		IntPtr_t L_18 = { (void*)GestureManagerInstance_touchCancelledHandler_m3278_MethodInfo_var };
		EventHandler_1_t253 * L_19 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_19, __this, L_18, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_17);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(10 /* System.Void TouchScript.ITouchManager::add_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_17, L_19);
	}

IL_0078:
	{
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::OnDisable()
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandler_t169_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* GestureManagerInstance_frameStartedHandler_m3274_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_frameFinishedHandler_m3273_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_touchBeganHandler_m3275_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m1218_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_touchMovedHandler_m3276_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_touchEndedHandler_m3277_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_touchCancelledHandler_m3278_MethodInfo_var;
extern "C" void GestureManagerInstance_OnDisable_m3254 (GestureManagerInstance_t600 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		EventHandler_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		GestureManagerInstance_frameStartedHandler_m3274_MethodInfo_var = il2cpp_codegen_method_info_from_index(392);
		GestureManagerInstance_frameFinishedHandler_m3273_MethodInfo_var = il2cpp_codegen_method_info_from_index(393);
		GestureManagerInstance_touchBeganHandler_m3275_MethodInfo_var = il2cpp_codegen_method_info_from_index(394);
		EventHandler_1__ctor_m1218_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		GestureManagerInstance_touchMovedHandler_m3276_MethodInfo_var = il2cpp_codegen_method_info_from_index(395);
		GestureManagerInstance_touchEndedHandler_m3277_MethodInfo_var = il2cpp_codegen_method_info_from_index(396);
		GestureManagerInstance_touchCancelledHandler_m3278_MethodInfo_var = il2cpp_codegen_method_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_0 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0078;
		}
	}
	{
		Object_t * L_2 = V_0;
		IntPtr_t L_3 = { (void*)GestureManagerInstance_frameStartedHandler_m3274_MethodInfo_var };
		EventHandler_t169 * L_4 = (EventHandler_t169 *)il2cpp_codegen_object_new (EventHandler_t169_il2cpp_TypeInfo_var);
		EventHandler__ctor_m1098(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_t169 * >::Invoke(1 /* System.Void TouchScript.ITouchManager::remove_FrameStarted(System.EventHandler) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_2, L_4);
		Object_t * L_5 = V_0;
		IntPtr_t L_6 = { (void*)GestureManagerInstance_frameFinishedHandler_m3273_MethodInfo_var };
		EventHandler_t169 * L_7 = (EventHandler_t169 *)il2cpp_codegen_object_new (EventHandler_t169_il2cpp_TypeInfo_var);
		EventHandler__ctor_m1098(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_t169 * >::Invoke(3 /* System.Void TouchScript.ITouchManager::remove_FrameFinished(System.EventHandler) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_5, L_7);
		Object_t * L_8 = V_0;
		IntPtr_t L_9 = { (void*)GestureManagerInstance_touchBeganHandler_m3275_MethodInfo_var };
		EventHandler_1_t253 * L_10 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_10, __this, L_9, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(5 /* System.Void TouchScript.ITouchManager::remove_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_8, L_10);
		Object_t * L_11 = V_0;
		IntPtr_t L_12 = { (void*)GestureManagerInstance_touchMovedHandler_m3276_MethodInfo_var };
		EventHandler_1_t253 * L_13 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_13, __this, L_12, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(7 /* System.Void TouchScript.ITouchManager::remove_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_11, L_13);
		Object_t * L_14 = V_0;
		IntPtr_t L_15 = { (void*)GestureManagerInstance_touchEndedHandler_m3277_MethodInfo_var };
		EventHandler_1_t253 * L_16 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_16, __this, L_15, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(9 /* System.Void TouchScript.ITouchManager::remove_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_14, L_16);
		Object_t * L_17 = V_0;
		IntPtr_t L_18 = { (void*)GestureManagerInstance_touchCancelledHandler_m3278_MethodInfo_var };
		EventHandler_1_t253 * L_19 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_19, __this, L_18, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_17);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(11 /* System.Void TouchScript.ITouchManager::remove_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_17, L_19);
	}

IL_0078:
	{
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::OnApplicationQuit()
extern TypeInfo* GestureManagerInstance_t600_il2cpp_TypeInfo_var;
extern "C" void GestureManagerInstance_OnApplicationQuit_m3255 (GestureManagerInstance_t600 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GestureManagerInstance_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___shuttingDown_3 = 1;
		return;
	}
}
// TouchScript.Gestures.Gesture/GestureState TouchScript.GestureManagerInstance::GestureChangeState(TouchScript.Gestures.Gesture,TouchScript.Gestures.Gesture/GestureState)
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_Gesture.h"
// TouchScript.Gestures.Gesture/GestureState
#include "TouchScript_TouchScript_Gestures_Gesture_GestureState.h"
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// TouchScript.GestureManagerInstance
#include "TouchScript_TouchScript_GestureManagerInstanceMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* GestureState_t607_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral322;
extern "C" int32_t GestureManagerInstance_GestureChangeState_m3256 (GestureManagerInstance_t600 * __this, Gesture_t270 * ___gesture, int32_t ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		GestureState_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral322 = il2cpp_codegen_string_literal_from_index(322);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	{
		V_0 = 0;
		int32_t L_0 = ___state;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_0027;
		}
		if (L_1 == 1)
		{
			goto IL_002c;
		}
		if (L_1 == 2)
		{
			goto IL_00aa;
		}
		if (L_1 == 3)
		{
			goto IL_0125;
		}
		if (L_1 == 4)
		{
			goto IL_01b4;
		}
		if (L_1 == 5)
		{
			goto IL_0103;
		}
	}
	{
		goto IL_01d6;
	}

IL_0027:
	{
		goto IL_01d6;
	}

IL_002c:
	{
		Gesture_t270 * L_2 = ___gesture;
		NullCheck(L_2);
		int32_t L_3 = Gesture_get_State_m3316(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0043;
	}

IL_003e:
	{
		goto IL_0078;
	}

IL_0043:
	{
		ObjectU5BU5D_t234* L_5 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 3));
		Gesture_t270 * L_6 = ___gesture;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 0, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t234* L_7 = L_5;
		int32_t L_8 = ___state;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(GestureState_t607_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 1, sizeof(Object_t *))) = (Object_t *)L_10;
		ObjectU5BU5D_t234* L_11 = L_7;
		Gesture_t270 * L_12 = ___gesture;
		NullCheck(L_12);
		int32_t L_13 = Gesture_get_State_m3316(L_12, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(GestureState_t607_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		ArrayElementTypeCheck (L_11, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 2, sizeof(Object_t *))) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m3100(NULL /*static, unused*/, _stringLiteral322, L_11, /*hidden argument*/NULL);
		MonoBehaviour_print_m1076(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		goto IL_0078;
	}

IL_0078:
	{
		Gesture_t270 * L_17 = ___gesture;
		bool L_18 = GestureManagerInstance_recognizeGestureIfNotPrevented_m3271(__this, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_00a5;
		}
	}
	{
		List_1_t601 * L_20 = (__this->___gesturesToReset_4);
		Gesture_t270 * L_21 = ___gesture;
		NullCheck(L_20);
		bool L_22 = (bool)VirtFuncInvoker1< bool, Gesture_t270 * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Contains(!0) */, L_20, L_21);
		if (L_22)
		{
			goto IL_00a3;
		}
	}
	{
		List_1_t601 * L_23 = (__this->___gesturesToReset_4);
		Gesture_t270 * L_24 = ___gesture;
		NullCheck(L_23);
		VirtActionInvoker1< Gesture_t270 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Add(!0) */, L_23, L_24);
	}

IL_00a3:
	{
		return (int32_t)(5);
	}

IL_00a5:
	{
		goto IL_01d6;
	}

IL_00aa:
	{
		Gesture_t270 * L_25 = ___gesture;
		NullCheck(L_25);
		int32_t L_26 = Gesture_get_State_m3316(L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)1)))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)2)))
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00c9;
	}

IL_00c4:
	{
		goto IL_00fe;
	}

IL_00c9:
	{
		ObjectU5BU5D_t234* L_29 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 3));
		Gesture_t270 * L_30 = ___gesture;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 0);
		ArrayElementTypeCheck (L_29, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, 0, sizeof(Object_t *))) = (Object_t *)L_30;
		ObjectU5BU5D_t234* L_31 = L_29;
		int32_t L_32 = ___state;
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(GestureState_t607_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 1);
		ArrayElementTypeCheck (L_31, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 1, sizeof(Object_t *))) = (Object_t *)L_34;
		ObjectU5BU5D_t234* L_35 = L_31;
		Gesture_t270 * L_36 = ___gesture;
		NullCheck(L_36);
		int32_t L_37 = Gesture_get_State_m3316(L_36, /*hidden argument*/NULL);
		int32_t L_38 = L_37;
		Object_t * L_39 = Box(GestureState_t607_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2, sizeof(Object_t *))) = (Object_t *)L_39;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Format_m3100(NULL /*static, unused*/, _stringLiteral322, L_35, /*hidden argument*/NULL);
		MonoBehaviour_print_m1076(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00fe:
	{
		goto IL_01d6;
	}

IL_0103:
	{
		List_1_t601 * L_41 = (__this->___gesturesToReset_4);
		Gesture_t270 * L_42 = ___gesture;
		NullCheck(L_41);
		bool L_43 = (bool)VirtFuncInvoker1< bool, Gesture_t270 * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Contains(!0) */, L_41, L_42);
		if (L_43)
		{
			goto IL_0120;
		}
	}
	{
		List_1_t601 * L_44 = (__this->___gesturesToReset_4);
		Gesture_t270 * L_45 = ___gesture;
		NullCheck(L_44);
		VirtActionInvoker1< Gesture_t270 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Add(!0) */, L_44, L_45);
	}

IL_0120:
	{
		goto IL_01d6;
	}

IL_0125:
	{
		List_1_t601 * L_46 = (__this->___gesturesToReset_4);
		Gesture_t270 * L_47 = ___gesture;
		NullCheck(L_46);
		bool L_48 = (bool)VirtFuncInvoker1< bool, Gesture_t270 * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Contains(!0) */, L_46, L_47);
		if (L_48)
		{
			goto IL_0142;
		}
	}
	{
		List_1_t601 * L_49 = (__this->___gesturesToReset_4);
		Gesture_t270 * L_50 = ___gesture;
		NullCheck(L_49);
		VirtActionInvoker1< Gesture_t270 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Add(!0) */, L_49, L_50);
	}

IL_0142:
	{
		Gesture_t270 * L_51 = ___gesture;
		NullCheck(L_51);
		int32_t L_52 = Gesture_get_State_m3316(L_51, /*hidden argument*/NULL);
		V_2 = L_52;
		int32_t L_53 = V_2;
		if (L_53 == 0)
		{
			goto IL_0160;
		}
		if (L_53 == 1)
		{
			goto IL_0175;
		}
		if (L_53 == 2)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_017a;
	}

IL_0160:
	{
		Gesture_t270 * L_54 = ___gesture;
		bool L_55 = GestureManagerInstance_recognizeGestureIfNotPrevented_m3271(__this, L_54, /*hidden argument*/NULL);
		V_0 = L_55;
		bool L_56 = V_0;
		if (L_56)
		{
			goto IL_0170;
		}
	}
	{
		return (int32_t)(5);
	}

IL_0170:
	{
		goto IL_01af;
	}

IL_0175:
	{
		goto IL_01af;
	}

IL_017a:
	{
		ObjectU5BU5D_t234* L_57 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 3));
		Gesture_t270 * L_58 = ___gesture;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 0);
		ArrayElementTypeCheck (L_57, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_57, 0, sizeof(Object_t *))) = (Object_t *)L_58;
		ObjectU5BU5D_t234* L_59 = L_57;
		int32_t L_60 = ___state;
		int32_t L_61 = L_60;
		Object_t * L_62 = Box(GestureState_t607_il2cpp_TypeInfo_var, &L_61);
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, 1);
		ArrayElementTypeCheck (L_59, L_62);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_59, 1, sizeof(Object_t *))) = (Object_t *)L_62;
		ObjectU5BU5D_t234* L_63 = L_59;
		Gesture_t270 * L_64 = ___gesture;
		NullCheck(L_64);
		int32_t L_65 = Gesture_get_State_m3316(L_64, /*hidden argument*/NULL);
		int32_t L_66 = L_65;
		Object_t * L_67 = Box(GestureState_t607_il2cpp_TypeInfo_var, &L_66);
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, 2);
		ArrayElementTypeCheck (L_63, L_67);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_63, 2, sizeof(Object_t *))) = (Object_t *)L_67;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_68 = String_Format_m3100(NULL /*static, unused*/, _stringLiteral322, L_63, /*hidden argument*/NULL);
		MonoBehaviour_print_m1076(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		goto IL_01af;
	}

IL_01af:
	{
		goto IL_01d6;
	}

IL_01b4:
	{
		List_1_t601 * L_69 = (__this->___gesturesToReset_4);
		Gesture_t270 * L_70 = ___gesture;
		NullCheck(L_69);
		bool L_71 = (bool)VirtFuncInvoker1< bool, Gesture_t270 * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Contains(!0) */, L_69, L_70);
		if (L_71)
		{
			goto IL_01d1;
		}
	}
	{
		List_1_t601 * L_72 = (__this->___gesturesToReset_4);
		Gesture_t270 * L_73 = ___gesture;
		NullCheck(L_72);
		VirtActionInvoker1< Gesture_t270 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Add(!0) */, L_72, L_73);
	}

IL_01d1:
	{
		goto IL_01d6;
	}

IL_01d6:
	{
		int32_t L_74 = ___state;
		return L_74;
	}
}
// System.Void TouchScript.GestureManagerInstance::updateBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// System.Action`1<UnityEngine.Transform>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>>
#include "System_Core_System_Action_2_genMethodDeclarations.h"
extern TypeInfo* Action_1_t677_il2cpp_TypeInfo_var;
extern TypeInfo* GestureManagerInstance_t600_il2cpp_TypeInfo_var;
extern TypeInfo* Action_2_t604_il2cpp_TypeInfo_var;
extern const MethodInfo* GestureManagerInstance_processTargetBegan_m3263_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3841_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_U3CupdateBeganU3Em__0_m3279_MethodInfo_var;
extern const MethodInfo* Action_2__ctor_m3842_MethodInfo_var;
extern "C" void GestureManagerInstance_updateBegan_m3257 (GestureManagerInstance_t600 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		GestureManagerInstance_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		Action_2_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		GestureManagerInstance_processTargetBegan_m3263_MethodInfo_var = il2cpp_codegen_method_info_from_index(398);
		Action_1__ctor_m3841_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484047);
		GestureManagerInstance_U3CupdateBeganU3Em__0_m3279_MethodInfo_var = il2cpp_codegen_method_info_from_index(400);
		Action_2__ctor_m3842_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484049);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t677 * G_B2_0 = {0};
	Object_t* G_B2_1 = {0};
	GestureManagerInstance_t600 * G_B2_2 = {0};
	Action_1_t677 * G_B1_0 = {0};
	Object_t* G_B1_1 = {0};
	GestureManagerInstance_t600 * G_B1_2 = {0};
	{
		Object_t* L_0 = ___touches;
		IntPtr_t L_1 = { (void*)GestureManagerInstance_processTargetBegan_m3263_MethodInfo_var };
		Action_1_t677 * L_2 = (Action_1_t677 *)il2cpp_codegen_object_new (Action_1_t677_il2cpp_TypeInfo_var);
		Action_1__ctor_m3841(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m3841_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		Action_2_t604 * L_3 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_8;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		IntPtr_t L_4 = { (void*)GestureManagerInstance_U3CupdateBeganU3Em__0_m3279_MethodInfo_var };
		Action_2_t604 * L_5 = (Action_2_t604 *)il2cpp_codegen_object_new (Action_2_t604_il2cpp_TypeInfo_var);
		Action_2__ctor_m3842(L_5, NULL, L_4, /*hidden argument*/Action_2__ctor_m3842_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_8 = L_5;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		Action_2_t604 * L_6 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_8;
		NullCheck(G_B2_2);
		GestureManagerInstance_update_m3261(G_B2_2, G_B2_1, G_B2_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::updateMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* Action_1_t677_il2cpp_TypeInfo_var;
extern TypeInfo* GestureManagerInstance_t600_il2cpp_TypeInfo_var;
extern TypeInfo* Action_2_t604_il2cpp_TypeInfo_var;
extern const MethodInfo* GestureManagerInstance_processTarget_m3262_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3841_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_U3CupdateMovedU3Em__1_m3280_MethodInfo_var;
extern const MethodInfo* Action_2__ctor_m3842_MethodInfo_var;
extern "C" void GestureManagerInstance_updateMoved_m3258 (GestureManagerInstance_t600 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		GestureManagerInstance_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		Action_2_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		GestureManagerInstance_processTarget_m3262_MethodInfo_var = il2cpp_codegen_method_info_from_index(402);
		Action_1__ctor_m3841_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484047);
		GestureManagerInstance_U3CupdateMovedU3Em__1_m3280_MethodInfo_var = il2cpp_codegen_method_info_from_index(403);
		Action_2__ctor_m3842_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484049);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t677 * G_B2_0 = {0};
	Object_t* G_B2_1 = {0};
	GestureManagerInstance_t600 * G_B2_2 = {0};
	Action_1_t677 * G_B1_0 = {0};
	Object_t* G_B1_1 = {0};
	GestureManagerInstance_t600 * G_B1_2 = {0};
	{
		Object_t* L_0 = ___touches;
		IntPtr_t L_1 = { (void*)GestureManagerInstance_processTarget_m3262_MethodInfo_var };
		Action_1_t677 * L_2 = (Action_1_t677 *)il2cpp_codegen_object_new (Action_1_t677_il2cpp_TypeInfo_var);
		Action_1__ctor_m3841(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m3841_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		Action_2_t604 * L_3 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache7_9;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		IntPtr_t L_4 = { (void*)GestureManagerInstance_U3CupdateMovedU3Em__1_m3280_MethodInfo_var };
		Action_2_t604 * L_5 = (Action_2_t604 *)il2cpp_codegen_object_new (Action_2_t604_il2cpp_TypeInfo_var);
		Action_2__ctor_m3842(L_5, NULL, L_4, /*hidden argument*/Action_2__ctor_m3842_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache7_9 = L_5;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		Action_2_t604 * L_6 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache7_9;
		NullCheck(G_B2_2);
		GestureManagerInstance_update_m3261(G_B2_2, G_B2_1, G_B2_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::updateEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* Action_1_t677_il2cpp_TypeInfo_var;
extern TypeInfo* GestureManagerInstance_t600_il2cpp_TypeInfo_var;
extern TypeInfo* Action_2_t604_il2cpp_TypeInfo_var;
extern const MethodInfo* GestureManagerInstance_processTarget_m3262_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3841_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_U3CupdateEndedU3Em__2_m3281_MethodInfo_var;
extern const MethodInfo* Action_2__ctor_m3842_MethodInfo_var;
extern "C" void GestureManagerInstance_updateEnded_m3259 (GestureManagerInstance_t600 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		GestureManagerInstance_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		Action_2_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		GestureManagerInstance_processTarget_m3262_MethodInfo_var = il2cpp_codegen_method_info_from_index(402);
		Action_1__ctor_m3841_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484047);
		GestureManagerInstance_U3CupdateEndedU3Em__2_m3281_MethodInfo_var = il2cpp_codegen_method_info_from_index(404);
		Action_2__ctor_m3842_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484049);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t677 * G_B2_0 = {0};
	Object_t* G_B2_1 = {0};
	GestureManagerInstance_t600 * G_B2_2 = {0};
	Action_1_t677 * G_B1_0 = {0};
	Object_t* G_B1_1 = {0};
	GestureManagerInstance_t600 * G_B1_2 = {0};
	{
		Object_t* L_0 = ___touches;
		IntPtr_t L_1 = { (void*)GestureManagerInstance_processTarget_m3262_MethodInfo_var };
		Action_1_t677 * L_2 = (Action_1_t677 *)il2cpp_codegen_object_new (Action_1_t677_il2cpp_TypeInfo_var);
		Action_1__ctor_m3841(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m3841_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		Action_2_t604 * L_3 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_10;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		IntPtr_t L_4 = { (void*)GestureManagerInstance_U3CupdateEndedU3Em__2_m3281_MethodInfo_var };
		Action_2_t604 * L_5 = (Action_2_t604 *)il2cpp_codegen_object_new (Action_2_t604_il2cpp_TypeInfo_var);
		Action_2__ctor_m3842(L_5, NULL, L_4, /*hidden argument*/Action_2__ctor_m3842_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_10 = L_5;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		Action_2_t604 * L_6 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_10;
		NullCheck(G_B2_2);
		GestureManagerInstance_update_m3261(G_B2_2, G_B2_1, G_B2_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::updateCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* Action_1_t677_il2cpp_TypeInfo_var;
extern TypeInfo* GestureManagerInstance_t600_il2cpp_TypeInfo_var;
extern TypeInfo* Action_2_t604_il2cpp_TypeInfo_var;
extern const MethodInfo* GestureManagerInstance_processTarget_m3262_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3841_MethodInfo_var;
extern const MethodInfo* GestureManagerInstance_U3CupdateCancelledU3Em__3_m3282_MethodInfo_var;
extern const MethodInfo* Action_2__ctor_m3842_MethodInfo_var;
extern "C" void GestureManagerInstance_updateCancelled_m3260 (GestureManagerInstance_t600 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		GestureManagerInstance_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		Action_2_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		GestureManagerInstance_processTarget_m3262_MethodInfo_var = il2cpp_codegen_method_info_from_index(402);
		Action_1__ctor_m3841_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484047);
		GestureManagerInstance_U3CupdateCancelledU3Em__3_m3282_MethodInfo_var = il2cpp_codegen_method_info_from_index(405);
		Action_2__ctor_m3842_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484049);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t677 * G_B2_0 = {0};
	Object_t* G_B2_1 = {0};
	GestureManagerInstance_t600 * G_B2_2 = {0};
	Action_1_t677 * G_B1_0 = {0};
	Object_t* G_B1_1 = {0};
	GestureManagerInstance_t600 * G_B1_2 = {0};
	{
		Object_t* L_0 = ___touches;
		IntPtr_t L_1 = { (void*)GestureManagerInstance_processTarget_m3262_MethodInfo_var };
		Action_1_t677 * L_2 = (Action_1_t677 *)il2cpp_codegen_object_new (Action_1_t677_il2cpp_TypeInfo_var);
		Action_1__ctor_m3841(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m3841_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		Action_2_t604 * L_3 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		IntPtr_t L_4 = { (void*)GestureManagerInstance_U3CupdateCancelledU3Em__3_m3282_MethodInfo_var };
		Action_2_t604 * L_5 = (Action_2_t604 *)il2cpp_codegen_object_new (Action_2_t604_il2cpp_TypeInfo_var);
		Action_2__ctor_m3842(L_5, NULL, L_4, /*hidden argument*/Action_2__ctor_m3842_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11 = L_5;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GestureManagerInstance_t600_il2cpp_TypeInfo_var);
		Action_2_t604 * L_6 = ((GestureManagerInstance_t600_StaticFields*)GestureManagerInstance_t600_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11;
		NullCheck(G_B2_2);
		GestureManagerInstance_update_m3261(G_B2_2, G_B2_1, G_B2_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::update(System.Collections.Generic.IList`1<TouchScript.ITouch>,System.Action`1<UnityEngine.Transform>,System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>>)
// System.Action`1<UnityEngine.Transform>
#include "mscorlib_System_Action_1_gen_0.h"
// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>>
#include "System_Core_System_Action_2_gen.h"
// System.Collections.Generic.List`1<TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollectiMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<TouchScript.Gestures.Gesture>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
extern TypeInfo* IEnumerable_1_t255_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t256_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t592_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3815_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m3843_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m3844_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3845_MethodInfo_var;
extern const MethodInfo* Action_1_Invoke_m3846_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3847_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3848_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3849_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3850_MethodInfo_var;
extern const MethodInfo* Action_2_Invoke_m3851_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3852_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3853_MethodInfo_var;
extern "C" void GestureManagerInstance_update_m3261 (GestureManagerInstance_t600 * __this, Object_t* ___touches, Action_1_t677 * ___process, Action_2_t604 * ___dispatch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		IEnumerator_1_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		List_1_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		List_1__ctor_m3815_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484020);
		Dictionary_2_get_Keys_m3843_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484054);
		KeyCollection_GetEnumerator_m3844_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484055);
		Enumerator_get_Current_m3845_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484056);
		Action_1_Invoke_m3846_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484057);
		Enumerator_MoveNext_m3847_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484058);
		Enumerator_Dispose_m3848_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484059);
		List_1_GetEnumerator_m3849_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484060);
		Enumerator_get_Current_m3850_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		Action_2_Invoke_m3851_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		Enumerator_MoveNext_m3852_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		Enumerator_Dispose_m3853_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Object_t * V_1 = {0};
	List_1_t592 * V_2 = {0};
	Enumerator_t691  V_3 = {0};
	Transform_t48 * V_4 = {0};
	Enumerator_t692  V_5 = {0};
	Gesture_t270 * V_6 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t602 * L_0 = (__this->___targetTouches_5);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>::Clear() */, L_0);
		Dictionary_2_t603 * L_1 = (__this->___gestureTouches_6);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::Clear() */, L_1);
		List_1_t601 * L_2 = (__this->___activeGestures_7);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Clear() */, L_2);
		Object_t* L_3 = ___touches;
		NullCheck(L_3);
		Object_t* L_4 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TouchScript.ITouch>::GetEnumerator() */, IEnumerable_1_t255_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_002d:
		{
			Object_t* L_5 = V_0;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TouchScript.ITouch>::get_Current() */, IEnumerator_1_t256_il2cpp_TypeInfo_var, L_5);
			V_1 = L_6;
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			Transform_t48 * L_8 = (Transform_t48 *)InterfaceFuncInvoker0< Transform_t48 * >::Invoke(1 /* UnityEngine.Transform TouchScript.ITouch::get_Target() */, ITouch_t257_il2cpp_TypeInfo_var, L_7);
			bool L_9 = Object_op_Inequality_m268(NULL /*static, unused*/, L_8, (Object_t99 *)NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_007c;
			}
		}

IL_0045:
		{
			Dictionary_2_t602 * L_10 = (__this->___targetTouches_5);
			Object_t * L_11 = V_1;
			NullCheck(L_11);
			Transform_t48 * L_12 = (Transform_t48 *)InterfaceFuncInvoker0< Transform_t48 * >::Invoke(1 /* UnityEngine.Transform TouchScript.ITouch::get_Target() */, ITouch_t257_il2cpp_TypeInfo_var, L_11);
			NullCheck(L_10);
			bool L_13 = (bool)VirtFuncInvoker2< bool, Transform_t48 *, List_1_t592 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>::TryGetValue(!0,!1&) */, L_10, L_12, (&V_2));
			if (L_13)
			{
				goto IL_0075;
			}
		}

IL_005d:
		{
			List_1_t592 * L_14 = (List_1_t592 *)il2cpp_codegen_object_new (List_1_t592_il2cpp_TypeInfo_var);
			List_1__ctor_m3815(L_14, /*hidden argument*/List_1__ctor_m3815_MethodInfo_var);
			V_2 = L_14;
			Dictionary_2_t602 * L_15 = (__this->___targetTouches_5);
			Object_t * L_16 = V_1;
			NullCheck(L_16);
			Transform_t48 * L_17 = (Transform_t48 *)InterfaceFuncInvoker0< Transform_t48 * >::Invoke(1 /* UnityEngine.Transform TouchScript.ITouch::get_Target() */, ITouch_t257_il2cpp_TypeInfo_var, L_16);
			List_1_t592 * L_18 = V_2;
			NullCheck(L_15);
			VirtActionInvoker2< Transform_t48 *, List_1_t592 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>::Add(!0,!1) */, L_15, L_17, L_18);
		}

IL_0075:
		{
			List_1_t592 * L_19 = V_2;
			Object_t * L_20 = V_1;
			NullCheck(L_19);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Add(!0) */, L_19, L_20);
		}

IL_007c:
		{
			Object_t* L_21 = V_0;
			NullCheck(L_21);
			bool L_22 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_002d;
			}
		}

IL_0087:
		{
			IL2CPP_LEAVE(0x99, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		{
			Object_t* L_23 = V_0;
			if (!L_23)
			{
				goto IL_0098;
			}
		}

IL_0092:
		{
			Object_t* L_24 = V_0;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_24);
		}

IL_0098:
		{
			IL2CPP_END_FINALLY(140)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x99, IL_0099)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0099:
	{
		Dictionary_2_t602 * L_25 = (__this->___targetTouches_5);
		NullCheck(L_25);
		KeyCollection_t693 * L_26 = Dictionary_2_get_Keys_m3843(L_25, /*hidden argument*/Dictionary_2_get_Keys_m3843_MethodInfo_var);
		NullCheck(L_26);
		Enumerator_t691  L_27 = KeyCollection_GetEnumerator_m3844(L_26, /*hidden argument*/KeyCollection_GetEnumerator_m3844_MethodInfo_var);
		V_3 = L_27;
	}

IL_00aa:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c0;
		}

IL_00af:
		{
			Transform_t48 * L_28 = Enumerator_get_Current_m3845((&V_3), /*hidden argument*/Enumerator_get_Current_m3845_MethodInfo_var);
			V_4 = L_28;
			Action_1_t677 * L_29 = ___process;
			Transform_t48 * L_30 = V_4;
			NullCheck(L_29);
			Action_1_Invoke_m3846(L_29, L_30, /*hidden argument*/Action_1_Invoke_m3846_MethodInfo_var);
		}

IL_00c0:
		{
			bool L_31 = Enumerator_MoveNext_m3847((&V_3), /*hidden argument*/Enumerator_MoveNext_m3847_MethodInfo_var);
			if (L_31)
			{
				goto IL_00af;
			}
		}

IL_00cc:
		{
			IL2CPP_LEAVE(0xDF, FINALLY_00d1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_00d1;
	}

FINALLY_00d1:
	{ // begin finally (depth: 1)
		NullCheck((&V_3));
		Enumerator_Dispose_m3848((&V_3), Enumerator_Dispose_m3848_MethodInfo_var);
		IL2CPP_END_FINALLY(209)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(209)
	{
		IL2CPP_JUMP_TBL(0xDF, IL_00df)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_00df:
	{
		List_1_t601 * L_32 = (__this->___activeGestures_7);
		NullCheck(L_32);
		Enumerator_t692  L_33 = List_1_GetEnumerator_m3849(L_32, /*hidden argument*/List_1_GetEnumerator_m3849_MethodInfo_var);
		V_5 = L_33;
	}

IL_00ec:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011c;
		}

IL_00f1:
		{
			Gesture_t270 * L_34 = Enumerator_get_Current_m3850((&V_5), /*hidden argument*/Enumerator_get_Current_m3850_MethodInfo_var);
			V_6 = L_34;
			Gesture_t270 * L_35 = V_6;
			bool L_36 = GestureManagerInstance_gestureIsActive_m3270(__this, L_35, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_011c;
			}
		}

IL_0107:
		{
			Action_2_t604 * L_37 = ___dispatch;
			Gesture_t270 * L_38 = V_6;
			Dictionary_2_t603 * L_39 = (__this->___gestureTouches_6);
			Gesture_t270 * L_40 = V_6;
			NullCheck(L_39);
			List_1_t592 * L_41 = (List_1_t592 *)VirtFuncInvoker1< List_1_t592 *, Gesture_t270 * >::Invoke(25 /* !1 System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::get_Item(!0) */, L_39, L_40);
			NullCheck(L_37);
			Action_2_Invoke_m3851(L_37, L_38, L_41, /*hidden argument*/Action_2_Invoke_m3851_MethodInfo_var);
		}

IL_011c:
		{
			bool L_42 = Enumerator_MoveNext_m3852((&V_5), /*hidden argument*/Enumerator_MoveNext_m3852_MethodInfo_var);
			if (L_42)
			{
				goto IL_00f1;
			}
		}

IL_0128:
		{
			IL2CPP_LEAVE(0x13B, FINALLY_012d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_012d;
	}

FINALLY_012d:
	{ // begin finally (depth: 1)
		NullCheck((&V_5));
		Enumerator_Dispose_m3853((&V_5), Enumerator_Dispose_m3853_MethodInfo_var);
		IL2CPP_END_FINALLY(301)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(301)
	{
		IL2CPP_JUMP_TBL(0x13B, IL_013b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_013b:
	{
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::processTarget(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Predicate`1<TouchScript.ITouch>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
extern TypeInfo* Predicate_1_t678_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3849_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3850_MethodInfo_var;
extern const MethodInfo* Gesture_HasTouch_m3336_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m3854_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3852_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3853_MethodInfo_var;
extern "C" void GestureManagerInstance_processTarget_m3262 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Predicate_1_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		List_1_GetEnumerator_m3849_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484060);
		Enumerator_get_Current_m3850_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		Gesture_HasTouch_m3336_MethodInfo_var = il2cpp_codegen_method_info_from_index(417);
		Predicate_1__ctor_m3854_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484066);
		Enumerator_MoveNext_m3852_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		Enumerator_Dispose_m3853_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t601 * V_0 = {0};
	Enumerator_t692  V_1 = {0};
	Gesture_t270 * V_2 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t48 * L_0 = ___target;
		List_1_t601 * L_1 = GestureManagerInstance_getHierarchyEndingWith_m3266(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t601 * L_2 = V_0;
		NullCheck(L_2);
		Enumerator_t692  L_3 = List_1_GetEnumerator_m3849(L_2, /*hidden argument*/List_1_GetEnumerator_m3849_MethodInfo_var);
		V_1 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0014:
		{
			Gesture_t270 * L_4 = Enumerator_get_Current_m3850((&V_1), /*hidden argument*/Enumerator_get_Current_m3850_MethodInfo_var);
			V_2 = L_4;
			Gesture_t270 * L_5 = V_2;
			bool L_6 = GestureManagerInstance_gestureIsActive_m3270(__this, L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0028:
		{
			goto IL_0041;
		}

IL_002d:
		{
			Transform_t48 * L_7 = ___target;
			Gesture_t270 * L_8 = V_2;
			Gesture_t270 * L_9 = V_2;
			IntPtr_t L_10 = { (void*)Gesture_HasTouch_m3336_MethodInfo_var };
			Predicate_1_t678 * L_11 = (Predicate_1_t678 *)il2cpp_codegen_object_new (Predicate_1_t678_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m3854(L_11, L_9, L_10, /*hidden argument*/Predicate_1__ctor_m3854_MethodInfo_var);
			GestureManagerInstance_distributePointsByGestures_m3264(__this, L_7, L_8, L_11, /*hidden argument*/NULL);
		}

IL_0041:
		{
			bool L_12 = Enumerator_MoveNext_m3852((&V_1), /*hidden argument*/Enumerator_MoveNext_m3852_MethodInfo_var);
			if (L_12)
			{
				goto IL_0014;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		NullCheck((&V_1));
		Enumerator_Dispose_m3853((&V_1), Enumerator_Dispose_m3853_MethodInfo_var);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0060:
	{
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::processTargetBegan(UnityEngine.Transform)
extern TypeInfo* Predicate_1_t678_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3849_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3850_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3852_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3853_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m3854_MethodInfo_var;
extern "C" void GestureManagerInstance_processTargetBegan_m3263 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Predicate_1_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		List_1_GetEnumerator_m3849_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484060);
		Enumerator_get_Current_m3850_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		Enumerator_MoveNext_m3852_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		Enumerator_Dispose_m3853_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		Predicate_1__ctor_m3854_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484066);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t601 * V_0 = {0};
	List_1_t601 * V_1 = {0};
	Enumerator_t692  V_2 = {0};
	Gesture_t270 * V_3 = {0};
	bool V_4 = false;
	Enumerator_t692  V_5 = {0};
	Gesture_t270 * V_6 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t48 * L_0 = ___target;
		List_1_t601 * L_1 = GestureManagerInstance_getHierarchyContaining_m3268(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_t48 * L_2 = ___target;
		List_1_t601 * L_3 = GestureManagerInstance_getHierarchyEndingWith_m3266(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		List_1_t601 * L_4 = V_1;
		NullCheck(L_4);
		Enumerator_t692  L_5 = List_1_GetEnumerator_m3849(L_4, /*hidden argument*/List_1_GetEnumerator_m3849_MethodInfo_var);
		V_2 = L_5;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ca;
		}

IL_001c:
		{
			Gesture_t270 * L_6 = Enumerator_get_Current_m3850((&V_2), /*hidden argument*/Enumerator_get_Current_m3850_MethodInfo_var);
			V_3 = L_6;
			Gesture_t270 * L_7 = V_3;
			bool L_8 = GestureManagerInstance_gestureIsActive_m3270(__this, L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_00ca;
		}

IL_0035:
		{
			V_4 = 1;
			List_1_t601 * L_9 = V_0;
			NullCheck(L_9);
			Enumerator_t692  L_10 = List_1_GetEnumerator_m3849(L_9, /*hidden argument*/List_1_GetEnumerator_m3849_MethodInfo_var);
			V_5 = L_10;
		}

IL_0040:
		try
		{ // begin try (depth: 2)
			{
				goto IL_008f;
			}

IL_0045:
			{
				Gesture_t270 * L_11 = Enumerator_get_Current_m3850((&V_5), /*hidden argument*/Enumerator_get_Current_m3850_MethodInfo_var);
				V_6 = L_11;
				Gesture_t270 * L_12 = V_3;
				Gesture_t270 * L_13 = V_6;
				bool L_14 = Object_op_Equality_m295(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
				if (!L_14)
				{
					goto IL_0060;
				}
			}

IL_005b:
			{
				goto IL_008f;
			}

IL_0060:
			{
				Gesture_t270 * L_15 = V_6;
				NullCheck(L_15);
				int32_t L_16 = Gesture_get_State_m3316(L_15, /*hidden argument*/NULL);
				if ((((int32_t)L_16) == ((int32_t)1)))
				{
					goto IL_007a;
				}
			}

IL_006d:
			{
				Gesture_t270 * L_17 = V_6;
				NullCheck(L_17);
				int32_t L_18 = Gesture_get_State_m3316(L_17, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_18) == ((uint32_t)2))))
				{
					goto IL_008f;
				}
			}

IL_007a:
			{
				Gesture_t270 * L_19 = V_6;
				Gesture_t270 * L_20 = V_3;
				NullCheck(L_19);
				bool L_21 = (bool)VirtFuncInvoker1< bool, Gesture_t270 * >::Invoke(11 /* System.Boolean TouchScript.Gestures.Gesture::CanPreventGesture(TouchScript.Gestures.Gesture) */, L_19, L_20);
				if (!L_21)
				{
					goto IL_008f;
				}
			}

IL_0087:
			{
				V_4 = 0;
				goto IL_009b;
			}

IL_008f:
			{
				bool L_22 = Enumerator_MoveNext_m3852((&V_5), /*hidden argument*/Enumerator_MoveNext_m3852_MethodInfo_var);
				if (L_22)
				{
					goto IL_0045;
				}
			}

IL_009b:
			{
				IL2CPP_LEAVE(0xAE, FINALLY_00a0);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t236 *)e.ex;
			goto FINALLY_00a0;
		}

FINALLY_00a0:
		{ // begin finally (depth: 2)
			NullCheck((&V_5));
			Enumerator_Dispose_m3853((&V_5), Enumerator_Dispose_m3853_MethodInfo_var);
			IL2CPP_END_FINALLY(160)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(160)
		{
			IL2CPP_JUMP_TBL(0xAE, IL_00ae)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
		}

IL_00ae:
		{
			bool L_23 = V_4;
			if (!L_23)
			{
				goto IL_00ca;
			}
		}

IL_00b5:
		{
			Transform_t48 * L_24 = ___target;
			Gesture_t270 * L_25 = V_3;
			Gesture_t270 * L_26 = V_3;
			Gesture_t270 * L_27 = L_26;
			IntPtr_t L_28 = { (void*)GetVirtualMethodInfo(L_27, 13) };
			Predicate_1_t678 * L_29 = (Predicate_1_t678 *)il2cpp_codegen_object_new (Predicate_1_t678_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m3854(L_29, L_27, L_28, /*hidden argument*/Predicate_1__ctor_m3854_MethodInfo_var);
			GestureManagerInstance_distributePointsByGestures_m3264(__this, L_24, L_25, L_29, /*hidden argument*/NULL);
		}

IL_00ca:
		{
			bool L_30 = Enumerator_MoveNext_m3852((&V_2), /*hidden argument*/Enumerator_MoveNext_m3852_MethodInfo_var);
			if (L_30)
			{
				goto IL_001c;
			}
		}

IL_00d6:
		{
			IL2CPP_LEAVE(0xE9, FINALLY_00db);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_00db;
	}

FINALLY_00db:
	{ // begin finally (depth: 1)
		NullCheck((&V_2));
		Enumerator_Dispose_m3853((&V_2), Enumerator_Dispose_m3853_MethodInfo_var);
		IL2CPP_END_FINALLY(219)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(219)
	{
		IL2CPP_JUMP_TBL(0xE9, IL_00e9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_00e9:
	{
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::distributePointsByGestures(UnityEngine.Transform,TouchScript.Gestures.Gesture,System.Predicate`1<TouchScript.ITouch>)
// System.Predicate`1<TouchScript.ITouch>
#include "mscorlib_System_Predicate_1_gen_2.h"
extern const MethodInfo* List_1_FindAll_m3855_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m3856_MethodInfo_var;
extern "C" void GestureManagerInstance_distributePointsByGestures_m3264 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, Gesture_t270 * ___gesture, Predicate_1_t678 * ___condition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_FindAll_m3855_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484067);
		List_1_AddRange_m3856_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484068);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t592 * V_0 = {0};
	{
		Dictionary_2_t602 * L_0 = (__this->___targetTouches_5);
		Transform_t48 * L_1 = ___target;
		NullCheck(L_0);
		List_1_t592 * L_2 = (List_1_t592 *)VirtFuncInvoker1< List_1_t592 *, Transform_t48 * >::Invoke(25 /* !1 System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.ITouch>>::get_Item(!0) */, L_0, L_1);
		Predicate_1_t678 * L_3 = ___condition;
		NullCheck(L_2);
		List_1_t592 * L_4 = List_1_FindAll_m3855(L_2, L_3, /*hidden argument*/List_1_FindAll_m3855_MethodInfo_var);
		V_0 = L_4;
		List_1_t592 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_5);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		Dictionary_2_t603 * L_7 = (__this->___gestureTouches_6);
		Gesture_t270 * L_8 = ___gesture;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Gesture_t270 * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::ContainsKey(!0) */, L_7, L_8);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		Dictionary_2_t603 * L_10 = (__this->___gestureTouches_6);
		Gesture_t270 * L_11 = ___gesture;
		NullCheck(L_10);
		List_1_t592 * L_12 = (List_1_t592 *)VirtFuncInvoker1< List_1_t592 *, Gesture_t270 * >::Invoke(25 /* !1 System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::get_Item(!0) */, L_10, L_11);
		List_1_t592 * L_13 = V_0;
		NullCheck(L_12);
		List_1_AddRange_m3856(L_12, L_13, /*hidden argument*/List_1_AddRange_m3856_MethodInfo_var);
		goto IL_0060;
	}

IL_0047:
	{
		List_1_t601 * L_14 = (__this->___activeGestures_7);
		Gesture_t270 * L_15 = ___gesture;
		NullCheck(L_14);
		VirtActionInvoker1< Gesture_t270 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Add(!0) */, L_14, L_15);
		Dictionary_2_t603 * L_16 = (__this->___gestureTouches_6);
		Gesture_t270 * L_17 = ___gesture;
		List_1_t592 * L_18 = V_0;
		NullCheck(L_16);
		VirtActionInvoker2< Gesture_t270 *, List_1_t592 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.ITouch>>::Add(!0,!1) */, L_16, L_17, L_18);
	}

IL_0060:
	{
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::resetGestures()
extern const MethodInfo* List_1_GetEnumerator_m3849_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3850_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3852_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3853_MethodInfo_var;
extern "C" void GestureManagerInstance_resetGestures_m3265 (GestureManagerInstance_t600 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_GetEnumerator_m3849_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484060);
		Enumerator_get_Current_m3850_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		Enumerator_MoveNext_m3852_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		Enumerator_Dispose_m3853_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		s_Il2CppMethodIntialized = true;
	}
	Enumerator_t692  V_0 = {0};
	Gesture_t270 * V_1 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t601 * L_0 = (__this->___gesturesToReset_4);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		List_1_t601 * L_2 = (__this->___gesturesToReset_4);
		NullCheck(L_2);
		Enumerator_t692  L_3 = List_1_GetEnumerator_m3849(L_2, /*hidden argument*/List_1_GetEnumerator_m3849_MethodInfo_var);
		V_0 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0022:
		{
			Gesture_t270 * L_4 = Enumerator_get_Current_m3850((&V_0), /*hidden argument*/Enumerator_get_Current_m3850_MethodInfo_var);
			V_1 = L_4;
			Gesture_t270 * L_5 = V_1;
			bool L_6 = Object_op_Equality_m295(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_003b;
			}
		}

IL_0036:
		{
			goto IL_0048;
		}

IL_003b:
		{
			Gesture_t270 * L_7 = V_1;
			NullCheck(L_7);
			Gesture_Reset_m3346(L_7, /*hidden argument*/NULL);
			Gesture_t270 * L_8 = V_1;
			NullCheck(L_8);
			Gesture_SetState_m3345(L_8, 0, /*hidden argument*/NULL);
		}

IL_0048:
		{
			bool L_9 = Enumerator_MoveNext_m3852((&V_0), /*hidden argument*/Enumerator_MoveNext_m3852_MethodInfo_var);
			if (L_9)
			{
				goto IL_0022;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		NullCheck((&V_0));
		Enumerator_Dispose_m3853((&V_0), Enumerator_Dispose_m3853_MethodInfo_var);
		IL2CPP_END_FINALLY(89)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0067:
	{
		List_1_t601 * L_10 = (__this->___gesturesToReset_4);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Clear() */, L_10);
		return;
	}
}
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::getHierarchyEndingWith(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern TypeInfo* List_1_t601_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3836_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m3857_MethodInfo_var;
extern "C" List_1_t601 * GestureManagerInstance_getHierarchyEndingWith_m3266 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		List_1__ctor_m3836_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484035);
		List_1_AddRange_m3857_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484069);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t601 * V_0 = {0};
	{
		List_1_t601 * L_0 = (List_1_t601 *)il2cpp_codegen_object_new (List_1_t601_il2cpp_TypeInfo_var);
		List_1__ctor_m3836(L_0, ((int32_t)10), /*hidden argument*/List_1__ctor_m3836_MethodInfo_var);
		V_0 = L_0;
		goto IL_0022;
	}

IL_000d:
	{
		List_1_t601 * L_1 = V_0;
		Transform_t48 * L_2 = ___target;
		List_1_t601 * L_3 = GestureManagerInstance_getEnabledGesturesOnTarget_m3269(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_AddRange_m3857(L_1, L_3, /*hidden argument*/List_1_AddRange_m3857_MethodInfo_var);
		Transform_t48 * L_4 = ___target;
		NullCheck(L_4);
		Transform_t48 * L_5 = Transform_get_parent_m1205(L_4, /*hidden argument*/NULL);
		___target = L_5;
	}

IL_0022:
	{
		Transform_t48 * L_6 = ___target;
		bool L_7 = Object_op_Inequality_m268(NULL /*static, unused*/, L_6, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_000d;
		}
	}
	{
		List_1_t601 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::getHierarchyBeginningWith(UnityEngine.Transform,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* List_1_t601_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3836_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m3857_MethodInfo_var;
extern "C" List_1_t601 * GestureManagerInstance_getHierarchyBeginningWith_m3267 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, bool ___includeSelf, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		Transform_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		List_1__ctor_m3836_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484035);
		List_1_AddRange_m3857_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484069);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t601 * V_0 = {0};
	Object_t * V_1 = {0};
	Transform_t48 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t601 * L_0 = (List_1_t601 *)il2cpp_codegen_object_new (List_1_t601_il2cpp_TypeInfo_var);
		List_1__ctor_m3836(L_0, ((int32_t)10), /*hidden argument*/List_1__ctor_m3836_MethodInfo_var);
		V_0 = L_0;
		bool L_1 = ___includeSelf;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t601 * L_2 = V_0;
		Transform_t48 * L_3 = ___target;
		List_1_t601 * L_4 = GestureManagerInstance_getEnabledGesturesOnTarget_m3269(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_AddRange_m3857(L_2, L_4, /*hidden argument*/List_1_AddRange_m3857_MethodInfo_var);
	}

IL_001b:
	{
		Transform_t48 * L_5 = ___target;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_5);
		V_1 = L_6;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0027:
		{
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_7);
			V_2 = ((Transform_t48 *)CastclassClass(L_8, Transform_t48_il2cpp_TypeInfo_var));
			List_1_t601 * L_9 = V_0;
			Transform_t48 * L_10 = V_2;
			List_1_t601 * L_11 = GestureManagerInstance_getHierarchyBeginningWith_m3267(__this, L_10, 1, /*hidden argument*/NULL);
			NullCheck(L_9);
			List_1_AddRange_m3857(L_9, L_11, /*hidden argument*/List_1_AddRange_m3857_MethodInfo_var);
		}

IL_0041:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0027;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			Object_t * L_15 = ((Object_t *)IsInst(L_14, IDisposable_t237_il2cpp_TypeInfo_var));
			V_3 = L_15;
			if (!L_15)
			{
				goto IL_0064;
			}
		}

IL_005e:
		{
			Object_t * L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_16);
		}

IL_0064:
		{
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0065:
	{
		List_1_t601 * L_17 = V_0;
		return L_17;
	}
}
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::getHierarchyContaining(UnityEngine.Transform)
extern const MethodInfo* List_1_AddRange_m3857_MethodInfo_var;
extern "C" List_1_t601 * GestureManagerInstance_getHierarchyContaining_m3268 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m3857_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484069);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t601 * V_0 = {0};
	{
		Transform_t48 * L_0 = ___target;
		List_1_t601 * L_1 = GestureManagerInstance_getHierarchyEndingWith_m3266(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t601 * L_2 = V_0;
		Transform_t48 * L_3 = ___target;
		List_1_t601 * L_4 = GestureManagerInstance_getHierarchyBeginningWith_m3267(__this, L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_AddRange_m3857(L_2, L_4, /*hidden argument*/List_1_AddRange_m3857_MethodInfo_var);
		List_1_t601 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::getEnabledGesturesOnTarget(UnityEngine.Transform)
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern TypeInfo* List_1_t601_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3836_MethodInfo_var;
extern const MethodInfo* Component_GetComponents_TisGesture_t270_m3858_MethodInfo_var;
extern "C" List_1_t601 * GestureManagerInstance_getEnabledGesturesOnTarget_m3269 (GestureManagerInstance_t600 * __this, Transform_t48 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		List_1__ctor_m3836_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484035);
		Component_GetComponents_TisGesture_t270_m3858_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484070);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t601 * V_0 = {0};
	GestureU5BU5D_t694* V_1 = {0};
	GestureU5BU5D_t694* V_2 = {0};
	int32_t V_3 = 0;
	Gesture_t270 * V_4 = {0};
	{
		List_1_t601 * L_0 = (List_1_t601 *)il2cpp_codegen_object_new (List_1_t601_il2cpp_TypeInfo_var);
		List_1__ctor_m3836(L_0, ((int32_t)10), /*hidden argument*/List_1__ctor_m3836_MethodInfo_var);
		V_0 = L_0;
		Transform_t48 * L_1 = ___target;
		NullCheck(L_1);
		GameObject_t30 * L_2 = Component_get_gameObject_m317(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeInHierarchy_m318(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		Transform_t48 * L_4 = ___target;
		NullCheck(L_4);
		GestureU5BU5D_t694* L_5 = Component_GetComponents_TisGesture_t270_m3858(L_4, /*hidden argument*/Component_GetComponents_TisGesture_t270_m3858_MethodInfo_var);
		V_1 = L_5;
		GestureU5BU5D_t694* L_6 = V_1;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0052;
	}

IL_0028:
	{
		GestureU5BU5D_t694* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_4 = (*(Gesture_t270 **)(Gesture_t270 **)SZArrayLdElema(L_7, L_9, sizeof(Gesture_t270 *)));
		Gesture_t270 * L_10 = V_4;
		bool L_11 = Object_op_Inequality_m268(NULL /*static, unused*/, L_10, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		Gesture_t270 * L_12 = V_4;
		NullCheck(L_12);
		bool L_13 = Behaviour_get_enabled_m2686(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_004e;
		}
	}
	{
		List_1_t601 * L_14 = V_0;
		Gesture_t270 * L_15 = V_4;
		NullCheck(L_14);
		VirtActionInvoker1< Gesture_t270 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Add(!0) */, L_14, L_15);
	}

IL_004e:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0052:
	{
		int32_t L_17 = V_3;
		GestureU5BU5D_t694* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0028;
		}
	}

IL_005b:
	{
		List_1_t601 * L_19 = V_0;
		return L_19;
	}
}
// System.Boolean TouchScript.GestureManagerInstance::gestureIsActive(TouchScript.Gestures.Gesture)
extern "C" bool GestureManagerInstance_gestureIsActive_m3270 (GestureManagerInstance_t600 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		Gesture_t270 * L_0 = ___gesture;
		NullCheck(L_0);
		GameObject_t30 * L_1 = Component_get_gameObject_m317(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_get_activeInHierarchy_m318(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		Gesture_t270 * L_3 = ___gesture;
		NullCheck(L_3);
		bool L_4 = Behaviour_get_enabled_m2686(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		return 0;
	}

IL_001f:
	{
		Gesture_t270 * L_5 = ___gesture;
		NullCheck(L_5);
		int32_t L_6 = Gesture_get_State_m3316(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if (((int32_t)((int32_t)L_7-(int32_t)3)) == 0)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)3)) == 1)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)3)) == 2)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0041;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		return 1;
	}
}
// System.Boolean TouchScript.GestureManagerInstance::recognizeGestureIfNotPrevented(TouchScript.Gestures.Gesture)
extern TypeInfo* List_1_t601_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3836_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3849_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3850_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3852_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3853_MethodInfo_var;
extern "C" bool GestureManagerInstance_recognizeGestureIfNotPrevented_m3271 (GestureManagerInstance_t600 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		List_1__ctor_m3836_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484035);
		List_1_GetEnumerator_m3849_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484060);
		Enumerator_get_Current_m3850_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		Enumerator_MoveNext_m3852_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		Enumerator_Dispose_m3853_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	List_1_t601 * V_1 = {0};
	List_1_t601 * V_2 = {0};
	Enumerator_t692  V_3 = {0};
	Gesture_t270 * V_4 = {0};
	Enumerator_t692  V_5 = {0};
	Gesture_t270 * V_6 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Gesture_t270 * L_0 = ___gesture;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean TouchScript.Gestures.Gesture::ShouldBegin() */, L_0);
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
		V_0 = 1;
		List_1_t601 * L_2 = (List_1_t601 *)il2cpp_codegen_object_new (List_1_t601_il2cpp_TypeInfo_var);
		List_1__ctor_m3836(L_2, ((int32_t)10), /*hidden argument*/List_1__ctor_m3836_MethodInfo_var);
		V_1 = L_2;
		Gesture_t270 * L_3 = ___gesture;
		NullCheck(L_3);
		Transform_t48 * L_4 = Component_get_transform_m332(L_3, /*hidden argument*/NULL);
		List_1_t601 * L_5 = GestureManagerInstance_getHierarchyContaining_m3268(__this, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		List_1_t601 * L_6 = V_2;
		NullCheck(L_6);
		Enumerator_t692  L_7 = List_1_GetEnumerator_m3849(L_6, /*hidden argument*/List_1_GetEnumerator_m3849_MethodInfo_var);
		V_3 = L_7;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a5;
		}

IL_0030:
		{
			Gesture_t270 * L_8 = Enumerator_get_Current_m3850((&V_3), /*hidden argument*/Enumerator_get_Current_m3850_MethodInfo_var);
			V_4 = L_8;
			Gesture_t270 * L_9 = ___gesture;
			Gesture_t270 * L_10 = V_4;
			bool L_11 = Object_op_Equality_m295(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_00a5;
		}

IL_004b:
		{
			Gesture_t270 * L_12 = V_4;
			bool L_13 = GestureManagerInstance_gestureIsActive_m3270(__this, L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_005d;
			}
		}

IL_0058:
		{
			goto IL_00a5;
		}

IL_005d:
		{
			Gesture_t270 * L_14 = V_4;
			NullCheck(L_14);
			int32_t L_15 = Gesture_get_State_m3316(L_14, /*hidden argument*/NULL);
			if ((((int32_t)L_15) == ((int32_t)1)))
			{
				goto IL_0077;
			}
		}

IL_006a:
		{
			Gesture_t270 * L_16 = V_4;
			NullCheck(L_16);
			int32_t L_17 = Gesture_get_State_m3316(L_16, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_17) == ((uint32_t)2))))
			{
				goto IL_0090;
			}
		}

IL_0077:
		{
			Gesture_t270 * L_18 = V_4;
			Gesture_t270 * L_19 = ___gesture;
			NullCheck(L_18);
			bool L_20 = (bool)VirtFuncInvoker1< bool, Gesture_t270 * >::Invoke(11 /* System.Boolean TouchScript.Gestures.Gesture::CanPreventGesture(TouchScript.Gestures.Gesture) */, L_18, L_19);
			if (!L_20)
			{
				goto IL_008b;
			}
		}

IL_0084:
		{
			V_0 = 0;
			goto IL_00b1;
		}

IL_008b:
		{
			goto IL_00a5;
		}

IL_0090:
		{
			Gesture_t270 * L_21 = ___gesture;
			Gesture_t270 * L_22 = V_4;
			NullCheck(L_21);
			bool L_23 = (bool)VirtFuncInvoker1< bool, Gesture_t270 * >::Invoke(11 /* System.Boolean TouchScript.Gestures.Gesture::CanPreventGesture(TouchScript.Gestures.Gesture) */, L_21, L_22);
			if (!L_23)
			{
				goto IL_00a5;
			}
		}

IL_009d:
		{
			List_1_t601 * L_24 = V_1;
			Gesture_t270 * L_25 = V_4;
			NullCheck(L_24);
			VirtActionInvoker1< Gesture_t270 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Add(!0) */, L_24, L_25);
		}

IL_00a5:
		{
			bool L_26 = Enumerator_MoveNext_m3852((&V_3), /*hidden argument*/Enumerator_MoveNext_m3852_MethodInfo_var);
			if (L_26)
			{
				goto IL_0030;
			}
		}

IL_00b1:
		{
			IL2CPP_LEAVE(0xC4, FINALLY_00b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_00b6;
	}

FINALLY_00b6:
	{ // begin finally (depth: 1)
		NullCheck((&V_3));
		Enumerator_Dispose_m3853((&V_3), Enumerator_Dispose_m3853_MethodInfo_var);
		IL2CPP_END_FINALLY(182)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(182)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_00c4:
	{
		bool L_27 = V_0;
		if (!L_27)
		{
			goto IL_0107;
		}
	}
	{
		List_1_t601 * L_28 = V_1;
		NullCheck(L_28);
		Enumerator_t692  L_29 = List_1_GetEnumerator_m3849(L_28, /*hidden argument*/List_1_GetEnumerator_m3849_MethodInfo_var);
		V_5 = L_29;
	}

IL_00d2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00e8;
		}

IL_00d7:
		{
			Gesture_t270 * L_30 = Enumerator_get_Current_m3850((&V_5), /*hidden argument*/Enumerator_get_Current_m3850_MethodInfo_var);
			V_6 = L_30;
			Gesture_t270 * L_31 = V_6;
			GestureManagerInstance_failGesture_m3272(__this, L_31, /*hidden argument*/NULL);
		}

IL_00e8:
		{
			bool L_32 = Enumerator_MoveNext_m3852((&V_5), /*hidden argument*/Enumerator_MoveNext_m3852_MethodInfo_var);
			if (L_32)
			{
				goto IL_00d7;
			}
		}

IL_00f4:
		{
			IL2CPP_LEAVE(0x107, FINALLY_00f9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_00f9;
	}

FINALLY_00f9:
	{ // begin finally (depth: 1)
		NullCheck((&V_5));
		Enumerator_Dispose_m3853((&V_5), Enumerator_Dispose_m3853_MethodInfo_var);
		IL2CPP_END_FINALLY(249)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(249)
	{
		IL2CPP_JUMP_TBL(0x107, IL_0107)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0107:
	{
		bool L_33 = V_0;
		return L_33;
	}
}
// System.Void TouchScript.GestureManagerInstance::failGesture(TouchScript.Gestures.Gesture)
extern "C" void GestureManagerInstance_failGesture_m3272 (GestureManagerInstance_t600 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	{
		Gesture_t270 * L_0 = ___gesture;
		NullCheck(L_0);
		Gesture_SetState_m3345(L_0, 5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::frameFinishedHandler(System.Object,System.EventArgs)
// System.Object
#include "mscorlib_System_Object.h"
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
extern "C" void GestureManagerInstance_frameFinishedHandler_m3273 (GestureManagerInstance_t600 * __this, Object_t * ___sender, EventArgs_t223 * ___eventArgs, const MethodInfo* method)
{
	{
		GestureManagerInstance_resetGestures_m3265(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::frameStartedHandler(System.Object,System.EventArgs)
extern "C" void GestureManagerInstance_frameStartedHandler_m3274 (GestureManagerInstance_t600 * __this, Object_t * ___sender, EventArgs_t223 * ___eventArgs, const MethodInfo* method)
{
	{
		GestureManagerInstance_resetGestures_m3265(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::touchBeganHandler(System.Object,TouchScript.TouchEventArgs)
// TouchScript.TouchEventArgs
#include "TouchScript_TouchScript_TouchEventArgs.h"
// TouchScript.TouchEventArgs
#include "TouchScript_TouchScript_TouchEventArgsMethodDeclarations.h"
extern "C" void GestureManagerInstance_touchBeganHandler_m3275 (GestureManagerInstance_t600 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___touchEventArgs, const MethodInfo* method)
{
	{
		TouchEventArgs_t226 * L_0 = ___touchEventArgs;
		NullCheck(L_0);
		Object_t* L_1 = TouchEventArgs_get_Touches_m1220(L_0, /*hidden argument*/NULL);
		GestureManagerInstance_updateBegan_m3257(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::touchMovedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void GestureManagerInstance_touchMovedHandler_m3276 (GestureManagerInstance_t600 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___touchEventArgs, const MethodInfo* method)
{
	{
		TouchEventArgs_t226 * L_0 = ___touchEventArgs;
		NullCheck(L_0);
		Object_t* L_1 = TouchEventArgs_get_Touches_m1220(L_0, /*hidden argument*/NULL);
		GestureManagerInstance_updateMoved_m3258(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::touchEndedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void GestureManagerInstance_touchEndedHandler_m3277 (GestureManagerInstance_t600 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___touchEventArgs, const MethodInfo* method)
{
	{
		TouchEventArgs_t226 * L_0 = ___touchEventArgs;
		NullCheck(L_0);
		Object_t* L_1 = TouchEventArgs_get_Touches_m1220(L_0, /*hidden argument*/NULL);
		GestureManagerInstance_updateEnded_m3259(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::touchCancelledHandler(System.Object,TouchScript.TouchEventArgs)
extern "C" void GestureManagerInstance_touchCancelledHandler_m3278 (GestureManagerInstance_t600 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___touchEventArgs, const MethodInfo* method)
{
	{
		TouchEventArgs_t226 * L_0 = ___touchEventArgs;
		NullCheck(L_0);
		Object_t* L_1 = TouchEventArgs_get_Touches_m1220(L_0, /*hidden argument*/NULL);
		GestureManagerInstance_updateCancelled_m3260(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::<updateBegan>m__0(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_U3CupdateBeganU3Em__0_m3279 (Object_t * __this /* static, unused */, Gesture_t270 * ___gesture, Object_t* ___touchPoints, const MethodInfo* method)
{
	{
		Gesture_t270 * L_0 = ___gesture;
		Object_t* L_1 = ___touchPoints;
		NullCheck(L_0);
		Gesture_TouchesBegan_m3347(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::<updateMoved>m__1(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_U3CupdateMovedU3Em__1_m3280 (Object_t * __this /* static, unused */, Gesture_t270 * ___gesture, Object_t* ___touchPoints, const MethodInfo* method)
{
	{
		Gesture_t270 * L_0 = ___gesture;
		Object_t* L_1 = ___touchPoints;
		NullCheck(L_0);
		Gesture_TouchesMoved_m3348(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::<updateEnded>m__2(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_U3CupdateEndedU3Em__2_m3281 (Object_t * __this /* static, unused */, Gesture_t270 * ___gesture, Object_t* ___touchPoints, const MethodInfo* method)
{
	{
		Gesture_t270 * L_0 = ___gesture;
		Object_t* L_1 = ___touchPoints;
		NullCheck(L_0);
		Gesture_TouchesEnded_m3349(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.GestureManagerInstance::<updateCancelled>m__3(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void GestureManagerInstance_U3CupdateCancelledU3Em__3_m3282 (Object_t * __this /* static, unused */, Gesture_t270 * ___gesture, Object_t* ___touchPoints, const MethodInfo* method)
{
	{
		Gesture_t270 * L_0 = ___gesture;
		Object_t* L_1 = ___touchPoints;
		NullCheck(L_0);
		Gesture_TouchesCancelled_m3350(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Gestures.FlickGesture/GestureDirection
#include "TouchScript_TouchScript_Gestures_FlickGesture_GestureDirecti.h"
// TouchScript.Gestures.FlickGesture/GestureDirection
#include "TouchScript_TouchScript_Gestures_FlickGesture_GestureDirectiMethodDeclarations.h"
// TouchScript.Gestures.FlickGesture
#include "TouchScript_TouchScript_Gestures_FlickGesture.h"
// TouchScript.Gestures.FlickGesture
#include "TouchScript_TouchScript_Gestures_FlickGestureMethodDeclarations.h"
// TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>
#include "TouchScript_TouchScript_Utils_TimedSequence_1_gen.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>
#include "TouchScript_TouchScript_Utils_TimedSequence_1_genMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.EventArgs
#include "mscorlib_System_EventArgsMethodDeclarations.h"
// System.Void TouchScript.Gestures.FlickGesture::.ctor()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>
#include "TouchScript_TouchScript_Utils_TimedSequence_1_genMethodDeclarations.h"
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern TypeInfo* TimedSequence_1_t606_il2cpp_TypeInfo_var;
extern const MethodInfo* TimedSequence_1__ctor_m3859_MethodInfo_var;
extern "C" void FlickGesture__ctor_m3283 (FlickGesture_t138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimedSequence_1_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		TimedSequence_1__ctor_m3859_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484071);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___flickTime_27 = (0.1f);
		__this->___minDistance_28 = (1.0f);
		__this->___movementThreshold_29 = (0.5f);
		Vector2_t85  L_0 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___movementBuffer_32 = L_0;
		TimedSequence_1_t606 * L_1 = (TimedSequence_1_t606 *)il2cpp_codegen_object_new (TimedSequence_1_t606_il2cpp_TypeInfo_var);
		TimedSequence_1__ctor_m3859(L_1, /*hidden argument*/TimedSequence_1__ctor_m3859_MethodInfo_var);
		__this->___deltaSequence_34 = L_1;
		Gesture__ctor_m3303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::add_Flicked(System.EventHandler`1<System.EventArgs>)
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void FlickGesture_add_Flicked_m1114 (FlickGesture_t138 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___flickedInvoker_26);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___flickedInvoker_26 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::remove_Flicked(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void FlickGesture_remove_Flicked_m3284 (FlickGesture_t138 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___flickedInvoker_26);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___flickedInvoker_26 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Single TouchScript.Gestures.FlickGesture::get_FlickTime()
extern "C" float FlickGesture_get_FlickTime_m3285 (FlickGesture_t138 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___flickTime_27);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::set_FlickTime(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void FlickGesture_set_FlickTime_m3286 (FlickGesture_t138 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___flickTime_27 = L_0;
		return;
	}
}
// System.Single TouchScript.Gestures.FlickGesture::get_MinDistance()
extern "C" float FlickGesture_get_MinDistance_m3287 (FlickGesture_t138 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___minDistance_28);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::set_MinDistance(System.Single)
extern "C" void FlickGesture_set_MinDistance_m3288 (FlickGesture_t138 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___minDistance_28 = L_0;
		return;
	}
}
// System.Single TouchScript.Gestures.FlickGesture::get_MovementThreshold()
extern "C" float FlickGesture_get_MovementThreshold_m3289 (FlickGesture_t138 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___movementThreshold_29);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::set_MovementThreshold(System.Single)
extern "C" void FlickGesture_set_MovementThreshold_m3290 (FlickGesture_t138 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___movementThreshold_29 = L_0;
		return;
	}
}
// TouchScript.Gestures.FlickGesture/GestureDirection TouchScript.Gestures.FlickGesture::get_Direction()
extern "C" int32_t FlickGesture_get_Direction_m3291 (FlickGesture_t138 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___direction_30);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::set_Direction(TouchScript.Gestures.FlickGesture/GestureDirection)
// TouchScript.Gestures.FlickGesture/GestureDirection
#include "TouchScript_TouchScript_Gestures_FlickGesture_GestureDirecti.h"
extern "C" void FlickGesture_set_Direction_m3292 (FlickGesture_t138 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___direction_30 = L_0;
		return;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.FlickGesture::get_ScreenFlickVector()
extern "C" Vector2_t85  FlickGesture_get_ScreenFlickVector_m1115 (FlickGesture_t138 * __this, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = (__this->___U3CScreenFlickVectorU3Ek__BackingField_35);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::set_ScreenFlickVector(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void FlickGesture_set_ScreenFlickVector_m3293 (FlickGesture_t138 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___value;
		__this->___U3CScreenFlickVectorU3Ek__BackingField_35 = L_0;
		return;
	}
}
// System.Single TouchScript.Gestures.FlickGesture::get_ScreenFlickTime()
extern "C" float FlickGesture_get_ScreenFlickTime_m3294 (FlickGesture_t138 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CScreenFlickTimeU3Ek__BackingField_36);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::set_ScreenFlickTime(System.Single)
extern "C" void FlickGesture_set_ScreenFlickTime_m3295 (FlickGesture_t138 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CScreenFlickTimeU3Ek__BackingField_36 = L_0;
		return;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::LateUpdate()
extern const MethodInfo* TimedSequence_1_Add_m3860_MethodInfo_var;
extern "C" void FlickGesture_LateUpdate_m3296 (FlickGesture_t138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimedSequence_1_Add_m3860_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484072);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isActive_33);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		TimedSequence_1_t606 * L_1 = (__this->___deltaSequence_34);
		Vector2_t85  L_2 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(4 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition() */, __this);
		Vector2_t85  L_3 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(5 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousScreenPosition() */, __this);
		Vector2_t85  L_4 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		TimedSequence_1_Add_m3860(L_1, L_4, /*hidden argument*/TimedSequence_1_Add_m3860_MethodInfo_var);
		return;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern "C" void FlickGesture_touchesBegan_m3297 (FlickGesture_t138 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesBegan_m3354(__this, L_0, /*hidden argument*/NULL);
		List_1_t592 * L_1 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_1);
		Object_t* L_3 = ___touches;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0024;
		}
	}
	{
		__this->___isActive_33 = 1;
	}

IL_0024:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// TouchScript.Gestures.FlickGesture
#include "TouchScript_TouchScript_Gestures_FlickGestureMethodDeclarations.h"
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern "C" void FlickGesture_touchesMoved_m3298 (FlickGesture_t138 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesMoved_m3355(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = (__this->___moving_31);
		if (L_1)
		{
			goto IL_0061;
		}
	}
	{
		Vector2_t85  L_2 = (__this->___movementBuffer_32);
		Vector2_t85  L_3 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(4 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition() */, __this);
		Vector2_t85  L_4 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(5 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousScreenPosition() */, __this);
		Vector2_t85  L_5 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Vector2_t85  L_6 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		__this->___movementBuffer_32 = L_6;
		float L_7 = FlickGesture_get_MovementThreshold_m3289(__this, /*hidden argument*/NULL);
		Object_t * L_8 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9 = (float)InterfaceFuncInvoker0< float >::Invoke(16 /* System.Single TouchScript.ITouchManager::get_DotsPerCentimeter() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_8);
		V_0 = ((float)((float)L_7*(float)L_9));
		Vector2_t85 * L_10 = &(__this->___movementBuffer_32);
		float L_11 = Vector2_get_sqrMagnitude_m1156(L_10, /*hidden argument*/NULL);
		float L_12 = V_0;
		float L_13 = V_0;
		if ((!(((float)L_11) >= ((float)((float)((float)L_12*(float)L_13))))))
		{
			goto IL_0061;
		}
	}
	{
		__this->___moving_31 = 1;
	}

IL_0061:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern TypeInfo* IEnumerable_1_t696_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t697_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern const MethodInfo* TimedSequence_1_Add_m3860_MethodInfo_var;
extern const MethodInfo* TimedSequence_1_FindElementsLaterThan_m3862_MethodInfo_var;
extern "C" void FlickGesture_touchesEnded_m3299 (FlickGesture_t138 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		IEnumerator_1_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		TimedSequence_1_Add_m3860_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484072);
		TimedSequence_1_FindElementsLaterThan_m3862_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484073);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Object_t* V_1 = {0};
	Vector2_t85  V_2 = {0};
	Object_t* V_3 = {0};
	Vector2_t85  V_4 = {0};
	int32_t V_5 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesEnded_m3356(__this, L_0, /*hidden argument*/NULL);
		List_1_t592 * L_1 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_012e;
		}
	}
	{
		__this->___isActive_33 = 0;
		bool L_3 = (__this->___moving_31);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		Gesture_setState_m3353(__this, 5, /*hidden argument*/NULL);
		return;
	}

IL_0032:
	{
		TimedSequence_1_t606 * L_4 = (__this->___deltaSequence_34);
		Vector2_t85  L_5 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(4 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition() */, __this);
		Vector2_t85  L_6 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(5 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousScreenPosition() */, __this);
		Vector2_t85  L_7 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		TimedSequence_1_Add_m3860(L_4, L_7, /*hidden argument*/TimedSequence_1_Add_m3860_MethodInfo_var);
		TimedSequence_1_t606 * L_8 = (__this->___deltaSequence_34);
		float L_9 = Time_get_time_m3861(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = FlickGesture_get_FlickTime_m3285(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Object_t* L_11 = TimedSequence_1_FindElementsLaterThan_m3862(L_8, ((float)((float)L_9-(float)L_10)), (&V_0), /*hidden argument*/TimedSequence_1_FindElementsLaterThan_m3862_MethodInfo_var);
		V_1 = L_11;
		Vector2_t85  L_12 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_12;
		Object_t* L_13 = V_1;
		NullCheck(L_13);
		Object_t* L_14 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>::GetEnumerator() */, IEnumerable_1_t696_il2cpp_TypeInfo_var, L_13);
		V_3 = L_14;
	}

IL_0075:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008b;
		}

IL_007a:
		{
			Object_t* L_15 = V_3;
			NullCheck(L_15);
			Vector2_t85  L_16 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>::get_Current() */, IEnumerator_1_t697_il2cpp_TypeInfo_var, L_15);
			V_4 = L_16;
			Vector2_t85  L_17 = V_2;
			Vector2_t85  L_18 = V_4;
			Vector2_t85  L_19 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
			V_2 = L_19;
		}

IL_008b:
		{
			Object_t* L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_007a;
			}
		}

IL_0096:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_009b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		{
			Object_t* L_22 = V_3;
			if (!L_22)
			{
				goto IL_00a7;
			}
		}

IL_00a1:
		{
			Object_t* L_23 = V_3;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_23);
		}

IL_00a7:
		{
			IL2CPP_END_FINALLY(155)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_00a8:
	{
		int32_t L_24 = FlickGesture_get_Direction_m3291(__this, /*hidden argument*/NULL);
		V_5 = L_24;
		int32_t L_25 = V_5;
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_00e7;
	}

IL_00c5:
	{
		(&V_2)->___y_2 = (0.0f);
		goto IL_00e7;
	}

IL_00d6:
	{
		(&V_2)->___x_1 = (0.0f);
		goto IL_00e7;
	}

IL_00e7:
	{
		float L_27 = Vector2_get_magnitude_m3863((&V_2), /*hidden argument*/NULL);
		float L_28 = FlickGesture_get_MinDistance_m3287(__this, /*hidden argument*/NULL);
		Object_t * L_29 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		float L_30 = (float)InterfaceFuncInvoker0< float >::Invoke(16 /* System.Single TouchScript.ITouchManager::get_DotsPerCentimeter() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_29);
		if ((!(((float)L_27) < ((float)((float)((float)L_28*(float)L_30))))))
		{
			goto IL_0112;
		}
	}
	{
		Gesture_setState_m3353(__this, 5, /*hidden argument*/NULL);
		goto IL_012e;
	}

IL_0112:
	{
		Vector2_t85  L_31 = V_2;
		FlickGesture_set_ScreenFlickVector_m3293(__this, L_31, /*hidden argument*/NULL);
		float L_32 = Time_get_time_m3861(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_33 = V_0;
		FlickGesture_set_ScreenFlickTime_m3295(__this, ((float)((float)L_32-(float)L_33)), /*hidden argument*/NULL);
		Gesture_setState_m3353(__this, 3, /*hidden argument*/NULL);
	}

IL_012e:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::touchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void FlickGesture_touchesCancelled_m3300 (FlickGesture_t138 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesCancelled_m3357(__this, L_0, /*hidden argument*/NULL);
		Object_t* L_1 = ___touches;
		VirtActionInvoker1< Object_t* >::Invoke(23 /* System.Void TouchScript.Gestures.Gesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>) */, __this, L_1);
		return;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::onRecognized()
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_genMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral323;
extern "C" void FlickGesture_onRecognized_m3301 (FlickGesture_t138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral323 = il2cpp_codegen_string_literal_from_index(323);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onRecognized_m3362(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___flickedInvoker_26);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___flickedInvoker_26);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		bool L_3 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_4 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_6 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SendMessage_m3865(L_6, _stringLiteral323, __this, 1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.FlickGesture::reset()
extern "C" void FlickGesture_reset_m3302 (FlickGesture_t138 * __this, const MethodInfo* method)
{
	{
		Gesture_reset_m3358(__this, /*hidden argument*/NULL);
		__this->___isActive_33 = 0;
		__this->___moving_31 = 0;
		Vector2_t85  L_0 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___movementBuffer_32 = L_0;
		return;
	}
}
// TouchScript.Gestures.Gesture/GestureState
#include "TouchScript_TouchScript_Gestures_Gesture_GestureStateMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
// TouchScript.Utils.TimedSequence`1<TouchScript.ITouch>
#include "TouchScript_TouchScript_Utils_TimedSequence_1_gen_0.h"
// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
#include "mscorlib_System_EventHandler_1_gen_1.h"
// TouchScript.Gestures.GestureStateChangeEventArgs
#include "TouchScript_TouchScript_Gestures_GestureStateChangeEventArgs.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.ITouch>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h"
// TouchScript.Layers.TouchLayer
#include "TouchScript_TouchScript_Layers_TouchLayer.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
// TouchScript.Utils.TimedSequence`1<TouchScript.ITouch>
#include "TouchScript_TouchScript_Utils_TimedSequence_1_gen_0MethodDeclarations.h"
// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
#include "mscorlib_System_EventHandler_1_gen_1MethodDeclarations.h"
// TouchScript.Gestures.GestureStateChangeEventArgs
#include "TouchScript_TouchScript_Gestures_GestureStateChangeEventArgsMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.ITouch>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
struct Transform_t48;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
#define Component_GetComponent_TisTransform_t48_m3120(__this, method) (( Transform_t48 * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
// System.Void TouchScript.Gestures.Gesture::.ctor()
// System.Collections.Generic.List`1<TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
// TouchScript.Utils.TimedSequence`1<TouchScript.ITouch>
#include "TouchScript_TouchScript_Utils_TimedSequence_1_gen_0MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* List_1_t592_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t601_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t478_il2cpp_TypeInfo_var;
extern TypeInfo* TimedSequence_1_t608_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3815_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3866_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3867_MethodInfo_var;
extern const MethodInfo* TimedSequence_1__ctor_m3868_MethodInfo_var;
extern "C" void Gesture__ctor_m3303 (Gesture_t270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		List_1_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		List_1_t478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		TimedSequence_1_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		List_1__ctor_m3815_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484020);
		List_1__ctor_m3866_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484075);
		List_1__ctor_m3867_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484076);
		TimedSequence_1__ctor_m3868_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484077);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t592 * L_0 = (List_1_t592 *)il2cpp_codegen_object_new (List_1_t592_il2cpp_TypeInfo_var);
		List_1__ctor_m3815(L_0, /*hidden argument*/List_1__ctor_m3815_MethodInfo_var);
		__this->___activeTouches_4 = L_0;
		__this->___combineTouchesInterval_8 = (0.3f);
		List_1_t601 * L_1 = (List_1_t601 *)il2cpp_codegen_object_new (List_1_t601_il2cpp_TypeInfo_var);
		List_1__ctor_m3866(L_1, /*hidden argument*/List_1__ctor_m3866_MethodInfo_var);
		__this->___friendlyGestures_13 = L_1;
		List_1_t478 * L_2 = (List_1_t478 *)il2cpp_codegen_object_new (List_1_t478_il2cpp_TypeInfo_var);
		List_1__ctor_m3867(L_2, /*hidden argument*/List_1__ctor_m3867_MethodInfo_var);
		__this->___friendlyGestureIds_14 = L_2;
		TimedSequence_1_t608 * L_3 = (TimedSequence_1_t608 *)il2cpp_codegen_object_new (TimedSequence_1_t608_il2cpp_TypeInfo_var);
		TimedSequence_1__ctor_m3868(L_3, /*hidden argument*/TimedSequence_1__ctor_m3868_MethodInfo_var);
		__this->___touchSequence_15 = L_3;
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::add_StateChanged(System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>)
// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
#include "mscorlib_System_EventHandler_1_gen_1.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t259_il2cpp_TypeInfo_var;
extern "C" void Gesture_add_StateChanged_m1226 (Gesture_t270 * __this, EventHandler_1_t259 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t259 * L_0 = (__this->___stateChangedInvoker_3);
		EventHandler_1_t259 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___stateChangedInvoker_3 = ((EventHandler_1_t259 *)CastclassSealed(L_2, EventHandler_1_t259_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::remove_StateChanged(System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>)
extern TypeInfo* EventHandler_1_t259_il2cpp_TypeInfo_var;
extern "C" void Gesture_remove_StateChanged_m1229 (Gesture_t270 * __this, EventHandler_1_t259 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t259 * L_0 = (__this->___stateChangedInvoker_3);
		EventHandler_1_t259 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___stateChangedInvoker_3 = ((EventHandler_1_t259 *)CastclassSealed(L_2, EventHandler_1_t259_il2cpp_TypeInfo_var));
		return;
	}
}
// TouchScript.Gestures.Gesture TouchScript.Gestures.Gesture::get_RequireGestureToFail()
extern "C" Gesture_t270 * Gesture_get_RequireGestureToFail_m3304 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		Gesture_t270 * L_0 = (__this->___requireGestureToFail_12);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Gesture::set_RequireGestureToFail(TouchScript.Gestures.Gesture)
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_Gesture.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
#include "mscorlib_System_EventHandler_1_gen_1MethodDeclarations.h"
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t259_il2cpp_TypeInfo_var;
extern const MethodInfo* Gesture_requiredToFailGestureStateChangedHandler_m3369_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m1225_MethodInfo_var;
extern "C" void Gesture_set_RequireGestureToFail_m3305 (Gesture_t270 * __this, Gesture_t270 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		Gesture_requiredToFailGestureStateChangedHandler_m3369_MethodInfo_var = il2cpp_codegen_method_info_from_index(430);
		EventHandler_1__ctor_m1225_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483727);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_t270 * L_0 = (__this->___requireGestureToFail_12);
		bool L_1 = Object_op_Inequality_m268(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Gesture_t270 * L_2 = (__this->___requireGestureToFail_12);
		IntPtr_t L_3 = { (void*)Gesture_requiredToFailGestureStateChangedHandler_m3369_MethodInfo_var };
		EventHandler_1_t259 * L_4 = (EventHandler_1_t259 *)il2cpp_codegen_object_new (EventHandler_1_t259_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1225(L_4, __this, L_3, /*hidden argument*/EventHandler_1__ctor_m1225_MethodInfo_var);
		NullCheck(L_2);
		Gesture_remove_StateChanged_m1229(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		Gesture_t270 * L_5 = ___value;
		__this->___requireGestureToFail_12 = L_5;
		Gesture_t270 * L_6 = (__this->___requireGestureToFail_12);
		bool L_7 = Object_op_Inequality_m268(NULL /*static, unused*/, L_6, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		Gesture_t270 * L_8 = (__this->___requireGestureToFail_12);
		IntPtr_t L_9 = { (void*)Gesture_requiredToFailGestureStateChangedHandler_m3369_MethodInfo_var };
		EventHandler_1_t259 * L_10 = (EventHandler_1_t259 *)il2cpp_codegen_object_new (EventHandler_1_t259_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1225(L_10, __this, L_9, /*hidden argument*/EventHandler_1__ctor_m1225_MethodInfo_var);
		NullCheck(L_8);
		Gesture_add_StateChanged_m1226(L_8, L_10, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::get_CombineTouches()
extern "C" bool Gesture_get_CombineTouches_m3306 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___combineTouches_7);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Gesture::set_CombineTouches(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Gesture_set_CombineTouches_m3307 (Gesture_t270 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___combineTouches_7 = L_0;
		return;
	}
}
// System.Single TouchScript.Gestures.Gesture::get_CombineTouchesInterval()
extern "C" float Gesture_get_CombineTouchesInterval_m3308 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___combineTouchesInterval_8);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Gesture::set_CombineTouchesInterval(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Gesture_set_CombineTouchesInterval_m3309 (Gesture_t270 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___combineTouchesInterval_8 = L_0;
		return;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::get_UseSendMessage()
extern "C" bool Gesture_get_UseSendMessage_m3310 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___useSendMessage_9);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Gesture::set_UseSendMessage(System.Boolean)
extern "C" void Gesture_set_UseSendMessage_m3311 (Gesture_t270 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___useSendMessage_9 = L_0;
		return;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::get_SendStateChangeMessages()
extern "C" bool Gesture_get_SendStateChangeMessages_m3312 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___sendStateChangeMessages_10);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Gesture::set_SendStateChangeMessages(System.Boolean)
extern "C" void Gesture_set_SendStateChangeMessages_m3313 (Gesture_t270 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___sendStateChangeMessages_10 = L_0;
		return;
	}
}
// UnityEngine.GameObject TouchScript.Gestures.Gesture::get_SendMessageTarget()
extern "C" GameObject_t30 * Gesture_get_SendMessageTarget_m3314 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		GameObject_t30 * L_0 = (__this->___sendMessageTarget_11);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Gesture::set_SendMessageTarget(UnityEngine.GameObject)
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" void Gesture_set_SendMessageTarget_m3315 (Gesture_t270 * __this, GameObject_t30 * ___value, const MethodInfo* method)
{
	{
		GameObject_t30 * L_0 = ___value;
		__this->___sendMessageTarget_11 = L_0;
		GameObject_t30 * L_1 = ___value;
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t30 * L_3 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		__this->___sendMessageTarget_11 = L_3;
	}

IL_001f:
	{
		return;
	}
}
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::get_State()
extern "C" int32_t Gesture_get_State_m3316 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_19);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Gesture::set_State(TouchScript.Gestures.Gesture/GestureState)
// TouchScript.Gestures.Gesture/GestureState
#include "TouchScript_TouchScript_Gestures_Gesture_GestureState.h"
// TouchScript.Gestures.GestureStateChangeEventArgs
#include "TouchScript_TouchScript_Gestures_GestureStateChangeEventArgsMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* GestureStateChangeEventArgs_t227_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3869_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral324;
extern "C" void Gesture_set_State_m3317 (Gesture_t270 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GestureStateChangeEventArgs_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		EventHandler_1_Invoke_m3869_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484079);
		_stringLiteral324 = il2cpp_codegen_string_literal_from_index(324);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___state_19);
		Gesture_set_PreviousState_m3319(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___value;
		__this->___state_19 = L_1;
		int32_t L_2 = ___value;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0038;
		}
		if (L_3 == 1)
		{
			goto IL_0043;
		}
		if (L_3 == 2)
		{
			goto IL_004e;
		}
		if (L_3 == 3)
		{
			goto IL_0059;
		}
		if (L_3 == 4)
		{
			goto IL_006f;
		}
		if (L_3 == 5)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_007a;
	}

IL_0038:
	{
		VirtActionInvoker0::Invoke(26 /* System.Void TouchScript.Gestures.Gesture::onPossible() */, __this);
		goto IL_007a;
	}

IL_0043:
	{
		VirtActionInvoker0::Invoke(27 /* System.Void TouchScript.Gestures.Gesture::onBegan() */, __this);
		goto IL_007a;
	}

IL_004e:
	{
		VirtActionInvoker0::Invoke(28 /* System.Void TouchScript.Gestures.Gesture::onChanged() */, __this);
		goto IL_007a;
	}

IL_0059:
	{
		VirtActionInvoker0::Invoke(29 /* System.Void TouchScript.Gestures.Gesture::onRecognized() */, __this);
		goto IL_007a;
	}

IL_0064:
	{
		VirtActionInvoker0::Invoke(30 /* System.Void TouchScript.Gestures.Gesture::onFailed() */, __this);
		goto IL_007a;
	}

IL_006f:
	{
		VirtActionInvoker0::Invoke(31 /* System.Void TouchScript.Gestures.Gesture::onCancelled() */, __this);
		goto IL_007a;
	}

IL_007a:
	{
		EventHandler_1_t259 * L_4 = (__this->___stateChangedInvoker_3);
		if (!L_4)
		{
			goto IL_00a2;
		}
	}
	{
		EventHandler_1_t259 * L_5 = (__this->___stateChangedInvoker_3);
		int32_t L_6 = (__this->___state_19);
		int32_t L_7 = Gesture_get_PreviousState_m3318(__this, /*hidden argument*/NULL);
		GestureStateChangeEventArgs_t227 * L_8 = (GestureStateChangeEventArgs_t227 *)il2cpp_codegen_object_new (GestureStateChangeEventArgs_t227_il2cpp_TypeInfo_var);
		GestureStateChangeEventArgs__ctor_m3370(L_8, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_m3869(L_5, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m3869_MethodInfo_var);
	}

IL_00a2:
	{
		bool L_9 = (__this->___useSendMessage_9);
		if (!L_9)
		{
			goto IL_00db;
		}
	}
	{
		bool L_10 = (__this->___sendStateChangeMessages_10);
		if (!L_10)
		{
			goto IL_00db;
		}
	}
	{
		GameObject_t30 * L_11 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_12 = Object_op_Inequality_m268(NULL /*static, unused*/, L_11, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00db;
		}
	}
	{
		GameObject_t30 * L_13 = (__this->___sendMessageTarget_11);
		NullCheck(L_13);
		GameObject_SendMessage_m3865(L_13, _stringLiteral324, __this, 1, /*hidden argument*/NULL);
	}

IL_00db:
	{
		return;
	}
}
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::get_PreviousState()
extern "C" int32_t Gesture_get_PreviousState_m3318 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CPreviousStateU3Ek__BackingField_22);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Gesture::set_PreviousState(TouchScript.Gestures.Gesture/GestureState)
extern "C" void Gesture_set_PreviousState_m3319 (Gesture_t270 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CPreviousStateU3Ek__BackingField_22 = L_0;
		return;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition()
// TouchScript.TouchManager
#include "TouchScript_TouchScript_TouchManagerMethodDeclarations.h"
// TouchScript.Utils.ClusterUtils
#include "TouchScript_TouchScript_Utils_ClusterUtilsMethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ClusterUtils_t667_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  Gesture_get_ScreenPosition_m3320 (Gesture_t270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ClusterUtils_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t592 * L_0 = (__this->___activeTouches_4);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		Vector2_t85  L_2 = (__this->___cachedScreenPosition_20);
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		bool L_3 = TouchManager_IsInvalidPosition_m3704(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		Vector2_t85  L_4 = (__this->___cachedScreenPosition_20);
		return L_4;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_5 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_5;
	}

IL_002d:
	{
		List_1_t592 * L_6 = (__this->___activeTouches_4);
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		Vector2_t85  L_7 = ClusterUtils_Get2DCenterPosition_m3791(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousScreenPosition()
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ClusterUtils_t667_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  Gesture_get_PreviousScreenPosition_m3321 (Gesture_t270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ClusterUtils_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t592 * L_0 = (__this->___activeTouches_4);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		Vector2_t85  L_2 = (__this->___cachedPreviousScreenPosition_21);
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		bool L_3 = TouchManager_IsInvalidPosition_m3704(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		Vector2_t85  L_4 = (__this->___cachedPreviousScreenPosition_21);
		return L_4;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_5 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_5;
	}

IL_002d:
	{
		List_1_t592 * L_6 = (__this->___activeTouches_4);
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		Vector2_t85  L_7 = ClusterUtils_GetPrevious2DCenterPosition_m3792(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_NormalizedScreenPosition()
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  Gesture_get_NormalizedScreenPosition_m3322 (Gesture_t270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	{
		Vector2_t85  L_0 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(4 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition() */, __this);
		V_0 = L_0;
		Vector2_t85  L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		bool L_2 = TouchManager_IsInvalidPosition_m3704(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_3 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_3;
	}

IL_0018:
	{
		float L_4 = ((&V_0)->___x_1);
		int32_t L_5 = Screen_get_width_m428(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = ((&V_0)->___y_2);
		int32_t L_7 = Screen_get_height_m429(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t85  L_8 = {0};
		Vector2__ctor_m305(&L_8, ((float)((float)L_4/(float)(((float)L_5)))), ((float)((float)L_6/(float)(((float)L_7)))), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousNormalizedScreenPosition()
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  Gesture_get_PreviousNormalizedScreenPosition_m3323 (Gesture_t270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	{
		Vector2_t85  L_0 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(5 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousScreenPosition() */, __this);
		V_0 = L_0;
		Vector2_t85  L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		bool L_2 = TouchManager_IsInvalidPosition_m3704(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_3 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_3;
	}

IL_0018:
	{
		float L_4 = ((&V_0)->___x_1);
		int32_t L_5 = Screen_get_width_m428(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = ((&V_0)->___y_2);
		int32_t L_7 = Screen_get_height_m429(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t85  L_8 = {0};
		Vector2__ctor_m305(&L_8, ((float)((float)L_4/(float)(((float)L_5)))), ((float)((float)L_6/(float)(((float)L_7)))), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Collections.Generic.IList`1<TouchScript.ITouch> TouchScript.Gestures.Gesture::get_ActiveTouches()
// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.ITouch>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
extern TypeInfo* ReadOnlyCollection_1_t698_il2cpp_TypeInfo_var;
extern const MethodInfo* ReadOnlyCollection_1__ctor_m3870_MethodInfo_var;
extern "C" Object_t* Gesture_get_ActiveTouches_m3324 (Gesture_t270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReadOnlyCollection_1_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		ReadOnlyCollection_1__ctor_m3870_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484080);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t592 * L_0 = (__this->___activeTouches_4);
		ReadOnlyCollection_1_t698 * L_1 = (ReadOnlyCollection_1_t698 *)il2cpp_codegen_object_new (ReadOnlyCollection_1_t698_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m3870(L_1, L_0, /*hidden argument*/ReadOnlyCollection_1__ctor_m3870_MethodInfo_var);
		return L_1;
	}
}
// TouchScript.IGestureDelegate TouchScript.Gestures.Gesture::get_Delegate()
extern "C" Object_t * Gesture_get_Delegate_m3325 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3CDelegateU3Ek__BackingField_23);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Gesture::set_Delegate(TouchScript.IGestureDelegate)
extern "C" void Gesture_set_Delegate_m3326 (Gesture_t270 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___U3CDelegateU3Ek__BackingField_23 = L_0;
		return;
	}
}
// TouchScript.IGestureManager TouchScript.Gestures.Gesture::get_gestureManager()
extern "C" Object_t * Gesture_get_gestureManager_m3327 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		GestureManagerInstance_t600 * L_0 = (__this->___gestureManagerInstance_16);
		return L_0;
	}
}
// TouchScript.ITouchManager TouchScript.Gestures.Gesture::get_touchManager()
extern "C" Object_t * Gesture_get_touchManager_m3328 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3CtouchManagerU3Ek__BackingField_24);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Gesture::set_touchManager(TouchScript.ITouchManager)
extern "C" void Gesture_set_touchManager_m3329 (Gesture_t270 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___U3CtouchManagerU3Ek__BackingField_24 = L_0;
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::AddFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C" void Gesture_AddFriendlyGesture_m3330 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	{
		Gesture_t270 * L_0 = ___gesture;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		Gesture_t270 * L_2 = ___gesture;
		bool L_3 = Object_op_Equality_m295(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		Gesture_t270 * L_4 = ___gesture;
		Gesture_registerFriendlyGesture_m3365(__this, L_4, /*hidden argument*/NULL);
		Gesture_t270 * L_5 = ___gesture;
		NullCheck(L_5);
		Gesture_registerFriendlyGesture_m3365(L_5, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::IsFriendly(TouchScript.Gestures.Gesture)
extern "C" bool Gesture_IsFriendly_m3331 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	{
		List_1_t478 * L_0 = (__this->___friendlyGestureIds_14);
		Gesture_t270 * L_1 = ___gesture;
		NullCheck(L_1);
		int32_t L_2 = Object_GetInstanceID_m3871(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0) */, L_0, L_2);
		return L_3;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult()
extern "C" bool Gesture_GetTargetHitResult_m3332 (Gesture_t270 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Vector2_t85  L_0 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(4 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition() */, __this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Vector2_t85 , Object_t ** >::Invoke(10 /* System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&) */, __this, L_0, (&V_0));
		return L_1;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(TouchScript.Hit.ITouchHit&)
extern "C" bool Gesture_GetTargetHitResult_m3333 (Gesture_t270 * __this, Object_t ** ___hit, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(4 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition() */, __this);
		Object_t ** L_1 = ___hit;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Vector2_t85 , Object_t ** >::Invoke(10 /* System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" bool Gesture_GetTargetHitResult_m3334 (Gesture_t270 * __this, Vector2_t85  ___position, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Vector2_t85  L_0 = ___position;
		bool L_1 = (bool)VirtFuncInvoker2< bool, Vector2_t85 , Object_t ** >::Invoke(10 /* System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&) */, __this, L_0, (&V_0));
		return L_1;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchHit_t666_il2cpp_TypeInfo_var;
extern "C" bool Gesture_GetTargetHitResult_m3335 (Gesture_t270 * __this, Vector2_t85  ___position, Object_t ** ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		ITouchHit_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	TouchLayer_t624 * V_0 = {0};
	{
		V_0 = (TouchLayer_t624 *)NULL;
		Object_t * L_0 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		Vector2_t85  L_1 = ___position;
		Object_t ** L_2 = ___hit;
		NullCheck(L_0);
		bool L_3 = (bool)InterfaceFuncInvoker3< bool, Vector2_t85 , Object_t **, TouchLayer_t624 ** >::Invoke(25 /* System.Boolean TouchScript.ITouchManager::GetHitTarget(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&,TouchScript.Layers.TouchLayer&) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_0, L_1, L_2, (&V_0));
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		Transform_t48 * L_4 = (__this->___cachedTransform_5);
		Object_t ** L_5 = ___hit;
		NullCheck((*((Object_t **)L_5)));
		Transform_t48 * L_6 = (Transform_t48 *)InterfaceFuncInvoker0< Transform_t48 * >::Invoke(0 /* UnityEngine.Transform TouchScript.Hit.ITouchHit::get_Transform() */, ITouchHit_t666_il2cpp_TypeInfo_var, (*((Object_t **)L_5)));
		bool L_7 = Object_op_Equality_m295(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		Object_t ** L_8 = ___hit;
		NullCheck((*((Object_t **)L_8)));
		Transform_t48 * L_9 = (Transform_t48 *)InterfaceFuncInvoker0< Transform_t48 * >::Invoke(0 /* UnityEngine.Transform TouchScript.Hit.ITouchHit::get_Transform() */, ITouchHit_t666_il2cpp_TypeInfo_var, (*((Object_t **)L_8)));
		Transform_t48 * L_10 = (__this->___cachedTransform_5);
		NullCheck(L_9);
		bool L_11 = Transform_IsChildOf_m2814(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0048;
		}
	}

IL_0046:
	{
		return 1;
	}

IL_0048:
	{
		return 0;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::HasTouch(TouchScript.ITouch)
extern "C" bool Gesture_HasTouch_m3336 (Gesture_t270 * __this, Object_t * ___touch, const MethodInfo* method)
{
	{
		List_1_t592 * L_0 = (__this->___activeTouches_4);
		Object_t * L_1 = ___touch;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<TouchScript.ITouch>::Contains(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::CanPreventGesture(TouchScript.Gestures.Gesture)
extern TypeInfo* IGestureDelegate_t609_il2cpp_TypeInfo_var;
extern "C" bool Gesture_CanPreventGesture_m3337 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGestureDelegate_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		Gesture_t270 * L_1 = ___gesture;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Gesture_t270 * >::Invoke(12 /* System.Boolean TouchScript.Gestures.Gesture::CanBePreventedByGesture(TouchScript.Gestures.Gesture) */, L_1, __this);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Gesture_t270 * L_3 = ___gesture;
		bool L_4 = Gesture_IsFriendly_m3331(__this, L_3, /*hidden argument*/NULL);
		return ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0022:
	{
		return 0;
	}

IL_0024:
	{
		Object_t * L_5 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		Gesture_t270 * L_6 = ___gesture;
		NullCheck(L_5);
		bool L_7 = (bool)InterfaceFuncInvoker2< bool, Gesture_t270 *, Gesture_t270 * >::Invoke(2 /* System.Boolean TouchScript.IGestureDelegate::ShouldRecognizeSimultaneously(TouchScript.Gestures.Gesture,TouchScript.Gestures.Gesture) */, IGestureDelegate_t609_il2cpp_TypeInfo_var, L_5, __this, L_6);
		return ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean TouchScript.Gestures.Gesture::CanBePreventedByGesture(TouchScript.Gestures.Gesture)
extern TypeInfo* IGestureDelegate_t609_il2cpp_TypeInfo_var;
extern "C" bool Gesture_CanBePreventedByGesture_m3338 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGestureDelegate_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Gesture_t270 * L_1 = ___gesture;
		bool L_2 = Gesture_IsFriendly_m3331(__this, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		Object_t * L_3 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		Gesture_t270 * L_4 = ___gesture;
		NullCheck(L_3);
		bool L_5 = (bool)InterfaceFuncInvoker2< bool, Gesture_t270 *, Gesture_t270 * >::Invoke(2 /* System.Boolean TouchScript.IGestureDelegate::ShouldRecognizeSimultaneously(TouchScript.Gestures.Gesture,TouchScript.Gestures.Gesture) */, IGestureDelegate_t609_il2cpp_TypeInfo_var, L_3, __this, L_4);
		return ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean TouchScript.Gestures.Gesture::ShouldReceiveTouch(TouchScript.ITouch)
extern TypeInfo* IGestureDelegate_t609_il2cpp_TypeInfo_var;
extern "C" bool Gesture_ShouldReceiveTouch_m3339 (Gesture_t270 * __this, Object_t * ___touch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGestureDelegate_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		Object_t * L_1 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		Object_t * L_2 = ___touch;
		NullCheck(L_1);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, Gesture_t270 *, Object_t * >::Invoke(0 /* System.Boolean TouchScript.IGestureDelegate::ShouldReceiveTouch(TouchScript.Gestures.Gesture,TouchScript.ITouch) */, IGestureDelegate_t609_il2cpp_TypeInfo_var, L_1, __this, L_2);
		return L_3;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::ShouldBegin()
extern TypeInfo* IGestureDelegate_t609_il2cpp_TypeInfo_var;
extern "C" bool Gesture_ShouldBegin_m3340 (Gesture_t270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGestureDelegate_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		Object_t * L_1 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Gesture_t270 * >::Invoke(1 /* System.Boolean TouchScript.IGestureDelegate::ShouldBegin(TouchScript.Gestures.Gesture) */, IGestureDelegate_t609_il2cpp_TypeInfo_var, L_1, __this);
		return L_2;
	}
}
// System.Void TouchScript.Gestures.Gesture::Awake()
// System.Collections.Generic.List`1/Enumerator<TouchScript.Gestures.Gesture>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisTransform_t48_m3120_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3849_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3850_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3852_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3853_MethodInfo_var;
extern "C" void Gesture_Awake_m3341 (Gesture_t270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisTransform_t48_m3120_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483961);
		List_1_GetEnumerator_m3849_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484060);
		Enumerator_get_Current_m3850_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		Enumerator_MoveNext_m3852_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		Enumerator_Dispose_m3853_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		s_Il2CppMethodIntialized = true;
	}
	Enumerator_t692  V_0 = {0};
	Gesture_t270 * V_1 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t48 * L_0 = Component_GetComponent_TisTransform_t48_m3120(__this, /*hidden argument*/Component_GetComponent_TisTransform_t48_m3120_MethodInfo_var);
		__this->___cachedTransform_5 = L_0;
		List_1_t601 * L_1 = (__this->___friendlyGestures_13);
		NullCheck(L_1);
		Enumerator_t692  L_2 = List_1_GetEnumerator_m3849(L_1, /*hidden argument*/List_1_GetEnumerator_m3849_MethodInfo_var);
		V_0 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_001d:
		{
			Gesture_t270 * L_3 = Enumerator_get_Current_m3850((&V_0), /*hidden argument*/Enumerator_get_Current_m3850_MethodInfo_var);
			V_1 = L_3;
			Gesture_t270 * L_4 = V_1;
			VirtActionInvoker1< Gesture_t270 * >::Invoke(6 /* System.Void TouchScript.Gestures.Gesture::AddFriendlyGesture(TouchScript.Gestures.Gesture) */, __this, L_4);
		}

IL_002c:
		{
			bool L_5 = Enumerator_MoveNext_m3852((&V_0), /*hidden argument*/Enumerator_MoveNext_m3852_MethodInfo_var);
			if (L_5)
			{
				goto IL_001d;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		NullCheck((&V_0));
		Enumerator_Dispose_m3853((&V_0), Enumerator_Dispose_m3853_MethodInfo_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_004b:
	{
		Gesture_t270 * L_6 = (__this->___requireGestureToFail_12);
		Gesture_set_RequireGestureToFail_m3305(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::OnEnable()
// TouchScript.GestureManager
#include "TouchScript_TouchScript_GestureManagerMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* GestureManagerInstance_t600_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral325;
extern Il2CppCodeGenString* _stringLiteral326;
extern "C" void Gesture_OnEnable_m3342 (Gesture_t270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		GestureManagerInstance_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		_stringLiteral325 = il2cpp_codegen_string_literal_from_index(325);
		_stringLiteral326 = il2cpp_codegen_string_literal_from_index(326);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_0 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gesture_set_touchManager_m3329(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = GestureManager_get_Instance_m3248(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___gestureManagerInstance_16 = ((GestureManagerInstance_t600 *)IsInstSealed(L_1, GestureManagerInstance_t600_il2cpp_TypeInfo_var));
		Object_t * L_2 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral325, /*hidden argument*/NULL);
	}

IL_0030:
	{
		GestureManagerInstance_t600 * L_3 = (__this->___gestureManagerInstance_16);
		bool L_4 = Object_op_Equality_m295(NULL /*static, unused*/, L_3, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral326, /*hidden argument*/NULL);
	}

IL_004b:
	{
		GameObject_t30 * L_5 = (__this->___sendMessageTarget_11);
		bool L_6 = Object_op_Equality_m295(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0068;
		}
	}
	{
		GameObject_t30 * L_7 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		__this->___sendMessageTarget_11 = L_7;
	}

IL_0068:
	{
		Gesture_Reset_m3346(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::OnDisable()
extern "C" void Gesture_OnDisable_m3343 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		Gesture_setState_m3353(__this, 5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::OnDestroy()
extern TypeInfo* List_1_t601_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3872_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3849_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3850_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3852_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3853_MethodInfo_var;
extern "C" void Gesture_OnDestroy_m3344 (Gesture_t270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		List_1__ctor_m3872_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484081);
		List_1_GetEnumerator_m3849_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484060);
		Enumerator_get_Current_m3850_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		Enumerator_MoveNext_m3852_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		Enumerator_Dispose_m3853_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t601 * V_0 = {0};
	Enumerator_t692  V_1 = {0};
	Gesture_t270 * V_2 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t601 * L_0 = (__this->___friendlyGestures_13);
		List_1_t601 * L_1 = (List_1_t601 *)il2cpp_codegen_object_new (List_1_t601_il2cpp_TypeInfo_var);
		List_1__ctor_m3872(L_1, L_0, /*hidden argument*/List_1__ctor_m3872_MethodInfo_var);
		V_0 = L_1;
		List_1_t601 * L_2 = V_0;
		NullCheck(L_2);
		Enumerator_t692  L_3 = List_1_GetEnumerator_m3849(L_2, /*hidden argument*/List_1_GetEnumerator_m3849_MethodInfo_var);
		V_1 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0027;
		}

IL_0018:
		{
			Gesture_t270 * L_4 = Enumerator_get_Current_m3850((&V_1), /*hidden argument*/Enumerator_get_Current_m3850_MethodInfo_var);
			V_2 = L_4;
			Gesture_t270 * L_5 = V_2;
			VirtActionInvoker1< Gesture_t270 * >::Invoke(19 /* System.Void TouchScript.Gestures.Gesture::RemoveFriendlyGesture(TouchScript.Gestures.Gesture) */, __this, L_5);
		}

IL_0027:
		{
			bool L_6 = Enumerator_MoveNext_m3852((&V_1), /*hidden argument*/Enumerator_MoveNext_m3852_MethodInfo_var);
			if (L_6)
			{
				goto IL_0018;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x46, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		NullCheck((&V_1));
		Enumerator_Dispose_m3853((&V_1), Enumerator_Dispose_m3853_MethodInfo_var);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0046:
	{
		Gesture_set_RequireGestureToFail_m3305(__this, (Gesture_t270 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::SetState(TouchScript.Gestures.Gesture/GestureState)
extern "C" void Gesture_SetState_m3345 (Gesture_t270 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		Gesture_setState_m3353(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::Reset()
extern "C" void Gesture_Reset_m3346 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		List_1_t592 * L_0 = (__this->___activeTouches_4);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Clear() */, L_0);
		__this->___delayedStateChange_17 = 0;
		__this->___requiredGestureFailed_18 = 0;
		VirtActionInvoker0::Invoke(25 /* System.Void TouchScript.Gestures.Gesture::reset() */, __this);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::TouchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern const MethodInfo* List_1_AddRange_m3856_MethodInfo_var;
extern "C" void Gesture_TouchesBegan_m3347 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m3856_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484068);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t592 * L_0 = (__this->___activeTouches_4);
		Object_t* L_1 = ___touches;
		NullCheck(L_0);
		List_1_AddRange_m3856(L_0, L_1, /*hidden argument*/List_1_AddRange_m3856_MethodInfo_var);
		Object_t* L_2 = ___touches;
		VirtActionInvoker1< Object_t* >::Invoke(21 /* System.Void TouchScript.Gestures.Gesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>) */, __this, L_2);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::TouchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_TouchesMoved_m3348 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___touches;
		VirtActionInvoker1< Object_t* >::Invoke(22 /* System.Void TouchScript.Gestures.Gesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>) */, __this, L_0);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::TouchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* IList_1_t638_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern "C" void Gesture_TouchesEnded_m3349 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_1_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		List_1_t592 * L_0 = (__this->___activeTouches_4);
		Object_t* L_1 = ___touches;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_0);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<TouchScript.ITouch>::Remove(!0) */, L_0, L_3);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		Object_t* L_6 = ___touches;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		Object_t* L_8 = ___touches;
		VirtActionInvoker1< Object_t* >::Invoke(23 /* System.Void TouchScript.Gestures.Gesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>) */, __this, L_8);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::TouchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* IList_1_t638_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern "C" void Gesture_TouchesCancelled_m3350 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_1_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		List_1_t592 * L_0 = (__this->___activeTouches_4);
		Object_t* L_1 = ___touches;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_0);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<TouchScript.ITouch>::Remove(!0) */, L_0, L_3);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		Object_t* L_6 = ___touches;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		Object_t* L_8 = ___touches;
		VirtActionInvoker1< Object_t* >::Invoke(24 /* System.Void TouchScript.Gestures.Gesture::touchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>) */, __this, L_8);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::RemoveFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C" void Gesture_RemoveFriendlyGesture_m3351 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	{
		Gesture_t270 * L_0 = ___gesture;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		Gesture_t270 * L_2 = ___gesture;
		bool L_3 = Object_op_Equality_m295(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		Gesture_t270 * L_4 = ___gesture;
		Gesture_unregisterFriendlyGesture_m3367(__this, L_4, /*hidden argument*/NULL);
		Gesture_t270 * L_5 = ___gesture;
		NullCheck(L_5);
		Gesture_unregisterFriendlyGesture_m3367(L_5, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::shouldCacheTouchPosition(TouchScript.ITouch)
extern "C" bool Gesture_shouldCacheTouchPosition_m3352 (Gesture_t270 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean TouchScript.Gestures.Gesture::setState(TouchScript.Gestures.Gesture/GestureState)
// TouchScript.GestureManagerInstance
#include "TouchScript_TouchScript_GestureManagerInstanceMethodDeclarations.h"
extern "C" bool Gesture_setState_m3353 (Gesture_t270 * __this, int32_t ___value, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		GestureManagerInstance_t600 * L_0 = (__this->___gestureManagerInstance_16);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		Gesture_t270 * L_2 = (__this->___requireGestureToFail_12);
		bool L_3 = Object_op_Inequality_m268(NULL /*static, unused*/, L_2, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_4 = ___value;
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (L_5 == 0)
		{
			goto IL_0062;
		}
		if (L_5 == 1)
		{
			goto IL_0049;
		}
		if (L_5 == 2)
		{
			goto IL_006e;
		}
		if (L_5 == 3)
		{
			goto IL_0049;
		}
		if (L_5 == 4)
		{
			goto IL_0062;
		}
		if (L_5 == 5)
		{
			goto IL_0062;
		}
	}
	{
		goto IL_006e;
	}

IL_0049:
	{
		bool L_6 = (__this->___requiredGestureFailed_18);
		if (L_6)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_7 = ___value;
		__this->___delayedStateChange_17 = L_7;
		return 0;
	}

IL_005d:
	{
		goto IL_006e;
	}

IL_0062:
	{
		__this->___delayedStateChange_17 = 0;
		goto IL_006e;
	}

IL_006e:
	{
		GestureManagerInstance_t600 * L_8 = (__this->___gestureManagerInstance_16);
		int32_t L_9 = ___value;
		NullCheck(L_8);
		int32_t L_10 = GestureManagerInstance_GestureChangeState_m3256(L_8, __this, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Gesture_set_State_m3317(__this, L_11, /*hidden argument*/NULL);
		int32_t L_12 = ___value;
		int32_t L_13 = V_1;
		return ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Void TouchScript.Gestures.Gesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_touchesBegan_m3354 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_touchesMoved_m3355 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// System.Predicate`1<TouchScript.ITouch>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
extern TypeInfo* IEnumerable_1_t255_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t256_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t678_il2cpp_TypeInfo_var;
extern TypeInfo* ClusterUtils_t667_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t638_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern const MethodInfo* TimedSequence_1_Add_m3873_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m3854_MethodInfo_var;
extern const MethodInfo* TimedSequence_1_FindElementsLaterThan_m3874_MethodInfo_var;
extern "C" void Gesture_touchesEnded_m3356 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		IEnumerator_1_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Predicate_1_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		ClusterUtils_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		IList_1_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		TimedSequence_1_Add_m3873_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484082);
		Predicate_1__ctor_m3854_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484066);
		TimedSequence_1_FindElementsLaterThan_m3874_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484083);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___combineTouches_7);
		if (!L_0)
		{
			goto IL_0099;
		}
	}
	{
		Object_t* L_1 = ___touches;
		NullCheck(L_1);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TouchScript.ITouch>::GetEnumerator() */, IEnumerable_1_t255_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_0017:
		{
			Object_t* L_3 = V_0;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TouchScript.ITouch>::get_Current() */, IEnumerator_1_t256_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			TimedSequence_1_t608 * L_5 = (__this->___touchSequence_15);
			Object_t * L_6 = V_1;
			NullCheck(L_5);
			TimedSequence_1_Add_m3873(L_5, L_6, /*hidden argument*/TimedSequence_1_Add_m3873_MethodInfo_var);
		}

IL_002a:
		{
			Object_t* L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0017;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x47, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_9 = V_0;
			if (!L_9)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			Object_t* L_10 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_10);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(58)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0047:
	{
		List_1_t592 * L_11 = (__this->___activeTouches_4);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_11);
		if (L_12)
		{
			goto IL_0094;
		}
	}
	{
		TimedSequence_1_t608 * L_13 = (__this->___touchSequence_15);
		float L_14 = Time_get_time_m3861(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = (__this->___combineTouchesInterval_8);
		IntPtr_t L_16 = { (void*)GetVirtualMethodInfo(__this, 20) };
		Predicate_1_t678 * L_17 = (Predicate_1_t678 *)il2cpp_codegen_object_new (Predicate_1_t678_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m3854(L_17, __this, L_16, /*hidden argument*/Predicate_1__ctor_m3854_MethodInfo_var);
		NullCheck(L_13);
		Object_t* L_18 = TimedSequence_1_FindElementsLaterThan_m3874(L_13, ((float)((float)L_14-(float)L_15)), L_17, /*hidden argument*/TimedSequence_1_FindElementsLaterThan_m3874_MethodInfo_var);
		V_2 = L_18;
		Object_t* L_19 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		Vector2_t85  L_20 = ClusterUtils_Get2DCenterPosition_m3791(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		__this->___cachedScreenPosition_20 = L_20;
		Object_t* L_21 = V_2;
		Vector2_t85  L_22 = ClusterUtils_GetPrevious2DCenterPosition_m3792(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		__this->___cachedPreviousScreenPosition_21 = L_22;
	}

IL_0094:
	{
		goto IL_00f7;
	}

IL_0099:
	{
		List_1_t592 * L_23 = (__this->___activeTouches_4);
		NullCheck(L_23);
		int32_t L_24 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_23);
		if (L_24)
		{
			goto IL_00f7;
		}
	}
	{
		Object_t* L_25 = ___touches;
		Object_t* L_26 = ___touches;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_25);
		Object_t * L_28 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_25, ((int32_t)((int32_t)L_27-(int32_t)1)));
		V_3 = L_28;
		Object_t * L_29 = V_3;
		bool L_30 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(20 /* System.Boolean TouchScript.Gestures.Gesture::shouldCacheTouchPosition(TouchScript.ITouch) */, __this, L_29);
		if (!L_30)
		{
			goto IL_00e1;
		}
	}
	{
		Object_t * L_31 = V_3;
		NullCheck(L_31);
		Vector2_t85  L_32 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_31);
		__this->___cachedScreenPosition_20 = L_32;
		Object_t * L_33 = V_3;
		NullCheck(L_33);
		Vector2_t85  L_34 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(3 /* UnityEngine.Vector2 TouchScript.ITouch::get_PreviousPosition() */, ITouch_t257_il2cpp_TypeInfo_var, L_33);
		__this->___cachedPreviousScreenPosition_21 = L_34;
		goto IL_00f7;
	}

IL_00e1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_35 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		__this->___cachedScreenPosition_20 = L_35;
		Vector2_t85  L_36 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		__this->___cachedPreviousScreenPosition_21 = L_36;
	}

IL_00f7:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::touchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Gesture_touchesCancelled_m3357 (Gesture_t270 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::reset()
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern "C" void Gesture_reset_m3358 (Gesture_t270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_0 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		__this->___cachedScreenPosition_20 = L_0;
		Vector2_t85  L_1 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		__this->___cachedPreviousScreenPosition_21 = L_1;
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::onPossible()
extern "C" void Gesture_onPossible_m3359 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::onBegan()
extern "C" void Gesture_onBegan_m3360 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::onChanged()
extern "C" void Gesture_onChanged_m3361 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::onRecognized()
extern "C" void Gesture_onRecognized_m3362 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::onFailed()
extern "C" void Gesture_onFailed_m3363 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::onCancelled()
extern "C" void Gesture_onCancelled_m3364 (Gesture_t270 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::registerFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C" void Gesture_registerFriendlyGesture_m3365 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	{
		Gesture_t270 * L_0 = ___gesture;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		Gesture_t270 * L_2 = ___gesture;
		bool L_3 = Object_op_Equality_m295(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		Gesture_t270 * L_4 = ___gesture;
		Gesture_addFriendlyGestureId_m3366(__this, L_4, /*hidden argument*/NULL);
		List_1_t601 * L_5 = (__this->___friendlyGestures_13);
		Gesture_t270 * L_6 = ___gesture;
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Gesture_t270 * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Contains(!0) */, L_5, L_6);
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		List_1_t601 * L_8 = (__this->___friendlyGestures_13);
		Gesture_t270 * L_9 = ___gesture;
		NullCheck(L_8);
		VirtActionInvoker1< Gesture_t270 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Add(!0) */, L_8, L_9);
	}

IL_003d:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::addFriendlyGestureId(TouchScript.Gestures.Gesture)
extern "C" void Gesture_addFriendlyGestureId_m3366 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Gesture_t270 * L_0 = ___gesture;
		NullCheck(L_0);
		int32_t L_1 = Object_GetInstanceID_m3871(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t478 * L_2 = (__this->___friendlyGestureIds_14);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0) */, L_2, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		List_1_t478 * L_5 = (__this->___friendlyGestureIds_14);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_5, L_6);
	}

IL_0024:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::unregisterFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C" void Gesture_unregisterFriendlyGesture_m3367 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	{
		Gesture_t270 * L_0 = ___gesture;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		Gesture_t270 * L_2 = ___gesture;
		bool L_3 = Object_op_Equality_m295(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		Gesture_t270 * L_4 = ___gesture;
		Gesture_removeFriendlyGestureId_m3368(__this, L_4, /*hidden argument*/NULL);
		List_1_t601 * L_5 = (__this->___friendlyGestures_13);
		Gesture_t270 * L_6 = ___gesture;
		NullCheck(L_5);
		VirtFuncInvoker1< bool, Gesture_t270 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Remove(!0) */, L_5, L_6);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::removeFriendlyGestureId(TouchScript.Gestures.Gesture)
extern "C" void Gesture_removeFriendlyGestureId_m3368 (Gesture_t270 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	{
		List_1_t478 * L_0 = (__this->___friendlyGestureIds_14);
		Gesture_t270 * L_1 = ___gesture;
		NullCheck(L_1);
		int32_t L_2 = Object_GetInstanceID_m3871(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtFuncInvoker1< bool, int32_t >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0) */, L_0, L_2);
		return;
	}
}
// System.Void TouchScript.Gestures.Gesture::requiredToFailGestureStateChangedHandler(System.Object,TouchScript.Gestures.GestureStateChangeEventArgs)
// System.Object
#include "mscorlib_System_Object.h"
// TouchScript.Gestures.GestureStateChangeEventArgs
#include "TouchScript_TouchScript_Gestures_GestureStateChangeEventArgs.h"
extern TypeInfo* Gesture_t270_il2cpp_TypeInfo_var;
extern "C" void Gesture_requiredToFailGestureStateChangedHandler_m3369 (Gesture_t270 * __this, Object_t * ___sender, GestureStateChangeEventArgs_t227 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Gesture_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Object_t * L_0 = ___sender;
		Gesture_t270 * L_1 = (__this->___requireGestureToFail_12);
		bool L_2 = Object_op_Inequality_m268(NULL /*static, unused*/, ((Gesture_t270 *)IsInstClass(L_0, Gesture_t270_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		GestureStateChangeEventArgs_t227 * L_3 = ___e;
		NullCheck(L_3);
		int32_t L_4 = GestureStateChangeEventArgs_get_State_m1233(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
		{
			goto IL_0063;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)1)) == 1)
		{
			goto IL_007c;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)1)) == 2)
		{
			goto IL_0063;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)1)) == 3)
		{
			goto IL_0063;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)1)) == 4)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_007c;
	}

IL_003f:
	{
		__this->___requiredGestureFailed_18 = 1;
		int32_t L_6 = (__this->___delayedStateChange_17);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_7 = (__this->___delayedStateChange_17);
		Gesture_setState_m3353(__this, L_7, /*hidden argument*/NULL);
	}

IL_005e:
	{
		goto IL_007c;
	}

IL_0063:
	{
		int32_t L_8 = (__this->___state_19);
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		Gesture_setState_m3353(__this, 5, /*hidden argument*/NULL);
	}

IL_0077:
	{
		goto IL_007c;
	}

IL_007c:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.GestureStateChangeEventArgs::.ctor(TouchScript.Gestures.Gesture/GestureState,TouchScript.Gestures.Gesture/GestureState)
// TouchScript.Gestures.Gesture/GestureState
#include "TouchScript_TouchScript_Gestures_Gesture_GestureState.h"
// System.EventArgs
#include "mscorlib_System_EventArgsMethodDeclarations.h"
// TouchScript.Gestures.GestureStateChangeEventArgs
#include "TouchScript_TouchScript_Gestures_GestureStateChangeEventArgsMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern "C" void GestureStateChangeEventArgs__ctor_m3370 (GestureStateChangeEventArgs_t227 * __this, int32_t ___state, int32_t ___previousState, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3875(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___state;
		GestureStateChangeEventArgs_set_State_m3373(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___previousState;
		GestureStateChangeEventArgs_set_PreviousState_m3372(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::get_PreviousState()
extern "C" int32_t GestureStateChangeEventArgs_get_PreviousState_m3371 (GestureStateChangeEventArgs_t227 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CPreviousStateU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.GestureStateChangeEventArgs::set_PreviousState(TouchScript.Gestures.Gesture/GestureState)
extern "C" void GestureStateChangeEventArgs_set_PreviousState_m3372 (GestureStateChangeEventArgs_t227 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CPreviousStateU3Ek__BackingField_1 = L_0;
		return;
	}
}
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::get_State()
extern "C" int32_t GestureStateChangeEventArgs_get_State_m1233 (GestureStateChangeEventArgs_t227 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CStateU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.GestureStateChangeEventArgs::set_State(TouchScript.Gestures.Gesture/GestureState)
extern "C" void GestureStateChangeEventArgs_set_State_m3373 (GestureStateChangeEventArgs_t227 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CStateU3Ek__BackingField_2 = L_0;
		return;
	}
}
// TouchScript.Gestures.LongPressGesture/<wait>c__Iterator0
#include "TouchScript_TouchScript_Gestures_LongPressGesture_U3CwaitU3E.h"
// TouchScript.Gestures.LongPressGesture/<wait>c__Iterator0
#include "TouchScript_TouchScript_Gestures_LongPressGesture_U3CwaitU3EMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// TouchScript.Gestures.LongPressGesture
#include "TouchScript_TouchScript_Gestures_LongPressGesture.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// TouchScript.Gestures.LongPressGesture
#include "TouchScript_TouchScript_Gestures_LongPressGestureMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Void TouchScript.Gestures.LongPressGesture/<wait>c__Iterator0::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CwaitU3Ec__Iterator0__ctor_m3374 (U3CwaitU3Ec__Iterator0_t610 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object TouchScript.Gestures.LongPressGesture/<wait>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CwaitU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3375 (U3CwaitU3Ec__Iterator0_t610 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object TouchScript.Gestures.LongPressGesture/<wait>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CwaitU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3376 (U3CwaitU3Ec__Iterator0_t610 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean TouchScript.Gestures.LongPressGesture/<wait>c__Iterator0::MoveNext()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// TouchScript.Gestures.LongPressGesture
#include "TouchScript_TouchScript_Gestures_LongPressGestureMethodDeclarations.h"
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern "C" bool U3CwaitU3Ec__Iterator0_MoveNext_m3377 (U3CwaitU3Ec__Iterator0_t610 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___U24PC_1);
		V_0 = L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0050;
		}
	}
	{
		goto IL_00a6;
	}

IL_0021:
	{
		float L_2 = Time_get_unscaledTime_m2718(NULL /*static, unused*/, /*hidden argument*/NULL);
		LongPressGesture_t258 * L_3 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_3);
		float L_4 = LongPressGesture_get_TimeToPress_m1224(L_3, /*hidden argument*/NULL);
		__this->___U3CtargetTimeU3E__0_0 = ((float)((float)L_2+(float)L_4));
		goto IL_0050;
	}

IL_003d:
	{
		__this->___U24current_2 = NULL;
		__this->___U24PC_1 = 1;
		goto IL_00a8;
	}

IL_0050:
	{
		float L_5 = (__this->___U3CtargetTimeU3E__0_0);
		float L_6 = Time_get_unscaledTime_m2718(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((float)L_5) > ((float)L_6)))
		{
			goto IL_003d;
		}
	}
	{
		LongPressGesture_t258 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		int32_t L_8 = Gesture_get_State_m3316(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_009f;
		}
	}
	{
		LongPressGesture_t258 * L_9 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_9);
		bool L_10 = LongPressGesture_U3CGetTargetHitResultU3E__BaseCallProxy0_m3395(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0092;
		}
	}
	{
		LongPressGesture_t258 * L_11 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_11);
		Gesture_setState_m3353(L_11, 3, /*hidden argument*/NULL);
		goto IL_009f;
	}

IL_0092:
	{
		LongPressGesture_t258 * L_12 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_12);
		Gesture_setState_m3353(L_12, 5, /*hidden argument*/NULL);
	}

IL_009f:
	{
		__this->___U24PC_1 = (-1);
	}

IL_00a6:
	{
		return 0;
	}

IL_00a8:
	{
		return 1;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture/<wait>c__Iterator0::Dispose()
extern "C" void U3CwaitU3Ec__Iterator0_Dispose_m3378 (U3CwaitU3Ec__Iterator0_t610 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture/<wait>c__Iterator0::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern "C" void U3CwaitU3Ec__Iterator0_Reset_m3379 (U3CwaitU3Ec__Iterator0_t610 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1075(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// System.Void TouchScript.Gestures.LongPressGesture::.ctor()
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern "C" void LongPressGesture__ctor_m3380 (LongPressGesture_t258 * __this, const MethodInfo* method)
{
	{
		__this->___maxTouches_27 = ((int32_t)2147483647);
		__this->___timeToPress_28 = (1.0f);
		__this->___distanceLimit_29 = (std::numeric_limits<float>::infinity());
		Gesture__ctor_m3303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture::add_LongPressed(System.EventHandler`1<System.EventArgs>)
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void LongPressGesture_add_LongPressed_m3381 (LongPressGesture_t258 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___longPressedInvoker_26);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___longPressedInvoker_26 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture::remove_LongPressed(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void LongPressGesture_remove_LongPressed_m3382 (LongPressGesture_t258 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___longPressedInvoker_26);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___longPressedInvoker_26 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 TouchScript.Gestures.LongPressGesture::get_MaxTouches()
extern "C" int32_t LongPressGesture_get_MaxTouches_m3383 (LongPressGesture_t258 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___maxTouches_27);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture::set_MaxTouches(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void LongPressGesture_set_MaxTouches_m3384 (LongPressGesture_t258 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___maxTouches_27 = L_0;
		return;
	}
}
// System.Single TouchScript.Gestures.LongPressGesture::get_TimeToPress()
extern "C" float LongPressGesture_get_TimeToPress_m1224 (LongPressGesture_t258 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___timeToPress_28);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture::set_TimeToPress(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void LongPressGesture_set_TimeToPress_m3385 (LongPressGesture_t258 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___timeToPress_28 = L_0;
		return;
	}
}
// System.Single TouchScript.Gestures.LongPressGesture::get_DistanceLimit()
extern "C" float LongPressGesture_get_DistanceLimit_m3386 (LongPressGesture_t258 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___distanceLimit_29);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture::set_DistanceLimit(System.Single)
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void LongPressGesture_set_DistanceLimit_m3387 (LongPressGesture_t258 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		__this->___distanceLimit_29 = L_0;
		float L_1 = (__this->___distanceLimit_29);
		Object_t * L_2 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = (float)InterfaceFuncInvoker0< float >::Invoke(16 /* System.Single TouchScript.ITouchManager::get_DotsPerCentimeter() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_4 = powf(((float)((float)L_1*(float)L_3)), (2.0f));
		__this->___distanceLimitInPixelsSquared_30 = L_4;
		return;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture::OnEnable()
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void LongPressGesture_OnEnable_m3388 (LongPressGesture_t258 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_OnEnable_m3342(__this, /*hidden argument*/NULL);
		float L_0 = (__this->___distanceLimit_29);
		Object_t * L_1 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2 = (float)InterfaceFuncInvoker0< float >::Invoke(16 /* System.Single TouchScript.ITouchManager::get_DotsPerCentimeter() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_3 = powf(((float)((float)L_0*(float)L_2)), (2.0f));
		__this->___distanceLimitInPixelsSquared_30 = L_3;
		return;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// TouchScript.Gestures.LongPressGesture
#include "TouchScript_TouchScript_Gestures_LongPressGestureMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral327;
extern "C" void LongPressGesture_touchesBegan_m3389 (LongPressGesture_t258 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		_stringLiteral327 = il2cpp_codegen_string_literal_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesBegan_m3354(__this, L_0, /*hidden argument*/NULL);
		List_1_t592 * L_1 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_1);
		int32_t L_3 = LongPressGesture_get_MaxTouches_m3383(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0026;
		}
	}
	{
		Gesture_setState_m3353(__this, 5, /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		List_1_t592 * L_4 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_4);
		Object_t* L_6 = ___touches;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0048;
		}
	}
	{
		MonoBehaviour_StartCoroutine_m1234(__this, _stringLiteral327, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" void LongPressGesture_touchesMoved_m3390 (LongPressGesture_t258 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesMoved_m3355(__this, L_0, /*hidden argument*/NULL);
		float L_1 = (__this->___distanceLimit_29);
		if ((!(((float)L_1) < ((float)(std::numeric_limits<float>::infinity())))))
		{
			goto IL_0057;
		}
	}
	{
		Vector2_t85  L_2 = (__this->___totalMovement_31);
		Vector2_t85  L_3 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(4 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition() */, __this);
		Vector2_t85  L_4 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(5 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousScreenPosition() */, __this);
		Vector2_t85  L_5 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Vector2_t85  L_6 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		__this->___totalMovement_31 = L_6;
		Vector2_t85 * L_7 = &(__this->___totalMovement_31);
		float L_8 = Vector2_get_sqrMagnitude_m1156(L_7, /*hidden argument*/NULL);
		float L_9 = (__this->___distanceLimitInPixelsSquared_30);
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_0057;
		}
	}
	{
		Gesture_setState_m3353(__this, 5, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern Il2CppCodeGenString* _stringLiteral327;
extern "C" void LongPressGesture_touchesEnded_m3391 (LongPressGesture_t258 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral327 = il2cpp_codegen_string_literal_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesEnded_m3356(__this, L_0, /*hidden argument*/NULL);
		List_1_t592 * L_1 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		MonoBehaviour_StopCoroutine_m1230(__this, _stringLiteral327, /*hidden argument*/NULL);
		Gesture_setState_m3353(__this, 5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture::onRecognized()
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_genMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral328;
extern "C" void LongPressGesture_onRecognized_m3392 (LongPressGesture_t258 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral328 = il2cpp_codegen_string_literal_from_index(328);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onRecognized_m3362(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___longPressedInvoker_26);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___longPressedInvoker_26);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		bool L_3 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_4 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_6 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SendMessage_m3865(L_6, _stringLiteral328, __this, 1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture::reset()
extern Il2CppCodeGenString* _stringLiteral327;
extern "C" void LongPressGesture_reset_m3393 (LongPressGesture_t258 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral327 = il2cpp_codegen_string_literal_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_reset_m3358(__this, /*hidden argument*/NULL);
		Vector2_t85  L_0 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___totalMovement_31 = L_0;
		MonoBehaviour_StopCoroutine_m1230(__this, _stringLiteral327, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TouchScript.Gestures.LongPressGesture::wait()
// TouchScript.Gestures.LongPressGesture/<wait>c__Iterator0
#include "TouchScript_TouchScript_Gestures_LongPressGesture_U3CwaitU3EMethodDeclarations.h"
extern TypeInfo* U3CwaitU3Ec__Iterator0_t610_il2cpp_TypeInfo_var;
extern "C" Object_t * LongPressGesture_wait_m3394 (LongPressGesture_t258 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CwaitU3Ec__Iterator0_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	U3CwaitU3Ec__Iterator0_t610 * V_0 = {0};
	{
		U3CwaitU3Ec__Iterator0_t610 * L_0 = (U3CwaitU3Ec__Iterator0_t610 *)il2cpp_codegen_object_new (U3CwaitU3Ec__Iterator0_t610_il2cpp_TypeInfo_var);
		U3CwaitU3Ec__Iterator0__ctor_m3374(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CwaitU3Ec__Iterator0_t610 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CwaitU3Ec__Iterator0_t610 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean TouchScript.Gestures.LongPressGesture::<GetTargetHitResult>__BaseCallProxy0()
extern "C" bool LongPressGesture_U3CGetTargetHitResultU3E__BaseCallProxy0_m3395 (LongPressGesture_t258 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Gesture_GetTargetHitResult_m3332(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// TouchScript.Gestures.PanGesture
#include "TouchScript_TouchScript_Gestures_PanGesture.h"
// TouchScript.Gestures.PanGesture
#include "TouchScript_TouchScript_Gestures_PanGestureMethodDeclarations.h"
// TouchScript.Gestures.Simple.Transform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBa.h"
// TouchScript.Gestures.Simple.Transform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBaMethodDeclarations.h"
// System.Void TouchScript.Gestures.PanGesture::.ctor()
// TouchScript.Clusters.Clusters
#include "TouchScript_TouchScript_Clusters_ClustersMethodDeclarations.h"
// TouchScript.Gestures.Simple.SimplePanGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimplePanGestureMethodDeclarations.h"
extern TypeInfo* Clusters_t591_il2cpp_TypeInfo_var;
extern "C" void PanGesture__ctor_m3396 (PanGesture_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Clusters_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(412);
		s_Il2CppMethodIntialized = true;
	}
	{
		Clusters_t591 * L_0 = (Clusters_t591 *)il2cpp_codegen_object_new (Clusters_t591_il2cpp_TypeInfo_var);
		Clusters__ctor_m3202(L_0, /*hidden argument*/NULL);
		__this->___clusters_42 = L_0;
		SimplePanGesture__ctor_m3459(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.PanGesture::get_ScreenPosition()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  PanGesture_get_ScreenPosition_m3397 (PanGesture_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t592 * L_0 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_2 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_2;
	}

IL_0016:
	{
		List_1_t592 * L_3 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		List_1_t592 * L_5 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_5, 0);
		NullCheck(L_6);
		Vector2_t85  L_7 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}

IL_0039:
	{
		Clusters_t591 * L_8 = (__this->___clusters_42);
		NullCheck(L_8);
		Vector2_t85  L_9 = Clusters_GetCenterPosition_m3207(L_8, 0, /*hidden argument*/NULL);
		Clusters_t591 * L_10 = (__this->___clusters_42);
		NullCheck(L_10);
		Vector2_t85  L_11 = Clusters_GetCenterPosition_m3207(L_10, 1, /*hidden argument*/NULL);
		Vector2_t85  L_12 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		Vector2_t85  L_13 = Vector2_op_Multiply_m1117(NULL /*static, unused*/, L_12, (0.5f), /*hidden argument*/NULL);
		return L_13;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.PanGesture::get_PreviousScreenPosition()
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  PanGesture_get_PreviousScreenPosition_m3398 (PanGesture_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t592 * L_0 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_2 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_2;
	}

IL_0016:
	{
		List_1_t592 * L_3 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		List_1_t592 * L_5 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_5, 0);
		NullCheck(L_6);
		Vector2_t85  L_7 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(3 /* UnityEngine.Vector2 TouchScript.ITouch::get_PreviousPosition() */, ITouch_t257_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}

IL_0039:
	{
		Clusters_t591 * L_8 = (__this->___clusters_42);
		NullCheck(L_8);
		Vector2_t85  L_9 = Clusters_GetPreviousCenterPosition_m3208(L_8, 0, /*hidden argument*/NULL);
		Clusters_t591 * L_10 = (__this->___clusters_42);
		NullCheck(L_10);
		Vector2_t85  L_11 = Clusters_GetPreviousCenterPosition_m3208(L_10, 1, /*hidden argument*/NULL);
		Vector2_t85  L_12 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		Vector2_t85  L_13 = Vector2_op_Multiply_m1117(NULL /*static, unused*/, L_12, (0.5f), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void TouchScript.Gestures.PanGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// TouchScript.Gestures.Simple.Transform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBaMethodDeclarations.h"
extern "C" void PanGesture_touchesBegan_m3399 (PanGesture_t611 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Clusters_t591 * L_0 = (__this->___clusters_42);
		Object_t* L_1 = ___touches;
		NullCheck(L_0);
		Clusters_AddPoints_m3210(L_0, L_1, /*hidden argument*/NULL);
		Object_t* L_2 = ___touches;
		Transform2DGestureBase_touchesBegan_m3552(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.PanGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void PanGesture_touchesMoved_m3400 (PanGesture_t611 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Clusters_t591 * L_0 = (__this->___clusters_42);
		NullCheck(L_0);
		Clusters_Invalidate_m3214(L_0, /*hidden argument*/NULL);
		Object_t* L_1 = ___touches;
		SimplePanGesture_touchesMoved_m3473(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.PanGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void PanGesture_touchesEnded_m3401 (PanGesture_t611 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Clusters_t591 * L_0 = (__this->___clusters_42);
		Object_t* L_1 = ___touches;
		NullCheck(L_0);
		Clusters_RemovePoints_m3212(L_0, L_1, /*hidden argument*/NULL);
		Object_t* L_2 = ___touches;
		Transform2DGestureBase_touchesEnded_m3554(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.PanGesture::reset()
extern "C" void PanGesture_reset_m3402 (PanGesture_t611 * __this, const MethodInfo* method)
{
	{
		SimplePanGesture_reset_m3479(__this, /*hidden argument*/NULL);
		Clusters_t591 * L_0 = (__this->___clusters_42);
		NullCheck(L_0);
		Clusters_RemoveAllPoints_m3213(L_0, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Gestures.RotateGesture
#include "TouchScript_TouchScript_Gestures_RotateGesture.h"
// TouchScript.Gestures.RotateGesture
#include "TouchScript_TouchScript_Gestures_RotateGestureMethodDeclarations.h"
// TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_TwoPointTransform2DG.h"
// TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_TwoPointTransform2DGMethodDeclarations.h"
// System.Void TouchScript.Gestures.RotateGesture::.ctor()
// TouchScript.Clusters.Clusters
#include "TouchScript_TouchScript_Clusters_ClustersMethodDeclarations.h"
// TouchScript.Gestures.Simple.SimpleRotateGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimpleRotateGestureMethodDeclarations.h"
extern TypeInfo* Clusters_t591_il2cpp_TypeInfo_var;
extern "C" void RotateGesture__ctor_m3403 (RotateGesture_t613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Clusters_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(412);
		s_Il2CppMethodIntialized = true;
	}
	{
		Clusters_t591 * L_0 = (Clusters_t591 *)il2cpp_codegen_object_new (Clusters_t591_il2cpp_TypeInfo_var);
		Clusters__ctor_m3202(L_0, /*hidden argument*/NULL);
		__this->___clusters_47 = L_0;
		SimpleRotateGesture__ctor_m3480(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single TouchScript.Gestures.RotateGesture::get_MinPointsDistance()
// TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_TwoPointTransform2DGMethodDeclarations.h"
extern "C" float RotateGesture_get_MinPointsDistance_m3404 (RotateGesture_t613 * __this, const MethodInfo* method)
{
	{
		float L_0 = TwoPointTransform2DGestureBase_get_MinPointsDistance_m3559(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.RotateGesture::set_MinPointsDistance(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern "C" void RotateGesture_set_MinPointsDistance_m3405 (RotateGesture_t613 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		TwoPointTransform2DGestureBase_set_MinPointsDistance_m3560(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = Application_get_isPlaying_m2808(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Clusters_t591 * L_2 = (__this->___clusters_47);
		float L_3 = (((TwoPointTransform2DGestureBase_t621 *)__this)->___minPixelDistance_33);
		NullCheck(L_2);
		Clusters_set_MinPointsDistance_m3205(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.RotateGesture::OnEnable()
extern "C" void RotateGesture_OnEnable_m3406 (RotateGesture_t613 * __this, const MethodInfo* method)
{
	{
		TwoPointTransform2DGestureBase_OnEnable_m3563(__this, /*hidden argument*/NULL);
		Clusters_t591 * L_0 = (__this->___clusters_47);
		float L_1 = (((TwoPointTransform2DGestureBase_t621 *)__this)->___minPixelDistance_33);
		NullCheck(L_0);
		Clusters_set_MinPointsDistance_m3205(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.RotateGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// TouchScript.Gestures.Simple.Transform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBaMethodDeclarations.h"
extern "C" void RotateGesture_touchesBegan_m3407 (RotateGesture_t613 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Clusters_t591 * L_0 = (__this->___clusters_47);
		Object_t* L_1 = ___touches;
		NullCheck(L_0);
		Clusters_AddPoints_m3210(L_0, L_1, /*hidden argument*/NULL);
		Object_t* L_2 = ___touches;
		Transform2DGestureBase_touchesBegan_m3552(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.RotateGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void RotateGesture_touchesMoved_m3408 (RotateGesture_t613 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Clusters_t591 * L_0 = (__this->___clusters_47);
		NullCheck(L_0);
		Clusters_Invalidate_m3214(L_0, /*hidden argument*/NULL);
		Object_t* L_1 = ___touches;
		SimpleRotateGesture_touchesMoved_m3492(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.RotateGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void RotateGesture_touchesEnded_m3409 (RotateGesture_t613 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Clusters_t591 * L_0 = (__this->___clusters_47);
		Object_t* L_1 = ___touches;
		NullCheck(L_0);
		Clusters_RemovePoints_m3212(L_0, L_1, /*hidden argument*/NULL);
		Object_t* L_2 = ___touches;
		TwoPointTransform2DGestureBase_touchesEnded_m3569(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.RotateGesture::reset()
extern "C" void RotateGesture_reset_m3410 (RotateGesture_t613 * __this, const MethodInfo* method)
{
	{
		SimpleRotateGesture_reset_m3493(__this, /*hidden argument*/NULL);
		Clusters_t591 * L_0 = (__this->___clusters_47);
		NullCheck(L_0);
		Clusters_RemoveAllPoints_m3213(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TouchScript.Gestures.RotateGesture::gotEnoughTouches()
extern "C" bool RotateGesture_gotEnoughTouches_m3411 (RotateGesture_t613 * __this, const MethodInfo* method)
{
	{
		Clusters_t591 * L_0 = (__this->___clusters_47);
		NullCheck(L_0);
		bool L_1 = Clusters_get_HasClusters_m3206(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean TouchScript.Gestures.RotateGesture::relevantTouches(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" bool RotateGesture_relevantTouches_m3412 (RotateGesture_t613 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		return 1;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.RotateGesture::getPointScreenPosition(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" Vector2_t85  RotateGesture_getPointScreenPosition_m3413 (RotateGesture_t613 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		___index = 0;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_1 = ___index;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		___index = 1;
	}

IL_0019:
	{
		Clusters_t591 * L_2 = (__this->___clusters_47);
		int32_t L_3 = ___index;
		NullCheck(L_2);
		Vector2_t85  L_4 = Clusters_GetCenterPosition_m3207(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.RotateGesture::getPointPreviousScreenPosition(System.Int32)
extern "C" Vector2_t85  RotateGesture_getPointPreviousScreenPosition_m3414 (RotateGesture_t613 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		___index = 0;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_1 = ___index;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		___index = 1;
	}

IL_0019:
	{
		Clusters_t591 * L_2 = (__this->___clusters_47);
		int32_t L_3 = ___index;
		NullCheck(L_2);
		Vector2_t85  L_4 = Clusters_GetPreviousCenterPosition_m3208(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// TouchScript.Gestures.ScaleGesture
#include "TouchScript_TouchScript_Gestures_ScaleGesture.h"
// TouchScript.Gestures.ScaleGesture
#include "TouchScript_TouchScript_Gestures_ScaleGestureMethodDeclarations.h"
// System.Void TouchScript.Gestures.ScaleGesture::.ctor()
// TouchScript.Clusters.Clusters
#include "TouchScript_TouchScript_Clusters_ClustersMethodDeclarations.h"
// TouchScript.Gestures.Simple.SimpleScaleGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimpleScaleGestureMethodDeclarations.h"
extern TypeInfo* Clusters_t591_il2cpp_TypeInfo_var;
extern "C" void ScaleGesture__ctor_m3415 (ScaleGesture_t615 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Clusters_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(412);
		s_Il2CppMethodIntialized = true;
	}
	{
		Clusters_t591 * L_0 = (Clusters_t591 *)il2cpp_codegen_object_new (Clusters_t591_il2cpp_TypeInfo_var);
		Clusters__ctor_m3202(L_0, /*hidden argument*/NULL);
		__this->___clusters_47 = L_0;
		SimpleScaleGesture__ctor_m3500(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single TouchScript.Gestures.ScaleGesture::get_MinPointsDistance()
// TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_TwoPointTransform2DGMethodDeclarations.h"
extern "C" float ScaleGesture_get_MinPointsDistance_m3416 (ScaleGesture_t615 * __this, const MethodInfo* method)
{
	{
		float L_0 = TwoPointTransform2DGestureBase_get_MinPointsDistance_m3559(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.ScaleGesture::set_MinPointsDistance(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern "C" void ScaleGesture_set_MinPointsDistance_m3417 (ScaleGesture_t615 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		TwoPointTransform2DGestureBase_set_MinPointsDistance_m3560(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = Application_get_isPlaying_m2808(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Clusters_t591 * L_2 = (__this->___clusters_47);
		float L_3 = (((TwoPointTransform2DGestureBase_t621 *)__this)->___minPixelDistance_33);
		NullCheck(L_2);
		Clusters_set_MinPointsDistance_m3205(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.ScaleGesture::OnEnable()
extern "C" void ScaleGesture_OnEnable_m3418 (ScaleGesture_t615 * __this, const MethodInfo* method)
{
	{
		TwoPointTransform2DGestureBase_OnEnable_m3563(__this, /*hidden argument*/NULL);
		Clusters_t591 * L_0 = (__this->___clusters_47);
		float L_1 = (((TwoPointTransform2DGestureBase_t621 *)__this)->___minPixelDistance_33);
		NullCheck(L_0);
		Clusters_set_MinPointsDistance_m3205(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.ScaleGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// TouchScript.Gestures.Simple.Transform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBaMethodDeclarations.h"
extern "C" void ScaleGesture_touchesBegan_m3419 (ScaleGesture_t615 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Clusters_t591 * L_0 = (__this->___clusters_47);
		Object_t* L_1 = ___touches;
		NullCheck(L_0);
		Clusters_AddPoints_m3210(L_0, L_1, /*hidden argument*/NULL);
		Object_t* L_2 = ___touches;
		Transform2DGestureBase_touchesBegan_m3552(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.ScaleGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void ScaleGesture_touchesMoved_m3420 (ScaleGesture_t615 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Clusters_t591 * L_0 = (__this->___clusters_47);
		NullCheck(L_0);
		Clusters_Invalidate_m3214(L_0, /*hidden argument*/NULL);
		Object_t* L_1 = ___touches;
		SimpleScaleGesture_touchesMoved_m3511(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.ScaleGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void ScaleGesture_touchesEnded_m3421 (ScaleGesture_t615 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Clusters_t591 * L_0 = (__this->___clusters_47);
		Object_t* L_1 = ___touches;
		NullCheck(L_0);
		Clusters_RemovePoints_m3212(L_0, L_1, /*hidden argument*/NULL);
		Object_t* L_2 = ___touches;
		TwoPointTransform2DGestureBase_touchesEnded_m3569(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.ScaleGesture::reset()
extern "C" void ScaleGesture_reset_m3422 (ScaleGesture_t615 * __this, const MethodInfo* method)
{
	{
		SimpleScaleGesture_reset_m3517(__this, /*hidden argument*/NULL);
		Clusters_t591 * L_0 = (__this->___clusters_47);
		NullCheck(L_0);
		Clusters_RemoveAllPoints_m3213(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TouchScript.Gestures.ScaleGesture::gotEnoughTouches()
extern "C" bool ScaleGesture_gotEnoughTouches_m3423 (ScaleGesture_t615 * __this, const MethodInfo* method)
{
	{
		Clusters_t591 * L_0 = (__this->___clusters_47);
		NullCheck(L_0);
		bool L_1 = Clusters_get_HasClusters_m3206(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean TouchScript.Gestures.ScaleGesture::relevantTouches(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" bool ScaleGesture_relevantTouches_m3424 (ScaleGesture_t615 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		return 1;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.ScaleGesture::getPointScreenPosition(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" Vector2_t85  ScaleGesture_getPointScreenPosition_m3425 (ScaleGesture_t615 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		___index = 0;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_1 = ___index;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		___index = 1;
	}

IL_0019:
	{
		Clusters_t591 * L_2 = (__this->___clusters_47);
		int32_t L_3 = ___index;
		NullCheck(L_2);
		Vector2_t85  L_4 = Clusters_GetCenterPosition_m3207(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.ScaleGesture::getPointPreviousScreenPosition(System.Int32)
extern "C" Vector2_t85  ScaleGesture_getPointPreviousScreenPosition_m3426 (ScaleGesture_t615 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		___index = 0;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_1 = ___index;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		___index = 1;
	}

IL_0019:
	{
		Clusters_t591 * L_2 = (__this->___clusters_47);
		int32_t L_3 = ___index;
		NullCheck(L_2);
		Vector2_t85  L_4 = Clusters_GetPreviousCenterPosition_m3208(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// TouchScript.Gestures.MetaGesture
#include "TouchScript_TouchScript_Gestures_MetaGesture.h"
// TouchScript.Gestures.MetaGesture
#include "TouchScript_TouchScript_Gestures_MetaGestureMethodDeclarations.h"
// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>
#include "mscorlib_System_EventHandler_1_gen_2.h"
// TouchScript.Gestures.MetaGestureEventArgs
#include "TouchScript_TouchScript_Gestures_MetaGestureEventArgs.h"
// TouchScript.Gestures.MetaGestureEventArgs
#include "TouchScript_TouchScript_Gestures_MetaGestureEventArgsMethodDeclarations.h"
// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>
#include "mscorlib_System_EventHandler_1_gen_2MethodDeclarations.h"
// System.Void TouchScript.Gestures.MetaGesture::.ctor()
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern "C" void MetaGesture__ctor_m3427 (MetaGesture_t617 * __this, const MethodInfo* method)
{
	{
		Gesture__ctor_m3303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::add_TouchBegan(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>
#include "mscorlib_System_EventHandler_1_gen_2.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t618_il2cpp_TypeInfo_var;
extern "C" void MetaGesture_add_TouchBegan_m3428 (MetaGesture_t617 * __this, EventHandler_1_t618 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t618 * L_0 = (__this->___touchBeganInvoker_29);
		EventHandler_1_t618 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchBeganInvoker_29 = ((EventHandler_1_t618 *)CastclassSealed(L_2, EventHandler_1_t618_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::remove_TouchBegan(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
extern TypeInfo* EventHandler_1_t618_il2cpp_TypeInfo_var;
extern "C" void MetaGesture_remove_TouchBegan_m3429 (MetaGesture_t617 * __this, EventHandler_1_t618 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t618 * L_0 = (__this->___touchBeganInvoker_29);
		EventHandler_1_t618 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchBeganInvoker_29 = ((EventHandler_1_t618 *)CastclassSealed(L_2, EventHandler_1_t618_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::add_TouchMoved(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
extern TypeInfo* EventHandler_1_t618_il2cpp_TypeInfo_var;
extern "C" void MetaGesture_add_TouchMoved_m3430 (MetaGesture_t617 * __this, EventHandler_1_t618 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t618 * L_0 = (__this->___touchMovedInvoker_30);
		EventHandler_1_t618 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchMovedInvoker_30 = ((EventHandler_1_t618 *)CastclassSealed(L_2, EventHandler_1_t618_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::remove_TouchMoved(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
extern TypeInfo* EventHandler_1_t618_il2cpp_TypeInfo_var;
extern "C" void MetaGesture_remove_TouchMoved_m3431 (MetaGesture_t617 * __this, EventHandler_1_t618 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t618 * L_0 = (__this->___touchMovedInvoker_30);
		EventHandler_1_t618 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchMovedInvoker_30 = ((EventHandler_1_t618 *)CastclassSealed(L_2, EventHandler_1_t618_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::add_TouchEnded(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
extern TypeInfo* EventHandler_1_t618_il2cpp_TypeInfo_var;
extern "C" void MetaGesture_add_TouchEnded_m3432 (MetaGesture_t617 * __this, EventHandler_1_t618 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t618 * L_0 = (__this->___touchEndedInvoker_31);
		EventHandler_1_t618 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchEndedInvoker_31 = ((EventHandler_1_t618 *)CastclassSealed(L_2, EventHandler_1_t618_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::remove_TouchEnded(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
extern TypeInfo* EventHandler_1_t618_il2cpp_TypeInfo_var;
extern "C" void MetaGesture_remove_TouchEnded_m3433 (MetaGesture_t617 * __this, EventHandler_1_t618 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t618 * L_0 = (__this->___touchEndedInvoker_31);
		EventHandler_1_t618 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchEndedInvoker_31 = ((EventHandler_1_t618 *)CastclassSealed(L_2, EventHandler_1_t618_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::add_TouchCancelled(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
extern TypeInfo* EventHandler_1_t618_il2cpp_TypeInfo_var;
extern "C" void MetaGesture_add_TouchCancelled_m3434 (MetaGesture_t617 * __this, EventHandler_1_t618 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t618 * L_0 = (__this->___touchCancelledInvoker_32);
		EventHandler_1_t618 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchCancelledInvoker_32 = ((EventHandler_1_t618 *)CastclassSealed(L_2, EventHandler_1_t618_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::remove_TouchCancelled(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
extern TypeInfo* EventHandler_1_t618_il2cpp_TypeInfo_var;
extern "C" void MetaGesture_remove_TouchCancelled_m3435 (MetaGesture_t617 * __this, EventHandler_1_t618 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t618 * L_0 = (__this->___touchCancelledInvoker_32);
		EventHandler_1_t618 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchCancelledInvoker_32 = ((EventHandler_1_t618 *)CastclassSealed(L_2, EventHandler_1_t618_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// TouchScript.Gestures.MetaGestureEventArgs
#include "TouchScript_TouchScript_Gestures_MetaGestureEventArgsMethodDeclarations.h"
// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>
#include "mscorlib_System_EventHandler_1_gen_2MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t638_il2cpp_TypeInfo_var;
extern TypeInfo* MetaGestureEventArgs_t619_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3876_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral329;
extern "C" void MetaGesture_touchesBegan_m3436 (MetaGesture_t617 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		IList_1_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		MetaGestureEventArgs_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		EventHandler_1_Invoke_m3876_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484084);
		_stringLiteral329 = il2cpp_codegen_string_literal_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesBegan_m3354(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Gesture_setState_m3353(__this, 1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		Object_t* L_2 = ___touches;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		EventHandler_1_t618 * L_4 = (__this->___touchBeganInvoker_29);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		V_1 = 0;
		goto IL_004f;
	}

IL_0033:
	{
		EventHandler_1_t618 * L_5 = (__this->___touchBeganInvoker_29);
		Object_t* L_6 = ___touches;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_6, L_7);
		MetaGestureEventArgs_t619 * L_9 = (MetaGestureEventArgs_t619 *)il2cpp_codegen_object_new (MetaGestureEventArgs_t619_il2cpp_TypeInfo_var);
		MetaGestureEventArgs__ctor_m3440(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_m3876(L_5, __this, L_9, /*hidden argument*/EventHandler_1_Invoke_m3876_MethodInfo_var);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0033;
		}
	}

IL_0056:
	{
		bool L_13 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		GameObject_t30 * L_14 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_15 = Object_op_Inequality_m268(NULL /*static, unused*/, L_14, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009c;
		}
	}
	{
		V_2 = 0;
		goto IL_0095;
	}

IL_0079:
	{
		GameObject_t30 * L_16 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		Object_t* L_17 = ___touches;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Object_t * L_19 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_17, L_18);
		NullCheck(L_16);
		GameObject_SendMessage_m3865(L_16, _stringLiteral329, L_19, 1, /*hidden argument*/NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0095:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0079;
		}
	}

IL_009c:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t638_il2cpp_TypeInfo_var;
extern TypeInfo* MetaGestureEventArgs_t619_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3876_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral330;
extern "C" void MetaGesture_touchesMoved_m3437 (MetaGesture_t617 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		IList_1_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		MetaGestureEventArgs_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		EventHandler_1_Invoke_m3876_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484084);
		_stringLiteral330 = il2cpp_codegen_string_literal_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesMoved_m3355(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0027;
		}
	}

IL_001f:
	{
		Gesture_setState_m3353(__this, 2, /*hidden argument*/NULL);
	}

IL_0027:
	{
		Object_t* L_3 = ___touches;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
		EventHandler_1_t618 * L_5 = (__this->___touchMovedInvoker_30);
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		V_1 = 0;
		goto IL_005c;
	}

IL_0040:
	{
		EventHandler_1_t618 * L_6 = (__this->___touchMovedInvoker_30);
		Object_t* L_7 = ___touches;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Object_t * L_9 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_7, L_8);
		MetaGestureEventArgs_t619 * L_10 = (MetaGestureEventArgs_t619 *)il2cpp_codegen_object_new (MetaGestureEventArgs_t619_il2cpp_TypeInfo_var);
		MetaGestureEventArgs__ctor_m3440(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		EventHandler_1_Invoke_m3876(L_6, __this, L_10, /*hidden argument*/EventHandler_1_Invoke_m3876_MethodInfo_var);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0040;
		}
	}

IL_0063:
	{
		bool L_14 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00a9;
		}
	}
	{
		GameObject_t30 * L_15 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_16 = Object_op_Inequality_m268(NULL /*static, unused*/, L_15, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		V_2 = 0;
		goto IL_00a2;
	}

IL_0086:
	{
		GameObject_t30 * L_17 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		Object_t* L_18 = ___touches;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Object_t * L_20 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_18, L_19);
		NullCheck(L_17);
		GameObject_SendMessage_m3865(L_17, _stringLiteral330, L_20, 1, /*hidden argument*/NULL);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_00a2:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0086;
		}
	}

IL_00a9:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t638_il2cpp_TypeInfo_var;
extern TypeInfo* MetaGestureEventArgs_t619_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3876_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral331;
extern "C" void MetaGesture_touchesEnded_m3438 (MetaGesture_t617 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		IList_1_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		MetaGestureEventArgs_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		EventHandler_1_Invoke_m3876_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484084);
		_stringLiteral331 = il2cpp_codegen_string_literal_from_index(331);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesEnded_m3356(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0037;
		}
	}

IL_001f:
	{
		List_1_t592 * L_3 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_3);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		Gesture_setState_m3353(__this, 3, /*hidden argument*/NULL);
	}

IL_0037:
	{
		Object_t* L_5 = ___touches;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		EventHandler_1_t618 * L_7 = (__this->___touchEndedInvoker_31);
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		V_1 = 0;
		goto IL_006c;
	}

IL_0050:
	{
		EventHandler_1_t618 * L_8 = (__this->___touchEndedInvoker_31);
		Object_t* L_9 = ___touches;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_9, L_10);
		MetaGestureEventArgs_t619 * L_12 = (MetaGestureEventArgs_t619 *)il2cpp_codegen_object_new (MetaGestureEventArgs_t619_il2cpp_TypeInfo_var);
		MetaGestureEventArgs__ctor_m3440(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		EventHandler_1_Invoke_m3876(L_8, __this, L_12, /*hidden argument*/EventHandler_1_Invoke_m3876_MethodInfo_var);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_006c:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0050;
		}
	}

IL_0073:
	{
		bool L_16 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b9;
		}
	}
	{
		GameObject_t30 * L_17 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_18 = Object_op_Inequality_m268(NULL /*static, unused*/, L_17, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b9;
		}
	}
	{
		V_2 = 0;
		goto IL_00b2;
	}

IL_0096:
	{
		GameObject_t30 * L_19 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		Object_t* L_20 = ___touches;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Object_t * L_22 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_20, L_21);
		NullCheck(L_19);
		GameObject_SendMessage_m3865(L_19, _stringLiteral331, L_22, 1, /*hidden argument*/NULL);
		int32_t L_23 = V_2;
		V_2 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00b2:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0096;
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGesture::touchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t638_il2cpp_TypeInfo_var;
extern TypeInfo* MetaGestureEventArgs_t619_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3876_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral332;
extern "C" void MetaGesture_touchesCancelled_m3439 (MetaGesture_t617 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		IList_1_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		MetaGestureEventArgs_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		EventHandler_1_Invoke_m3876_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484084);
		_stringLiteral332 = il2cpp_codegen_string_literal_from_index(332);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesCancelled_m3357(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0037;
		}
	}

IL_001f:
	{
		List_1_t592 * L_3 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_3);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		Gesture_setState_m3353(__this, 3, /*hidden argument*/NULL);
	}

IL_0037:
	{
		Object_t* L_5 = ___touches;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		EventHandler_1_t618 * L_7 = (__this->___touchCancelledInvoker_32);
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		V_1 = 0;
		goto IL_006c;
	}

IL_0050:
	{
		EventHandler_1_t618 * L_8 = (__this->___touchCancelledInvoker_32);
		Object_t* L_9 = ___touches;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_9, L_10);
		MetaGestureEventArgs_t619 * L_12 = (MetaGestureEventArgs_t619 *)il2cpp_codegen_object_new (MetaGestureEventArgs_t619_il2cpp_TypeInfo_var);
		MetaGestureEventArgs__ctor_m3440(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		EventHandler_1_Invoke_m3876(L_8, __this, L_12, /*hidden argument*/EventHandler_1_Invoke_m3876_MethodInfo_var);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_006c:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0050;
		}
	}

IL_0073:
	{
		bool L_16 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b9;
		}
	}
	{
		GameObject_t30 * L_17 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_18 = Object_op_Inequality_m268(NULL /*static, unused*/, L_17, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b9;
		}
	}
	{
		V_2 = 0;
		goto IL_00b2;
	}

IL_0096:
	{
		GameObject_t30 * L_19 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		Object_t* L_20 = ___touches;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Object_t * L_22 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_20, L_21);
		NullCheck(L_19);
		GameObject_SendMessage_m3865(L_19, _stringLiteral332, L_22, 1, /*hidden argument*/NULL);
		int32_t L_23 = V_2;
		V_2 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00b2:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0096;
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.MetaGestureEventArgs::.ctor(TouchScript.ITouch)
// System.EventArgs
#include "mscorlib_System_EventArgsMethodDeclarations.h"
// TouchScript.Gestures.MetaGestureEventArgs
#include "TouchScript_TouchScript_Gestures_MetaGestureEventArgsMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern "C" void MetaGestureEventArgs__ctor_m3440 (MetaGestureEventArgs_t619 * __this, Object_t * ___touch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3875(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___touch;
		MetaGestureEventArgs_set_Touch_m3442(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.ITouch TouchScript.Gestures.MetaGestureEventArgs::get_Touch()
extern "C" Object_t * MetaGestureEventArgs_get_Touch_m3441 (MetaGestureEventArgs_t619 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3CTouchU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.MetaGestureEventArgs::set_Touch(TouchScript.ITouch)
extern "C" void MetaGestureEventArgs_set_Touch_m3442 (MetaGestureEventArgs_t619 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___U3CTouchU3Ek__BackingField_1 = L_0;
		return;
	}
}
// TouchScript.Gestures.PressGesture
#include "TouchScript_TouchScript_Gestures_PressGesture.h"
// TouchScript.Gestures.PressGesture
#include "TouchScript_TouchScript_Gestures_PressGestureMethodDeclarations.h"
// System.Void TouchScript.Gestures.PressGesture::.ctor()
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern "C" void PressGesture__ctor_m3443 (PressGesture_t250 * __this, const MethodInfo* method)
{
	{
		Gesture__ctor_m3303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.PressGesture::add_Pressed(System.EventHandler`1<System.EventArgs>)
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void PressGesture_add_Pressed_m1211 (PressGesture_t250 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___pressedInvoker_26);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___pressedInvoker_26 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.PressGesture::remove_Pressed(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void PressGesture_remove_Pressed_m1227 (PressGesture_t250 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___pressedInvoker_26);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___pressedInvoker_26 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean TouchScript.Gestures.PressGesture::get_IgnoreChildren()
extern "C" bool PressGesture_get_IgnoreChildren_m3444 (PressGesture_t250 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___ignoreChildren_27);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.PressGesture::set_IgnoreChildren(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void PressGesture_set_IgnoreChildren_m3445 (PressGesture_t250 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___ignoreChildren_27 = L_0;
		return;
	}
}
// System.Boolean TouchScript.Gestures.PressGesture::ShouldReceiveTouch(TouchScript.ITouch)
// TouchScript.Gestures.PressGesture
#include "TouchScript_TouchScript_Gestures_PressGestureMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" bool PressGesture_ShouldReceiveTouch_m3446 (PressGesture_t250 * __this, Object_t * ___touch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = PressGesture_get_IgnoreChildren_m3444(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_1 = ___touch;
		bool L_2 = Gesture_ShouldReceiveTouch_m3339(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___touch;
		bool L_4 = Gesture_ShouldReceiveTouch_m3339(__this, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		return 0;
	}

IL_0021:
	{
		Object_t * L_5 = ___touch;
		NullCheck(L_5);
		Transform_t48 * L_6 = (Transform_t48 *)InterfaceFuncInvoker0< Transform_t48 * >::Invoke(1 /* UnityEngine.Transform TouchScript.ITouch::get_Target() */, ITouch_t257_il2cpp_TypeInfo_var, L_5);
		Transform_t48 * L_7 = (((Gesture_t270 *)__this)->___cachedTransform_5);
		bool L_8 = Object_op_Inequality_m268(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		return 1;
	}
}
// System.Boolean TouchScript.Gestures.PressGesture::CanPreventGesture(TouchScript.Gestures.Gesture)
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_Gesture.h"
extern TypeInfo* IGestureDelegate_t609_il2cpp_TypeInfo_var;
extern "C" bool PressGesture_CanPreventGesture_m3447 (PressGesture_t250 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGestureDelegate_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		Gesture_t270 * L_2 = ___gesture;
		NullCheck(L_1);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, Gesture_t270 *, Gesture_t270 * >::Invoke(2 /* System.Boolean TouchScript.IGestureDelegate::ShouldRecognizeSimultaneously(TouchScript.Gestures.Gesture,TouchScript.Gestures.Gesture) */, IGestureDelegate_t609_il2cpp_TypeInfo_var, L_1, __this, L_2);
		return L_3;
	}
}
// System.Boolean TouchScript.Gestures.PressGesture::CanBePreventedByGesture(TouchScript.Gestures.Gesture)
extern TypeInfo* IGestureDelegate_t609_il2cpp_TypeInfo_var;
extern "C" bool PressGesture_CanBePreventedByGesture_m3448 (PressGesture_t250 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGestureDelegate_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		Gesture_t270 * L_2 = ___gesture;
		NullCheck(L_1);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, Gesture_t270 *, Gesture_t270 * >::Invoke(2 /* System.Boolean TouchScript.IGestureDelegate::ShouldRecognizeSimultaneously(TouchScript.Gestures.Gesture,TouchScript.Gestures.Gesture) */, IGestureDelegate_t609_il2cpp_TypeInfo_var, L_1, __this, L_2);
		return ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void TouchScript.Gestures.PressGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern "C" void PressGesture_touchesBegan_m3449 (PressGesture_t250 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesBegan_m3354(__this, L_0, /*hidden argument*/NULL);
		List_1_t592 * L_1 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_1);
		Object_t* L_3 = ___touches;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0025;
		}
	}
	{
		Gesture_setState_m3353(__this, 3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.PressGesture::onRecognized()
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_genMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral333;
extern "C" void PressGesture_onRecognized_m3450 (PressGesture_t250 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral333 = il2cpp_codegen_string_literal_from_index(333);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onRecognized_m3362(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___pressedInvoker_26);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___pressedInvoker_26);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		bool L_3 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_4 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_6 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SendMessage_m3865(L_6, _stringLiteral333, __this, 1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// TouchScript.Gestures.ReleaseGesture
#include "TouchScript_TouchScript_Gestures_ReleaseGesture.h"
// TouchScript.Gestures.ReleaseGesture
#include "TouchScript_TouchScript_Gestures_ReleaseGestureMethodDeclarations.h"
// System.Void TouchScript.Gestures.ReleaseGesture::.ctor()
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern "C" void ReleaseGesture__ctor_m3451 (ReleaseGesture_t251 * __this, const MethodInfo* method)
{
	{
		Gesture__ctor_m3303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.ReleaseGesture::add_Released(System.EventHandler`1<System.EventArgs>)
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void ReleaseGesture_add_Released_m1213 (ReleaseGesture_t251 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___releasedInvoker_26);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___releasedInvoker_26 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.ReleaseGesture::remove_Released(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void ReleaseGesture_remove_Released_m1228 (ReleaseGesture_t251 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___releasedInvoker_26);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___releasedInvoker_26 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean TouchScript.Gestures.ReleaseGesture::get_IgnoreChildren()
extern "C" bool ReleaseGesture_get_IgnoreChildren_m3452 (ReleaseGesture_t251 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___ignoreChildren_27);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.ReleaseGesture::set_IgnoreChildren(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void ReleaseGesture_set_IgnoreChildren_m3453 (ReleaseGesture_t251 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___ignoreChildren_27 = L_0;
		return;
	}
}
// System.Boolean TouchScript.Gestures.ReleaseGesture::ShouldReceiveTouch(TouchScript.ITouch)
// TouchScript.Gestures.ReleaseGesture
#include "TouchScript_TouchScript_Gestures_ReleaseGestureMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" bool ReleaseGesture_ShouldReceiveTouch_m3454 (ReleaseGesture_t251 * __this, Object_t * ___touch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ReleaseGesture_get_IgnoreChildren_m3452(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_1 = ___touch;
		bool L_2 = Gesture_ShouldReceiveTouch_m3339(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___touch;
		bool L_4 = Gesture_ShouldReceiveTouch_m3339(__this, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		return 0;
	}

IL_0021:
	{
		Object_t * L_5 = ___touch;
		NullCheck(L_5);
		Transform_t48 * L_6 = (Transform_t48 *)InterfaceFuncInvoker0< Transform_t48 * >::Invoke(1 /* UnityEngine.Transform TouchScript.ITouch::get_Target() */, ITouch_t257_il2cpp_TypeInfo_var, L_5);
		Transform_t48 * L_7 = (((Gesture_t270 *)__this)->___cachedTransform_5);
		bool L_8 = Object_op_Inequality_m268(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		return 1;
	}
}
// System.Boolean TouchScript.Gestures.ReleaseGesture::CanPreventGesture(TouchScript.Gestures.Gesture)
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_Gesture.h"
extern TypeInfo* IGestureDelegate_t609_il2cpp_TypeInfo_var;
extern "C" bool ReleaseGesture_CanPreventGesture_m3455 (ReleaseGesture_t251 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGestureDelegate_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		Gesture_t270 * L_2 = ___gesture;
		NullCheck(L_1);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, Gesture_t270 *, Gesture_t270 * >::Invoke(2 /* System.Boolean TouchScript.IGestureDelegate::ShouldRecognizeSimultaneously(TouchScript.Gestures.Gesture,TouchScript.Gestures.Gesture) */, IGestureDelegate_t609_il2cpp_TypeInfo_var, L_1, __this, L_2);
		return L_3;
	}
}
// System.Boolean TouchScript.Gestures.ReleaseGesture::CanBePreventedByGesture(TouchScript.Gestures.Gesture)
extern TypeInfo* IGestureDelegate_t609_il2cpp_TypeInfo_var;
extern "C" bool ReleaseGesture_CanBePreventedByGesture_m3456 (ReleaseGesture_t251 * __this, Gesture_t270 * ___gesture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IGestureDelegate_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = Gesture_get_Delegate_m3325(__this, /*hidden argument*/NULL);
		Gesture_t270 * L_2 = ___gesture;
		NullCheck(L_1);
		bool L_3 = (bool)InterfaceFuncInvoker2< bool, Gesture_t270 *, Gesture_t270 * >::Invoke(2 /* System.Boolean TouchScript.IGestureDelegate::ShouldRecognizeSimultaneously(TouchScript.Gestures.Gesture,TouchScript.Gestures.Gesture) */, IGestureDelegate_t609_il2cpp_TypeInfo_var, L_1, __this, L_2);
		return ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void TouchScript.Gestures.ReleaseGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void ReleaseGesture_touchesEnded_m3457 (ReleaseGesture_t251 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesEnded_m3356(__this, L_0, /*hidden argument*/NULL);
		List_1_t592 * L_1 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Gesture_setState_m3353(__this, 3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.ReleaseGesture::onRecognized()
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_genMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral334;
extern "C" void ReleaseGesture_onRecognized_m3458 (ReleaseGesture_t251 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral334 = il2cpp_codegen_string_literal_from_index(334);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onRecognized_m3362(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___releasedInvoker_26);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___releasedInvoker_26);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		bool L_3 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_4 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_6 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SendMessage_m3865(L_6, _stringLiteral334, __this, 1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// TouchScript.Utils.TransformUtils
#include "TouchScript_TouchScript_Utils_TransformUtilsMethodDeclarations.h"
// TouchScript.Layers.TouchLayer
#include "TouchScript_TouchScript_Layers_TouchLayerMethodDeclarations.h"
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::.ctor()
// TouchScript.Gestures.Simple.Transform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBaMethodDeclarations.h"
extern "C" void SimplePanGesture__ctor_m3459 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	{
		__this->___movementThreshold_38 = (0.5f);
		Transform2DGestureBase__ctor_m3540(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::add_PanStarted(System.EventHandler`1<System.EventArgs>)
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimplePanGesture_add_PanStarted_m3460 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___panStartedInvoker_35);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___panStartedInvoker_35 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::remove_PanStarted(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimplePanGesture_remove_PanStarted_m3461 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___panStartedInvoker_35);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___panStartedInvoker_35 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::add_Panned(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimplePanGesture_add_Panned_m3462 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___pannedInvoker_36);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___pannedInvoker_36 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::remove_Panned(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimplePanGesture_remove_Panned_m3463 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___pannedInvoker_36);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___pannedInvoker_36 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::add_PanCompleted(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimplePanGesture_add_PanCompleted_m3464 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___panCompletedInvoker_37);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___panCompletedInvoker_37 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::remove_PanCompleted(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimplePanGesture_remove_PanCompleted_m3465 (SimplePanGesture_t612 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___panCompletedInvoker_37);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___panCompletedInvoker_37 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Single TouchScript.Gestures.Simple.SimplePanGesture::get_MovementThreshold()
extern "C" float SimplePanGesture_get_MovementThreshold_m3466 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___movementThreshold_38);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::set_MovementThreshold(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void SimplePanGesture_set_MovementThreshold_m3467 (SimplePanGesture_t612 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___movementThreshold_38 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TouchScript.Gestures.Simple.SimplePanGesture::get_WorldDeltaPosition()
extern "C" Vector3_t28  SimplePanGesture_get_WorldDeltaPosition_m3468 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___U3CWorldDeltaPositionU3Ek__BackingField_41);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::set_WorldDeltaPosition(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void SimplePanGesture_set_WorldDeltaPosition_m3469 (SimplePanGesture_t612 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___value;
		__this->___U3CWorldDeltaPositionU3Ek__BackingField_41 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TouchScript.Gestures.Simple.SimplePanGesture::get_LocalDeltaPosition()
// TouchScript.Gestures.Simple.SimplePanGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimplePanGestureMethodDeclarations.h"
// TouchScript.Utils.TransformUtils
#include "TouchScript_TouchScript_Utils_TransformUtilsMethodDeclarations.h"
extern "C" Vector3_t28  SimplePanGesture_get_LocalDeltaPosition_m3470 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = (((Gesture_t270 *)__this)->___cachedTransform_5);
		Vector3_t28  L_1 = SimplePanGesture_get_WorldDeltaPosition_m3468(__this, /*hidden argument*/NULL);
		Vector3_t28  L_2 = TransformUtils_GlobalToLocalVector_m3806(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.Simple.SimplePanGesture::get_ScreenPosition()
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  SimplePanGesture_get_ScreenPosition_m3471 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t592 * L_0 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_0);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		Vector2_t85  L_2 = Gesture_get_ScreenPosition_m3320(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0018:
	{
		List_1_t592 * L_3 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_3, 0);
		NullCheck(L_4);
		Vector2_t85  L_5 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_4);
		List_1_t592 * L_6 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_6, 1);
		NullCheck(L_7);
		Vector2_t85  L_8 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_7);
		Vector2_t85  L_9 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		Vector2_t85  L_10 = Vector2_op_Multiply_m1117(NULL /*static, unused*/, L_9, (0.5f), /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.Simple.SimplePanGesture::get_PreviousScreenPosition()
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  SimplePanGesture_get_PreviousScreenPosition_m3472 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t592 * L_0 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_0);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		Vector2_t85  L_2 = Gesture_get_PreviousScreenPosition_m3321(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0018:
	{
		List_1_t592 * L_3 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_3, 0);
		NullCheck(L_4);
		Vector2_t85  L_5 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(3 /* UnityEngine.Vector2 TouchScript.ITouch::get_PreviousPosition() */, ITouch_t257_il2cpp_TypeInfo_var, L_4);
		List_1_t592 * L_6 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_6, 1);
		NullCheck(L_7);
		Vector2_t85  L_8 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(3 /* UnityEngine.Vector2 TouchScript.ITouch::get_PreviousPosition() */, ITouch_t257_il2cpp_TypeInfo_var, L_7);
		Vector2_t85  L_9 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		Vector2_t85  L_10 = Vector2_op_Multiply_m1117(NULL /*static, unused*/, L_9, (0.5f), /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern "C" void SimplePanGesture_touchesMoved_m3473 (SimplePanGesture_t612 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t28  V_0 = {0};
	Vector3_t28  V_1 = {0};
	Vector3_t28  V_2 = {0};
	Vector2_t85  V_3 = {0};
	Vector2_t85  V_4 = {0};
	float V_5 = 0.0f;
	int32_t V_6 = {0};
	{
		Object_t* L_0 = ___touches;
		Transform2DGestureBase_touchesMoved_m3553(__this, L_0, /*hidden argument*/NULL);
		Vector3_t28  L_1 = Vector3_get_zero_m312(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector2_t85  L_2 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(5 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousScreenPosition() */, __this);
		V_3 = L_2;
		Vector2_t85  L_3 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(4 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition() */, __this);
		V_4 = L_3;
		bool L_4 = (__this->___isMoving_40);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		TouchLayer_t624 * L_5 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_6 = V_3;
		Plane_t554  L_7 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t28  L_8 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_5, L_6, L_7);
		V_1 = L_8;
		TouchLayer_t624 * L_9 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_10 = V_4;
		Plane_t554  L_11 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t28  L_12 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_9, L_10, L_11);
		V_2 = L_12;
		Vector3_t28  L_13 = V_2;
		Vector3_t28  L_14 = V_1;
		Vector3_t28  L_15 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_0104;
	}

IL_005b:
	{
		Vector2_t85  L_16 = (__this->___movementBuffer_39);
		Vector2_t85  L_17 = V_4;
		Vector2_t85  L_18 = V_3;
		Vector2_t85  L_19 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		Vector2_t85  L_20 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/NULL);
		__this->___movementBuffer_39 = L_20;
		float L_21 = SimplePanGesture_get_MovementThreshold_m3466(__this, /*hidden argument*/NULL);
		Object_t * L_22 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		float L_23 = (float)InterfaceFuncInvoker0< float >::Invoke(16 /* System.Single TouchScript.ITouchManager::get_DotsPerCentimeter() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_22);
		V_5 = ((float)((float)L_21*(float)L_23));
		Vector2_t85 * L_24 = &(__this->___movementBuffer_39);
		float L_25 = Vector2_get_sqrMagnitude_m1156(L_24, /*hidden argument*/NULL);
		float L_26 = V_5;
		float L_27 = V_5;
		if ((!(((float)L_25) > ((float)((float)((float)L_26*(float)L_27))))))
		{
			goto IL_00e3;
		}
	}
	{
		__this->___isMoving_40 = 1;
		TouchLayer_t624 * L_28 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_29 = V_3;
		Vector2_t85  L_30 = (__this->___movementBuffer_39);
		Vector2_t85  L_31 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		Plane_t554  L_32 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t28  L_33 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_28, L_31, L_32);
		V_1 = L_33;
		TouchLayer_t624 * L_34 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_35 = V_4;
		Plane_t554  L_36 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t28  L_37 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_34, L_35, L_36);
		V_2 = L_37;
		Vector3_t28  L_38 = V_2;
		Vector3_t28  L_39 = V_1;
		Vector3_t28  L_40 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0104;
	}

IL_00e3:
	{
		TouchLayer_t624 * L_41 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_42 = V_4;
		Vector2_t85  L_43 = (__this->___movementBuffer_39);
		Vector2_t85  L_44 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		Plane_t554  L_45 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t28  L_46 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_41, L_44, L_45);
		V_2 = L_46;
		Vector3_t28  L_47 = V_2;
		V_1 = L_47;
	}

IL_0104:
	{
		Vector3_t28  L_48 = V_0;
		Vector3_t28  L_49 = Vector3_get_zero_m312(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_50 = Vector3_op_Inequality_m3008(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_51 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		V_6 = L_51;
		int32_t L_52 = V_6;
		if (L_52 == 0)
		{
			goto IL_0134;
		}
		if (L_52 == 1)
		{
			goto IL_0134;
		}
		if (L_52 == 2)
		{
			goto IL_0134;
		}
	}
	{
		goto IL_016e;
	}

IL_0134:
	{
		Vector3_t28  L_53 = V_1;
		Transform2DGestureBase_set_PreviousWorldTransformCenter_m3546(__this, L_53, /*hidden argument*/NULL);
		Vector3_t28  L_54 = V_2;
		Transform2DGestureBase_set_WorldTransformCenter_m3548(__this, L_54, /*hidden argument*/NULL);
		Vector3_t28  L_55 = V_0;
		SimplePanGesture_set_WorldDeltaPosition_m3469(__this, L_55, /*hidden argument*/NULL);
		int32_t L_56 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_0161;
		}
	}
	{
		Gesture_setState_m3353(__this, 1, /*hidden argument*/NULL);
		goto IL_0169;
	}

IL_0161:
	{
		Gesture_setState_m3353(__this, 2, /*hidden argument*/NULL);
	}

IL_0169:
	{
		goto IL_016e;
	}

IL_016e:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onBegan()
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_genMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral335;
extern Il2CppCodeGenString* _stringLiteral336;
extern "C" void SimplePanGesture_onBegan_m3474 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral335 = il2cpp_codegen_string_literal_from_index(335);
		_stringLiteral336 = il2cpp_codegen_string_literal_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onBegan_m3360(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___panStartedInvoker_35);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___panStartedInvoker_35);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		EventHandler_1_t241 * L_3 = (__this->___pannedInvoker_36);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		EventHandler_1_t241 * L_4 = (__this->___pannedInvoker_36);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_5 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_4);
		EventHandler_1_Invoke_m3864(L_4, __this, L_5, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_003e:
	{
		bool L_6 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		GameObject_t30 * L_7 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_8 = Object_op_Inequality_m268(NULL /*static, unused*/, L_7, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007e;
		}
	}
	{
		GameObject_t30 * L_9 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SendMessage_m3865(L_9, _stringLiteral335, __this, 1, /*hidden argument*/NULL);
		GameObject_t30 * L_10 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SendMessage_m3865(L_10, _stringLiteral336, __this, 1, /*hidden argument*/NULL);
	}

IL_007e:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onChanged()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral336;
extern "C" void SimplePanGesture_onChanged_m3475 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral336 = il2cpp_codegen_string_literal_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onChanged_m3361(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___pannedInvoker_36);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___pannedInvoker_36);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		bool L_3 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_4 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_6 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SendMessage_m3865(L_6, _stringLiteral336, __this, 1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onRecognized()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral337;
extern "C" void SimplePanGesture_onRecognized_m3476 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral337 = il2cpp_codegen_string_literal_from_index(337);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onRecognized_m3362(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___panCompletedInvoker_37);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___panCompletedInvoker_37);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		bool L_3 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_4 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_6 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SendMessage_m3865(L_6, _stringLiteral337, __this, 1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onFailed()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral337;
extern "C" void SimplePanGesture_onFailed_m3477 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral337 = il2cpp_codegen_string_literal_from_index(337);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onFailed_m3363(__this, /*hidden argument*/NULL);
		int32_t L_0 = Gesture_get_PreviousState_m3318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___panCompletedInvoker_37);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		EventHandler_1_t241 * L_2 = (__this->___panCompletedInvoker_37);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_3 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m3864(L_2, __this, L_3, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_002d:
	{
		bool L_4 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_5 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m268(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_7 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SendMessage_m3865(L_7, _stringLiteral337, __this, 1, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onCancelled()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral337;
extern "C" void SimplePanGesture_onCancelled_m3478 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral337 = il2cpp_codegen_string_literal_from_index(337);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onCancelled_m3364(__this, /*hidden argument*/NULL);
		int32_t L_0 = Gesture_get_PreviousState_m3318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___panCompletedInvoker_37);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		EventHandler_1_t241 * L_2 = (__this->___panCompletedInvoker_37);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_3 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m3864(L_2, __this, L_3, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_002d:
	{
		bool L_4 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_5 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m268(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_7 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SendMessage_m3865(L_7, _stringLiteral337, __this, 1, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::reset()
extern "C" void SimplePanGesture_reset_m3479 (SimplePanGesture_t612 * __this, const MethodInfo* method)
{
	{
		Transform2DGestureBase_reset_m3556(__this, /*hidden argument*/NULL);
		Vector3_t28  L_0 = Vector3_get_zero_m312(NULL /*static, unused*/, /*hidden argument*/NULL);
		SimplePanGesture_set_WorldDeltaPosition_m3469(__this, L_0, /*hidden argument*/NULL);
		Vector2_t85  L_1 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___movementBuffer_39 = L_1;
		__this->___isMoving_40 = 0;
		return;
	}
}
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::.ctor()
// TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_TwoPointTransform2DGMethodDeclarations.h"
extern "C" void SimpleRotateGesture__ctor_m3480 (SimpleRotateGesture_t614 * __this, const MethodInfo* method)
{
	{
		__this->___rotationThreshold_43 = (3.0f);
		TwoPointTransform2DGestureBase__ctor_m3558(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::add_RotateStarted(System.EventHandler`1<System.EventArgs>)
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleRotateGesture_add_RotateStarted_m3481 (SimpleRotateGesture_t614 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___rotateStartedInvoker_40);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___rotateStartedInvoker_40 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::remove_RotateStarted(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleRotateGesture_remove_RotateStarted_m3482 (SimpleRotateGesture_t614 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___rotateStartedInvoker_40);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___rotateStartedInvoker_40 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::add_Rotated(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleRotateGesture_add_Rotated_m3483 (SimpleRotateGesture_t614 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___rotatedInvoker_41);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___rotatedInvoker_41 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::remove_Rotated(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleRotateGesture_remove_Rotated_m3484 (SimpleRotateGesture_t614 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___rotatedInvoker_41);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___rotatedInvoker_41 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::add_RotateCompleted(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleRotateGesture_add_RotateCompleted_m3485 (SimpleRotateGesture_t614 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___rotateCompletedInvoker_42);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___rotateCompletedInvoker_42 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::remove_RotateCompleted(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleRotateGesture_remove_RotateCompleted_m3486 (SimpleRotateGesture_t614 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___rotateCompletedInvoker_42);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___rotateCompletedInvoker_42 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Single TouchScript.Gestures.Simple.SimpleRotateGesture::get_RotationThreshold()
extern "C" float SimpleRotateGesture_get_RotationThreshold_m3487 (SimpleRotateGesture_t614 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___rotationThreshold_43);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::set_RotationThreshold(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void SimpleRotateGesture_set_RotationThreshold_m3488 (SimpleRotateGesture_t614 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___rotationThreshold_43 = L_0;
		return;
	}
}
// System.Single TouchScript.Gestures.Simple.SimpleRotateGesture::get_DeltaRotation()
extern "C" float SimpleRotateGesture_get_DeltaRotation_m3489 (SimpleRotateGesture_t614 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CDeltaRotationU3Ek__BackingField_46);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::set_DeltaRotation(System.Single)
extern "C" void SimpleRotateGesture_set_DeltaRotation_m3490 (SimpleRotateGesture_t614 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CDeltaRotationU3Ek__BackingField_46 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TouchScript.Gestures.Simple.SimpleRotateGesture::get_RotationAxis()
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
extern "C" Vector3_t28  SimpleRotateGesture_get_RotationAxis_m3491 (SimpleRotateGesture_t614 * __this, const MethodInfo* method)
{
	{
		Plane_t554 * L_0 = &(((Transform2DGestureBase_t620 *)__this)->___worldTransformPlane_29);
		Vector3_t28  L_1 = Plane_get_normal_m3877(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// TouchScript.Gestures.Simple.Transform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBaMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// TouchScript.Gestures.Simple.SimpleRotateGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimpleRotateGestureMethodDeclarations.h"
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern "C" void SimpleRotateGesture_touchesMoved_m3492 (SimpleRotateGesture_t614 * __this, Object_t* ___touches, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	Vector3_t28  V_1 = {0};
	float V_2 = 0.0f;
	Vector2_t85  V_3 = {0};
	Vector2_t85  V_4 = {0};
	Vector2_t85  V_5 = {0};
	Vector2_t85  V_6 = {0};
	Vector2_t85  V_7 = {0};
	Vector3_t28  V_8 = {0};
	Vector3_t28  V_9 = {0};
	Vector3_t28  V_10 = {0};
	Vector3_t28  V_11 = {0};
	Vector3_t28  V_12 = {0};
	Vector3_t28  V_13 = {0};
	Vector2_t85  V_14 = {0};
	Vector2_t85  V_15 = {0};
	float V_16 = 0.0f;
	Plane_t554  V_17 = {0};
	int32_t V_18 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::gotEnoughTouches() */, __this);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Object_t* L_1 = ___touches;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t* >::Invoke(35 /* System.Boolean TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::relevantTouches(System.Collections.Generic.IList`1<TouchScript.ITouch>) */, __this, L_1);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		V_2 = (0.0f);
		Vector2_t85  L_3 = (Vector2_t85 )VirtFuncInvoker1< Vector2_t85 , int32_t >::Invoke(36 /* UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointScreenPosition(System.Int32) */, __this, 0);
		V_3 = L_3;
		Vector2_t85  L_4 = (Vector2_t85 )VirtFuncInvoker1< Vector2_t85 , int32_t >::Invoke(36 /* UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointScreenPosition(System.Int32) */, __this, 1);
		V_4 = L_4;
		Vector2_t85  L_5 = V_4;
		Vector2_t85  L_6 = V_3;
		Vector2_t85  L_7 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_5 = L_7;
		float L_8 = Vector2_get_sqrMagnitude_m1156((&V_5), /*hidden argument*/NULL);
		float L_9 = (((TwoPointTransform2DGestureBase_t621 *)__this)->___minPixelDistanceSquared_34);
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_004d;
		}
	}
	{
		return;
	}

IL_004d:
	{
		Object_t* L_10 = ___touches;
		Transform2DGestureBase_touchesMoved_m3553(__this, L_10, /*hidden argument*/NULL);
		Vector2_t85  L_11 = (Vector2_t85 )VirtFuncInvoker1< Vector2_t85 , int32_t >::Invoke(37 /* UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointPreviousScreenPosition(System.Int32) */, __this, 0);
		V_6 = L_11;
		Vector2_t85  L_12 = (Vector2_t85 )VirtFuncInvoker1< Vector2_t85 , int32_t >::Invoke(37 /* UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointPreviousScreenPosition(System.Int32) */, __this, 1);
		V_7 = L_12;
		TouchLayer_t624 * L_13 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_14 = V_6;
		Plane_t554  L_15 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t28  L_16 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_13, L_14, L_15);
		V_8 = L_16;
		TouchLayer_t624 * L_17 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_18 = V_7;
		Plane_t554  L_19 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t28  L_20 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_17, L_18, L_19);
		V_9 = L_20;
		TouchLayer_t624 * L_21 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_22 = V_3;
		Plane_t554  L_23 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t28  L_24 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_21, L_22, L_23);
		V_10 = L_24;
		TouchLayer_t624 * L_25 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_26 = V_4;
		Plane_t554  L_27 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t28  L_28 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_25, L_26, L_27);
		V_11 = L_28;
		Vector3_t28  L_29 = V_11;
		Vector3_t28  L_30 = V_10;
		Vector3_t28  L_31 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		V_12 = L_31;
		Vector3_t28  L_32 = V_9;
		Vector3_t28  L_33 = V_8;
		Vector3_t28  L_34 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		V_13 = L_34;
		Vector2_t85  L_35 = V_6;
		Vector2_t85  L_36 = V_7;
		Vector2_t85  L_37 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector2_t85  L_38 = Vector2_op_Multiply_m1117(NULL /*static, unused*/, L_37, (0.5f), /*hidden argument*/NULL);
		V_14 = L_38;
		Vector2_t85  L_39 = V_3;
		Vector2_t85  L_40 = V_4;
		Vector2_t85  L_41 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		Vector2_t85  L_42 = Vector2_op_Multiply_m1117(NULL /*static, unused*/, L_41, (0.5f), /*hidden argument*/NULL);
		V_15 = L_42;
		Vector3_t28  L_43 = V_13;
		Vector3_t28  L_44 = V_12;
		float L_45 = Vector3_Angle_m338(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		V_16 = L_45;
		Vector3_t28  L_46 = V_13;
		Vector3_t28  L_47 = V_12;
		Vector3_t28  L_48 = Vector3_Cross_m3878(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/NULL);
		Plane_t554  L_49 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		V_17 = L_49;
		Vector3_t28  L_50 = Plane_get_normal_m3877((&V_17), /*hidden argument*/NULL);
		float L_51 = Vector3_Dot_m334(NULL /*static, unused*/, L_48, L_50, /*hidden argument*/NULL);
		if ((!(((float)L_51) < ((float)(0.0f)))))
		{
			goto IL_012f;
		}
	}
	{
		float L_52 = V_16;
		V_16 = ((-L_52));
	}

IL_012f:
	{
		bool L_53 = (__this->___isRotating_45);
		if (!L_53)
		{
			goto IL_0142;
		}
	}
	{
		float L_54 = V_16;
		V_2 = L_54;
		goto IL_017e;
	}

IL_0142:
	{
		float L_55 = (__this->___rotationBuffer_44);
		float L_56 = V_16;
		__this->___rotationBuffer_44 = ((float)((float)L_55+(float)L_56));
		float L_57 = (__this->___rotationBuffer_44);
		float L_58 = (__this->___rotationBuffer_44);
		float L_59 = SimpleRotateGesture_get_RotationThreshold_m3487(__this, /*hidden argument*/NULL);
		float L_60 = SimpleRotateGesture_get_RotationThreshold_m3487(__this, /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_57*(float)L_58))) >= ((float)((float)((float)L_59*(float)L_60))))))
		{
			goto IL_017e;
		}
	}
	{
		__this->___isRotating_45 = 1;
		float L_61 = (__this->___rotationBuffer_44);
		V_2 = L_61;
	}

IL_017e:
	{
		TouchLayer_t624 * L_62 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_63 = V_14;
		Plane_t554  L_64 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t28  L_65 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_62, L_63, L_64);
		V_0 = L_65;
		TouchLayer_t624 * L_66 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_67 = V_15;
		Plane_t554  L_68 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_66);
		Vector3_t28  L_69 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_66, L_67, L_68);
		V_1 = L_69;
		float L_70 = V_2;
		float L_71 = fabsf(L_70);
		if ((!(((double)(((double)L_71))) > ((double)(1.0E-05)))))
		{
			goto IL_0225;
		}
	}
	{
		int32_t L_72 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		V_18 = L_72;
		int32_t L_73 = V_18;
		if (L_73 == 0)
		{
			goto IL_01db;
		}
		if (L_73 == 1)
		{
			goto IL_01db;
		}
		if (L_73 == 2)
		{
			goto IL_01db;
		}
	}
	{
		goto IL_0225;
	}

IL_01db:
	{
		Vector2_t85  L_74 = V_15;
		((TwoPointTransform2DGestureBase_t621 *)__this)->___screenPosition_35 = L_74;
		Vector2_t85  L_75 = V_14;
		((TwoPointTransform2DGestureBase_t621 *)__this)->___previousScreenPosition_36 = L_75;
		Vector3_t28  L_76 = V_0;
		Transform2DGestureBase_set_PreviousWorldTransformCenter_m3546(__this, L_76, /*hidden argument*/NULL);
		Vector3_t28  L_77 = V_1;
		Transform2DGestureBase_set_WorldTransformCenter_m3548(__this, L_77, /*hidden argument*/NULL);
		float L_78 = V_2;
		SimpleRotateGesture_set_DeltaRotation_m3490(__this, L_78, /*hidden argument*/NULL);
		int32_t L_79 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if (L_79)
		{
			goto IL_0218;
		}
	}
	{
		Gesture_setState_m3353(__this, 1, /*hidden argument*/NULL);
		goto IL_0220;
	}

IL_0218:
	{
		Gesture_setState_m3353(__this, 2, /*hidden argument*/NULL);
	}

IL_0220:
	{
		goto IL_0225;
	}

IL_0225:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::reset()
extern "C" void SimpleRotateGesture_reset_m3493 (SimpleRotateGesture_t614 * __this, const MethodInfo* method)
{
	{
		TwoPointTransform2DGestureBase_reset_m3570(__this, /*hidden argument*/NULL);
		__this->___rotationBuffer_44 = (0.0f);
		__this->___isRotating_45 = 0;
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::onBegan()
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_genMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral338;
extern Il2CppCodeGenString* _stringLiteral339;
extern "C" void SimpleRotateGesture_onBegan_m3494 (SimpleRotateGesture_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral338 = il2cpp_codegen_string_literal_from_index(338);
		_stringLiteral339 = il2cpp_codegen_string_literal_from_index(339);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onBegan_m3360(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___rotateStartedInvoker_40);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___rotateStartedInvoker_40);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		EventHandler_1_t241 * L_3 = (__this->___rotatedInvoker_41);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		EventHandler_1_t241 * L_4 = (__this->___rotatedInvoker_41);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_5 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_4);
		EventHandler_1_Invoke_m3864(L_4, __this, L_5, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_003e:
	{
		bool L_6 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		GameObject_t30 * L_7 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_8 = Object_op_Inequality_m268(NULL /*static, unused*/, L_7, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007e;
		}
	}
	{
		GameObject_t30 * L_9 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SendMessage_m3865(L_9, _stringLiteral338, __this, 1, /*hidden argument*/NULL);
		GameObject_t30 * L_10 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SendMessage_m3865(L_10, _stringLiteral339, __this, 1, /*hidden argument*/NULL);
	}

IL_007e:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::onChanged()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral339;
extern "C" void SimpleRotateGesture_onChanged_m3495 (SimpleRotateGesture_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral339 = il2cpp_codegen_string_literal_from_index(339);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onChanged_m3361(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___rotatedInvoker_41);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___rotatedInvoker_41);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		bool L_3 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_4 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_6 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SendMessage_m3865(L_6, _stringLiteral339, __this, 1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::onRecognized()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral340;
extern "C" void SimpleRotateGesture_onRecognized_m3496 (SimpleRotateGesture_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral340 = il2cpp_codegen_string_literal_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onRecognized_m3362(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___rotateCompletedInvoker_42);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___rotateCompletedInvoker_42);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		bool L_3 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_4 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_6 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SendMessage_m3865(L_6, _stringLiteral340, __this, 1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::onFailed()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral340;
extern "C" void SimpleRotateGesture_onFailed_m3497 (SimpleRotateGesture_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral340 = il2cpp_codegen_string_literal_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onFailed_m3363(__this, /*hidden argument*/NULL);
		int32_t L_0 = Gesture_get_PreviousState_m3318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___rotateCompletedInvoker_42);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		EventHandler_1_t241 * L_2 = (__this->___rotateCompletedInvoker_42);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_3 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m3864(L_2, __this, L_3, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_002d:
	{
		bool L_4 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_5 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m268(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_7 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SendMessage_m3865(L_7, _stringLiteral340, __this, 1, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::onCancelled()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral340;
extern "C" void SimpleRotateGesture_onCancelled_m3498 (SimpleRotateGesture_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral340 = il2cpp_codegen_string_literal_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onCancelled_m3364(__this, /*hidden argument*/NULL);
		int32_t L_0 = Gesture_get_PreviousState_m3318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___rotateCompletedInvoker_42);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		EventHandler_1_t241 * L_2 = (__this->___rotateCompletedInvoker_42);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_3 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m3864(L_2, __this, L_3, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_002d:
	{
		bool L_4 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_5 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m268(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_7 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SendMessage_m3865(L_7, _stringLiteral340, __this, 1, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleRotateGesture::restart()
extern "C" void SimpleRotateGesture_restart_m3499 (SimpleRotateGesture_t614 * __this, const MethodInfo* method)
{
	{
		TwoPointTransform2DGestureBase_restart_m3568(__this, /*hidden argument*/NULL);
		SimpleRotateGesture_set_DeltaRotation_m3490(__this, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::.ctor()
// TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_TwoPointTransform2DGMethodDeclarations.h"
extern "C" void SimpleScaleGesture__ctor_m3500 (SimpleScaleGesture_t616 * __this, const MethodInfo* method)
{
	{
		__this->___scalingThreshold_43 = (0.5f);
		TwoPointTransform2DGestureBase__ctor_m3558(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::add_ScaleStarted(System.EventHandler`1<System.EventArgs>)
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleScaleGesture_add_ScaleStarted_m3501 (SimpleScaleGesture_t616 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___scaleStartedInvoker_40);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___scaleStartedInvoker_40 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::remove_ScaleStarted(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleScaleGesture_remove_ScaleStarted_m3502 (SimpleScaleGesture_t616 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___scaleStartedInvoker_40);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___scaleStartedInvoker_40 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::add_Scaled(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleScaleGesture_add_Scaled_m3503 (SimpleScaleGesture_t616 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___scaledInvoker_41);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___scaledInvoker_41 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::remove_Scaled(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleScaleGesture_remove_Scaled_m3504 (SimpleScaleGesture_t616 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___scaledInvoker_41);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___scaledInvoker_41 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::add_ScaleCompleted(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleScaleGesture_add_ScaleCompleted_m3505 (SimpleScaleGesture_t616 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___scaleCompletedInvoker_42);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___scaleCompletedInvoker_42 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::remove_ScaleCompleted(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void SimpleScaleGesture_remove_ScaleCompleted_m3506 (SimpleScaleGesture_t616 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___scaleCompletedInvoker_42);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___scaleCompletedInvoker_42 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Single TouchScript.Gestures.Simple.SimpleScaleGesture::get_ScalingThreshold()
extern "C" float SimpleScaleGesture_get_ScalingThreshold_m3507 (SimpleScaleGesture_t616 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___scalingThreshold_43);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::set_ScalingThreshold(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void SimpleScaleGesture_set_ScalingThreshold_m3508 (SimpleScaleGesture_t616 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___scalingThreshold_43 = L_0;
		return;
	}
}
// System.Single TouchScript.Gestures.Simple.SimpleScaleGesture::get_LocalDeltaScale()
extern "C" float SimpleScaleGesture_get_LocalDeltaScale_m3509 (SimpleScaleGesture_t616 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CLocalDeltaScaleU3Ek__BackingField_46);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::set_LocalDeltaScale(System.Single)
extern "C" void SimpleScaleGesture_set_LocalDeltaScale_m3510 (SimpleScaleGesture_t616 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CLocalDeltaScaleU3Ek__BackingField_46 = L_0;
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// TouchScript.Gestures.Simple.Transform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBaMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// TouchScript.Gestures.Simple.SimpleScaleGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimpleScaleGestureMethodDeclarations.h"
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void SimpleScaleGesture_touchesMoved_m3511 (SimpleScaleGesture_t616 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t28  V_0 = {0};
	Vector3_t28  V_1 = {0};
	float V_2 = 0.0f;
	Vector2_t85  V_3 = {0};
	Vector2_t85  V_4 = {0};
	Vector2_t85  V_5 = {0};
	Vector2_t85  V_6 = {0};
	Vector2_t85  V_7 = {0};
	Vector3_t28  V_8 = {0};
	Vector3_t28  V_9 = {0};
	Vector3_t28  V_10 = {0};
	Vector3_t28  V_11 = {0};
	Vector3_t28  V_12 = {0};
	Vector2_t85  V_13 = {0};
	Vector2_t85  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	Vector2_t85  V_20 = {0};
	Vector2_t85  V_21 = {0};
	float V_22 = 0.0f;
	Vector2_t85  V_23 = {0};
	Vector3_t28  V_24 = {0};
	int32_t V_25 = {0};
	float G_B10_0 = 0.0f;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::gotEnoughTouches() */, __this);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Object_t* L_1 = ___touches;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t* >::Invoke(35 /* System.Boolean TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::relevantTouches(System.Collections.Generic.IList`1<TouchScript.ITouch>) */, __this, L_1);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		V_2 = (1.0f);
		Vector2_t85  L_3 = (Vector2_t85 )VirtFuncInvoker1< Vector2_t85 , int32_t >::Invoke(36 /* UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointScreenPosition(System.Int32) */, __this, 0);
		V_3 = L_3;
		Vector2_t85  L_4 = (Vector2_t85 )VirtFuncInvoker1< Vector2_t85 , int32_t >::Invoke(36 /* UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointScreenPosition(System.Int32) */, __this, 1);
		V_4 = L_4;
		Vector2_t85  L_5 = V_4;
		Vector2_t85  L_6 = V_3;
		Vector2_t85  L_7 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_5 = L_7;
		float L_8 = Vector2_get_sqrMagnitude_m1156((&V_5), /*hidden argument*/NULL);
		float L_9 = (((TwoPointTransform2DGestureBase_t621 *)__this)->___minPixelDistanceSquared_34);
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_004d;
		}
	}
	{
		return;
	}

IL_004d:
	{
		Object_t* L_10 = ___touches;
		Transform2DGestureBase_touchesMoved_m3553(__this, L_10, /*hidden argument*/NULL);
		Vector2_t85  L_11 = (Vector2_t85 )VirtFuncInvoker1< Vector2_t85 , int32_t >::Invoke(37 /* UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointPreviousScreenPosition(System.Int32) */, __this, 0);
		V_6 = L_11;
		Vector2_t85  L_12 = (Vector2_t85 )VirtFuncInvoker1< Vector2_t85 , int32_t >::Invoke(37 /* UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointPreviousScreenPosition(System.Int32) */, __this, 1);
		V_7 = L_12;
		TouchLayer_t624 * L_13 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_14 = V_6;
		Plane_t554  L_15 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t28  L_16 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_13, L_14, L_15);
		V_8 = L_16;
		TouchLayer_t624 * L_17 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_18 = V_7;
		Plane_t554  L_19 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t28  L_20 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_17, L_18, L_19);
		V_9 = L_20;
		TouchLayer_t624 * L_21 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_22 = V_3;
		Plane_t554  L_23 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t28  L_24 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_21, L_22, L_23);
		V_10 = L_24;
		TouchLayer_t624 * L_25 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_26 = V_4;
		Plane_t554  L_27 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t28  L_28 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_25, L_26, L_27);
		V_11 = L_28;
		Vector3_t28  L_29 = V_11;
		Vector3_t28  L_30 = V_10;
		Vector3_t28  L_31 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		V_12 = L_31;
		Vector2_t85  L_32 = V_6;
		Vector2_t85  L_33 = V_7;
		Vector2_t85  L_34 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		Vector2_t85  L_35 = Vector2_op_Multiply_m1117(NULL /*static, unused*/, L_34, (0.5f), /*hidden argument*/NULL);
		V_13 = L_35;
		Vector2_t85  L_36 = V_3;
		Vector2_t85  L_37 = V_4;
		Vector2_t85  L_38 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		Vector2_t85  L_39 = Vector2_op_Multiply_m1117(NULL /*static, unused*/, L_38, (0.5f), /*hidden argument*/NULL);
		V_14 = L_39;
		bool L_40 = (__this->___isScaling_45);
		if (!L_40)
		{
			goto IL_0129;
		}
	}
	{
		Vector3_t28  L_41 = V_9;
		Vector3_t28  L_42 = V_8;
		float L_43 = Vector3_Distance_m2744(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		V_15 = L_43;
		float L_44 = V_15;
		if ((!(((float)L_44) > ((float)(0.0f)))))
		{
			goto IL_011e;
		}
	}
	{
		float L_45 = Vector3_get_magnitude_m337((&V_12), /*hidden argument*/NULL);
		float L_46 = V_15;
		G_B10_0 = ((float)((float)L_45/(float)L_46));
		goto IL_0123;
	}

IL_011e:
	{
		G_B10_0 = (1.0f);
	}

IL_0123:
	{
		V_2 = G_B10_0;
		goto IL_0200;
	}

IL_0129:
	{
		Vector2_t85  L_47 = V_6;
		Vector2_t85  L_48 = V_7;
		float L_49 = Vector2_Distance_m3879(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = Vector2_get_magnitude_m3863((&V_5), /*hidden argument*/NULL);
		V_17 = L_50;
		float L_51 = V_17;
		float L_52 = V_16;
		V_18 = ((float)((float)L_51-(float)L_52));
		float L_53 = (__this->___scalingBuffer_44);
		float L_54 = V_18;
		__this->___scalingBuffer_44 = ((float)((float)L_53+(float)L_54));
		float L_55 = SimpleScaleGesture_get_ScalingThreshold_m3507(__this, /*hidden argument*/NULL);
		Object_t * L_56 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		float L_57 = (float)InterfaceFuncInvoker0< float >::Invoke(16 /* System.Single TouchScript.ITouchManager::get_DotsPerCentimeter() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_56);
		V_19 = ((float)((float)L_55*(float)L_57));
		float L_58 = (__this->___scalingBuffer_44);
		float L_59 = (__this->___scalingBuffer_44);
		float L_60 = V_19;
		float L_61 = V_19;
		if ((!(((float)((float)((float)L_58*(float)L_59))) >= ((float)((float)((float)L_60*(float)L_61))))))
		{
			goto IL_0200;
		}
	}
	{
		__this->___isScaling_45 = 1;
		Vector2_t85  L_62 = V_7;
		Vector2_t85  L_63 = V_6;
		Vector2_t85  L_64 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_62, L_63, /*hidden argument*/NULL);
		V_21 = L_64;
		Vector2_t85  L_65 = Vector2_get_normalized_m3880((&V_21), /*hidden argument*/NULL);
		V_20 = L_65;
		float L_66 = V_17;
		float L_67 = (__this->___scalingBuffer_44);
		V_22 = ((float)((float)((float)((float)L_66-(float)L_67))*(float)(0.5f)));
		Vector2_t85  L_68 = V_20;
		float L_69 = V_22;
		Vector2_t85  L_70 = Vector2_op_Multiply_m1117(NULL /*static, unused*/, L_68, L_69, /*hidden argument*/NULL);
		V_23 = L_70;
		float L_71 = Vector3_get_magnitude_m337((&V_12), /*hidden argument*/NULL);
		TouchLayer_t624 * L_72 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_73 = V_13;
		Vector2_t85  L_74 = V_23;
		Vector2_t85  L_75 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_73, L_74, /*hidden argument*/NULL);
		Plane_t554  L_76 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_72);
		Vector3_t28  L_77 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_72, L_75, L_76);
		TouchLayer_t624 * L_78 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_79 = V_13;
		Vector2_t85  L_80 = V_23;
		Vector2_t85  L_81 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_79, L_80, /*hidden argument*/NULL);
		Plane_t554  L_82 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_78);
		Vector3_t28  L_83 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_78, L_81, L_82);
		Vector3_t28  L_84 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_77, L_83, /*hidden argument*/NULL);
		V_24 = L_84;
		float L_85 = Vector3_get_magnitude_m337((&V_24), /*hidden argument*/NULL);
		V_2 = ((float)((float)L_71/(float)L_85));
	}

IL_0200:
	{
		TouchLayer_t624 * L_86 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_87 = V_13;
		Plane_t554  L_88 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_86);
		Vector3_t28  L_89 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_86, L_87, L_88);
		V_0 = L_89;
		TouchLayer_t624 * L_90 = (((Transform2DGestureBase_t620 *)__this)->___projectionLayer_28);
		Vector2_t85  L_91 = V_14;
		Plane_t554  L_92 = Transform2DGestureBase_get_WorldTransformPlane_m3549(__this, /*hidden argument*/NULL);
		NullCheck(L_90);
		Vector3_t28  L_93 = (Vector3_t28 )VirtFuncInvoker2< Vector3_t28 , Vector2_t85 , Plane_t554  >::Invoke(6 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane) */, L_90, L_91, L_92);
		V_1 = L_93;
		float L_94 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_95 = fabsf(((float)((float)L_94-(float)(1.0f))));
		if ((!(((double)(((double)L_95))) > ((double)(1.0E-05)))))
		{
			goto IL_02ad;
		}
	}
	{
		int32_t L_96 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		V_25 = L_96;
		int32_t L_97 = V_25;
		if (L_97 == 0)
		{
			goto IL_0263;
		}
		if (L_97 == 1)
		{
			goto IL_0263;
		}
		if (L_97 == 2)
		{
			goto IL_0263;
		}
	}
	{
		goto IL_02ad;
	}

IL_0263:
	{
		Vector2_t85  L_98 = V_14;
		((TwoPointTransform2DGestureBase_t621 *)__this)->___screenPosition_35 = L_98;
		Vector2_t85  L_99 = V_13;
		((TwoPointTransform2DGestureBase_t621 *)__this)->___previousScreenPosition_36 = L_99;
		Vector3_t28  L_100 = V_0;
		Transform2DGestureBase_set_PreviousWorldTransformCenter_m3546(__this, L_100, /*hidden argument*/NULL);
		Vector3_t28  L_101 = V_1;
		Transform2DGestureBase_set_WorldTransformCenter_m3548(__this, L_101, /*hidden argument*/NULL);
		float L_102 = V_2;
		SimpleScaleGesture_set_LocalDeltaScale_m3510(__this, L_102, /*hidden argument*/NULL);
		int32_t L_103 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if (L_103)
		{
			goto IL_02a0;
		}
	}
	{
		Gesture_setState_m3353(__this, 1, /*hidden argument*/NULL);
		goto IL_02a8;
	}

IL_02a0:
	{
		Gesture_setState_m3353(__this, 2, /*hidden argument*/NULL);
	}

IL_02a8:
	{
		goto IL_02ad;
	}

IL_02ad:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::onBegan()
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_genMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral341;
extern Il2CppCodeGenString* _stringLiteral342;
extern "C" void SimpleScaleGesture_onBegan_m3512 (SimpleScaleGesture_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral341 = il2cpp_codegen_string_literal_from_index(341);
		_stringLiteral342 = il2cpp_codegen_string_literal_from_index(342);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onBegan_m3360(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___scaleStartedInvoker_40);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___scaleStartedInvoker_40);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		EventHandler_1_t241 * L_3 = (__this->___scaledInvoker_41);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		EventHandler_1_t241 * L_4 = (__this->___scaledInvoker_41);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_5 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_4);
		EventHandler_1_Invoke_m3864(L_4, __this, L_5, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_003e:
	{
		bool L_6 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		GameObject_t30 * L_7 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_8 = Object_op_Inequality_m268(NULL /*static, unused*/, L_7, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007e;
		}
	}
	{
		GameObject_t30 * L_9 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SendMessage_m3865(L_9, _stringLiteral341, __this, 1, /*hidden argument*/NULL);
		GameObject_t30 * L_10 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SendMessage_m3865(L_10, _stringLiteral342, __this, 1, /*hidden argument*/NULL);
	}

IL_007e:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::onChanged()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral342;
extern "C" void SimpleScaleGesture_onChanged_m3513 (SimpleScaleGesture_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral342 = il2cpp_codegen_string_literal_from_index(342);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onChanged_m3361(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___scaledInvoker_41);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___scaledInvoker_41);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		bool L_3 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_4 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_6 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SendMessage_m3865(L_6, _stringLiteral342, __this, 1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::onRecognized()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral343;
extern "C" void SimpleScaleGesture_onRecognized_m3514 (SimpleScaleGesture_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral343 = il2cpp_codegen_string_literal_from_index(343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onRecognized_m3362(__this, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___scaleCompletedInvoker_42);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___scaleCompletedInvoker_42);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_0022:
	{
		bool L_3 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_4 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t30 * L_6 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SendMessage_m3865(L_6, _stringLiteral343, __this, 1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::onFailed()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral343;
extern "C" void SimpleScaleGesture_onFailed_m3515 (SimpleScaleGesture_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral343 = il2cpp_codegen_string_literal_from_index(343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onFailed_m3363(__this, /*hidden argument*/NULL);
		int32_t L_0 = Gesture_get_PreviousState_m3318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___scaleCompletedInvoker_42);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		EventHandler_1_t241 * L_2 = (__this->___scaleCompletedInvoker_42);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_3 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m3864(L_2, __this, L_3, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_002d:
	{
		bool L_4 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_5 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m268(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_7 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SendMessage_m3865(L_7, _stringLiteral343, __this, 1, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::onCancelled()
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral343;
extern "C" void SimpleScaleGesture_onCancelled_m3516 (SimpleScaleGesture_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral343 = il2cpp_codegen_string_literal_from_index(343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onCancelled_m3364(__this, /*hidden argument*/NULL);
		int32_t L_0 = Gesture_get_PreviousState_m3318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___scaleCompletedInvoker_42);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		EventHandler_1_t241 * L_2 = (__this->___scaleCompletedInvoker_42);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_3 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m3864(L_2, __this, L_3, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_002d:
	{
		bool L_4 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_5 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m268(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_7 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SendMessage_m3865(L_7, _stringLiteral343, __this, 1, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::reset()
extern "C" void SimpleScaleGesture_reset_m3517 (SimpleScaleGesture_t616 * __this, const MethodInfo* method)
{
	{
		TwoPointTransform2DGestureBase_reset_m3570(__this, /*hidden argument*/NULL);
		__this->___scalingBuffer_44 = (0.0f);
		__this->___isScaling_45 = 0;
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.SimpleScaleGesture::restart()
extern "C" void SimpleScaleGesture_restart_m3518 (SimpleScaleGesture_t616 * __this, const MethodInfo* method)
{
	{
		TwoPointTransform2DGestureBase_restart_m3568(__this, /*hidden argument*/NULL);
		SimpleScaleGesture_set_LocalDeltaScale_m3510(__this, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Gestures.TapGesture/<wait>c__Iterator1
#include "TouchScript_TouchScript_Gestures_TapGesture_U3CwaitU3Ec__Ite.h"
// TouchScript.Gestures.TapGesture/<wait>c__Iterator1
#include "TouchScript_TouchScript_Gestures_TapGesture_U3CwaitU3Ec__IteMethodDeclarations.h"
// TouchScript.Gestures.TapGesture
#include "TouchScript_TouchScript_Gestures_TapGesture.h"
// TouchScript.Gestures.TapGesture
#include "TouchScript_TouchScript_Gestures_TapGestureMethodDeclarations.h"
// System.Void TouchScript.Gestures.TapGesture/<wait>c__Iterator1::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CwaitU3Ec__Iterator1__ctor_m3519 (U3CwaitU3Ec__Iterator1_t622 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object TouchScript.Gestures.TapGesture/<wait>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CwaitU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3520 (U3CwaitU3Ec__Iterator1_t622 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object TouchScript.Gestures.TapGesture/<wait>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CwaitU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3521 (U3CwaitU3Ec__Iterator1_t622 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean TouchScript.Gestures.TapGesture/<wait>c__Iterator1::MoveNext()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// TouchScript.Gestures.TapGesture
#include "TouchScript_TouchScript_Gestures_TapGestureMethodDeclarations.h"
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern "C" bool U3CwaitU3Ec__Iterator1_MoveNext_m3522 (U3CwaitU3Ec__Iterator1_t622 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___U24PC_1);
		V_0 = L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0050;
		}
	}
	{
		goto IL_0084;
	}

IL_0021:
	{
		float L_2 = Time_get_unscaledTime_m2718(NULL /*static, unused*/, /*hidden argument*/NULL);
		TapGesture_t247 * L_3 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_3);
		float L_4 = TapGesture_get_TimeLimit_m3527(L_3, /*hidden argument*/NULL);
		__this->___U3CtargetTimeU3E__0_0 = ((float)((float)L_2+(float)L_4));
		goto IL_0050;
	}

IL_003d:
	{
		__this->___U24current_2 = NULL;
		__this->___U24PC_1 = 1;
		goto IL_0086;
	}

IL_0050:
	{
		float L_5 = (__this->___U3CtargetTimeU3E__0_0);
		float L_6 = Time_get_unscaledTime_m2718(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((float)L_5) > ((float)L_6)))
		{
			goto IL_003d;
		}
	}
	{
		TapGesture_t247 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		int32_t L_8 = Gesture_get_State_m3316(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_007d;
		}
	}
	{
		TapGesture_t247 * L_9 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_9);
		Gesture_setState_m3353(L_9, 5, /*hidden argument*/NULL);
	}

IL_007d:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0084:
	{
		return 0;
	}

IL_0086:
	{
		return 1;
	}
}
// System.Void TouchScript.Gestures.TapGesture/<wait>c__Iterator1::Dispose()
extern "C" void U3CwaitU3Ec__Iterator1_Dispose_m3523 (U3CwaitU3Ec__Iterator1_t622 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void TouchScript.Gestures.TapGesture/<wait>c__Iterator1::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern "C" void U3CwaitU3Ec__Iterator1_Reset_m3524 (U3CwaitU3Ec__Iterator1_t622 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1075(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void TouchScript.Gestures.TapGesture::.ctor()
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern "C" void TapGesture__ctor_m3525 (TapGesture_t247 * __this, const MethodInfo* method)
{
	{
		__this->___numberOfTapsRequired_27 = 1;
		__this->___timeLimit_28 = (std::numeric_limits<float>::infinity());
		__this->___distanceLimit_29 = (std::numeric_limits<float>::infinity());
		Gesture__ctor_m3303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.TapGesture::add_Tapped(System.EventHandler`1<System.EventArgs>)
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void TapGesture_add_Tapped_m1189 (TapGesture_t247 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___tappedInvoker_26);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___tappedInvoker_26 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Gestures.TapGesture::remove_Tapped(System.EventHandler`1<System.EventArgs>)
extern TypeInfo* EventHandler_1_t241_il2cpp_TypeInfo_var;
extern "C" void TapGesture_remove_Tapped_m1190 (TapGesture_t247 * __this, EventHandler_1_t241 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t241 * L_0 = (__this->___tappedInvoker_26);
		EventHandler_1_t241 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___tappedInvoker_26 = ((EventHandler_1_t241 *)CastclassSealed(L_2, EventHandler_1_t241_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 TouchScript.Gestures.TapGesture::get_NumberOfTapsRequired()
extern "C" int32_t TapGesture_get_NumberOfTapsRequired_m1208 (TapGesture_t247 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___numberOfTapsRequired_27);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.TapGesture::set_NumberOfTapsRequired(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void TapGesture_set_NumberOfTapsRequired_m3526 (TapGesture_t247 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___numberOfTapsRequired_27 = 1;
		goto IL_001a;
	}

IL_0013:
	{
		int32_t L_1 = ___value;
		__this->___numberOfTapsRequired_27 = L_1;
	}

IL_001a:
	{
		return;
	}
}
// System.Single TouchScript.Gestures.TapGesture::get_TimeLimit()
extern "C" float TapGesture_get_TimeLimit_m3527 (TapGesture_t247 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___timeLimit_28);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.TapGesture::set_TimeLimit(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void TapGesture_set_TimeLimit_m3528 (TapGesture_t247 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___timeLimit_28 = L_0;
		return;
	}
}
// System.Single TouchScript.Gestures.TapGesture::get_DistanceLimit()
extern "C" float TapGesture_get_DistanceLimit_m3529 (TapGesture_t247 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___distanceLimit_29);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.TapGesture::set_DistanceLimit(System.Single)
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void TapGesture_set_DistanceLimit_m3530 (TapGesture_t247 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		__this->___distanceLimit_29 = L_0;
		float L_1 = (__this->___distanceLimit_29);
		Object_t * L_2 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = (float)InterfaceFuncInvoker0< float >::Invoke(16 /* System.Single TouchScript.ITouchManager::get_DotsPerCentimeter() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_4 = powf(((float)((float)L_1*(float)L_3)), (2.0f));
		__this->___distanceLimitInPixelsSquared_30 = L_4;
		return;
	}
}
// System.Void TouchScript.Gestures.TapGesture::OnEnable()
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void TapGesture_OnEnable_m3531 (TapGesture_t247 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_OnEnable_m3342(__this, /*hidden argument*/NULL);
		float L_0 = (__this->___distanceLimit_29);
		Object_t * L_1 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2 = (float)InterfaceFuncInvoker0< float >::Invoke(16 /* System.Single TouchScript.ITouchManager::get_DotsPerCentimeter() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_3 = powf(((float)((float)L_0*(float)L_2)), (2.0f));
		__this->___distanceLimitInPixelsSquared_30 = L_3;
		return;
	}
}
// System.Void TouchScript.Gestures.TapGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t638_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral327;
extern "C" void TapGesture_touchesBegan_m3532 (TapGesture_t247 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		IList_1_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		_stringLiteral327 = il2cpp_codegen_string_literal_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesBegan_m3354(__this, L_0, /*hidden argument*/NULL);
		List_1_t592 * L_1 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_1);
		Object_t* L_3 = ___touches;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_5 = (__this->___tapsDone_31);
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		Object_t* L_6 = ___touches;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_6, 0);
		NullCheck(L_7);
		Vector2_t85  L_8 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_7);
		__this->___startPosition_32 = L_8;
		float L_9 = (__this->___timeLimit_28);
		if ((!(((float)L_9) < ((float)(std::numeric_limits<float>::infinity())))))
		{
			goto IL_0056;
		}
	}
	{
		MonoBehaviour_StartCoroutine_m1234(__this, _stringLiteral327, /*hidden argument*/NULL);
	}

IL_0056:
	{
		goto IL_00ef;
	}

IL_005b:
	{
		int32_t L_10 = (__this->___tapsDone_31);
		int32_t L_11 = (__this->___numberOfTapsRequired_27);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_00ad;
		}
	}
	{
		Gesture_setState_m3353(__this, 0, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(25 /* System.Void TouchScript.Gestures.Gesture::reset() */, __this);
		Object_t* L_12 = ___touches;
		NullCheck(L_12);
		Object_t * L_13 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_12, 0);
		NullCheck(L_13);
		Vector2_t85  L_14 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_13);
		__this->___startPosition_32 = L_14;
		float L_15 = (__this->___timeLimit_28);
		if ((!(((float)L_15) < ((float)(std::numeric_limits<float>::infinity())))))
		{
			goto IL_00a8;
		}
	}
	{
		MonoBehaviour_StartCoroutine_m1234(__this, _stringLiteral327, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		goto IL_00ef;
	}

IL_00ad:
	{
		float L_16 = (__this->___distanceLimit_29);
		if ((!(((float)L_16) < ((float)(std::numeric_limits<float>::infinity())))))
		{
			goto IL_00ef;
		}
	}
	{
		Object_t* L_17 = ___touches;
		NullCheck(L_17);
		Object_t * L_18 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_17, 0);
		NullCheck(L_18);
		Vector2_t85  L_19 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_18);
		Vector2_t85  L_20 = (__this->___startPosition_32);
		Vector2_t85  L_21 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		float L_22 = Vector2_get_sqrMagnitude_m1156((&V_0), /*hidden argument*/NULL);
		float L_23 = (__this->___distanceLimitInPixelsSquared_30);
		if ((!(((float)L_22) > ((float)L_23))))
		{
			goto IL_00ef;
		}
	}
	{
		Gesture_setState_m3353(__this, 5, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.TapGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void TapGesture_touchesMoved_m3533 (TapGesture_t247 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesMoved_m3355(__this, L_0, /*hidden argument*/NULL);
		float L_1 = (__this->___distanceLimit_29);
		if ((!(((float)L_1) < ((float)(std::numeric_limits<float>::infinity())))))
		{
			goto IL_0057;
		}
	}
	{
		Vector2_t85  L_2 = (__this->___totalMovement_33);
		Vector2_t85  L_3 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(4 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition() */, __this);
		Vector2_t85  L_4 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(5 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousScreenPosition() */, __this);
		Vector2_t85  L_5 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Vector2_t85  L_6 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		__this->___totalMovement_33 = L_6;
		Vector2_t85 * L_7 = &(__this->___totalMovement_33);
		float L_8 = Vector2_get_sqrMagnitude_m1156(L_7, /*hidden argument*/NULL);
		float L_9 = (__this->___distanceLimitInPixelsSquared_30);
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_0057;
		}
	}
	{
		Gesture_setState_m3353(__this, 5, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.TapGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// TouchScript.TouchManager
#include "TouchScript_TouchScript_TouchManagerMethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern "C" void TapGesture_touchesEnded_m3534 (TapGesture_t247 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesEnded_m3356(__this, L_0, /*hidden argument*/NULL);
		List_1_t592 * L_1 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Vector2_t85  L_3 = (Vector2_t85 )VirtFuncInvoker0< Vector2_t85  >::Invoke(4 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		bool L_4 = TouchManager_IsInvalidPosition_m3704(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Gesture_setState_m3353(__this, 5, /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_0034:
	{
		int32_t L_5 = (__this->___tapsDone_31);
		__this->___tapsDone_31 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = (__this->___tapsDone_31);
		int32_t L_7 = (__this->___numberOfTapsRequired_27);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_005b;
		}
	}
	{
		Gesture_setState_m3353(__this, 3, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.TapGesture::touchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void TapGesture_touchesCancelled_m3535 (TapGesture_t247 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesCancelled_m3357(__this, L_0, /*hidden argument*/NULL);
		Gesture_setState_m3353(__this, 5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.TapGesture::onRecognized()
// System.EventHandler`1<System.EventArgs>
#include "mscorlib_System_EventHandler_1_genMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3864_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral327;
extern Il2CppCodeGenString* _stringLiteral344;
extern "C" void TapGesture_onRecognized_m3536 (TapGesture_t247 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		EventHandler_1_Invoke_m3864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		_stringLiteral327 = il2cpp_codegen_string_literal_from_index(327);
		_stringLiteral344 = il2cpp_codegen_string_literal_from_index(344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_onRecognized_m3362(__this, /*hidden argument*/NULL);
		MonoBehaviour_StopCoroutine_m1230(__this, _stringLiteral327, /*hidden argument*/NULL);
		EventHandler_1_t241 * L_0 = (__this->___tappedInvoker_26);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		EventHandler_1_t241 * L_1 = (__this->___tappedInvoker_26);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m3864(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m3864_MethodInfo_var);
	}

IL_002d:
	{
		bool L_3 = Gesture_get_UseSendMessage_m3310(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_4 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t30 * L_6 = Gesture_get_SendMessageTarget_m3314(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SendMessage_m3865(L_6, _stringLiteral344, __this, 1, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.TapGesture::reset()
extern Il2CppCodeGenString* _stringLiteral327;
extern "C" void TapGesture_reset_m3537 (TapGesture_t247 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral327 = il2cpp_codegen_string_literal_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_reset_m3358(__this, /*hidden argument*/NULL);
		Vector2_t85  L_0 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___totalMovement_33 = L_0;
		MonoBehaviour_StopCoroutine_m1230(__this, _stringLiteral327, /*hidden argument*/NULL);
		__this->___tapsDone_31 = 0;
		return;
	}
}
// System.Boolean TouchScript.Gestures.TapGesture::shouldCacheTouchPosition(TouchScript.ITouch)
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" bool TapGesture_shouldCacheTouchPosition_m3538 (TapGesture_t247 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		NullCheck(L_0);
		Vector2_t85  L_1 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Vector2_t85  >::Invoke(9 /* System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(UnityEngine.Vector2) */, __this, L_1);
		return L_2;
	}
}
// System.Collections.IEnumerator TouchScript.Gestures.TapGesture::wait()
// TouchScript.Gestures.TapGesture/<wait>c__Iterator1
#include "TouchScript_TouchScript_Gestures_TapGesture_U3CwaitU3Ec__IteMethodDeclarations.h"
extern TypeInfo* U3CwaitU3Ec__Iterator1_t622_il2cpp_TypeInfo_var;
extern "C" Object_t * TapGesture_wait_m3539 (TapGesture_t247 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CwaitU3Ec__Iterator1_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	U3CwaitU3Ec__Iterator1_t622 * V_0 = {0};
	{
		U3CwaitU3Ec__Iterator1_t622 * L_0 = (U3CwaitU3Ec__Iterator1_t622 *)il2cpp_codegen_object_new (U3CwaitU3Ec__Iterator1_t622_il2cpp_TypeInfo_var);
		U3CwaitU3Ec__Iterator1__ctor_m3519(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CwaitU3Ec__Iterator1_t622 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CwaitU3Ec__Iterator1_t622 * L_2 = V_0;
		return L_2;
	}
}
// TouchScript.Gestures.Simple.Transform2DGestureBase/ProjectionType
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBa_0.h"
// TouchScript.Gestures.Simple.Transform2DGestureBase/ProjectionType
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBa_0MethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
struct Collider_t534;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
#define Component_GetComponent_TisCollider_t534_m3882(__this, method) (( Collider_t534 * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::.ctor()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern "C" void Transform2DGestureBase__ctor_m3540 (Transform2DGestureBase_t620 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Vector3_get_forward_m310(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___projectionNormal_26 = L_0;
		Gesture__ctor_m3303(__this, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Gestures.Simple.Transform2DGestureBase/ProjectionType TouchScript.Gestures.Simple.Transform2DGestureBase::get_Projection()
extern "C" int32_t Transform2DGestureBase_get_Projection_m3541 (Transform2DGestureBase_t620 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___projection_25);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::set_Projection(TouchScript.Gestures.Simple.Transform2DGestureBase/ProjectionType)
// TouchScript.Gestures.Simple.Transform2DGestureBase/ProjectionType
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBa_0.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// TouchScript.Gestures.Simple.Transform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBaMethodDeclarations.h"
extern "C" void Transform2DGestureBase_set_Projection_m3542 (Transform2DGestureBase_t620 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___projection_25);
		int32_t L_1 = ___value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = ___value;
		__this->___projection_25 = L_2;
		bool L_3 = Application_get_isPlaying_m2808(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		Transform2DGestureBase_updateProjectionPlane_m3557(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// UnityEngine.Vector3 TouchScript.Gestures.Simple.Transform2DGestureBase::get_ProjectionNormal()
extern "C" Vector3_t28  Transform2DGestureBase_get_ProjectionNormal_m3543 (Transform2DGestureBase_t620 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___projection_25);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		TouchLayer_t624 * L_1 = (__this->___projectionLayer_28);
		NullCheck(L_1);
		Vector3_t28  L_2 = (Vector3_t28 )VirtFuncInvoker0< Vector3_t28  >::Invoke(4 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::get_WorldProjectionNormal() */, L_1);
		return L_2;
	}

IL_0017:
	{
		Vector3_t28  L_3 = (__this->___projectionNormal_26);
		return L_3;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::set_ProjectionNormal(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void Transform2DGestureBase_set_ProjectionNormal_m3544 (Transform2DGestureBase_t620 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___projection_25);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		__this->___projection_25 = 1;
	}

IL_0012:
	{
		Vector3_Normalize_m408((&___value), /*hidden argument*/NULL);
		Vector3_t28  L_1 = (__this->___projectionNormal_26);
		Vector3_t28  L_2 = ___value;
		bool L_3 = Vector3_op_Equality_m3881(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		return;
	}

IL_002b:
	{
		Vector3_t28  L_4 = ___value;
		__this->___projectionNormal_26 = L_4;
		bool L_5 = Application_get_isPlaying_m2808(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		Transform2DGestureBase_updateProjectionPlane_m3557(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// UnityEngine.Vector3 TouchScript.Gestures.Simple.Transform2DGestureBase::get_PreviousWorldTransformCenter()
extern "C" Vector3_t28  Transform2DGestureBase_get_PreviousWorldTransformCenter_m3545 (Transform2DGestureBase_t620 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___U3CPreviousWorldTransformCenterU3Ek__BackingField_30);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::set_PreviousWorldTransformCenter(UnityEngine.Vector3)
extern "C" void Transform2DGestureBase_set_PreviousWorldTransformCenter_m3546 (Transform2DGestureBase_t620 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___value;
		__this->___U3CPreviousWorldTransformCenterU3Ek__BackingField_30 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TouchScript.Gestures.Simple.Transform2DGestureBase::get_WorldTransformCenter()
extern "C" Vector3_t28  Transform2DGestureBase_get_WorldTransformCenter_m3547 (Transform2DGestureBase_t620 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___U3CWorldTransformCenterU3Ek__BackingField_31);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::set_WorldTransformCenter(UnityEngine.Vector3)
extern "C" void Transform2DGestureBase_set_WorldTransformCenter_m3548 (Transform2DGestureBase_t620 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___value;
		__this->___U3CWorldTransformCenterU3Ek__BackingField_31 = L_0;
		return;
	}
}
// UnityEngine.Plane TouchScript.Gestures.Simple.Transform2DGestureBase::get_WorldTransformPlane()
extern "C" Plane_t554  Transform2DGestureBase_get_WorldTransformPlane_m3549 (Transform2DGestureBase_t620 * __this, const MethodInfo* method)
{
	{
		Plane_t554  L_0 = (__this->___worldTransformPlane_29);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::Awake()
extern TypeInfo* Plane_t554_il2cpp_TypeInfo_var;
extern "C" void Transform2DGestureBase_Awake_m3550 (Transform2DGestureBase_t620 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Plane_t554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	Plane_t554  V_0 = {0};
	{
		Gesture_Awake_m3341(__this, /*hidden argument*/NULL);
		Initobj (Plane_t554_il2cpp_TypeInfo_var, (&V_0));
		Plane_t554  L_0 = V_0;
		__this->___worldTransformPlane_29 = L_0;
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::OnEnable()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisCollider_t534_m3882_MethodInfo_var;
extern "C" void Transform2DGestureBase_OnEnable_m3551 (Transform2DGestureBase_t620 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCollider_t534_m3882_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484085);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_OnEnable_m3342(__this, /*hidden argument*/NULL);
		Collider_t534 * L_0 = Component_GetComponent_TisCollider_t534_m3882(__this, /*hidden argument*/Component_GetComponent_TisCollider_t534_m3882_MethodInfo_var);
		__this->___cachedCollider_27 = L_0;
		Transform2DGestureBase_updateProjectionPlane_m3557(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" void Transform2DGestureBase_touchesBegan_m3552 (Transform2DGestureBase_t620 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesMoved_m3355(__this, L_0, /*hidden argument*/NULL);
		Object_t* L_1 = ___touches;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_1);
		List_1_t592 * L_3 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_003a;
		}
	}
	{
		List_1_t592 * L_5 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_5, 0);
		NullCheck(L_6);
		TouchLayer_t624 * L_7 = (TouchLayer_t624 *)InterfaceFuncInvoker0< TouchLayer_t624 * >::Invoke(5 /* TouchScript.Layers.TouchLayer TouchScript.ITouch::get_Layer() */, ITouch_t257_il2cpp_TypeInfo_var, L_6);
		__this->___projectionLayer_28 = L_7;
		Transform2DGestureBase_updateProjectionPlane_m3557(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Transform2DGestureBase_touchesMoved_m3553 (Transform2DGestureBase_t620 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesMoved_m3355(__this, L_0, /*hidden argument*/NULL);
		Transform2DGestureBase_updateProjectionPlane_m3557(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Transform2DGestureBase_touchesEnded_m3554 (Transform2DGestureBase_t620 * __this, Object_t* ___touches, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesEnded_m3356(__this, L_0, /*hidden argument*/NULL);
		List_1_t592 * L_1 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003e;
	}

IL_0031:
	{
		Gesture_setState_m3353(__this, 3, /*hidden argument*/NULL);
		goto IL_003e;
	}

IL_003e:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::touchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void Transform2DGestureBase_touchesCancelled_m3555 (Transform2DGestureBase_t620 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___touches;
		Gesture_touchesCancelled_m3357(__this, L_0, /*hidden argument*/NULL);
		Object_t* L_1 = ___touches;
		VirtActionInvoker1< Object_t* >::Invoke(23 /* System.Void TouchScript.Gestures.Gesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>) */, __this, L_1);
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::reset()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern "C" void Transform2DGestureBase_reset_m3556 (Transform2DGestureBase_t620 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		Gesture_reset_m3358(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_0 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		Vector3_t28  L_1 = Vector2_op_Implicit_m1101(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Transform2DGestureBase_set_WorldTransformCenter_m3548(__this, L_1, /*hidden argument*/NULL);
		Vector2_t85  L_2 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		Vector3_t28  L_3 = Vector2_op_Implicit_m1101(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Transform2DGestureBase_set_PreviousWorldTransformCenter_m3546(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.Transform2DGestureBase::updateProjectionPlane()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
extern "C" void Transform2DGestureBase_updateProjectionPlane_m3557 (Transform2DGestureBase_t620 * __this, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	Bounds_t427  V_1 = {0};
	int32_t V_2 = {0};
	{
		bool L_0 = Application_get_isPlaying_m2808(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Collider_t534 * L_1 = (__this->___cachedCollider_27);
		bool L_2 = Object_op_Inequality_m268(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Collider_t534 * L_3 = (__this->___cachedCollider_27);
		NullCheck(L_3);
		Bounds_t427  L_4 = Collider_get_bounds_m3883(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t28  L_5 = Bounds_get_center_m3068((&V_1), /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0041;
	}

IL_0035:
	{
		Transform_t48 * L_6 = (((Gesture_t270 *)__this)->___cachedTransform_5);
		NullCheck(L_6);
		Vector3_t28  L_7 = Transform_get_position_m335(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0041:
	{
		int32_t L_8 = (__this->___projection_25);
		V_2 = L_8;
		int32_t L_9 = V_2;
		if (L_9 == 0)
		{
			goto IL_005f;
		}
		if (L_9 == 1)
		{
			goto IL_00ad;
		}
		if (L_9 == 2)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_00e6;
	}

IL_005f:
	{
		TouchLayer_t624 * L_10 = (__this->___projectionLayer_28);
		bool L_11 = Object_op_Equality_m295(NULL /*static, unused*/, L_10, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0091;
		}
	}
	{
		Transform_t48 * L_12 = (((Gesture_t270 *)__this)->___cachedTransform_5);
		Vector3_t28  L_13 = Vector3_get_forward_m310(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t28  L_14 = Transform_TransformDirection_m3884(L_12, L_13, /*hidden argument*/NULL);
		Vector3_t28  L_15 = V_0;
		Plane_t554  L_16 = {0};
		Plane__ctor_m2973(&L_16, L_14, L_15, /*hidden argument*/NULL);
		__this->___worldTransformPlane_29 = L_16;
		goto IL_00a8;
	}

IL_0091:
	{
		TouchLayer_t624 * L_17 = (__this->___projectionLayer_28);
		NullCheck(L_17);
		Vector3_t28  L_18 = (Vector3_t28 )VirtFuncInvoker0< Vector3_t28  >::Invoke(4 /* UnityEngine.Vector3 TouchScript.Layers.TouchLayer::get_WorldProjectionNormal() */, L_17);
		Vector3_t28  L_19 = V_0;
		Plane_t554  L_20 = {0};
		Plane__ctor_m2973(&L_20, L_18, L_19, /*hidden argument*/NULL);
		__this->___worldTransformPlane_29 = L_20;
	}

IL_00a8:
	{
		goto IL_00e6;
	}

IL_00ad:
	{
		Transform_t48 * L_21 = (((Gesture_t270 *)__this)->___cachedTransform_5);
		Vector3_t28  L_22 = (__this->___projectionNormal_26);
		NullCheck(L_21);
		Vector3_t28  L_23 = Transform_TransformDirection_m3884(L_21, L_22, /*hidden argument*/NULL);
		Vector3_t28  L_24 = V_0;
		Plane_t554  L_25 = {0};
		Plane__ctor_m2973(&L_25, L_23, L_24, /*hidden argument*/NULL);
		__this->___worldTransformPlane_29 = L_25;
		goto IL_00e6;
	}

IL_00cf:
	{
		Vector3_t28  L_26 = (__this->___projectionNormal_26);
		Vector3_t28  L_27 = V_0;
		Plane_t554  L_28 = {0};
		Plane__ctor_m2973(&L_28, L_26, L_27, /*hidden argument*/NULL);
		__this->___worldTransformPlane_29 = L_28;
		goto IL_00e6;
	}

IL_00e6:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::.ctor()
// TouchScript.Gestures.Simple.Transform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_Transform2DGestureBaMethodDeclarations.h"
extern "C" void TwoPointTransform2DGestureBase__ctor_m3558 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method)
{
	{
		__this->___minPointsDistance_32 = (0.5f);
		Transform2DGestureBase__ctor_m3540(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::get_MinPointsDistance()
extern "C" float TwoPointTransform2DGestureBase_get_MinPointsDistance_m3559 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___minPointsDistance_32);
		return L_0;
	}
}
// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::set_MinPointsDistance(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// TouchScript.Gestures.Gesture
#include "TouchScript_TouchScript_Gestures_GestureMethodDeclarations.h"
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void TwoPointTransform2DGestureBase_set_MinPointsDistance_m3560 (TwoPointTransform2DGestureBase_t621 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		__this->___minPointsDistance_32 = L_0;
		float L_1 = (__this->___minPointsDistance_32);
		Object_t * L_2 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = (float)InterfaceFuncInvoker0< float >::Invoke(16 /* System.Single TouchScript.ITouchManager::get_DotsPerCentimeter() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_2);
		__this->___minPixelDistance_33 = ((float)((float)L_1*(float)L_3));
		float L_4 = (__this->___minPixelDistance_33);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_5 = powf(L_4, (2.0f));
		__this->___minPixelDistanceSquared_34 = L_5;
		return;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::get_ScreenPosition()
// TouchScript.TouchManager
#include "TouchScript_TouchScript_TouchManagerMethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  TwoPointTransform2DGestureBase_get_ScreenPosition_m3561 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t85  L_0 = (__this->___screenPosition_35);
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		bool L_1 = TouchManager_IsInvalidPosition_m3704(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t85  L_2 = Gesture_get_ScreenPosition_m3320(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		Vector2_t85  L_3 = (__this->___screenPosition_35);
		return L_3;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::get_PreviousScreenPosition()
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  TwoPointTransform2DGestureBase_get_PreviousScreenPosition_m3562 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t85  L_0 = (__this->___previousScreenPosition_36);
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		bool L_1 = TouchManager_IsInvalidPosition_m3704(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t85  L_2 = Gesture_get_PreviousScreenPosition_m3321(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		Vector2_t85  L_3 = (__this->___previousScreenPosition_36);
		return L_3;
	}
}
// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::OnEnable()
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void TwoPointTransform2DGestureBase_OnEnable_m3563 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform2DGestureBase_OnEnable_m3551(__this, /*hidden argument*/NULL);
		float L_0 = (__this->___minPointsDistance_32);
		Object_t * L_1 = Gesture_get_touchManager_m3328(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2 = (float)InterfaceFuncInvoker0< float >::Invoke(16 /* System.Single TouchScript.ITouchManager::get_DotsPerCentimeter() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_1);
		__this->___minPixelDistance_33 = ((float)((float)L_0*(float)L_2));
		float L_3 = (__this->___minPixelDistance_33);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_4 = powf(L_3, (2.0f));
		__this->___minPixelDistanceSquared_34 = L_4;
		return;
	}
}
// System.Boolean TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::gotEnoughTouches()
extern "C" bool TwoPointTransform2DGestureBase_gotEnoughTouches_m3564 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method)
{
	{
		List_1_t592 * L_0 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_0);
		return ((((int32_t)((((int32_t)L_1) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::relevantTouches(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* IEnumerable_1_t255_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t256_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" bool TwoPointTransform2DGestureBase_relevantTouches_m3565 (TwoPointTransform2DGestureBase_t621 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		IEnumerator_1_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t* V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		Object_t* L_0 = ___touches;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TouchScript.ITouch>::GetEnumerator() */, IEnumerable_1_t255_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_000e:
		{
			Object_t* L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TouchScript.ITouch>::get_Current() */, IEnumerator_1_t256_il2cpp_TypeInfo_var, L_2);
			V_2 = L_3;
			Object_t * L_4 = V_2;
			List_1_t592 * L_5 = (((Gesture_t270 *)__this)->___activeTouches_4);
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_5, 0);
			if ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)L_6)))
			{
				goto IL_0039;
			}
		}

IL_0027:
		{
			Object_t * L_7 = V_2;
			List_1_t592 * L_8 = (((Gesture_t270 *)__this)->___activeTouches_4);
			NullCheck(L_8);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_8, 1);
			if ((!(((Object_t*)(Object_t *)L_7) == ((Object_t*)(Object_t *)L_9))))
			{
				goto IL_0040;
			}
		}

IL_0039:
		{
			V_0 = 1;
			goto IL_004b;
		}

IL_0040:
		{
			Object_t* L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_000e;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			Object_t* L_12 = V_1;
			if (!L_12)
			{
				goto IL_005c;
			}
		}

IL_0056:
		{
			Object_t* L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_13);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_005d:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointScreenPosition(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  TwoPointTransform2DGestureBase_getPointScreenPosition_m3566 (TwoPointTransform2DGestureBase_t621 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		___index = 0;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_1 = ___index;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		___index = 1;
	}

IL_0019:
	{
		List_1_t592 * L_2 = (((Gesture_t270 *)__this)->___activeTouches_4);
		int32_t L_3 = ___index;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_2, L_3);
		NullCheck(L_4);
		Vector2_t85  L_5 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::getPointPreviousScreenPosition(System.Int32)
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  TwoPointTransform2DGestureBase_getPointPreviousScreenPosition_m3567 (TwoPointTransform2DGestureBase_t621 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		___index = 0;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_1 = ___index;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		___index = 1;
	}

IL_0019:
	{
		List_1_t592 * L_2 = (((Gesture_t270 *)__this)->___activeTouches_4);
		int32_t L_3 = ___index;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Item(System.Int32) */, L_2, L_3);
		NullCheck(L_4);
		Vector2_t85  L_5 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(3 /* UnityEngine.Vector2 TouchScript.ITouch::get_PreviousPosition() */, ITouch_t257_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}
}
// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::restart()
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern "C" void TwoPointTransform2DGestureBase_restart_m3568 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_0 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		__this->___screenPosition_35 = L_0;
		Vector2_t85  L_1 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		__this->___previousScreenPosition_36 = L_1;
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void TwoPointTransform2DGestureBase_touchesEnded_m3569 (TwoPointTransform2DGestureBase_t621 * __this, Object_t* ___touches, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___touches;
		Transform2DGestureBase_touchesEnded_m3554(__this, L_0, /*hidden argument*/NULL);
		List_1_t592 * L_1 = (((Gesture_t270 *)__this)->___activeTouches_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.ITouch>::get_Count() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_3 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = Gesture_get_State_m3316(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0036;
		}
	}

IL_0030:
	{
		VirtActionInvoker0::Invoke(38 /* System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::restart() */, __this);
	}

IL_0036:
	{
		return;
	}
}
// System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::reset()
extern "C" void TwoPointTransform2DGestureBase_reset_m3570 (TwoPointTransform2DGestureBase_t621 * __this, const MethodInfo* method)
{
	{
		Transform2DGestureBase_reset_m3556(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(38 /* System.Void TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::restart() */, __this);
		return;
	}
}
// TouchScript.Hit.HitTest/ObjectHitResult
#include "TouchScript_TouchScript_Hit_HitTest_ObjectHitResult.h"
// TouchScript.Hit.HitTest/ObjectHitResult
#include "TouchScript_TouchScript_Hit_HitTest_ObjectHitResultMethodDeclarations.h"
// TouchScript.Hit.HitTest
#include "TouchScript_TouchScript_Hit_HitTest.h"
// TouchScript.Hit.HitTest
#include "TouchScript_TouchScript_Hit_HitTestMethodDeclarations.h"
// System.Void TouchScript.Hit.HitTest::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void HitTest__ctor_m3571 (HitTest_t626 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Hit.HitTest/ObjectHitResult TouchScript.Hit.HitTest::IsHit(TouchScript.Hit.ITouchHit)
extern "C" int32_t HitTest_IsHit_m3572 (HitTest_t626 * __this, Object_t * ___hit, const MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Void TouchScript.Hit.HitTest::OnEnable()
extern "C" void HitTest_OnEnable_m3573 (HitTest_t626 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// TouchScript.Hit.TouchHit
#include "TouchScript_TouchScript_Hit_TouchHit.h"
// TouchScript.Hit.TouchHit
#include "TouchScript_TouchScript_Hit_TouchHitMethodDeclarations.h"
// System.Void TouchScript.Hit.TouchHit::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void TouchHit__ctor_m3574 (TouchHit_t627 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform TouchScript.Hit.TouchHit::get_Transform()
extern "C" Transform_t48 * TouchHit_get_Transform_m3575 (TouchHit_t627 * __this, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = (__this->___U3CTransformU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void TouchScript.Hit.TouchHit::set_Transform(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
extern "C" void TouchHit_set_Transform_m3576 (TouchHit_t627 * __this, Transform_t48 * ___value, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = ___value;
		__this->___U3CTransformU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void TouchScript.Hit.TouchHit::InitWith(UnityEngine.Transform)
// TouchScript.Hit.TouchHit
#include "TouchScript_TouchScript_Hit_TouchHitMethodDeclarations.h"
extern "C" void TouchHit_InitWith_m3577 (TouchHit_t627 * __this, Transform_t48 * ___value, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = ___value;
		TouchHit_set_Transform_m3576(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Hit.TouchHit2D
#include "TouchScript_TouchScript_Hit_TouchHit2D.h"
// TouchScript.Hit.TouchHit2D
#include "TouchScript_TouchScript_Hit_TouchHit2DMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// System.Void TouchScript.Hit.TouchHit2D::.ctor()
// TouchScript.Hit.TouchHit
#include "TouchScript_TouchScript_Hit_TouchHitMethodDeclarations.h"
extern "C" void TouchHit2D__ctor_m3578 (TouchHit2D_t628 * __this, const MethodInfo* method)
{
	{
		TouchHit__ctor_m3574(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Collider2D TouchScript.Hit.TouchHit2D::get_Collider2D()
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
extern "C" Collider2D_t224 * TouchHit2D_get_Collider2D_m3579 (TouchHit2D_t628 * __this, const MethodInfo* method)
{
	{
		RaycastHit2D_t532 * L_0 = &(__this->___hit_1);
		Collider2D_t224 * L_1 = RaycastHit2D_get_collider_m2742(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 TouchScript.Hit.TouchHit2D::get_Point()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector3_t28  TouchHit2D_get_Point_m3580 (TouchHit2D_t628 * __this, const MethodInfo* method)
{
	{
		RaycastHit2D_t532 * L_0 = &(__this->___hit_1);
		Vector2_t85  L_1 = RaycastHit2D_get_point_m2745(L_0, /*hidden argument*/NULL);
		Vector3_t28  L_2 = Vector2_op_Implicit_m1101(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Rigidbody2D TouchScript.Hit.TouchHit2D::get_Rigidbody2D()
extern "C" Rigidbody2D_t225 * TouchHit2D_get_Rigidbody2D_m3581 (TouchHit2D_t628 * __this, const MethodInfo* method)
{
	{
		RaycastHit2D_t532 * L_0 = &(__this->___hit_1);
		Rigidbody2D_t225 * L_1 = RaycastHit2D_get_rigidbody_m3885(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void TouchScript.Hit.TouchHit2D::InitWith(UnityEngine.RaycastHit2D)
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" void TouchHit2D_InitWith_m3582 (TouchHit2D_t628 * __this, RaycastHit2D_t532  ___value, const MethodInfo* method)
{
	{
		Collider2D_t224 * L_0 = RaycastHit2D_get_collider_m2742((&___value), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t48 * L_1 = Component_get_transform_m332(L_0, /*hidden argument*/NULL);
		TouchHit_InitWith_m3577(__this, L_1, /*hidden argument*/NULL);
		RaycastHit2D_t532  L_2 = ___value;
		__this->___hit_1 = L_2;
		return;
	}
}
// TouchScript.Hit.TouchHit3D
#include "TouchScript_TouchScript_Hit_TouchHit3D.h"
// TouchScript.Hit.TouchHit3D
#include "TouchScript_TouchScript_Hit_TouchHit3DMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// System.Void TouchScript.Hit.TouchHit3D::.ctor()
// TouchScript.Hit.TouchHit
#include "TouchScript_TouchScript_Hit_TouchHitMethodDeclarations.h"
extern "C" void TouchHit3D__ctor_m3583 (TouchHit3D_t629 * __this, const MethodInfo* method)
{
	{
		TouchHit__ctor_m3574(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Collider TouchScript.Hit.TouchHit3D::get_Collider()
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
extern "C" Collider_t534 * TouchHit3D_get_Collider_m3584 (TouchHit3D_t629 * __this, const MethodInfo* method)
{
	{
		RaycastHit_t504 * L_0 = &(__this->___hit_1);
		Collider_t534 * L_1 = RaycastHit_get_collider_m2753(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 TouchScript.Hit.TouchHit3D::get_Normal()
extern "C" Vector3_t28  TouchHit3D_get_Normal_m3585 (TouchHit3D_t629 * __this, const MethodInfo* method)
{
	{
		RaycastHit_t504 * L_0 = &(__this->___hit_1);
		Vector3_t28  L_1 = RaycastHit_get_normal_m2756(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 TouchScript.Hit.TouchHit3D::get_Point()
extern "C" Vector3_t28  TouchHit3D_get_Point_m3586 (TouchHit3D_t629 * __this, const MethodInfo* method)
{
	{
		RaycastHit_t504 * L_0 = &(__this->___hit_1);
		Vector3_t28  L_1 = RaycastHit_get_point_m2755(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Rigidbody TouchScript.Hit.TouchHit3D::get_Rigidbody()
extern "C" Rigidbody_t260 * TouchHit3D_get_Rigidbody_m3587 (TouchHit3D_t629 * __this, const MethodInfo* method)
{
	{
		RaycastHit_t504 * L_0 = &(__this->___hit_1);
		Rigidbody_t260 * L_1 = RaycastHit_get_rigidbody_m3886(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void TouchScript.Hit.TouchHit3D::InitWith(UnityEngine.RaycastHit)
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" void TouchHit3D_InitWith_m3588 (TouchHit3D_t629 * __this, RaycastHit_t504  ___value, const MethodInfo* method)
{
	{
		Collider_t534 * L_0 = RaycastHit_get_collider_m2753((&___value), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t48 * L_1 = Component_get_transform_m332(L_0, /*hidden argument*/NULL);
		TouchHit_InitWith_m3577(__this, L_1, /*hidden argument*/NULL);
		RaycastHit_t504  L_2 = ___value;
		__this->___hit_1 = L_2;
		return;
	}
}
// TouchScript.Hit.TouchHitFactory
#include "TouchScript_TouchScript_Hit_TouchHitFactory.h"
// TouchScript.Hit.TouchHitFactory
#include "TouchScript_TouchScript_Hit_TouchHitFactoryMethodDeclarations.h"
// System.Void TouchScript.Hit.TouchHitFactory::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void TouchHitFactory__ctor_m3589 (TouchHitFactory_t630 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Hit.ITouchHitFactory TouchScript.Hit.TouchHitFactory::get_Instance()
// TouchScript.Hit.TouchHitFactory
#include "TouchScript_TouchScript_Hit_TouchHitFactoryMethodDeclarations.h"
extern TypeInfo* TouchHitFactory_t630_il2cpp_TypeInfo_var;
extern "C" Object_t * TouchHitFactory_get_Instance_m3590 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchHitFactory_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	TouchHitFactory_t630 * G_B2_0 = {0};
	TouchHitFactory_t630 * G_B1_0 = {0};
	{
		TouchHitFactory_t630 * L_0 = ((TouchHitFactory_t630_StaticFields*)TouchHitFactory_t630_il2cpp_TypeInfo_var->static_fields)->___instance_0;
		TouchHitFactory_t630 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		TouchHitFactory_t630 * L_2 = (TouchHitFactory_t630 *)il2cpp_codegen_object_new (TouchHitFactory_t630_il2cpp_TypeInfo_var);
		TouchHitFactory__ctor_m3589(L_2, /*hidden argument*/NULL);
		TouchHitFactory_t630 * L_3 = L_2;
		((TouchHitFactory_t630_StaticFields*)TouchHitFactory_t630_il2cpp_TypeInfo_var->static_fields)->___instance_0 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// TouchScript.Hit.ITouchHit TouchScript.Hit.TouchHitFactory::GetTouchHit(UnityEngine.RaycastHit)
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// TouchScript.Hit.TouchHit3D
#include "TouchScript_TouchScript_Hit_TouchHit3DMethodDeclarations.h"
extern TypeInfo* TouchHit3D_t629_il2cpp_TypeInfo_var;
extern "C" Object_t * TouchHitFactory_GetTouchHit_m3591 (TouchHitFactory_t630 * __this, RaycastHit_t504  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchHit3D_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	TouchHit3D_t629 * V_0 = {0};
	{
		TouchHit3D_t629 * L_0 = (TouchHit3D_t629 *)il2cpp_codegen_object_new (TouchHit3D_t629_il2cpp_TypeInfo_var);
		TouchHit3D__ctor_m3583(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		TouchHit3D_t629 * L_1 = V_0;
		RaycastHit_t504  L_2 = ___value;
		NullCheck(L_1);
		TouchHit3D_InitWith_m3588(L_1, L_2, /*hidden argument*/NULL);
		TouchHit3D_t629 * L_3 = V_0;
		return L_3;
	}
}
// TouchScript.Hit.ITouchHit TouchScript.Hit.TouchHitFactory::GetTouchHit(UnityEngine.RaycastHit2D)
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// TouchScript.Hit.TouchHit2D
#include "TouchScript_TouchScript_Hit_TouchHit2DMethodDeclarations.h"
extern TypeInfo* TouchHit2D_t628_il2cpp_TypeInfo_var;
extern "C" Object_t * TouchHitFactory_GetTouchHit_m3592 (TouchHitFactory_t630 * __this, RaycastHit2D_t532  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchHit2D_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	TouchHit2D_t628 * V_0 = {0};
	{
		TouchHit2D_t628 * L_0 = (TouchHit2D_t628 *)il2cpp_codegen_object_new (TouchHit2D_t628_il2cpp_TypeInfo_var);
		TouchHit2D__ctor_m3578(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		TouchHit2D_t628 * L_1 = V_0;
		RaycastHit2D_t532  L_2 = ___value;
		NullCheck(L_1);
		TouchHit2D_InitWith_m3582(L_1, L_2, /*hidden argument*/NULL);
		TouchHit2D_t628 * L_3 = V_0;
		return L_3;
	}
}
// TouchScript.Hit.ITouchHit TouchScript.Hit.TouchHitFactory::GetTouchHit(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// TouchScript.Hit.TouchHit
#include "TouchScript_TouchScript_Hit_TouchHitMethodDeclarations.h"
extern TypeInfo* TouchHit_t627_il2cpp_TypeInfo_var;
extern "C" Object_t * TouchHitFactory_GetTouchHit_m3593 (TouchHitFactory_t630 * __this, Transform_t48 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchHit_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	TouchHit_t627 * V_0 = {0};
	{
		TouchHit_t627 * L_0 = (TouchHit_t627 *)il2cpp_codegen_object_new (TouchHit_t627_il2cpp_TypeInfo_var);
		TouchHit__ctor_m3574(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		TouchHit_t627 * L_1 = V_0;
		Transform_t48 * L_2 = ___value;
		NullCheck(L_1);
		TouchHit_InitWith_m3577(L_1, L_2, /*hidden argument*/NULL);
		TouchHit_t627 * L_3 = V_0;
		return L_3;
	}
}
// TouchScript.Hit.Untouchable
#include "TouchScript_TouchScript_Hit_Untouchable.h"
// TouchScript.Hit.Untouchable
#include "TouchScript_TouchScript_Hit_UntouchableMethodDeclarations.h"
// System.Void TouchScript.Hit.Untouchable::.ctor()
// TouchScript.Hit.HitTest
#include "TouchScript_TouchScript_Hit_HitTestMethodDeclarations.h"
extern "C" void Untouchable__ctor_m3594 (Untouchable_t631 * __this, const MethodInfo* method)
{
	{
		HitTest__ctor_m3571(__this, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Hit.HitTest/ObjectHitResult TouchScript.Hit.Untouchable::IsHit(TouchScript.Hit.ITouchHit)
extern "C" int32_t Untouchable_IsHit_m3595 (Untouchable_t631 * __this, Object_t * ___hit, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->___DiscardTouch_2);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 3;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 2;
	}

IL_0012:
	{
		return (int32_t)(G_B3_0);
	}
}
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
// System.Void TouchScript.Devices.Display.DisplayDevice::.ctor()
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral345;
extern "C" void DisplayDevice__ctor_m3596 (DisplayDevice_t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral345 = il2cpp_codegen_string_literal_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___name_2 = _stringLiteral345;
		__this->___dpi_3 = (96.0f);
		ScriptableObject__ctor_m3887(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String TouchScript.Devices.Display.DisplayDevice::get_Name()
extern "C" String_t* DisplayDevice_get_Name_m3597 (DisplayDevice_t597 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Void TouchScript.Devices.Display.DisplayDevice::set_Name(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void DisplayDevice_set_Name_m3598 (DisplayDevice_t597 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___name_2 = L_0;
		String_t* L_1 = ___value;
		Object_set_name_m1204(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single TouchScript.Devices.Display.DisplayDevice::get_DPI()
extern "C" float DisplayDevice_get_DPI_m3599 (DisplayDevice_t597 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___dpi_3);
		return L_0;
	}
}
// System.Void TouchScript.Devices.Display.DisplayDevice::set_DPI(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void DisplayDevice_set_DPI_m3600 (DisplayDevice_t597 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___dpi_3 = L_0;
		return;
	}
}
// System.Void TouchScript.Devices.Display.DisplayDevice::OnEnable()
extern "C" void DisplayDevice_OnEnable_m3601 (DisplayDevice_t597 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		Object_set_name_m1204(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.InputSources.InputSource
#include "TouchScript_TouchScript_InputSources_InputSource.h"
// TouchScript.InputSources.InputSource
#include "TouchScript_TouchScript_InputSources_InputSourceMethodDeclarations.h"
// TouchScript.TouchManagerInstance
#include "TouchScript_TouchScript_TouchManagerInstance.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// TouchScript.TouchManagerInstance
#include "TouchScript_TouchScript_TouchManagerInstanceMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Void TouchScript.InputSources.InputSource::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void InputSource__ctor_m3602 (InputSource_t633 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.InputSources.ICoordinatesRemapper TouchScript.InputSources.InputSource::get_CoordinatesRemapper()
extern "C" Object_t * InputSource_get_CoordinatesRemapper_m3603 (InputSource_t633 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3CCoordinatesRemapperU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void TouchScript.InputSources.InputSource::set_CoordinatesRemapper(TouchScript.InputSources.ICoordinatesRemapper)
extern "C" void InputSource_set_CoordinatesRemapper_m3604 (InputSource_t633 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___U3CCoordinatesRemapperU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void TouchScript.InputSources.InputSource::OnEnable()
// TouchScript.TouchManagerInstance
#include "TouchScript_TouchScript_TouchManagerInstanceMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* TouchManagerInstance_t634_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t699_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral346;
extern "C" void InputSource_OnEnable_m3605 (InputSource_t633 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManagerInstance_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		InvalidOperationException_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		_stringLiteral346 = il2cpp_codegen_string_literal_from_index(346);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		TouchManagerInstance_t634 * L_0 = TouchManagerInstance_get_Instance_m3737(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___manager_3 = L_0;
		TouchManagerInstance_t634 * L_1 = (__this->___manager_3);
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		InvalidOperationException_t699 * L_3 = (InvalidOperationException_t699 *)il2cpp_codegen_object_new (InvalidOperationException_t699_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3888(L_3, _stringLiteral346, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0027:
	{
		return;
	}
}
// System.Void TouchScript.InputSources.InputSource::OnDisable()
extern "C" void InputSource_OnDisable_m3606 (InputSource_t633 * __this, const MethodInfo* method)
{
	{
		__this->___manager_3 = (TouchManagerInstance_t634 *)NULL;
		return;
	}
}
// System.Void TouchScript.InputSources.InputSource::Update()
extern "C" void InputSource_Update_m3607 (InputSource_t633 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" Object_t * InputSource_beginTouch_m3608 (InputSource_t633 * __this, Vector2_t85  ___position, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___position;
		Object_t * L_1 = (Object_t *)VirtFuncInvoker2< Object_t *, Vector2_t85 , Tags_t637 * >::Invoke(10 /* TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2,TouchScript.Tags) */, __this, L_0, (Tags_t637 *)NULL);
		return L_1;
	}
}
// TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2,TouchScript.Tags)
// TouchScript.Tags
#include "TouchScript_TouchScript_Tags.h"
// TouchScript.InputSources.InputSource
#include "TouchScript_TouchScript_InputSources_InputSourceMethodDeclarations.h"
extern TypeInfo* ICoordinatesRemapper_t635_il2cpp_TypeInfo_var;
extern "C" Object_t * InputSource_beginTouch_m3609 (InputSource_t633 * __this, Vector2_t85  ___position, Tags_t637 * ___tags, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICoordinatesRemapper_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = InputSource_get_CoordinatesRemapper_m3603(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Object_t * L_1 = InputSource_get_CoordinatesRemapper_m3603(__this, /*hidden argument*/NULL);
		Vector2_t85  L_2 = ___position;
		NullCheck(L_1);
		Vector2_t85  L_3 = (Vector2_t85 )InterfaceFuncInvoker1< Vector2_t85 , Vector2_t85  >::Invoke(0 /* UnityEngine.Vector2 TouchScript.InputSources.ICoordinatesRemapper::Remap(UnityEngine.Vector2) */, ICoordinatesRemapper_t635_il2cpp_TypeInfo_var, L_1, L_2);
		___position = L_3;
	}

IL_0019:
	{
		TouchManagerInstance_t634 * L_4 = (__this->___manager_3);
		Vector2_t85  L_5 = ___position;
		Tags_t637 * L_6 = ___tags;
		NullCheck(L_4);
		Object_t * L_7 = TouchManagerInstance_BeginTouch_m3753(L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void TouchScript.InputSources.InputSource::updateTouch(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void InputSource_updateTouch_m3610 (InputSource_t633 * __this, int32_t ___id, const MethodInfo* method)
{
	{
		TouchManagerInstance_t634 * L_0 = (__this->___manager_3);
		int32_t L_1 = ___id;
		NullCheck(L_0);
		TouchManagerInstance_UpdateTouch_m3754(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.InputSources.InputSource::moveTouch(System.Int32,UnityEngine.Vector2)
extern TypeInfo* ICoordinatesRemapper_t635_il2cpp_TypeInfo_var;
extern "C" void InputSource_moveTouch_m3611 (InputSource_t633 * __this, int32_t ___id, Vector2_t85  ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICoordinatesRemapper_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = InputSource_get_CoordinatesRemapper_m3603(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Object_t * L_1 = InputSource_get_CoordinatesRemapper_m3603(__this, /*hidden argument*/NULL);
		Vector2_t85  L_2 = ___position;
		NullCheck(L_1);
		Vector2_t85  L_3 = (Vector2_t85 )InterfaceFuncInvoker1< Vector2_t85 , Vector2_t85  >::Invoke(0 /* UnityEngine.Vector2 TouchScript.InputSources.ICoordinatesRemapper::Remap(UnityEngine.Vector2) */, ICoordinatesRemapper_t635_il2cpp_TypeInfo_var, L_1, L_2);
		___position = L_3;
	}

IL_0019:
	{
		TouchManagerInstance_t634 * L_4 = (__this->___manager_3);
		int32_t L_5 = ___id;
		Vector2_t85  L_6 = ___position;
		NullCheck(L_4);
		TouchManagerInstance_MoveTouch_m3755(L_4, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.InputSources.InputSource::endTouch(System.Int32)
extern "C" void InputSource_endTouch_m3612 (InputSource_t633 * __this, int32_t ___id, const MethodInfo* method)
{
	{
		TouchManagerInstance_t634 * L_0 = (__this->___manager_3);
		int32_t L_1 = ___id;
		NullCheck(L_0);
		TouchManagerInstance_EndTouch_m3756(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.InputSources.InputSource::cancelTouch(System.Int32)
extern "C" void InputSource_cancelTouch_m3613 (InputSource_t633 * __this, int32_t ___id, const MethodInfo* method)
{
	{
		TouchManagerInstance_t634 * L_0 = (__this->___manager_3);
		int32_t L_1 = ___id;
		NullCheck(L_0);
		TouchManagerInstance_CancelTouch_m3757(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.InputSources.MouseInput
#include "TouchScript_TouchScript_InputSources_MouseInput.h"
// TouchScript.InputSources.MouseInput
#include "TouchScript_TouchScript_InputSources_MouseInputMethodDeclarations.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// System.Void TouchScript.InputSources.MouseInput::.ctor()
// TouchScript.Tags
#include "TouchScript_TouchScript_TagsMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// TouchScript.InputSources.InputSource
#include "TouchScript_TouchScript_InputSources_InputSourceMethodDeclarations.h"
extern TypeInfo* Tags_t637_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral347;
extern "C" void MouseInput__ctor_m3614 (MouseInput_t636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tags_t637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		_stringLiteral347 = il2cpp_codegen_string_literal_from_index(347);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___DisableOnMobilePlatforms_5 = 1;
		Tags_t637 * L_0 = (Tags_t637 *)il2cpp_codegen_object_new (Tags_t637_il2cpp_TypeInfo_var);
		Tags__ctor_m3686(L_0, _stringLiteral347, /*hidden argument*/NULL);
		__this->___Tags_6 = L_0;
		__this->___mousePointId_7 = (-1);
		__this->___fakeMousePointId_8 = (-1);
		Vector3_t28  L_1 = Vector3_get_zero_m312(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mousePointPos_9 = L_1;
		InputSource__ctor_m3602(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.InputSources.MouseInput::OnEnable()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern "C" void MouseInput_OnEnable_m3615 (MouseInput_t636 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		bool L_0 = (__this->___DisableOnMobilePlatforms_5);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 0)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 1)
		{
			goto IL_0029;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 2)
		{
			goto IL_0029;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 3)
		{
			goto IL_0047;
		}
	}

IL_0029:
	{
		int32_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)18))) == 0)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)18))) == 1)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)18))) == 2)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)18))) == 3)
		{
			goto IL_0047;
		}
	}
	{
		goto IL_004f;
	}

IL_0047:
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_004f:
	{
		InputSource_OnEnable_m3605(__this, /*hidden argument*/NULL);
		__this->___mousePointId_7 = (-1);
		__this->___fakeMousePointId_8 = (-1);
		return;
	}
}
// System.Void TouchScript.InputSources.MouseInput::OnDisable()
extern "C" void MouseInput_OnDisable_m3616 (MouseInput_t636 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mousePointId_7);
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = (__this->___mousePointId_7);
		VirtActionInvoker1< int32_t >::Invoke(14 /* System.Void TouchScript.InputSources.InputSource::cancelTouch(System.Int32) */, __this, L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___fakeMousePointId_8);
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_3 = (__this->___fakeMousePointId_8);
		VirtActionInvoker1< int32_t >::Invoke(14 /* System.Void TouchScript.InputSources.InputSource::cancelTouch(System.Int32) */, __this, L_3);
	}

IL_0030:
	{
		InputSource_OnDisable_m3606(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.InputSources.MouseInput::Update()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* Input_t524_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" void MouseInput_Update_m3617 (MouseInput_t636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Vector3_t28  V_1 = {0};
	Vector3_t28  V_2 = {0};
	{
		InputSource_Update_m3607(__this, /*hidden argument*/NULL);
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonUp_m2693(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_1 = (__this->___mousePointId_7);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_2 = (__this->___mousePointId_7);
		VirtActionInvoker1< int32_t >::Invoke(13 /* System.Void TouchScript.InputSources.InputSource::endTouch(System.Int32) */, __this, L_2);
		__this->___mousePointId_7 = (-1);
		V_0 = 1;
	}

IL_0034:
	{
		int32_t L_3 = (__this->___fakeMousePointId_8);
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0071;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKey_m3889(NULL /*static, unused*/, ((int32_t)308), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0071;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKey_m3889(NULL /*static, unused*/, ((int32_t)307), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_6 = (__this->___fakeMousePointId_8);
		VirtActionInvoker1< int32_t >::Invoke(13 /* System.Void TouchScript.InputSources.InputSource::endTouch(System.Int32) */, __this, L_6);
		__this->___fakeMousePointId_8 = (-1);
	}

IL_0071:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetMouseButtonDown_m2692(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0116;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		Vector3_t28  L_8 = Input_get_mousePosition_m2694(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_8;
		bool L_9 = Input_GetKey_m3889(NULL /*static, unused*/, ((int32_t)308), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		bool L_10 = Input_GetKey_m3889(NULL /*static, unused*/, ((int32_t)307), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00e1;
		}
	}

IL_00a0:
	{
		int32_t L_11 = (__this->___fakeMousePointId_8);
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_12 = (__this->___fakeMousePointId_8);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_00dc;
		}
	}
	{
		float L_13 = ((&V_1)->___x_1);
		float L_14 = ((&V_1)->___y_2);
		Vector2_t85  L_15 = {0};
		Vector2__ctor_m305(&L_15, L_13, L_14, /*hidden argument*/NULL);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, Vector2_t85  >::Invoke(9 /* TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2) */, __this, L_15);
		NullCheck(L_16);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_16);
		__this->___fakeMousePointId_8 = L_17;
	}

IL_00dc:
	{
		goto IL_0111;
	}

IL_00e1:
	{
		int32_t L_18 = (__this->___mousePointId_7);
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_0111;
		}
	}
	{
		float L_19 = ((&V_1)->___x_1);
		float L_20 = ((&V_1)->___y_2);
		Vector2_t85  L_21 = {0};
		Vector2__ctor_m305(&L_21, L_19, L_20, /*hidden argument*/NULL);
		Object_t * L_22 = (Object_t *)VirtFuncInvoker1< Object_t *, Vector2_t85  >::Invoke(9 /* TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2) */, __this, L_21);
		NullCheck(L_22);
		int32_t L_23 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_22);
		__this->___mousePointId_7 = L_23;
	}

IL_0111:
	{
		goto IL_019a;
	}

IL_0116:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		bool L_24 = Input_GetMouseButton_m2735(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_019a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		Vector3_t28  L_25 = Input_get_mousePosition_m2694(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_25;
		Vector3_t28  L_26 = (__this->___mousePointPos_9);
		Vector3_t28  L_27 = V_2;
		bool L_28 = Vector3_op_Inequality_m3008(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_019a;
		}
	}
	{
		Vector3_t28  L_29 = V_2;
		__this->___mousePointPos_9 = L_29;
		int32_t L_30 = (__this->___fakeMousePointId_8);
		if ((((int32_t)L_30) <= ((int32_t)(-1))))
		{
			goto IL_017b;
		}
	}
	{
		int32_t L_31 = (__this->___mousePointId_7);
		if ((!(((uint32_t)L_31) == ((uint32_t)(-1)))))
		{
			goto IL_017b;
		}
	}
	{
		int32_t L_32 = (__this->___fakeMousePointId_8);
		float L_33 = ((&V_2)->___x_1);
		float L_34 = ((&V_2)->___y_2);
		Vector2_t85  L_35 = {0};
		Vector2__ctor_m305(&L_35, L_33, L_34, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector2_t85  >::Invoke(12 /* System.Void TouchScript.InputSources.InputSource::moveTouch(System.Int32,UnityEngine.Vector2) */, __this, L_32, L_35);
		goto IL_019a;
	}

IL_017b:
	{
		int32_t L_36 = (__this->___mousePointId_7);
		float L_37 = ((&V_2)->___x_1);
		float L_38 = ((&V_2)->___y_2);
		Vector2_t85  L_39 = {0};
		Vector2__ctor_m305(&L_39, L_37, L_38, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector2_t85  >::Invoke(12 /* System.Void TouchScript.InputSources.InputSource::moveTouch(System.Int32,UnityEngine.Vector2) */, __this, L_36, L_39);
	}

IL_019a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		bool L_40 = Input_GetMouseButtonUp_m2693(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_01be;
		}
	}
	{
		bool L_41 = V_0;
		if (L_41)
		{
			goto IL_01be;
		}
	}
	{
		int32_t L_42 = (__this->___mousePointId_7);
		VirtActionInvoker1< int32_t >::Invoke(13 /* System.Void TouchScript.InputSources.InputSource::endTouch(System.Int32) */, __this, L_42);
		__this->___mousePointId_7 = (-1);
	}

IL_01be:
	{
		return;
	}
}
// TouchScript.ITouch TouchScript.InputSources.MouseInput::beginTouch(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo* Tags_t637_il2cpp_TypeInfo_var;
extern "C" Object_t * MouseInput_beginTouch_m3618 (MouseInput_t636 * __this, Vector2_t85  ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tags_t637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t85  L_0 = ___position;
		Tags_t637 * L_1 = (__this->___Tags_6);
		Tags_t637 * L_2 = (Tags_t637 *)il2cpp_codegen_object_new (Tags_t637_il2cpp_TypeInfo_var);
		Tags__ctor_m3684(L_2, L_1, /*hidden argument*/NULL);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Vector2_t85 , Tags_t637 * >::Invoke(10 /* TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2,TouchScript.Tags) */, __this, L_0, L_2);
		return L_3;
	}
}
// System.Void TouchScript.TouchEventArgs::.ctor(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// System.EventArgs
#include "mscorlib_System_EventArgsMethodDeclarations.h"
// TouchScript.TouchEventArgs
#include "TouchScript_TouchScript_TouchEventArgsMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern "C" void TouchEventArgs__ctor_m3619 (TouchEventArgs_t226 * __this, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3875(__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___touches;
		TouchEventArgs_set_Touches_m3620(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IList`1<TouchScript.ITouch> TouchScript.TouchEventArgs::get_Touches()
extern "C" Object_t* TouchEventArgs_get_Touches_m1220 (TouchEventArgs_t226 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___U3CTouchesU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void TouchScript.TouchEventArgs::set_Touches(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C" void TouchEventArgs_set_Touches_m3620 (TouchEventArgs_t226 * __this, Object_t* ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___value;
		__this->___U3CTouchesU3Ek__BackingField_1 = L_0;
		return;
	}
}
// TouchScript.Layers.CameraLayer/<sortHits>c__AnonStorey4
#include "TouchScript_TouchScript_Layers_CameraLayer_U3CsortHitsU3Ec__.h"
// TouchScript.Layers.CameraLayer/<sortHits>c__AnonStorey4
#include "TouchScript_TouchScript_Layers_CameraLayer_U3CsortHitsU3Ec__MethodDeclarations.h"
// System.Void TouchScript.Layers.CameraLayer/<sortHits>c__AnonStorey4::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CsortHitsU3Ec__AnonStorey4__ctor_m3621 (U3CsortHitsU3Ec__AnonStorey4_t639 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TouchScript.Layers.CameraLayer/<sortHits>c__AnonStorey4::<>m__4(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" int32_t U3CsortHitsU3Ec__AnonStorey4_U3CU3Em__4_m3622 (U3CsortHitsU3Ec__AnonStorey4_t639 * __this, RaycastHit_t504  ___a, RaycastHit_t504  ___b, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t28  V_1 = {0};
	float V_2 = 0.0f;
	Vector3_t28  V_3 = {0};
	int32_t G_B5_0 = 0;
	{
		Collider_t534 * L_0 = RaycastHit_get_collider_m2753((&___a), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t48 * L_1 = Component_get_transform_m332(L_0, /*hidden argument*/NULL);
		Collider_t534 * L_2 = RaycastHit_get_collider_m2753((&___b), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t48 * L_3 = Component_get_transform_m332(L_2, /*hidden argument*/NULL);
		bool L_4 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}

IL_0024:
	{
		Vector3_t28  L_5 = RaycastHit_get_point_m2755((&___a), /*hidden argument*/NULL);
		Vector3_t28  L_6 = (__this->___cameraPos_0);
		Vector3_t28  L_7 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Vector3_get_sqrMagnitude_m3089((&V_1), /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t28  L_9 = RaycastHit_get_point_m2755((&___b), /*hidden argument*/NULL);
		Vector3_t28  L_10 = (__this->___cameraPos_0);
		Vector3_t28  L_11 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		float L_12 = Vector3_get_sqrMagnitude_m3089((&V_3), /*hidden argument*/NULL);
		V_2 = L_12;
		float L_13 = V_0;
		float L_14 = V_2;
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		G_B5_0 = (-1);
		goto IL_0068;
	}

IL_0067:
	{
		G_B5_0 = 1;
	}

IL_0068:
	{
		return G_B5_0;
	}
}
// TouchScript.Layers.CameraLayer
#include "TouchScript_TouchScript_Layers_CameraLayer.h"
// TouchScript.Layers.CameraLayer
#include "TouchScript_TouchScript_Layers_CameraLayerMethodDeclarations.h"
// TouchScript.Layers.CameraLayerBase
#include "TouchScript_TouchScript_Layers_CameraLayerBase.h"
// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
// TouchScript.Layers.TouchLayer/LayerHitResult
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHitResult.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0.h"
// TouchScript.Layers.CameraLayerBase
#include "TouchScript_TouchScript_Layers_CameraLayerBaseMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0MethodDeclarations.h"
struct HitTestU5BU5D_t700;
// Declaration !!0[] UnityEngine.Component::GetComponents<TouchScript.Hit.HitTest>()
// !!0[] UnityEngine.Component::GetComponents<TouchScript.Hit.HitTest>()
#define Component_GetComponents_TisHitTest_t626_m3892(__this, method) (( HitTestU5BU5D_t700* (*) (Component_t102 *, const MethodInfo*))Component_GetComponents_TisObject_t_m1209_gshared)(__this, method)
// System.Void TouchScript.Layers.CameraLayer::.ctor()
// TouchScript.Layers.CameraLayerBase
#include "TouchScript_TouchScript_Layers_CameraLayerBaseMethodDeclarations.h"
extern "C" void CameraLayer__ctor_m3623 (CameraLayer_t640 * __this, const MethodInfo* method)
{
	{
		CameraLayerBase__ctor_m3635(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Layers.CameraLayer::Awake()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisTransform_t48_m3120_MethodInfo_var;
extern "C" void CameraLayer_Awake_m3624 (CameraLayer_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisTransform_t48_m3120_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483961);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraLayerBase_Awake_m3641(__this, /*hidden argument*/NULL);
		Transform_t48 * L_0 = Component_GetComponent_TisTransform_t48_m3120(__this, /*hidden argument*/Component_GetComponent_TisTransform_t48_m3120_MethodInfo_var);
		__this->___cachedTransform_7 = L_0;
		return;
	}
}
// System.Void TouchScript.Layers.CameraLayer::OnEnable()
// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
extern TypeInfo* List_1_t642_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3890_MethodInfo_var;
extern "C" void CameraLayer_OnEnable_m3625 (CameraLayer_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		List_1__ctor_m3890_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484086);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t642 * L_0 = (List_1_t642 *)il2cpp_codegen_object_new (List_1_t642_il2cpp_TypeInfo_var);
		List_1__ctor_m3890(L_0, ((int32_t)20), /*hidden argument*/List_1__ctor_m3890_MethodInfo_var);
		__this->___sortedHits_6 = L_0;
		return;
	}
}
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.CameraLayer::castRay(UnityEngine.Ray,TouchScript.Hit.ITouchHit&)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// TouchScript.Layers.CameraLayer
#include "TouchScript_TouchScript_Layers_CameraLayerMethodDeclarations.h"
extern TypeInfo* RaycastHit_t504_il2cpp_TypeInfo_var;
extern "C" int32_t CameraLayer_castRay_m3626 (CameraLayer_t640 * __this, Ray_t529  ___ray, Object_t ** ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RaycastHit_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHitU5BU5D_t533* V_0 = {0};
	RaycastHit_t504  V_1 = {0};
	RaycastHit_t504  V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = {0};
	{
		Object_t ** L_0 = ___hit;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		Ray_t529  L_1 = ___ray;
		LayerMask_t29  L_2 = CameraLayerBase_get_LayerMask_m3636(__this, /*hidden argument*/NULL);
		int32_t L_3 = LayerMask_op_Implicit_m344(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		RaycastHitU5BU5D_t533* L_4 = Physics_RaycastAll_m2750(NULL /*static, unused*/, L_1, (std::numeric_limits<float>::infinity()), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		RaycastHitU5BU5D_t533* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)(((Array_t *)L_5)->max_length))))
		{
			goto IL_0024;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0024:
	{
		RaycastHitU5BU5D_t533* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		RaycastHitU5BU5D_t533* L_7 = V_0;
		CameraLayer_sortHits_m3628(__this, L_7, /*hidden argument*/NULL);
		Initobj (RaycastHit_t504_il2cpp_TypeInfo_var, (&V_2));
		RaycastHit_t504  L_8 = V_2;
		V_1 = L_8;
		V_3 = 0;
		goto IL_007e;
	}

IL_0045:
	{
		List_1_t642 * L_9 = (__this->___sortedHits_6);
		int32_t L_10 = V_3;
		NullCheck(L_9);
		RaycastHit_t504  L_11 = (RaycastHit_t504 )VirtFuncInvoker1< RaycastHit_t504 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::get_Item(System.Int32) */, L_9, L_10);
		V_1 = L_11;
		RaycastHit_t504  L_12 = V_1;
		Object_t ** L_13 = ___hit;
		int32_t L_14 = CameraLayer_doHit_m3627(__this, L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		int32_t L_15 = V_4;
		if (((int32_t)((int32_t)L_15-(int32_t)1)) == 0)
		{
			goto IL_0076;
		}
		if (((int32_t)((int32_t)L_15-(int32_t)1)) == 1)
		{
			goto IL_007a;
		}
		if (((int32_t)((int32_t)L_15-(int32_t)1)) == 2)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_007a;
	}

IL_0076:
	{
		return (int32_t)(1);
	}

IL_0078:
	{
		return (int32_t)(2);
	}

IL_007a:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_007e:
	{
		int32_t L_17 = V_3;
		List_1_t642 * L_18 = (__this->___sortedHits_6);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::get_Count() */, L_18);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_00c3;
	}

IL_0094:
	{
		RaycastHitU5BU5D_t533* L_20 = V_0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		Object_t ** L_21 = ___hit;
		int32_t L_22 = CameraLayer_doHit_m3627(__this, (*(RaycastHit_t504 *)((RaycastHit_t504 *)(RaycastHit_t504 *)SZArrayLdElema(L_20, 0, sizeof(RaycastHit_t504 )))), L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		int32_t L_23 = V_4;
		if (!L_23)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_00bd;
		}
	}
	{
		goto IL_00c1;
	}

IL_00bd:
	{
		return (int32_t)(1);
	}

IL_00bf:
	{
		return (int32_t)(0);
	}

IL_00c1:
	{
		return (int32_t)(2);
	}

IL_00c3:
	{
		return (int32_t)(2);
	}
}
// TouchScript.Hit.HitTest/ObjectHitResult TouchScript.Layers.CameraLayer::doHit(UnityEngine.RaycastHit,TouchScript.Hit.ITouchHit&)
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// TouchScript.Hit.TouchHitFactory
#include "TouchScript_TouchScript_Hit_TouchHitFactoryMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern TypeInfo* ITouchHitFactory_t679_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponents_TisHitTest_t626_m3892_MethodInfo_var;
extern "C" int32_t CameraLayer_doHit_m3627 (CameraLayer_t640 * __this, RaycastHit_t504  ___raycastHit, Object_t ** ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchHitFactory_t679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		Component_GetComponents_TisHitTest_t626_m3892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484087);
		s_Il2CppMethodIntialized = true;
	}
	HitTestU5BU5D_t700* V_0 = {0};
	int32_t V_1 = {0};
	HitTestU5BU5D_t700* V_2 = {0};
	int32_t V_3 = 0;
	HitTest_t626 * V_4 = {0};
	{
		Object_t ** L_0 = ___hit;
		Object_t * L_1 = TouchHitFactory_get_Instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		RaycastHit_t504  L_2 = ___raycastHit;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, RaycastHit_t504  >::Invoke(0 /* TouchScript.Hit.ITouchHit TouchScript.Hit.ITouchHitFactory::GetTouchHit(UnityEngine.RaycastHit) */, ITouchHitFactory_t679_il2cpp_TypeInfo_var, L_1, L_2);
		*((Object_t **)(L_0)) = (Object_t *)L_3;
		Transform_t48 * L_4 = RaycastHit_get_transform_m3891((&___raycastHit), /*hidden argument*/NULL);
		NullCheck(L_4);
		HitTestU5BU5D_t700* L_5 = Component_GetComponents_TisHitTest_t626_m3892(L_4, /*hidden argument*/Component_GetComponents_TisHitTest_t626_m3892_MethodInfo_var);
		V_0 = L_5;
		HitTestU5BU5D_t700* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)(((Array_t *)L_6)->max_length))))
		{
			goto IL_0024;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0024:
	{
		V_1 = 1;
		HitTestU5BU5D_t700* L_7 = V_0;
		V_2 = L_7;
		V_3 = 0;
		goto IL_0066;
	}

IL_002f:
	{
		HitTestU5BU5D_t700* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_4 = (*(HitTest_t626 **)(HitTest_t626 **)SZArrayLdElema(L_8, L_10, sizeof(HitTest_t626 *)));
		HitTest_t626 * L_11 = V_4;
		NullCheck(L_11);
		bool L_12 = Behaviour_get_enabled_m2686(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0062;
	}

IL_0045:
	{
		HitTest_t626 * L_13 = V_4;
		Object_t ** L_14 = ___hit;
		NullCheck(L_13);
		int32_t L_15 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* TouchScript.Hit.HitTest/ObjectHitResult TouchScript.Hit.HitTest::IsHit(TouchScript.Hit.ITouchHit) */, L_13, (*((Object_t **)L_14)));
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)2)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0062;
		}
	}

IL_005d:
	{
		goto IL_006f;
	}

IL_0062:
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0066:
	{
		int32_t L_19 = V_3;
		HitTestU5BU5D_t700* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_002f;
		}
	}

IL_006f:
	{
		int32_t L_21 = V_1;
		return L_21;
	}
}
// System.Void TouchScript.Layers.CameraLayer::sortHits(UnityEngine.RaycastHit[])
#include "UnityEngine_ArrayTypes.h"
// TouchScript.Layers.CameraLayer/<sortHits>c__AnonStorey4
#include "TouchScript_TouchScript_Layers_CameraLayer_U3CsortHitsU3Ec__MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0MethodDeclarations.h"
extern TypeInfo* U3CsortHitsU3Ec__AnonStorey4_t639_il2cpp_TypeInfo_var;
extern TypeInfo* Comparison_1_t328_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_AddRange_m3893_MethodInfo_var;
extern const MethodInfo* U3CsortHitsU3Ec__AnonStorey4_U3CU3Em__4_m3622_MethodInfo_var;
extern const MethodInfo* Comparison_1__ctor_m2751_MethodInfo_var;
extern const MethodInfo* List_1_Sort_m3894_MethodInfo_var;
extern "C" void CameraLayer_sortHits_m3628 (CameraLayer_t640 * __this, RaycastHitU5BU5D_t533* ___hits, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CsortHitsU3Ec__AnonStorey4_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		Comparison_1_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		List_1_AddRange_m3893_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484088);
		U3CsortHitsU3Ec__AnonStorey4_U3CU3Em__4_m3622_MethodInfo_var = il2cpp_codegen_method_info_from_index(441);
		Comparison_1__ctor_m2751_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483824);
		List_1_Sort_m3894_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484090);
		s_Il2CppMethodIntialized = true;
	}
	U3CsortHitsU3Ec__AnonStorey4_t639 * V_0 = {0};
	{
		U3CsortHitsU3Ec__AnonStorey4_t639 * L_0 = (U3CsortHitsU3Ec__AnonStorey4_t639 *)il2cpp_codegen_object_new (U3CsortHitsU3Ec__AnonStorey4_t639_il2cpp_TypeInfo_var);
		U3CsortHitsU3Ec__AnonStorey4__ctor_m3621(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CsortHitsU3Ec__AnonStorey4_t639 * L_1 = V_0;
		Transform_t48 * L_2 = (__this->___cachedTransform_7);
		NullCheck(L_2);
		Vector3_t28  L_3 = Transform_get_position_m335(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___cameraPos_0 = L_3;
		List_1_t642 * L_4 = (__this->___sortedHits_6);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Clear() */, L_4);
		List_1_t642 * L_5 = (__this->___sortedHits_6);
		RaycastHitU5BU5D_t533* L_6 = ___hits;
		NullCheck(L_5);
		List_1_AddRange_m3893(L_5, (Object_t*)(Object_t*)L_6, /*hidden argument*/List_1_AddRange_m3893_MethodInfo_var);
		List_1_t642 * L_7 = (__this->___sortedHits_6);
		U3CsortHitsU3Ec__AnonStorey4_t639 * L_8 = V_0;
		IntPtr_t L_9 = { (void*)U3CsortHitsU3Ec__AnonStorey4_U3CU3Em__4_m3622_MethodInfo_var };
		Comparison_1_t328 * L_10 = (Comparison_1_t328 *)il2cpp_codegen_object_new (Comparison_1_t328_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m2751(L_10, L_8, L_9, /*hidden argument*/Comparison_1__ctor_m2751_MethodInfo_var);
		NullCheck(L_7);
		List_1_Sort_m3894(L_7, L_10, /*hidden argument*/List_1_Sort_m3894_MethodInfo_var);
		return;
	}
}
// TouchScript.Layers.CameraLayer2D
#include "TouchScript_TouchScript_Layers_CameraLayer2D.h"
// TouchScript.Layers.CameraLayer2D
#include "TouchScript_TouchScript_Layers_CameraLayer2DMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_33.h"
// System.Comparison`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Comparison_1_gen_3.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// System.Comparison`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
struct SpriteRenderer_t140;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t140_m3900(__this, method) (( SpriteRenderer_t140 * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
// System.Void TouchScript.Layers.CameraLayer2D::.ctor()
// TouchScript.Layers.CameraLayerBase
#include "TouchScript_TouchScript_Layers_CameraLayerBaseMethodDeclarations.h"
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern "C" void CameraLayer2D__ctor_m3629 (CameraLayer2D_t643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___sortedLayerIds_6 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, 0));
		CameraLayerBase__ctor_m3635(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Layers.CameraLayer2D::OnEnable()
// System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"
extern TypeInfo* List_1_t644_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3895_MethodInfo_var;
extern "C" void CameraLayer2D_OnEnable_m3630 (CameraLayer2D_t643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(431);
		List_1__ctor_m3895_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484091);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t644 * L_0 = (List_1_t644 *)il2cpp_codegen_object_new (List_1_t644_il2cpp_TypeInfo_var);
		List_1__ctor_m3895(L_0, /*hidden argument*/List_1__ctor_m3895_MethodInfo_var);
		__this->___sortedHits_7 = L_0;
		return;
	}
}
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.CameraLayer2D::castRay(UnityEngine.Ray,TouchScript.Hit.ITouchHit&)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// TouchScript.Layers.CameraLayer2D
#include "TouchScript_TouchScript_Layers_CameraLayer2DMethodDeclarations.h"
extern TypeInfo* Physics2D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* RaycastHit2D_t532_il2cpp_TypeInfo_var;
extern "C" int32_t CameraLayer2D_castRay_m3631 (CameraLayer2D_t643 * __this, Ray_t529  ___ray, Object_t ** ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		RaycastHit2D_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit2DU5BU5D_t530* V_0 = {0};
	RaycastHit2D_t532  V_1 = {0};
	RaycastHit2D_t532  V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = {0};
	{
		Object_t ** L_0 = ___hit;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		Ray_t529  L_1 = ___ray;
		LayerMask_t29  L_2 = CameraLayerBase_get_LayerMask_m3636(__this, /*hidden argument*/NULL);
		int32_t L_3 = LayerMask_op_Implicit_m344(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t531_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t530* L_4 = Physics2D_GetRayIntersectionAll_m3896(NULL /*static, unused*/, L_1, (std::numeric_limits<float>::infinity()), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		RaycastHit2DU5BU5D_t530* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)(((Array_t *)L_5)->max_length))))
		{
			goto IL_0024;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0024:
	{
		RaycastHit2DU5BU5D_t530* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		RaycastHit2DU5BU5D_t530* L_7 = V_0;
		CameraLayer2D_sortHits_m3633(__this, L_7, /*hidden argument*/NULL);
		Initobj (RaycastHit2D_t532_il2cpp_TypeInfo_var, (&V_2));
		RaycastHit2D_t532  L_8 = V_2;
		V_1 = L_8;
		V_3 = 0;
		goto IL_007e;
	}

IL_0045:
	{
		List_1_t644 * L_9 = (__this->___sortedHits_7);
		int32_t L_10 = V_3;
		NullCheck(L_9);
		RaycastHit2D_t532  L_11 = (RaycastHit2D_t532 )VirtFuncInvoker1< RaycastHit2D_t532 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::get_Item(System.Int32) */, L_9, L_10);
		V_1 = L_11;
		RaycastHit2D_t532  L_12 = V_1;
		Object_t ** L_13 = ___hit;
		int32_t L_14 = CameraLayer2D_doHit_m3632(__this, L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		int32_t L_15 = V_4;
		if (((int32_t)((int32_t)L_15-(int32_t)1)) == 0)
		{
			goto IL_0076;
		}
		if (((int32_t)((int32_t)L_15-(int32_t)1)) == 1)
		{
			goto IL_007a;
		}
		if (((int32_t)((int32_t)L_15-(int32_t)1)) == 2)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_007a;
	}

IL_0076:
	{
		return (int32_t)(1);
	}

IL_0078:
	{
		return (int32_t)(2);
	}

IL_007a:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_007e:
	{
		int32_t L_17 = V_3;
		List_1_t644 * L_18 = (__this->___sortedHits_7);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::get_Count() */, L_18);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_00c3;
	}

IL_0094:
	{
		RaycastHit2DU5BU5D_t530* L_20 = V_0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		Object_t ** L_21 = ___hit;
		int32_t L_22 = CameraLayer2D_doHit_m3632(__this, (*(RaycastHit2D_t532 *)((RaycastHit2D_t532 *)(RaycastHit2D_t532 *)SZArrayLdElema(L_20, 0, sizeof(RaycastHit2D_t532 )))), L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		int32_t L_23 = V_4;
		if (!L_23)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_00bd;
		}
	}
	{
		goto IL_00c1;
	}

IL_00bd:
	{
		return (int32_t)(1);
	}

IL_00bf:
	{
		return (int32_t)(0);
	}

IL_00c1:
	{
		return (int32_t)(2);
	}

IL_00c3:
	{
		return (int32_t)(2);
	}
}
// TouchScript.Hit.HitTest/ObjectHitResult TouchScript.Layers.CameraLayer2D::doHit(UnityEngine.RaycastHit2D,TouchScript.Hit.ITouchHit&)
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// TouchScript.Hit.TouchHitFactory
#include "TouchScript_TouchScript_Hit_TouchHitFactoryMethodDeclarations.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern TypeInfo* ITouchHitFactory_t679_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponents_TisHitTest_t626_m3892_MethodInfo_var;
extern "C" int32_t CameraLayer2D_doHit_m3632 (CameraLayer2D_t643 * __this, RaycastHit2D_t532  ___raycastHit, Object_t ** ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchHitFactory_t679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		Component_GetComponents_TisHitTest_t626_m3892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484087);
		s_Il2CppMethodIntialized = true;
	}
	HitTestU5BU5D_t700* V_0 = {0};
	int32_t V_1 = {0};
	HitTestU5BU5D_t700* V_2 = {0};
	int32_t V_3 = 0;
	HitTest_t626 * V_4 = {0};
	{
		Object_t ** L_0 = ___hit;
		Object_t * L_1 = TouchHitFactory_get_Instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		RaycastHit2D_t532  L_2 = ___raycastHit;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, RaycastHit2D_t532  >::Invoke(1 /* TouchScript.Hit.ITouchHit TouchScript.Hit.ITouchHitFactory::GetTouchHit(UnityEngine.RaycastHit2D) */, ITouchHitFactory_t679_il2cpp_TypeInfo_var, L_1, L_2);
		*((Object_t **)(L_0)) = (Object_t *)L_3;
		Transform_t48 * L_4 = RaycastHit2D_get_transform_m2743((&___raycastHit), /*hidden argument*/NULL);
		NullCheck(L_4);
		HitTestU5BU5D_t700* L_5 = Component_GetComponents_TisHitTest_t626_m3892(L_4, /*hidden argument*/Component_GetComponents_TisHitTest_t626_m3892_MethodInfo_var);
		V_0 = L_5;
		HitTestU5BU5D_t700* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)(((Array_t *)L_6)->max_length))))
		{
			goto IL_0024;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0024:
	{
		V_1 = 1;
		HitTestU5BU5D_t700* L_7 = V_0;
		V_2 = L_7;
		V_3 = 0;
		goto IL_0066;
	}

IL_002f:
	{
		HitTestU5BU5D_t700* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_4 = (*(HitTest_t626 **)(HitTest_t626 **)SZArrayLdElema(L_8, L_10, sizeof(HitTest_t626 *)));
		HitTest_t626 * L_11 = V_4;
		NullCheck(L_11);
		bool L_12 = Behaviour_get_enabled_m2686(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0062;
	}

IL_0045:
	{
		HitTest_t626 * L_13 = V_4;
		Object_t ** L_14 = ___hit;
		NullCheck(L_13);
		int32_t L_15 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* TouchScript.Hit.HitTest/ObjectHitResult TouchScript.Hit.HitTest::IsHit(TouchScript.Hit.ITouchHit) */, L_13, (*((Object_t **)L_14)));
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)2)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0062;
		}
	}

IL_005d:
	{
		goto IL_006f;
	}

IL_0062:
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0066:
	{
		int32_t L_19 = V_3;
		HitTestU5BU5D_t700* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_002f;
		}
	}

IL_006f:
	{
		int32_t L_21 = V_1;
		return L_21;
	}
}
// System.Void TouchScript.Layers.CameraLayer2D::sortHits(UnityEngine.RaycastHit2D[])
#include "UnityEngine_ArrayTypes.h"
// System.Comparison`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
extern TypeInfo* Comparison_1_t701_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_AddRange_m3897_MethodInfo_var;
extern const MethodInfo* CameraLayer2D_U3CsortHitsU3Em__5_m3634_MethodInfo_var;
extern const MethodInfo* Comparison_1__ctor_m3898_MethodInfo_var;
extern const MethodInfo* List_1_Sort_m3899_MethodInfo_var;
extern "C" void CameraLayer2D_sortHits_m3633 (CameraLayer2D_t643 * __this, RaycastHit2DU5BU5D_t530* ___hits, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparison_1_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		List_1_AddRange_m3897_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484092);
		CameraLayer2D_U3CsortHitsU3Em__5_m3634_MethodInfo_var = il2cpp_codegen_method_info_from_index(445);
		Comparison_1__ctor_m3898_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484094);
		List_1_Sort_m3899_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484095);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t644 * L_0 = (__this->___sortedHits_7);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>::Clear() */, L_0);
		List_1_t644 * L_1 = (__this->___sortedHits_7);
		RaycastHit2DU5BU5D_t530* L_2 = ___hits;
		NullCheck(L_1);
		List_1_AddRange_m3897(L_1, (Object_t*)(Object_t*)L_2, /*hidden argument*/List_1_AddRange_m3897_MethodInfo_var);
		List_1_t644 * L_3 = (__this->___sortedHits_7);
		IntPtr_t L_4 = { (void*)CameraLayer2D_U3CsortHitsU3Em__5_m3634_MethodInfo_var };
		Comparison_1_t701 * L_5 = (Comparison_1_t701 *)il2cpp_codegen_object_new (Comparison_1_t701_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m3898(L_5, __this, L_4, /*hidden argument*/Comparison_1__ctor_m3898_MethodInfo_var);
		NullCheck(L_3);
		List_1_Sort_m3899(L_3, L_5, /*hidden argument*/List_1_Sort_m3899_MethodInfo_var);
		return;
	}
}
// System.Int32 TouchScript.Layers.CameraLayer2D::<sortHits>m__5(UnityEngine.RaycastHit2D,UnityEngine.RaycastHit2D)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t140_m3900_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern "C" int32_t CameraLayer2D_U3CsortHitsU3Em__5_m3634 (CameraLayer2D_t643 * __this, RaycastHit2D_t532  ___a, RaycastHit2D_t532  ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t140_m3900_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484096);
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	SpriteRenderer_t140 * V_0 = {0};
	SpriteRenderer_t140 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t28  V_4 = {0};
	float V_5 = 0.0f;
	Vector3_t28  V_6 = {0};
	float V_7 = 0.0f;
	Vector3_t28  V_8 = {0};
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B21_0 = 0;
	{
		Collider2D_t224 * L_0 = RaycastHit2D_get_collider_m2742((&___a), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t48 * L_1 = Component_get_transform_m332(L_0, /*hidden argument*/NULL);
		Collider2D_t224 * L_2 = RaycastHit2D_get_collider_m2742((&___b), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t48 * L_3 = Component_get_transform_m332(L_2, /*hidden argument*/NULL);
		bool L_4 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}

IL_0024:
	{
		Transform_t48 * L_5 = RaycastHit2D_get_transform_m2743((&___a), /*hidden argument*/NULL);
		NullCheck(L_5);
		SpriteRenderer_t140 * L_6 = Component_GetComponent_TisSpriteRenderer_t140_m3900(L_5, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t140_m3900_MethodInfo_var);
		V_0 = L_6;
		Transform_t48 * L_7 = RaycastHit2D_get_transform_m2743((&___b), /*hidden argument*/NULL);
		NullCheck(L_7);
		SpriteRenderer_t140 * L_8 = Component_GetComponent_TisSpriteRenderer_t140_m3900(L_7, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t140_m3900_MethodInfo_var);
		V_1 = L_8;
		SpriteRenderer_t140 * L_9 = V_0;
		bool L_10 = Object_op_Inequality_m268(NULL /*static, unused*/, L_9, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00dc;
		}
	}
	{
		SpriteRenderer_t140 * L_11 = V_1;
		bool L_12 = Object_op_Inequality_m268(NULL /*static, unused*/, L_11, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00dc;
		}
	}
	{
		SpriteRenderer_t140 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = Renderer_get_sortingLayerID_m2747(L_13, /*hidden argument*/NULL);
		Int32U5BU5D_t109* L_15 = (__this->___sortedLayerIds_6);
		NullCheck(L_15);
		if ((((int32_t)L_14) >= ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_007b;
		}
	}
	{
		Int32U5BU5D_t109* L_16 = (__this->___sortedLayerIds_6);
		SpriteRenderer_t140 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = Renderer_get_sortingLayerID_m2747(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_18);
		int32_t L_19 = L_18;
		G_B7_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_19, sizeof(int32_t)));
		goto IL_007c;
	}

IL_007b:
	{
		G_B7_0 = 0;
	}

IL_007c:
	{
		V_2 = G_B7_0;
		SpriteRenderer_t140 * L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = Renderer_get_sortingLayerID_m2747(L_20, /*hidden argument*/NULL);
		Int32U5BU5D_t109* L_22 = (__this->___sortedLayerIds_6);
		NullCheck(L_22);
		if ((((int32_t)L_21) >= ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		Int32U5BU5D_t109* L_23 = (__this->___sortedLayerIds_6);
		SpriteRenderer_t140 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = Renderer_get_sortingLayerID_m2747(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		int32_t L_26 = L_25;
		G_B10_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_26, sizeof(int32_t)));
		goto IL_00a3;
	}

IL_00a2:
	{
		G_B10_0 = 0;
	}

IL_00a3:
	{
		V_3 = G_B10_0;
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		if ((((int32_t)L_27) >= ((int32_t)L_28)))
		{
			goto IL_00ad;
		}
	}
	{
		return 1;
	}

IL_00ad:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00b6;
		}
	}
	{
		return (-1);
	}

IL_00b6:
	{
		SpriteRenderer_t140 * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = Renderer_get_sortingOrder_m2748(L_31, /*hidden argument*/NULL);
		SpriteRenderer_t140 * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = Renderer_get_sortingOrder_m2748(L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_32) >= ((int32_t)L_34)))
		{
			goto IL_00c9;
		}
	}
	{
		return 1;
	}

IL_00c9:
	{
		SpriteRenderer_t140 * L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = Renderer_get_sortingOrder_m2748(L_35, /*hidden argument*/NULL);
		SpriteRenderer_t140 * L_37 = V_1;
		NullCheck(L_37);
		int32_t L_38 = Renderer_get_sortingOrder_m2748(L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_36) <= ((int32_t)L_38)))
		{
			goto IL_00dc;
		}
	}
	{
		return (-1);
	}

IL_00dc:
	{
		Camera_t32 * L_39 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		NullCheck(L_39);
		Transform_t48 * L_40 = Component_get_transform_m332(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t28  L_41 = Transform_get_position_m335(L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		Transform_t48 * L_42 = RaycastHit2D_get_transform_m2743((&___a), /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t28  L_43 = Transform_get_position_m335(L_42, /*hidden argument*/NULL);
		Vector3_t28  L_44 = V_4;
		Vector3_t28  L_45 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		V_6 = L_45;
		float L_46 = Vector3_get_sqrMagnitude_m3089((&V_6), /*hidden argument*/NULL);
		V_5 = L_46;
		Transform_t48 * L_47 = RaycastHit2D_get_transform_m2743((&___b), /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_t28  L_48 = Transform_get_position_m335(L_47, /*hidden argument*/NULL);
		Vector3_t28  L_49 = V_4;
		Vector3_t28  L_50 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		V_8 = L_50;
		float L_51 = Vector3_get_sqrMagnitude_m3089((&V_8), /*hidden argument*/NULL);
		V_7 = L_51;
		float L_52 = V_5;
		float L_53 = V_7;
		if ((!(((float)L_52) < ((float)L_53))))
		{
			goto IL_0139;
		}
	}
	{
		G_B21_0 = (-1);
		goto IL_013a;
	}

IL_0139:
	{
		G_B21_0 = 1;
	}

IL_013a:
	{
		return G_B21_0;
	}
}
// TouchScript.Utils.ProjectionUtils
#include "TouchScript_TouchScript_Utils_ProjectionUtilsMethodDeclarations.h"
// System.Void TouchScript.Layers.CameraLayerBase::.ctor()
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// TouchScript.Layers.TouchLayer
#include "TouchScript_TouchScript_Layers_TouchLayerMethodDeclarations.h"
extern "C" void CameraLayerBase__ctor_m3635 (CameraLayerBase_t641 * __this, const MethodInfo* method)
{
	{
		LayerMask_t29  L_0 = LayerMask_op_Implicit_m309(NULL /*static, unused*/, (-1), /*hidden argument*/NULL);
		__this->___layerMask_4 = L_0;
		TouchLayer__ctor_m3663(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.LayerMask TouchScript.Layers.CameraLayerBase::get_LayerMask()
extern "C" LayerMask_t29  CameraLayerBase_get_LayerMask_m3636 (CameraLayerBase_t641 * __this, const MethodInfo* method)
{
	{
		LayerMask_t29  L_0 = (__this->___layerMask_4);
		return L_0;
	}
}
// System.Void TouchScript.Layers.CameraLayerBase::set_LayerMask(UnityEngine.LayerMask)
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
extern "C" void CameraLayerBase_set_LayerMask_m3637 (CameraLayerBase_t641 * __this, LayerMask_t29  ___value, const MethodInfo* method)
{
	{
		LayerMask_t29  L_0 = ___value;
		__this->___layerMask_4 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TouchScript.Layers.CameraLayerBase::get_WorldProjectionNormal()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Vector3_t28  CameraLayerBase_get_WorldProjectionNormal_m3638 (CameraLayerBase_t641 * __this, const MethodInfo* method)
{
	{
		Camera_t32 * L_0 = (__this->____camera_5);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Vector3_t28  L_2 = Vector3_get_forward_m310(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		Camera_t32 * L_3 = (__this->____camera_5);
		NullCheck(L_3);
		Transform_t48 * L_4 = Component_get_transform_m332(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t28  L_5 = Transform_get_forward_m340(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.CameraLayerBase::Hit(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" int32_t CameraLayerBase_Hit_m3639 (CameraLayerBase_t641 * __this, Vector2_t85  ___position, Object_t ** ___hit, const MethodInfo* method)
{
	Rect_t232  V_0 = {0};
	Ray_t529  V_1 = {0};
	{
		Vector2_t85  L_0 = ___position;
		Object_t ** L_1 = ___hit;
		int32_t L_2 = TouchLayer_Hit_m3667(__this, L_0, L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0010:
	{
		Camera_t32 * L_3 = (__this->____camera_5);
		bool L_4 = Object_op_Equality_m295(NULL /*static, unused*/, L_3, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0023:
	{
		Camera_t32 * L_5 = (__this->____camera_5);
		NullCheck(L_5);
		bool L_6 = Behaviour_get_enabled_m2686(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		Camera_t32 * L_7 = (__this->____camera_5);
		NullCheck(L_7);
		GameObject_t30 * L_8 = Component_get_gameObject_m317(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = GameObject_get_activeInHierarchy_m318(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004a;
		}
	}

IL_0048:
	{
		return (int32_t)(2);
	}

IL_004a:
	{
		Camera_t32 * L_10 = (__this->____camera_5);
		NullCheck(L_10);
		Rect_t232  L_11 = Camera_get_pixelRect_m3901(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector2_t85  L_12 = ___position;
		bool L_13 = Rect_Contains_m3902((&V_0), L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0065:
	{
		Camera_t32 * L_14 = (__this->____camera_5);
		Vector2_t85  L_15 = ___position;
		Vector3_t28  L_16 = Vector2_op_Implicit_m1101(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Ray_t529  L_17 = Camera_ScreenPointToRay_m2738(L_14, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Ray_t529  L_18 = V_1;
		Object_t ** L_19 = ___hit;
		int32_t L_20 = (int32_t)VirtFuncInvoker2< int32_t, Ray_t529 , Object_t ** >::Invoke(15 /* TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.CameraLayerBase::castRay(UnityEngine.Ray,TouchScript.Hit.ITouchHit&) */, __this, L_18, L_19);
		return L_20;
	}
}
// UnityEngine.Vector3 TouchScript.Layers.CameraLayerBase::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane)
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// TouchScript.Utils.ProjectionUtils
#include "TouchScript_TouchScript_Utils_ProjectionUtilsMethodDeclarations.h"
extern "C" Vector3_t28  CameraLayerBase_ProjectTo_m3640 (CameraLayerBase_t641 * __this, Vector2_t85  ___screenPosition, Plane_t554  ___projectionPlane, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___screenPosition;
		Camera_t32 * L_1 = (__this->____camera_5);
		Plane_t554  L_2 = ___projectionPlane;
		Vector3_t28  L_3 = ProjectionUtils_CameraToPlaneProjection_m3796(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void TouchScript.Layers.CameraLayerBase::Awake()
extern "C" void CameraLayerBase_Awake_m3641 (CameraLayerBase_t641 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(14 /* System.Void TouchScript.Layers.CameraLayerBase::updateCamera() */, __this);
		TouchLayer_Awake_m3669(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Layers.CameraLayerBase::setName()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void CameraLayerBase_setName_m3642 (CameraLayerBase_t641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (((TouchLayer_t624 *)__this)->___Name_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m3000(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		Camera_t32 * L_2 = (__this->____camera_5);
		bool L_3 = Object_op_Inequality_m268(NULL /*static, unused*/, L_2, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		Camera_t32 * L_4 = (__this->____camera_5);
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_m348(L_4, /*hidden argument*/NULL);
		((TouchLayer_t624 *)__this)->___Name_3 = L_5;
	}

IL_0032:
	{
		return;
	}
}
// System.Void TouchScript.Layers.CameraLayerBase::updateCamera()
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m280_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral348;
extern Il2CppCodeGenString* _stringLiteral349;
extern "C" void CameraLayerBase_updateCamera_m3643 (CameraLayerBase_t641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Component_GetComponent_TisCamera_t32_m280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral348 = il2cpp_codegen_string_literal_from_index(348);
		_stringLiteral349 = il2cpp_codegen_string_literal_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t32 * L_0 = Component_GetComponent_TisCamera_t32_m280(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m280_MethodInfo_var);
		__this->____camera_5 = L_0;
		Camera_t32 * L_1 = (__this->____camera_5);
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Camera_t32 * L_3 = Camera_get_main_m1121(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____camera_5 = L_3;
	}

IL_0028:
	{
		Camera_t32 * L_4 = (__this->____camera_5);
		bool L_5 = Object_op_Inequality_m268(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_003a:
	{
		String_t* L_6 = Object_get_name_m348(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m349(NULL /*static, unused*/, _stringLiteral348, L_6, _stringLiteral349, /*hidden argument*/NULL);
		Debug_LogError_m380(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Layers.FullscreenLayer/LayerType
#include "TouchScript_TouchScript_Layers_FullscreenLayer_LayerType.h"
// TouchScript.Layers.FullscreenLayer/LayerType
#include "TouchScript_TouchScript_Layers_FullscreenLayer_LayerTypeMethodDeclarations.h"
// TouchScript.Layers.FullscreenLayer
#include "TouchScript_TouchScript_Layers_FullscreenLayer.h"
// TouchScript.Layers.FullscreenLayer
#include "TouchScript_TouchScript_Layers_FullscreenLayerMethodDeclarations.h"
// System.Void TouchScript.Layers.FullscreenLayer::.ctor()
// TouchScript.Layers.TouchLayer
#include "TouchScript_TouchScript_Layers_TouchLayerMethodDeclarations.h"
extern "C" void FullscreenLayer__ctor_m3644 (FullscreenLayer_t646 * __this, const MethodInfo* method)
{
	{
		TouchLayer__ctor_m3663(__this, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Layers.FullscreenLayer/LayerType TouchScript.Layers.FullscreenLayer::get_Type()
extern "C" int32_t FullscreenLayer_get_Type_m3645 (FullscreenLayer_t646 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___type_4);
		return L_0;
	}
}
// System.Void TouchScript.Layers.FullscreenLayer::set_Type(TouchScript.Layers.FullscreenLayer/LayerType)
// TouchScript.Layers.FullscreenLayer/LayerType
#include "TouchScript_TouchScript_Layers_FullscreenLayer_LayerType.h"
// TouchScript.Layers.FullscreenLayer
#include "TouchScript_TouchScript_Layers_FullscreenLayerMethodDeclarations.h"
extern "C" void FullscreenLayer_set_Type_m3646 (FullscreenLayer_t646 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (__this->___type_4);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = ___value;
		__this->___type_4 = L_2;
		FullscreenLayer_updateCamera_m3655(__this, /*hidden argument*/NULL);
		FullscreenLayer_cacheCameraTransform_m3656(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Camera TouchScript.Layers.FullscreenLayer::get_Camera()
extern "C" Camera_t32 * FullscreenLayer_get_Camera_m3647 (FullscreenLayer_t646 * __this, const MethodInfo* method)
{
	{
		Camera_t32 * L_0 = (__this->____camera_5);
		return L_0;
	}
}
// System.Void TouchScript.Layers.FullscreenLayer::set_Camera(UnityEngine.Camera)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void FullscreenLayer_set_Camera_m3648 (FullscreenLayer_t646 * __this, Camera_t32 * ___value, const MethodInfo* method)
{
	{
		Camera_t32 * L_0 = ___value;
		Camera_t32 * L_1 = (__this->____camera_5);
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Camera_t32 * L_3 = ___value;
		__this->____camera_5 = L_3;
		Camera_t32 * L_4 = (__this->____camera_5);
		bool L_5 = Object_op_Equality_m295(NULL /*static, unused*/, L_4, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		FullscreenLayer_set_Type_m3646(__this, 2, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0036:
	{
		FullscreenLayer_set_Type_m3646(__this, 1, /*hidden argument*/NULL);
	}

IL_003d:
	{
		VirtActionInvoker0::Invoke(9 /* System.Void TouchScript.Layers.TouchLayer::setName() */, __this);
		return;
	}
}
// UnityEngine.Vector3 TouchScript.Layers.FullscreenLayer::get_WorldProjectionNormal()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Vector3_t28  FullscreenLayer_get_WorldProjectionNormal_m3649 (FullscreenLayer_t646 * __this, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = (__this->___cameraTransform_6);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Transform_t48 * L_2 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t28  L_3 = Transform_get_forward_m340(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		Transform_t48 * L_4 = (__this->___cameraTransform_6);
		NullCheck(L_4);
		Vector3_t28  L_5 = Transform_get_forward_m340(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.FullscreenLayer::Hit(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// TouchScript.Hit.TouchHitFactory
#include "TouchScript_TouchScript_Hit_TouchHitFactoryMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern TypeInfo* ITouchHitFactory_t679_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponents_TisHitTest_t626_m3892_MethodInfo_var;
extern "C" int32_t FullscreenLayer_Hit_m3650 (FullscreenLayer_t646 * __this, Vector2_t85  ___position, Object_t ** ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchHitFactory_t679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		Component_GetComponents_TisHitTest_t626_m3892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484087);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t232  V_0 = {0};
	HitTestU5BU5D_t700* V_1 = {0};
	HitTestU5BU5D_t700* V_2 = {0};
	int32_t V_3 = 0;
	HitTest_t626 * V_4 = {0};
	int32_t V_5 = {0};
	{
		Vector2_t85  L_0 = ___position;
		Object_t ** L_1 = ___hit;
		int32_t L_2 = TouchLayer_Hit_m3667(__this, L_0, L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0010:
	{
		Camera_t32 * L_3 = (__this->____camera_5);
		bool L_4 = Object_op_Inequality_m268(NULL /*static, unused*/, L_3, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		Camera_t32 * L_5 = (__this->____camera_5);
		NullCheck(L_5);
		Rect_t232  L_6 = Camera_get_pixelRect_m3901(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector2_t85  L_7 = ___position;
		bool L_8 = Rect_Contains_m3902((&V_0), L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		return (int32_t)(2);
	}

IL_003c:
	{
		Object_t ** L_9 = ___hit;
		Object_t * L_10 = TouchHitFactory_get_Instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t48 * L_11 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Transform_t48 * >::Invoke(2 /* TouchScript.Hit.ITouchHit TouchScript.Hit.ITouchHitFactory::GetTouchHit(UnityEngine.Transform) */, ITouchHitFactory_t679_il2cpp_TypeInfo_var, L_10, L_11);
		*((Object_t **)(L_9)) = (Object_t *)L_12;
		Transform_t48 * L_13 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		HitTestU5BU5D_t700* L_14 = Component_GetComponents_TisHitTest_t626_m3892(L_13, /*hidden argument*/Component_GetComponents_TisHitTest_t626_m3892_MethodInfo_var);
		V_1 = L_14;
		HitTestU5BU5D_t700* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)(((Array_t *)L_15)->max_length))))
		{
			goto IL_0064;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0064:
	{
		HitTestU5BU5D_t700* L_16 = V_1;
		V_2 = L_16;
		V_3 = 0;
		goto IL_00a4;
	}

IL_006d:
	{
		HitTestU5BU5D_t700* L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(HitTest_t626 **)(HitTest_t626 **)SZArrayLdElema(L_17, L_19, sizeof(HitTest_t626 *)));
		HitTest_t626 * L_20 = V_4;
		NullCheck(L_20);
		bool L_21 = Behaviour_get_enabled_m2686(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00a0;
	}

IL_0083:
	{
		HitTest_t626 * L_22 = V_4;
		Object_t ** L_23 = ___hit;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* TouchScript.Hit.HitTest/ObjectHitResult TouchScript.Hit.HitTest::IsHit(TouchScript.Hit.ITouchHit) */, L_22, (*((Object_t **)L_23)));
		V_5 = L_24;
		int32_t L_25 = V_5;
		if ((((int32_t)L_25) == ((int32_t)2)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_00a0;
		}
	}

IL_009e:
	{
		return (int32_t)(2);
	}

IL_00a0:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_00a4:
	{
		int32_t L_28 = V_3;
		HitTestU5BU5D_t700* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)(((Array_t *)L_29)->max_length))))))
		{
			goto IL_006d;
		}
	}
	{
		return (int32_t)(1);
	}
}
// UnityEngine.Vector3 TouchScript.Layers.FullscreenLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane)
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// TouchScript.Utils.ProjectionUtils
#include "TouchScript_TouchScript_Utils_ProjectionUtilsMethodDeclarations.h"
extern "C" Vector3_t28  FullscreenLayer_ProjectTo_m3651 (FullscreenLayer_t646 * __this, Vector2_t85  ___screenPosition, Plane_t554  ___projectionPlane, const MethodInfo* method)
{
	{
		Camera_t32 * L_0 = (__this->____camera_5);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Vector2_t85  L_2 = ___screenPosition;
		Plane_t554  L_3 = ___projectionPlane;
		Vector3_t28  L_4 = TouchLayer_ProjectTo_m3668(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Vector2_t85  L_5 = ___screenPosition;
		Camera_t32 * L_6 = (__this->____camera_5);
		Plane_t554  L_7 = ___projectionPlane;
		Vector3_t28  L_8 = ProjectionUtils_CameraToPlaneProjection_m3796(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void TouchScript.Layers.FullscreenLayer::Awake()
extern "C" void FullscreenLayer_Awake_m3652 (FullscreenLayer_t646 * __this, const MethodInfo* method)
{
	{
		FullscreenLayer_updateCamera_m3655(__this, /*hidden argument*/NULL);
		FullscreenLayer_cacheCameraTransform_m3656(__this, /*hidden argument*/NULL);
		TouchLayer_Awake_m3669(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Layers.FullscreenLayer::OnEnable()
extern "C" void FullscreenLayer_OnEnable_m3653 (FullscreenLayer_t646 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Layers.FullscreenLayer::setName()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral350;
extern Il2CppCodeGenString* _stringLiteral351;
extern "C" void FullscreenLayer_setName_m3654 (FullscreenLayer_t646 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral350 = il2cpp_codegen_string_literal_from_index(350);
		_stringLiteral351 = il2cpp_codegen_string_literal_from_index(351);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t32 * L_0 = (__this->____camera_5);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		((TouchLayer_t624 *)__this)->___Name_3 = _stringLiteral350;
		goto IL_003c;
	}

IL_0021:
	{
		Camera_t32 * L_2 = (__this->____camera_5);
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m348(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m430(NULL /*static, unused*/, _stringLiteral351, L_3, /*hidden argument*/NULL);
		((TouchLayer_t624 *)__this)->___Name_3 = L_4;
	}

IL_003c:
	{
		return;
	}
}
// System.Void TouchScript.Layers.FullscreenLayer::updateCamera()
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral352;
extern "C" void FullscreenLayer_updateCamera_m3655 (FullscreenLayer_t646 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral352 = il2cpp_codegen_string_literal_from_index(352);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___type_4);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_002a;
		}
		if (L_1 == 1)
		{
			goto IL_0055;
		}
		if (L_1 == 2)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_0055;
	}

IL_001e:
	{
		__this->____camera_5 = (Camera_t32 *)NULL;
		goto IL_0055;
	}

IL_002a:
	{
		Camera_t32 * L_2 = Camera_get_main_m1121(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____camera_5 = L_2;
		Camera_t32 * L_3 = (__this->____camera_5);
		bool L_4 = Object_op_Equality_m295(NULL /*static, unused*/, L_3, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral352, /*hidden argument*/NULL);
	}

IL_0050:
	{
		goto IL_0055;
	}

IL_0055:
	{
		VirtActionInvoker0::Invoke(9 /* System.Void TouchScript.Layers.TouchLayer::setName() */, __this);
		return;
	}
}
// System.Void TouchScript.Layers.FullscreenLayer::cacheCameraTransform()
extern "C" void FullscreenLayer_cacheCameraTransform_m3656 (FullscreenLayer_t646 * __this, const MethodInfo* method)
{
	{
		Camera_t32 * L_0 = (__this->____camera_5);
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		__this->___cameraTransform_6 = (Transform_t48 *)NULL;
		goto IL_002e;
	}

IL_001d:
	{
		Camera_t32 * L_2 = (__this->____camera_5);
		NullCheck(L_2);
		Transform_t48 * L_3 = Component_get_transform_m332(L_2, /*hidden argument*/NULL);
		__this->___cameraTransform_6 = L_3;
	}

IL_002e:
	{
		return;
	}
}
// TouchScript.Layers.TouchLayer/LayerHitResult
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHitResultMethodDeclarations.h"
// TouchScript.Layers.TouchLayer/<lateAwake>c__Iterator2
#include "TouchScript_TouchScript_Layers_TouchLayer_U3ClateAwakeU3Ec__.h"
// TouchScript.Layers.TouchLayer/<lateAwake>c__Iterator2
#include "TouchScript_TouchScript_Layers_TouchLayer_U3ClateAwakeU3Ec__MethodDeclarations.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// System.Void TouchScript.Layers.TouchLayer/<lateAwake>c__Iterator2::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3ClateAwakeU3Ec__Iterator2__ctor_m3657 (U3ClateAwakeU3Ec__Iterator2_t648 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object TouchScript.Layers.TouchLayer/<lateAwake>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3ClateAwakeU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3658 (U3ClateAwakeU3Ec__Iterator2_t648 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object TouchScript.Layers.TouchLayer/<lateAwake>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3ClateAwakeU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m3659 (U3ClateAwakeU3Ec__Iterator2_t648 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean TouchScript.Layers.TouchLayer/<lateAwake>c__Iterator2::MoveNext()
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// TouchScript.TouchManager
#include "TouchScript_TouchScript_TouchManagerMethodDeclarations.h"
extern TypeInfo* WaitForEndOfFrame_t561_il2cpp_TypeInfo_var;
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern "C" bool U3ClateAwakeU3Ec__Iterator2_MoveNext_m3660 (U3ClateAwakeU3Ec__Iterator2_t648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForEndOfFrame_t561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0050;
	}

IL_0021:
	{
		WaitForEndOfFrame_t561 * L_2 = (WaitForEndOfFrame_t561 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t561_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m3047(L_2, /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0052;
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_3 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		TouchLayer_t624 * L_4 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		InterfaceFuncInvoker1< bool, TouchLayer_t624 * >::Invoke(19 /* System.Boolean TouchScript.ITouchManager::AddLayer(TouchScript.Layers.TouchLayer) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_3, L_4);
		__this->___U24PC_0 = (-1);
	}

IL_0050:
	{
		return 0;
	}

IL_0052:
	{
		return 1;
	}
}
// System.Void TouchScript.Layers.TouchLayer/<lateAwake>c__Iterator2::Dispose()
extern "C" void U3ClateAwakeU3Ec__Iterator2_Dispose_m3661 (U3ClateAwakeU3Ec__Iterator2_t648 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void TouchScript.Layers.TouchLayer/<lateAwake>c__Iterator2::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern "C" void U3ClateAwakeU3Ec__Iterator2_Reset_m3662 (U3ClateAwakeU3Ec__Iterator2_t648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1075(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>
#include "mscorlib_System_EventHandler_1_gen_3.h"
// TouchScript.TouchPoint
#include "TouchScript_TouchScript_TouchPoint.h"
// TouchScript.Layers.TouchLayerEventArgs
#include "TouchScript_TouchScript_Layers_TouchLayerEventArgs.h"
// TouchScript.TouchPoint
#include "TouchScript_TouchScript_TouchPointMethodDeclarations.h"
// TouchScript.Layers.TouchLayerEventArgs
#include "TouchScript_TouchScript_Layers_TouchLayerEventArgsMethodDeclarations.h"
// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>
#include "mscorlib_System_EventHandler_1_gen_3MethodDeclarations.h"
// System.Void TouchScript.Layers.TouchLayer::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void TouchLayer__ctor_m3663 (TouchLayer_t624 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.Layers.TouchLayer::add_TouchBegan(System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>)
// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>
#include "mscorlib_System_EventHandler_1_gen_3.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_1_t649_il2cpp_TypeInfo_var;
extern "C" void TouchLayer_add_TouchBegan_m3664 (TouchLayer_t624 * __this, EventHandler_1_t649 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(433);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t649 * L_0 = (__this->___touchBeganInvoker_2);
		EventHandler_1_t649 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchBeganInvoker_2 = ((EventHandler_1_t649 *)CastclassSealed(L_2, EventHandler_1_t649_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.Layers.TouchLayer::remove_TouchBegan(System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>)
extern TypeInfo* EventHandler_1_t649_il2cpp_TypeInfo_var;
extern "C" void TouchLayer_remove_TouchBegan_m3665 (TouchLayer_t624 * __this, EventHandler_1_t649 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(433);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t649 * L_0 = (__this->___touchBeganInvoker_2);
		EventHandler_1_t649 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchBeganInvoker_2 = ((EventHandler_1_t649 *)CastclassSealed(L_2, EventHandler_1_t649_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Vector3 TouchScript.Layers.TouchLayer::get_WorldProjectionNormal()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Vector3_t28  TouchLayer_get_WorldProjectionNormal_m3666 (TouchLayer_t624 * __this, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t28  L_1 = Transform_get_forward_m340(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.TouchLayer::Hit(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" int32_t TouchLayer_Hit_m3667 (TouchLayer_t624 * __this, Vector2_t85  ___position, Object_t ** ___hit, const MethodInfo* method)
{
	{
		Object_t ** L_0 = ___hit;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		bool L_1 = Behaviour_get_enabled_m2686(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_t30 * L_2 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeInHierarchy_m318(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		return (int32_t)(2);
	}

IL_0020:
	{
		return (int32_t)(0);
	}
}
// UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane)
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// TouchScript.Utils.ProjectionUtils
#include "TouchScript_TouchScript_Utils_ProjectionUtilsMethodDeclarations.h"
extern "C" Vector3_t28  TouchLayer_ProjectTo_m3668 (TouchLayer_t624 * __this, Vector2_t85  ___screenPosition, Plane_t554  ___projectionPlane, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___screenPosition;
		Plane_t554  L_1 = ___projectionPlane;
		Vector3_t28  L_2 = ProjectionUtils_ScreenToPlaneProjection_m3797(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void TouchScript.Layers.TouchLayer::Awake()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// TouchScript.Layers.TouchLayer
#include "TouchScript_TouchScript_Layers_TouchLayerMethodDeclarations.h"
extern "C" void TouchLayer_Awake_m3669 (TouchLayer_t624 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(9 /* System.Void TouchScript.Layers.TouchLayer::setName() */, __this);
		bool L_0 = Application_get_isPlaying_m2808(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Object_t * L_1 = TouchLayer_lateAwake_m3680(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m1077(__this, L_1, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void TouchScript.Layers.TouchLayer::OnDestroy()
// TouchScript.TouchManager
#include "TouchScript_TouchScript_TouchManagerMethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern "C" void TouchLayer_OnDestroy_m3670 (TouchLayer_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isPlaying_m2808(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_1 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_2 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceFuncInvoker1< bool, TouchLayer_t624 * >::Invoke(21 /* System.Boolean TouchScript.ITouchManager::RemoveLayer(TouchScript.Layers.TouchLayer) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean TouchScript.Layers.TouchLayer::BeginTouch(TouchScript.TouchPoint)
// TouchScript.TouchPoint
#include "TouchScript_TouchScript_TouchPoint.h"
// TouchScript.TouchPoint
#include "TouchScript_TouchScript_TouchPointMethodDeclarations.h"
// TouchScript.Layers.TouchLayerEventArgs
#include "TouchScript_TouchScript_Layers_TouchLayerEventArgsMethodDeclarations.h"
// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>
#include "mscorlib_System_EventHandler_1_gen_3MethodDeclarations.h"
extern TypeInfo* ITouchHit_t666_il2cpp_TypeInfo_var;
extern TypeInfo* TouchLayerEventArgs_t650_il2cpp_TypeInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3903_MethodInfo_var;
extern "C" bool TouchLayer_BeginTouch_m3671 (TouchLayer_t624 * __this, TouchPoint_t664 * ___touch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchHit_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		TouchLayerEventArgs_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(434);
		EventHandler_1_Invoke_m3903_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484097);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		TouchPoint_t664 * L_0 = ___touch;
		int32_t L_1 = (int32_t)VirtFuncInvoker2< int32_t, Object_t *, Object_t ** >::Invoke(10 /* TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.TouchLayer::beginTouch(TouchScript.ITouch,TouchScript.Hit.ITouchHit&) */, __this, L_0, (&V_0));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		TouchPoint_t664 * L_3 = ___touch;
		NullCheck(L_3);
		TouchPoint_set_Layer_m3784(L_3, __this, /*hidden argument*/NULL);
		TouchPoint_t664 * L_4 = ___touch;
		Object_t * L_5 = V_0;
		NullCheck(L_4);
		TouchPoint_set_Hit_m3782(L_4, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = V_0;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		TouchPoint_t664 * L_7 = ___touch;
		Object_t * L_8 = V_0;
		NullCheck(L_8);
		Transform_t48 * L_9 = (Transform_t48 *)InterfaceFuncInvoker0< Transform_t48 * >::Invoke(0 /* UnityEngine.Transform TouchScript.Hit.ITouchHit::get_Transform() */, ITouchHit_t666_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_7);
		TouchPoint_set_Target_m3777(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0031:
	{
		EventHandler_1_t649 * L_10 = (__this->___touchBeganInvoker_2);
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		EventHandler_1_t649 * L_11 = (__this->___touchBeganInvoker_2);
		TouchPoint_t664 * L_12 = ___touch;
		TouchLayerEventArgs_t650 * L_13 = (TouchLayerEventArgs_t650 *)il2cpp_codegen_object_new (TouchLayerEventArgs_t650_il2cpp_TypeInfo_var);
		TouchLayerEventArgs__ctor_m3681(L_13, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		EventHandler_1_Invoke_m3903(L_11, __this, L_13, /*hidden argument*/EventHandler_1_Invoke_m3903_MethodInfo_var);
	}

IL_004e:
	{
		return 1;
	}

IL_0050:
	{
		return 0;
	}
}
// System.Void TouchScript.Layers.TouchLayer::UpdateTouch(TouchScript.ITouch)
extern "C" void TouchLayer_UpdateTouch_m3672 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___touch;
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void TouchScript.Layers.TouchLayer::updateTouch(TouchScript.ITouch) */, __this, L_0);
		return;
	}
}
// System.Void TouchScript.Layers.TouchLayer::EndTouch(TouchScript.ITouch)
extern "C" void TouchLayer_EndTouch_m3673 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___touch;
		VirtActionInvoker1< Object_t * >::Invoke(12 /* System.Void TouchScript.Layers.TouchLayer::endTouch(TouchScript.ITouch) */, __this, L_0);
		return;
	}
}
// System.Void TouchScript.Layers.TouchLayer::CancelTouch(TouchScript.ITouch)
extern "C" void TouchLayer_CancelTouch_m3674 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___touch;
		VirtActionInvoker1< Object_t * >::Invoke(13 /* System.Void TouchScript.Layers.TouchLayer::cancelTouch(TouchScript.ITouch) */, __this, L_0);
		return;
	}
}
// System.Void TouchScript.Layers.TouchLayer::setName()
extern Il2CppCodeGenString* _stringLiteral353;
extern "C" void TouchLayer_setName_m3675 (TouchLayer_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral353 = il2cpp_codegen_string_literal_from_index(353);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___Name_3 = _stringLiteral353;
		return;
	}
}
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.TouchLayer::beginTouch(TouchScript.ITouch,TouchScript.Hit.ITouchHit&)
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern "C" int32_t TouchLayer_beginTouch_m3676 (TouchLayer_t624 * __this, Object_t * ___touch, Object_t ** ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Object_t * L_0 = ___touch;
		NullCheck(L_0);
		Vector2_t85  L_1 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_0);
		Object_t ** L_2 = ___hit;
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, Vector2_t85 , Object_t ** >::Invoke(5 /* TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.TouchLayer::Hit(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&) */, __this, L_1, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void TouchScript.Layers.TouchLayer::updateTouch(TouchScript.ITouch)
extern "C" void TouchLayer_updateTouch_m3677 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Layers.TouchLayer::endTouch(TouchScript.ITouch)
extern "C" void TouchLayer_endTouch_m3678 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.Layers.TouchLayer::cancelTouch(TouchScript.ITouch)
extern "C" void TouchLayer_cancelTouch_m3679 (TouchLayer_t624 * __this, Object_t * ___touch, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Collections.IEnumerator TouchScript.Layers.TouchLayer::lateAwake()
// TouchScript.Layers.TouchLayer/<lateAwake>c__Iterator2
#include "TouchScript_TouchScript_Layers_TouchLayer_U3ClateAwakeU3Ec__MethodDeclarations.h"
extern TypeInfo* U3ClateAwakeU3Ec__Iterator2_t648_il2cpp_TypeInfo_var;
extern "C" Object_t * TouchLayer_lateAwake_m3680 (TouchLayer_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3ClateAwakeU3Ec__Iterator2_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(435);
		s_Il2CppMethodIntialized = true;
	}
	U3ClateAwakeU3Ec__Iterator2_t648 * V_0 = {0};
	{
		U3ClateAwakeU3Ec__Iterator2_t648 * L_0 = (U3ClateAwakeU3Ec__Iterator2_t648 *)il2cpp_codegen_object_new (U3ClateAwakeU3Ec__Iterator2_t648_il2cpp_TypeInfo_var);
		U3ClateAwakeU3Ec__Iterator2__ctor_m3657(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3ClateAwakeU3Ec__Iterator2_t648 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3ClateAwakeU3Ec__Iterator2_t648 * L_2 = V_0;
		return L_2;
	}
}
// System.Void TouchScript.Layers.TouchLayerEventArgs::.ctor(TouchScript.ITouch)
// System.EventArgs
#include "mscorlib_System_EventArgsMethodDeclarations.h"
// TouchScript.Layers.TouchLayerEventArgs
#include "TouchScript_TouchScript_Layers_TouchLayerEventArgsMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern "C" void TouchLayerEventArgs__ctor_m3681 (TouchLayerEventArgs_t650 * __this, Object_t * ___touch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3875(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___touch;
		TouchLayerEventArgs_set_Touch_m3683(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.ITouch TouchScript.Layers.TouchLayerEventArgs::get_Touch()
extern "C" Object_t * TouchLayerEventArgs_get_Touch_m3682 (TouchLayerEventArgs_t650 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3CTouchU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void TouchScript.Layers.TouchLayerEventArgs::set_Touch(TouchScript.ITouch)
extern "C" void TouchLayerEventArgs_set_Touch_m3683 (TouchLayerEventArgs_t650 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___U3CTouchU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_34.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_34MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3MethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
// System.Void TouchScript.Tags::.ctor(TouchScript.Tags)
// TouchScript.Tags
#include "TouchScript_TouchScript_Tags.h"
// TouchScript.Tags
#include "TouchScript_TouchScript_TagsMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_34MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3MethodDeclarations.h"
extern const MethodInfo* List_1_GetEnumerator_m3904_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3905_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3906_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3907_MethodInfo_var;
extern "C" void Tags__ctor_m3684 (Tags_t637 * __this, Tags_t637 * ___tags, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_GetEnumerator_m3904_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484098);
		Enumerator_get_Current_m3905_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484099);
		Enumerator_MoveNext_m3906_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		Enumerator_Dispose_m3907_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484101);
		s_Il2CppMethodIntialized = true;
	}
	Enumerator_t702  V_0 = {0};
	String_t* V_1 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Tags__ctor_m3687(__this, /*hidden argument*/NULL);
		Tags_t637 * L_0 = ___tags;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		Tags_t637 * L_1 = ___tags;
		NullCheck(L_1);
		List_1_t651 * L_2 = (L_1->___tagList_6);
		NullCheck(L_2);
		Enumerator_t702  L_3 = List_1_GetEnumerator_m3904(L_2, /*hidden argument*/List_1_GetEnumerator_m3904_MethodInfo_var);
		V_0 = L_3;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_001e:
		{
			String_t* L_4 = Enumerator_get_Current_m3905((&V_0), /*hidden argument*/Enumerator_get_Current_m3905_MethodInfo_var);
			V_1 = L_4;
			String_t* L_5 = V_1;
			Tags_AddTag_m3690(__this, L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			bool L_6 = Enumerator_MoveNext_m3906((&V_0), /*hidden argument*/Enumerator_MoveNext_m3906_MethodInfo_var);
			if (L_6)
			{
				goto IL_001e;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		NullCheck((&V_0));
		Enumerator_Dispose_m3907((&V_0), Enumerator_Dispose_m3907_MethodInfo_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_004c:
	{
		return;
	}
}
// System.Void TouchScript.Tags::.ctor(System.Collections.Generic.IEnumerable`1<System.String>)
extern TypeInfo* IEnumerable_1_t680_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t703_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" void Tags__ctor_m3685 (Tags_t637 * __this, Object_t* ___tags, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		IEnumerator_1_t703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	String_t* V_1 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Tags__ctor_m3687(__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___tags;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t680_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0012:
		{
			Object_t* L_2 = V_0;
			NullCheck(L_2);
			String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t703_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			String_t* L_4 = V_1;
			Tags_AddTag_m3690(__this, L_4, /*hidden argument*/NULL);
		}

IL_0020:
		{
			Object_t* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_0012;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_0;
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0036:
		{
			Object_t* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_8);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_003d:
	{
		return;
	}
}
// System.Void TouchScript.Tags::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Tags__ctor_m3686 (Tags_t637 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		Tags__ctor_m3687(__this, /*hidden argument*/NULL);
		List_1_t651 * L_0 = (__this->___tagList_6);
		String_t* L_1 = ___tag;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void TouchScript.Tags::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* List_1_t651_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3908_MethodInfo_var;
extern "C" void Tags__ctor_m3687 (Tags_t637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		List_1__ctor_m3908_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484102);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t651 * L_0 = (List_1_t651 *)il2cpp_codegen_object_new (List_1_t651_il2cpp_TypeInfo_var);
		List_1__ctor_m3908(L_0, /*hidden argument*/List_1__ctor_m3908_MethodInfo_var);
		__this->___tagList_6 = L_0;
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.String> TouchScript.Tags::get_TagList()
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
extern TypeInfo* ReadOnlyCollection_1_t704_il2cpp_TypeInfo_var;
extern const MethodInfo* ReadOnlyCollection_1__ctor_m3909_MethodInfo_var;
extern "C" Object_t* Tags_get_TagList_m3688 (Tags_t637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReadOnlyCollection_1_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		ReadOnlyCollection_1__ctor_m3909_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484103);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t651 * L_0 = (__this->___tagList_6);
		ReadOnlyCollection_1_t704 * L_1 = (ReadOnlyCollection_1_t704 *)il2cpp_codegen_object_new (ReadOnlyCollection_1_t704_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m3909(L_1, L_0, /*hidden argument*/ReadOnlyCollection_1__ctor_m3909_MethodInfo_var);
		return L_1;
	}
}
// System.Int32 TouchScript.Tags::get_Count()
extern "C" int32_t Tags_get_Count_m3689 (Tags_t637 * __this, const MethodInfo* method)
{
	{
		List_1_t651 * L_0 = (__this->___tagList_6);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void TouchScript.Tags::AddTag(System.String)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Tags_AddTag_m3690 (Tags_t637 * __this, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___tag;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m3000(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		List_1_t651 * L_2 = (__this->___tagList_6);
		String_t* L_3 = ___tag;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		List_1_t651 * L_5 = (__this->___tagList_6);
		String_t* L_6 = ___tag;
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_5, L_6);
		return;
	}
}
// System.Void TouchScript.Tags::RemoveTag(System.String)
extern "C" void Tags_RemoveTag_m3691 (Tags_t637 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		List_1_t651 * L_0 = (__this->___tagList_6);
		String_t* L_1 = ___tag;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, String_t* >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<System.String>::Remove(!0) */, L_0, L_1);
		return;
	}
}
// System.Boolean TouchScript.Tags::HasTag(System.String)
extern "C" bool Tags_HasTag_m3692 (Tags_t637 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		List_1_t651 * L_0 = (__this->___tagList_6);
		String_t* L_1 = ___tag;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.String TouchScript.Tags::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_ToArray_m3910_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral354;
extern "C" String_t* Tags_ToString_m3693 (Tags_t637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_ToArray_m3910_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484104);
		_stringLiteral354 = il2cpp_codegen_string_literal_from_index(354);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t651 * L_0 = (__this->___tagList_6);
		NullCheck(L_0);
		StringU5BU5D_t110* L_1 = List_1_ToArray_m3910(L_0, /*hidden argument*/List_1_ToArray_m3910_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Join_m3911(NULL /*static, unused*/, _stringLiteral354, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// TouchScript.TouchManager/MessageType
#include "TouchScript_TouchScript_TouchManager_MessageType.h"
// TouchScript.TouchManager/MessageType
#include "TouchScript_TouchScript_TouchManager_MessageTypeMethodDeclarations.h"
// TouchScript.TouchManager/MessageName
#include "TouchScript_TouchScript_TouchManager_MessageName.h"
// TouchScript.TouchManager/MessageName
#include "TouchScript_TouchScript_TouchManager_MessageNameMethodDeclarations.h"
// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Collections_Generic_List_1_gen_35.h"
// System.Version
#include "mscorlib_System_Version.h"
// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Collections_Generic_List_1_gen_35MethodDeclarations.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// System.Void TouchScript.TouchManager::.ctor()
// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Collections_Generic_List_1_gen_35MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* List_1_t654_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3912_MethodInfo_var;
extern "C" void TouchManager__ctor_m3694 (TouchManager_t252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		List_1__ctor_m3912_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484105);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___sendMessageEvents_8 = ((int32_t)60);
		List_1_t654 * L_0 = (List_1_t654 *)il2cpp_codegen_object_new (List_1_t654_il2cpp_TypeInfo_var);
		List_1__ctor_m3912(L_0, /*hidden argument*/List_1__ctor_m3912_MethodInfo_var);
		__this->___layers_10 = L_0;
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.TouchManager::.cctor()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* Version_t655_il2cpp_TypeInfo_var;
extern "C" void TouchManager__cctor_m3695 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		Version_t655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t85  L_0 = {0};
		Vector2__ctor_m305(&L_0, (std::numeric_limits<float>::quiet_NaN()), (std::numeric_limits<float>::quiet_NaN()), /*hidden argument*/NULL);
		((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4 = L_0;
		Version_t655 * L_1 = (Version_t655 *)il2cpp_codegen_object_new (Version_t655_il2cpp_TypeInfo_var);
		Version__ctor_m3913(L_1, 6, 5, /*hidden argument*/NULL);
		((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___VERSION_5 = L_1;
		return;
	}
}
// TouchScript.ITouchManager TouchScript.TouchManager::get_Instance()
// TouchScript.TouchManagerInstance
#include "TouchScript_TouchScript_TouchManagerInstanceMethodDeclarations.h"
extern TypeInfo* TouchManagerInstance_t634_il2cpp_TypeInfo_var;
extern "C" Object_t * TouchManager_get_Instance_m1217 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManagerInstance_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		TouchManagerInstance_t634 * L_0 = TouchManagerInstance_get_Instance_m3737(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// TouchScript.Devices.Display.IDisplayDevice TouchScript.TouchManager::get_DisplayDevice()
// TouchScript.TouchManager
#include "TouchScript_TouchScript_TouchManagerMethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* IDisplayDevice_t663_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern "C" Object_t * TouchManager_get_DisplayDevice_m3696 (TouchManager_t252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		IDisplayDevice_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_0 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Object_t99 * L_1 = (__this->___displayDevice_6);
		return ((Object_t *)IsInst(L_1, IDisplayDevice_t663_il2cpp_TypeInfo_var));
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_2 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(12 /* TouchScript.Devices.Display.IDisplayDevice TouchScript.ITouchManager::get_DisplayDevice() */, ITouchManager_t254_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
// System.Void TouchScript.TouchManager::set_DisplayDevice(TouchScript.Devices.Display.IDisplayDevice)
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t99_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern "C" void TouchManager_set_DisplayDevice_m3697 (TouchManager_t252 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		Object_t99_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_0 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_1 = ___value;
		__this->___displayDevice_6 = ((Object_t99 *)IsInstClass(L_1, Object_t99_il2cpp_TypeInfo_var));
		return;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_2 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		InterfaceActionInvoker1< Object_t * >::Invoke(13 /* System.Void TouchScript.ITouchManager::set_DisplayDevice(TouchScript.Devices.Display.IDisplayDevice) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Boolean TouchScript.TouchManager::get_UseSendMessage()
extern "C" bool TouchManager_get_UseSendMessage_m3698 (TouchManager_t252 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___useSendMessage_7);
		return L_0;
	}
}
// System.Void TouchScript.TouchManager::set_UseSendMessage(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void TouchManager_set_UseSendMessage_m3699 (TouchManager_t252 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___useSendMessage_7);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___value;
		__this->___useSendMessage_7 = L_2;
		TouchManager_updateSubscription_m3706(__this, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.TouchManager/MessageType TouchScript.TouchManager::get_SendMessageEvents()
extern "C" int32_t TouchManager_get_SendMessageEvents_m3700 (TouchManager_t252 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___sendMessageEvents_8);
		return L_0;
	}
}
// System.Void TouchScript.TouchManager::set_SendMessageEvents(TouchScript.TouchManager/MessageType)
// TouchScript.TouchManager/MessageType
#include "TouchScript_TouchScript_TouchManager_MessageType.h"
extern "C" void TouchManager_set_SendMessageEvents_m3701 (TouchManager_t252 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___sendMessageEvents_8);
		int32_t L_1 = ___value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = ___value;
		__this->___sendMessageEvents_8 = L_2;
		TouchManager_updateSubscription_m3706(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject TouchScript.TouchManager::get_SendMessageTarget()
extern "C" GameObject_t30 * TouchManager_get_SendMessageTarget_m3702 (TouchManager_t252 * __this, const MethodInfo* method)
{
	{
		GameObject_t30 * L_0 = (__this->___sendMessageTarget_9);
		return L_0;
	}
}
// System.Void TouchScript.TouchManager::set_SendMessageTarget(UnityEngine.GameObject)
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" void TouchManager_set_SendMessageTarget_m3703 (TouchManager_t252 * __this, GameObject_t30 * ___value, const MethodInfo* method)
{
	{
		GameObject_t30 * L_0 = ___value;
		__this->___sendMessageTarget_9 = L_0;
		GameObject_t30 * L_1 = ___value;
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t30 * L_3 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		__this->___sendMessageTarget_9 = L_3;
	}

IL_001f:
	{
		return;
	}
}
// System.Boolean TouchScript.TouchManager::IsInvalidPosition(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t85_il2cpp_TypeInfo_var;
extern "C" bool TouchManager_IsInvalidPosition_m3704 (Object_t * __this /* static, unused */, Vector2_t85  ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		Vector2_t85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_0 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		Vector2_t85  L_1 = L_0;
		Object_t * L_2 = Box(Vector2_t85_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = Vector2_Equals_m3914((&___position), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void TouchScript.TouchManager::OnEnable()
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* IDisplayDevice_t663_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern "C" void TouchManager_OnEnable_m3705 (TouchManager_t252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		IDisplayDevice_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_0 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_1 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t99 * L_2 = (__this->___displayDevice_6);
		NullCheck(L_1);
		InterfaceActionInvoker1< Object_t * >::Invoke(13 /* System.Void TouchScript.ITouchManager::set_DisplayDevice(TouchScript.Devices.Display.IDisplayDevice) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_1, ((Object_t *)IsInst(L_2, IDisplayDevice_t663_il2cpp_TypeInfo_var)));
		V_0 = 0;
		goto IL_0043;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_3 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t654 * L_4 = (__this->___layers_10);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		TouchLayer_t624 * L_6 = (TouchLayer_t624 *)VirtFuncInvoker1< TouchLayer_t624 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::get_Item(System.Int32) */, L_4, L_5);
		int32_t L_7 = V_0;
		NullCheck(L_3);
		InterfaceFuncInvoker2< bool, TouchLayer_t624 *, int32_t >::Invoke(20 /* System.Boolean TouchScript.ITouchManager::AddLayer(TouchScript.Layers.TouchLayer,System.Int32) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_3, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0043:
	{
		int32_t L_9 = V_0;
		List_1_t654 * L_10 = (__this->___layers_10);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0027;
		}
	}
	{
		TouchManager_updateSubscription_m3706(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.TouchManager::updateSubscription()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
// System.EventHandler`1<TouchScript.TouchEventArgs>
#include "mscorlib_System_EventHandler_1_gen_0MethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandler_t169_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern const MethodInfo* TouchManager_frameStartedhandler_m3711_MethodInfo_var;
extern const MethodInfo* TouchManager_frameFinishedHandler_m3712_MethodInfo_var;
extern const MethodInfo* TouchManager_touchesBeganHandler_m3707_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m1218_MethodInfo_var;
extern const MethodInfo* TouchManager_touchesMovedHandler_m3708_MethodInfo_var;
extern const MethodInfo* TouchManager_touchesEndedHandler_m3709_MethodInfo_var;
extern const MethodInfo* TouchManager_touchesCancelledHandler_m3710_MethodInfo_var;
extern "C" void TouchManager_updateSubscription_m3706 (TouchManager_t252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		EventHandler_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		TouchManager_frameStartedhandler_m3711_MethodInfo_var = il2cpp_codegen_method_info_from_index(458);
		TouchManager_frameFinishedHandler_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(459);
		TouchManager_touchesBeganHandler_m3707_MethodInfo_var = il2cpp_codegen_method_info_from_index(460);
		EventHandler_1__ctor_m1218_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		TouchManager_touchesMovedHandler_m3708_MethodInfo_var = il2cpp_codegen_method_info_from_index(461);
		TouchManager_touchesEndedHandler_m3709_MethodInfo_var = il2cpp_codegen_method_info_from_index(462);
		TouchManager_touchesCancelledHandler_m3710_MethodInfo_var = il2cpp_codegen_method_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isPlaying_m2808(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_1 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		GameObject_t30 * L_2 = (__this->___sendMessageTarget_9);
		bool L_3 = Object_op_Equality_m295(NULL /*static, unused*/, L_2, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t30 * L_4 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		__this->___sendMessageTarget_9 = L_4;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_5 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_6 = { (void*)TouchManager_frameStartedhandler_m3711_MethodInfo_var };
		EventHandler_t169 * L_7 = (EventHandler_t169 *)il2cpp_codegen_object_new (EventHandler_t169_il2cpp_TypeInfo_var);
		EventHandler__ctor_m1098(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_t169 * >::Invoke(1 /* System.Void TouchScript.ITouchManager::remove_FrameStarted(System.EventHandler) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_5, L_7);
		Object_t * L_8 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_9 = { (void*)TouchManager_frameFinishedHandler_m3712_MethodInfo_var };
		EventHandler_t169 * L_10 = (EventHandler_t169 *)il2cpp_codegen_object_new (EventHandler_t169_il2cpp_TypeInfo_var);
		EventHandler__ctor_m1098(L_10, __this, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_t169 * >::Invoke(3 /* System.Void TouchScript.ITouchManager::remove_FrameFinished(System.EventHandler) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_8, L_10);
		Object_t * L_11 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_12 = { (void*)TouchManager_touchesBeganHandler_m3707_MethodInfo_var };
		EventHandler_1_t253 * L_13 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_13, __this, L_12, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(5 /* System.Void TouchScript.ITouchManager::remove_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_11, L_13);
		Object_t * L_14 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_15 = { (void*)TouchManager_touchesMovedHandler_m3708_MethodInfo_var };
		EventHandler_1_t253 * L_16 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_16, __this, L_15, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(7 /* System.Void TouchScript.ITouchManager::remove_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_14, L_16);
		Object_t * L_17 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_18 = { (void*)TouchManager_touchesEndedHandler_m3709_MethodInfo_var };
		EventHandler_1_t253 * L_19 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_19, __this, L_18, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_17);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(9 /* System.Void TouchScript.ITouchManager::remove_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_17, L_19);
		Object_t * L_20 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_21 = { (void*)TouchManager_touchesCancelledHandler_m3710_MethodInfo_var };
		EventHandler_1_t253 * L_22 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_22, __this, L_21, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_20);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(11 /* System.Void TouchScript.ITouchManager::remove_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_20, L_22);
		bool L_23 = (__this->___useSendMessage_7);
		if (L_23)
		{
			goto IL_00c3;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		int32_t L_24 = TouchManager_get_SendMessageEvents_m3700(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_24&(int32_t)1)))
		{
			goto IL_00e6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_25 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_26 = { (void*)TouchManager_frameStartedhandler_m3711_MethodInfo_var };
		EventHandler_t169 * L_27 = (EventHandler_t169 *)il2cpp_codegen_object_new (EventHandler_t169_il2cpp_TypeInfo_var);
		EventHandler__ctor_m1098(L_27, __this, L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< EventHandler_t169 * >::Invoke(0 /* System.Void TouchScript.ITouchManager::add_FrameStarted(System.EventHandler) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_25, L_27);
	}

IL_00e6:
	{
		int32_t L_28 = TouchManager_get_SendMessageEvents_m3700(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_28&(int32_t)2)))
		{
			goto IL_0109;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_29 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_30 = { (void*)TouchManager_frameFinishedHandler_m3712_MethodInfo_var };
		EventHandler_t169 * L_31 = (EventHandler_t169 *)il2cpp_codegen_object_new (EventHandler_t169_il2cpp_TypeInfo_var);
		EventHandler__ctor_m1098(L_31, __this, L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< EventHandler_t169 * >::Invoke(2 /* System.Void TouchScript.ITouchManager::add_FrameFinished(System.EventHandler) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_29, L_31);
	}

IL_0109:
	{
		int32_t L_32 = TouchManager_get_SendMessageEvents_m3700(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_32&(int32_t)4)))
		{
			goto IL_012c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_33 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_34 = { (void*)TouchManager_touchesBeganHandler_m3707_MethodInfo_var };
		EventHandler_1_t253 * L_35 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_35, __this, L_34, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_33);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(4 /* System.Void TouchScript.ITouchManager::add_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_33, L_35);
	}

IL_012c:
	{
		int32_t L_36 = TouchManager_get_SendMessageEvents_m3700(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_36&(int32_t)8)))
		{
			goto IL_014f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_37 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_38 = { (void*)TouchManager_touchesMovedHandler_m3708_MethodInfo_var };
		EventHandler_1_t253 * L_39 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_39, __this, L_38, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_37);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(6 /* System.Void TouchScript.ITouchManager::add_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_37, L_39);
	}

IL_014f:
	{
		int32_t L_40 = TouchManager_get_SendMessageEvents_m3700(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_40&(int32_t)((int32_t)16))))
		{
			goto IL_0173;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_41 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_42 = { (void*)TouchManager_touchesEndedHandler_m3709_MethodInfo_var };
		EventHandler_1_t253 * L_43 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_43, __this, L_42, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_41);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(8 /* System.Void TouchScript.ITouchManager::add_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_41, L_43);
	}

IL_0173:
	{
		int32_t L_44 = TouchManager_get_SendMessageEvents_m3700(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_44&(int32_t)((int32_t)32))))
		{
			goto IL_0197;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_45 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_46 = { (void*)TouchManager_touchesCancelledHandler_m3710_MethodInfo_var };
		EventHandler_1_t253 * L_47 = (EventHandler_1_t253 *)il2cpp_codegen_object_new (EventHandler_1_t253_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1218(L_47, __this, L_46, /*hidden argument*/EventHandler_1__ctor_m1218_MethodInfo_var);
		NullCheck(L_45);
		InterfaceActionInvoker1< EventHandler_1_t253 * >::Invoke(10 /* System.Void TouchScript.ITouchManager::add_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_45, L_47);
	}

IL_0197:
	{
		return;
	}
}
// System.Void TouchScript.TouchManager::touchesBeganHandler(System.Object,TouchScript.TouchEventArgs)
// System.Object
#include "mscorlib_System_Object.h"
// TouchScript.TouchEventArgs
#include "TouchScript_TouchScript_TouchEventArgs.h"
// TouchScript.TouchEventArgs
#include "TouchScript_TouchScript_TouchEventArgsMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* MessageName_t653_il2cpp_TypeInfo_var;
extern "C" void TouchManager_touchesBeganHandler_m3707 (TouchManager_t252 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MessageName_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t30 * L_0 = (__this->___sendMessageTarget_9);
		int32_t L_1 = 4;
		Object_t * L_2 = Box(MessageName_t653_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		TouchEventArgs_t226 * L_4 = ___e;
		NullCheck(L_4);
		Object_t* L_5 = TouchEventArgs_get_Touches_m1220(L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SendMessage_m3865(L_0, L_3, L_5, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.TouchManager::touchesMovedHandler(System.Object,TouchScript.TouchEventArgs)
extern TypeInfo* MessageName_t653_il2cpp_TypeInfo_var;
extern "C" void TouchManager_touchesMovedHandler_m3708 (TouchManager_t252 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MessageName_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t30 * L_0 = (__this->___sendMessageTarget_9);
		int32_t L_1 = 8;
		Object_t * L_2 = Box(MessageName_t653_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		TouchEventArgs_t226 * L_4 = ___e;
		NullCheck(L_4);
		Object_t* L_5 = TouchEventArgs_get_Touches_m1220(L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SendMessage_m3865(L_0, L_3, L_5, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.TouchManager::touchesEndedHandler(System.Object,TouchScript.TouchEventArgs)
extern TypeInfo* MessageName_t653_il2cpp_TypeInfo_var;
extern "C" void TouchManager_touchesEndedHandler_m3709 (TouchManager_t252 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MessageName_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t30 * L_0 = (__this->___sendMessageTarget_9);
		int32_t L_1 = ((int32_t)16);
		Object_t * L_2 = Box(MessageName_t653_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		TouchEventArgs_t226 * L_4 = ___e;
		NullCheck(L_4);
		Object_t* L_5 = TouchEventArgs_get_Touches_m1220(L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SendMessage_m3865(L_0, L_3, L_5, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.TouchManager::touchesCancelledHandler(System.Object,TouchScript.TouchEventArgs)
extern TypeInfo* MessageName_t653_il2cpp_TypeInfo_var;
extern "C" void TouchManager_touchesCancelledHandler_m3710 (TouchManager_t252 * __this, Object_t * ___sender, TouchEventArgs_t226 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MessageName_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t30 * L_0 = (__this->___sendMessageTarget_9);
		int32_t L_1 = ((int32_t)32);
		Object_t * L_2 = Box(MessageName_t653_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		TouchEventArgs_t226 * L_4 = ___e;
		NullCheck(L_4);
		Object_t* L_5 = TouchEventArgs_get_Touches_m1220(L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SendMessage_m3865(L_0, L_3, L_5, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.TouchManager::frameStartedhandler(System.Object,System.EventArgs)
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
extern TypeInfo* MessageName_t653_il2cpp_TypeInfo_var;
extern "C" void TouchManager_frameStartedhandler_m3711 (TouchManager_t252 * __this, Object_t * ___sender, EventArgs_t223 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MessageName_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t30 * L_0 = (__this->___sendMessageTarget_9);
		int32_t L_1 = 1;
		Object_t * L_2 = Box(MessageName_t653_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_0);
		GameObject_SendMessage_m3915(L_0, L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.TouchManager::frameFinishedHandler(System.Object,System.EventArgs)
extern TypeInfo* MessageName_t653_il2cpp_TypeInfo_var;
extern "C" void TouchManager_frameFinishedHandler_m3712 (TouchManager_t252 * __this, Object_t * ___sender, EventArgs_t223 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MessageName_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t30 * L_0 = (__this->___sendMessageTarget_9);
		int32_t L_1 = 2;
		Object_t * L_2 = Box(MessageName_t653_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_0);
		GameObject_SendMessage_m3915(L_0, L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.TouchManagerInstance/<EndTouch>c__AnonStorey5
#include "TouchScript_TouchScript_TouchManagerInstance_U3CEndTouchU3Ec.h"
// TouchScript.TouchManagerInstance/<EndTouch>c__AnonStorey5
#include "TouchScript_TouchScript_TouchManagerInstance_U3CEndTouchU3EcMethodDeclarations.h"
// System.Void TouchScript.TouchManagerInstance/<EndTouch>c__AnonStorey5::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CEndTouchU3Ec__AnonStorey5__ctor_m3713 (U3CEndTouchU3Ec__AnonStorey5_t656 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TouchScript.TouchManagerInstance/<EndTouch>c__AnonStorey5::<>m__6(TouchScript.TouchPoint)
// TouchScript.TouchPoint
#include "TouchScript_TouchScript_TouchPoint.h"
// TouchScript.TouchPoint
#include "TouchScript_TouchScript_TouchPointMethodDeclarations.h"
extern "C" bool U3CEndTouchU3Ec__AnonStorey5_U3CU3Em__6_m3714 (U3CEndTouchU3Ec__AnonStorey5_t656 * __this, TouchPoint_t664 * ___t, const MethodInfo* method)
{
	{
		TouchPoint_t664 * L_0 = ___t;
		NullCheck(L_0);
		int32_t L_1 = TouchPoint_get_Id_m3774(L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___id_0);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// TouchScript.TouchManagerInstance/<CancelTouch>c__AnonStorey6
#include "TouchScript_TouchScript_TouchManagerInstance_U3CCancelTouchU.h"
// TouchScript.TouchManagerInstance/<CancelTouch>c__AnonStorey6
#include "TouchScript_TouchScript_TouchManagerInstance_U3CCancelTouchUMethodDeclarations.h"
// System.Void TouchScript.TouchManagerInstance/<CancelTouch>c__AnonStorey6::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CCancelTouchU3Ec__AnonStorey6__ctor_m3715 (U3CCancelTouchU3Ec__AnonStorey6_t657 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TouchScript.TouchManagerInstance/<CancelTouch>c__AnonStorey6::<>m__7(TouchScript.TouchPoint)
// TouchScript.TouchPoint
#include "TouchScript_TouchScript_TouchPoint.h"
// TouchScript.TouchPoint
#include "TouchScript_TouchScript_TouchPointMethodDeclarations.h"
extern "C" bool U3CCancelTouchU3Ec__AnonStorey6_U3CU3Em__7_m3716 (U3CCancelTouchU3Ec__AnonStorey6_t657 * __this, TouchPoint_t664 * ___t, const MethodInfo* method)
{
	{
		TouchPoint_t664 * L_0 = ___t;
		NullCheck(L_0);
		int32_t L_1 = TouchPoint_get_Id_m3774(L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___id_0);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// TouchScript.TouchManagerInstance/<lateAwake>c__Iterator3
#include "TouchScript_TouchScript_TouchManagerInstance_U3ClateAwakeU3E.h"
// TouchScript.TouchManagerInstance/<lateAwake>c__Iterator3
#include "TouchScript_TouchScript_TouchManagerInstance_U3ClateAwakeU3EMethodDeclarations.h"
// System.Void TouchScript.TouchManagerInstance/<lateAwake>c__Iterator3::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3ClateAwakeU3Ec__Iterator3__ctor_m3717 (U3ClateAwakeU3Ec__Iterator3_t658 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object TouchScript.TouchManagerInstance/<lateAwake>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3ClateAwakeU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3718 (U3ClateAwakeU3Ec__Iterator3_t658 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object TouchScript.TouchManagerInstance/<lateAwake>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3ClateAwakeU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m3719 (U3ClateAwakeU3Ec__Iterator3_t658 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean TouchScript.TouchManagerInstance/<lateAwake>c__Iterator3::MoveNext()
// TouchScript.TouchManagerInstance
#include "TouchScript_TouchScript_TouchManagerInstanceMethodDeclarations.h"
extern "C" bool U3ClateAwakeU3Ec__Iterator3_MoveNext_m3720 (U3ClateAwakeU3Ec__Iterator3_t658 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0034;
		}
	}
	{
		goto IL_005c;
	}

IL_0021:
	{
		__this->___U24current_1 = NULL;
		__this->___U24PC_0 = 1;
		goto IL_005e;
	}

IL_0034:
	{
		TouchManagerInstance_t634 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		TouchManagerInstance_updateLayers_m3764(L_2, /*hidden argument*/NULL);
		TouchManagerInstance_t634 * L_3 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		TouchManagerInstance_createCameraLayer_m3765(L_3, /*hidden argument*/NULL);
		TouchManagerInstance_t634 * L_4 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_4);
		TouchManagerInstance_createTouchInput_m3766(L_4, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_005c:
	{
		return 0;
	}

IL_005e:
	{
		return 1;
	}
}
// System.Void TouchScript.TouchManagerInstance/<lateAwake>c__Iterator3::Dispose()
extern "C" void U3ClateAwakeU3Ec__Iterator3_Dispose_m3721 (U3ClateAwakeU3Ec__Iterator3_t658 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance/<lateAwake>c__Iterator3::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern "C" void U3ClateAwakeU3Ec__Iterator3_Reset_m3722 (U3ClateAwakeU3Ec__Iterator3_t658 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1075(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.List`1<TouchScript.TouchPoint>
#include "mscorlib_System_Collections_Generic_List_1_gen_36.h"
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Collections.Generic.HashSet`1<System.Int32>
#include "System_Core_System_Collections_Generic_HashSet_1_gen.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1.h"
// System.Collections.Generic.List`1/Enumerator<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"
// System.Predicate`1<TouchScript.TouchPoint>
#include "mscorlib_System_Predicate_1_gen_3.h"
// System.Predicate`1<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Predicate_1_gen_4.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// TouchScript.InputSources.MobileInput
#include "TouchScript_TouchScript_InputSources_MobileInput.h"
// System.Collections.Generic.List`1/Enumerator<TouchScript.TouchPoint>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Int32>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator_.h"
// System.Collections.Generic.List`1<TouchScript.TouchPoint>
#include "mscorlib_System_Collections_Generic_List_1_gen_36MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
// System.Collections.Generic.HashSet`1<System.Int32>
#include "System_Core_System_Collections_Generic_HashSet_1_genMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1MethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Predicate`1<TouchScript.TouchPoint>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
// System.Predicate`1<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<TouchScript.TouchPoint>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5MethodDeclarations.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Int32>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator_MethodDeclarations.h"
struct TouchManagerInstanceU5BU5D_t705;
// Declaration !!0[] UnityEngine.Object::FindObjectsOfType<TouchScript.TouchManagerInstance>()
// !!0[] UnityEngine.Object::FindObjectsOfType<TouchScript.TouchManagerInstance>()
#define Object_FindObjectsOfType_TisTouchManagerInstance_t634_m3920(__this /* static, unused */, method) (( TouchManagerInstanceU5BU5D_t705* (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectsOfType_TisObject_t_m1145_gshared)(__this /* static, unused */, method)
struct TouchManagerInstance_t634;
// Declaration !!0 UnityEngine.GameObject::AddComponent<TouchScript.TouchManagerInstance>()
// !!0 UnityEngine.GameObject::AddComponent<TouchScript.TouchManagerInstance>()
#define GameObject_AddComponent_TisTouchManagerInstance_t634_m3921(__this, method) (( TouchManagerInstance_t634 * (*) (GameObject_t30 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1136_gshared)(__this, method)
struct GenericDisplayDevice_t596;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
struct Object_t;
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C" Object_t * ScriptableObject_CreateInstance_TisObject_t_m3953_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ScriptableObject_CreateInstance_TisObject_t_m3953(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3953_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<TouchScript.Devices.Display.GenericDisplayDevice>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<TouchScript.Devices.Display.GenericDisplayDevice>()
#define ScriptableObject_CreateInstance_TisGenericDisplayDevice_t596_m3922(__this /* static, unused */, method) (( GenericDisplayDevice_t596 * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3953_gshared)(__this /* static, unused */, method)
struct IEnumerable_1_t255;
struct IEnumerable_t713;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct IEnumerable_1_t569;
struct IEnumerable_t713;
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
extern "C" Object_t* Enumerable_Cast_TisObject_t_m3954_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Enumerable_Cast_TisObject_t_m3954(__this /* static, unused */, p0, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Enumerable_Cast_TisObject_t_m3954_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<TouchScript.ITouch>(System.Collections.IEnumerable)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<TouchScript.ITouch>(System.Collections.IEnumerable)
#define Enumerable_Cast_TisITouch_t257_m3924(__this /* static, unused */, p0, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Enumerable_Cast_TisObject_t_m3954_gshared)(__this /* static, unused */, p0, method)
struct List_1_t592;
struct IEnumerable_1_t255;
struct List_1_t519;
struct IEnumerable_1_t569;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t519 * Enumerable_ToList_TisObject_t_m3955_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToList_TisObject_t_m3955(__this /* static, unused */, p0, method) (( List_1_t519 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3955_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<TouchScript.ITouch>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<TouchScript.ITouch>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisITouch_t257_m3925(__this /* static, unused */, p0, method) (( List_1_t592 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3955_gshared)(__this /* static, unused */, p0, method)
struct TouchLayer_t624;
// Declaration !!0 UnityEngine.Component::GetComponent<TouchScript.Layers.TouchLayer>()
// !!0 UnityEngine.Component::GetComponent<TouchScript.Layers.TouchLayer>()
#define Component_GetComponent_TisTouchLayer_t624_m3937(__this, method) (( TouchLayer_t624 * (*) (Component_t102 *, const MethodInfo*))Component_GetComponent_TisObject_t_m296_gshared)(__this, method)
struct CameraLayer_t640;
// Declaration !!0 UnityEngine.GameObject::AddComponent<TouchScript.Layers.CameraLayer>()
// !!0 UnityEngine.GameObject::AddComponent<TouchScript.Layers.CameraLayer>()
#define GameObject_AddComponent_TisCameraLayer_t640_m3938(__this, method) (( CameraLayer_t640 * (*) (GameObject_t30 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1136_gshared)(__this, method)
struct TouchManagerU5BU5D_t710;
// Declaration !!0[] UnityEngine.Object::FindObjectsOfType<TouchScript.TouchManager>()
// !!0[] UnityEngine.Object::FindObjectsOfType<TouchScript.TouchManager>()
#define Object_FindObjectsOfType_TisTouchManager_t252_m3940(__this /* static, unused */, method) (( TouchManagerU5BU5D_t710* (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectsOfType_TisObject_t_m1145_gshared)(__this /* static, unused */, method)
struct MobileInput_t672;
// Declaration !!0 UnityEngine.GameObject::AddComponent<TouchScript.InputSources.MobileInput>()
// !!0 UnityEngine.GameObject::AddComponent<TouchScript.InputSources.MobileInput>()
#define GameObject_AddComponent_TisMobileInput_t672_m3941(__this, method) (( MobileInput_t672 * (*) (GameObject_t30 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1136_gshared)(__this, method)
struct MouseInput_t636;
// Declaration !!0 UnityEngine.GameObject::AddComponent<TouchScript.InputSources.MouseInput>()
// !!0 UnityEngine.GameObject::AddComponent<TouchScript.InputSources.MouseInput>()
#define GameObject_AddComponent_TisMouseInput_t636_m3942(__this, method) (( MouseInput_t636 * (*) (GameObject_t30 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1136_gshared)(__this, method)
// System.Void TouchScript.TouchManagerInstance::.ctor()
// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Collections_Generic_List_1_gen_35MethodDeclarations.h"
// System.Collections.Generic.List`1<TouchScript.TouchPoint>
#include "mscorlib_System_Collections_Generic_List_1_gen_36MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
// System.Collections.Generic.HashSet`1<System.Int32>
#include "System_Core_System_Collections_Generic_HashSet_1_genMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern TypeInfo* List_1_t654_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t659_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t660_il2cpp_TypeInfo_var;
extern TypeInfo* HashSet_1_t661_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3916_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3917_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3918_MethodInfo_var;
extern const MethodInfo* HashSet_1__ctor_m3919_MethodInfo_var;
extern "C" void TouchManagerInstance__ctor_m3723 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		List_1_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		Dictionary_2_t660_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		HashSet_1_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		List_1__ctor_m3916_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484112);
		List_1__ctor_m3917_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484113);
		Dictionary_2__ctor_m3918_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484114);
		HashSet_1__ctor_m3919_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484115);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___dpi_11 = (96.0f);
		__this->___dotsPerCentimeter_12 = (37.7952728f);
		List_1_t654 * L_0 = (List_1_t654 *)il2cpp_codegen_object_new (List_1_t654_il2cpp_TypeInfo_var);
		List_1__ctor_m3916(L_0, ((int32_t)10), /*hidden argument*/List_1__ctor_m3916_MethodInfo_var);
		__this->___layers_13 = L_0;
		List_1_t659 * L_1 = (List_1_t659 *)il2cpp_codegen_object_new (List_1_t659_il2cpp_TypeInfo_var);
		List_1__ctor_m3917(L_1, ((int32_t)30), /*hidden argument*/List_1__ctor_m3917_MethodInfo_var);
		__this->___touches_14 = L_1;
		Dictionary_2_t660 * L_2 = (Dictionary_2_t660 *)il2cpp_codegen_object_new (Dictionary_2_t660_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3918(L_2, ((int32_t)30), /*hidden argument*/Dictionary_2__ctor_m3918_MethodInfo_var);
		__this->___idToTouch_15 = L_2;
		List_1_t659 * L_3 = (List_1_t659 *)il2cpp_codegen_object_new (List_1_t659_il2cpp_TypeInfo_var);
		List_1__ctor_m3917(L_3, ((int32_t)30), /*hidden argument*/List_1__ctor_m3917_MethodInfo_var);
		__this->___touchesBegan_16 = L_3;
		HashSet_1_t661 * L_4 = (HashSet_1_t661 *)il2cpp_codegen_object_new (HashSet_1_t661_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m3919(L_4, /*hidden argument*/HashSet_1__ctor_m3919_MethodInfo_var);
		__this->___touchesUpdated_17 = L_4;
		HashSet_1_t661 * L_5 = (HashSet_1_t661 *)il2cpp_codegen_object_new (HashSet_1_t661_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m3919(L_5, /*hidden argument*/HashSet_1__ctor_m3919_MethodInfo_var);
		__this->___touchesEnded_18 = L_5;
		HashSet_1_t661 * L_6 = (HashSet_1_t661 *)il2cpp_codegen_object_new (HashSet_1_t661_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m3919(L_6, /*hidden argument*/HashSet_1__ctor_m3919_MethodInfo_var);
		__this->___touchesCancelled_19 = L_6;
		MonoBehaviour__ctor_m299(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::.cctor()
extern "C" void TouchManagerInstance__cctor_m3724 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::add_FrameStarted(System.EventHandler)
// System.EventHandler
#include "mscorlib_System_EventHandler.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* EventHandler_t169_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_add_FrameStarted_m3725 (TouchManagerInstance_t634 * __this, EventHandler_t169 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_t169 * L_0 = (__this->___frameStartedInvoker_6);
		EventHandler_t169 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___frameStartedInvoker_6 = ((EventHandler_t169 *)CastclassSealed(L_2, EventHandler_t169_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::remove_FrameStarted(System.EventHandler)
extern TypeInfo* EventHandler_t169_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_remove_FrameStarted_m3726 (TouchManagerInstance_t634 * __this, EventHandler_t169 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_t169 * L_0 = (__this->___frameStartedInvoker_6);
		EventHandler_t169 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___frameStartedInvoker_6 = ((EventHandler_t169 *)CastclassSealed(L_2, EventHandler_t169_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::add_FrameFinished(System.EventHandler)
extern TypeInfo* EventHandler_t169_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_add_FrameFinished_m3727 (TouchManagerInstance_t634 * __this, EventHandler_t169 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_t169 * L_0 = (__this->___frameFinishedInvoker_7);
		EventHandler_t169 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___frameFinishedInvoker_7 = ((EventHandler_t169 *)CastclassSealed(L_2, EventHandler_t169_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::remove_FrameFinished(System.EventHandler)
extern TypeInfo* EventHandler_t169_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_remove_FrameFinished_m3728 (TouchManagerInstance_t634 * __this, EventHandler_t169 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_t169 * L_0 = (__this->___frameFinishedInvoker_7);
		EventHandler_t169 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___frameFinishedInvoker_7 = ((EventHandler_t169 *)CastclassSealed(L_2, EventHandler_t169_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::add_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>)
// System.EventHandler`1<TouchScript.TouchEventArgs>
#include "mscorlib_System_EventHandler_1_gen_0.h"
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_add_TouchesBegan_m3729 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t253 * L_0 = (__this->___touchesBeganInvoker_2);
		EventHandler_1_t253 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchesBeganInvoker_2 = ((EventHandler_1_t253 *)CastclassSealed(L_2, EventHandler_1_t253_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::remove_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_remove_TouchesBegan_m3730 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t253 * L_0 = (__this->___touchesBeganInvoker_2);
		EventHandler_1_t253 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchesBeganInvoker_2 = ((EventHandler_1_t253 *)CastclassSealed(L_2, EventHandler_1_t253_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::add_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_add_TouchesMoved_m3731 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t253 * L_0 = (__this->___touchesMovedInvoker_3);
		EventHandler_1_t253 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchesMovedInvoker_3 = ((EventHandler_1_t253 *)CastclassSealed(L_2, EventHandler_1_t253_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::remove_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_remove_TouchesMoved_m3732 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t253 * L_0 = (__this->___touchesMovedInvoker_3);
		EventHandler_1_t253 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchesMovedInvoker_3 = ((EventHandler_1_t253 *)CastclassSealed(L_2, EventHandler_1_t253_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::add_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_add_TouchesEnded_m3733 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t253 * L_0 = (__this->___touchesEndedInvoker_4);
		EventHandler_1_t253 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchesEndedInvoker_4 = ((EventHandler_1_t253 *)CastclassSealed(L_2, EventHandler_1_t253_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::remove_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_remove_TouchesEnded_m3734 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t253 * L_0 = (__this->___touchesEndedInvoker_4);
		EventHandler_1_t253 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchesEndedInvoker_4 = ((EventHandler_1_t253 *)CastclassSealed(L_2, EventHandler_1_t253_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::add_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_add_TouchesCancelled_m3735 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t253 * L_0 = (__this->___touchesCancelledInvoker_5);
		EventHandler_1_t253 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchesCancelledInvoker_5 = ((EventHandler_1_t253 *)CastclassSealed(L_2, EventHandler_1_t253_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::remove_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern TypeInfo* EventHandler_1_t253_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_remove_TouchesCancelled_m3736 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandler_1_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandler_1_t253 * L_0 = (__this->___touchesCancelledInvoker_5);
		EventHandler_1_t253 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___touchesCancelledInvoker_5 = ((EventHandler_1_t253 *)CastclassSealed(L_2, EventHandler_1_t253_il2cpp_TypeInfo_var));
		return;
	}
}
// TouchScript.TouchManagerInstance TouchScript.TouchManagerInstance::get_Instance()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* TouchManagerInstance_t634_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t30_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectsOfType_TisTouchManagerInstance_t634_m3920_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisTouchManagerInstance_t634_m3921_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral355;
extern "C" TouchManagerInstance_t634 * TouchManagerInstance_get_Instance_m3737 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManagerInstance_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		GameObject_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Object_FindObjectsOfType_TisTouchManagerInstance_t634_m3920_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484116);
		GameObject_AddComponent_TisTouchManagerInstance_t634_m3921_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		_stringLiteral355 = il2cpp_codegen_string_literal_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	TouchManagerInstanceU5BU5D_t705* V_0 = {0};
	GameObject_t30 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		bool L_0 = ((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___shuttingDown_8;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (TouchManagerInstance_t634 *)NULL;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		TouchManagerInstance_t634 * L_1 = ((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___instance_9;
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0062;
		}
	}
	{
		bool L_3 = Application_get_isPlaying_m2808(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		return (TouchManagerInstance_t634 *)NULL;
	}

IL_0028:
	{
		TouchManagerInstanceU5BU5D_t705* L_4 = Object_FindObjectsOfType_TisTouchManagerInstance_t634_m3920(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisTouchManagerInstance_t634_m3920_MethodInfo_var);
		V_0 = L_4;
		TouchManagerInstanceU5BU5D_t705* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)(((Array_t *)L_5)->max_length))))
		{
			goto IL_0051;
		}
	}
	{
		GameObject_t30 * L_6 = (GameObject_t30 *)il2cpp_codegen_object_new (GameObject_t30_il2cpp_TypeInfo_var);
		GameObject__ctor_m2776(L_6, _stringLiteral355, /*hidden argument*/NULL);
		V_1 = L_6;
		GameObject_t30 * L_7 = V_1;
		NullCheck(L_7);
		TouchManagerInstance_t634 * L_8 = GameObject_AddComponent_TisTouchManagerInstance_t634_m3921(L_7, /*hidden argument*/GameObject_AddComponent_TisTouchManagerInstance_t634_m3921_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___instance_9 = L_8;
		goto IL_0062;
	}

IL_0051:
	{
		TouchManagerInstanceU5BU5D_t705* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))) < ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		TouchManagerInstanceU5BU5D_t705* L_10 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___instance_9 = (*(TouchManagerInstance_t634 **)(TouchManagerInstance_t634 **)SZArrayLdElema(L_10, L_11, sizeof(TouchManagerInstance_t634 *)));
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		TouchManagerInstance_t634 * L_12 = ((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___instance_9;
		return L_12;
	}
}
// TouchScript.Devices.Display.IDisplayDevice TouchScript.TouchManagerInstance::get_DisplayDevice()
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern const MethodInfo* ScriptableObject_CreateInstance_TisGenericDisplayDevice_t596_m3922_MethodInfo_var;
extern "C" Object_t * TouchManagerInstance_get_DisplayDevice_m3738 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScriptableObject_CreateInstance_TisGenericDisplayDevice_t596_m3922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484118);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___displayDevice_10);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		GenericDisplayDevice_t596 * L_1 = ScriptableObject_CreateInstance_TisGenericDisplayDevice_t596_m3922(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisGenericDisplayDevice_t596_m3922_MethodInfo_var);
		__this->___displayDevice_10 = L_1;
	}

IL_0016:
	{
		Object_t * L_2 = (__this->___displayDevice_10);
		return L_2;
	}
}
// System.Void TouchScript.TouchManagerInstance::set_DisplayDevice(TouchScript.Devices.Display.IDisplayDevice)
// TouchScript.TouchManagerInstance
#include "TouchScript_TouchScript_TouchManagerInstanceMethodDeclarations.h"
extern const MethodInfo* ScriptableObject_CreateInstance_TisGenericDisplayDevice_t596_m3922_MethodInfo_var;
extern "C" void TouchManagerInstance_set_DisplayDevice_m3739 (TouchManagerInstance_t634 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScriptableObject_CreateInstance_TisGenericDisplayDevice_t596_m3922_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484118);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		GenericDisplayDevice_t596 * L_1 = ScriptableObject_CreateInstance_TisGenericDisplayDevice_t596_m3922(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisGenericDisplayDevice_t596_m3922_MethodInfo_var);
		__this->___displayDevice_10 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		Object_t * L_2 = ___value;
		__this->___displayDevice_10 = L_2;
	}

IL_001d:
	{
		TouchManagerInstance_updateDPI_m3763(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single TouchScript.TouchManagerInstance::get_DPI()
extern "C" float TouchManagerInstance_get_DPI_m3740 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___dpi_11);
		return L_0;
	}
}
// System.Collections.Generic.IList`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManagerInstance::get_Layers()
// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1MethodDeclarations.h"
extern TypeInfo* ReadOnlyCollection_1_t706_il2cpp_TypeInfo_var;
extern const MethodInfo* ReadOnlyCollection_1__ctor_m3923_MethodInfo_var;
extern "C" Object_t* TouchManagerInstance_get_Layers_m3741 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReadOnlyCollection_1_t706_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		ReadOnlyCollection_1__ctor_m3923_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484119);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t654 * L_0 = (__this->___layers_13);
		ReadOnlyCollection_1_t706 * L_1 = (ReadOnlyCollection_1_t706 *)il2cpp_codegen_object_new (ReadOnlyCollection_1_t706_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m3923(L_1, L_0, /*hidden argument*/ReadOnlyCollection_1__ctor_m3923_MethodInfo_var);
		return L_1;
	}
}
// System.Single TouchScript.TouchManagerInstance::get_DotsPerCentimeter()
extern "C" float TouchManagerInstance_get_DotsPerCentimeter_m3742 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___dotsPerCentimeter_12);
		return L_0;
	}
}
// System.Int32 TouchScript.TouchManagerInstance::get_NumberOfTouches()
extern "C" int32_t TouchManagerInstance_get_NumberOfTouches_m3743 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	{
		List_1_t659 * L_0 = (__this->___touches_14);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.TouchPoint>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Collections.Generic.IList`1<TouchScript.ITouch> TouchScript.TouchManagerInstance::get_ActiveTouches()
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
extern const MethodInfo* Enumerable_Cast_TisITouch_t257_m3924_MethodInfo_var;
extern const MethodInfo* Enumerable_ToList_TisITouch_t257_m3925_MethodInfo_var;
extern "C" Object_t* TouchManagerInstance_get_ActiveTouches_m3744 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerable_Cast_TisITouch_t257_m3924_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
		Enumerable_ToList_TisITouch_t257_m3925_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484121);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t659 * L_0 = (__this->___touches_14);
		Object_t* L_1 = Enumerable_Cast_TisITouch_t257_m3924(NULL /*static, unused*/, L_0, /*hidden argument*/Enumerable_Cast_TisITouch_t257_m3924_MethodInfo_var);
		List_1_t592 * L_2 = Enumerable_ToList_TisITouch_t257_m3925(NULL /*static, unused*/, L_1, /*hidden argument*/Enumerable_ToList_TisITouch_t257_m3925_MethodInfo_var);
		return L_2;
	}
}
// System.Boolean TouchScript.TouchManagerInstance::AddLayer(TouchScript.Layers.TouchLayer)
// TouchScript.Layers.TouchLayer
#include "TouchScript_TouchScript_Layers_TouchLayer.h"
extern "C" bool TouchManagerInstance_AddLayer_m3745 (TouchManagerInstance_t634 * __this, TouchLayer_t624 * ___layer, const MethodInfo* method)
{
	{
		TouchLayer_t624 * L_0 = ___layer;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		List_1_t654 * L_2 = (__this->___layers_13);
		TouchLayer_t624 * L_3 = ___layer;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, TouchLayer_t624 * >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::Contains(!0) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		List_1_t654 * L_5 = (__this->___layers_13);
		TouchLayer_t624 * L_6 = ___layer;
		NullCheck(L_5);
		VirtActionInvoker1< TouchLayer_t624 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::Add(!0) */, L_5, L_6);
		return 1;
	}
}
// System.Boolean TouchScript.TouchManagerInstance::AddLayer(TouchScript.Layers.TouchLayer,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool TouchManagerInstance_AddLayer_m3746 (TouchManagerInstance_t634 * __this, TouchLayer_t624 * ___layer, int32_t ___index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TouchLayer_t624 * L_0 = ___layer;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		List_1_t654 * L_3 = (__this->___layers_13);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::get_Count() */, L_3);
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		TouchLayer_t624 * L_5 = ___layer;
		bool L_6 = TouchManagerInstance_AddLayer_m3745(__this, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0027:
	{
		List_1_t654 * L_7 = (__this->___layers_13);
		TouchLayer_t624 * L_8 = ___layer;
		NullCheck(L_7);
		int32_t L_9 = (int32_t)VirtFuncInvoker1< int32_t, TouchLayer_t624 * >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::IndexOf(!0) */, L_7, L_8);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t654 * L_11 = (__this->___layers_13);
		int32_t L_12 = ___index;
		TouchLayer_t624 * L_13 = ___layer;
		NullCheck(L_11);
		VirtActionInvoker2< int32_t, TouchLayer_t624 * >::Invoke(29 /* System.Void System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::Insert(System.Int32,!0) */, L_11, L_12, L_13);
		goto IL_0093;
	}

IL_004d:
	{
		int32_t L_14 = ___index;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___index;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)((int32_t)L_17-(int32_t)1))))))
		{
			goto IL_005f;
		}
	}

IL_005d:
	{
		return 1;
	}

IL_005f:
	{
		List_1_t654 * L_18 = (__this->___layers_13);
		int32_t L_19 = V_0;
		NullCheck(L_18);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::RemoveAt(System.Int32) */, L_18, L_19);
		int32_t L_20 = ___index;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_0084;
		}
	}
	{
		List_1_t654 * L_22 = (__this->___layers_13);
		int32_t L_23 = ___index;
		TouchLayer_t624 * L_24 = ___layer;
		NullCheck(L_22);
		VirtActionInvoker2< int32_t, TouchLayer_t624 * >::Invoke(29 /* System.Void System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::Insert(System.Int32,!0) */, L_22, L_23, L_24);
		goto IL_0093;
	}

IL_0084:
	{
		List_1_t654 * L_25 = (__this->___layers_13);
		int32_t L_26 = ___index;
		TouchLayer_t624 * L_27 = ___layer;
		NullCheck(L_25);
		VirtActionInvoker2< int32_t, TouchLayer_t624 * >::Invoke(29 /* System.Void System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::Insert(System.Int32,!0) */, L_25, ((int32_t)((int32_t)L_26-(int32_t)1)), L_27);
	}

IL_0093:
	{
		return 1;
	}
}
// System.Boolean TouchScript.TouchManagerInstance::RemoveLayer(TouchScript.Layers.TouchLayer)
extern "C" bool TouchManagerInstance_RemoveLayer_m3747 (TouchManagerInstance_t634 * __this, TouchLayer_t624 * ___layer, const MethodInfo* method)
{
	bool V_0 = false;
	{
		TouchLayer_t624 * L_0 = ___layer;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		List_1_t654 * L_2 = (__this->___layers_13);
		TouchLayer_t624 * L_3 = ___layer;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, TouchLayer_t624 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::Remove(!0) */, L_2, L_3);
		V_0 = L_4;
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void TouchScript.TouchManagerInstance::ChangeLayerIndex(System.Int32,System.Int32)
extern "C" void TouchManagerInstance_ChangeLayerIndex_m3748 (TouchManagerInstance_t634 * __this, int32_t ___at, int32_t ___to, const MethodInfo* method)
{
	TouchLayer_t624 * V_0 = {0};
	{
		int32_t L_0 = ___at;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___at;
		List_1_t654 * L_2 = (__this->___layers_13);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		int32_t L_4 = ___to;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = ___to;
		List_1_t654 * L_6 = (__this->___layers_13);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::get_Count() */, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0032;
		}
	}

IL_0031:
	{
		return;
	}

IL_0032:
	{
		List_1_t654 * L_8 = (__this->___layers_13);
		int32_t L_9 = ___at;
		NullCheck(L_8);
		TouchLayer_t624 * L_10 = (TouchLayer_t624 *)VirtFuncInvoker1< TouchLayer_t624 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::get_Item(System.Int32) */, L_8, L_9);
		V_0 = L_10;
		List_1_t654 * L_11 = (__this->___layers_13);
		int32_t L_12 = ___at;
		NullCheck(L_11);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::RemoveAt(System.Int32) */, L_11, L_12);
		List_1_t654 * L_13 = (__this->___layers_13);
		int32_t L_14 = ___to;
		TouchLayer_t624 * L_15 = V_0;
		NullCheck(L_13);
		VirtActionInvoker2< int32_t, TouchLayer_t624 * >::Invoke(29 /* System.Void System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::Insert(System.Int32,!0) */, L_13, L_14, L_15);
		return;
	}
}
// UnityEngine.Transform TouchScript.TouchManagerInstance::GetHitTarget(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo* ITouchHit_t666_il2cpp_TypeInfo_var;
extern "C" Transform_t48 * TouchManagerInstance_GetHitTarget_m3749 (TouchManagerInstance_t634 * __this, Vector2_t85  ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITouchHit_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	TouchLayer_t624 * V_1 = {0};
	{
		Vector2_t85  L_0 = ___position;
		bool L_1 = TouchManagerInstance_GetHitTarget_m3751(__this, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		Transform_t48 * L_3 = (Transform_t48 *)InterfaceFuncInvoker0< Transform_t48 * >::Invoke(0 /* UnityEngine.Transform TouchScript.Hit.ITouchHit::get_Transform() */, ITouchHit_t666_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0017:
	{
		return (Transform_t48 *)NULL;
	}
}
// System.Boolean TouchScript.TouchManagerInstance::GetHitTarget(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
extern "C" bool TouchManagerInstance_GetHitTarget_m3750 (TouchManagerInstance_t634 * __this, Vector2_t85  ___position, Object_t ** ___hit, const MethodInfo* method)
{
	TouchLayer_t624 * V_0 = {0};
	{
		Vector2_t85  L_0 = ___position;
		Object_t ** L_1 = ___hit;
		bool L_2 = TouchManagerInstance_GetHitTarget_m3751(__this, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean TouchScript.TouchManagerInstance::GetHitTarget(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&,TouchScript.Layers.TouchLayer&)
// System.Collections.Generic.List`1/Enumerator<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"
extern const MethodInfo* List_1_GetEnumerator_m3926_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3927_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3928_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3929_MethodInfo_var;
extern "C" bool TouchManagerInstance_GetHitTarget_m3751 (TouchManagerInstance_t634 * __this, Vector2_t85  ___position, Object_t ** ___hit, TouchLayer_t624 ** ___layer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_GetEnumerator_m3926_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484122);
		Enumerator_get_Current_m3927_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484123);
		Enumerator_MoveNext_m3928_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484124);
		Enumerator_Dispose_m3929_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484125);
		s_Il2CppMethodIntialized = true;
	}
	Enumerator_t707  V_0 = {0};
	TouchLayer_t624 * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t ** L_0 = ___hit;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		TouchLayer_t624 ** L_1 = ___layer;
		*((Object_t **)(L_1)) = (Object_t *)NULL;
		List_1_t654 * L_2 = (__this->___layers_13);
		NullCheck(L_2);
		Enumerator_t707  L_3 = List_1_GetEnumerator_m3926(L_2, /*hidden argument*/List_1_GetEnumerator_m3926_MethodInfo_var);
		V_0 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_0017:
		{
			TouchLayer_t624 * L_4 = Enumerator_get_Current_m3927((&V_0), /*hidden argument*/Enumerator_get_Current_m3927_MethodInfo_var);
			V_1 = L_4;
			TouchLayer_t624 * L_5 = V_1;
			bool L_6 = Object_op_Equality_m295(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0030;
			}
		}

IL_002b:
		{
			goto IL_004c;
		}

IL_0030:
		{
			TouchLayer_t624 * L_7 = V_1;
			Vector2_t85  L_8 = ___position;
			NullCheck(L_7);
			int32_t L_9 = (int32_t)VirtFuncInvoker2< int32_t, Vector2_t85 , Object_t ** >::Invoke(5 /* TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.TouchLayer::Hit(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&) */, L_7, L_8, (&V_2));
			if ((!(((uint32_t)L_9) == ((uint32_t)1))))
			{
				goto IL_004c;
			}
		}

IL_003f:
		{
			Object_t ** L_10 = ___hit;
			Object_t * L_11 = V_2;
			*((Object_t **)(L_10)) = (Object_t *)L_11;
			TouchLayer_t624 ** L_12 = ___layer;
			TouchLayer_t624 * L_13 = V_1;
			*((Object_t **)(L_12)) = (Object_t *)L_13;
			V_3 = 1;
			IL2CPP_LEAVE(0x6D, FINALLY_005d);
		}

IL_004c:
		{
			bool L_14 = Enumerator_MoveNext_m3928((&V_0), /*hidden argument*/Enumerator_MoveNext_m3928_MethodInfo_var);
			if (L_14)
			{
				goto IL_0017;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		NullCheck((&V_0));
		Enumerator_Dispose_m3929((&V_0), Enumerator_Dispose_m3929_MethodInfo_var);
		IL2CPP_END_FINALLY(93)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_006b:
	{
		return 0;
	}

IL_006d:
	{
		bool L_15 = V_3;
		return L_15;
	}
}
// TouchScript.ITouch TouchScript.TouchManagerInstance::BeginTouch(UnityEngine.Vector2)
extern "C" Object_t * TouchManagerInstance_BeginTouch_m3752 (TouchManagerInstance_t634 * __this, Vector2_t85  ___position, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___position;
		Object_t * L_1 = TouchManagerInstance_BeginTouch_m3753(__this, L_0, (Tags_t637 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// TouchScript.ITouch TouchScript.TouchManagerInstance::BeginTouch(UnityEngine.Vector2,TouchScript.Tags)
// TouchScript.Tags
#include "TouchScript_TouchScript_Tags.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// TouchScript.TouchPoint
#include "TouchScript_TouchScript_TouchPointMethodDeclarations.h"
extern TypeInfo* TouchPoint_t664_il2cpp_TypeInfo_var;
extern "C" Object_t * TouchManagerInstance_BeginTouch_m3753 (TouchManagerInstance_t634 * __this, Vector2_t85  ___position, Tags_t637 * ___tags, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchPoint_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	TouchPoint_t664 * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t659 * L_0 = (__this->___touchesBegan_16);
		V_1 = L_0;
		Object_t * L_1 = V_1;
		Monitor_Enter_m3930(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		int32_t L_2 = (__this->___nextTouchId_20);
		int32_t L_3 = L_2;
		V_2 = L_3;
		__this->___nextTouchId_20 = ((int32_t)((int32_t)L_3+(int32_t)1));
		int32_t L_4 = V_2;
		Vector2_t85  L_5 = ___position;
		Tags_t637 * L_6 = ___tags;
		TouchPoint_t664 * L_7 = (TouchPoint_t664 *)il2cpp_codegen_object_new (TouchPoint_t664_il2cpp_TypeInfo_var);
		TouchPoint__ctor_m3773(L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		List_1_t659 * L_8 = (__this->___touchesBegan_16);
		TouchPoint_t664 * L_9 = V_0;
		NullCheck(L_8);
		VirtActionInvoker1< TouchPoint_t664 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.TouchPoint>::Add(!0) */, L_8, L_9);
		IL2CPP_LEAVE(0x3E, FINALLY_0037);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Object_t * L_10 = V_1;
		Monitor_Exit_m3931(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_003e:
	{
		TouchPoint_t664 * L_11 = V_0;
		return L_11;
	}
}
// System.Void TouchScript.TouchManagerInstance::UpdateTouch(System.Int32)
extern const MethodInfo* HashSet_1_Add_m3932_MethodInfo_var;
extern "C" void TouchManagerInstance_UpdateTouch_m3754 (TouchManagerInstance_t634 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HashSet_1_Add_m3932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484126);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		HashSet_1_t661 * L_0 = (__this->___touchesUpdated_17);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m3930(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t660 * L_2 = (__this->___idToTouch_15);
			int32_t L_3 = ___id;
			NullCheck(L_2);
			bool L_4 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>::ContainsKey(!0) */, L_2, L_3);
			if (!L_4)
			{
				goto IL_002b;
			}
		}

IL_001e:
		{
			HashSet_1_t661 * L_5 = (__this->___touchesUpdated_17);
			int32_t L_6 = ___id;
			NullCheck(L_5);
			HashSet_1_Add_m3932(L_5, L_6, /*hidden argument*/HashSet_1_Add_m3932_MethodInfo_var);
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x37, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Object_t * L_7 = V_0;
		Monitor_Exit_m3931(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::MoveTouch(System.Int32,UnityEngine.Vector2)
extern const MethodInfo* HashSet_1_Add_m3932_MethodInfo_var;
extern "C" void TouchManagerInstance_MoveTouch_m3755 (TouchManagerInstance_t634 * __this, int32_t ___id, Vector2_t85  ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HashSet_1_Add_m3932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484126);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	TouchPoint_t664 * V_1 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		HashSet_1_t661 * L_0 = (__this->___touchesUpdated_17);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m3930(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t660 * L_2 = (__this->___idToTouch_15);
			int32_t L_3 = ___id;
			NullCheck(L_2);
			bool L_4 = (bool)VirtFuncInvoker2< bool, int32_t, TouchPoint_t664 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>::TryGetValue(!0,!1&) */, L_2, L_3, (&V_1));
			if (!L_4)
			{
				goto IL_0034;
			}
		}

IL_0020:
		{
			TouchPoint_t664 * L_5 = V_1;
			Vector2_t85  L_6 = ___position;
			NullCheck(L_5);
			TouchPoint_SetPosition_m3789(L_5, L_6, /*hidden argument*/NULL);
			HashSet_1_t661 * L_7 = (__this->___touchesUpdated_17);
			int32_t L_8 = ___id;
			NullCheck(L_7);
			HashSet_1_Add_m3932(L_7, L_8, /*hidden argument*/HashSet_1_Add_m3932_MethodInfo_var);
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		Object_t * L_9 = V_0;
		Monitor_Exit_m3931(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0040:
	{
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::EndTouch(System.Int32)
// TouchScript.TouchManagerInstance/<EndTouch>c__AnonStorey5
#include "TouchScript_TouchScript_TouchManagerInstance_U3CEndTouchU3EcMethodDeclarations.h"
// System.Predicate`1<TouchScript.TouchPoint>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
extern TypeInfo* U3CEndTouchU3Ec__AnonStorey5_t656_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t708_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CEndTouchU3Ec__AnonStorey5_U3CU3Em__6_m3714_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m3933_MethodInfo_var;
extern const MethodInfo* List_1_Find_m3934_MethodInfo_var;
extern const MethodInfo* HashSet_1_Add_m3932_MethodInfo_var;
extern "C" void TouchManagerInstance_EndTouch_m3756 (TouchManagerInstance_t634 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CEndTouchU3Ec__AnonStorey5_t656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		Predicate_1_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		U3CEndTouchU3Ec__AnonStorey5_U3CU3Em__6_m3714_MethodInfo_var = il2cpp_codegen_method_info_from_index(479);
		Predicate_1__ctor_m3933_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484128);
		List_1_Find_m3934_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484129);
		HashSet_1_Add_m3932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484126);
		s_Il2CppMethodIntialized = true;
	}
	U3CEndTouchU3Ec__AnonStorey5_t656 * V_0 = {0};
	Object_t * V_1 = {0};
	TouchPoint_t664 * V_2 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CEndTouchU3Ec__AnonStorey5_t656 * L_0 = (U3CEndTouchU3Ec__AnonStorey5_t656 *)il2cpp_codegen_object_new (U3CEndTouchU3Ec__AnonStorey5_t656_il2cpp_TypeInfo_var);
		U3CEndTouchU3Ec__AnonStorey5__ctor_m3713(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CEndTouchU3Ec__AnonStorey5_t656 * L_1 = V_0;
		int32_t L_2 = ___id;
		NullCheck(L_1);
		L_1->___id_0 = L_2;
		HashSet_1_t661 * L_3 = (__this->___touchesEnded_18);
		V_1 = L_3;
		Object_t * L_4 = V_1;
		Monitor_Enter_m3930(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t660 * L_5 = (__this->___idToTouch_15);
			U3CEndTouchU3Ec__AnonStorey5_t656 * L_6 = V_0;
			NullCheck(L_6);
			int32_t L_7 = (L_6->___id_0);
			NullCheck(L_5);
			bool L_8 = (bool)VirtFuncInvoker2< bool, int32_t, TouchPoint_t664 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>::TryGetValue(!0,!1&) */, L_5, L_7, (&V_2));
			if (L_8)
			{
				goto IL_0055;
			}
		}

IL_0032:
		{
			List_1_t659 * L_9 = (__this->___touchesBegan_16);
			U3CEndTouchU3Ec__AnonStorey5_t656 * L_10 = V_0;
			IntPtr_t L_11 = { (void*)U3CEndTouchU3Ec__AnonStorey5_U3CU3Em__6_m3714_MethodInfo_var };
			Predicate_1_t708 * L_12 = (Predicate_1_t708 *)il2cpp_codegen_object_new (Predicate_1_t708_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m3933(L_12, L_10, L_11, /*hidden argument*/Predicate_1__ctor_m3933_MethodInfo_var);
			NullCheck(L_9);
			TouchPoint_t664 * L_13 = List_1_Find_m3934(L_9, L_12, /*hidden argument*/List_1_Find_m3934_MethodInfo_var);
			V_2 = L_13;
			TouchPoint_t664 * L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x73, FINALLY_006c);
		}

IL_0055:
		{
			HashSet_1_t661 * L_15 = (__this->___touchesEnded_18);
			TouchPoint_t664 * L_16 = V_2;
			NullCheck(L_16);
			int32_t L_17 = TouchPoint_get_Id_m3774(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			HashSet_1_Add_m3932(L_15, L_17, /*hidden argument*/HashSet_1_Add_m3932_MethodInfo_var);
			IL2CPP_LEAVE(0x73, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		Object_t * L_18 = V_1;
		Monitor_Exit_m3931(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(108)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0073:
	{
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::CancelTouch(System.Int32)
// TouchScript.TouchManagerInstance/<CancelTouch>c__AnonStorey6
#include "TouchScript_TouchScript_TouchManagerInstance_U3CCancelTouchUMethodDeclarations.h"
extern TypeInfo* U3CCancelTouchU3Ec__AnonStorey6_t657_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t708_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CCancelTouchU3Ec__AnonStorey6_U3CU3Em__7_m3716_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m3933_MethodInfo_var;
extern const MethodInfo* List_1_Find_m3934_MethodInfo_var;
extern const MethodInfo* HashSet_1_Add_m3932_MethodInfo_var;
extern "C" void TouchManagerInstance_CancelTouch_m3757 (TouchManagerInstance_t634 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CCancelTouchU3Ec__AnonStorey6_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(452);
		Predicate_1_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		U3CCancelTouchU3Ec__AnonStorey6_U3CU3Em__7_m3716_MethodInfo_var = il2cpp_codegen_method_info_from_index(482);
		Predicate_1__ctor_m3933_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484128);
		List_1_Find_m3934_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484129);
		HashSet_1_Add_m3932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484126);
		s_Il2CppMethodIntialized = true;
	}
	U3CCancelTouchU3Ec__AnonStorey6_t657 * V_0 = {0};
	Object_t * V_1 = {0};
	TouchPoint_t664 * V_2 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CCancelTouchU3Ec__AnonStorey6_t657 * L_0 = (U3CCancelTouchU3Ec__AnonStorey6_t657 *)il2cpp_codegen_object_new (U3CCancelTouchU3Ec__AnonStorey6_t657_il2cpp_TypeInfo_var);
		U3CCancelTouchU3Ec__AnonStorey6__ctor_m3715(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCancelTouchU3Ec__AnonStorey6_t657 * L_1 = V_0;
		int32_t L_2 = ___id;
		NullCheck(L_1);
		L_1->___id_0 = L_2;
		HashSet_1_t661 * L_3 = (__this->___touchesCancelled_19);
		V_1 = L_3;
		Object_t * L_4 = V_1;
		Monitor_Enter_m3930(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t660 * L_5 = (__this->___idToTouch_15);
			U3CCancelTouchU3Ec__AnonStorey6_t657 * L_6 = V_0;
			NullCheck(L_6);
			int32_t L_7 = (L_6->___id_0);
			NullCheck(L_5);
			bool L_8 = (bool)VirtFuncInvoker2< bool, int32_t, TouchPoint_t664 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>::TryGetValue(!0,!1&) */, L_5, L_7, (&V_2));
			if (L_8)
			{
				goto IL_0055;
			}
		}

IL_0032:
		{
			List_1_t659 * L_9 = (__this->___touchesBegan_16);
			U3CCancelTouchU3Ec__AnonStorey6_t657 * L_10 = V_0;
			IntPtr_t L_11 = { (void*)U3CCancelTouchU3Ec__AnonStorey6_U3CU3Em__7_m3716_MethodInfo_var };
			Predicate_1_t708 * L_12 = (Predicate_1_t708 *)il2cpp_codegen_object_new (Predicate_1_t708_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m3933(L_12, L_10, L_11, /*hidden argument*/Predicate_1__ctor_m3933_MethodInfo_var);
			NullCheck(L_9);
			TouchPoint_t664 * L_13 = List_1_Find_m3934(L_9, L_12, /*hidden argument*/List_1_Find_m3934_MethodInfo_var);
			V_2 = L_13;
			TouchPoint_t664 * L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x73, FINALLY_006c);
		}

IL_0055:
		{
			HashSet_1_t661 * L_15 = (__this->___touchesCancelled_19);
			TouchPoint_t664 * L_16 = V_2;
			NullCheck(L_16);
			int32_t L_17 = TouchPoint_get_Id_m3774(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			HashSet_1_Add_m3932(L_15, L_17, /*hidden argument*/HashSet_1_Add_m3932_MethodInfo_var);
			IL2CPP_LEAVE(0x73, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		Object_t * L_18 = V_1;
		Monitor_Exit_m3931(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(108)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0073:
	{
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::Awake()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern TypeInfo* TouchManagerInstance_t634_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral356;
extern "C" void TouchManagerInstance_Awake_m3758 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManagerInstance_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		_stringLiteral356 = il2cpp_codegen_string_literal_from_index(356);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		TouchManagerInstance_t634 * L_0 = ((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___instance_9;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___instance_9 = __this;
		goto IL_0032;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		TouchManagerInstance_t634 * L_2 = ((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___instance_9;
		bool L_3 = Object_op_Inequality_m268(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		Object_Destroy_m1143(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}

IL_0032:
	{
		GameObject_t30 * L_4 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_set_hideFlags_m301(L_4, 1, /*hidden argument*/NULL);
		GameObject_t30 * L_5 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m456(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		TouchManagerInstance_updateDPI_m3763(__this, /*hidden argument*/NULL);
		MonoBehaviour_StopAllCoroutines_m1099(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m1234(__this, _stringLiteral356, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::OnLevelWasLoaded(System.Int32)
extern Il2CppCodeGenString* _stringLiteral356;
extern "C" void TouchManagerInstance_OnLevelWasLoaded_m3759 (TouchManagerInstance_t634 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral356 = il2cpp_codegen_string_literal_from_index(356);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_StopAllCoroutines_m1099(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m1234(__this, _stringLiteral356, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TouchScript.TouchManagerInstance::lateAwake()
// TouchScript.TouchManagerInstance/<lateAwake>c__Iterator3
#include "TouchScript_TouchScript_TouchManagerInstance_U3ClateAwakeU3EMethodDeclarations.h"
extern TypeInfo* U3ClateAwakeU3Ec__Iterator3_t658_il2cpp_TypeInfo_var;
extern "C" Object_t * TouchManagerInstance_lateAwake_m3760 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3ClateAwakeU3Ec__Iterator3_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(453);
		s_Il2CppMethodIntialized = true;
	}
	U3ClateAwakeU3Ec__Iterator3_t658 * V_0 = {0};
	{
		U3ClateAwakeU3Ec__Iterator3_t658 * L_0 = (U3ClateAwakeU3Ec__Iterator3_t658 *)il2cpp_codegen_object_new (U3ClateAwakeU3Ec__Iterator3_t658_il2cpp_TypeInfo_var);
		U3ClateAwakeU3Ec__Iterator3__ctor_m3717(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3ClateAwakeU3Ec__Iterator3_t658 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3ClateAwakeU3Ec__Iterator3_t658 * L_2 = V_0;
		return L_2;
	}
}
// System.Void TouchScript.TouchManagerInstance::Update()
extern "C" void TouchManagerInstance_Update_m3761 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	{
		TouchManagerInstance_updateTouches_m3771(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::OnApplicationQuit()
extern TypeInfo* TouchManagerInstance_t634_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_OnApplicationQuit_m3762 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManagerInstance_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___shuttingDown_8 = 1;
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::updateDPI()
extern TypeInfo* IDisplayDevice_t663_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_updateDPI_m3763 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisplayDevice_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	TouchManagerInstance_t634 * G_B2_0 = {0};
	TouchManagerInstance_t634 * G_B1_0 = {0};
	float G_B3_0 = 0.0f;
	TouchManagerInstance_t634 * G_B3_1 = {0};
	{
		Object_t * L_0 = TouchManagerInstance_get_DisplayDevice_m3738(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = (96.0f);
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_0016:
	{
		Object_t * L_1 = TouchManagerInstance_get_DisplayDevice_m3738(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2 = (float)InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single TouchScript.Devices.Display.IDisplayDevice::get_DPI() */, IDisplayDevice_t663_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		NullCheck(G_B3_1);
		G_B3_1->___dpi_11 = G_B3_0;
		float L_3 = (__this->___dpi_11);
		__this->___dotsPerCentimeter_12 = ((float)((float)(0.393700778f)*(float)L_3));
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::updateLayers()
// System.Predicate`1<TouchScript.Layers.TouchLayer>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
extern TypeInfo* TouchManagerInstance_t634_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t662_il2cpp_TypeInfo_var;
extern const MethodInfo* TouchManagerInstance_U3CupdateLayersU3Em__8_m3772_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m3935_MethodInfo_var;
extern const MethodInfo* List_1_FindAll_m3936_MethodInfo_var;
extern "C" void TouchManagerInstance_updateLayers_m3764 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManagerInstance_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(422);
		Predicate_1_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		TouchManagerInstance_U3CupdateLayersU3Em__8_m3772_MethodInfo_var = il2cpp_codegen_method_info_from_index(483);
		Predicate_1__ctor_m3935_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484132);
		List_1_FindAll_m3936_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484133);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t654 * G_B2_0 = {0};
	TouchManagerInstance_t634 * G_B2_1 = {0};
	List_1_t654 * G_B1_0 = {0};
	TouchManagerInstance_t634 * G_B1_1 = {0};
	{
		List_1_t654 * L_0 = (__this->___layers_13);
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		Predicate_1_t662 * L_1 = ((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_001f;
		}
	}
	{
		IntPtr_t L_2 = { (void*)TouchManagerInstance_U3CupdateLayersU3Em__8_m3772_MethodInfo_var };
		Predicate_1_t662 * L_3 = (Predicate_1_t662 *)il2cpp_codegen_object_new (Predicate_1_t662_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m3935(L_3, NULL, L_2, /*hidden argument*/Predicate_1__ctor_m3935_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_3;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManagerInstance_t634_il2cpp_TypeInfo_var);
		Predicate_1_t662 * L_4 = ((TouchManagerInstance_t634_StaticFields*)TouchManagerInstance_t634_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B2_0);
		List_1_t654 * L_5 = List_1_FindAll_m3936(G_B2_0, L_4, /*hidden argument*/List_1_FindAll_m3936_MethodInfo_var);
		NullCheck(G_B2_1);
		G_B2_1->___layers_13 = L_5;
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::createCameraLayer()
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisTouchLayer_t624_m3937_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCameraLayer_t640_m3938_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral357;
extern "C" void TouchManagerInstance_createCameraLayer_m3765 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisTouchLayer_t624_m3937_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		GameObject_AddComponent_TisCameraLayer_t640_m3938_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484135);
		_stringLiteral357 = il2cpp_codegen_string_literal_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	TouchLayer_t624 * V_0 = {0};
	{
		List_1_t654 * L_0 = (__this->___layers_13);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0059;
		}
	}
	{
		Debug_LogWarning_m378(NULL /*static, unused*/, _stringLiteral357, /*hidden argument*/NULL);
		Camera_t32 * L_2 = Camera_get_main_m1121(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = Object_op_Inequality_m268(NULL /*static, unused*/, L_2, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		Camera_t32 * L_4 = Camera_get_main_m1121(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		TouchLayer_t624 * L_5 = Component_GetComponent_TisTouchLayer_t624_m3937(L_4, /*hidden argument*/Component_GetComponent_TisTouchLayer_t624_m3937_MethodInfo_var);
		V_0 = L_5;
		TouchLayer_t624 * L_6 = V_0;
		bool L_7 = Object_op_Equality_m295(NULL /*static, unused*/, L_6, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		Camera_t32 * L_8 = Camera_get_main_m1121(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_t30 * L_9 = Component_get_gameObject_m317(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		CameraLayer_t640 * L_10 = GameObject_AddComponent_TisCameraLayer_t640_m3938(L_9, /*hidden argument*/GameObject_AddComponent_TisCameraLayer_t640_m3938_MethodInfo_var);
		V_0 = L_10;
	}

IL_0051:
	{
		TouchLayer_t624 * L_11 = V_0;
		TouchManagerInstance_AddLayer_m3745(__this, L_11, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::createTouchInput()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* InputSource_t633_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t30_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectsOfType_TisTouchManager_t252_m3940_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMobileInput_t672_m3941_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMouseInput_t636_m3942_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral358;
extern "C" void TouchManagerInstance_createTouchInput_m3766 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputSource_t633_0_0_0_var = il2cpp_codegen_type_from_index(456);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GameObject_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Object_FindObjectsOfType_TisTouchManager_t252_m3940_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484136);
		GameObject_AddComponent_TisMobileInput_t672_m3941_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484137);
		GameObject_AddComponent_TisMouseInput_t636_m3942_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484138);
		_stringLiteral358 = il2cpp_codegen_string_literal_from_index(358);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t709* V_0 = {0};
	GameObject_t30 * V_1 = {0};
	TouchManagerU5BU5D_t710* V_2 = {0};
	int32_t V_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(InputSource_t633_0_0_0_var), /*hidden argument*/NULL);
		ObjectU5BU5D_t709* L_1 = Object_FindObjectsOfType_m3939(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_t709* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_00b0;
		}
	}
	{
		V_1 = (GameObject_t30 *)NULL;
		TouchManagerU5BU5D_t710* L_3 = Object_FindObjectsOfType_TisTouchManager_t252_m3940(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisTouchManager_t252_m3940_MethodInfo_var);
		V_2 = L_3;
		TouchManagerU5BU5D_t710* L_4 = V_2;
		NullCheck(L_4);
		if ((((int32_t)(((Array_t *)L_4)->max_length))))
		{
			goto IL_004f;
		}
	}
	{
		GameObject_t30 * L_5 = GameObject_Find_m350(NULL /*static, unused*/, _stringLiteral358, /*hidden argument*/NULL);
		V_1 = L_5;
		GameObject_t30 * L_6 = V_1;
		bool L_7 = Object_op_Equality_m295(NULL /*static, unused*/, L_6, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		GameObject_t30 * L_8 = (GameObject_t30 *)il2cpp_codegen_object_new (GameObject_t30_il2cpp_TypeInfo_var);
		GameObject__ctor_m2776(L_8, _stringLiteral358, /*hidden argument*/NULL);
		V_1 = L_8;
	}

IL_004a:
	{
		goto IL_0058;
	}

IL_004f:
	{
		TouchManagerU5BU5D_t710* L_9 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		NullCheck((*(TouchManager_t252 **)(TouchManager_t252 **)SZArrayLdElema(L_9, L_10, sizeof(TouchManager_t252 *))));
		GameObject_t30 * L_11 = Component_get_gameObject_m317((*(TouchManager_t252 **)(TouchManager_t252 **)SZArrayLdElema(L_9, L_10, sizeof(TouchManager_t252 *))), /*hidden argument*/NULL);
		V_1 = L_11;
	}

IL_0058:
	{
		int32_t L_12 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)18))) == 0)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)18))) == 1)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)18))) == 2)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)18))) == 3)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)18))) == 4)
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_14 = V_3;
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 0)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 1)
		{
			goto IL_00a4;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 2)
		{
			goto IL_00a4;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 3)
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00a4;
	}

IL_0098:
	{
		GameObject_t30 * L_15 = V_1;
		NullCheck(L_15);
		GameObject_AddComponent_TisMobileInput_t672_m3941(L_15, /*hidden argument*/GameObject_AddComponent_TisMobileInput_t672_m3941_MethodInfo_var);
		goto IL_00b0;
	}

IL_00a4:
	{
		GameObject_t30 * L_16 = V_1;
		NullCheck(L_16);
		GameObject_AddComponent_TisMouseInput_t636_m3942(L_16, /*hidden argument*/GameObject_AddComponent_TisMouseInput_t636_m3942_MethodInfo_var);
		goto IL_00b0;
	}

IL_00b0:
	{
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::updateBegan()
// System.Collections.Generic.List`1<TouchScript.ITouch>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<TouchScript.TouchPoint>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5MethodDeclarations.h"
// TouchScript.Layers.TouchLayer
#include "TouchScript_TouchScript_Layers_TouchLayerMethodDeclarations.h"
// TouchScript.TouchEventArgs
#include "TouchScript_TouchScript_TouchEventArgsMethodDeclarations.h"
// System.EventHandler`1<TouchScript.TouchEventArgs>
#include "mscorlib_System_EventHandler_1_gen_0MethodDeclarations.h"
extern TypeInfo* List_1_t592_il2cpp_TypeInfo_var;
extern TypeInfo* TouchEventArgs_t226_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3943_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3944_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3945_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3926_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3927_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3928_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3929_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3946_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3947_MethodInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3948_MethodInfo_var;
extern "C" void TouchManagerInstance_updateBegan_m3767 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		TouchEventArgs_t226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		List_1__ctor_m3943_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484139);
		List_1_GetEnumerator_m3944_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484140);
		Enumerator_get_Current_m3945_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484141);
		List_1_GetEnumerator_m3926_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484122);
		Enumerator_get_Current_m3927_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484123);
		Enumerator_MoveNext_m3928_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484124);
		Enumerator_Dispose_m3929_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484125);
		Enumerator_MoveNext_m3946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484142);
		Enumerator_Dispose_m3947_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484143);
		EventHandler_1_Invoke_m3948_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484144);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t592 * V_0 = {0};
	Enumerator_t711  V_1 = {0};
	TouchPoint_t664 * V_2 = {0};
	Enumerator_t707  V_3 = {0};
	TouchLayer_t624 * V_4 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t659 * L_0 = (__this->___touchesBegan_16);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.TouchPoint>::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		List_1_t659 * L_2 = (__this->___touchesBegan_16);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<TouchScript.TouchPoint>::get_Count() */, L_2);
		List_1_t592 * L_4 = (List_1_t592 *)il2cpp_codegen_object_new (List_1_t592_il2cpp_TypeInfo_var);
		List_1__ctor_m3943(L_4, L_3, /*hidden argument*/List_1__ctor_m3943_MethodInfo_var);
		V_0 = L_4;
		List_1_t659 * L_5 = (__this->___touchesBegan_16);
		NullCheck(L_5);
		Enumerator_t711  L_6 = List_1_GetEnumerator_m3944(L_5, /*hidden argument*/List_1_GetEnumerator_m3944_MethodInfo_var);
		V_1 = L_6;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bd;
		}

IL_0033:
		{
			TouchPoint_t664 * L_7 = Enumerator_get_Current_m3945((&V_1), /*hidden argument*/Enumerator_get_Current_m3945_MethodInfo_var);
			V_2 = L_7;
			List_1_t592 * L_8 = V_0;
			TouchPoint_t664 * L_9 = V_2;
			NullCheck(L_8);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Add(!0) */, L_8, L_9);
			List_1_t659 * L_10 = (__this->___touches_14);
			TouchPoint_t664 * L_11 = V_2;
			NullCheck(L_10);
			VirtActionInvoker1< TouchPoint_t664 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.TouchPoint>::Add(!0) */, L_10, L_11);
			Dictionary_2_t660 * L_12 = (__this->___idToTouch_15);
			TouchPoint_t664 * L_13 = V_2;
			NullCheck(L_13);
			int32_t L_14 = TouchPoint_get_Id_m3774(L_13, /*hidden argument*/NULL);
			TouchPoint_t664 * L_15 = V_2;
			NullCheck(L_12);
			VirtActionInvoker2< int32_t, TouchPoint_t664 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>::Add(!0,!1) */, L_12, L_14, L_15);
			List_1_t654 * L_16 = (__this->___layers_13);
			NullCheck(L_16);
			Enumerator_t707  L_17 = List_1_GetEnumerator_m3926(L_16, /*hidden argument*/List_1_GetEnumerator_m3926_MethodInfo_var);
			V_3 = L_17;
		}

IL_006c:
		try
		{ // begin try (depth: 2)
			{
				goto IL_009e;
			}

IL_0071:
			{
				TouchLayer_t624 * L_18 = Enumerator_get_Current_m3927((&V_3), /*hidden argument*/Enumerator_get_Current_m3927_MethodInfo_var);
				V_4 = L_18;
				TouchLayer_t624 * L_19 = V_4;
				bool L_20 = Object_op_Equality_m295(NULL /*static, unused*/, L_19, (Object_t99 *)NULL, /*hidden argument*/NULL);
				if (!L_20)
				{
					goto IL_008c;
				}
			}

IL_0087:
			{
				goto IL_009e;
			}

IL_008c:
			{
				TouchLayer_t624 * L_21 = V_4;
				TouchPoint_t664 * L_22 = V_2;
				NullCheck(L_21);
				bool L_23 = TouchLayer_BeginTouch_m3671(L_21, L_22, /*hidden argument*/NULL);
				if (!L_23)
				{
					goto IL_009e;
				}
			}

IL_0099:
			{
				goto IL_00aa;
			}

IL_009e:
			{
				bool L_24 = Enumerator_MoveNext_m3928((&V_3), /*hidden argument*/Enumerator_MoveNext_m3928_MethodInfo_var);
				if (L_24)
				{
					goto IL_0071;
				}
			}

IL_00aa:
			{
				IL2CPP_LEAVE(0xBD, FINALLY_00af);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t236 *)e.ex;
			goto FINALLY_00af;
		}

FINALLY_00af:
		{ // begin finally (depth: 2)
			NullCheck((&V_3));
			Enumerator_Dispose_m3929((&V_3), Enumerator_Dispose_m3929_MethodInfo_var);
			IL2CPP_END_FINALLY(175)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(175)
		{
			IL2CPP_JUMP_TBL(0xBD, IL_00bd)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
		}

IL_00bd:
		{
			bool L_25 = Enumerator_MoveNext_m3946((&V_1), /*hidden argument*/Enumerator_MoveNext_m3946_MethodInfo_var);
			if (L_25)
			{
				goto IL_0033;
			}
		}

IL_00c9:
		{
			IL2CPP_LEAVE(0xDC, FINALLY_00ce);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_00ce;
	}

FINALLY_00ce:
	{ // begin finally (depth: 1)
		NullCheck((&V_1));
		Enumerator_Dispose_m3947((&V_1), Enumerator_Dispose_m3947_MethodInfo_var);
		IL2CPP_END_FINALLY(206)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(206)
	{
		IL2CPP_JUMP_TBL(0xDC, IL_00dc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_00dc:
	{
		EventHandler_1_t253 * L_26 = (__this->___touchesBeganInvoker_2);
		if (!L_26)
		{
			goto IL_00f9;
		}
	}
	{
		EventHandler_1_t253 * L_27 = (__this->___touchesBeganInvoker_2);
		List_1_t592 * L_28 = V_0;
		TouchEventArgs_t226 * L_29 = (TouchEventArgs_t226 *)il2cpp_codegen_object_new (TouchEventArgs_t226_il2cpp_TypeInfo_var);
		TouchEventArgs__ctor_m3619(L_29, L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		EventHandler_1_Invoke_m3948(L_27, __this, L_29, /*hidden argument*/EventHandler_1_Invoke_m3948_MethodInfo_var);
	}

IL_00f9:
	{
		List_1_t659 * L_30 = (__this->___touchesBegan_16);
		NullCheck(L_30);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<TouchScript.TouchPoint>::Clear() */, L_30);
	}

IL_0104:
	{
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::updateUpdated()
extern TypeInfo* List_1_t592_il2cpp_TypeInfo_var;
extern TypeInfo* TouchEventArgs_t226_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3943_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3944_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3945_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3946_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3947_MethodInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3948_MethodInfo_var;
extern "C" void TouchManagerInstance_updateUpdated_m3768 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		TouchEventArgs_t226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		List_1__ctor_m3943_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484139);
		List_1_GetEnumerator_m3944_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484140);
		Enumerator_get_Current_m3945_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484141);
		Enumerator_MoveNext_m3946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484142);
		Enumerator_Dispose_m3947_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484143);
		EventHandler_1_Invoke_m3948_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484144);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t592 * V_0 = {0};
	Enumerator_t711  V_1 = {0};
	TouchPoint_t664 * V_2 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		HashSet_1_t661 * L_0 = (__this->___touchesUpdated_17);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00c2;
		}
	}
	{
		HashSet_1_t661 * L_2 = (__this->___touchesUpdated_17);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count() */, L_2);
		List_1_t592 * L_4 = (List_1_t592 *)il2cpp_codegen_object_new (List_1_t592_il2cpp_TypeInfo_var);
		List_1__ctor_m3943(L_4, L_3, /*hidden argument*/List_1__ctor_m3943_MethodInfo_var);
		V_0 = L_4;
		List_1_t659 * L_5 = (__this->___touches_14);
		NullCheck(L_5);
		Enumerator_t711  L_6 = List_1_GetEnumerator_m3944(L_5, /*hidden argument*/List_1_GetEnumerator_m3944_MethodInfo_var);
		V_1 = L_6;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007b;
		}

IL_0033:
		{
			TouchPoint_t664 * L_7 = Enumerator_get_Current_m3945((&V_1), /*hidden argument*/Enumerator_get_Current_m3945_MethodInfo_var);
			V_2 = L_7;
			TouchPoint_t664 * L_8 = V_2;
			NullCheck(L_8);
			TouchPoint_ResetPosition_m3788(L_8, /*hidden argument*/NULL);
			HashSet_1_t661 * L_9 = (__this->___touchesUpdated_17);
			TouchPoint_t664 * L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = TouchPoint_get_Id_m3774(L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			bool L_12 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0) */, L_9, L_11);
			if (!L_12)
			{
				goto IL_007b;
			}
		}

IL_0057:
		{
			List_1_t592 * L_13 = V_0;
			TouchPoint_t664 * L_14 = V_2;
			NullCheck(L_13);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Add(!0) */, L_13, L_14);
			TouchPoint_t664 * L_15 = V_2;
			NullCheck(L_15);
			TouchLayer_t624 * L_16 = TouchPoint_get_Layer_m3783(L_15, /*hidden argument*/NULL);
			bool L_17 = Object_op_Inequality_m268(NULL /*static, unused*/, L_16, (Object_t99 *)NULL, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_007b;
			}
		}

IL_006f:
		{
			TouchPoint_t664 * L_18 = V_2;
			NullCheck(L_18);
			TouchLayer_t624 * L_19 = TouchPoint_get_Layer_m3783(L_18, /*hidden argument*/NULL);
			TouchPoint_t664 * L_20 = V_2;
			NullCheck(L_19);
			TouchLayer_UpdateTouch_m3672(L_19, L_20, /*hidden argument*/NULL);
		}

IL_007b:
		{
			bool L_21 = Enumerator_MoveNext_m3946((&V_1), /*hidden argument*/Enumerator_MoveNext_m3946_MethodInfo_var);
			if (L_21)
			{
				goto IL_0033;
			}
		}

IL_0087:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		NullCheck((&V_1));
		Enumerator_Dispose_m3947((&V_1), Enumerator_Dispose_m3947_MethodInfo_var);
		IL2CPP_END_FINALLY(140)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_009a:
	{
		EventHandler_1_t253 * L_22 = (__this->___touchesMovedInvoker_3);
		if (!L_22)
		{
			goto IL_00b7;
		}
	}
	{
		EventHandler_1_t253 * L_23 = (__this->___touchesMovedInvoker_3);
		List_1_t592 * L_24 = V_0;
		TouchEventArgs_t226 * L_25 = (TouchEventArgs_t226 *)il2cpp_codegen_object_new (TouchEventArgs_t226_il2cpp_TypeInfo_var);
		TouchEventArgs__ctor_m3619(L_25, L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		EventHandler_1_Invoke_m3948(L_23, __this, L_25, /*hidden argument*/EventHandler_1_Invoke_m3948_MethodInfo_var);
	}

IL_00b7:
	{
		HashSet_1_t661 * L_26 = (__this->___touchesUpdated_17);
		NullCheck(L_26);
		VirtActionInvoker0::Invoke(7 /* System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear() */, L_26);
	}

IL_00c2:
	{
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::updateEnded()
// System.Collections.Generic.HashSet`1/Enumerator<System.Int32>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator_MethodDeclarations.h"
extern TypeInfo* List_1_t592_il2cpp_TypeInfo_var;
extern TypeInfo* TouchEventArgs_t226_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3943_MethodInfo_var;
extern const MethodInfo* HashSet_1_GetEnumerator_m3949_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3950_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3951_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3952_MethodInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3948_MethodInfo_var;
extern "C" void TouchManagerInstance_updateEnded_m3769 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		TouchEventArgs_t226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		List_1__ctor_m3943_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484139);
		HashSet_1_GetEnumerator_m3949_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484145);
		Enumerator_get_Current_m3950_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		Enumerator_MoveNext_m3951_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484147);
		Enumerator_Dispose_m3952_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484148);
		EventHandler_1_Invoke_m3948_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484144);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t592 * V_0 = {0};
	Enumerator_t712  V_1 = {0};
	int32_t V_2 = 0;
	TouchPoint_t664 * V_3 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		HashSet_1_t661 * L_0 = (__this->___touchesEnded_18);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		HashSet_1_t661 * L_2 = (__this->___touchesEnded_18);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count() */, L_2);
		List_1_t592 * L_4 = (List_1_t592 *)il2cpp_codegen_object_new (List_1_t592_il2cpp_TypeInfo_var);
		List_1__ctor_m3943(L_4, L_3, /*hidden argument*/List_1__ctor_m3943_MethodInfo_var);
		V_0 = L_4;
		HashSet_1_t661 * L_5 = (__this->___touchesEnded_18);
		NullCheck(L_5);
		Enumerator_t712  L_6 = HashSet_1_GetEnumerator_m3949(L_5, /*hidden argument*/HashSet_1_GetEnumerator_m3949_MethodInfo_var);
		V_1 = L_6;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008b;
		}

IL_0033:
		{
			int32_t L_7 = Enumerator_get_Current_m3950((&V_1), /*hidden argument*/Enumerator_get_Current_m3950_MethodInfo_var);
			V_2 = L_7;
			Dictionary_2_t660 * L_8 = (__this->___idToTouch_15);
			int32_t L_9 = V_2;
			NullCheck(L_8);
			TouchPoint_t664 * L_10 = (TouchPoint_t664 *)VirtFuncInvoker1< TouchPoint_t664 *, int32_t >::Invoke(25 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>::get_Item(!0) */, L_8, L_9);
			V_3 = L_10;
			Dictionary_2_t660 * L_11 = (__this->___idToTouch_15);
			TouchPoint_t664 * L_12 = V_3;
			NullCheck(L_12);
			int32_t L_13 = TouchPoint_get_Id_m3774(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>::Remove(!0) */, L_11, L_13);
			List_1_t659 * L_14 = (__this->___touches_14);
			TouchPoint_t664 * L_15 = V_3;
			NullCheck(L_14);
			VirtFuncInvoker1< bool, TouchPoint_t664 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<TouchScript.TouchPoint>::Remove(!0) */, L_14, L_15);
			List_1_t592 * L_16 = V_0;
			TouchPoint_t664 * L_17 = V_3;
			NullCheck(L_16);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Add(!0) */, L_16, L_17);
			TouchPoint_t664 * L_18 = V_3;
			NullCheck(L_18);
			TouchLayer_t624 * L_19 = TouchPoint_get_Layer_m3783(L_18, /*hidden argument*/NULL);
			bool L_20 = Object_op_Inequality_m268(NULL /*static, unused*/, L_19, (Object_t99 *)NULL, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_008b;
			}
		}

IL_007f:
		{
			TouchPoint_t664 * L_21 = V_3;
			NullCheck(L_21);
			TouchLayer_t624 * L_22 = TouchPoint_get_Layer_m3783(L_21, /*hidden argument*/NULL);
			TouchPoint_t664 * L_23 = V_3;
			NullCheck(L_22);
			TouchLayer_EndTouch_m3673(L_22, L_23, /*hidden argument*/NULL);
		}

IL_008b:
		{
			bool L_24 = Enumerator_MoveNext_m3951((&V_1), /*hidden argument*/Enumerator_MoveNext_m3951_MethodInfo_var);
			if (L_24)
			{
				goto IL_0033;
			}
		}

IL_0097:
		{
			IL2CPP_LEAVE(0xAA, FINALLY_009c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_009c;
	}

FINALLY_009c:
	{ // begin finally (depth: 1)
		NullCheck((&V_1));
		Enumerator_Dispose_m3952((&V_1), Enumerator_Dispose_m3952_MethodInfo_var);
		IL2CPP_END_FINALLY(156)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(156)
	{
		IL2CPP_JUMP_TBL(0xAA, IL_00aa)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_00aa:
	{
		EventHandler_1_t253 * L_25 = (__this->___touchesEndedInvoker_4);
		if (!L_25)
		{
			goto IL_00c7;
		}
	}
	{
		EventHandler_1_t253 * L_26 = (__this->___touchesEndedInvoker_4);
		List_1_t592 * L_27 = V_0;
		TouchEventArgs_t226 * L_28 = (TouchEventArgs_t226 *)il2cpp_codegen_object_new (TouchEventArgs_t226_il2cpp_TypeInfo_var);
		TouchEventArgs__ctor_m3619(L_28, L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		EventHandler_1_Invoke_m3948(L_26, __this, L_28, /*hidden argument*/EventHandler_1_Invoke_m3948_MethodInfo_var);
	}

IL_00c7:
	{
		HashSet_1_t661 * L_29 = (__this->___touchesEnded_18);
		NullCheck(L_29);
		VirtActionInvoker0::Invoke(7 /* System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear() */, L_29);
	}

IL_00d2:
	{
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::updateCancelled()
extern TypeInfo* List_1_t592_il2cpp_TypeInfo_var;
extern TypeInfo* TouchEventArgs_t226_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3943_MethodInfo_var;
extern const MethodInfo* HashSet_1_GetEnumerator_m3949_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3950_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3951_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3952_MethodInfo_var;
extern const MethodInfo* EventHandler_1_Invoke_m3948_MethodInfo_var;
extern "C" void TouchManagerInstance_updateCancelled_m3770 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		TouchEventArgs_t226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		List_1__ctor_m3943_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484139);
		HashSet_1_GetEnumerator_m3949_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484145);
		Enumerator_get_Current_m3950_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		Enumerator_MoveNext_m3951_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484147);
		Enumerator_Dispose_m3952_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484148);
		EventHandler_1_Invoke_m3948_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484144);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t592 * V_0 = {0};
	Enumerator_t712  V_1 = {0};
	int32_t V_2 = 0;
	TouchPoint_t664 * V_3 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		HashSet_1_t661 * L_0 = (__this->___touchesCancelled_19);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		HashSet_1_t661 * L_2 = (__this->___touchesCancelled_19);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count() */, L_2);
		List_1_t592 * L_4 = (List_1_t592 *)il2cpp_codegen_object_new (List_1_t592_il2cpp_TypeInfo_var);
		List_1__ctor_m3943(L_4, L_3, /*hidden argument*/List_1__ctor_m3943_MethodInfo_var);
		V_0 = L_4;
		HashSet_1_t661 * L_5 = (__this->___touchesCancelled_19);
		NullCheck(L_5);
		Enumerator_t712  L_6 = HashSet_1_GetEnumerator_m3949(L_5, /*hidden argument*/HashSet_1_GetEnumerator_m3949_MethodInfo_var);
		V_1 = L_6;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008b;
		}

IL_0033:
		{
			int32_t L_7 = Enumerator_get_Current_m3950((&V_1), /*hidden argument*/Enumerator_get_Current_m3950_MethodInfo_var);
			V_2 = L_7;
			Dictionary_2_t660 * L_8 = (__this->___idToTouch_15);
			int32_t L_9 = V_2;
			NullCheck(L_8);
			TouchPoint_t664 * L_10 = (TouchPoint_t664 *)VirtFuncInvoker1< TouchPoint_t664 *, int32_t >::Invoke(25 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>::get_Item(!0) */, L_8, L_9);
			V_3 = L_10;
			Dictionary_2_t660 * L_11 = (__this->___idToTouch_15);
			TouchPoint_t664 * L_12 = V_3;
			NullCheck(L_12);
			int32_t L_13 = TouchPoint_get_Id_m3774(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>::Remove(!0) */, L_11, L_13);
			List_1_t659 * L_14 = (__this->___touches_14);
			TouchPoint_t664 * L_15 = V_3;
			NullCheck(L_14);
			VirtFuncInvoker1< bool, TouchPoint_t664 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<TouchScript.TouchPoint>::Remove(!0) */, L_14, L_15);
			List_1_t592 * L_16 = V_0;
			TouchPoint_t664 * L_17 = V_3;
			NullCheck(L_16);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<TouchScript.ITouch>::Add(!0) */, L_16, L_17);
			TouchPoint_t664 * L_18 = V_3;
			NullCheck(L_18);
			TouchLayer_t624 * L_19 = TouchPoint_get_Layer_m3783(L_18, /*hidden argument*/NULL);
			bool L_20 = Object_op_Inequality_m268(NULL /*static, unused*/, L_19, (Object_t99 *)NULL, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_008b;
			}
		}

IL_007f:
		{
			TouchPoint_t664 * L_21 = V_3;
			NullCheck(L_21);
			TouchLayer_t624 * L_22 = TouchPoint_get_Layer_m3783(L_21, /*hidden argument*/NULL);
			TouchPoint_t664 * L_23 = V_3;
			NullCheck(L_22);
			TouchLayer_CancelTouch_m3674(L_22, L_23, /*hidden argument*/NULL);
		}

IL_008b:
		{
			bool L_24 = Enumerator_MoveNext_m3951((&V_1), /*hidden argument*/Enumerator_MoveNext_m3951_MethodInfo_var);
			if (L_24)
			{
				goto IL_0033;
			}
		}

IL_0097:
		{
			IL2CPP_LEAVE(0xAA, FINALLY_009c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_009c;
	}

FINALLY_009c:
	{ // begin finally (depth: 1)
		NullCheck((&V_1));
		Enumerator_Dispose_m3952((&V_1), Enumerator_Dispose_m3952_MethodInfo_var);
		IL2CPP_END_FINALLY(156)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(156)
	{
		IL2CPP_JUMP_TBL(0xAA, IL_00aa)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_00aa:
	{
		EventHandler_1_t253 * L_25 = (__this->___touchesCancelledInvoker_5);
		if (!L_25)
		{
			goto IL_00c7;
		}
	}
	{
		EventHandler_1_t253 * L_26 = (__this->___touchesCancelledInvoker_5);
		List_1_t592 * L_27 = V_0;
		TouchEventArgs_t226 * L_28 = (TouchEventArgs_t226 *)il2cpp_codegen_object_new (TouchEventArgs_t226_il2cpp_TypeInfo_var);
		TouchEventArgs__ctor_m3619(L_28, L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		EventHandler_1_Invoke_m3948(L_26, __this, L_28, /*hidden argument*/EventHandler_1_Invoke_m3948_MethodInfo_var);
	}

IL_00c7:
	{
		HashSet_1_t661 * L_29 = (__this->___touchesCancelled_19);
		NullCheck(L_29);
		VirtActionInvoker0::Invoke(7 /* System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear() */, L_29);
	}

IL_00d2:
	{
		return;
	}
}
// System.Void TouchScript.TouchManagerInstance::updateTouches()
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
extern TypeInfo* EventArgs_t223_il2cpp_TypeInfo_var;
extern "C" void TouchManagerInstance_updateTouches_m3771 (TouchManagerInstance_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		EventHandler_t169 * L_0 = (__this->___frameStartedInvoker_6);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		EventHandler_t169 * L_1 = (__this->___frameStartedInvoker_6);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_2 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_1);
		EventHandler_Invoke_m1128(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		List_1_t659 * L_3 = (__this->___touchesBegan_16);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		Monitor_Enter_m3930(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		TouchManagerInstance_updateBegan_m3767(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3B, FINALLY_0034);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_0;
		Monitor_Exit_m3931(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_003b:
	{
		HashSet_1_t661 * L_6 = (__this->___touchesUpdated_17);
		V_1 = L_6;
		Object_t * L_7 = V_1;
		Monitor_Enter_m3930(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		TouchManagerInstance_updateUpdated_m3768(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x5A, FINALLY_0053);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m3931(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_005a:
	{
		HashSet_1_t661 * L_9 = (__this->___touchesEnded_18);
		V_2 = L_9;
		Object_t * L_10 = V_2;
		Monitor_Enter_m3930(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0067:
	try
	{ // begin try (depth: 1)
		TouchManagerInstance_updateEnded_m3769(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x79, FINALLY_0072);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_2;
		Monitor_Exit_m3931(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(114)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_JUMP_TBL(0x79, IL_0079)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0079:
	{
		HashSet_1_t661 * L_12 = (__this->___touchesCancelled_19);
		V_3 = L_12;
		Object_t * L_13 = V_3;
		Monitor_Enter_m3930(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_0086:
	try
	{ // begin try (depth: 1)
		TouchManagerInstance_updateCancelled_m3770(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x98, FINALLY_0091);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		Object_t * L_14 = V_3;
		Monitor_Exit_m3931(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(145)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0x98, IL_0098)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0098:
	{
		EventHandler_t169 * L_15 = (__this->___frameFinishedInvoker_7);
		if (!L_15)
		{
			goto IL_00b4;
		}
	}
	{
		EventHandler_t169 * L_16 = (__this->___frameFinishedInvoker_7);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t223_il2cpp_TypeInfo_var);
		EventArgs_t223 * L_17 = ((EventArgs_t223_StaticFields*)EventArgs_t223_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_16);
		EventHandler_Invoke_m1128(L_16, __this, L_17, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		return;
	}
}
// System.Boolean TouchScript.TouchManagerInstance::<updateLayers>m__8(TouchScript.Layers.TouchLayer)
extern "C" bool TouchManagerInstance_U3CupdateLayersU3Em__8_m3772 (Object_t * __this /* static, unused */, TouchLayer_t624 * ___l, const MethodInfo* method)
{
	{
		TouchLayer_t624 * L_0 = ___l;
		bool L_1 = Object_op_Inequality_m268(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.Void TouchScript.TouchPoint::.ctor(System.Int32,UnityEngine.Vector2,TouchScript.Tags)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// TouchScript.Tags
#include "TouchScript_TouchScript_Tags.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// TouchScript.TouchPoint
#include "TouchScript_TouchScript_TouchPointMethodDeclarations.h"
// TouchScript.Tags
#include "TouchScript_TouchScript_TagsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
extern TypeInfo* Tags_t637_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t665_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3956_MethodInfo_var;
extern "C" void TouchPoint__ctor_m3773 (TouchPoint_t664 * __this, int32_t ___id, Vector2_t85  ___position, Tags_t637 * ___tags, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tags_t637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		Dictionary_2_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		Dictionary_2__ctor_m3956_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484149);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	Tags_t637 * G_B2_0 = {0};
	TouchPoint_t664 * G_B2_1 = {0};
	Tags_t637 * G_B1_0 = {0};
	TouchPoint_t664 * G_B1_1 = {0};
	{
		Vector2_t85  L_0 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___position_0 = L_0;
		Vector2_t85  L_1 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___newPosition_1 = L_1;
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___id;
		TouchPoint_set_Id_m3775(__this, L_2, /*hidden argument*/NULL);
		Vector2_t85  L_3 = ___position;
		Vector2_t85  L_4 = L_3;
		V_0 = L_4;
		__this->___newPosition_1 = L_4;
		Vector2_t85  L_5 = V_0;
		V_0 = L_5;
		Vector2_t85  L_6 = V_0;
		TouchPoint_set_PreviousPosition_m3780(__this, L_6, /*hidden argument*/NULL);
		Vector2_t85  L_7 = V_0;
		__this->___position_0 = L_7;
		Tags_t637 * L_8 = ___tags;
		Tags_t637 * L_9 = L_8;
		G_B1_0 = L_9;
		G_B1_1 = __this;
		if (L_9)
		{
			G_B2_0 = L_9;
			G_B2_1 = __this;
			goto IL_004a;
		}
	}
	{
		Tags_t637 * L_10 = (Tags_t637 *)il2cpp_codegen_object_new (Tags_t637_il2cpp_TypeInfo_var);
		Tags__ctor_m3687(L_10, /*hidden argument*/NULL);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
	}

IL_004a:
	{
		NullCheck(G_B2_1);
		TouchPoint_set_Tags_m3786(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		Dictionary_2_t665 * L_11 = (Dictionary_2_t665 *)il2cpp_codegen_object_new (Dictionary_2_t665_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3956(L_11, /*hidden argument*/Dictionary_2__ctor_m3956_MethodInfo_var);
		__this->___properties_4 = L_11;
		return;
	}
}
// System.Int32 TouchScript.TouchPoint::get_Id()
extern "C" int32_t TouchPoint_get_Id_m3774 (TouchPoint_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void TouchScript.TouchPoint::set_Id(System.Int32)
extern "C" void TouchPoint_set_Id_m3775 (TouchPoint_t664 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Transform TouchScript.TouchPoint::get_Target()
extern "C" Transform_t48 * TouchPoint_get_Target_m3776 (TouchPoint_t664 * __this, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = (__this->___U3CTargetU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void TouchScript.TouchPoint::set_Target(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
extern "C" void TouchPoint_set_Target_m3777 (TouchPoint_t664 * __this, Transform_t48 * ___value, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = ___value;
		__this->___U3CTargetU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.Vector2 TouchScript.TouchPoint::get_Position()
extern "C" Vector2_t85  TouchPoint_get_Position_m3778 (TouchPoint_t664 * __this, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = (__this->___position_0);
		return L_0;
	}
}
// UnityEngine.Vector2 TouchScript.TouchPoint::get_PreviousPosition()
extern "C" Vector2_t85  TouchPoint_get_PreviousPosition_m3779 (TouchPoint_t664 * __this, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = (__this->___U3CPreviousPositionU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void TouchScript.TouchPoint::set_PreviousPosition(UnityEngine.Vector2)
extern "C" void TouchPoint_set_PreviousPosition_m3780 (TouchPoint_t664 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___value;
		__this->___U3CPreviousPositionU3Ek__BackingField_7 = L_0;
		return;
	}
}
// TouchScript.Hit.ITouchHit TouchScript.TouchPoint::get_Hit()
// TouchScript.TouchManager
#include "TouchScript_TouchScript_TouchManagerMethodDeclarations.h"
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ITouchManager_t254_il2cpp_TypeInfo_var;
extern "C" Object_t * TouchPoint_get_Hit_m3781 (TouchPoint_t664 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ITouchManager_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isDirty_3);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Object_t * L_1 = TouchManager_get_Instance_m1217(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t85  L_2 = (__this->___position_0);
		Object_t ** L_3 = &(__this->___hit_2);
		NullCheck(L_1);
		InterfaceFuncInvoker2< bool, Vector2_t85 , Object_t ** >::Invoke(24 /* System.Boolean TouchScript.ITouchManager::GetHitTarget(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&) */, ITouchManager_t254_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		__this->___isDirty_3 = 0;
	}

IL_0029:
	{
		Object_t * L_4 = (__this->___hit_2);
		return L_4;
	}
}
// System.Void TouchScript.TouchPoint::set_Hit(TouchScript.Hit.ITouchHit)
extern "C" void TouchPoint_set_Hit_m3782 (TouchPoint_t664 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___hit_2 = L_0;
		__this->___isDirty_3 = 0;
		return;
	}
}
// TouchScript.Layers.TouchLayer TouchScript.TouchPoint::get_Layer()
extern "C" TouchLayer_t624 * TouchPoint_get_Layer_m3783 (TouchPoint_t664 * __this, const MethodInfo* method)
{
	{
		TouchLayer_t624 * L_0 = (__this->___U3CLayerU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void TouchScript.TouchPoint::set_Layer(TouchScript.Layers.TouchLayer)
// TouchScript.Layers.TouchLayer
#include "TouchScript_TouchScript_Layers_TouchLayer.h"
extern "C" void TouchPoint_set_Layer_m3784 (TouchPoint_t664 * __this, TouchLayer_t624 * ___value, const MethodInfo* method)
{
	{
		TouchLayer_t624 * L_0 = ___value;
		__this->___U3CLayerU3Ek__BackingField_8 = L_0;
		return;
	}
}
// TouchScript.Tags TouchScript.TouchPoint::get_Tags()
extern "C" Tags_t637 * TouchPoint_get_Tags_m3785 (TouchPoint_t664 * __this, const MethodInfo* method)
{
	{
		Tags_t637 * L_0 = (__this->___U3CTagsU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void TouchScript.TouchPoint::set_Tags(TouchScript.Tags)
extern "C" void TouchPoint_set_Tags_m3786 (TouchPoint_t664 * __this, Tags_t637 * ___value, const MethodInfo* method)
{
	{
		Tags_t637 * L_0 = ___value;
		__this->___U3CTagsU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> TouchScript.TouchPoint::get_Properties()
extern "C" Object_t* TouchPoint_get_Properties_m3787 (TouchPoint_t664 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t665 * L_0 = (__this->___properties_4);
		return L_0;
	}
}
// System.Void TouchScript.TouchPoint::ResetPosition()
extern "C" void TouchPoint_ResetPosition_m3788 (TouchPoint_t664 * __this, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = (__this->___position_0);
		TouchPoint_set_PreviousPosition_m3780(__this, L_0, /*hidden argument*/NULL);
		Vector2_t85  L_1 = (__this->___newPosition_1);
		__this->___position_0 = L_1;
		Vector2_t85  L_2 = (__this->___position_0);
		__this->___newPosition_1 = L_2;
		Vector2_t85  L_3 = TouchPoint_get_PreviousPosition_m3779(__this, /*hidden argument*/NULL);
		Vector2_t85  L_4 = (__this->___position_0);
		bool L_5 = Vector2_op_Inequality_m3010(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		__this->___isDirty_3 = 1;
	}

IL_0041:
	{
		return;
	}
}
// System.Void TouchScript.TouchPoint::SetPosition(UnityEngine.Vector2)
extern "C" void TouchPoint_SetPosition_m3789 (TouchPoint_t664 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___value;
		__this->___newPosition_1 = L_0;
		return;
	}
}
// TouchScript.Utils.ClusterUtils
#include "TouchScript_TouchScript_Utils_ClusterUtils.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Void TouchScript.Utils.ClusterUtils::.cctor()
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern TypeInfo* StringBuilder_t518_il2cpp_TypeInfo_var;
extern TypeInfo* ClusterUtils_t667_il2cpp_TypeInfo_var;
extern "C" void ClusterUtils__cctor_m3790 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		ClusterUtils_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringBuilder_t518 * L_0 = (StringBuilder_t518 *)il2cpp_codegen_object_new (StringBuilder_t518_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2645(L_0, /*hidden argument*/NULL);
		((ClusterUtils_t667_StaticFields*)ClusterUtils_t667_il2cpp_TypeInfo_var->static_fields)->___hashString_0 = L_0;
		return;
	}
}
// UnityEngine.Vector2 TouchScript.Utils.ClusterUtils::Get2DCenterPosition(System.Collections.Generic.IList`1<TouchScript.ITouch>)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t638_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t85_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t255_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t256_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  ClusterUtils_Get2DCenterPosition_m3791 (Object_t * __this /* static, unused */, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		IList_1_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		Vector2_t85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IEnumerable_1_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		IEnumerator_1_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t85  V_1 = {0};
	Object_t* V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___touches;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_3 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_3;
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		Object_t* L_5 = ___touches;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_5, 0);
		NullCheck(L_6);
		Vector2_t85  L_7 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}

IL_0027:
	{
		Initobj (Vector2_t85_il2cpp_TypeInfo_var, (&V_1));
		Object_t* L_8 = ___touches;
		NullCheck(L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TouchScript.ITouch>::GetEnumerator() */, IEnumerable_1_t255_il2cpp_TypeInfo_var, L_8);
		V_2 = L_9;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_003b:
		{
			Object_t* L_10 = V_2;
			NullCheck(L_10);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TouchScript.ITouch>::get_Current() */, IEnumerator_1_t256_il2cpp_TypeInfo_var, L_10);
			V_3 = L_11;
			Vector2_t85  L_12 = V_1;
			Object_t * L_13 = V_3;
			NullCheck(L_13);
			Vector2_t85  L_14 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(2 /* UnityEngine.Vector2 TouchScript.ITouch::get_Position() */, ITouch_t257_il2cpp_TypeInfo_var, L_13);
			Vector2_t85  L_15 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
			V_1 = L_15;
		}

IL_004f:
		{
			Object_t* L_16 = V_2;
			NullCheck(L_16);
			bool L_17 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_003b;
			}
		}

IL_005a:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		{
			Object_t* L_18 = V_2;
			if (!L_18)
			{
				goto IL_006b;
			}
		}

IL_0065:
		{
			Object_t* L_19 = V_2;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_19);
		}

IL_006b:
		{
			IL2CPP_END_FINALLY(95)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_006c:
	{
		Vector2_t85  L_20 = V_1;
		int32_t L_21 = V_0;
		Vector2_t85  L_22 = Vector2_op_Division_m2980(NULL /*static, unused*/, L_20, (((float)L_21)), /*hidden argument*/NULL);
		return L_22;
	}
}
// UnityEngine.Vector2 TouchScript.Utils.ClusterUtils::GetPrevious2DCenterPosition(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern TypeInfo* TouchManager_t252_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t638_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t85_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t255_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t256_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  ClusterUtils_GetPrevious2DCenterPosition_m3792 (Object_t * __this /* static, unused */, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		TouchManager_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		IList_1_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		Vector2_t85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IEnumerable_1_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		IEnumerator_1_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t85  V_1 = {0};
	Object_t* V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___touches;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t252_il2cpp_TypeInfo_var);
		Vector2_t85  L_3 = ((TouchManager_t252_StaticFields*)TouchManager_t252_il2cpp_TypeInfo_var->static_fields)->___INVALID_POSITION_4;
		return L_3;
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		Object_t* L_5 = ___touches;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_5, 0);
		NullCheck(L_6);
		Vector2_t85  L_7 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(3 /* UnityEngine.Vector2 TouchScript.ITouch::get_PreviousPosition() */, ITouch_t257_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}

IL_0027:
	{
		Initobj (Vector2_t85_il2cpp_TypeInfo_var, (&V_1));
		Object_t* L_8 = ___touches;
		NullCheck(L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TouchScript.ITouch>::GetEnumerator() */, IEnumerable_1_t255_il2cpp_TypeInfo_var, L_8);
		V_2 = L_9;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_003b:
		{
			Object_t* L_10 = V_2;
			NullCheck(L_10);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TouchScript.ITouch>::get_Current() */, IEnumerator_1_t256_il2cpp_TypeInfo_var, L_10);
			V_3 = L_11;
			Vector2_t85  L_12 = V_1;
			Object_t * L_13 = V_3;
			NullCheck(L_13);
			Vector2_t85  L_14 = (Vector2_t85 )InterfaceFuncInvoker0< Vector2_t85  >::Invoke(3 /* UnityEngine.Vector2 TouchScript.ITouch::get_PreviousPosition() */, ITouch_t257_il2cpp_TypeInfo_var, L_13);
			Vector2_t85  L_15 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
			V_1 = L_15;
		}

IL_004f:
		{
			Object_t* L_16 = V_2;
			NullCheck(L_16);
			bool L_17 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_003b;
			}
		}

IL_005a:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		{
			Object_t* L_18 = V_2;
			if (!L_18)
			{
				goto IL_006b;
			}
		}

IL_0065:
		{
			Object_t* L_19 = V_2;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_19);
		}

IL_006b:
		{
			IL2CPP_END_FINALLY(95)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_006c:
	{
		Vector2_t85  L_20 = V_1;
		int32_t L_21 = V_0;
		Vector2_t85  L_22 = Vector2_op_Division_m2980(NULL /*static, unused*/, L_20, (((float)L_21)), /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String TouchScript.Utils.ClusterUtils::GetPointsHash(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern TypeInfo* ClusterUtils_t667_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t638_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t695_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral315;
extern "C" String_t* ClusterUtils_GetPointsHash_m3793 (Object_t * __this /* static, unused */, Object_t* ___touches, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClusterUtils_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		IList_1_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		ICollection_1_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		_stringLiteral315 = il2cpp_codegen_string_literal_from_index(315);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		StringBuilder_t518 * L_0 = ((ClusterUtils_t667_StaticFields*)ClusterUtils_t667_il2cpp_TypeInfo_var->static_fields)->___hashString_0;
		StringBuilder_t518 * L_1 = ((ClusterUtils_t667_StaticFields*)ClusterUtils_t667_il2cpp_TypeInfo_var->static_fields)->___hashString_0;
		NullCheck(L_1);
		int32_t L_2 = StringBuilder_get_Length_m3957(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_Remove_m3958(L_0, 0, L_2, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0048;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		StringBuilder_t518 * L_3 = ((ClusterUtils_t667_StaticFields*)ClusterUtils_t667_il2cpp_TypeInfo_var->static_fields)->___hashString_0;
		NullCheck(L_3);
		StringBuilder_Append_m3959(L_3, _stringLiteral315, /*hidden argument*/NULL);
		StringBuilder_t518 * L_4 = ((ClusterUtils_t667_StaticFields*)ClusterUtils_t667_il2cpp_TypeInfo_var->static_fields)->___hashString_0;
		Object_t* L_5 = ___touches;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<TouchScript.ITouch>::get_Item(System.Int32) */, IList_1_t638_il2cpp_TypeInfo_var, L_5, L_6);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_4);
		StringBuilder_Append_m3960(L_4, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_10 = V_0;
		Object_t* L_11 = ___touches;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.ITouch>::get_Count() */, ICollection_1_t695_il2cpp_TypeInfo_var, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClusterUtils_t667_il2cpp_TypeInfo_var);
		StringBuilder_t518 * L_13 = ((ClusterUtils_t667_StaticFields*)ClusterUtils_t667_il2cpp_TypeInfo_var->static_fields)->___hashString_0;
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// TouchScript.Utils.Attributes.NullToggleAttribute
#include "TouchScript_TouchScript_Utils_Attributes_NullToggleAttribute.h"
// TouchScript.Utils.Attributes.NullToggleAttribute
#include "TouchScript_TouchScript_Utils_Attributes_NullToggleAttributeMethodDeclarations.h"
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
// System.Void TouchScript.Utils.Attributes.NullToggleAttribute::.ctor()
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
extern "C" void NullToggleAttribute__ctor_m3794 (NullToggleAttribute_t668 * __this, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3961(__this, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Utils.Attributes.ToggleLeftAttribute
#include "TouchScript_TouchScript_Utils_Attributes_ToggleLeftAttribute.h"
// TouchScript.Utils.Attributes.ToggleLeftAttribute
#include "TouchScript_TouchScript_Utils_Attributes_ToggleLeftAttributeMethodDeclarations.h"
// System.Void TouchScript.Utils.Attributes.ToggleLeftAttribute::.ctor()
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"
extern "C" void ToggleLeftAttribute__ctor_m3795 (ToggleLeftAttribute_t670 * __this, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3961(__this, /*hidden argument*/NULL);
		return;
	}
}
// TouchScript.Utils.ProjectionUtils
#include "TouchScript_TouchScript_Utils_ProjectionUtils.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Vector3 TouchScript.Utils.ProjectionUtils::CameraToPlaneProjection(UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Plane)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern "C" Vector3_t28  ProjectionUtils_CameraToPlaneProjection_m3796 (Object_t * __this /* static, unused */, Vector2_t85  ___position, Camera_t32 * ___camera, Plane_t554  ___projectionPlane, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Ray_t529  V_1 = {0};
	bool V_2 = false;
	{
		V_0 = (0.0f);
		Camera_t32 * L_0 = ___camera;
		Vector2_t85  L_1 = ___position;
		Vector3_t28  L_2 = Vector2_op_Implicit_m1101(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t529  L_3 = Camera_ScreenPointToRay_m2738(L_0, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Ray_t529  L_4 = V_1;
		bool L_5 = Plane_Raycast_m2974((&___projectionPlane), L_4, (&V_0), /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		float L_7 = V_0;
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		Vector3_t28  L_8 = Plane_get_normal_m3877((&___projectionPlane), /*hidden argument*/NULL);
		Vector3_t28  L_9 = Vector3_op_UnaryNegation_m3962(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Vector3_t28  L_10 = Vector3_get_zero_m312(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = Plane_GetDistanceToPoint_m3963((&___projectionPlane), L_10, /*hidden argument*/NULL);
		Vector3_t28  L_12 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_004d:
	{
		Vector3_t28  L_13 = Ray_get_origin_m2739((&V_1), /*hidden argument*/NULL);
		Vector3_t28  L_14 = Ray_get_direction_m2740((&V_1), /*hidden argument*/NULL);
		float L_15 = V_0;
		Vector3_t28  L_16 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Vector3_t28  L_17 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// UnityEngine.Vector3 TouchScript.Utils.ProjectionUtils::ScreenToPlaneProjection(UnityEngine.Vector2,UnityEngine.Plane)
extern "C" Vector3_t28  ProjectionUtils_ScreenToPlaneProjection_m3797 (Object_t * __this /* static, unused */, Vector2_t85  ___position, Plane_t554  ___projectionPlane, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Ray_t529  V_1 = {0};
	bool V_2 = false;
	{
		V_0 = (0.0f);
		Vector2_t85  L_0 = ___position;
		Vector3_t28  L_1 = Vector2_op_Implicit_m1101(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector3_t28  L_2 = Vector3_get_forward_m310(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray__ctor_m3964((&V_1), L_1, L_2, /*hidden argument*/NULL);
		Ray_t529  L_3 = V_1;
		bool L_4 = Plane_Raycast_m2974((&___projectionPlane), L_3, (&V_0), /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_0052;
		}
	}
	{
		float L_6 = V_0;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		Vector3_t28  L_7 = Plane_get_normal_m3877((&___projectionPlane), /*hidden argument*/NULL);
		Vector3_t28  L_8 = Vector3_op_UnaryNegation_m3962(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Vector3_t28  L_9 = Vector3_get_zero_m312(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = Plane_GetDistanceToPoint_m3963((&___projectionPlane), L_9, /*hidden argument*/NULL);
		Vector3_t28  L_11 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0052:
	{
		Vector3_t28  L_12 = Ray_get_origin_m2739((&V_1), /*hidden argument*/NULL);
		float L_13 = V_0;
		Vector3_t28  L_14 = {0};
		Vector3__ctor_m396(&L_14, (0.0f), (0.0f), L_13, /*hidden argument*/NULL);
		Vector3_t28  L_15 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// TouchScript.InputSources.MobileInput
#include "TouchScript_TouchScript_InputSources_MobileInputMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchState.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchStateMethodDeclarations.h"
// System.Void TouchScript.InputSources.MobileInput::.ctor()
// TouchScript.Tags
#include "TouchScript_TouchScript_TagsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
// System.Collections.Generic.HashSet`1<System.Int32>
#include "System_Core_System_Collections_Generic_HashSet_1_genMethodDeclarations.h"
// TouchScript.InputSources.InputSource
#include "TouchScript_TouchScript_InputSources_InputSourceMethodDeclarations.h"
extern TypeInfo* Tags_t637_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t673_il2cpp_TypeInfo_var;
extern TypeInfo* HashSet_1_t661_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3965_MethodInfo_var;
extern const MethodInfo* HashSet_1__ctor_m3919_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral359;
extern "C" void MobileInput__ctor_m3798 (MobileInput_t672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tags_t637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		Dictionary_2_t673_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		HashSet_1_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		Dictionary_2__ctor_m3965_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484150);
		HashSet_1__ctor_m3919_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484115);
		_stringLiteral359 = il2cpp_codegen_string_literal_from_index(359);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___DisableOnNonTouchPlatforms_5 = 1;
		Tags_t637 * L_0 = (Tags_t637 *)il2cpp_codegen_object_new (Tags_t637_il2cpp_TypeInfo_var);
		Tags__ctor_m3686(L_0, _stringLiteral359, /*hidden argument*/NULL);
		__this->___Tags_6 = L_0;
		Dictionary_2_t673 * L_1 = (Dictionary_2_t673 *)il2cpp_codegen_object_new (Dictionary_2_t673_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3965(L_1, /*hidden argument*/Dictionary_2__ctor_m3965_MethodInfo_var);
		__this->___touchStates_7 = L_1;
		HashSet_1_t661 * L_2 = (HashSet_1_t661 *)il2cpp_codegen_object_new (HashSet_1_t661_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m3919(L_2, /*hidden argument*/HashSet_1__ctor_m3919_MethodInfo_var);
		__this->___touchIds_8 = L_2;
		InputSource__ctor_m3602(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.InputSources.MobileInput::OnEnable()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern "C" void MobileInput_OnEnable_m3799 (MobileInput_t672 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		bool L_0 = (__this->___DisableOnNonTouchPlatforms_5);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 0)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 1)
		{
			goto IL_0029;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 2)
		{
			goto IL_0029;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 3)
		{
			goto IL_0047;
		}
	}

IL_0029:
	{
		int32_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)18))) == 0)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)18))) == 1)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)18))) == 2)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)18))) == 3)
		{
			goto IL_0047;
		}
	}
	{
		goto IL_004c;
	}

IL_0047:
	{
		goto IL_0054;
	}

IL_004c:
	{
		Behaviour_set_enabled_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0054:
	{
		InputSource_OnEnable_m3605(__this, /*hidden argument*/NULL);
		Dictionary_2_t673 * L_4 = (__this->___touchStates_7);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::Clear() */, L_4);
		HashSet_1_t661 * L_5 = (__this->___touchIds_8);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(7 /* System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear() */, L_5);
		return;
	}
}
// System.Void TouchScript.InputSources.MobileInput::OnDisable()
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
extern const MethodInfo* Dictionary_2_GetEnumerator_m3966_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3967_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3968_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3969_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3970_MethodInfo_var;
extern "C" void MobileInput_OnDisable_m3800 (MobileInput_t672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_GetEnumerator_m3966_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484151);
		Enumerator_get_Current_m3967_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484152);
		KeyValuePair_2_get_Value_m3968_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484153);
		Enumerator_MoveNext_m3969_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484154);
		Enumerator_Dispose_m3970_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484155);
		s_Il2CppMethodIntialized = true;
	}
	Enumerator_t714  V_0 = {0};
	KeyValuePair_2_t715  V_1 = {0};
	TouchState_t674  V_2 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t673 * L_0 = (__this->___touchStates_7);
		NullCheck(L_0);
		Enumerator_t714  L_1 = Dictionary_2_GetEnumerator_m3966(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3966_MethodInfo_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_0011:
		{
			KeyValuePair_2_t715  L_2 = Enumerator_get_Current_m3967((&V_0), /*hidden argument*/Enumerator_get_Current_m3967_MethodInfo_var);
			V_1 = L_2;
			TouchState_t674  L_3 = KeyValuePair_2_get_Value_m3968((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3968_MethodInfo_var);
			V_2 = L_3;
			int32_t L_4 = ((&V_2)->___Id_0);
			VirtActionInvoker1< int32_t >::Invoke(14 /* System.Void TouchScript.InputSources.InputSource::cancelTouch(System.Int32) */, __this, L_4);
		}

IL_002e:
		{
			bool L_5 = Enumerator_MoveNext_m3969((&V_0), /*hidden argument*/Enumerator_MoveNext_m3969_MethodInfo_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		NullCheck((&V_0));
		Enumerator_Dispose_m3970((&V_0), Enumerator_Dispose_m3970_MethodInfo_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_004d:
	{
		InputSource_OnDisable_m3606(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchScript.InputSources.MobileInput::Update()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// TouchScript.InputSources.TouchState
#include "TouchScript_TouchScript_InputSources_TouchStateMethodDeclarations.h"
extern TypeInfo* Input_t524_il2cpp_TypeInfo_var;
extern TypeInfo* ITouch_t257_il2cpp_TypeInfo_var;
extern const MethodInfo* HashSet_1_Add_m3932_MethodInfo_var;
extern "C" void MobileInput_Update_m3801 (MobileInput_t672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		ITouch_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		HashSet_1_Add_m3932_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484126);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Touch_t503  V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	TouchState_t674  V_5 = {0};
	int32_t V_6 = 0;
	TouchState_t674  V_7 = {0};
	int32_t V_8 = 0;
	TouchState_t674  V_9 = {0};
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		InputSource_Update_m3607(__this, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_032e;
	}

IL_000d:
	{
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		Touch_t503  L_1 = Input_GetTouch_m2733(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = Touch_get_phase_m2690((&V_1), /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		if (L_3 == 0)
		{
			goto IL_003b;
		}
		if (L_3 == 1)
		{
			goto IL_00f0;
		}
		if (L_3 == 2)
		{
			goto IL_02bb;
		}
		if (L_3 == 3)
		{
			goto IL_01b3;
		}
		if (L_3 == 4)
		{
			goto IL_0237;
		}
	}
	{
		goto IL_032a;
	}

IL_003b:
	{
		HashSet_1_t661 * L_4 = (__this->___touchIds_8);
		int32_t L_5 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_7 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		VirtActionInvoker1< int32_t >::Invoke(13 /* System.Void TouchScript.InputSources.InputSource::endTouch(System.Int32) */, __this, L_7);
		Vector2_t85  L_8 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, Vector2_t85  >::Invoke(9 /* TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2) */, __this, L_8);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_9);
		V_3 = L_10;
		Dictionary_2_t673 * L_11 = (__this->___touchStates_7);
		int32_t L_12 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		int32_t L_13 = V_3;
		int32_t L_14 = Touch_get_phase_m2690((&V_1), /*hidden argument*/NULL);
		Vector2_t85  L_15 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		TouchState_t674  L_16 = {0};
		TouchState__ctor_m3803(&L_16, L_13, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker2< int32_t, TouchState_t674  >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::set_Item(!0,!1) */, L_11, L_12, L_16);
		goto IL_00eb;
	}

IL_009d:
	{
		HashSet_1_t661 * L_17 = (__this->___touchIds_8);
		int32_t L_18 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_17);
		HashSet_1_Add_m3932(L_17, L_18, /*hidden argument*/HashSet_1_Add_m3932_MethodInfo_var);
		Vector2_t85  L_19 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Vector2_t85  >::Invoke(9 /* TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2) */, __this, L_19);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_20);
		V_4 = L_21;
		Dictionary_2_t673 * L_22 = (__this->___touchStates_7);
		int32_t L_23 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		int32_t L_24 = V_4;
		int32_t L_25 = Touch_get_phase_m2690((&V_1), /*hidden argument*/NULL);
		Vector2_t85  L_26 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		TouchState_t674  L_27 = {0};
		TouchState__ctor_m3803(&L_27, L_24, L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker2< int32_t, TouchState_t674  >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::Add(!0,!1) */, L_22, L_23, L_27);
	}

IL_00eb:
	{
		goto IL_032a;
	}

IL_00f0:
	{
		HashSet_1_t661 * L_28 = (__this->___touchIds_8);
		int32_t L_29 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_28);
		bool L_30 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0) */, L_28, L_29);
		if (!L_30)
		{
			goto IL_0160;
		}
	}
	{
		Dictionary_2_t673 * L_31 = (__this->___touchStates_7);
		int32_t L_32 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_31);
		TouchState_t674  L_33 = (TouchState_t674 )VirtFuncInvoker1< TouchState_t674 , int32_t >::Invoke(25 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::get_Item(!0) */, L_31, L_32);
		V_5 = L_33;
		Dictionary_2_t673 * L_34 = (__this->___touchStates_7);
		int32_t L_35 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		int32_t L_36 = ((&V_5)->___Id_0);
		int32_t L_37 = Touch_get_phase_m2690((&V_1), /*hidden argument*/NULL);
		Vector2_t85  L_38 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		TouchState_t674  L_39 = {0};
		TouchState__ctor_m3803(&L_39, L_36, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< int32_t, TouchState_t674  >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::set_Item(!0,!1) */, L_34, L_35, L_39);
		int32_t L_40 = ((&V_5)->___Id_0);
		Vector2_t85  L_41 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector2_t85  >::Invoke(12 /* System.Void TouchScript.InputSources.InputSource::moveTouch(System.Int32,UnityEngine.Vector2) */, __this, L_40, L_41);
		goto IL_01ae;
	}

IL_0160:
	{
		HashSet_1_t661 * L_42 = (__this->___touchIds_8);
		int32_t L_43 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_42);
		HashSet_1_Add_m3932(L_42, L_43, /*hidden argument*/HashSet_1_Add_m3932_MethodInfo_var);
		Vector2_t85  L_44 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		Object_t * L_45 = (Object_t *)VirtFuncInvoker1< Object_t *, Vector2_t85  >::Invoke(9 /* TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2) */, __this, L_44);
		NullCheck(L_45);
		int32_t L_46 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_45);
		V_6 = L_46;
		Dictionary_2_t673 * L_47 = (__this->___touchStates_7);
		int32_t L_48 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		int32_t L_49 = V_6;
		int32_t L_50 = Touch_get_phase_m2690((&V_1), /*hidden argument*/NULL);
		Vector2_t85  L_51 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		TouchState_t674  L_52 = {0};
		TouchState__ctor_m3803(&L_52, L_49, L_50, L_51, /*hidden argument*/NULL);
		NullCheck(L_47);
		VirtActionInvoker2< int32_t, TouchState_t674  >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::Add(!0,!1) */, L_47, L_48, L_52);
	}

IL_01ae:
	{
		goto IL_032a;
	}

IL_01b3:
	{
		HashSet_1_t661 * L_53 = (__this->___touchIds_8);
		int32_t L_54 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_53);
		bool L_55 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0) */, L_53, L_54);
		if (!L_55)
		{
			goto IL_0216;
		}
	}
	{
		Dictionary_2_t673 * L_56 = (__this->___touchStates_7);
		int32_t L_57 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_56);
		TouchState_t674  L_58 = (TouchState_t674 )VirtFuncInvoker1< TouchState_t674 , int32_t >::Invoke(25 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::get_Item(!0) */, L_56, L_57);
		V_7 = L_58;
		HashSet_1_t661 * L_59 = (__this->___touchIds_8);
		int32_t L_60 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_59);
		VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Remove(!0) */, L_59, L_60);
		Dictionary_2_t673 * L_61 = (__this->___touchStates_7);
		int32_t L_62 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_61);
		VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::Remove(!0) */, L_61, L_62);
		int32_t L_63 = ((&V_7)->___Id_0);
		VirtActionInvoker1< int32_t >::Invoke(13 /* System.Void TouchScript.InputSources.InputSource::endTouch(System.Int32) */, __this, L_63);
		goto IL_0232;
	}

IL_0216:
	{
		Vector2_t85  L_64 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		Object_t * L_65 = (Object_t *)VirtFuncInvoker1< Object_t *, Vector2_t85  >::Invoke(9 /* TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2) */, __this, L_64);
		NullCheck(L_65);
		int32_t L_66 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		VirtActionInvoker1< int32_t >::Invoke(13 /* System.Void TouchScript.InputSources.InputSource::endTouch(System.Int32) */, __this, L_67);
	}

IL_0232:
	{
		goto IL_032a;
	}

IL_0237:
	{
		HashSet_1_t661 * L_68 = (__this->___touchIds_8);
		int32_t L_69 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_68);
		bool L_70 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0) */, L_68, L_69);
		if (!L_70)
		{
			goto IL_029a;
		}
	}
	{
		Dictionary_2_t673 * L_71 = (__this->___touchStates_7);
		int32_t L_72 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_71);
		TouchState_t674  L_73 = (TouchState_t674 )VirtFuncInvoker1< TouchState_t674 , int32_t >::Invoke(25 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::get_Item(!0) */, L_71, L_72);
		V_9 = L_73;
		HashSet_1_t661 * L_74 = (__this->___touchIds_8);
		int32_t L_75 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_74);
		VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Remove(!0) */, L_74, L_75);
		Dictionary_2_t673 * L_76 = (__this->___touchStates_7);
		int32_t L_77 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_76);
		VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::Remove(!0) */, L_76, L_77);
		int32_t L_78 = ((&V_9)->___Id_0);
		VirtActionInvoker1< int32_t >::Invoke(13 /* System.Void TouchScript.InputSources.InputSource::endTouch(System.Int32) */, __this, L_78);
		goto IL_02b6;
	}

IL_029a:
	{
		Vector2_t85  L_79 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		Object_t * L_80 = (Object_t *)VirtFuncInvoker1< Object_t *, Vector2_t85  >::Invoke(9 /* TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2) */, __this, L_79);
		NullCheck(L_80);
		int32_t L_81 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_80);
		V_10 = L_81;
		int32_t L_82 = V_10;
		VirtActionInvoker1< int32_t >::Invoke(14 /* System.Void TouchScript.InputSources.InputSource::cancelTouch(System.Int32) */, __this, L_82);
	}

IL_02b6:
	{
		goto IL_032a;
	}

IL_02bb:
	{
		HashSet_1_t661 * L_83 = (__this->___touchIds_8);
		int32_t L_84 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_83);
		bool L_85 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0) */, L_83, L_84);
		if (!L_85)
		{
			goto IL_02d7;
		}
	}
	{
		goto IL_0325;
	}

IL_02d7:
	{
		HashSet_1_t661 * L_86 = (__this->___touchIds_8);
		int32_t L_87 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		NullCheck(L_86);
		HashSet_1_Add_m3932(L_86, L_87, /*hidden argument*/HashSet_1_Add_m3932_MethodInfo_var);
		Vector2_t85  L_88 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		Object_t * L_89 = (Object_t *)VirtFuncInvoker1< Object_t *, Vector2_t85  >::Invoke(9 /* TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2) */, __this, L_88);
		NullCheck(L_89);
		int32_t L_90 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 TouchScript.ITouch::get_Id() */, ITouch_t257_il2cpp_TypeInfo_var, L_89);
		V_11 = L_90;
		Dictionary_2_t673 * L_91 = (__this->___touchStates_7);
		int32_t L_92 = Touch_get_fingerId_m2689((&V_1), /*hidden argument*/NULL);
		int32_t L_93 = V_11;
		int32_t L_94 = Touch_get_phase_m2690((&V_1), /*hidden argument*/NULL);
		Vector2_t85  L_95 = Touch_get_position_m2691((&V_1), /*hidden argument*/NULL);
		TouchState_t674  L_96 = {0};
		TouchState__ctor_m3803(&L_96, L_93, L_94, L_95, /*hidden argument*/NULL);
		NullCheck(L_91);
		VirtActionInvoker2< int32_t, TouchState_t674  >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>::Add(!0,!1) */, L_91, L_92, L_96);
	}

IL_0325:
	{
		goto IL_032a;
	}

IL_032a:
	{
		int32_t L_97 = V_0;
		V_0 = ((int32_t)((int32_t)L_97+(int32_t)1));
	}

IL_032e:
	{
		int32_t L_98 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		int32_t L_99 = Input_get_touchCount_m2734(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_98) < ((int32_t)L_99)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// TouchScript.ITouch TouchScript.InputSources.MobileInput::beginTouch(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo* Tags_t637_il2cpp_TypeInfo_var;
extern "C" Object_t * MobileInput_beginTouch_m3802 (MobileInput_t672 * __this, Vector2_t85  ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tags_t637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t85  L_0 = ___position;
		Tags_t637 * L_1 = (__this->___Tags_6);
		Tags_t637 * L_2 = (Tags_t637 *)il2cpp_codegen_object_new (Tags_t637_il2cpp_TypeInfo_var);
		Tags__ctor_m3684(L_2, L_1, /*hidden argument*/NULL);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Vector2_t85 , Tags_t637 * >::Invoke(10 /* TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2,TouchScript.Tags) */, __this, L_0, L_2);
		return L_3;
	}
}
// System.Void TouchScript.InputSources.TouchState::.ctor(System.Int32,UnityEngine.TouchPhase,UnityEngine.Vector2)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void TouchState__ctor_m3803 (TouchState_t674 * __this, int32_t ___anId, int32_t ___aPhase, Vector2_t85  ___aPosition, const MethodInfo* method)
{
	{
		int32_t L_0 = ___anId;
		__this->___Id_0 = L_0;
		int32_t L_1 = ___aPhase;
		__this->___Phase_1 = L_1;
		Vector2_t85  L_2 = ___aPosition;
		__this->___Position_2 = L_2;
		return;
	}
}
// Conversion methods for marshalling of: TouchScript.InputSources.TouchState
extern "C" void TouchState_t674_marshal(const TouchState_t674& unmarshaled, TouchState_t674_marshaled& marshaled)
{
	marshaled.___Id_0 = unmarshaled.___Id_0;
	marshaled.___Phase_1 = unmarshaled.___Phase_1;
	marshaled.___Position_2 = unmarshaled.___Position_2;
}
extern "C" void TouchState_t674_marshal_back(const TouchState_t674_marshaled& marshaled, TouchState_t674& unmarshaled)
{
	unmarshaled.___Id_0 = marshaled.___Id_0;
	unmarshaled.___Phase_1 = marshaled.___Phase_1;
	unmarshaled.___Position_2 = marshaled.___Position_2;
}
// Conversion method for clean up from marshalling of: TouchScript.InputSources.TouchState
extern "C" void TouchState_t674_marshal_cleanup(TouchState_t674_marshaled& marshaled)
{
}
// TouchScript.Utils.TransformUtils
#include "TouchScript_TouchScript_Utils_TransformUtils.h"
// UnityEngine.Vector3 TouchScript.Utils.TransformUtils::GlobalToLocalPosition(UnityEngine.Transform,UnityEngine.Vector3)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" Vector3_t28  TransformUtils_GlobalToLocalPosition_m3804 (Object_t * __this /* static, unused */, Transform_t48 * ___transform, Vector3_t28  ___global, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = ___transform;
		NullCheck(L_0);
		Transform_t48 * L_1 = Transform_get_parent_m1205(L_0, /*hidden argument*/NULL);
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		Vector3_t28  L_3 = ___global;
		return L_3;
	}

IL_0013:
	{
		Transform_t48 * L_4 = ___transform;
		NullCheck(L_4);
		Transform_t48 * L_5 = Transform_get_parent_m1205(L_4, /*hidden argument*/NULL);
		Vector3_t28  L_6 = ___global;
		NullCheck(L_5);
		Vector3_t28  L_7 = Transform_InverseTransformPoint_m2833(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 TouchScript.Utils.TransformUtils::GlobalToLocalDirection(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" Vector3_t28  TransformUtils_GlobalToLocalDirection_m3805 (Object_t * __this /* static, unused */, Transform_t48 * ___transform, Vector3_t28  ___global, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = ___transform;
		NullCheck(L_0);
		Transform_t48 * L_1 = Transform_get_parent_m1205(L_0, /*hidden argument*/NULL);
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		Vector3_t28  L_3 = ___global;
		return L_3;
	}

IL_0013:
	{
		Transform_t48 * L_4 = ___transform;
		NullCheck(L_4);
		Transform_t48 * L_5 = Transform_get_parent_m1205(L_4, /*hidden argument*/NULL);
		Vector3_t28  L_6 = ___global;
		NullCheck(L_5);
		Vector3_t28  L_7 = Transform_InverseTransformDirection_m3814(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 TouchScript.Utils.TransformUtils::GlobalToLocalVector(UnityEngine.Transform,UnityEngine.Vector3)
// TouchScript.Utils.TransformUtils
#include "TouchScript_TouchScript_Utils_TransformUtilsMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" Vector3_t28  TransformUtils_GlobalToLocalVector_m3806 (Object_t * __this /* static, unused */, Transform_t48 * ___transform, Vector3_t28  ___global, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t48 * V_0 = {0};
	Vector3_t28  V_1 = {0};
	Vector3_t28  V_2 = {0};
	Vector3_t28 * G_B4_0 = {0};
	Vector3_t28 * G_B3_0 = {0};
	float G_B5_0 = 0.0f;
	Vector3_t28 * G_B5_1 = {0};
	Vector3_t28 * G_B7_0 = {0};
	Vector3_t28 * G_B6_0 = {0};
	float G_B8_0 = 0.0f;
	Vector3_t28 * G_B8_1 = {0};
	Vector3_t28 * G_B10_0 = {0};
	Vector3_t28 * G_B9_0 = {0};
	float G_B11_0 = 0.0f;
	Vector3_t28 * G_B11_1 = {0};
	{
		Transform_t48 * L_0 = ___transform;
		NullCheck(L_0);
		Transform_t48 * L_1 = Transform_get_parent_m1205(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_t48 * L_2 = V_0;
		bool L_3 = Object_op_Equality_m295(NULL /*static, unused*/, L_2, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		Vector3_t28  L_4 = ___global;
		return L_4;
	}

IL_0015:
	{
		Transform_t48 * L_5 = V_0;
		NullCheck(L_5);
		Vector3_t28  L_6 = Transform_get_localScale_m357(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t48 * L_7 = V_0;
		Vector3_t28  L_8 = ___global;
		Vector3_t28  L_9 = TransformUtils_GlobalToLocalVector_m3806(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Transform_t48 * L_10 = V_0;
		NullCheck(L_10);
		Quaternion_t104  L_11 = Transform_get_localRotation_m1235(L_10, /*hidden argument*/NULL);
		Quaternion_t104  L_12 = Quaternion_Inverse_m3088(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Vector3_t28  L_13 = V_2;
		Vector3_t28  L_14 = Quaternion_op_Multiply_m1198(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		float L_15 = ((&V_1)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		bool L_16 = Mathf_Approximately_m2715(NULL /*static, unused*/, L_15, (0.0f), /*hidden argument*/NULL);
		G_B3_0 = (&V_2);
		if (!L_16)
		{
			G_B4_0 = (&V_2);
			goto IL_0058;
		}
	}
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B3_0;
		goto IL_0067;
	}

IL_0058:
	{
		float L_17 = ((&V_2)->___x_1);
		float L_18 = ((&V_1)->___x_1);
		G_B5_0 = ((float)((float)L_17/(float)L_18));
		G_B5_1 = G_B4_0;
	}

IL_0067:
	{
		G_B5_1->___x_1 = G_B5_0;
		float L_19 = ((&V_1)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		bool L_20 = Mathf_Approximately_m2715(NULL /*static, unused*/, L_19, (0.0f), /*hidden argument*/NULL);
		G_B6_0 = (&V_2);
		if (!L_20)
		{
			G_B7_0 = (&V_2);
			goto IL_008e;
		}
	}
	{
		G_B8_0 = (0.0f);
		G_B8_1 = G_B6_0;
		goto IL_009d;
	}

IL_008e:
	{
		float L_21 = ((&V_2)->___y_2);
		float L_22 = ((&V_1)->___y_2);
		G_B8_0 = ((float)((float)L_21/(float)L_22));
		G_B8_1 = G_B7_0;
	}

IL_009d:
	{
		G_B8_1->___y_2 = G_B8_0;
		float L_23 = ((&V_1)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		bool L_24 = Mathf_Approximately_m2715(NULL /*static, unused*/, L_23, (0.0f), /*hidden argument*/NULL);
		G_B9_0 = (&V_2);
		if (!L_24)
		{
			G_B10_0 = (&V_2);
			goto IL_00c4;
		}
	}
	{
		G_B11_0 = (0.0f);
		G_B11_1 = G_B9_0;
		goto IL_00d3;
	}

IL_00c4:
	{
		float L_25 = ((&V_2)->___z_3);
		float L_26 = ((&V_1)->___z_3);
		G_B11_0 = ((float)((float)L_25/(float)L_26));
		G_B11_1 = G_B10_0;
	}

IL_00d3:
	{
		G_B11_1->___z_3 = G_B11_0;
		Vector3_t28  L_27 = V_2;
		return L_27;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
