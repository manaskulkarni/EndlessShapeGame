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
#include "UnityEngine_U3CModuleU3E.h"
// <Module>
#include "UnityEngine_U3CModuleU3EMethodDeclarations.h"
// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequest.h"
// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequestMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundle.h"
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
// System.Void UnityEngine.AssetBundleCreateRequest::.ctor()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
extern "C" void AssetBundleCreateRequest__ctor_m3971 (AssetBundleCreateRequest_t717 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m4337(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
extern "C" AssetBundle_t720 * AssetBundleCreateRequest_get_assetBundle_m3972 (AssetBundleCreateRequest_t717 * __this, const MethodInfo* method)
{
	typedef AssetBundle_t720 * (*AssetBundleCreateRequest_get_assetBundle_m3972_ftn) (AssetBundleCreateRequest_t717 *);
	static AssetBundleCreateRequest_get_assetBundle_m3972_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_get_assetBundle_m3972_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()
extern "C" void AssetBundleCreateRequest_DisableCompatibilityChecks_m3973 (AssetBundleCreateRequest_t717 * __this, const MethodInfo* method)
{
	typedef void (*AssetBundleCreateRequest_DisableCompatibilityChecks_m3973_ftn) (AssetBundleCreateRequest_t717 *);
	static AssetBundleCreateRequest_DisableCompatibilityChecks_m3973_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_DisableCompatibilityChecks_m3973_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequest.h"
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequestMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"
// System.Void UnityEngine.AssetBundleRequest::.ctor()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
extern "C" void AssetBundleRequest__ctor_m3974 (AssetBundleRequest_t719 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m4337(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"
extern "C" Object_t99 * AssetBundleRequest_get_asset_m3975 (AssetBundleRequest_t719 * __this, const MethodInfo* method)
{
	{
		AssetBundle_t720 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		Object_t99 * L_3 = AssetBundle_LoadAsset_m3977(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Object[] UnityEngine.AssetBundleRequest::get_allAssets()
extern "C" ObjectU5BU5D_t709* AssetBundleRequest_get_allAssets_m3976 (AssetBundleRequest_t719 * __this, const MethodInfo* method)
{
	{
		AssetBundle_t720 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		ObjectU5BU5D_t709* L_3 = AssetBundle_LoadAssetWithSubAssets_Internal_m3979(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t947_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral360;
extern Il2CppCodeGenString* _stringLiteral361;
extern Il2CppCodeGenString* _stringLiteral362;
extern "C" Object_t99 * AssetBundle_LoadAsset_m3977 (AssetBundle_t720 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		_stringLiteral360 = il2cpp_codegen_string_literal_from_index(360);
		_stringLiteral361 = il2cpp_codegen_string_literal_from_index(361);
		_stringLiteral362 = il2cpp_codegen_string_literal_from_index(362);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		NullReferenceException_t947 * L_1 = (NullReferenceException_t947 *)il2cpp_codegen_object_new (NullReferenceException_t947_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m5181(L_1, _stringLiteral360, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2952(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t568 * L_4 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_4, _stringLiteral361, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0027:
	{
		Type_t * L_5 = ___type;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		NullReferenceException_t947 * L_6 = (NullReferenceException_t947 *)il2cpp_codegen_object_new (NullReferenceException_t947_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m5181(L_6, _stringLiteral362, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0038:
	{
		String_t* L_7 = ___name;
		Type_t * L_8 = ___type;
		Object_t99 * L_9 = AssetBundle_LoadAsset_Internal_m3978(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t99 * AssetBundle_LoadAsset_Internal_m3978 (AssetBundle_t720 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	typedef Object_t99 * (*AssetBundle_LoadAsset_Internal_m3978_ftn) (AssetBundle_t720 *, String_t*, Type_t *);
	static AssetBundle_LoadAsset_Internal_m3978_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAsset_Internal_m3978_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t709* AssetBundle_LoadAssetWithSubAssets_Internal_m3979 (AssetBundle_t720 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t709* (*AssetBundle_LoadAssetWithSubAssets_Internal_m3979_ftn) (AssetBundle_t720 *, String_t*, Type_t *);
	static AssetBundle_LoadAssetWithSubAssets_Internal_m3979_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAssetWithSubAssets_Internal_m3979_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptionsMethodDeclarations.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatformMethodDeclarations.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogTypeMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfo.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
extern "C" String_t* SystemInfo_get_graphicsDeviceName_m3827 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*SystemInfo_get_graphicsDeviceName_m3827_ftn) ();
	static SystemInfo_get_graphicsDeviceName_m3827_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_graphicsDeviceName_m3827_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_graphicsDeviceName()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
extern "C" int32_t SystemInfo_get_graphicsShaderLevel_m432 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*SystemInfo_get_graphicsShaderLevel_m432_ftn) ();
	static SystemInfo_get_graphicsShaderLevel_m432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_graphicsShaderLevel_m432_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_graphicsShaderLevel()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
extern "C" bool SystemInfo_get_supportsRenderTextures_m423 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*SystemInfo_get_supportsRenderTextures_m423_ftn) ();
	static SystemInfo_get_supportsRenderTextures_m423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_supportsRenderTextures_m423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_supportsRenderTextures()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
extern "C" bool SystemInfo_get_supportsImageEffects_m302 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*SystemInfo_get_supportsImageEffects_m302_ftn) ();
	static SystemInfo_get_supportsImageEffects_m302_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_supportsImageEffects_m302_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_supportsImageEffects()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SystemInfo::get_supports3DTextures()
extern "C" bool SystemInfo_get_supports3DTextures_m373 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*SystemInfo_get_supports3DTextures_m373_ftn) ();
	static SystemInfo_get_supports3DTextures_m373_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_supports3DTextures_m373_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_supports3DTextures()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
extern "C" bool SystemInfo_get_supportsComputeShaders_m433 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*SystemInfo_get_supportsComputeShaders_m433_ftn) ();
	static SystemInfo_get_supportsComputeShaders_m433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_supportsComputeShaders_m433_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_supportsComputeShaders()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
extern "C" bool SystemInfo_SupportsRenderTextureFormat_m321 (Object_t * __this /* static, unused */, int32_t ___format, const MethodInfo* method)
{
	typedef bool (*SystemInfo_SupportsRenderTextureFormat_m321_ftn) (int32_t);
	static SystemInfo_SupportsRenderTextureFormat_m321_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_SupportsRenderTextureFormat_m321_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)");
	return _il2cpp_icall_func(___format);
}
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void WaitForSeconds__ctor_m1074 (WaitForSeconds_t228 * __this, float ___seconds, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m4473(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds;
		__this->___m_Seconds_0 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t228_marshal(const WaitForSeconds_t228& unmarshaled, WaitForSeconds_t228_marshaled& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.___m_Seconds_0;
}
extern "C" void WaitForSeconds_t228_marshal_back(const WaitForSeconds_t228_marshaled& marshaled, WaitForSeconds_t228& unmarshaled)
{
	unmarshaled.___m_Seconds_0 = marshaled.___m_Seconds_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t228_marshal_cleanup(WaitForSeconds_t228_marshaled& marshaled)
{
}
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdate.h"
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdateMethodDeclarations.h"
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void WaitForFixedUpdate__ctor_m3980 (WaitForFixedUpdate_t725 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m4473(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void WaitForEndOfFrame__ctor_m3047 (WaitForEndOfFrame_t561 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m4473(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_CoroutineMethodDeclarations.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void UnityEngine.Coroutine::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void Coroutine__ctor_m3981 (Coroutine_t125 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m4473(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m3982 (Coroutine_t125 * __this, const MethodInfo* method)
{
	typedef void (*Coroutine_ReleaseCoroutine_m3982_ftn) (Coroutine_t125 *);
	static Coroutine_ReleaseCoroutine_m3982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Coroutine_ReleaseCoroutine_m3982_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Coroutine::Finalize()
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_CoroutineMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Coroutine_Finalize_m3983 (Coroutine_t125 * __this, const MethodInfo* method)
{
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Coroutine_ReleaseCoroutine_m3982(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m5182(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Coroutine
extern "C" void Coroutine_t125_marshal(const Coroutine_t125& unmarshaled, Coroutine_t125_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void Coroutine_t125_marshal_back(const Coroutine_t125_marshaled& marshaled, Coroutine_t125& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Coroutine
extern "C" void Coroutine_t125_marshal_cleanup(Coroutine_t125_marshaled& marshaled)
{
}
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.Void UnityEngine.ScriptableObject::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern "C" void ScriptableObject__ctor_m3887 (ScriptableObject_t632 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m4424(__this, /*hidden argument*/NULL);
		ScriptableObject_Internal_CreateScriptableObject_m3984(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m3984 (Object_t * __this /* static, unused */, ScriptableObject_t632 * ___self, const MethodInfo* method)
{
	typedef void (*ScriptableObject_Internal_CreateScriptableObject_m3984_ftn) (ScriptableObject_t632 *);
	static ScriptableObject_Internal_CreateScriptableObject_m3984_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_Internal_CreateScriptableObject_m3984_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(___self);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" ScriptableObject_t632 * ScriptableObject_CreateInstance_m3985 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method)
{
	typedef ScriptableObject_t632 * (*ScriptableObject_CreateInstance_m3985_ftn) (String_t*);
	static ScriptableObject_CreateInstance_m3985_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstance_m3985_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstance(System.String)");
	return _il2cpp_icall_func(___className);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern "C" ScriptableObject_t632 * ScriptableObject_CreateInstance_m3986 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ScriptableObject_t632 * L_1 = ScriptableObject_CreateInstanceFromType_m3987(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t632 * ScriptableObject_CreateInstanceFromType_m3987 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ScriptableObject_t632 * (*ScriptableObject_CreateInstanceFromType_m3987_ftn) (Type_t *);
	static ScriptableObject_CreateInstanceFromType_m3987_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstanceFromType_m3987_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t632_marshal(const ScriptableObject_t632& unmarshaled, ScriptableObject_t632_marshaled& marshaled)
{
}
extern "C" void ScriptableObject_t632_marshal_back(const ScriptableObject_t632_marshaled& marshaled, ScriptableObject_t632& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t632_marshal_cleanup(ScriptableObject_t632_marshaled& marshaled)
{
}
// UnityEngine.UnhandledExceptionHandler
#include "UnityEngine_UnityEngine_UnhandledExceptionHandler.h"
// UnityEngine.UnhandledExceptionHandler
#include "UnityEngine_UnityEngine_UnhandledExceptionHandlerMethodDeclarations.h"
// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgsMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Void UnityEngine.UnhandledExceptionHandler::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void UnhandledExceptionHandler__ctor_m3988 (UnhandledExceptionHandler_t726 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::RegisterUECatcher()
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
extern TypeInfo* UnhandledExceptionEventHandler_t949_il2cpp_TypeInfo_var;
extern const MethodInfo* UnhandledExceptionHandler_HandleUnhandledException_m3990_MethodInfo_var;
extern "C" void UnhandledExceptionHandler_RegisterUECatcher_m3989 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnhandledExceptionEventHandler_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		UnhandledExceptionHandler_HandleUnhandledException_m3990_MethodInfo_var = il2cpp_codegen_method_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		AppDomain_t948 * L_0 = AppDomain_get_CurrentDomain_m5183(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)UnhandledExceptionHandler_HandleUnhandledException_m3990_MethodInfo_var };
		UnhandledExceptionEventHandler_t949 * L_2 = (UnhandledExceptionEventHandler_t949 *)il2cpp_codegen_object_new (UnhandledExceptionEventHandler_t949_il2cpp_TypeInfo_var);
		UnhandledExceptionEventHandler__ctor_m5184(L_2, NULL, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		AppDomain_add_UnhandledException_m5185(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::HandleUnhandledException(System.Object,System.UnhandledExceptionEventArgs)
// System.Object
#include "mscorlib_System_Object.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgsMethodDeclarations.h"
// UnityEngine.UnhandledExceptionHandler
#include "UnityEngine_UnityEngine_UnhandledExceptionHandlerMethodDeclarations.h"
extern TypeInfo* Exception_t236_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral363;
extern "C" void UnhandledExceptionHandler_HandleUnhandledException_m3990 (Object_t * __this /* static, unused */, Object_t * ___sender, UnhandledExceptionEventArgs_t932 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		_stringLiteral363 = il2cpp_codegen_string_literal_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t236 * V_0 = {0};
	{
		UnhandledExceptionEventArgs_t932 * L_0 = ___args;
		NullCheck(L_0);
		Object_t * L_1 = UnhandledExceptionEventArgs_get_ExceptionObject_m5186(L_0, /*hidden argument*/NULL);
		V_0 = ((Exception_t236 *)IsInstClass(L_1, Exception_t236_il2cpp_TypeInfo_var));
		Exception_t236 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t236 * L_3 = V_0;
		UnhandledExceptionHandler_PrintException_m3991(NULL /*static, unused*/, _stringLiteral363, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m3992(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::PrintException(System.String,System.Exception)
// System.String
#include "mscorlib_System_String.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral364;
extern "C" void UnhandledExceptionHandler_PrintException_m3991 (Object_t * __this /* static, unused */, String_t* ___title, Exception_t236 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral364 = il2cpp_codegen_string_literal_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___title;
		Exception_t236 * L_1 = ___e;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m430(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Debug_LogError_m380(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Exception_t236 * L_4 = ___e;
		NullCheck(L_4);
		Exception_t236 * L_5 = (Exception_t236 *)VirtFuncInvoker0< Exception_t236 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_4);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Exception_t236 * L_6 = ___e;
		NullCheck(L_6);
		Exception_t236 * L_7 = (Exception_t236 *)VirtFuncInvoker0< Exception_t236 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_6);
		UnhandledExceptionHandler_PrintException_m3991(NULL /*static, unused*/, _stringLiteral364, L_7, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler()
extern "C" void UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m3992 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m3992_ftn) ();
	static UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m3992_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m3992_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler()");
	_il2cpp_icall_func();
}
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_37.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_1.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_2.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_3.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_4.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderb.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_5.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_37MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void GameCenterPlatform__ctor_m3993 (GameCenterPlatform_t727 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_37MethodDeclarations.h"
extern TypeInfo* AchievementDescriptionU5BU5D_t733_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern TypeInfo* UserProfileU5BU5D_t734_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t736_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5187_MethodInfo_var;
extern "C" void GameCenterPlatform__cctor_m3994 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescriptionU5BU5D_t733_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		UserProfileU5BU5D_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(468);
		List_1_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		List_1__ctor_m5187_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484157);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t733*)SZArrayNew(AchievementDescriptionU5BU5D_t733_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_friends_10 = ((UserProfileU5BU5D_t734*)SZArrayNew(UserProfileU5BU5D_t734_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_users_11 = ((UserProfileU5BU5D_t734*)SZArrayNew(UserProfileU5BU5D_t734_il2cpp_TypeInfo_var, 0));
		List_1_t736 * L_0 = (List_1_t736 *)il2cpp_codegen_object_new (List_1_t736_il2cpp_TypeInfo_var);
		List_1__ctor_m5187(L_0, /*hidden argument*/List_1__ctor_m5187_MethodInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_1.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m3995 (GameCenterPlatform_t727 * __this, Object_t * ___user, Action_1_t728 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t728 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1 = L_0;
		GameCenterPlatform_Internal_LoadFriends_m4003(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m3996 (GameCenterPlatform_t727 * __this, Object_t * ___user, Action_1_t728 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t728 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0 = L_0;
		GameCenterPlatform_Internal_Authenticate_m3997(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C" void GameCenterPlatform_Internal_Authenticate_m3997 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_Authenticate_m3997_ftn) ();
	static GameCenterPlatform_Internal_Authenticate_m3997_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticate_m3997_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C" bool GameCenterPlatform_Internal_Authenticated_m3998 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Authenticated_m3998_ftn) ();
	static GameCenterPlatform_Internal_Authenticated_m3998_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticated_m3998_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C" String_t* GameCenterPlatform_Internal_UserName_m3999 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserName_m3999_ftn) ();
	static GameCenterPlatform_Internal_UserName_m3999_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_m3999_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C" String_t* GameCenterPlatform_Internal_UserID_m4000 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserID_m4000_ftn) ();
	static GameCenterPlatform_Internal_UserID_m4000_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_m4000_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C" bool GameCenterPlatform_Internal_Underage_m4001 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Underage_m4001_ftn) ();
	static GameCenterPlatform_Internal_Underage_m4001_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Underage_m4001_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()");
	return _il2cpp_icall_func();
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C" Texture2D_t13 * GameCenterPlatform_Internal_UserImage_m4002 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Texture2D_t13 * (*GameCenterPlatform_Internal_UserImage_m4002_ftn) ();
	static GameCenterPlatform_Internal_UserImage_m4002_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserImage_m4002_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
extern "C" void GameCenterPlatform_Internal_LoadFriends_m4003 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadFriends_m4003_ftn) ();
	static GameCenterPlatform_Internal_LoadFriends_m4003_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadFriends_m4003_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
extern "C" void GameCenterPlatform_Internal_LoadAchievementDescriptions_m4004 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievementDescriptions_m4004_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievementDescriptions_m4004_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievementDescriptions_m4004_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
extern "C" void GameCenterPlatform_Internal_LoadAchievements_m4005 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievements_m4005_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievements_m4005_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievements_m4005_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
// System.String
#include "mscorlib_System_String.h"
// System.Double
#include "mscorlib_System_Double.h"
extern "C" void GameCenterPlatform_Internal_ReportProgress_m4006 (Object_t * __this /* static, unused */, String_t* ___id, double ___progress, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportProgress_m4006_ftn) (String_t*, double);
	static GameCenterPlatform_Internal_ReportProgress_m4006_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportProgress_m4006_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)");
	_il2cpp_icall_func(___id, ___progress);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
// System.Int64
#include "mscorlib_System_Int64.h"
extern "C" void GameCenterPlatform_Internal_ReportScore_m4007 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___category, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportScore_m4007_ftn) (int64_t, String_t*);
	static GameCenterPlatform_Internal_ReportScore_m4007_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportScore_m4007_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)");
	_il2cpp_icall_func(___score, ___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
extern "C" void GameCenterPlatform_Internal_LoadScores_m4008 (Object_t * __this /* static, unused */, String_t* ___category, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadScores_m4008_ftn) (String_t*);
	static GameCenterPlatform_Internal_LoadScores_m4008_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadScores_m4008_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)");
	_il2cpp_icall_func(___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C" void GameCenterPlatform_Internal_ShowAchievementsUI_m4009 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_m4009_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_m4009_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_m4009_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C" void GameCenterPlatform_Internal_ShowLeaderboardUI_m4010 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m4010_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m4010_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m4010_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
#include "mscorlib_ArrayTypes.h"
extern "C" void GameCenterPlatform_Internal_LoadUsers_m4011 (Object_t * __this /* static, unused */, StringU5BU5D_t110* ___userIds, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_m4011_ftn) (StringU5BU5D_t110*);
	static GameCenterPlatform_Internal_LoadUsers_m4011_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_m4011_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])");
	_il2cpp_icall_func(___userIds);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C" void GameCenterPlatform_Internal_ResetAllAchievements_m4012 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ResetAllAchievements_m4012_ftn) ();
	static GameCenterPlatform_Internal_ResetAllAchievements_m4012_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ResetAllAchievements_m4012_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m4013 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m4013_ftn) (bool);
	static GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m4013_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m4013_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ResetAllAchievements_m4014 (Object_t * __this /* static, unused */, Action_1_t728 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t728 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12 = L_0;
		GameCenterPlatform_Internal_ResetAllAchievements_m4012(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m4015 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m4013(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m4016 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int32_t L_1 = ___timeScope;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m4017(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m4017 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m4017_ftn) (String_t*, int32_t);
	static GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m4017_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m4017_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)");
	_il2cpp_icall_func(___leaderboardID, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern TypeInfo* AchievementDescriptionU5BU5D_t733_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearAchievementDescriptions_m4018 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		AchievementDescriptionU5BU5D_t733_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t733* L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t733* L_1 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_1);
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		int32_t L_3 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t733*)SZArrayNew(AchievementDescriptionU5BU5D_t733_il2cpp_TypeInfo_var, L_3));
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetAchievementDescription_m4019 (Object_t * __this /* static, unused */, GcAchievementDescriptionData_t869  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t733* L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		int32_t L_1 = ___number;
		AchievementDescription_t888 * L_2 = GcAchievementDescriptionData_ToAchievementDescription_m5011((&___data), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((AchievementDescription_t888 **)(AchievementDescription_t888 **)SZArrayLdElema(L_0, L_1, sizeof(AchievementDescription_t888 *))) = (AchievementDescription_t888 *)L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral365;
extern "C" void GameCenterPlatform_SetAchievementDescriptionImage_m4020 (Object_t * __this /* static, unused */, Texture2D_t13 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		_stringLiteral365 = il2cpp_codegen_string_literal_from_index(365);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t733* L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_0);
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		Debug_Log_m426(NULL /*static, unused*/, _stringLiteral365, /*hidden argument*/NULL);
		return;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t733* L_3 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		int32_t L_4 = ___number;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Texture2D_t13 * L_6 = ___texture;
		NullCheck((*(AchievementDescription_t888 **)(AchievementDescription_t888 **)SZArrayLdElema(L_3, L_5, sizeof(AchievementDescription_t888 *))));
		AchievementDescription_SetImage_m5047((*(AchievementDescription_t888 **)(AchievementDescription_t888 **)SZArrayLdElema(L_3, L_5, sizeof(AchievementDescription_t888 *))), L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5188_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral366;
extern "C" void GameCenterPlatform_TriggerAchievementDescriptionCallback_m4021 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5188_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484158);
		_stringLiteral366 = il2cpp_codegen_string_literal_from_index(366);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t729 * L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t733* L_1 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t733* L_2 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		Debug_Log_m426(NULL /*static, unused*/, _stringLiteral366, /*hidden argument*/NULL);
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t729 * L_3 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		AchievementDescriptionU5BU5D_t733* L_4 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_3);
		Action_1_Invoke_m5188(L_3, (IAchievementDescriptionU5BU5D_t950*)(IAchievementDescriptionU5BU5D_t950*)L_4, /*hidden argument*/Action_1_Invoke_m5188_MethodInfo_var);
	}

IL_0039:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5189_MethodInfo_var;
extern "C" void GameCenterPlatform_AuthenticateCallbackWrapper_m4022 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484159);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t728 * G_B3_0 = {0};
	Action_1_t728 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	Action_1_t728 * G_B4_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t728 * L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m4032(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_1_t728 * L_1 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0;
		int32_t L_2 = ___result;
		G_B2_0 = L_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B3_0 = L_1;
			goto IL_0021;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0022:
	{
		NullCheck(G_B4_1);
		Action_1_Invoke_m5189(G_B4_1, G_B4_0, /*hidden argument*/Action_1_Invoke_m5189_MethodInfo_var);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearFriends_m4023 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m4050(NULL /*static, unused*/, (&((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetFriends_m4024 (Object_t * __this /* static, unused */, GcUserProfileData_t868  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m5010((&___data), (&((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetFriendImage_m4025 (Object_t * __this /* static, unused */, Texture2D_t13 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Texture2D_t13 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m4049(NULL /*static, unused*/, (&((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5189_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerFriendsCallbackWrapper_m4026 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484159);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t728 * G_B5_0 = {0};
	Action_1_t728 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Action_1_t728 * G_B6_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_t734* L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_friends_10;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		LocalUser_t735 * L_1 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		UserProfileU5BU5D_t734* L_2 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_friends_10;
		NullCheck(L_1);
		LocalUser_SetFriends_m5020(L_1, (IUserProfileU5BU5D_t886*)(IUserProfileU5BU5D_t886*)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t728 * L_3 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t728 * L_4 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1;
		int32_t L_5 = ___result;
		G_B4_0 = L_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			G_B5_0 = L_4;
			goto IL_0035;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0036:
	{
		NullCheck(G_B6_1);
		Action_1_Invoke_m5189(G_B6_1, G_B6_0, /*hidden argument*/Action_1_Invoke_m5189_MethodInfo_var);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern TypeInfo* AchievementU5BU5D_t951_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5190_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral367;
extern "C" void GameCenterPlatform_AchievementCallbackWrapper_m4027 (Object_t * __this /* static, unused */, GcAchievementDataU5BU5D_t933* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		AchievementU5BU5D_t951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		Action_1_Invoke_m5190_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484160);
		_stringLiteral367 = il2cpp_codegen_string_literal_from_index(367);
		s_Il2CppMethodIntialized = true;
	}
	AchievementU5BU5D_t951* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t730 * L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		GcAchievementDataU5BU5D_t933* L_1 = ___result;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m426(NULL /*static, unused*/, _stringLiteral367, /*hidden argument*/NULL);
	}

IL_001c:
	{
		GcAchievementDataU5BU5D_t933* L_2 = ___result;
		NullCheck(L_2);
		V_0 = ((AchievementU5BU5D_t951*)SZArrayNew(AchievementU5BU5D_t951_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_003f;
	}

IL_002c:
	{
		AchievementU5BU5D_t951* L_3 = V_0;
		int32_t L_4 = V_1;
		GcAchievementDataU5BU5D_t933* L_5 = ___result;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		Achievement_t887 * L_7 = GcAchievementData_ToAchievement_m5012(((GcAchievementData_t870 *)(GcAchievementData_t870 *)SZArrayLdElema(L_5, L_6, sizeof(GcAchievementData_t870 ))), /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, L_7);
		*((Achievement_t887 **)(Achievement_t887 **)SZArrayLdElema(L_3, L_4, sizeof(Achievement_t887 *))) = (Achievement_t887 *)L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_1;
		GcAchievementDataU5BU5D_t933* L_10 = ___result;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t730 * L_11 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3;
		AchievementU5BU5D_t951* L_12 = V_0;
		NullCheck(L_11);
		Action_1_Invoke_m5190(L_11, (IAchievementU5BU5D_t952*)(IAchievementU5BU5D_t952*)L_12, /*hidden argument*/Action_1_Invoke_m5190_MethodInfo_var);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5189_MethodInfo_var;
extern "C" void GameCenterPlatform_ProgressCallbackWrapper_m4028 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484159);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t728 * L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t728 * L_1 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m5189(L_1, L_2, /*hidden argument*/Action_1_Invoke_m5189_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5189_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreCallbackWrapper_m4029 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484159);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t728 * L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t728 * L_1 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m5189(L_1, L_2, /*hidden argument*/Action_1_Invoke_m5189_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t953_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5191_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreLoaderCallbackWrapper_m4030 (Object_t * __this /* static, unused */, GcScoreDataU5BU5D_t934* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		ScoreU5BU5D_t953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		Action_1_Invoke_m5191_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484161);
		s_Il2CppMethodIntialized = true;
	}
	ScoreU5BU5D_t953* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t731 * L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		GcScoreDataU5BU5D_t934* L_1 = ___result;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t953*)SZArrayNew(ScoreU5BU5D_t953_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002d;
	}

IL_001a:
	{
		ScoreU5BU5D_t953* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t934* L_4 = ___result;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t889 * L_6 = GcScoreData_ToScore_m5013(((GcScoreData_t871 *)(GcScoreData_t871 *)SZArrayLdElema(L_4, L_5, sizeof(GcScoreData_t871 ))), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t889 **)(Score_t889 **)SZArrayLdElema(L_2, L_3, sizeof(Score_t889 *))) = (Score_t889 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t934* L_9 = ___result;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t731 * L_10 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6;
		ScoreU5BU5D_t953* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m5191(L_10, (IScoreU5BU5D_t890*)(IScoreU5BU5D_t890*)L_11, /*hidden argument*/Action_1_Invoke_m5191_MethodInfo_var);
	}

IL_0041:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern TypeInfo* LocalUser_t735_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral193;
extern "C" Object_t * GameCenterPlatform_get_localUser_m4031 (GameCenterPlatform_t727 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		LocalUser_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral193 = il2cpp_codegen_string_literal_from_index(193);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		LocalUser_t735 * L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		LocalUser_t735 * L_1 = (LocalUser_t735 *)il2cpp_codegen_object_new (LocalUser_t735_il2cpp_TypeInfo_var);
		LocalUser__ctor_m5019(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		bool L_2 = GameCenterPlatform_Internal_Authenticated_m3998(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		LocalUser_t735 * L_3 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m458(NULL /*static, unused*/, L_4, _stringLiteral193, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m4032(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		LocalUser_t735 * L_6 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		return L_6;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_PopulateLocalUser_m4032 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		LocalUser_t735 * L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		bool L_1 = GameCenterPlatform_Internal_Authenticated_m3998(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_m5021(L_0, L_1, /*hidden argument*/NULL);
		LocalUser_t735 * L_2 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		String_t* L_3 = GameCenterPlatform_Internal_UserName_m3999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		UserProfile_SetUserName_m5027(L_2, L_3, /*hidden argument*/NULL);
		LocalUser_t735 * L_4 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		String_t* L_5 = GameCenterPlatform_Internal_UserID_m4000(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		UserProfile_SetUserID_m5028(L_4, L_5, /*hidden argument*/NULL);
		LocalUser_t735 * L_6 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		bool L_7 = GameCenterPlatform_Internal_Underage_m4001(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		LocalUser_SetUnderage_m5022(L_6, L_7, /*hidden argument*/NULL);
		LocalUser_t735 * L_8 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		Texture2D_t13 * L_9 = GameCenterPlatform_Internal_UserImage_m4002(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		UserProfile_SetImage_m5029(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_2.h"
extern TypeInfo* AchievementDescriptionU5BU5D_t733_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5188_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievementDescriptions_m4033 (GameCenterPlatform_t727 * __this, Action_1_t729 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescriptionU5BU5D_t733_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5188_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484158);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4041(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t729 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m5188(L_1, (IAchievementDescriptionU5BU5D_t950*)(IAchievementDescriptionU5BU5D_t950*)((AchievementDescriptionU5BU5D_t733*)SZArrayNew(AchievementDescriptionU5BU5D_t733_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m5188_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t729 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2 = L_2;
		GameCenterPlatform_Internal_LoadAchievementDescriptions_m4004(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5189_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportProgress_m4034 (GameCenterPlatform_t727 * __this, String_t* ___id, double ___progress, Action_1_t728 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484159);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4041(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t728 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m5189(L_1, 0, /*hidden argument*/Action_1_Invoke_m5189_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t728 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4 = L_2;
		String_t* L_3 = ___id;
		double L_4 = ___progress;
		GameCenterPlatform_Internal_ReportProgress_m4006(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_3.h"
extern TypeInfo* AchievementU5BU5D_t951_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5190_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievements_m4035 (GameCenterPlatform_t727 * __this, Action_1_t730 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementU5BU5D_t951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5190_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484160);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4041(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t730 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m5190(L_1, (IAchievementU5BU5D_t952*)(IAchievementU5BU5D_t952*)((AchievementU5BU5D_t951*)SZArrayNew(AchievementU5BU5D_t951_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m5190_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t730 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3 = L_2;
		GameCenterPlatform_Internal_LoadAchievements_m4005(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5189_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportScore_m4036 (GameCenterPlatform_t727 * __this, int64_t ___score, String_t* ___board, Action_1_t728 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484159);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4041(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t728 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m5189(L_1, 0, /*hidden argument*/Action_1_Invoke_m5189_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t728 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5 = L_2;
		int64_t L_3 = ___score;
		String_t* L_4 = ___board;
		GameCenterPlatform_Internal_ReportScore_m4007(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_4.h"
extern TypeInfo* ScoreU5BU5D_t953_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5191_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m4037 (GameCenterPlatform_t727 * __this, String_t* ___category, Action_1_t731 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreU5BU5D_t953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5191_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484161);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4041(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t731 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m5191(L_1, (IScoreU5BU5D_t890*)(IScoreU5BU5D_t890*)((ScoreU5BU5D_t953*)SZArrayNew(ScoreU5BU5D_t953_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m5191_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t731 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6 = L_2;
		String_t* L_3 = ___category;
		GameCenterPlatform_Internal_LoadScores_m4008(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern TypeInfo* Leaderboard_t738_il2cpp_TypeInfo_var;
extern TypeInfo* GcLeaderboard_t737_il2cpp_TypeInfo_var;
extern TypeInfo* ILeaderboard_t936_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5189_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m4038 (GameCenterPlatform_t727 * __this, Object_t * ___board, Action_1_t728 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Leaderboard_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		GcLeaderboard_t737_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		ILeaderboard_t936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		Action_1_Invoke_m5189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484159);
		s_Il2CppMethodIntialized = true;
	}
	Leaderboard_t738 * V_0 = {0};
	GcLeaderboard_t737 * V_1 = {0};
	Range_t891  V_2 = {0};
	Range_t891  V_3 = {0};
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4041(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t728 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m5189(L_1, 0, /*hidden argument*/Action_1_Invoke_m5189_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t728 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7 = L_2;
		Object_t * L_3 = ___board;
		V_0 = ((Leaderboard_t738 *)CastclassClass(L_3, Leaderboard_t738_il2cpp_TypeInfo_var));
		Leaderboard_t738 * L_4 = V_0;
		GcLeaderboard_t737 * L_5 = (GcLeaderboard_t737 *)il2cpp_codegen_object_new (GcLeaderboard_t737_il2cpp_TypeInfo_var);
		GcLeaderboard__ctor_m4054(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		List_1_t736 * L_6 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14;
		GcLeaderboard_t737 * L_7 = V_1;
		NullCheck(L_6);
		VirtActionInvoker1< GcLeaderboard_t737 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(!0) */, L_6, L_7);
		Leaderboard_t738 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t110* L_9 = Leaderboard_GetUserFilter_m5068(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		if ((((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		GcLeaderboard_t737 * L_10 = V_1;
		Object_t * L_11 = ___board;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t936_il2cpp_TypeInfo_var, L_11);
		Object_t * L_13 = ___board;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t936_il2cpp_TypeInfo_var, L_13);
		Leaderboard_t738 * L_15 = V_0;
		NullCheck(L_15);
		StringU5BU5D_t110* L_16 = Leaderboard_GetUserFilter_m5068(L_15, /*hidden argument*/NULL);
		NullCheck(L_10);
		GcLeaderboard_Internal_LoadScoresWithUsers_m4062(L_10, L_12, L_14, L_16, /*hidden argument*/NULL);
		goto IL_0091;
	}

IL_005d:
	{
		GcLeaderboard_t737 * L_17 = V_1;
		Object_t * L_18 = ___board;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t936_il2cpp_TypeInfo_var, L_18);
		Object_t * L_20 = ___board;
		NullCheck(L_20);
		Range_t891  L_21 = (Range_t891 )InterfaceFuncInvoker0< Range_t891  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t936_il2cpp_TypeInfo_var, L_20);
		V_2 = L_21;
		int32_t L_22 = ((&V_2)->___from_0);
		Object_t * L_23 = ___board;
		NullCheck(L_23);
		Range_t891  L_24 = (Range_t891 )InterfaceFuncInvoker0< Range_t891  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t936_il2cpp_TypeInfo_var, L_23);
		V_3 = L_24;
		int32_t L_25 = ((&V_3)->___count_1);
		Object_t * L_26 = ___board;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope() */, ILeaderboard_t936_il2cpp_TypeInfo_var, L_26);
		Object_t * L_28 = ___board;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t936_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_17);
		GcLeaderboard_Internal_LoadScores_m4061(L_17, L_19, L_22, L_25, L_27, L_29, /*hidden argument*/NULL);
	}

IL_0091:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5189_MethodInfo_var;
extern "C" void GameCenterPlatform_LeaderboardCallbackWrapper_m4039 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484159);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t728 * L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t728 * L_1 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m5189(L_1, L_2, /*hidden argument*/Action_1_Invoke_m5189_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern TypeInfo* Leaderboard_t738_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t954_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m5192_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m5193_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m5194_MethodInfo_var;
extern "C" bool GameCenterPlatform_GetLoading_m4040 (GameCenterPlatform_t727 * __this, Object_t * ___board, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Leaderboard_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		Enumerator_t954_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		List_1_GetEnumerator_m5192_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484162);
		Enumerator_get_Current_m5193_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		Enumerator_MoveNext_m5194_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484164);
		s_Il2CppMethodIntialized = true;
	}
	GcLeaderboard_t737 * V_0 = {0};
	Enumerator_t954  V_1 = {0};
	bool V_2 = false;
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4041(__this, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		List_1_t736 * L_1 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14;
		NullCheck(L_1);
		Enumerator_t954  L_2 = List_1_GetEnumerator_m5192(L_1, /*hidden argument*/List_1_GetEnumerator_m5192_MethodInfo_var);
		V_1 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001d:
		{
			GcLeaderboard_t737 * L_3 = Enumerator_get_Current_m5193((&V_1), /*hidden argument*/Enumerator_get_Current_m5193_MethodInfo_var);
			V_0 = L_3;
			GcLeaderboard_t737 * L_4 = V_0;
			Object_t * L_5 = ___board;
			NullCheck(L_4);
			bool L_6 = GcLeaderboard_Contains_m4056(L_4, ((Leaderboard_t738 *)CastclassClass(L_5, Leaderboard_t738_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0042;
			}
		}

IL_0036:
		{
			GcLeaderboard_t737 * L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = GcLeaderboard_Loading_m4063(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}

IL_0042:
		{
			bool L_9 = Enumerator_MoveNext_m5194((&V_1), /*hidden argument*/Enumerator_MoveNext_m5194_MethodInfo_var);
			if (L_9)
			{
				goto IL_001d;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_t954  L_10 = V_1;
		Enumerator_t954  L_11 = L_10;
		Object_t * L_12 = Box(Enumerator_t954_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_12);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_005f:
	{
		return 0;
	}

IL_0061:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern TypeInfo* ILocalUser_t935_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral368;
extern "C" bool GameCenterPlatform_VerifyAuthentication_m4041 (GameCenterPlatform_t727 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILocalUser_t935_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		_stringLiteral368 = il2cpp_codegen_string_literal_from_index(368);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = GameCenterPlatform_get_localUser_m4031(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t935_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m426(NULL /*static, unused*/, _stringLiteral368, /*hidden argument*/NULL);
		return 0;
	}

IL_001c:
	{
		return 1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowAchievementsUI_m4042 (GameCenterPlatform_t727 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowAchievementsUI_m4009(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m4043 (GameCenterPlatform_t727 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowLeaderboardUI_m4010(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearUsers_m4044 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m4050(NULL /*static, unused*/, (&((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetUser_m4045 (Object_t * __this /* static, unused */, GcUserProfileData_t868  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m5010((&___data), (&((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetUserImage_m4046 (Object_t * __this /* static, unused */, Texture2D_t13 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Texture2D_t13 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m4049(NULL /*static, unused*/, (&((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5195_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerUsersCallbackWrapper_m4047 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5195_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484165);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t732 * L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t732 * L_1 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8;
		UserProfileU5BU5D_t734* L_2 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_users_11;
		NullCheck(L_1);
		Action_1_Invoke_m5195(L_1, (IUserProfileU5BU5D_t886*)(IUserProfileU5BU5D_t886*)L_2, /*hidden argument*/Action_1_Invoke_m5195_MethodInfo_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_5.h"
extern TypeInfo* UserProfileU5BU5D_t734_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5195_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadUsers_m4048 (GameCenterPlatform_t727 * __this, StringU5BU5D_t110* ___userIds, Action_1_t732 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(468);
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5195_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484165);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4041(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t732 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m5195(L_1, (IUserProfileU5BU5D_t886*)(IUserProfileU5BU5D_t886*)((UserProfileU5BU5D_t734*)SZArrayNew(UserProfileU5BU5D_t734_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m5195_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t732 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8 = L_2;
		StringU5BU5D_t110* L_3 = ___userIds;
		GameCenterPlatform_Internal_LoadUsers_m4011(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
extern TypeInfo* Texture2D_t13_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral369;
extern Il2CppCodeGenString* _stringLiteral370;
extern "C" void GameCenterPlatform_SafeSetUserImage_m4049 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t734** ___array, Texture2D_t13 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		_stringLiteral369 = il2cpp_codegen_string_literal_from_index(369);
		_stringLiteral370 = il2cpp_codegen_string_literal_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t734** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t734**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t734**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_0011:
	{
		Debug_Log_m426(NULL /*static, unused*/, _stringLiteral369, /*hidden argument*/NULL);
		Texture2D_t13 * L_3 = (Texture2D_t13 *)il2cpp_codegen_object_new (Texture2D_t13_il2cpp_TypeInfo_var);
		Texture2D__ctor_m1247(L_3, ((int32_t)76), ((int32_t)76), /*hidden argument*/NULL);
		___texture = L_3;
	}

IL_0026:
	{
		UserProfileU5BU5D_t734** L_4 = ___array;
		NullCheck((*((UserProfileU5BU5D_t734**)L_4)));
		int32_t L_5 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t734**)L_4)))->max_length)))) <= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___number;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		UserProfileU5BU5D_t734** L_7 = ___array;
		int32_t L_8 = ___number;
		NullCheck((*((UserProfileU5BU5D_t734**)L_7)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t734**)L_7)), L_8);
		int32_t L_9 = L_8;
		Texture2D_t13 * L_10 = ___texture;
		NullCheck((*(UserProfile_t885 **)(UserProfile_t885 **)SZArrayLdElema((*((UserProfileU5BU5D_t734**)L_7)), L_9, sizeof(UserProfile_t885 *))));
		UserProfile_SetImage_m5029((*(UserProfile_t885 **)(UserProfile_t885 **)SZArrayLdElema((*((UserProfileU5BU5D_t734**)L_7)), L_9, sizeof(UserProfile_t885 *))), L_10, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0046:
	{
		Debug_Log_m426(NULL /*static, unused*/, _stringLiteral370, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern TypeInfo* UserProfileU5BU5D_t734_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SafeClearArray_m4050 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t734** ___array, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(468);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t734** L_0 = ___array;
		if (!(*((UserProfileU5BU5D_t734**)L_0)))
		{
			goto IL_0011;
		}
	}
	{
		UserProfileU5BU5D_t734** L_1 = ___array;
		NullCheck((*((UserProfileU5BU5D_t734**)L_1)));
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t734**)L_1)))->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}

IL_0011:
	{
		UserProfileU5BU5D_t734** L_3 = ___array;
		int32_t L_4 = ___size;
		*((Object_t **)(L_3)) = (Object_t *)((UserProfileU5BU5D_t734*)SZArrayNew(UserProfileU5BU5D_t734_il2cpp_TypeInfo_var, L_4));
	}

IL_0019:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
extern TypeInfo* Leaderboard_t738_il2cpp_TypeInfo_var;
extern "C" Object_t * GameCenterPlatform_CreateLeaderboard_m4051 (GameCenterPlatform_t727 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Leaderboard_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	Leaderboard_t738 * V_0 = {0};
	{
		Leaderboard_t738 * L_0 = (Leaderboard_t738 *)il2cpp_codegen_object_new (Leaderboard_t738_il2cpp_TypeInfo_var);
		Leaderboard__ctor_m5062(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Leaderboard_t738 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern TypeInfo* Achievement_t887_il2cpp_TypeInfo_var;
extern "C" Object_t * GameCenterPlatform_CreateAchievement_m4052 (GameCenterPlatform_t727 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t887_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		s_Il2CppMethodIntialized = true;
	}
	Achievement_t887 * V_0 = {0};
	{
		Achievement_t887 * L_0 = (Achievement_t887 *)il2cpp_codegen_object_new (Achievement_t887_il2cpp_TypeInfo_var);
		Achievement__ctor_m5036(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Achievement_t887 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
extern TypeInfo* GameCenterPlatform_t727_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5189_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerResetAchievementCallback_m4053 (Object_t * __this /* static, unused */, bool ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		Action_1_Invoke_m5189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484159);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t728 * L_0 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t727_il2cpp_TypeInfo_var);
		Action_1_t728 * L_1 = ((GameCenterPlatform_t727_StaticFields*)GameCenterPlatform_t727_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12;
		bool L_2 = ___result;
		NullCheck(L_1);
		Action_1_Invoke_m5189(L_1, L_2, /*hidden argument*/Action_1_Invoke_m5189_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void GcLeaderboard__ctor_m4054 (GcLeaderboard_t737 * __this, Leaderboard_t738 * ___board, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		Leaderboard_t738 * L_0 = ___board;
		__this->___m_GenericLeaderboard_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
extern "C" void GcLeaderboard_Finalize_m4055 (GcLeaderboard_t737 * __this, const MethodInfo* method)
{
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GcLeaderboard_Dispose_m4064(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m5182(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" bool GcLeaderboard_Contains_m4056 (GcLeaderboard_t737 * __this, Leaderboard_t738 * ___board, const MethodInfo* method)
{
	{
		Leaderboard_t738 * L_0 = (__this->___m_GenericLeaderboard_1);
		Leaderboard_t738 * L_1 = ___board;
		return ((((Object_t*)(Leaderboard_t738 *)L_0) == ((Object_t*)(Leaderboard_t738 *)L_1))? 1 : 0);
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
extern TypeInfo* ScoreU5BU5D_t953_il2cpp_TypeInfo_var;
extern "C" void GcLeaderboard_SetScores_m4057 (GcLeaderboard_t737 * __this, GcScoreDataU5BU5D_t934* ___scoreDatas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreU5BU5D_t953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		s_Il2CppMethodIntialized = true;
	}
	ScoreU5BU5D_t953* V_0 = {0};
	int32_t V_1 = 0;
	{
		Leaderboard_t738 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		GcScoreDataU5BU5D_t934* L_1 = ___scoreDatas;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t953*)SZArrayNew(ScoreU5BU5D_t953_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002e;
	}

IL_001b:
	{
		ScoreU5BU5D_t953* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t934* L_4 = ___scoreDatas;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t889 * L_6 = GcScoreData_ToScore_m5013(((GcScoreData_t871 *)(GcScoreData_t871 *)SZArrayLdElema(L_4, L_5, sizeof(GcScoreData_t871 ))), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t889 **)(Score_t889 **)SZArrayLdElema(L_2, L_3, sizeof(Score_t889 *))) = (Score_t889 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t934* L_9 = ___scoreDatas;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_t738 * L_10 = (__this->___m_GenericLeaderboard_1);
		ScoreU5BU5D_t953* L_11 = V_0;
		NullCheck(L_10);
		Leaderboard_SetScores_m5066(L_10, (IScoreU5BU5D_t890*)(IScoreU5BU5D_t890*)L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
extern "C" void GcLeaderboard_SetLocalScore_m4058 (GcLeaderboard_t737 * __this, GcScoreData_t871  ___scoreData, const MethodInfo* method)
{
	{
		Leaderboard_t738 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Leaderboard_t738 * L_1 = (__this->___m_GenericLeaderboard_1);
		Score_t889 * L_2 = GcScoreData_ToScore_m5013((&___scoreData), /*hidden argument*/NULL);
		NullCheck(L_1);
		Leaderboard_SetLocalUserScore_m5064(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
// System.UInt32
#include "mscorlib_System_UInt32.h"
extern "C" void GcLeaderboard_SetMaxRange_m4059 (GcLeaderboard_t737 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		Leaderboard_t738 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t738 * L_1 = (__this->___m_GenericLeaderboard_1);
		uint32_t L_2 = ___maxRange;
		NullCheck(L_1);
		Leaderboard_SetMaxRange_m5065(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void GcLeaderboard_SetTitle_m4060 (GcLeaderboard_t737 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		Leaderboard_t738 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t738 * L_1 = (__this->___m_GenericLeaderboard_1);
		String_t* L_2 = ___title;
		NullCheck(L_1);
		Leaderboard_SetTitle_m5067(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GcLeaderboard_Internal_LoadScores_m4061 (GcLeaderboard_t737 * __this, String_t* ___category, int32_t ___from, int32_t ___count, int32_t ___playerScope, int32_t ___timeScope, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScores_m4061_ftn) (GcLeaderboard_t737 *, String_t*, int32_t, int32_t, int32_t, int32_t);
	static GcLeaderboard_Internal_LoadScores_m4061_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScores_m4061_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___category, ___from, ___count, ___playerScope, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
#include "mscorlib_ArrayTypes.h"
extern "C" void GcLeaderboard_Internal_LoadScoresWithUsers_m4062 (GcLeaderboard_t737 * __this, String_t* ___category, int32_t ___timeScope, StringU5BU5D_t110* ___userIDs, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScoresWithUsers_m4062_ftn) (GcLeaderboard_t737 *, String_t*, int32_t, StringU5BU5D_t110*);
	static GcLeaderboard_Internal_LoadScoresWithUsers_m4062_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScoresWithUsers_m4062_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])");
	_il2cpp_icall_func(__this, ___category, ___timeScope, ___userIDs);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C" bool GcLeaderboard_Loading_m4063 (GcLeaderboard_t737 * __this, const MethodInfo* method)
{
	typedef bool (*GcLeaderboard_Loading_m4063_ftn) (GcLeaderboard_t737 *);
	static GcLeaderboard_Loading_m4063_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Loading_m4063_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C" void GcLeaderboard_Dispose_m4064 (GcLeaderboard_t737 * __this, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Dispose_m4064_ftn) (GcLeaderboard_t737 *);
	static GcLeaderboard_Dispose_m4064_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Dispose_m4064_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.RenderSettings
#include "UnityEngine_UnityEngine_RenderSettings.h"
// UnityEngine.RenderSettings
#include "UnityEngine_UnityEngine_RenderSettingsMethodDeclarations.h"
// UnityEngine.FogMode
#include "UnityEngine_UnityEngine_FogMode.h"
// UnityEngine.FogMode UnityEngine.RenderSettings::get_fogMode()
extern "C" int32_t RenderSettings_get_fogMode_m410 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*RenderSettings_get_fogMode_m410_ftn) ();
	static RenderSettings_get_fogMode_m410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderSettings_get_fogMode_m410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderSettings::get_fogMode()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.RenderSettings::get_fogDensity()
extern "C" float RenderSettings_get_fogDensity_m411 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*RenderSettings_get_fogDensity_m411_ftn) ();
	static RenderSettings_get_fogDensity_m411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderSettings_get_fogDensity_m411_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderSettings::get_fogDensity()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.RenderSettings::get_fogStartDistance()
extern "C" float RenderSettings_get_fogStartDistance_m412 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*RenderSettings_get_fogStartDistance_m412_ftn) ();
	static RenderSettings_get_fogStartDistance_m412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderSettings_get_fogStartDistance_m412_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderSettings::get_fogStartDistance()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.RenderSettings::get_fogEndDistance()
extern "C" float RenderSettings_get_fogEndDistance_m413 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*RenderSettings_get_fogEndDistance_m413_ftn) ();
	static RenderSettings_get_fogEndDistance_m413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderSettings_get_fogEndDistance_m413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderSettings::get_fogEndDistance()");
	return _il2cpp_icall_func();
}
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettings.h"
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettingsMethodDeclarations.h"
// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpace.h"
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
extern "C" int32_t QualitySettings_get_activeColorSpace_m381 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*QualitySettings_get_activeColorSpace_m381_ftn) ();
	static QualitySettings_get_activeColorSpace_m381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (QualitySettings_get_activeColorSpace_m381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.QualitySettings::get_activeColorSpace()");
	return _il2cpp_icall_func();
}
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// System.Collections.Generic.List`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_gen_28.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Collections.Generic.List`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_gen_27.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Collections.Generic.List`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
// System.Void UnityEngine.Mesh::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
extern "C" void Mesh__ctor_m439 (Mesh_t98 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m4424(__this, /*hidden argument*/NULL);
		Mesh_Internal_Create_m4065(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
extern "C" void Mesh_Internal_Create_m4065 (Object_t * __this /* static, unused */, Mesh_t98 * ___mono, const MethodInfo* method)
{
	typedef void (*Mesh_Internal_Create_m4065_ftn) (Mesh_t98 *);
	static Mesh_Internal_Create_m4065_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_Internal_Create_m4065_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)");
	_il2cpp_icall_func(___mono);
}
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Mesh_Clear_m4066 (Mesh_t98 * __this, bool ___keepVertexLayout, const MethodInfo* method)
{
	typedef void (*Mesh_Clear_m4066_ftn) (Mesh_t98 *, bool);
	static Mesh_Clear_m4066_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_Clear_m4066_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::Clear(System.Boolean)");
	_il2cpp_icall_func(__this, ___keepVertexLayout);
}
// System.Void UnityEngine.Mesh::Clear()
extern "C" void Mesh_Clear_m3172 (Mesh_t98 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		Mesh_Clear_m4066(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t111* Mesh_get_vertices_m3159 (Mesh_t98 * __this, const MethodInfo* method)
{
	typedef Vector3U5BU5D_t111* (*Mesh_get_vertices_m3159_ftn) (Mesh_t98 *);
	static Mesh_get_vertices_m3159_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_vertices_m3159_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_vertices()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void Mesh_set_vertices_m440 (Mesh_t98 * __this, Vector3U5BU5D_t111* ___value, const MethodInfo* method)
{
	typedef void (*Mesh_set_vertices_m440_ftn) (Mesh_t98 *, Vector3U5BU5D_t111*);
	static Mesh_set_vertices_m440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_set_vertices_m440_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
// System.Collections.Generic.List`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
extern "C" void Mesh_SetVertices_m3173 (Mesh_t98 * __this, List_1_t474 * ___inVertices, const MethodInfo* method)
{
	{
		List_1_t474 * L_0 = ___inVertices;
		Mesh_SetVerticesInternal_m4067(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetVerticesInternal(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void Mesh_SetVerticesInternal_m4067 (Mesh_t98 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*Mesh_SetVerticesInternal_m4067_ftn) (Mesh_t98 *, Object_t *);
	static Mesh_SetVerticesInternal_m4067_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetVerticesInternal_m4067_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C" Vector3U5BU5D_t111* Mesh_get_normals_m3166 (Mesh_t98 * __this, const MethodInfo* method)
{
	typedef Vector3U5BU5D_t111* (*Mesh_get_normals_m3166_ftn) (Mesh_t98 *);
	static Mesh_get_normals_m3166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_normals_m3166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_normals()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetNormals_m3176 (Mesh_t98 * __this, List_1_t474 * ___inNormals, const MethodInfo* method)
{
	{
		List_1_t474 * L_0 = ___inNormals;
		Mesh_SetNormalsInternal_m4068(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetNormalsInternal(System.Object)
extern "C" void Mesh_SetNormalsInternal_m4068 (Mesh_t98 * __this, Object_t * ___normals, const MethodInfo* method)
{
	typedef void (*Mesh_SetNormalsInternal_m4068_ftn) (Mesh_t98 *, Object_t *);
	static Mesh_SetNormalsInternal_m4068_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetNormalsInternal_m4068_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetNormalsInternal(System.Object)");
	_il2cpp_icall_func(__this, ___normals);
}
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C" Vector4U5BU5D_t585* Mesh_get_tangents_m3167 (Mesh_t98 * __this, const MethodInfo* method)
{
	typedef Vector4U5BU5D_t585* (*Mesh_get_tangents_m3167_ftn) (Mesh_t98 *);
	static Mesh_get_tangents_m3167_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_tangents_m3167_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_tangents()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
// System.Collections.Generic.List`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_gen_28.h"
extern "C" void Mesh_SetTangents_m3177 (Mesh_t98 * __this, List_1_t477 * ___inTangents, const MethodInfo* method)
{
	{
		List_1_t477 * L_0 = ___inTangents;
		Mesh_SetTangentsInternal_m4069(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetTangentsInternal(System.Object)
extern "C" void Mesh_SetTangentsInternal_m4069 (Mesh_t98 * __this, Object_t * ___tangents, const MethodInfo* method)
{
	typedef void (*Mesh_SetTangentsInternal_m4069_ftn) (Mesh_t98 *, Object_t *);
	static Mesh_SetTangentsInternal_m4069_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetTangentsInternal_m4069_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetTangentsInternal(System.Object)");
	_il2cpp_icall_func(__this, ___tangents);
}
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" Vector2U5BU5D_t103* Mesh_get_uv_m3163 (Mesh_t98 * __this, const MethodInfo* method)
{
	typedef Vector2U5BU5D_t103* (*Mesh_get_uv_m3163_ftn) (Mesh_t98 *);
	static Mesh_get_uv_m3163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_uv_m3163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_uv()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m442 (Mesh_t98 * __this, Vector2U5BU5D_t103* ___value, const MethodInfo* method)
{
	typedef void (*Mesh_set_uv_m442_ftn) (Mesh_t98 *, Vector2U5BU5D_t103*);
	static Mesh_set_uv_m442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_set_uv_m442_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C" Vector2U5BU5D_t103* Mesh_get_uv2_m3165 (Mesh_t98 * __this, const MethodInfo* method)
{
	typedef Vector2U5BU5D_t103* (*Mesh_get_uv2_m3165_ftn) (Mesh_t98 *);
	static Mesh_get_uv2_m3165_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_uv2_m3165_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_uv2()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv2_m443 (Mesh_t98 * __this, Vector2U5BU5D_t103* ___value, const MethodInfo* method)
{
	typedef void (*Mesh_set_uv2_m443_ftn) (Mesh_t98 *, Vector2U5BU5D_t103*);
	static Mesh_set_uv2_m443_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_set_uv2_m443_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.List`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_gen_27.h"
extern "C" void Mesh_SetUVs_m3175 (Mesh_t98 * __this, int32_t ___channel, List_1_t476 * ___uvs, const MethodInfo* method)
{
	{
		List_1_t476 * L_0 = ___uvs;
		int32_t L_1 = ___channel;
		Mesh_SetUVInternal_m4070(__this, L_0, L_1, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetUVInternal(System.Object,System.Int32,System.Int32)
extern "C" void Mesh_SetUVInternal_m4070 (Mesh_t98 * __this, Object_t * ___uvs, int32_t ___channel, int32_t ___dim, const MethodInfo* method)
{
	typedef void (*Mesh_SetUVInternal_m4070_ftn) (Mesh_t98 *, Object_t *, int32_t, int32_t);
	static Mesh_SetUVInternal_m4070_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetUVInternal_m4070_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetUVInternal(System.Object,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___uvs, ___channel, ___dim);
}
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C" Color32U5BU5D_t584* Mesh_get_colors32_m3161 (Mesh_t98 * __this, const MethodInfo* method)
{
	typedef Color32U5BU5D_t584* (*Mesh_get_colors32_m3161_ftn) (Mesh_t98 *);
	static Mesh_get_colors32_m3161_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_get_colors32_m3161_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_colors32()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
// System.Collections.Generic.List`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
extern "C" void Mesh_SetColors_m3174 (Mesh_t98 * __this, List_1_t475 * ___inColors, const MethodInfo* method)
{
	{
		List_1_t475 * L_0 = ___inColors;
		Mesh_SetColors32Internal_m4071(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetColors32Internal(System.Object)
extern "C" void Mesh_SetColors32Internal_m4071 (Mesh_t98 * __this, Object_t * ___colors, const MethodInfo* method)
{
	typedef void (*Mesh_SetColors32Internal_m4071_ftn) (Mesh_t98 *, Object_t *);
	static Mesh_SetColors32Internal_m4071_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetColors32Internal_m4071_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetColors32Internal(System.Object)");
	_il2cpp_icall_func(__this, ___colors);
}
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" void Mesh_RecalculateBounds_m3179 (Mesh_t98 * __this, const MethodInfo* method)
{
	typedef void (*Mesh_RecalculateBounds_m3179_ftn) (Mesh_t98 *);
	static Mesh_RecalculateBounds_m3179_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_RecalculateBounds_m3179_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::RecalculateBounds()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
#include "mscorlib_ArrayTypes.h"
extern "C" void Mesh_set_triangles_m441 (Mesh_t98 * __this, Int32U5BU5D_t109* ___value, const MethodInfo* method)
{
	typedef void (*Mesh_set_triangles_m441_ftn) (Mesh_t98 *, Int32U5BU5D_t109*);
	static Mesh_set_triangles_m441_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_set_triangles_m441_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::set_triangles(System.Int32[])");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
extern "C" void Mesh_SetTriangles_m3178 (Mesh_t98 * __this, List_1_t478 * ___inTriangles, int32_t ___submesh, const MethodInfo* method)
{
	{
		List_1_t478 * L_0 = ___inTriangles;
		int32_t L_1 = ___submesh;
		Mesh_SetTrianglesInternal_m4072(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)
extern "C" void Mesh_SetTrianglesInternal_m4072 (Mesh_t98 * __this, Object_t * ___triangles, int32_t ___submesh, const MethodInfo* method)
{
	typedef void (*Mesh_SetTrianglesInternal_m4072_ftn) (Mesh_t98 *, Object_t *, int32_t);
	static Mesh_SetTrianglesInternal_m4072_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_SetTrianglesInternal_m4072_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)");
	_il2cpp_icall_func(__this, ___triangles, ___submesh);
}
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C" Int32U5BU5D_t109* Mesh_GetIndices_m3169 (Mesh_t98 * __this, int32_t ___submesh, const MethodInfo* method)
{
	typedef Int32U5BU5D_t109* (*Mesh_GetIndices_m3169_ftn) (Mesh_t98 *, int32_t);
	static Mesh_GetIndices_m3169_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_GetIndices_m3169_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::GetIndices(System.Int32)");
	return _il2cpp_icall_func(__this, ___submesh);
}
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeight.h"
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeightMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// System.Single UnityEngine.BoneWeight::get_weight0()
extern "C" float BoneWeight_get_weight0_m4073 (BoneWeight_t741 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight0_0);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight0(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void BoneWeight_set_weight0_m4074 (BoneWeight_t741 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight0_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight1()
extern "C" float BoneWeight_get_weight1_m4075 (BoneWeight_t741 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight1_1);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight1(System.Single)
extern "C" void BoneWeight_set_weight1_m4076 (BoneWeight_t741 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight1_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight2()
extern "C" float BoneWeight_get_weight2_m4077 (BoneWeight_t741 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight2_2);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight2(System.Single)
extern "C" void BoneWeight_set_weight2_m4078 (BoneWeight_t741 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight2_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight3()
extern "C" float BoneWeight_get_weight3_m4079 (BoneWeight_t741 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight3_3);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight3(System.Single)
extern "C" void BoneWeight_set_weight3_m4080 (BoneWeight_t741 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight3_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex0()
extern "C" int32_t BoneWeight_get_boneIndex0_m4081 (BoneWeight_t741 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex0_4);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void BoneWeight_set_boneIndex0_m4082 (BoneWeight_t741 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex0_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex1()
extern "C" int32_t BoneWeight_get_boneIndex1_m4083 (BoneWeight_t741 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex1_5);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex1(System.Int32)
extern "C" void BoneWeight_set_boneIndex1_m4084 (BoneWeight_t741 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex1_5 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex2()
extern "C" int32_t BoneWeight_get_boneIndex2_m4085 (BoneWeight_t741 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex2_6);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex2(System.Int32)
extern "C" void BoneWeight_set_boneIndex2_m4086 (BoneWeight_t741 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex2_6 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex3()
extern "C" int32_t BoneWeight_get_boneIndex3_m4087 (BoneWeight_t741 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex3_7);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex3(System.Int32)
extern "C" void BoneWeight_set_boneIndex3_m4088 (BoneWeight_t741 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex3_7 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::GetHashCode()
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeightMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t BoneWeight_GetHashCode_m4089 (BoneWeight_t741 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m4081(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m5196((&V_0), /*hidden argument*/NULL);
		int32_t L_2 = BoneWeight_get_boneIndex1_m4083(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Int32_GetHashCode_m5196((&V_1), /*hidden argument*/NULL);
		int32_t L_4 = BoneWeight_get_boneIndex2_m4085(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Int32_GetHashCode_m5196((&V_2), /*hidden argument*/NULL);
		int32_t L_6 = BoneWeight_get_boneIndex3_m4087(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Int32_GetHashCode_m5196((&V_3), /*hidden argument*/NULL);
		float L_8 = BoneWeight_get_weight0_m4073(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		int32_t L_9 = Single_GetHashCode_m5197((&V_4), /*hidden argument*/NULL);
		float L_10 = BoneWeight_get_weight1_m4075(__this, /*hidden argument*/NULL);
		V_5 = L_10;
		int32_t L_11 = Single_GetHashCode_m5197((&V_5), /*hidden argument*/NULL);
		float L_12 = BoneWeight_get_weight2_m4077(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		int32_t L_13 = Single_GetHashCode_m5197((&V_6), /*hidden argument*/NULL);
		float L_14 = BoneWeight_get_weight3_m4079(__this, /*hidden argument*/NULL);
		V_7 = L_14;
		int32_t L_15 = Single_GetHashCode_m5197((&V_7), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_13>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_15>>(int32_t)3))));
	}
}
// System.Boolean UnityEngine.BoneWeight::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern TypeInfo* BoneWeight_t741_il2cpp_TypeInfo_var;
extern TypeInfo* Vector4_t100_il2cpp_TypeInfo_var;
extern "C" bool BoneWeight_Equals_m4090 (BoneWeight_t741 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoneWeight_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		Vector4_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	BoneWeight_t741  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector4_t100  V_5 = {0};
	int32_t G_B8_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, BoneWeight_t741_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(BoneWeight_t741 *)((BoneWeight_t741 *)UnBox (L_1, BoneWeight_t741_il2cpp_TypeInfo_var))));
		int32_t L_2 = BoneWeight_get_boneIndex0_m4081(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = BoneWeight_get_boneIndex0_m4081((&V_0), /*hidden argument*/NULL);
		bool L_4 = Int32_Equals_m5198((&V_1), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = BoneWeight_get_boneIndex1_m4083(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = BoneWeight_get_boneIndex1_m4083((&V_0), /*hidden argument*/NULL);
		bool L_7 = Int32_Equals_m5198((&V_2), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_8 = BoneWeight_get_boneIndex2_m4085(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = BoneWeight_get_boneIndex2_m4085((&V_0), /*hidden argument*/NULL);
		bool L_10 = Int32_Equals_m5198((&V_3), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_11 = BoneWeight_get_boneIndex3_m4087(__this, /*hidden argument*/NULL);
		V_4 = L_11;
		int32_t L_12 = BoneWeight_get_boneIndex3_m4087((&V_0), /*hidden argument*/NULL);
		bool L_13 = Int32_Equals_m5198((&V_4), L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		float L_14 = BoneWeight_get_weight0_m4073(__this, /*hidden argument*/NULL);
		float L_15 = BoneWeight_get_weight1_m4075(__this, /*hidden argument*/NULL);
		float L_16 = BoneWeight_get_weight2_m4077(__this, /*hidden argument*/NULL);
		float L_17 = BoneWeight_get_weight3_m4079(__this, /*hidden argument*/NULL);
		Vector4__ctor_m284((&V_5), L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		float L_18 = BoneWeight_get_weight0_m4073((&V_0), /*hidden argument*/NULL);
		float L_19 = BoneWeight_get_weight1_m4075((&V_0), /*hidden argument*/NULL);
		float L_20 = BoneWeight_get_weight2_m4077((&V_0), /*hidden argument*/NULL);
		float L_21 = BoneWeight_get_weight3_m4079((&V_0), /*hidden argument*/NULL);
		Vector4_t100  L_22 = {0};
		Vector4__ctor_m284(&L_22, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		Vector4_t100  L_23 = L_22;
		Object_t * L_24 = Box(Vector4_t100_il2cpp_TypeInfo_var, &L_23);
		bool L_25 = Vector4_Equals_m4253((&V_5), L_24, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B8_0 = 0;
	}

IL_00cc:
	{
		return G_B8_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Equality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeight.h"
extern "C" bool BoneWeight_op_Equality_m4091 (Object_t * __this /* static, unused */, BoneWeight_t741  ___lhs, BoneWeight_t741  ___rhs, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m4081((&___lhs), /*hidden argument*/NULL);
		int32_t L_1 = BoneWeight_get_boneIndex0_m4081((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = BoneWeight_get_boneIndex1_m4083((&___lhs), /*hidden argument*/NULL);
		int32_t L_3 = BoneWeight_get_boneIndex1_m4083((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_4 = BoneWeight_get_boneIndex2_m4085((&___lhs), /*hidden argument*/NULL);
		int32_t L_5 = BoneWeight_get_boneIndex2_m4085((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = BoneWeight_get_boneIndex3_m4087((&___lhs), /*hidden argument*/NULL);
		int32_t L_7 = BoneWeight_get_boneIndex3_m4087((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0095;
		}
	}
	{
		float L_8 = BoneWeight_get_weight0_m4073((&___lhs), /*hidden argument*/NULL);
		float L_9 = BoneWeight_get_weight1_m4075((&___lhs), /*hidden argument*/NULL);
		float L_10 = BoneWeight_get_weight2_m4077((&___lhs), /*hidden argument*/NULL);
		float L_11 = BoneWeight_get_weight3_m4079((&___lhs), /*hidden argument*/NULL);
		Vector4_t100  L_12 = {0};
		Vector4__ctor_m284(&L_12, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		float L_13 = BoneWeight_get_weight0_m4073((&___rhs), /*hidden argument*/NULL);
		float L_14 = BoneWeight_get_weight1_m4075((&___rhs), /*hidden argument*/NULL);
		float L_15 = BoneWeight_get_weight2_m4077((&___rhs), /*hidden argument*/NULL);
		float L_16 = BoneWeight_get_weight3_m4079((&___rhs), /*hidden argument*/NULL);
		Vector4_t100  L_17 = {0};
		Vector4__ctor_m284(&L_17, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		bool L_18 = Vector4_op_Equality_m4258(NULL /*static, unused*/, L_12, L_17, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_18));
		goto IL_0096;
	}

IL_0095:
	{
		G_B6_0 = 0;
	}

IL_0096:
	{
		return G_B6_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Inequality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
extern "C" bool BoneWeight_op_Inequality_m4092 (Object_t * __this /* static, unused */, BoneWeight_t741  ___lhs, BoneWeight_t741  ___rhs, const MethodInfo* method)
{
	{
		BoneWeight_t741  L_0 = ___lhs;
		BoneWeight_t741  L_1 = ___rhs;
		bool L_2 = BoneWeight_op_Equality_m4091(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t5 * Renderer_get_material_m1192 (Renderer_t249 * __this, const MethodInfo* method)
{
	typedef Material_t5 * (*Renderer_get_material_m1192_ftn) (Renderer_t249 *);
	static Renderer_get_material_m1192_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_material_m1192_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_material()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C" Material_t5 * Renderer_get_sharedMaterial_m1232 (Renderer_t249 * __this, const MethodInfo* method)
{
	typedef Material_t5 * (*Renderer_get_sharedMaterial_m1232_ftn) (Renderer_t249 *);
	static Renderer_get_sharedMaterial_m1232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sharedMaterial_m1232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sharedMaterial()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m2747 (Renderer_t249 * __this, const MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingLayerID_m2747_ftn) (Renderer_t249 *);
	static Renderer_get_sortingLayerID_m2747_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingLayerID_m2747_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m2748 (Renderer_t249 * __this, const MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingOrder_m2748_ftn) (Renderer_t249 *);
	static Renderer_get_sortingOrder_m2748_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingOrder_m2748_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.InternalDrawTextureArguments
#include "UnityEngine_UnityEngine_InternalDrawTextureArguments.h"
// UnityEngine.InternalDrawTextureArguments
#include "UnityEngine_UnityEngine_InternalDrawTextureArgumentsMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_Graphics.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.MeshTopology
#include "UnityEngine_UnityEngine_MeshTopology.h"
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBuffer.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern "C" void Graphics_DrawMeshNow_m405 (Object_t * __this /* static, unused */, Mesh_t98 * ___mesh, Matrix4x4_t31  ___matrix, const MethodInfo* method)
{
	{
		Mesh_t98 * L_0 = ___mesh;
		Matrix4x4_t31  L_1 = ___matrix;
		Graphics_Internal_DrawMeshNow2_m4093(NULL /*static, unused*/, L_0, L_1, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Graphics_Internal_DrawMeshNow2_m4093 (Object_t * __this /* static, unused */, Mesh_t98 * ___mesh, Matrix4x4_t31  ___matrix, int32_t ___materialIndex, const MethodInfo* method)
{
	{
		Mesh_t98 * L_0 = ___mesh;
		int32_t L_1 = ___materialIndex;
		Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m4094(NULL /*static, unused*/, L_0, (&___matrix), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C" void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m4094 (Object_t * __this /* static, unused */, Mesh_t98 * ___mesh, Matrix4x4_t31 * ___matrix, int32_t ___materialIndex, const MethodInfo* method)
{
	typedef void (*Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m4094_ftn) (Mesh_t98 *, Matrix4x4_t31 *, int32_t);
	static Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m4094_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m4094_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)");
	_il2cpp_icall_func(___mesh, ___matrix, ___materialIndex);
}
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
// UnityEngine.MeshTopology
#include "UnityEngine_UnityEngine_MeshTopology.h"
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBuffer.h"
extern "C" void Graphics_DrawProceduralIndirect_m399 (Object_t * __this /* static, unused */, int32_t ___topology, ComputeBuffer_t49 * ___bufferWithArgs, int32_t ___argsOffset, const MethodInfo* method)
{
	typedef void (*Graphics_DrawProceduralIndirect_m399_ftn) (int32_t, ComputeBuffer_t49 *, int32_t);
	static Graphics_DrawProceduralIndirect_m399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_DrawProceduralIndirect_m399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)");
	_il2cpp_icall_func(___topology, ___bufferWithArgs, ___argsOffset);
}
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C" void Graphics_DrawTexture_m4095 (Object_t * __this /* static, unused */, InternalDrawTextureArguments_t742 * ___arguments, const MethodInfo* method)
{
	typedef void (*Graphics_DrawTexture_m4095_ftn) (InternalDrawTextureArguments_t742 *);
	static Graphics_DrawTexture_m4095_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_DrawTexture_m4095_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)");
	_il2cpp_icall_func(___arguments);
}
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
extern "C" void Graphics_Blit_m267 (Object_t * __this /* static, unused */, Texture_t40 * ___source, RenderTexture_t55 * ___dest, const MethodInfo* method)
{
	typedef void (*Graphics_Blit_m267_ftn) (Texture_t40 *, RenderTexture_t55 *);
	static Graphics_Blit_m267_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Blit_m267_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___source, ___dest);
}
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void Graphics_Blit_m270 (Object_t * __this /* static, unused */, Texture_t40 * ___source, RenderTexture_t55 * ___dest, Material_t5 * ___mat, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		Texture_t40 * L_0 = ___source;
		RenderTexture_t55 * L_1 = ___dest;
		Material_t5 * L_2 = ___mat;
		int32_t L_3 = V_0;
		Graphics_Blit_m275(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m275 (Object_t * __this /* static, unused */, Texture_t40 * ___source, RenderTexture_t55 * ___dest, Material_t5 * ___mat, int32_t ___pass, const MethodInfo* method)
{
	{
		Texture_t40 * L_0 = ___source;
		RenderTexture_t55 * L_1 = ___dest;
		Material_t5 * L_2 = ___mat;
		int32_t L_3 = ___pass;
		Graphics_Internal_BlitMaterial_m4096(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Graphics_Internal_BlitMaterial_m4096 (Object_t * __this /* static, unused */, Texture_t40 * ___source, RenderTexture_t55 * ___dest, Material_t5 * ___mat, int32_t ___pass, bool ___setRT, const MethodInfo* method)
{
	typedef void (*Graphics_Internal_BlitMaterial_m4096_ftn) (Texture_t40 *, RenderTexture_t55 *, Material_t5 *, int32_t, bool);
	static Graphics_Internal_BlitMaterial_m4096_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Internal_BlitMaterial_m4096_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___source, ___dest, ___mat, ___pass, ___setRT);
}
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void Graphics_BlitMultiTap_m306 (Object_t * __this /* static, unused */, Texture_t40 * ___source, RenderTexture_t55 * ___dest, Material_t5 * ___mat, Vector2U5BU5D_t103* ___offsets, const MethodInfo* method)
{
	{
		Texture_t40 * L_0 = ___source;
		RenderTexture_t55 * L_1 = ___dest;
		Material_t5 * L_2 = ___mat;
		Vector2U5BU5D_t103* L_3 = ___offsets;
		Graphics_Internal_BlitMultiTap_m4097(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_Internal_BlitMultiTap_m4097 (Object_t * __this /* static, unused */, Texture_t40 * ___source, RenderTexture_t55 * ___dest, Material_t5 * ___mat, Vector2U5BU5D_t103* ___offsets, const MethodInfo* method)
{
	typedef void (*Graphics_Internal_BlitMultiTap_m4097_ftn) (Texture_t40 *, RenderTexture_t55 *, Material_t5 *, Vector2U5BU5D_t103*);
	static Graphics_Internal_BlitMultiTap_m4097_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Internal_BlitMultiTap_m4097_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])");
	_il2cpp_icall_func(___source, ___dest, ___mat, ___offsets);
}
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C" void Graphics_Internal_SetNullRT_m4098 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*Graphics_Internal_SetNullRT_m4098_ftn) ();
	static Graphics_Internal_SetNullRT_m4098_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Internal_SetNullRT_m4098_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Internal_SetNullRT()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,System.Int32)
extern "C" void Graphics_Internal_SetRTSimple_m4099 (Object_t * __this /* static, unused */, RenderBuffer_t872 * ___color, RenderBuffer_t872 * ___depth, int32_t ___mip, int32_t ___face, const MethodInfo* method)
{
	typedef void (*Graphics_Internal_SetRTSimple_m4099_ftn) (RenderBuffer_t872 *, RenderBuffer_t872 *, int32_t, int32_t);
	static Graphics_Internal_SetRTSimple_m4099_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Internal_SetRTSimple_m4099_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,System.Int32)");
	_il2cpp_icall_func(___color, ___depth, ___mip, ___face);
}
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_SetRandomWriteTarget_m392 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t49 * ___uav, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		ComputeBuffer_t49 * L_1 = ___uav;
		Graphics_Internal_SetRandomWriteTargetBuffer_m4100(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C" void Graphics_ClearRandomWriteTargets_m393 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*Graphics_ClearRandomWriteTargets_m393_ftn) ();
	static Graphics_ClearRandomWriteTargets_m393_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_ClearRandomWriteTargets_m393_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::ClearRandomWriteTargets()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_Internal_SetRandomWriteTargetBuffer_m4100 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t49 * ___uav, const MethodInfo* method)
{
	typedef void (*Graphics_Internal_SetRandomWriteTargetBuffer_m4100_ftn) (int32_t, ComputeBuffer_t49 *);
	static Graphics_Internal_SetRandomWriteTargetBuffer_m4100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Internal_SetRandomWriteTargetBuffer_m4100_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)");
	_il2cpp_icall_func(___index, ___uav);
}
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,System.Int32)
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
extern "C" void Graphics_SetRenderTargetImpl_m4101 (Object_t * __this /* static, unused */, RenderBuffer_t872  ___colorBuffer, RenderBuffer_t872  ___depthBuffer, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method)
{
	RenderBuffer_t872  V_0 = {0};
	RenderBuffer_t872  V_1 = {0};
	{
		RenderBuffer_t872  L_0 = ___colorBuffer;
		V_0 = L_0;
		RenderBuffer_t872  L_1 = ___depthBuffer;
		V_1 = L_1;
		int32_t L_2 = ___mipLevel;
		int32_t L_3 = ___face;
		Graphics_Internal_SetRTSimple_m4099(NULL /*static, unused*/, (&V_0), (&V_1), L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,System.Int32)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern "C" void Graphics_SetRenderTargetImpl_m4102 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___rt, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method)
{
	{
		RenderTexture_t55 * L_0 = ___rt;
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		RenderTexture_t55 * L_2 = ___rt;
		NullCheck(L_2);
		RenderBuffer_t872  L_3 = RenderTexture_get_colorBuffer_m4141(L_2, /*hidden argument*/NULL);
		RenderTexture_t55 * L_4 = ___rt;
		NullCheck(L_4);
		RenderBuffer_t872  L_5 = RenderTexture_get_depthBuffer_m4142(L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___mipLevel;
		int32_t L_7 = ___face;
		Graphics_SetRenderTargetImpl_m4101(NULL /*static, unused*/, L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_0023:
	{
		Graphics_Internal_SetNullRT_m4098(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C" void Graphics_SetRenderTarget_m286 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___rt, const MethodInfo* method)
{
	{
		RenderTexture_t55 * L_0 = ___rt;
		Graphics_SetRenderTargetImpl_m4102(NULL /*static, unused*/, L_0, 0, (-1), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_Screen.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
extern "C" Resolution_t688  Screen_get_currentResolution_m3833 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Resolution_t688  (*Screen_get_currentResolution_m3833_ftn) ();
	static Screen_get_currentResolution_m3833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_currentResolution_m3833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_currentResolution()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Screen::get_width()
extern "C" int32_t Screen_get_width_m428 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Screen_get_width_m428_ftn) ();
	static Screen_get_width_m428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_width_m428_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_width()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Screen::get_height()
extern "C" int32_t Screen_get_height_m429 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Screen_get_height_m429_ftn) ();
	static Screen_get_height_m429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_height_m429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_height()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Screen::get_dpi()
extern "C" float Screen_get_dpi_m3124 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Screen_get_dpi_m3124_ftn) ();
	static Screen_get_dpi_m3124_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_dpi_m3124_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_dpi()");
	return _il2cpp_icall_func();
}
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GL.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void GL_Vertex3_m417 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	typedef void (*GL_Vertex3_m417_ftn) (float, float, float);
	static GL_Vertex3_m417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_Vertex3_m417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(___x, ___y, ___z);
}
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
extern "C" void GL_TexCoord2_m434 (Object_t * __this /* static, unused */, float ___x, float ___y, const MethodInfo* method)
{
	typedef void (*GL_TexCoord2_m434_ftn) (float, float);
	static GL_TexCoord2_m434_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_TexCoord2_m434_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::TexCoord2(System.Single,System.Single)");
	_il2cpp_icall_func(___x, ___y);
}
// System.Void UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GL_MultiTexCoord2_m416 (Object_t * __this /* static, unused */, int32_t ___unit, float ___x, float ___y, const MethodInfo* method)
{
	typedef void (*GL_MultiTexCoord2_m416_ftn) (int32_t, float, float);
	static GL_MultiTexCoord2_m416_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_MultiTexCoord2_m416_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(___unit, ___x, ___y);
}
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C" void GL_Begin_m415 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*GL_Begin_m415_ftn) (int32_t);
	static GL_Begin_m415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_Begin_m415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::Begin(System.Int32)");
	_il2cpp_icall_func(___mode);
}
// System.Void UnityEngine.GL::End()
extern "C" void GL_End_m418 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GL_End_m418_ftn) ();
	static GL_End_m418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_End_m418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::End()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GL::LoadOrtho()
extern "C" void GL_LoadOrtho_m414 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GL_LoadOrtho_m414_ftn) ();
	static GL_LoadOrtho_m414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_LoadOrtho_m414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::LoadOrtho()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
extern "C" void GL_LoadProjectionMatrix_m436 (Object_t * __this /* static, unused */, Matrix4x4_t31  ___mat, const MethodInfo* method)
{
	{
		GL_INTERNAL_CALL_LoadProjectionMatrix_m4103(NULL /*static, unused*/, (&___mat), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GL::INTERNAL_CALL_LoadProjectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void GL_INTERNAL_CALL_LoadProjectionMatrix_m4103 (Object_t * __this /* static, unused */, Matrix4x4_t31 * ___mat, const MethodInfo* method)
{
	typedef void (*GL_INTERNAL_CALL_LoadProjectionMatrix_m4103_ftn) (Matrix4x4_t31 *);
	static GL_INTERNAL_CALL_LoadProjectionMatrix_m4103_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_INTERNAL_CALL_LoadProjectionMatrix_m4103_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::INTERNAL_CALL_LoadProjectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___mat);
}
// System.Void UnityEngine.GL::LoadIdentity()
extern "C" void GL_LoadIdentity_m404 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GL_LoadIdentity_m404_ftn) ();
	static GL_LoadIdentity_m404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_LoadIdentity_m404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::LoadIdentity()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GL::PushMatrix()
extern "C" void GL_PushMatrix_m403 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GL_PushMatrix_m403_ftn) ();
	static GL_PushMatrix_m403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_PushMatrix_m403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::PushMatrix()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GL::PopMatrix()
extern "C" void GL_PopMatrix_m406 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GL_PopMatrix_m406_ftn) ();
	static GL_PopMatrix_m406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_PopMatrix_m406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::PopMatrix()");
	_il2cpp_icall_func();
}
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" Matrix4x4_t31  GL_GetGPUProjectionMatrix_m315 (Object_t * __this /* static, unused */, Matrix4x4_t31  ___proj, bool ___renderIntoTexture, const MethodInfo* method)
{
	{
		bool L_0 = ___renderIntoTexture;
		Matrix4x4_t31  L_1 = GL_INTERNAL_CALL_GetGPUProjectionMatrix_m4104(NULL /*static, unused*/, (&___proj), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.GL::INTERNAL_CALL_GetGPUProjectionMatrix(UnityEngine.Matrix4x4&,System.Boolean)
extern "C" Matrix4x4_t31  GL_INTERNAL_CALL_GetGPUProjectionMatrix_m4104 (Object_t * __this /* static, unused */, Matrix4x4_t31 * ___proj, bool ___renderIntoTexture, const MethodInfo* method)
{
	typedef Matrix4x4_t31  (*GL_INTERNAL_CALL_GetGPUProjectionMatrix_m4104_ftn) (Matrix4x4_t31 *, bool);
	static GL_INTERNAL_CALL_GetGPUProjectionMatrix_m4104_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_INTERNAL_CALL_GetGPUProjectionMatrix_m4104_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::INTERNAL_CALL_GetGPUProjectionMatrix(UnityEngine.Matrix4x4&,System.Boolean)");
	return _il2cpp_icall_func(___proj, ___renderIntoTexture);
}
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void GL_Clear_m288 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12  ___backgroundColor, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		bool L_0 = ___clearDepth;
		bool L_1 = ___clearColor;
		Color_t12  L_2 = ___backgroundColor;
		float L_3 = V_0;
		GL_Clear_m4105(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Clear_m4105 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12  ___backgroundColor, float ___depth, const MethodInfo* method)
{
	{
		bool L_0 = ___clearDepth;
		bool L_1 = ___clearColor;
		Color_t12  L_2 = ___backgroundColor;
		float L_3 = ___depth;
		GL_Internal_Clear_m4106(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Internal_Clear_m4106 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12  ___backgroundColor, float ___depth, const MethodInfo* method)
{
	{
		bool L_0 = ___clearDepth;
		bool L_1 = ___clearColor;
		float L_2 = ___depth;
		GL_INTERNAL_CALL_Internal_Clear_m4107(NULL /*static, unused*/, L_0, L_1, (&___backgroundColor), L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C" void GL_INTERNAL_CALL_Internal_Clear_m4107 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12 * ___backgroundColor, float ___depth, const MethodInfo* method)
{
	typedef void (*GL_INTERNAL_CALL_Internal_Clear_m4107_ftn) (bool, bool, Color_t12 *, float);
	static GL_INTERNAL_CALL_Internal_Clear_m4107_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_INTERNAL_CALL_Internal_Clear_m4107_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)");
	_il2cpp_icall_func(___clearDepth, ___clearColor, ___backgroundColor, ___depth);
}
// System.Void UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern "C" void GL_ClearWithSkybox_m447 (Object_t * __this /* static, unused */, bool ___clearDepth, Camera_t32 * ___camera, const MethodInfo* method)
{
	typedef void (*GL_ClearWithSkybox_m447_ftn) (bool, Camera_t32 *);
	static GL_ClearWithSkybox_m447_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_ClearWithSkybox_m447_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)");
	_il2cpp_icall_func(___clearDepth, ___camera);
}
// UnityEngine.ImageEffectTransformsToLDR
#include "UnityEngine_UnityEngine_ImageEffectTransformsToLDR.h"
// UnityEngine.ImageEffectTransformsToLDR
#include "UnityEngine_UnityEngine_ImageEffectTransformsToLDRMethodDeclarations.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Void UnityEngine.ImageEffectTransformsToLDR::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ImageEffectTransformsToLDR__ctor_m4108 (ImageEffectTransformsToLDR_t746 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.ImageEffectOpaque
#include "UnityEngine_UnityEngine_ImageEffectOpaque.h"
// UnityEngine.ImageEffectOpaque
#include "UnityEngine_UnityEngine_ImageEffectOpaqueMethodDeclarations.h"
// System.Void UnityEngine.ImageEffectOpaque::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ImageEffectOpaque__ctor_m4109 (ImageEffectOpaque_t748 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElementMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
extern "C" GUIElement_t749 * GUILayer_HitTest_m4110 (GUILayer_t750 * __this, Vector3_t28  ___screenPosition, const MethodInfo* method)
{
	{
		GUIElement_t749 * L_0 = GUILayer_INTERNAL_CALL_HitTest_m4111(NULL /*static, unused*/, __this, (&___screenPosition), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
extern "C" GUIElement_t749 * GUILayer_INTERNAL_CALL_HitTest_m4111 (Object_t * __this /* static, unused */, GUILayer_t750 * ___self, Vector3_t28 * ___screenPosition, const MethodInfo* method)
{
	typedef GUIElement_t749 * (*GUILayer_INTERNAL_CALL_HitTest_m4111_ftn) (GUILayer_t750 *, Vector3_t28 *);
	static GUILayer_INTERNAL_CALL_HitTest_m4111_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayer_INTERNAL_CALL_HitTest_m4111_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___screenPosition);
}
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapMode.h"
// System.Void UnityEngine.Texture::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void Texture__ctor_m4112 (Texture_t40 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m4424(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
extern "C" int32_t Texture_Internal_GetWidth_m4113 (Object_t * __this /* static, unused */, Texture_t40 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetWidth_m4113_ftn) (Texture_t40 *);
	static Texture_Internal_GetWidth_m4113_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetWidth_m4113_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetHeight_m4114 (Object_t * __this /* static, unused */, Texture_t40 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetHeight_m4114_ftn) (Texture_t40 *);
	static Texture_Internal_GetHeight_m4114_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetHeight_m4114_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::get_width()
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern "C" int32_t Texture_get_width_m4115 (Texture_t40 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetWidth_m4113(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Texture::set_width(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern TypeInfo* Exception_t236_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral371;
extern "C" void Texture_set_width_m4116 (Texture_t40 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		_stringLiteral371 = il2cpp_codegen_string_literal_from_index(371);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t236 * L_0 = (Exception_t236 *)il2cpp_codegen_object_new (Exception_t236_il2cpp_TypeInfo_var);
		Exception__ctor_m5200(L_0, _stringLiteral371, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Int32 UnityEngine.Texture::get_height()
extern "C" int32_t Texture_get_height_m4117 (Texture_t40 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetHeight_m4114(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Texture::set_height(System.Int32)
extern TypeInfo* Exception_t236_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral371;
extern "C" void Texture_set_height_m4118 (Texture_t40 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		_stringLiteral371 = il2cpp_codegen_string_literal_from_index(371);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t236 * L_0 = (Exception_t236 *)il2cpp_codegen_object_new (Exception_t236_il2cpp_TypeInfo_var);
		Exception__ctor_m5200(L_0, _stringLiteral371, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
extern "C" void Texture_set_filterMode_m298 (Texture_t40 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Texture_set_filterMode_m298_ftn) (Texture_t40 *, int32_t);
	static Texture_set_filterMode_m298_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_set_filterMode_m298_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
extern "C" void Texture_set_anisoLevel_m271 (Texture_t40 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Texture_set_anisoLevel_m271_ftn) (Texture_t40 *, int32_t);
	static Texture_set_anisoLevel_m271_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_set_anisoLevel_m271_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::set_anisoLevel(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapMode.h"
extern "C" void Texture_set_wrapMode_m324 (Texture_t40 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Texture_set_wrapMode_m324_ftn) (Texture_t40 *, int32_t);
	static Texture_set_wrapMode_m324_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_set_wrapMode_m324_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.Texture::get_texelSize()
extern "C" Vector2_t85  Texture_get_texelSize_m420 (Texture_t40 * __this, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		Texture_INTERNAL_get_texelSize_m4119(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Texture::INTERNAL_get_texelSize(UnityEngine.Vector2&)
extern "C" void Texture_INTERNAL_get_texelSize_m4119 (Texture_t40 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*Texture_INTERNAL_get_texelSize_m4119_ftn) (Texture_t40 *, Vector2_t85 *);
	static Texture_INTERNAL_get_texelSize_m4119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_INTERNAL_get_texelSize_m4119_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::INTERNAL_get_texelSize(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void Texture2D__ctor_m1247 (Texture2D_t13 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture__ctor_m4112(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		Texture2D_Internal_Create_m4120(NULL /*static, unused*/, __this, L_0, L_1, 5, 1, 0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void Texture2D__ctor_m366 (Texture2D_t13 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture__ctor_m4112(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		int32_t L_2 = ___format;
		bool L_3 = ___mipmap;
		bool L_4 = ___linear;
		IntPtr_t L_5 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		Texture2D_Internal_Create_m4120(NULL /*static, unused*/, __this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Texture2D_Internal_Create_m4120 (Object_t * __this /* static, unused */, Texture2D_t13 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method)
{
	typedef void (*Texture2D_Internal_Create_m4120_ftn) (Texture2D_t13 *, int32_t, int32_t, int32_t, bool, bool, IntPtr_t);
	static Texture2D_Internal_Create_m4120_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_Internal_Create_m4120_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)");
	_il2cpp_icall_func(___mono, ___width, ___height, ___format, ___mipmap, ___linear, ___nativeTex);
}
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C" Texture2D_t13 * Texture2D_get_whiteTexture_m2871 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Texture2D_t13 * (*Texture2D_get_whiteTexture_m2871_ftn) ();
	static Texture2D_get_whiteTexture_m2871_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_get_whiteTexture_m2871_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_whiteTexture()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void Texture2D_SetPixel_m370 (Texture2D_t13 * __this, int32_t ___x, int32_t ___y, Color_t12  ___color, const MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = ___y;
		Texture2D_INTERNAL_CALL_SetPixel_m4121(NULL /*static, unused*/, __this, L_0, L_1, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_SetPixel(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Color&)
extern "C" void Texture2D_INTERNAL_CALL_SetPixel_m4121 (Object_t * __this /* static, unused */, Texture2D_t13 * ___self, int32_t ___x, int32_t ___y, Color_t12 * ___color, const MethodInfo* method)
{
	typedef void (*Texture2D_INTERNAL_CALL_SetPixel_m4121_ftn) (Texture2D_t13 *, int32_t, int32_t, Color_t12 *);
	static Texture2D_INTERNAL_CALL_SetPixel_m4121_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_INTERNAL_CALL_SetPixel_m4121_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::INTERNAL_CALL_SetPixel(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___x, ___y, ___color);
}
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" Color_t12  Texture2D_GetPixelBilinear_m2939 (Texture2D_t13 * __this, float ___u, float ___v, const MethodInfo* method)
{
	typedef Color_t12  (*Texture2D_GetPixelBilinear_m2939_ftn) (Texture2D_t13 *, float, float);
	static Texture2D_GetPixelBilinear_m2939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetPixelBilinear_m2939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)");
	return _il2cpp_icall_func(__this, ___u, ___v);
}
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C" ColorU5BU5D_t108* Texture2D_GetPixels_m379 (Texture2D_t13 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		ColorU5BU5D_t108* L_1 = Texture2D_GetPixels_m4122(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
extern "C" ColorU5BU5D_t108* Texture2D_GetPixels_m4122 (Texture2D_t13 * __this, int32_t ___miplevel, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, __this);
		int32_t L_1 = ___miplevel;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		V_0 = 1;
	}

IL_0015:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, __this);
		int32_t L_4 = ___miplevel;
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31)))));
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		V_1 = 1;
	}

IL_002a:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___miplevel;
		ColorU5BU5D_t108* L_9 = Texture2D_GetPixels_m4123(__this, 0, 0, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" ColorU5BU5D_t108* Texture2D_GetPixels_m4123 (Texture2D_t13 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, int32_t ___miplevel, const MethodInfo* method)
{
	typedef ColorU5BU5D_t108* (*Texture2D_GetPixels_m4123_ftn) (Texture2D_t13 *, int32_t, int32_t, int32_t, int32_t, int32_t);
	static Texture2D_GetPixels_m4123_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetPixels_m4123_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)");
	return _il2cpp_icall_func(__this, ___x, ___y, ___blockWidth, ___blockHeight, ___miplevel);
}
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C" void Texture2D_Apply_m4124 (Texture2D_t13 * __this, bool ___updateMipmaps, bool ___makeNoLongerReadable, const MethodInfo* method)
{
	typedef void (*Texture2D_Apply_m4124_ftn) (Texture2D_t13 *, bool, bool);
	static Texture2D_Apply_m4124_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_Apply_m4124_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)");
	_il2cpp_icall_func(__this, ___updateMipmaps, ___makeNoLongerReadable);
}
// System.Void UnityEngine.Texture2D::Apply()
extern "C" void Texture2D_Apply_m371 (Texture2D_t13 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		V_0 = 0;
		V_1 = 1;
		bool L_0 = V_1;
		bool L_1 = V_0;
		Texture2D_Apply_m4124(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture3D
#include "UnityEngine_UnityEngine_Texture3D.h"
// UnityEngine.Texture3D
#include "UnityEngine_UnityEngine_Texture3DMethodDeclarations.h"
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.Texture3D
#include "UnityEngine_UnityEngine_Texture3DMethodDeclarations.h"
extern "C" void Texture3D__ctor_m374 (Texture3D_t37 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, bool ___mipmap, const MethodInfo* method)
{
	{
		Texture__ctor_m4112(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		int32_t L_2 = ___depth;
		int32_t L_3 = ___format;
		bool L_4 = ___mipmap;
		Texture3D_Internal_Create_m4127(NULL /*static, unused*/, __this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void Texture3D_SetPixels_m4125 (Texture3D_t37 * __this, ColorU5BU5D_t108* ___colors, int32_t ___miplevel, const MethodInfo* method)
{
	typedef void (*Texture3D_SetPixels_m4125_ftn) (Texture3D_t37 *, ColorU5BU5D_t108*, int32_t);
	static Texture3D_SetPixels_m4125_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture3D_SetPixels_m4125_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture3D::SetPixels(UnityEngine.Color[],System.Int32)");
	_il2cpp_icall_func(__this, ___colors, ___miplevel);
}
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[])
extern "C" void Texture3D_SetPixels_m375 (Texture3D_t37 * __this, ColorU5BU5D_t108* ___colors, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		ColorU5BU5D_t108* L_0 = ___colors;
		int32_t L_1 = V_0;
		Texture3D_SetPixels_m4125(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture3D::Apply(System.Boolean)
extern "C" void Texture3D_Apply_m4126 (Texture3D_t37 * __this, bool ___updateMipmaps, const MethodInfo* method)
{
	typedef void (*Texture3D_Apply_m4126_ftn) (Texture3D_t37 *, bool);
	static Texture3D_Apply_m4126_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture3D_Apply_m4126_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture3D::Apply(System.Boolean)");
	_il2cpp_icall_func(__this, ___updateMipmaps);
}
// System.Void UnityEngine.Texture3D::Apply()
extern "C" void Texture3D_Apply_m376 (Texture3D_t37 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		Texture3D_Apply_m4126(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
// UnityEngine.Texture3D
#include "UnityEngine_UnityEngine_Texture3D.h"
extern "C" void Texture3D_Internal_Create_m4127 (Object_t * __this /* static, unused */, Texture3D_t37 * ___mono, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, bool ___mipmap, const MethodInfo* method)
{
	typedef void (*Texture3D_Internal_Create_m4127_ftn) (Texture3D_t37 *, int32_t, int32_t, int32_t, int32_t, bool);
	static Texture3D_Internal_Create_m4127_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture3D_Internal_Create_m4127_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)");
	_il2cpp_icall_func(___mono, ___width, ___height, ___depth, ___format, ___mipmap);
}
// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWrite.h"
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettingsMethodDeclarations.h"
extern "C" void RenderTexture__ctor_m452 (RenderTexture_t55 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, const MethodInfo* method)
{
	{
		Texture__ctor_m4112(__this, /*hidden argument*/NULL);
		RenderTexture_Internal_CreateRenderTexture_m4128(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		int32_t L_0 = ___width;
		RenderTexture_set_width_m4135(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___height;
		RenderTexture_set_height_m4136(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___depth;
		RenderTexture_set_depth_m4137(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___format;
		RenderTexture_set_format_m4138(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = QualitySettings_get_activeColorSpace_m381(NULL /*static, unused*/, /*hidden argument*/NULL);
		RenderTexture_Internal_SetSRGBReadWrite_m4134(NULL /*static, unused*/, __this, ((((int32_t)L_4) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void RenderTexture__ctor_m382 (RenderTexture_t55 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, const MethodInfo* method)
{
	{
		Texture__ctor_m4112(__this, /*hidden argument*/NULL);
		RenderTexture_Internal_CreateRenderTexture_m4128(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		int32_t L_0 = ___width;
		RenderTexture_set_width_m4135(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___height;
		RenderTexture_set_height_m4136(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___depth;
		RenderTexture_set_depth_m4137(__this, L_2, /*hidden argument*/NULL);
		RenderTexture_set_format_m4138(__this, 7, /*hidden argument*/NULL);
		int32_t L_3 = QualitySettings_get_activeColorSpace_m381(NULL /*static, unused*/, /*hidden argument*/NULL);
		RenderTexture_Internal_SetSRGBReadWrite_m4134(NULL /*static, unused*/, __this, ((((int32_t)L_3) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
extern "C" void RenderTexture_Internal_CreateRenderTexture_m4128 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___rt, const MethodInfo* method)
{
	typedef void (*RenderTexture_Internal_CreateRenderTexture_m4128_ftn) (RenderTexture_t55 *);
	static RenderTexture_Internal_CreateRenderTexture_m4128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_CreateRenderTexture_m4128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___rt);
}
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)
// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWrite.h"
extern "C" RenderTexture_t55 * RenderTexture_GetTemporary_m4129 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, int32_t ___readWrite, int32_t ___antiAliasing, const MethodInfo* method)
{
	typedef RenderTexture_t55 * (*RenderTexture_GetTemporary_m4129_ftn) (int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
	static RenderTexture_GetTemporary_m4129_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_GetTemporary_m4129_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)");
	return _il2cpp_icall_func(___width, ___height, ___depthBuffer, ___format, ___readWrite, ___antiAliasing);
}
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C" RenderTexture_t55 * RenderTexture_GetTemporary_m282 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		V_0 = 1;
		V_1 = 0;
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		int32_t L_2 = ___depthBuffer;
		int32_t L_3 = ___format;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		RenderTexture_t55 * L_6 = RenderTexture_GetTemporary_m4129(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
extern "C" RenderTexture_t55 * RenderTexture_GetTemporary_m307 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 7;
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		int32_t L_2 = ___depthBuffer;
		int32_t L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		RenderTexture_t55 * L_6 = RenderTexture_GetTemporary_m4129(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
extern "C" RenderTexture_t55 * RenderTexture_GetTemporary_m274 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 7;
		V_3 = 0;
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		int32_t L_2 = V_3;
		int32_t L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		RenderTexture_t55 * L_6 = RenderTexture_GetTemporary_m4129(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C" void RenderTexture_ReleaseTemporary_m276 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___temp, const MethodInfo* method)
{
	typedef void (*RenderTexture_ReleaseTemporary_m276_ftn) (RenderTexture_t55 *);
	static RenderTexture_ReleaseTemporary_m276_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_ReleaseTemporary_m276_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___temp);
}
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetWidth_m4130 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetWidth_m4130_ftn) (RenderTexture_t55 *);
	static RenderTexture_Internal_GetWidth_m4130_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetWidth_m4130_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Void UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)
extern "C" void RenderTexture_Internal_SetWidth_m4131 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___mono, int32_t ___width, const MethodInfo* method)
{
	typedef void (*RenderTexture_Internal_SetWidth_m4131_ftn) (RenderTexture_t55 *, int32_t);
	static RenderTexture_Internal_SetWidth_m4131_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_SetWidth_m4131_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)");
	_il2cpp_icall_func(___mono, ___width);
}
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetHeight_m4132 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetHeight_m4132_ftn) (RenderTexture_t55 *);
	static RenderTexture_Internal_GetHeight_m4132_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetHeight_m4132_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Void UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)
extern "C" void RenderTexture_Internal_SetHeight_m4133 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___mono, int32_t ___width, const MethodInfo* method)
{
	typedef void (*RenderTexture_Internal_SetHeight_m4133_ftn) (RenderTexture_t55 *, int32_t);
	static RenderTexture_Internal_SetHeight_m4133_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_SetHeight_m4133_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)");
	_il2cpp_icall_func(___mono, ___width);
}
// System.Void UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void RenderTexture_Internal_SetSRGBReadWrite_m4134 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___mono, bool ___sRGB, const MethodInfo* method)
{
	typedef void (*RenderTexture_Internal_SetSRGBReadWrite_m4134_ftn) (RenderTexture_t55 *, bool);
	static RenderTexture_Internal_SetSRGBReadWrite_m4134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_SetSRGBReadWrite_m4134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)");
	_il2cpp_icall_func(___mono, ___sRGB);
}
// System.Int32 UnityEngine.RenderTexture::get_width()
extern "C" int32_t RenderTexture_get_width_m272 (RenderTexture_t55 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetWidth_m4130(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.RenderTexture::set_width(System.Int32)
extern "C" void RenderTexture_set_width_m4135 (RenderTexture_t55 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		RenderTexture_Internal_SetWidth_m4131(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C" int32_t RenderTexture_get_height_m273 (RenderTexture_t55 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetHeight_m4132(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.RenderTexture::set_height(System.Int32)
extern "C" void RenderTexture_set_height_m4136 (RenderTexture_t55 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		RenderTexture_Internal_SetHeight_m4133(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
extern "C" void RenderTexture_set_depth_m4137 (RenderTexture_t55 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RenderTexture_set_depth_m4137_ftn) (RenderTexture_t55 *, int32_t);
	static RenderTexture_set_depth_m4137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_set_depth_m4137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_depth(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C" int32_t RenderTexture_get_format_m279 (RenderTexture_t55 * __this, const MethodInfo* method)
{
	typedef int32_t (*RenderTexture_get_format_m279_ftn) (RenderTexture_t55 *);
	static RenderTexture_get_format_m279_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_get_format_m279_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::get_format()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
extern "C" void RenderTexture_set_format_m4138 (RenderTexture_t55 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RenderTexture_set_format_m4138_ftn) (RenderTexture_t55 *, int32_t);
	static RenderTexture_set_format_m4138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_set_format_m4138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RenderTexture::DiscardContents()
extern "C" void RenderTexture_DiscardContents_m291 (RenderTexture_t55 * __this, const MethodInfo* method)
{
	{
		RenderTexture_INTERNAL_CALL_DiscardContents_m4139(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_DiscardContents(UnityEngine.RenderTexture)
extern "C" void RenderTexture_INTERNAL_CALL_DiscardContents_m4139 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___self, const MethodInfo* method)
{
	typedef void (*RenderTexture_INTERNAL_CALL_DiscardContents_m4139_ftn) (RenderTexture_t55 *);
	static RenderTexture_INTERNAL_CALL_DiscardContents_m4139_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_INTERNAL_CALL_DiscardContents_m4139_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::INTERNAL_CALL_DiscardContents(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___self);
}
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
extern "C" void RenderTexture_MarkRestoreExpected_m289 (RenderTexture_t55 * __this, const MethodInfo* method)
{
	{
		RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m4140(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_MarkRestoreExpected(UnityEngine.RenderTexture)
extern "C" void RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m4140 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___self, const MethodInfo* method)
{
	typedef void (*RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m4140_ftn) (RenderTexture_t55 *);
	static RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m4140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m4140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::INTERNAL_CALL_MarkRestoreExpected(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___self);
}
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_colorBuffer()
extern "C" RenderBuffer_t872  RenderTexture_get_colorBuffer_m4141 (RenderTexture_t55 * __this, const MethodInfo* method)
{
	RenderBuffer_t872  V_0 = {0};
	{
		RenderTexture_GetColorBuffer_m4143(__this, (&V_0), /*hidden argument*/NULL);
		RenderBuffer_t872  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_depthBuffer()
extern "C" RenderBuffer_t872  RenderTexture_get_depthBuffer_m4142 (RenderTexture_t55 * __this, const MethodInfo* method)
{
	RenderBuffer_t872  V_0 = {0};
	{
		RenderTexture_GetDepthBuffer_m4144(__this, (&V_0), /*hidden argument*/NULL);
		RenderBuffer_t872  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RenderTexture::GetColorBuffer(UnityEngine.RenderBuffer&)
extern "C" void RenderTexture_GetColorBuffer_m4143 (RenderTexture_t55 * __this, RenderBuffer_t872 * ___res, const MethodInfo* method)
{
	typedef void (*RenderTexture_GetColorBuffer_m4143_ftn) (RenderTexture_t55 *, RenderBuffer_t872 *);
	static RenderTexture_GetColorBuffer_m4143_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_GetColorBuffer_m4143_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::GetColorBuffer(UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(__this, ___res);
}
// System.Void UnityEngine.RenderTexture::GetDepthBuffer(UnityEngine.RenderBuffer&)
extern "C" void RenderTexture_GetDepthBuffer_m4144 (RenderTexture_t55 * __this, RenderBuffer_t872 * ___res, const MethodInfo* method)
{
	typedef void (*RenderTexture_GetDepthBuffer_m4144_ftn) (RenderTexture_t55 *, RenderBuffer_t872 *);
	static RenderTexture_GetDepthBuffer_m4144_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_GetDepthBuffer_m4144_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::GetDepthBuffer(UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(__this, ___res);
}
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C" void RenderTexture_set_active_m402 (Object_t * __this /* static, unused */, RenderTexture_t55 * ___value, const MethodInfo* method)
{
	typedef void (*RenderTexture_set_active_m402_ftn) (RenderTexture_t55 *);
	static RenderTexture_set_active_m402_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_set_active_m402_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbe.h"
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbeMethodDeclarations.h"
// UnityEngine.CullingGroupEvent
#include "UnityEngine_UnityEngine_CullingGroupEvent.h"
// UnityEngine.CullingGroupEvent
#include "UnityEngine_UnityEngine_CullingGroupEventMethodDeclarations.h"
// UnityEngine.CullingGroup/StateChanged
#include "UnityEngine_UnityEngine_CullingGroup_StateChanged.h"
// UnityEngine.CullingGroup/StateChanged
#include "UnityEngine_UnityEngine_CullingGroup_StateChangedMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void UnityEngine.CullingGroup/StateChanged::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void StateChanged__ctor_m4145 (StateChanged_t753 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
// UnityEngine.CullingGroupEvent
#include "UnityEngine_UnityEngine_CullingGroupEvent.h"
extern "C" void StateChanged_Invoke_m4146 (StateChanged_t753 * __this, CullingGroupEvent_t752  ___sphere, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		StateChanged_Invoke_m4146((StateChanged_t753 *)__this->___prev_9,___sphere, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, CullingGroupEvent_t752  ___sphere, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sphere,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, CullingGroupEvent_t752  ___sphere, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sphere,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_StateChanged_t753(Il2CppObject* delegate, CullingGroupEvent_t752  ___sphere)
{
	typedef void (STDCALL *native_function_ptr_type)(CullingGroupEvent_t752 );
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___sphere' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___sphere);

	// Marshaling cleanup of parameter '___sphere' native representation

}
// System.IAsyncResult UnityEngine.CullingGroup/StateChanged::BeginInvoke(UnityEngine.CullingGroupEvent,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* CullingGroupEvent_t752_il2cpp_TypeInfo_var;
extern "C" Object_t * StateChanged_BeginInvoke_m4147 (StateChanged_t753 * __this, CullingGroupEvent_t752  ___sphere, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CullingGroupEvent_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CullingGroupEvent_t752_il2cpp_TypeInfo_var, &___sphere);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.CullingGroup/StateChanged::EndInvoke(System.IAsyncResult)
extern "C" void StateChanged_EndInvoke_m4148 (StateChanged_t753 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroup.h"
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroupMethodDeclarations.h"
// System.Void UnityEngine.CullingGroup::Finalize()
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroupMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void CullingGroup_Finalize_m4149 (CullingGroup_t754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			IntPtr_t L_0 = (__this->___m_Ptr_0);
			IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
			bool L_2 = IntPtr_op_Inequality_m5201(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_001b;
			}
		}

IL_0015:
		{
			CullingGroup_FinalizerFailure_m4152(__this, /*hidden argument*/NULL);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x27, FINALLY_0020);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		Object_Finalize_m5182(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(32)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x27, IL_0027)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.CullingGroup::Dispose()
extern "C" void CullingGroup_Dispose_m4150 (CullingGroup_t754 * __this, const MethodInfo* method)
{
	typedef void (*CullingGroup_Dispose_m4150_ftn) (CullingGroup_t754 *);
	static CullingGroup_Dispose_m4150_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CullingGroup_Dispose_m4150_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CullingGroup::Dispose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CullingGroup::SendEvents(UnityEngine.CullingGroup,System.IntPtr,System.Int32)
// UnityEngine.CullingGroup
#include "UnityEngine_UnityEngine_CullingGroup.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.CullingGroup/StateChanged
#include "UnityEngine_UnityEngine_CullingGroup_StateChangedMethodDeclarations.h"
extern "C" void CullingGroup_SendEvents_m4151 (Object_t * __this /* static, unused */, CullingGroup_t754 * ___cullingGroup, IntPtr_t ___eventsPtr, int32_t ___count, const MethodInfo* method)
{
	CullingGroupEvent_t752 * V_0 = {0};
	int32_t V_1 = 0;
	{
		void* L_0 = IntPtr_ToPointer_m5202((&___eventsPtr), /*hidden argument*/NULL);
		V_0 = (CullingGroupEvent_t752 *)L_0;
		CullingGroup_t754 * L_1 = ___cullingGroup;
		NullCheck(L_1);
		StateChanged_t753 * L_2 = (L_1->___m_OnStateChanged_1);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		V_1 = 0;
		goto IL_0039;
	}

IL_001b:
	{
		CullingGroup_t754 * L_3 = ___cullingGroup;
		NullCheck(L_3);
		StateChanged_t753 * L_4 = (L_3->___m_OnStateChanged_1);
		CullingGroupEvent_t752 * L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		StateChanged_Invoke_m4146(L_4, (*(CullingGroupEvent_t752 *)((CullingGroupEvent_t752 *)((intptr_t)L_5+(int32_t)((int32_t)((int32_t)L_6*(int32_t)sizeof(CullingGroupEvent_t752 )))))), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___count;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001b;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.CullingGroup::FinalizerFailure()
extern "C" void CullingGroup_FinalizerFailure_m4152 (CullingGroup_t754 * __this, const MethodInfo* method)
{
	typedef void (*CullingGroup_FinalizerFailure_m4152_ftn) (CullingGroup_t754 *);
	static CullingGroup_FinalizerFailure_m4152_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CullingGroup_FinalizerFailure_m4152_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CullingGroup::FinalizerFailure()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKey.h"
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKeyMethodDeclarations.h"
// System.Void UnityEngine.GradientColorKey::.ctor(UnityEngine.Color,System.Single)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void GradientColorKey__ctor_m4153 (GradientColorKey_t755 * __this, Color_t12  ___col, float ___time, const MethodInfo* method)
{
	{
		Color_t12  L_0 = ___col;
		__this->___color_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKey.h"
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKeyMethodDeclarations.h"
// System.Void UnityEngine.GradientAlphaKey::.ctor(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void GradientAlphaKey__ctor_m4154 (GradientAlphaKey_t756 * __this, float ___alpha, float ___time, const MethodInfo* method)
{
	{
		float L_0 = ___alpha;
		__this->___alpha_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_Gradient.h"
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_GradientMethodDeclarations.h"
// System.Void UnityEngine.Gradient::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_GradientMethodDeclarations.h"
extern "C" void Gradient__ctor_m4155 (Gradient_t757 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		Gradient_Init_m4156(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m4156 (Gradient_t757 * __this, const MethodInfo* method)
{
	typedef void (*Gradient_Init_m4156_ftn) (Gradient_t757 *);
	static Gradient_Init_m4156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Init_m4156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m4157 (Gradient_t757 * __this, const MethodInfo* method)
{
	typedef void (*Gradient_Cleanup_m4157_ftn) (Gradient_t757 *);
	static Gradient_Cleanup_m4157_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Cleanup_m4157_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m4158 (Gradient_t757 * __this, const MethodInfo* method)
{
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Gradient_Cleanup_m4157(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m5182(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Gradient
extern "C" void Gradient_t757_marshal(const Gradient_t757& unmarshaled, Gradient_t757_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void Gradient_t757_marshal_back(const Gradient_t757_marshaled& marshaled, Gradient_t757& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
extern "C" void Gradient_t757_marshal_cleanup(Gradient_t757_marshaled& marshaled)
{
}
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstruc.h"
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstrucMethodDeclarations.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardTypeMethodDeclarations.h"
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboard.h"
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"
extern TypeInfo* TouchScreenKeyboard_InternalConstructorHelperArguments_t758_il2cpp_TypeInfo_var;
extern TypeInfo* TouchScreenKeyboardType_t552_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t955_il2cpp_TypeInfo_var;
extern "C" void TouchScreenKeyboard__ctor_m4159 (TouchScreenKeyboard_t401 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchScreenKeyboard_InternalConstructorHelperArguments_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		TouchScreenKeyboardType_t552_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		Convert_t955_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(492);
		s_Il2CppMethodIntialized = true;
	}
	TouchScreenKeyboard_InternalConstructorHelperArguments_t758  V_0 = {0};
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		Initobj (TouchScreenKeyboard_InternalConstructorHelperArguments_t758_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_0 = ___keyboardType;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TouchScreenKeyboardType_t552_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t955_il2cpp_TypeInfo_var);
		uint32_t L_3 = Convert_ToUInt32_m5203(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		(&V_0)->___keyboardType_0 = L_3;
		bool L_4 = ___autocorrection;
		uint32_t L_5 = Convert_ToUInt32_m5204(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		(&V_0)->___autocorrection_1 = L_5;
		bool L_6 = ___multiline;
		uint32_t L_7 = Convert_ToUInt32_m5204(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		(&V_0)->___multiline_2 = L_7;
		bool L_8 = ___secure;
		uint32_t L_9 = Convert_ToUInt32_m5204(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		(&V_0)->___secure_3 = L_9;
		bool L_10 = ___alert;
		uint32_t L_11 = Convert_ToUInt32_m5204(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		(&V_0)->___alert_4 = L_11;
		String_t* L_12 = ___text;
		String_t* L_13 = ___textPlaceholder;
		TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m4162(__this, (&V_0), L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" void TouchScreenKeyboard_Destroy_m4160 (TouchScreenKeyboard_t401 * __this, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_Destroy_m4160_ftn) (TouchScreenKeyboard_t401 *);
	static TouchScreenKeyboard_Destroy_m4160_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_Destroy_m4160_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern "C" void TouchScreenKeyboard_Finalize_m4161 (TouchScreenKeyboard_t401 * __this, const MethodInfo* method)
{
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		TouchScreenKeyboard_Destroy_m4160(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m5182(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
extern "C" void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m4162 (TouchScreenKeyboard_t401 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t758 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m4162_ftn) (TouchScreenKeyboard_t401 *, TouchScreenKeyboard_InternalConstructorHelperArguments_t758 *, String_t*, String_t*);
	static TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m4162_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m4162_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)");
	_il2cpp_icall_func(__this, ___arguments, ___text, ___textPlaceholder);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern "C" bool TouchScreenKeyboard_get_isSupported_m2967 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = Application_get_platform_m457(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 0)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 1)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 2)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 3)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 4)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 5)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 6)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 7)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 8)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 9)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 10)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 11)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 12)
		{
			goto IL_0062;
		}
	}

IL_0045:
	{
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 0)
		{
			goto IL_0062;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 1)
		{
			goto IL_0066;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 2)
		{
			goto IL_0066;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 3)
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0066;
	}

IL_0062:
	{
		return 1;
	}

IL_0064:
	{
		return 0;
	}

IL_0066:
	{
		return 0;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t401 * TouchScreenKeyboard_Open_m3023 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = ___secure;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t401 * L_8 = TouchScreenKeyboard_Open_m4163(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t401 * TouchScreenKeyboard_Open_m3024 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = V_2;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t401 * L_8 = TouchScreenKeyboard_Open_m4163(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern TypeInfo* TouchScreenKeyboard_t401_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t401 * TouchScreenKeyboard_Open_m4163 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchScreenKeyboard_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		int32_t L_1 = ___keyboardType;
		bool L_2 = ___autocorrection;
		bool L_3 = ___multiline;
		bool L_4 = ___secure;
		bool L_5 = ___alert;
		String_t* L_6 = ___textPlaceholder;
		TouchScreenKeyboard_t401 * L_7 = (TouchScreenKeyboard_t401 *)il2cpp_codegen_object_new (TouchScreenKeyboard_t401_il2cpp_TypeInfo_var);
		TouchScreenKeyboard__ctor_m4159(L_7, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern "C" String_t* TouchScreenKeyboard_get_text_m2950 (TouchScreenKeyboard_t401 * __this, const MethodInfo* method)
{
	typedef String_t* (*TouchScreenKeyboard_get_text_m2950_ftn) (TouchScreenKeyboard_t401 *);
	static TouchScreenKeyboard_get_text_m2950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_text_m2950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
extern "C" void TouchScreenKeyboard_set_text_m2951 (TouchScreenKeyboard_t401 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_text_m2951_ftn) (TouchScreenKeyboard_t401 *, String_t*);
	static TouchScreenKeyboard_set_text_m2951_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_text_m2951_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
extern "C" void TouchScreenKeyboard_set_hideInput_m3022 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_hideInput_m3022_ftn) (bool);
	static TouchScreenKeyboard_set_hideInput_m3022_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_hideInput_m3022_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
extern "C" bool TouchScreenKeyboard_get_active_m2949 (TouchScreenKeyboard_t401 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_active_m2949_ftn) (TouchScreenKeyboard_t401 *);
	static TouchScreenKeyboard_get_active_m2949_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_active_m2949_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_active()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
extern "C" void TouchScreenKeyboard_set_active_m3021 (TouchScreenKeyboard_t401 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_active_m3021_ftn) (TouchScreenKeyboard_t401 *, bool);
	static TouchScreenKeyboard_set_active_m3021_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_active_m3021_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
extern "C" bool TouchScreenKeyboard_get_done_m2972 (TouchScreenKeyboard_t401 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_done_m2972_ftn) (TouchScreenKeyboard_t401 *);
	static TouchScreenKeyboard_get_done_m2972_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_done_m2972_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_done()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
extern "C" bool TouchScreenKeyboard_get_wasCanceled_m2968 (TouchScreenKeyboard_t401 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_wasCanceled_m2968_ftn) (TouchScreenKeyboard_t401 *);
	static TouchScreenKeyboard_get_wasCanceled_m2968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_wasCanceled_m2968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_wasCanceled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// System.Int32 UnityEngine.LayerMask::get_value()
extern "C" int32_t LayerMask_get_value_m342 (LayerMask_t29 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mask_0);
		return L_0;
	}
}
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void LayerMask_set_value_m4164 (LayerMask_t29 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Mask_0 = L_0;
		return;
	}
}
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
extern "C" String_t* LayerMask_LayerToName_m4165 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method)
{
	typedef String_t* (*LayerMask_LayerToName_m4165_ftn) (int32_t);
	static LayerMask_LayerToName_m4165_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_LayerToName_m4165_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::LayerToName(System.Int32)");
	return _il2cpp_icall_func(___layer);
}
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" int32_t LayerMask_NameToLayer_m4166 (Object_t * __this /* static, unused */, String_t* ___layerName, const MethodInfo* method)
{
	typedef int32_t (*LayerMask_NameToLayer_m4166_ftn) (String_t*);
	static LayerMask_NameToLayer_m4166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_NameToLayer_m4166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::NameToLayer(System.String)");
	return _il2cpp_icall_func(___layerName);
}
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
#include "mscorlib_ArrayTypes.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
extern "C" int32_t LayerMask_GetMask_m4167 (Object_t * __this /* static, unused */, StringU5BU5D_t110* ___layerNames, const MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	StringU5BU5D_t110* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		StringU5BU5D_t110* L_0 = ___layerNames;
		V_2 = L_0;
		V_3 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		StringU5BU5D_t110* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3, sizeof(String_t*)));
		String_t* L_4 = V_1;
		int32_t L_5 = LayerMask_NameToLayer_m4166(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_4;
		V_0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
	}

IL_002b:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_3;
		StringU5BU5D_t110* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
extern "C" int32_t LayerMask_op_Implicit_m344 (Object_t * __this /* static, unused */, LayerMask_t29  ___mask, const MethodInfo* method)
{
	{
		int32_t L_0 = ((&___mask)->___m_Mask_0);
		return L_0;
	}
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" LayerMask_t29  LayerMask_op_Implicit_m309 (Object_t * __this /* static, unused */, int32_t ___intVal, const MethodInfo* method)
{
	LayerMask_t29  V_0 = {0};
	{
		int32_t L_0 = ___intVal;
		(&V_0)->___m_Mask_0 = L_0;
		LayerMask_t29  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Vector2__ctor_m305 (Vector2_t85 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		return;
	}
}
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t956_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral372;
extern "C" float Vector2_get_Item_m2932 (Vector2_t85 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t956_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral372 = il2cpp_codegen_string_literal_from_index(372);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		float L_3 = (__this->___x_1);
		return L_3;
	}

IL_001b:
	{
		float L_4 = (__this->___y_2);
		return L_4;
	}

IL_0022:
	{
		IndexOutOfRangeException_t956 * L_5 = (IndexOutOfRangeException_t956 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t956_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m5205(L_5, _stringLiteral372, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}
}
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t956_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral372;
extern "C" void Vector2_set_Item_m2940 (Vector2_t85 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t956_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral372 = il2cpp_codegen_string_literal_from_index(372);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		float L_3 = ___value;
		__this->___x_1 = L_3;
		goto IL_0037;
	}

IL_0020:
	{
		float L_4 = ___value;
		__this->___y_2 = L_4;
		goto IL_0037;
	}

IL_002c:
	{
		IndexOutOfRangeException_t956 * L_5 = (IndexOutOfRangeException_t956 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t956_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m5205(L_5, _stringLiteral372, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0037:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t85  Vector2_Scale_m3011 (Object_t * __this /* static, unused */, Vector2_t85  ___a, Vector2_t85  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t85  L_4 = {0};
		Vector2__ctor_m305(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Vector2::Normalize()
extern "C" void Vector2_Normalize_m4168 (Vector2_t85 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Vector2_get_magnitude_m3863(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(1.0E-05f)))))
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = V_0;
		Vector2_t85  L_3 = Vector2_op_Division_m2980(NULL /*static, unused*/, (*(Vector2_t85 *)__this), L_2, /*hidden argument*/NULL);
		*__this = L_3;
		goto IL_0034;
	}

IL_0029:
	{
		Vector2_t85  L_4 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		*__this = L_4;
	}

IL_0034:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C" Vector2_t85  Vector2_get_normalized_m3880 (Vector2_t85 * __this, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___y_2);
		Vector2__ctor_m305((&V_0), L_0, L_1, /*hidden argument*/NULL);
		Vector2_Normalize_m4168((&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Vector2::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral373;
extern "C" String_t* Vector2_ToString_m4169 (Vector2_t85 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral373 = il2cpp_codegen_string_literal_from_index(373);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 2));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t522_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t522_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral373, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Vector2_GetHashCode_m4170 (Vector2_t85 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m5197(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m5197(L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Vector2_t85_il2cpp_TypeInfo_var;
extern "C" bool Vector2_Equals_m3914 (Vector2_t85 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector2_t85_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector2_t85 *)((Vector2_t85 *)UnBox (L_1, Vector2_t85_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m2850(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m2850(L_5, L_6, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return G_B5_0;
	}
}
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float Vector2_Dot_m2719 (Object_t * __this /* static, unused */, Vector2_t85  ___lhs, Vector2_t85  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::get_magnitude()
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" float Vector2_get_magnitude_m3863 (Vector2_t85 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_4 = sqrtf(((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3)))));
		return L_4;
	}
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" float Vector2_get_sqrMagnitude_m1156 (Vector2_t85 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float Vector2_Distance_m3879 (Object_t * __this /* static, unused */, Vector2_t85  ___a, Vector2_t85  ___b, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		Vector2_t85  L_0 = ___a;
		Vector2_t85  L_1 = ___b;
		Vector2_t85  L_2 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector2_get_magnitude_m3863((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m4171 (Object_t * __this /* static, unused */, Vector2_t85  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" Vector2_t85  Vector2_get_zero_m2679 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = {0};
		Vector2__ctor_m305(&L_0, (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C" Vector2_t85  Vector2_get_one_m1119 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = {0};
		Vector2__ctor_m305(&L_0, (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C" Vector2_t85  Vector2_get_up_m2802 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = {0};
		Vector2__ctor_m305(&L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
extern "C" Vector2_t85  Vector2_get_right_m1202 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = {0};
		Vector2__ctor_m305(&L_0, (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t85  Vector2_op_Addition_m1118 (Object_t * __this /* static, unused */, Vector2_t85  ___a, Vector2_t85  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t85  L_4 = {0};
		Vector2__ctor_m305(&L_4, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t85  Vector2_op_Subtraction_m1120 (Object_t * __this /* static, unused */, Vector2_t85  ___a, Vector2_t85  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t85  L_4 = {0};
		Vector2__ctor_m305(&L_4, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t85  Vector2_op_Multiply_m1117 (Object_t * __this /* static, unused */, Vector2_t85  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t85  L_4 = {0};
		Vector2__ctor_m305(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C" Vector2_t85  Vector2_op_Multiply_m1173 (Object_t * __this /* static, unused */, float ___d, Vector2_t85  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t85  L_4 = {0};
		Vector2__ctor_m305(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t85  Vector2_op_Division_m2980 (Object_t * __this /* static, unused */, Vector2_t85  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t85  L_4 = {0};
		Vector2__ctor_m305(&L_4, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m3189 (Object_t * __this /* static, unused */, Vector2_t85  ___lhs, Vector2_t85  ___rhs, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___lhs;
		Vector2_t85  L_1 = ___rhs;
		Vector2_t85  L_2 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector2_SqrMagnitude_m4171(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Inequality_m3010 (Object_t * __this /* static, unused */, Vector2_t85  ___lhs, Vector2_t85  ___rhs, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___lhs;
		Vector2_t85  L_1 = ___rhs;
		Vector2_t85  L_2 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector2_SqrMagnitude_m4171(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector2_t85  Vector2_op_Implicit_m1100 (Object_t * __this /* static, unused */, Vector3_t28  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector2_t85  L_2 = {0};
		Vector2__ctor_m305(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" Vector3_t28  Vector2_op_Implicit_m1101 (Object_t * __this /* static, unused */, Vector2_t85  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector3_t28  L_2 = {0};
		Vector3__ctor_m396(&L_2, L_0, L_1, (0.0f), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Vector3__ctor_m396 (Vector3_t28 * __this, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		return;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C" void Vector3__ctor_m2882 (Vector3_t28 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		__this->___z_3 = (0.0f);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" Vector3_t28  Vector3_Lerp_m3059 (Object_t * __this /* static, unused */, Vector3_t28  ___a, Vector3_t28  ___b, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m2912(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___t = L_1;
		float L_2 = ((&___a)->___x_1);
		float L_3 = ((&___b)->___x_1);
		float L_4 = ((&___a)->___x_1);
		float L_5 = ___t;
		float L_6 = ((&___a)->___y_2);
		float L_7 = ((&___b)->___y_2);
		float L_8 = ((&___a)->___y_2);
		float L_9 = ___t;
		float L_10 = ((&___a)->___z_3);
		float L_11 = ((&___b)->___z_3);
		float L_12 = ((&___a)->___z_3);
		float L_13 = ___t;
		Vector3_t28  L_14 = {0};
		Vector3__ctor_m396(&L_14, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), /*hidden argument*/NULL);
		return L_14;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t28  Vector3_Slerp_m362 (Object_t * __this /* static, unused */, Vector3_t28  ___a, Vector3_t28  ___b, float ___t, const MethodInfo* method)
{
	{
		float L_0 = ___t;
		Vector3_t28  L_1 = Vector3_INTERNAL_CALL_Slerp_m4172(NULL /*static, unused*/, (&___a), (&___b), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
extern "C" Vector3_t28  Vector3_INTERNAL_CALL_Slerp_m4172 (Object_t * __this /* static, unused */, Vector3_t28 * ___a, Vector3_t28 * ___b, float ___t, const MethodInfo* method)
{
	typedef Vector3_t28  (*Vector3_INTERNAL_CALL_Slerp_m4172_ftn) (Vector3_t28 *, Vector3_t28 *, float);
	static Vector3_INTERNAL_CALL_Slerp_m4172_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Vector3_INTERNAL_CALL_Slerp_m4172_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)");
	return _il2cpp_icall_func(___a, ___b, ___t);
}
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t956_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral374;
extern "C" float Vector3_get_Item_m3063 (Vector3_t28 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t956_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral374 = il2cpp_codegen_string_literal_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0020;
		}
		if (L_1 == 2)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_002e;
	}

IL_0019:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0020:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_0027:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_002e:
	{
		IndexOutOfRangeException_t956 * L_5 = (IndexOutOfRangeException_t956 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t956_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m5205(L_5, _stringLiteral374, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}
}
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t956_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral374;
extern "C" void Vector3_set_Item_m3064 (Vector3_t28 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t956_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral374 = il2cpp_codegen_string_literal_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0025;
		}
		if (L_1 == 2)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003d;
	}

IL_0019:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0048;
	}

IL_0025:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0048;
	}

IL_0031:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0048;
	}

IL_003d:
	{
		IndexOutOfRangeException_t956 * L_5 = (IndexOutOfRangeException_t956 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t956_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m5205(L_5, _stringLiteral374, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0048:
	{
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t28  Vector3_Cross_m3878 (Object_t * __this /* static, unused */, Vector3_t28  ___lhs, Vector3_t28  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___y_2);
		float L_1 = ((&___rhs)->___z_3);
		float L_2 = ((&___lhs)->___z_3);
		float L_3 = ((&___rhs)->___y_2);
		float L_4 = ((&___lhs)->___z_3);
		float L_5 = ((&___rhs)->___x_1);
		float L_6 = ((&___lhs)->___x_1);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = ((&___lhs)->___x_1);
		float L_9 = ((&___rhs)->___y_2);
		float L_10 = ((&___lhs)->___y_2);
		float L_11 = ((&___rhs)->___x_1);
		Vector3_t28  L_12 = {0};
		Vector3__ctor_m396(&L_12, ((float)((float)((float)((float)L_0*(float)L_1))-(float)((float)((float)L_2*(float)L_3)))), ((float)((float)((float)((float)L_4*(float)L_5))-(float)((float)((float)L_6*(float)L_7)))), ((float)((float)((float)((float)L_8*(float)L_9))-(float)((float)((float)L_10*(float)L_11)))), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Vector3_GetHashCode_m4173 (Vector3_t28 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m5197(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m5197(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m5197(L_4, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Vector3_t28_il2cpp_TypeInfo_var;
extern "C" bool Vector3_Equals_m4174 (Vector3_t28 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t28  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector3_t28_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector3_t28 *)((Vector3_t28 *)UnBox (L_1, Vector3_t28_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m2850(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m2850(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m2850(L_8, L_9, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return G_B6_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" Vector3_t28  Vector3_Normalize_m4175 (Object_t * __this /* static, unused */, Vector3_t28  ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t28  L_0 = ___value;
		float L_1 = Vector3_Magnitude_m4178(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t28  L_3 = ___value;
		float L_4 = V_0;
		Vector3_t28  L_5 = Vector3_op_Division_m1239(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001a:
	{
		Vector3_t28  L_6 = Vector3_get_zero_m312(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.Vector3::Normalize()
extern "C" void Vector3_Normalize_m408 (Vector3_t28 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Vector3_Magnitude_m4178(NULL /*static, unused*/, (*(Vector3_t28 *)__this), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(1.0E-05f)))))
		{
			goto IL_002e;
		}
	}
	{
		float L_2 = V_0;
		Vector3_t28  L_3 = Vector3_op_Division_m1239(NULL /*static, unused*/, (*(Vector3_t28 *)__this), L_2, /*hidden argument*/NULL);
		*__this = L_3;
		goto IL_0039;
	}

IL_002e:
	{
		Vector3_t28  L_4 = Vector3_get_zero_m312(NULL /*static, unused*/, /*hidden argument*/NULL);
		*__this = L_4;
	}

IL_0039:
	{
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" Vector3_t28  Vector3_get_normalized_m3087 (Vector3_t28 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Vector3_Normalize_m4175(NULL /*static, unused*/, (*(Vector3_t28 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Vector3::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral375;
extern "C" String_t* Vector3_ToString_m4176 (Vector3_t28 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral375 = il2cpp_codegen_string_literal_from_index(375);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 3));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t522_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t522_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t522_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral375, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String UnityEngine.Vector3::ToString(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral376;
extern "C" String_t* Vector3_ToString_m4177 (Vector3_t28 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		_stringLiteral376 = il2cpp_codegen_string_literal_from_index(376);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 3));
		float* L_1 = &(__this->___x_1);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m5206(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		float* L_5 = &(__this->___y_2);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m5206(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_4;
		float* L_9 = &(__this->___z_3);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m5206(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral376, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Dot_m334 (Object_t * __this /* static, unused */, Vector3_t28  ___lhs, Vector3_t28  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		float L_4 = ((&___lhs)->___z_3);
		float L_5 = ((&___rhs)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" float Vector3_Angle_m338 (Object_t * __this /* static, unused */, Vector3_t28  ___from, Vector3_t28  ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3_t28  L_0 = Vector3_get_normalized_m3087((&___from), /*hidden argument*/NULL);
		Vector3_t28  L_1 = Vector3_get_normalized_m3087((&___to), /*hidden argument*/NULL);
		float L_2 = Vector3_Dot_m334(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Clamp_m368(NULL /*static, unused*/, L_2, (-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_4 = acosf(L_3);
		return ((float)((float)L_4*(float)(57.29578f)));
	}
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" float Vector3_Distance_m2744 (Object_t * __this /* static, unused */, Vector3_t28  ___a, Vector3_t28  ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t28  V_0 = {0};
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3__ctor_m396((&V_0), ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		float L_6 = ((&V_0)->___x_1);
		float L_7 = ((&V_0)->___x_1);
		float L_8 = ((&V_0)->___y_2);
		float L_9 = ((&V_0)->___y_2);
		float L_10 = ((&V_0)->___z_3);
		float L_11 = ((&V_0)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_12 = sqrtf(((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11)))));
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" float Vector3_Magnitude_m4178 (Object_t * __this /* static, unused */, Vector3_t28  ___a, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::get_magnitude()
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" float Vector3_get_magnitude_m337 (Vector3_t28 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m4179 (Object_t * __this /* static, unused */, Vector3_t28  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" float Vector3_get_sqrMagnitude_m3089 (Vector3_t28 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" Vector3_t28  Vector3_Min_m3073 (Object_t * __this /* static, unused */, Vector3_t28  ___lhs, Vector3_t28  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Min_m323(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Min_m323(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Min_m323(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t28  L_9 = {0};
		Vector3__ctor_m396(&L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" Vector3_t28  Vector3_Max_m3074 (Object_t * __this /* static, unused */, Vector3_t28  ___lhs, Vector3_t28  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Max_m322(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Max_m322(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Max_m322(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t28  L_9 = {0};
		Vector3__ctor_m396(&L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t28  Vector3_get_zero_m312 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = {0};
		Vector3__ctor_m396(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" Vector3_t28  Vector3_get_one_m308 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = {0};
		Vector3__ctor_m396(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" Vector3_t28  Vector3_get_forward_m310 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = {0};
		Vector3__ctor_m396(&L_0, (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" Vector3_t28  Vector3_get_back_m3171 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = {0};
		Vector3__ctor_m396(&L_0, (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" Vector3_t28  Vector3_get_up_m311 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = {0};
		Vector3__ctor_m396(&L_0, (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C" Vector3_t28  Vector3_get_down_m3091 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = {0};
		Vector3__ctor_m396(&L_0, (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C" Vector3_t28  Vector3_get_left_m3090 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = {0};
		Vector3__ctor_m396(&L_0, (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" Vector3_t28  Vector3_get_right_m1197 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = {0};
		Vector3__ctor_m396(&L_0, (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t28  Vector3_op_Addition_m389 (Object_t * __this /* static, unused */, Vector3_t28  ___a, Vector3_t28  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t28  L_6 = {0};
		Vector3__ctor_m396(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t28  Vector3_op_Subtraction_m336 (Object_t * __this /* static, unused */, Vector3_t28  ___a, Vector3_t28  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t28  L_6 = {0};
		Vector3__ctor_m396(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" Vector3_t28  Vector3_op_UnaryNegation_m3962 (Object_t * __this /* static, unused */, Vector3_t28  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___y_2);
		float L_2 = ((&___a)->___z_3);
		Vector3_t28  L_3 = {0};
		Vector3__ctor_m396(&L_3, ((-L_0)), ((-L_1)), ((-L_2)), /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t28  Vector3_op_Multiply_m328 (Object_t * __this /* static, unused */, Vector3_t28  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t28  L_6 = {0};
		Vector3__ctor_m396(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" Vector3_t28  Vector3_op_Multiply_m388 (Object_t * __this /* static, unused */, float ___d, Vector3_t28  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t28  L_6 = {0};
		Vector3__ctor_m396(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t28  Vector3_op_Division_m1239 (Object_t * __this /* static, unused */, Vector3_t28  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t28  L_6 = {0};
		Vector3__ctor_m396(&L_6, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Equality_m3881 (Object_t * __this /* static, unused */, Vector3_t28  ___lhs, Vector3_t28  ___rhs, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___lhs;
		Vector3_t28  L_1 = ___rhs;
		Vector3_t28  L_2 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_m4179(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Inequality_m3008 (Object_t * __this /* static, unused */, Vector3_t28  ___lhs, Vector3_t28  ___rhs, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___lhs;
		Vector3_t28  L_1 = ___rhs;
		Vector3_t28  L_2 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_m4179(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Color__ctor_m278 (Color_t12 * __this, float ___r, float ___g, float ___b, float ___a, const MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		float L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m369 (Color_t12 * __this, float ___r, float ___g, float ___b, const MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
// System.String UnityEngine.Color::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral377;
extern "C" String_t* Color_ToString_m4180 (Color_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral377 = il2cpp_codegen_string_literal_from_index(377);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___r_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t522_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		float L_5 = (__this->___g_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t522_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_4;
		float L_9 = (__this->___b_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t522_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t234* L_12 = L_8;
		float L_13 = (__this->___a_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t522_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral377, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 UnityEngine.Color::GetHashCode()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" int32_t Color_GetHashCode_m4181 (Color_t12 * __this, const MethodInfo* method)
{
	Vector4_t100  V_0 = {0};
	{
		Vector4_t100  L_0 = Color_op_Implicit_m293(NULL /*static, unused*/, (*(Color_t12 *)__this), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m4252((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Color::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern TypeInfo* Color_t12_il2cpp_TypeInfo_var;
extern "C" bool Color_Equals_m2889 (Color_t12 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	Color_t12  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Color_t12_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Color_t12 *)((Color_t12 *)UnBox (L_1, Color_t12_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___r_0);
		float L_3 = ((&V_0)->___r_0);
		bool L_4 = Single_Equals_m2850(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___g_1);
		float L_6 = ((&V_0)->___g_1);
		bool L_7 = Single_Equals_m2850(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___b_2);
		float L_9 = ((&V_0)->___b_2);
		bool L_10 = Single_Equals_m2850(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___a_3);
		float L_12 = ((&V_0)->___a_3);
		bool L_13 = Single_Equals_m2850(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" Color_t12  Color_Lerp_m1090 (Object_t * __this /* static, unused */, Color_t12  ___a, Color_t12  ___b, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m2912(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___t = L_1;
		float L_2 = ((&___a)->___r_0);
		float L_3 = ((&___b)->___r_0);
		float L_4 = ((&___a)->___r_0);
		float L_5 = ___t;
		float L_6 = ((&___a)->___g_1);
		float L_7 = ((&___b)->___g_1);
		float L_8 = ((&___a)->___g_1);
		float L_9 = ___t;
		float L_10 = ((&___a)->___b_2);
		float L_11 = ((&___b)->___b_2);
		float L_12 = ((&___a)->___b_2);
		float L_13 = ___t;
		float L_14 = ((&___a)->___a_3);
		float L_15 = ((&___b)->___a_3);
		float L_16 = ((&___a)->___a_3);
		float L_17 = ___t;
		Color_t12  L_18 = {0};
		Color__ctor_m278(&L_18, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), ((float)((float)L_14+(float)((float)((float)((float)((float)L_15-(float)L_16))*(float)L_17)))), /*hidden argument*/NULL);
		return L_18;
	}
}
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" Color_t12  Color_get_red_m1184 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t12  L_0 = {0};
		Color__ctor_m278(&L_0, (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" Color_t12  Color_get_green_m1138 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t12  L_0 = {0};
		Color__ctor_m278(&L_0, (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C" Color_t12  Color_get_blue_m1187 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t12  L_0 = {0};
		Color__ctor_m278(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" Color_t12  Color_get_white_m277 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t12  L_0 = {0};
		Color__ctor_m278(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" Color_t12  Color_get_black_m287 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t12  L_0 = {0};
		Color__ctor_m278(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" Color_t12  Color_get_yellow_m1140 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t12  L_0 = {0};
		Color__ctor_m278(&L_0, (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" Color_t12  Color_get_cyan_m1186 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t12  L_0 = {0};
		Color__ctor_m278(&L_0, (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_magenta()
extern "C" Color_t12  Color_get_magenta_m1185 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t12  L_0 = {0};
		Color__ctor_m278(&L_0, (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C" Color_t12  Color_get_clear_m2846 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t12  L_0 = {0};
		Color__ctor_m278(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C" Color_t12  Color_op_Multiply_m3086 (Object_t * __this /* static, unused */, Color_t12  ___a, float ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___r_0);
		float L_1 = ___b;
		float L_2 = ((&___a)->___g_1);
		float L_3 = ___b;
		float L_4 = ((&___a)->___b_2);
		float L_5 = ___b;
		float L_6 = ((&___a)->___a_3);
		float L_7 = ___b;
		Color_t12  L_8 = {0};
		Color__ctor_m278(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(System.Single,UnityEngine.Color)
extern "C" Color_t12  Color_op_Multiply_m283 (Object_t * __this /* static, unused */, float ___b, Color_t12  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___r_0);
		float L_1 = ___b;
		float L_2 = ((&___a)->___g_1);
		float L_3 = ___b;
		float L_4 = ((&___a)->___b_2);
		float L_5 = ___b;
		float L_6 = ((&___a)->___a_3);
		float L_7 = ___b;
		Color_t12  L_8 = {0};
		Color__ctor_m278(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
extern "C" bool Color_op_Equality_m1194 (Object_t * __this /* static, unused */, Color_t12  ___lhs, Color_t12  ___rhs, const MethodInfo* method)
{
	{
		Color_t12  L_0 = ___lhs;
		Vector4_t100  L_1 = Color_op_Implicit_m293(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Color_t12  L_2 = ___rhs;
		Vector4_t100  L_3 = Color_op_Implicit_m293(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		bool L_4 = Vector4_op_Equality_m4258(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" Vector4_t100  Color_op_Implicit_m293 (Object_t * __this /* static, unused */, Color_t12  ___c, const MethodInfo* method)
{
	{
		float L_0 = ((&___c)->___r_0);
		float L_1 = ((&___c)->___g_1);
		float L_2 = ((&___c)->___b_2);
		float L_3 = ((&___c)->___a_3);
		Vector4_t100  L_4 = {0};
		Vector4__ctor_m284(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" void Color32__ctor_m2774 (Color32_t510 * __this, uint8_t ___r, uint8_t ___g, uint8_t ___b, uint8_t ___a, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___r;
		__this->___r_0 = L_0;
		uint8_t L_1 = ___g;
		__this->___g_1 = L_1;
		uint8_t L_2 = ___b;
		__this->___b_2 = L_2;
		uint8_t L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.String UnityEngine.Color32::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t957_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral378;
extern "C" String_t* Color32_ToString_m4182 (Color32_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Byte_t957_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		_stringLiteral378 = il2cpp_codegen_string_literal_from_index(378);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 4));
		uint8_t L_1 = (__this->___r_0);
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(Byte_t957_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		uint8_t L_5 = (__this->___g_1);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(Byte_t957_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_4;
		uint8_t L_9 = (__this->___b_2);
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(Byte_t957_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t234* L_12 = L_8;
		uint8_t L_13 = (__this->___a_3);
		uint8_t L_14 = L_13;
		Object_t * L_15 = Box(Byte_t957_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral378, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" Color32_t510  Color32_op_Implicit_m2881 (Object_t * __this /* static, unused */, Color_t12  ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___c)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m2912(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ((&___c)->___g_1);
		float L_3 = Mathf_Clamp01_m2912(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_4 = ((&___c)->___b_2);
		float L_5 = Mathf_Clamp01_m2912(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___c)->___a_3);
		float L_7 = Mathf_Clamp01_m2912(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Color32_t510  L_8 = {0};
		Color32__ctor_m2774(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern "C" Color_t12  Color32_op_Implicit_m2775 (Object_t * __this /* static, unused */, Color32_t510  ___c, const MethodInfo* method)
{
	{
		uint8_t L_0 = ((&___c)->___r_0);
		uint8_t L_1 = ((&___c)->___g_1);
		uint8_t L_2 = ((&___c)->___b_2);
		uint8_t L_3 = ((&___c)->___a_3);
		Color_t12  L_4 = {0};
		Color__ctor_m278(&L_4, ((float)((float)(((float)L_0))/(float)(255.0f))), ((float)((float)(((float)L_1))/(float)(255.0f))), ((float)((float)(((float)L_2))/(float)(255.0f))), ((float)((float)(((float)L_3))/(float)(255.0f))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Quaternion__ctor_m4183 (Quaternion_t104 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		float L_3 = ___w;
		__this->___w_4 = L_3;
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern "C" Quaternion_t104  Quaternion_get_identity_m329 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Quaternion_t104  L_0 = {0};
		Quaternion__ctor_m4183(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" float Quaternion_Dot_m4184 (Object_t * __this /* static, unused */, Quaternion_t104  ___a, Quaternion_t104  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Quaternion_t104  Quaternion_AngleAxis_m3813 (Object_t * __this /* static, unused */, float ___angle, Vector3_t28  ___axis, const MethodInfo* method)
{
	{
		float L_0 = ___angle;
		Quaternion_t104  L_1 = Quaternion_INTERNAL_CALL_AngleAxis_m4185(NULL /*static, unused*/, L_0, (&___axis), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t104  Quaternion_INTERNAL_CALL_AngleAxis_m4185 (Object_t * __this /* static, unused */, float ___angle, Vector3_t28 * ___axis, const MethodInfo* method)
{
	typedef Quaternion_t104  (*Quaternion_INTERNAL_CALL_AngleAxis_m4185_ftn) (float, Vector3_t28 *);
	static Quaternion_INTERNAL_CALL_AngleAxis_m4185_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_AngleAxis_m4185_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___angle, ___axis);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t104  Quaternion_Lerp_m1236 (Object_t * __this /* static, unused */, Quaternion_t104  ___a, Quaternion_t104  ___b, float ___t, const MethodInfo* method)
{
	{
		float L_0 = ___t;
		Quaternion_t104  L_1 = Quaternion_INTERNAL_CALL_Lerp_m4186(NULL /*static, unused*/, (&___a), (&___b), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Lerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t104  Quaternion_INTERNAL_CALL_Lerp_m4186 (Object_t * __this /* static, unused */, Quaternion_t104 * ___a, Quaternion_t104 * ___b, float ___t, const MethodInfo* method)
{
	typedef Quaternion_t104  (*Quaternion_INTERNAL_CALL_Lerp_m4186_ftn) (Quaternion_t104 *, Quaternion_t104 *, float);
	static Quaternion_INTERNAL_CALL_Lerp_m4186_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Lerp_m4186_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Lerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)");
	return _il2cpp_icall_func(___a, ___b, ___t);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t104  Quaternion_Inverse_m3088 (Object_t * __this /* static, unused */, Quaternion_t104  ___rotation, const MethodInfo* method)
{
	{
		Quaternion_t104  L_0 = Quaternion_INTERNAL_CALL_Inverse_m4187(NULL /*static, unused*/, (&___rotation), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t104  Quaternion_INTERNAL_CALL_Inverse_m4187 (Object_t * __this /* static, unused */, Quaternion_t104 * ___rotation, const MethodInfo* method)
{
	typedef Quaternion_t104  (*Quaternion_INTERNAL_CALL_Inverse_m4187_ftn) (Quaternion_t104 *);
	static Quaternion_INTERNAL_CALL_Inverse_m4187_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Inverse_m4187_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___rotation);
}
// System.String UnityEngine.Quaternion::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral379;
extern "C" String_t* Quaternion_ToString_m4188 (Quaternion_t104 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral379 = il2cpp_codegen_string_literal_from_index(379);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t522_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t522_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t522_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t234* L_12 = L_8;
		float L_13 = (__this->___w_4);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t522_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral379, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" Quaternion_t104  Quaternion_Euler_m421 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		float L_1 = ___y;
		float L_2 = ___z;
		Vector3_t28  L_3 = {0};
		Vector3__ctor_m396(&L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t28  L_4 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_3, (0.0174532924f), /*hidden argument*/NULL);
		Quaternion_t104  L_5 = Quaternion_Internal_FromEulerRad_m4190(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t104  Quaternion_Euler_m4189 (Object_t * __this /* static, unused */, Vector3_t28  ___euler, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___euler;
		Vector3_t28  L_1 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_0, (0.0174532924f), /*hidden argument*/NULL);
		Quaternion_t104  L_2 = Quaternion_Internal_FromEulerRad_m4190(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t104  Quaternion_Internal_FromEulerRad_m4190 (Object_t * __this /* static, unused */, Vector3_t28  ___euler, const MethodInfo* method)
{
	{
		Quaternion_t104  L_0 = Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m4191(NULL /*static, unused*/, (&___euler), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t104  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m4191 (Object_t * __this /* static, unused */, Vector3_t28 * ___euler, const MethodInfo* method)
{
	typedef Quaternion_t104  (*Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m4191_ftn) (Vector3_t28 *);
	static Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m4191_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m4191_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___euler);
}
// System.Int32 UnityEngine.Quaternion::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Quaternion_GetHashCode_m4192 (Quaternion_t104 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m5197(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m5197(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m5197(L_4, /*hidden argument*/NULL);
		float* L_6 = &(__this->___w_4);
		int32_t L_7 = Single_GetHashCode_m5197(L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Quaternion_t104_il2cpp_TypeInfo_var;
extern "C" bool Quaternion_Equals_m4193 (Quaternion_t104 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quaternion_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	Quaternion_t104  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Quaternion_t104_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Quaternion_t104 *)((Quaternion_t104 *)UnBox (L_1, Quaternion_t104_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m2850(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m2850(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m2850(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_4);
		float L_12 = ((&V_0)->___w_4);
		bool L_13 = Single_Equals_m2850(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t104  Quaternion_op_Multiply_m1238 (Object_t * __this /* static, unused */, Quaternion_t104  ___lhs, Quaternion_t104  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___w_4);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___x_1);
		float L_3 = ((&___rhs)->___w_4);
		float L_4 = ((&___lhs)->___y_2);
		float L_5 = ((&___rhs)->___z_3);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___y_2);
		float L_8 = ((&___lhs)->___w_4);
		float L_9 = ((&___rhs)->___y_2);
		float L_10 = ((&___lhs)->___y_2);
		float L_11 = ((&___rhs)->___w_4);
		float L_12 = ((&___lhs)->___z_3);
		float L_13 = ((&___rhs)->___x_1);
		float L_14 = ((&___lhs)->___x_1);
		float L_15 = ((&___rhs)->___z_3);
		float L_16 = ((&___lhs)->___w_4);
		float L_17 = ((&___rhs)->___z_3);
		float L_18 = ((&___lhs)->___z_3);
		float L_19 = ((&___rhs)->___w_4);
		float L_20 = ((&___lhs)->___x_1);
		float L_21 = ((&___rhs)->___y_2);
		float L_22 = ((&___lhs)->___y_2);
		float L_23 = ((&___rhs)->___x_1);
		float L_24 = ((&___lhs)->___w_4);
		float L_25 = ((&___rhs)->___w_4);
		float L_26 = ((&___lhs)->___x_1);
		float L_27 = ((&___rhs)->___x_1);
		float L_28 = ((&___lhs)->___y_2);
		float L_29 = ((&___rhs)->___y_2);
		float L_30 = ((&___lhs)->___z_3);
		float L_31 = ((&___rhs)->___z_3);
		Quaternion_t104  L_32 = {0};
		Quaternion__ctor_m4183(&L_32, ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))-(float)((float)((float)L_6*(float)L_7)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))-(float)((float)((float)L_14*(float)L_15)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))-(float)((float)((float)L_22*(float)L_23)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))-(float)((float)((float)L_26*(float)L_27))))-(float)((float)((float)L_28*(float)L_29))))-(float)((float)((float)L_30*(float)L_31)))), /*hidden argument*/NULL);
		return L_32;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t28  Quaternion_op_Multiply_m1198 (Object_t * __this /* static, unused */, Quaternion_t104  ___rotation, Vector3_t28  ___point, const MethodInfo* method)
{
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
	float V_11 = 0.0f;
	Vector3_t28  V_12 = {0};
	{
		float L_0 = ((&___rotation)->___x_1);
		V_0 = ((float)((float)L_0*(float)(2.0f)));
		float L_1 = ((&___rotation)->___y_2);
		V_1 = ((float)((float)L_1*(float)(2.0f)));
		float L_2 = ((&___rotation)->___z_3);
		V_2 = ((float)((float)L_2*(float)(2.0f)));
		float L_3 = ((&___rotation)->___x_1);
		float L_4 = V_0;
		V_3 = ((float)((float)L_3*(float)L_4));
		float L_5 = ((&___rotation)->___y_2);
		float L_6 = V_1;
		V_4 = ((float)((float)L_5*(float)L_6));
		float L_7 = ((&___rotation)->___z_3);
		float L_8 = V_2;
		V_5 = ((float)((float)L_7*(float)L_8));
		float L_9 = ((&___rotation)->___x_1);
		float L_10 = V_1;
		V_6 = ((float)((float)L_9*(float)L_10));
		float L_11 = ((&___rotation)->___x_1);
		float L_12 = V_2;
		V_7 = ((float)((float)L_11*(float)L_12));
		float L_13 = ((&___rotation)->___y_2);
		float L_14 = V_2;
		V_8 = ((float)((float)L_13*(float)L_14));
		float L_15 = ((&___rotation)->___w_4);
		float L_16 = V_0;
		V_9 = ((float)((float)L_15*(float)L_16));
		float L_17 = ((&___rotation)->___w_4);
		float L_18 = V_1;
		V_10 = ((float)((float)L_17*(float)L_18));
		float L_19 = ((&___rotation)->___w_4);
		float L_20 = V_2;
		V_11 = ((float)((float)L_19*(float)L_20));
		float L_21 = V_4;
		float L_22 = V_5;
		float L_23 = ((&___point)->___x_1);
		float L_24 = V_6;
		float L_25 = V_11;
		float L_26 = ((&___point)->___y_2);
		float L_27 = V_7;
		float L_28 = V_10;
		float L_29 = ((&___point)->___z_3);
		(&V_12)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_21+(float)L_22))))*(float)L_23))+(float)((float)((float)((float)((float)L_24-(float)L_25))*(float)L_26))))+(float)((float)((float)((float)((float)L_27+(float)L_28))*(float)L_29))));
		float L_30 = V_6;
		float L_31 = V_11;
		float L_32 = ((&___point)->___x_1);
		float L_33 = V_3;
		float L_34 = V_5;
		float L_35 = ((&___point)->___y_2);
		float L_36 = V_8;
		float L_37 = V_9;
		float L_38 = ((&___point)->___z_3);
		(&V_12)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_30+(float)L_31))*(float)L_32))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_33+(float)L_34))))*(float)L_35))))+(float)((float)((float)((float)((float)L_36-(float)L_37))*(float)L_38))));
		float L_39 = V_7;
		float L_40 = V_10;
		float L_41 = ((&___point)->___x_1);
		float L_42 = V_8;
		float L_43 = V_9;
		float L_44 = ((&___point)->___y_2);
		float L_45 = V_3;
		float L_46 = V_4;
		float L_47 = ((&___point)->___z_3);
		(&V_12)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_39-(float)L_40))*(float)L_41))+(float)((float)((float)((float)((float)L_42+(float)L_43))*(float)L_44))))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_45+(float)L_46))))*(float)L_47))));
		Vector3_t28  L_48 = V_12;
		return L_48;
	}
}
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m3009 (Object_t * __this /* static, unused */, Quaternion_t104  ___lhs, Quaternion_t104  ___rhs, const MethodInfo* method)
{
	{
		Quaternion_t104  L_0 = ___lhs;
		Quaternion_t104  L_1 = ___rhs;
		float L_2 = Quaternion_Dot_m4184(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_2) <= ((float)(0.999999f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Rect__ctor_m1081 (Rect_t232 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___m_XMin_0 = L_0;
		float L_1 = ___y;
		__this->___m_YMin_1 = L_1;
		float L_2 = ___width;
		__this->___m_Width_2 = L_2;
		float L_3 = ___height;
		__this->___m_Height_3 = L_3;
		return;
	}
}
// UnityEngine.Rect UnityEngine.Rect::MinMaxRect(System.Single,System.Single,System.Single,System.Single)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" Rect_t232  Rect_MinMaxRect_m4194 (Object_t * __this /* static, unused */, float ___xmin, float ___ymin, float ___xmax, float ___ymax, const MethodInfo* method)
{
	{
		float L_0 = ___xmin;
		float L_1 = ___ymin;
		float L_2 = ___xmax;
		float L_3 = ___xmin;
		float L_4 = ___ymax;
		float L_5 = ___ymin;
		Rect_t232  L_6 = {0};
		Rect__ctor_m1081(&L_6, L_0, L_1, ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m2879 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m2926 (Rect_t232 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_XMin_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m2880 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m2924 (Rect_t232 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_YMin_1 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t85  Rect_get_position_m2930 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		float L_1 = (__this->___m_YMin_1);
		Vector2_t85  L_2 = {0};
		Vector2__ctor_m305(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
extern "C" Vector2_t85  Rect_get_center_m3052 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = Rect_get_x_m2879(__this, /*hidden argument*/NULL);
		float L_1 = (__this->___m_Width_2);
		float L_2 = Rect_get_y_m2880(__this, /*hidden argument*/NULL);
		float L_3 = (__this->___m_Height_3);
		Vector2_t85  L_4 = {0};
		Vector2__ctor_m305(&L_4, ((float)((float)L_0+(float)((float)((float)L_1/(float)(2.0f))))), ((float)((float)L_2+(float)((float)((float)L_3/(float)(2.0f))))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_min()
extern "C" Vector2_t85  Rect_get_min_m2826 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = Rect_get_xMin_m2946(__this, /*hidden argument*/NULL);
		float L_1 = Rect_get_yMin_m2945(__this, /*hidden argument*/NULL);
		Vector2_t85  L_2 = {0};
		Vector2__ctor_m305(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_max()
extern "C" Vector2_t85  Rect_get_max_m2827 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = Rect_get_xMax_m2937(__this, /*hidden argument*/NULL);
		float L_1 = Rect_get_yMax_m2938(__this, /*hidden argument*/NULL);
		Vector2_t85  L_2 = {0};
		Vector2__ctor_m305(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m2877 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m2925 (Rect_t232 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Width_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m2831 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m2923 (Rect_t232 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Height_3 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern "C" Vector2_t85  Rect_get_size_m2828 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_Height_3);
		Vector2_t85  L_2 = {0};
		Vector2__ctor_m305(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m2946 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m2945 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m2937 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_XMin_0);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m2938 (Rect_t232 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		float L_1 = (__this->___m_YMin_1);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.String UnityEngine.Rect::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral380;
extern "C" String_t* Rect_ToString_m4195 (Rect_t232 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral380 = il2cpp_codegen_string_literal_from_index(380);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 4));
		float L_1 = Rect_get_x_m2879(__this, /*hidden argument*/NULL);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t522_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		float L_5 = Rect_get_y_m2880(__this, /*hidden argument*/NULL);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t522_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_4;
		float L_9 = Rect_get_width_m2877(__this, /*hidden argument*/NULL);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t522_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t234* L_12 = L_8;
		float L_13 = Rect_get_height_m2831(__this, /*hidden argument*/NULL);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t522_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral380, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" bool Rect_Contains_m3902 (Rect_t232 * __this, Vector2_t85  ___point, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___point)->___x_1);
		float L_1 = Rect_get_xMin_m2946(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&___point)->___x_1);
		float L_3 = Rect_get_xMax_m2937(__this, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&___point)->___y_2);
		float L_5 = Rect_get_yMin_m2945(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&___point)->___y_2);
		float L_7 = Rect_get_yMax_m2938(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" bool Rect_Contains_m2834 (Rect_t232 * __this, Vector3_t28  ___point, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___point)->___x_1);
		float L_1 = Rect_get_xMin_m2946(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&___point)->___x_1);
		float L_3 = Rect_get_xMax_m2937(__this, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&___point)->___y_2);
		float L_5 = Rect_get_yMin_m2945(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&___point)->___y_2);
		float L_7 = Rect_get_yMax_m2938(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern "C" bool Rect_Overlaps_m3033 (Rect_t232 * __this, Rect_t232  ___other, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_xMax_m2937((&___other), /*hidden argument*/NULL);
		float L_1 = Rect_get_xMin_m2946(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = Rect_get_xMin_m2946((&___other), /*hidden argument*/NULL);
		float L_3 = Rect_get_xMax_m2937(__this, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = Rect_get_yMax_m2938((&___other), /*hidden argument*/NULL);
		float L_5 = Rect_get_yMin_m2945(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = Rect_get_yMin_m2945((&___other), /*hidden argument*/NULL);
		float L_7 = Rect_get_yMax_m2938(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Rect::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Rect_GetHashCode_m4196 (Rect_t232 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = Rect_get_x_m2879(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m5197((&V_0), /*hidden argument*/NULL);
		float L_2 = Rect_get_width_m2877(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Single_GetHashCode_m5197((&V_1), /*hidden argument*/NULL);
		float L_4 = Rect_get_y_m2880(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Single_GetHashCode_m5197((&V_2), /*hidden argument*/NULL);
		float L_6 = Rect_get_height_m2831(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Single_GetHashCode_m5197((&V_3), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Rect::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Rect_t232_il2cpp_TypeInfo_var;
extern "C" bool Rect_Equals_m4197 (Rect_t232 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rect_t232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(324);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t232  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Rect_t232_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Rect_t232 *)((Rect_t232 *)UnBox (L_1, Rect_t232_il2cpp_TypeInfo_var))));
		float L_2 = Rect_get_x_m2879(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = Rect_get_x_m2879((&V_0), /*hidden argument*/NULL);
		bool L_4 = Single_Equals_m2850((&V_1), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		float L_5 = Rect_get_y_m2880(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Rect_get_y_m2880((&V_0), /*hidden argument*/NULL);
		bool L_7 = Single_Equals_m2850((&V_2), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = Rect_get_width_m2877(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = Rect_get_width_m2877((&V_0), /*hidden argument*/NULL);
		bool L_10 = Single_Equals_m2850((&V_3), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		float L_11 = Rect_get_height_m2831(__this, /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = Rect_get_height_m2831((&V_0), /*hidden argument*/NULL);
		bool L_13 = Single_Equals_m2850((&V_4), L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 0;
	}

IL_007b:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Inequality_m3046 (Object_t * __this /* static, unused */, Rect_t232  ___lhs, Rect_t232  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_x_m2879((&___lhs), /*hidden argument*/NULL);
		float L_1 = Rect_get_x_m2879((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		float L_2 = Rect_get_y_m2880((&___lhs), /*hidden argument*/NULL);
		float L_3 = Rect_get_y_m2880((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004e;
		}
	}
	{
		float L_4 = Rect_get_width_m2877((&___lhs), /*hidden argument*/NULL);
		float L_5 = Rect_get_width_m2877((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004e;
		}
	}
	{
		float L_6 = Rect_get_height_m2831((&___lhs), /*hidden argument*/NULL);
		float L_7 = Rect_get_height_m2831((&___rhs), /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)((((float)L_6) == ((float)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004f;
	}

IL_004e:
	{
		G_B5_0 = 1;
	}

IL_004f:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Equality_m3042 (Object_t * __this /* static, unused */, Rect_t232  ___lhs, Rect_t232  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_x_m2879((&___lhs), /*hidden argument*/NULL);
		float L_1 = Rect_get_x_m2879((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_2 = Rect_get_y_m2880((&___lhs), /*hidden argument*/NULL);
		float L_3 = Rect_get_y_m2880((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004b;
		}
	}
	{
		float L_4 = Rect_get_width_m2877((&___lhs), /*hidden argument*/NULL);
		float L_5 = Rect_get_width_m2877((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		float L_6 = Rect_get_height_m2831((&___lhs), /*hidden argument*/NULL);
		float L_7 = Rect_get_height_m2831((&___rhs), /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) == ((float)L_7))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		return G_B5_0;
	}
}
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
extern "C" float Matrix4x4_get_Item_m4198 (Matrix4x4_t31 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = Matrix4x4_get_Item_m445(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Matrix4x4_set_Item_m4199 (Matrix4x4_t31 * __this, int32_t ___row, int32_t ___column, float ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = ___value;
		Matrix4x4_set_Item_m4200(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t956_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral381;
extern "C" float Matrix4x4_get_Item_m445 (Matrix4x4_t31 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t956_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral381 = il2cpp_codegen_string_literal_from_index(381);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0054;
		}
		if (L_1 == 2)
		{
			goto IL_005b;
		}
		if (L_1 == 3)
		{
			goto IL_0062;
		}
		if (L_1 == 4)
		{
			goto IL_0069;
		}
		if (L_1 == 5)
		{
			goto IL_0070;
		}
		if (L_1 == 6)
		{
			goto IL_0077;
		}
		if (L_1 == 7)
		{
			goto IL_007e;
		}
		if (L_1 == 8)
		{
			goto IL_0085;
		}
		if (L_1 == 9)
		{
			goto IL_008c;
		}
		if (L_1 == 10)
		{
			goto IL_0093;
		}
		if (L_1 == 11)
		{
			goto IL_009a;
		}
		if (L_1 == 12)
		{
			goto IL_00a1;
		}
		if (L_1 == 13)
		{
			goto IL_00a8;
		}
		if (L_1 == 14)
		{
			goto IL_00af;
		}
		if (L_1 == 15)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00bd;
	}

IL_004d:
	{
		float L_2 = (__this->___m00_0);
		return L_2;
	}

IL_0054:
	{
		float L_3 = (__this->___m10_1);
		return L_3;
	}

IL_005b:
	{
		float L_4 = (__this->___m20_2);
		return L_4;
	}

IL_0062:
	{
		float L_5 = (__this->___m30_3);
		return L_5;
	}

IL_0069:
	{
		float L_6 = (__this->___m01_4);
		return L_6;
	}

IL_0070:
	{
		float L_7 = (__this->___m11_5);
		return L_7;
	}

IL_0077:
	{
		float L_8 = (__this->___m21_6);
		return L_8;
	}

IL_007e:
	{
		float L_9 = (__this->___m31_7);
		return L_9;
	}

IL_0085:
	{
		float L_10 = (__this->___m02_8);
		return L_10;
	}

IL_008c:
	{
		float L_11 = (__this->___m12_9);
		return L_11;
	}

IL_0093:
	{
		float L_12 = (__this->___m22_10);
		return L_12;
	}

IL_009a:
	{
		float L_13 = (__this->___m32_11);
		return L_13;
	}

IL_00a1:
	{
		float L_14 = (__this->___m03_12);
		return L_14;
	}

IL_00a8:
	{
		float L_15 = (__this->___m13_13);
		return L_15;
	}

IL_00af:
	{
		float L_16 = (__this->___m23_14);
		return L_16;
	}

IL_00b6:
	{
		float L_17 = (__this->___m33_15);
		return L_17;
	}

IL_00bd:
	{
		IndexOutOfRangeException_t956 * L_18 = (IndexOutOfRangeException_t956 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t956_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m5205(L_18, _stringLiteral381, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t956_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral381;
extern "C" void Matrix4x4_set_Item_m4200 (Matrix4x4_t31 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t956_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral381 = il2cpp_codegen_string_literal_from_index(381);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0059;
		}
		if (L_1 == 2)
		{
			goto IL_0065;
		}
		if (L_1 == 3)
		{
			goto IL_0071;
		}
		if (L_1 == 4)
		{
			goto IL_007d;
		}
		if (L_1 == 5)
		{
			goto IL_0089;
		}
		if (L_1 == 6)
		{
			goto IL_0095;
		}
		if (L_1 == 7)
		{
			goto IL_00a1;
		}
		if (L_1 == 8)
		{
			goto IL_00ad;
		}
		if (L_1 == 9)
		{
			goto IL_00b9;
		}
		if (L_1 == 10)
		{
			goto IL_00c5;
		}
		if (L_1 == 11)
		{
			goto IL_00d1;
		}
		if (L_1 == 12)
		{
			goto IL_00dd;
		}
		if (L_1 == 13)
		{
			goto IL_00e9;
		}
		if (L_1 == 14)
		{
			goto IL_00f5;
		}
		if (L_1 == 15)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_010d;
	}

IL_004d:
	{
		float L_2 = ___value;
		__this->___m00_0 = L_2;
		goto IL_0118;
	}

IL_0059:
	{
		float L_3 = ___value;
		__this->___m10_1 = L_3;
		goto IL_0118;
	}

IL_0065:
	{
		float L_4 = ___value;
		__this->___m20_2 = L_4;
		goto IL_0118;
	}

IL_0071:
	{
		float L_5 = ___value;
		__this->___m30_3 = L_5;
		goto IL_0118;
	}

IL_007d:
	{
		float L_6 = ___value;
		__this->___m01_4 = L_6;
		goto IL_0118;
	}

IL_0089:
	{
		float L_7 = ___value;
		__this->___m11_5 = L_7;
		goto IL_0118;
	}

IL_0095:
	{
		float L_8 = ___value;
		__this->___m21_6 = L_8;
		goto IL_0118;
	}

IL_00a1:
	{
		float L_9 = ___value;
		__this->___m31_7 = L_9;
		goto IL_0118;
	}

IL_00ad:
	{
		float L_10 = ___value;
		__this->___m02_8 = L_10;
		goto IL_0118;
	}

IL_00b9:
	{
		float L_11 = ___value;
		__this->___m12_9 = L_11;
		goto IL_0118;
	}

IL_00c5:
	{
		float L_12 = ___value;
		__this->___m22_10 = L_12;
		goto IL_0118;
	}

IL_00d1:
	{
		float L_13 = ___value;
		__this->___m32_11 = L_13;
		goto IL_0118;
	}

IL_00dd:
	{
		float L_14 = ___value;
		__this->___m03_12 = L_14;
		goto IL_0118;
	}

IL_00e9:
	{
		float L_15 = ___value;
		__this->___m13_13 = L_15;
		goto IL_0118;
	}

IL_00f5:
	{
		float L_16 = ___value;
		__this->___m23_14 = L_16;
		goto IL_0118;
	}

IL_0101:
	{
		float L_17 = ___value;
		__this->___m33_15 = L_17;
		goto IL_0118;
	}

IL_010d:
	{
		IndexOutOfRangeException_t956 * L_18 = (IndexOutOfRangeException_t956 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t956_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m5205(L_18, _stringLiteral381, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}

IL_0118:
	{
		return;
	}
}
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" int32_t Matrix4x4_GetHashCode_m4201 (Matrix4x4_t31 * __this, const MethodInfo* method)
{
	Vector4_t100  V_0 = {0};
	Vector4_t100  V_1 = {0};
	Vector4_t100  V_2 = {0};
	Vector4_t100  V_3 = {0};
	{
		Vector4_t100  L_0 = Matrix4x4_GetColumn_m4210(__this, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m4252((&V_0), /*hidden argument*/NULL);
		Vector4_t100  L_2 = Matrix4x4_GetColumn_m4210(__this, 1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector4_GetHashCode_m4252((&V_1), /*hidden argument*/NULL);
		Vector4_t100  L_4 = Matrix4x4_GetColumn_m4210(__this, 2, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Vector4_GetHashCode_m4252((&V_2), /*hidden argument*/NULL);
		Vector4_t100  L_6 = Matrix4x4_GetColumn_m4210(__this, 3, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Vector4_GetHashCode_m4252((&V_3), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Matrix4x4_t31_il2cpp_TypeInfo_var;
extern TypeInfo* Vector4_t100_il2cpp_TypeInfo_var;
extern "C" bool Matrix4x4_Equals_m4202 (Matrix4x4_t31 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		Vector4_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t31  V_0 = {0};
	Vector4_t100  V_1 = {0};
	Vector4_t100  V_2 = {0};
	Vector4_t100  V_3 = {0};
	Vector4_t100  V_4 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Matrix4x4_t31_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Matrix4x4_t31 *)((Matrix4x4_t31 *)UnBox (L_1, Matrix4x4_t31_il2cpp_TypeInfo_var))));
		Vector4_t100  L_2 = Matrix4x4_GetColumn_m4210(__this, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector4_t100  L_3 = Matrix4x4_GetColumn_m4210((&V_0), 0, /*hidden argument*/NULL);
		Vector4_t100  L_4 = L_3;
		Object_t * L_5 = Box(Vector4_t100_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = Vector4_Equals_m4253((&V_1), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t100  L_7 = Matrix4x4_GetColumn_m4210(__this, 1, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector4_t100  L_8 = Matrix4x4_GetColumn_m4210((&V_0), 1, /*hidden argument*/NULL);
		Vector4_t100  L_9 = L_8;
		Object_t * L_10 = Box(Vector4_t100_il2cpp_TypeInfo_var, &L_9);
		bool L_11 = Vector4_Equals_m4253((&V_2), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t100  L_12 = Matrix4x4_GetColumn_m4210(__this, 2, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector4_t100  L_13 = Matrix4x4_GetColumn_m4210((&V_0), 2, /*hidden argument*/NULL);
		Vector4_t100  L_14 = L_13;
		Object_t * L_15 = Box(Vector4_t100_il2cpp_TypeInfo_var, &L_14);
		bool L_16 = Vector4_Equals_m4253((&V_3), L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t100  L_17 = Matrix4x4_GetColumn_m4210(__this, 3, /*hidden argument*/NULL);
		V_4 = L_17;
		Vector4_t100  L_18 = Matrix4x4_GetColumn_m4210((&V_0), 3, /*hidden argument*/NULL);
		Vector4_t100  L_19 = L_18;
		Object_t * L_20 = Box(Vector4_t100_il2cpp_TypeInfo_var, &L_19);
		bool L_21 = Vector4_Equals_m4253((&V_4), L_20, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_21));
		goto IL_0097;
	}

IL_0096:
	{
		G_B7_0 = 0;
	}

IL_0097:
	{
		return G_B7_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
extern "C" Matrix4x4_t31  Matrix4x4_Inverse_m325 (Object_t * __this /* static, unused */, Matrix4x4_t31  ___m, const MethodInfo* method)
{
	{
		Matrix4x4_t31  L_0 = Matrix4x4_INTERNAL_CALL_Inverse_m4203(NULL /*static, unused*/, (&___m), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t31  Matrix4x4_INTERNAL_CALL_Inverse_m4203 (Object_t * __this /* static, unused */, Matrix4x4_t31 * ___m, const MethodInfo* method)
{
	typedef Matrix4x4_t31  (*Matrix4x4_INTERNAL_CALL_Inverse_m4203_ftn) (Matrix4x4_t31 *);
	static Matrix4x4_INTERNAL_CALL_Inverse_m4203_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Inverse_m4203_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t31  Matrix4x4_Transpose_m4204 (Object_t * __this /* static, unused */, Matrix4x4_t31  ___m, const MethodInfo* method)
{
	{
		Matrix4x4_t31  L_0 = Matrix4x4_INTERNAL_CALL_Transpose_m4205(NULL /*static, unused*/, (&___m), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t31  Matrix4x4_INTERNAL_CALL_Transpose_m4205 (Object_t * __this /* static, unused */, Matrix4x4_t31 * ___m, const MethodInfo* method)
{
	typedef Matrix4x4_t31  (*Matrix4x4_INTERNAL_CALL_Transpose_m4205_ftn) (Matrix4x4_t31 *);
	static Matrix4x4_INTERNAL_CALL_Transpose_m4205_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Transpose_m4205_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_Invert_m4206 (Object_t * __this /* static, unused */, Matrix4x4_t31  ___inMatrix, Matrix4x4_t31 * ___dest, const MethodInfo* method)
{
	{
		Matrix4x4_t31 * L_0 = ___dest;
		bool L_1 = Matrix4x4_INTERNAL_CALL_Invert_m4207(NULL /*static, unused*/, (&___inMatrix), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_INTERNAL_CALL_Invert_m4207 (Object_t * __this /* static, unused */, Matrix4x4_t31 * ___inMatrix, Matrix4x4_t31 * ___dest, const MethodInfo* method)
{
	typedef bool (*Matrix4x4_INTERNAL_CALL_Invert_m4207_ftn) (Matrix4x4_t31 *, Matrix4x4_t31 *);
	static Matrix4x4_INTERNAL_CALL_Invert_m4207_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Invert_m4207_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___inMatrix, ___dest);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C" Matrix4x4_t31  Matrix4x4_get_inverse_m444 (Matrix4x4_t31 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t31  L_0 = Matrix4x4_Inverse_m325(NULL /*static, unused*/, (*(Matrix4x4_t31 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern "C" Matrix4x4_t31  Matrix4x4_get_transpose_m4208 (Matrix4x4_t31 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t31  L_0 = Matrix4x4_Transpose_m4204(NULL /*static, unused*/, (*(Matrix4x4_t31 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern "C" bool Matrix4x4_get_isIdentity_m4209 (Matrix4x4_t31 * __this, const MethodInfo* method)
{
	typedef bool (*Matrix4x4_get_isIdentity_m4209_ftn) (Matrix4x4_t31 *);
	static Matrix4x4_get_isIdentity_m4209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_get_isIdentity_m4209_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t100  Matrix4x4_GetColumn_m4210 (Matrix4x4_t31 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m4198(__this, 0, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m4198(__this, 1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m4198(__this, 2, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m4198(__this, 3, L_6, /*hidden argument*/NULL);
		Vector4_t100  L_8 = {0};
		Vector4__ctor_m284(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern "C" Vector4_t100  Matrix4x4_GetRow_m4211 (Matrix4x4_t31 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m4198(__this, L_0, 0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m4198(__this, L_2, 1, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m4198(__this, L_4, 2, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m4198(__this, L_6, 3, /*hidden argument*/NULL);
		Vector4_t100  L_8 = {0};
		Vector4__ctor_m284(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern "C" void Matrix4x4_SetColumn_m4212 (Matrix4x4_t31 * __this, int32_t ___i, Vector4_t100  ___v, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m4199(__this, 0, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m4199(__this, 1, L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m4199(__this, 2, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m4199(__this, 3, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetRow_m409 (Matrix4x4_t31 * __this, int32_t ___i, Vector4_t100  ___v, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m4199(__this, L_0, 0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m4199(__this, L_2, 1, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m4199(__this, L_4, 2, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m4199(__this, L_6, 3, L_7, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector3_t28  Matrix4x4_MultiplyPoint_m4213 (Matrix4x4_t31 * __this, Vector3_t28  ___v, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		float L_21 = (__this->___m30_3);
		float L_22 = ((&___v)->___x_1);
		float L_23 = (__this->___m31_7);
		float L_24 = ((&___v)->___y_2);
		float L_25 = (__this->___m32_11);
		float L_26 = ((&___v)->___z_3);
		float L_27 = (__this->___m33_15);
		V_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)L_23*(float)L_24))))+(float)((float)((float)L_25*(float)L_26))))+(float)L_27));
		float L_28 = V_1;
		V_1 = ((float)((float)(1.0f)/(float)L_28));
		Vector3_t28 * L_29 = (&V_0);
		float L_30 = (L_29->___x_1);
		float L_31 = V_1;
		L_29->___x_1 = ((float)((float)L_30*(float)L_31));
		Vector3_t28 * L_32 = (&V_0);
		float L_33 = (L_32->___y_2);
		float L_34 = V_1;
		L_32->___y_2 = ((float)((float)L_33*(float)L_34));
		Vector3_t28 * L_35 = (&V_0);
		float L_36 = (L_35->___z_3);
		float L_37 = V_1;
		L_35->___z_3 = ((float)((float)L_36*(float)L_37));
		Vector3_t28  L_38 = V_0;
		return L_38;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C" Vector3_t28  Matrix4x4_MultiplyPoint3x4_m3072 (Matrix4x4_t31 * __this, Vector3_t28  ___v, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		Vector3_t28  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C" Vector3_t28  Matrix4x4_MultiplyVector_m4214 (Matrix4x4_t31 * __this, Vector3_t28  ___v, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___m10_1);
		float L_7 = ((&___v)->___x_1);
		float L_8 = (__this->___m11_5);
		float L_9 = ((&___v)->___y_2);
		float L_10 = (__this->___m12_9);
		float L_11 = ((&___v)->___z_3);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m20_2);
		float L_13 = ((&___v)->___x_1);
		float L_14 = (__this->___m21_6);
		float L_15 = ((&___v)->___y_2);
		float L_16 = (__this->___m22_10);
		float L_17 = ((&___v)->___z_3);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)L_12*(float)L_13))+(float)((float)((float)L_14*(float)L_15))))+(float)((float)((float)L_16*(float)L_17))));
		Vector3_t28  L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern TypeInfo* Matrix4x4_t31_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t31  Matrix4x4_Scale_m4215 (Object_t * __this /* static, unused */, Vector3_t28  ___v, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t31  V_0 = {0};
	{
		Initobj (Matrix4x4_t31_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___v)->___x_1);
		(&V_0)->___m00_0 = L_0;
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		float L_1 = ((&___v)->___y_2);
		(&V_0)->___m11_5 = L_1;
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		float L_2 = ((&___v)->___z_3);
		(&V_0)->___m22_10 = L_2;
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t31  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern TypeInfo* Matrix4x4_t31_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t31  Matrix4x4_get_zero_m4216 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t31  V_0 = {0};
	{
		Initobj (Matrix4x4_t31_il2cpp_TypeInfo_var, (&V_0));
		(&V_0)->___m00_0 = (0.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (0.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (0.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (0.0f);
		Matrix4x4_t31  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern TypeInfo* Matrix4x4_t31_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t31  Matrix4x4_get_identity_m327 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t31  V_0 = {0};
	{
		Initobj (Matrix4x4_t31_il2cpp_TypeInfo_var, (&V_0));
		(&V_0)->___m00_0 = (1.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (1.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (1.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t31  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" void Matrix4x4_SetTRS_m330 (Matrix4x4_t31 * __this, Vector3_t28  ___pos, Quaternion_t104  ___q, Vector3_t28  ___s, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___pos;
		Quaternion_t104  L_1 = ___q;
		Vector3_t28  L_2 = ___s;
		Matrix4x4_t31  L_3 = Matrix4x4_TRS_m422(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		*__this = L_3;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Matrix4x4_t31  Matrix4x4_TRS_m422 (Object_t * __this /* static, unused */, Vector3_t28  ___pos, Quaternion_t104  ___q, Vector3_t28  ___s, const MethodInfo* method)
{
	{
		Matrix4x4_t31  L_0 = Matrix4x4_INTERNAL_CALL_TRS_m4217(NULL /*static, unused*/, (&___pos), (&___q), (&___s), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" Matrix4x4_t31  Matrix4x4_INTERNAL_CALL_TRS_m4217 (Object_t * __this /* static, unused */, Vector3_t28 * ___pos, Quaternion_t104 * ___q, Vector3_t28 * ___s, const MethodInfo* method)
{
	typedef Matrix4x4_t31  (*Matrix4x4_INTERNAL_CALL_TRS_m4217_ftn) (Vector3_t28 *, Quaternion_t104 *, Vector3_t28 *);
	static Matrix4x4_INTERNAL_CALL_TRS_m4217_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_TRS_m4217_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___pos, ___q, ___s);
}
// System.String UnityEngine.Matrix4x4::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral382;
extern "C" String_t* Matrix4x4_ToString_m4218 (Matrix4x4_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral382 = il2cpp_codegen_string_literal_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, ((int32_t)16)));
		float L_1 = (__this->___m00_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t522_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		float L_5 = (__this->___m01_4);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t522_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_4;
		float L_9 = (__this->___m02_8);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t522_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t234* L_12 = L_8;
		float L_13 = (__this->___m03_12);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t522_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t234* L_16 = L_12;
		float L_17 = (__this->___m10_1);
		float L_18 = L_17;
		Object_t * L_19 = Box(Single_t522_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t234* L_20 = L_16;
		float L_21 = (__this->___m11_5);
		float L_22 = L_21;
		Object_t * L_23 = Box(Single_t522_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5, sizeof(Object_t *))) = (Object_t *)L_23;
		ObjectU5BU5D_t234* L_24 = L_20;
		float L_25 = (__this->___m12_9);
		float L_26 = L_25;
		Object_t * L_27 = Box(Single_t522_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6, sizeof(Object_t *))) = (Object_t *)L_27;
		ObjectU5BU5D_t234* L_28 = L_24;
		float L_29 = (__this->___m13_13);
		float L_30 = L_29;
		Object_t * L_31 = Box(Single_t522_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7, sizeof(Object_t *))) = (Object_t *)L_31;
		ObjectU5BU5D_t234* L_32 = L_28;
		float L_33 = (__this->___m20_2);
		float L_34 = L_33;
		Object_t * L_35 = Box(Single_t522_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8, sizeof(Object_t *))) = (Object_t *)L_35;
		ObjectU5BU5D_t234* L_36 = L_32;
		float L_37 = (__this->___m21_6);
		float L_38 = L_37;
		Object_t * L_39 = Box(Single_t522_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_39;
		ObjectU5BU5D_t234* L_40 = L_36;
		float L_41 = (__this->___m22_10);
		float L_42 = L_41;
		Object_t * L_43 = Box(Single_t522_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_43;
		ObjectU5BU5D_t234* L_44 = L_40;
		float L_45 = (__this->___m23_14);
		float L_46 = L_45;
		Object_t * L_47 = Box(Single_t522_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11), sizeof(Object_t *))) = (Object_t *)L_47;
		ObjectU5BU5D_t234* L_48 = L_44;
		float L_49 = (__this->___m30_3);
		float L_50 = L_49;
		Object_t * L_51 = Box(Single_t522_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12), sizeof(Object_t *))) = (Object_t *)L_51;
		ObjectU5BU5D_t234* L_52 = L_48;
		float L_53 = (__this->___m31_7);
		float L_54 = L_53;
		Object_t * L_55 = Box(Single_t522_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13), sizeof(Object_t *))) = (Object_t *)L_55;
		ObjectU5BU5D_t234* L_56 = L_52;
		float L_57 = (__this->___m32_11);
		float L_58 = L_57;
		Object_t * L_59 = Box(Single_t522_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14), sizeof(Object_t *))) = (Object_t *)L_59;
		ObjectU5BU5D_t234* L_60 = L_56;
		float L_61 = (__this->___m33_15);
		float L_62 = L_61;
		Object_t * L_63 = Box(Single_t522_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15), sizeof(Object_t *))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral382, L_60, /*hidden argument*/NULL);
		return L_64;
	}
}
// System.String UnityEngine.Matrix4x4::ToString(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral383;
extern "C" String_t* Matrix4x4_ToString_m4219 (Matrix4x4_t31 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		_stringLiteral383 = il2cpp_codegen_string_literal_from_index(383);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, ((int32_t)16)));
		float* L_1 = &(__this->___m00_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m5206(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		float* L_5 = &(__this->___m01_4);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m5206(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_4;
		float* L_9 = &(__this->___m02_8);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m5206(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t234* L_12 = L_8;
		float* L_13 = &(__this->___m03_12);
		String_t* L_14 = ___format;
		String_t* L_15 = Single_ToString_m5206(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		ObjectU5BU5D_t234* L_16 = L_12;
		float* L_17 = &(__this->___m10_1);
		String_t* L_18 = ___format;
		String_t* L_19 = Single_ToString_m5206(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t234* L_20 = L_16;
		float* L_21 = &(__this->___m11_5);
		String_t* L_22 = ___format;
		String_t* L_23 = Single_ToString_m5206(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5, sizeof(Object_t *))) = (Object_t *)L_23;
		ObjectU5BU5D_t234* L_24 = L_20;
		float* L_25 = &(__this->___m12_9);
		String_t* L_26 = ___format;
		String_t* L_27 = Single_ToString_m5206(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6, sizeof(Object_t *))) = (Object_t *)L_27;
		ObjectU5BU5D_t234* L_28 = L_24;
		float* L_29 = &(__this->___m13_13);
		String_t* L_30 = ___format;
		String_t* L_31 = Single_ToString_m5206(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7, sizeof(Object_t *))) = (Object_t *)L_31;
		ObjectU5BU5D_t234* L_32 = L_28;
		float* L_33 = &(__this->___m20_2);
		String_t* L_34 = ___format;
		String_t* L_35 = Single_ToString_m5206(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8, sizeof(Object_t *))) = (Object_t *)L_35;
		ObjectU5BU5D_t234* L_36 = L_32;
		float* L_37 = &(__this->___m21_6);
		String_t* L_38 = ___format;
		String_t* L_39 = Single_ToString_m5206(L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)L_39;
		ObjectU5BU5D_t234* L_40 = L_36;
		float* L_41 = &(__this->___m22_10);
		String_t* L_42 = ___format;
		String_t* L_43 = Single_ToString_m5206(L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_43;
		ObjectU5BU5D_t234* L_44 = L_40;
		float* L_45 = &(__this->___m23_14);
		String_t* L_46 = ___format;
		String_t* L_47 = Single_ToString_m5206(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11), sizeof(Object_t *))) = (Object_t *)L_47;
		ObjectU5BU5D_t234* L_48 = L_44;
		float* L_49 = &(__this->___m30_3);
		String_t* L_50 = ___format;
		String_t* L_51 = Single_ToString_m5206(L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12), sizeof(Object_t *))) = (Object_t *)L_51;
		ObjectU5BU5D_t234* L_52 = L_48;
		float* L_53 = &(__this->___m31_7);
		String_t* L_54 = ___format;
		String_t* L_55 = Single_ToString_m5206(L_53, L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13), sizeof(Object_t *))) = (Object_t *)L_55;
		ObjectU5BU5D_t234* L_56 = L_52;
		float* L_57 = &(__this->___m32_11);
		String_t* L_58 = ___format;
		String_t* L_59 = Single_ToString_m5206(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14), sizeof(Object_t *))) = (Object_t *)L_59;
		ObjectU5BU5D_t234* L_60 = L_56;
		float* L_61 = &(__this->___m33_15);
		String_t* L_62 = ___format;
		String_t* L_63 = Single_ToString_m5206(L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15), sizeof(Object_t *))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral383, L_60, /*hidden argument*/NULL);
		return L_64;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t31  Matrix4x4_Ortho_m4220 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, const MethodInfo* method)
{
	typedef Matrix4x4_t31  (*Matrix4x4_Ortho_m4220_ftn) (float, float, float, float, float, float);
	static Matrix4x4_Ortho_m4220_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Ortho_m4220_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___left, ___right, ___bottom, ___top, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t31  Matrix4x4_Perspective_m4221 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, const MethodInfo* method)
{
	typedef Matrix4x4_t31  (*Matrix4x4_Perspective_m4221_ftn) (float, float, float, float);
	static Matrix4x4_Perspective_m4221_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Perspective_m4221_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___fov, ___aspect, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern TypeInfo* Matrix4x4_t31_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t31  Matrix4x4_op_Multiply_m316 (Object_t * __this /* static, unused */, Matrix4x4_t31  ___lhs, Matrix4x4_t31  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t31  V_0 = {0};
	{
		Initobj (Matrix4x4_t31_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___rhs)->___m00_0);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___rhs)->___m10_1);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___rhs)->___m20_2);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___rhs)->___m30_3);
		(&V_0)->___m00_0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m00_0);
		float L_9 = ((&___rhs)->___m01_4);
		float L_10 = ((&___lhs)->___m01_4);
		float L_11 = ((&___rhs)->___m11_5);
		float L_12 = ((&___lhs)->___m02_8);
		float L_13 = ((&___rhs)->___m21_6);
		float L_14 = ((&___lhs)->___m03_12);
		float L_15 = ((&___rhs)->___m31_7);
		(&V_0)->___m01_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m00_0);
		float L_17 = ((&___rhs)->___m02_8);
		float L_18 = ((&___lhs)->___m01_4);
		float L_19 = ((&___rhs)->___m12_9);
		float L_20 = ((&___lhs)->___m02_8);
		float L_21 = ((&___rhs)->___m22_10);
		float L_22 = ((&___lhs)->___m03_12);
		float L_23 = ((&___rhs)->___m32_11);
		(&V_0)->___m02_8 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m00_0);
		float L_25 = ((&___rhs)->___m03_12);
		float L_26 = ((&___lhs)->___m01_4);
		float L_27 = ((&___rhs)->___m13_13);
		float L_28 = ((&___lhs)->___m02_8);
		float L_29 = ((&___rhs)->___m23_14);
		float L_30 = ((&___lhs)->___m03_12);
		float L_31 = ((&___rhs)->___m33_15);
		(&V_0)->___m03_12 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		float L_32 = ((&___lhs)->___m10_1);
		float L_33 = ((&___rhs)->___m00_0);
		float L_34 = ((&___lhs)->___m11_5);
		float L_35 = ((&___rhs)->___m10_1);
		float L_36 = ((&___lhs)->___m12_9);
		float L_37 = ((&___rhs)->___m20_2);
		float L_38 = ((&___lhs)->___m13_13);
		float L_39 = ((&___rhs)->___m30_3);
		(&V_0)->___m10_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_32*(float)L_33))+(float)((float)((float)L_34*(float)L_35))))+(float)((float)((float)L_36*(float)L_37))))+(float)((float)((float)L_38*(float)L_39))));
		float L_40 = ((&___lhs)->___m10_1);
		float L_41 = ((&___rhs)->___m01_4);
		float L_42 = ((&___lhs)->___m11_5);
		float L_43 = ((&___rhs)->___m11_5);
		float L_44 = ((&___lhs)->___m12_9);
		float L_45 = ((&___rhs)->___m21_6);
		float L_46 = ((&___lhs)->___m13_13);
		float L_47 = ((&___rhs)->___m31_7);
		(&V_0)->___m11_5 = ((float)((float)((float)((float)((float)((float)((float)((float)L_40*(float)L_41))+(float)((float)((float)L_42*(float)L_43))))+(float)((float)((float)L_44*(float)L_45))))+(float)((float)((float)L_46*(float)L_47))));
		float L_48 = ((&___lhs)->___m10_1);
		float L_49 = ((&___rhs)->___m02_8);
		float L_50 = ((&___lhs)->___m11_5);
		float L_51 = ((&___rhs)->___m12_9);
		float L_52 = ((&___lhs)->___m12_9);
		float L_53 = ((&___rhs)->___m22_10);
		float L_54 = ((&___lhs)->___m13_13);
		float L_55 = ((&___rhs)->___m32_11);
		(&V_0)->___m12_9 = ((float)((float)((float)((float)((float)((float)((float)((float)L_48*(float)L_49))+(float)((float)((float)L_50*(float)L_51))))+(float)((float)((float)L_52*(float)L_53))))+(float)((float)((float)L_54*(float)L_55))));
		float L_56 = ((&___lhs)->___m10_1);
		float L_57 = ((&___rhs)->___m03_12);
		float L_58 = ((&___lhs)->___m11_5);
		float L_59 = ((&___rhs)->___m13_13);
		float L_60 = ((&___lhs)->___m12_9);
		float L_61 = ((&___rhs)->___m23_14);
		float L_62 = ((&___lhs)->___m13_13);
		float L_63 = ((&___rhs)->___m33_15);
		(&V_0)->___m13_13 = ((float)((float)((float)((float)((float)((float)((float)((float)L_56*(float)L_57))+(float)((float)((float)L_58*(float)L_59))))+(float)((float)((float)L_60*(float)L_61))))+(float)((float)((float)L_62*(float)L_63))));
		float L_64 = ((&___lhs)->___m20_2);
		float L_65 = ((&___rhs)->___m00_0);
		float L_66 = ((&___lhs)->___m21_6);
		float L_67 = ((&___rhs)->___m10_1);
		float L_68 = ((&___lhs)->___m22_10);
		float L_69 = ((&___rhs)->___m20_2);
		float L_70 = ((&___lhs)->___m23_14);
		float L_71 = ((&___rhs)->___m30_3);
		(&V_0)->___m20_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_64*(float)L_65))+(float)((float)((float)L_66*(float)L_67))))+(float)((float)((float)L_68*(float)L_69))))+(float)((float)((float)L_70*(float)L_71))));
		float L_72 = ((&___lhs)->___m20_2);
		float L_73 = ((&___rhs)->___m01_4);
		float L_74 = ((&___lhs)->___m21_6);
		float L_75 = ((&___rhs)->___m11_5);
		float L_76 = ((&___lhs)->___m22_10);
		float L_77 = ((&___rhs)->___m21_6);
		float L_78 = ((&___lhs)->___m23_14);
		float L_79 = ((&___rhs)->___m31_7);
		(&V_0)->___m21_6 = ((float)((float)((float)((float)((float)((float)((float)((float)L_72*(float)L_73))+(float)((float)((float)L_74*(float)L_75))))+(float)((float)((float)L_76*(float)L_77))))+(float)((float)((float)L_78*(float)L_79))));
		float L_80 = ((&___lhs)->___m20_2);
		float L_81 = ((&___rhs)->___m02_8);
		float L_82 = ((&___lhs)->___m21_6);
		float L_83 = ((&___rhs)->___m12_9);
		float L_84 = ((&___lhs)->___m22_10);
		float L_85 = ((&___rhs)->___m22_10);
		float L_86 = ((&___lhs)->___m23_14);
		float L_87 = ((&___rhs)->___m32_11);
		(&V_0)->___m22_10 = ((float)((float)((float)((float)((float)((float)((float)((float)L_80*(float)L_81))+(float)((float)((float)L_82*(float)L_83))))+(float)((float)((float)L_84*(float)L_85))))+(float)((float)((float)L_86*(float)L_87))));
		float L_88 = ((&___lhs)->___m20_2);
		float L_89 = ((&___rhs)->___m03_12);
		float L_90 = ((&___lhs)->___m21_6);
		float L_91 = ((&___rhs)->___m13_13);
		float L_92 = ((&___lhs)->___m22_10);
		float L_93 = ((&___rhs)->___m23_14);
		float L_94 = ((&___lhs)->___m23_14);
		float L_95 = ((&___rhs)->___m33_15);
		(&V_0)->___m23_14 = ((float)((float)((float)((float)((float)((float)((float)((float)L_88*(float)L_89))+(float)((float)((float)L_90*(float)L_91))))+(float)((float)((float)L_92*(float)L_93))))+(float)((float)((float)L_94*(float)L_95))));
		float L_96 = ((&___lhs)->___m30_3);
		float L_97 = ((&___rhs)->___m00_0);
		float L_98 = ((&___lhs)->___m31_7);
		float L_99 = ((&___rhs)->___m10_1);
		float L_100 = ((&___lhs)->___m32_11);
		float L_101 = ((&___rhs)->___m20_2);
		float L_102 = ((&___lhs)->___m33_15);
		float L_103 = ((&___rhs)->___m30_3);
		(&V_0)->___m30_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_96*(float)L_97))+(float)((float)((float)L_98*(float)L_99))))+(float)((float)((float)L_100*(float)L_101))))+(float)((float)((float)L_102*(float)L_103))));
		float L_104 = ((&___lhs)->___m30_3);
		float L_105 = ((&___rhs)->___m01_4);
		float L_106 = ((&___lhs)->___m31_7);
		float L_107 = ((&___rhs)->___m11_5);
		float L_108 = ((&___lhs)->___m32_11);
		float L_109 = ((&___rhs)->___m21_6);
		float L_110 = ((&___lhs)->___m33_15);
		float L_111 = ((&___rhs)->___m31_7);
		(&V_0)->___m31_7 = ((float)((float)((float)((float)((float)((float)((float)((float)L_104*(float)L_105))+(float)((float)((float)L_106*(float)L_107))))+(float)((float)((float)L_108*(float)L_109))))+(float)((float)((float)L_110*(float)L_111))));
		float L_112 = ((&___lhs)->___m30_3);
		float L_113 = ((&___rhs)->___m02_8);
		float L_114 = ((&___lhs)->___m31_7);
		float L_115 = ((&___rhs)->___m12_9);
		float L_116 = ((&___lhs)->___m32_11);
		float L_117 = ((&___rhs)->___m22_10);
		float L_118 = ((&___lhs)->___m33_15);
		float L_119 = ((&___rhs)->___m32_11);
		(&V_0)->___m32_11 = ((float)((float)((float)((float)((float)((float)((float)((float)L_112*(float)L_113))+(float)((float)((float)L_114*(float)L_115))))+(float)((float)((float)L_116*(float)L_117))))+(float)((float)((float)L_118*(float)L_119))));
		float L_120 = ((&___lhs)->___m30_3);
		float L_121 = ((&___rhs)->___m03_12);
		float L_122 = ((&___lhs)->___m31_7);
		float L_123 = ((&___rhs)->___m13_13);
		float L_124 = ((&___lhs)->___m32_11);
		float L_125 = ((&___rhs)->___m23_14);
		float L_126 = ((&___lhs)->___m33_15);
		float L_127 = ((&___rhs)->___m33_15);
		(&V_0)->___m33_15 = ((float)((float)((float)((float)((float)((float)((float)((float)L_120*(float)L_121))+(float)((float)((float)L_122*(float)L_123))))+(float)((float)((float)L_124*(float)L_125))))+(float)((float)((float)L_126*(float)L_127))));
		Matrix4x4_t31  L_128 = V_0;
		return L_128;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Vector4_t100  Matrix4x4_op_Multiply_m4222 (Object_t * __this /* static, unused */, Matrix4x4_t31  ___lhs, Vector4_t100  ___v, const MethodInfo* method)
{
	Vector4_t100  V_0 = {0};
	{
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___v)->___w_4);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m10_1);
		float L_9 = ((&___v)->___x_1);
		float L_10 = ((&___lhs)->___m11_5);
		float L_11 = ((&___v)->___y_2);
		float L_12 = ((&___lhs)->___m12_9);
		float L_13 = ((&___v)->___z_3);
		float L_14 = ((&___lhs)->___m13_13);
		float L_15 = ((&___v)->___w_4);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m20_2);
		float L_17 = ((&___v)->___x_1);
		float L_18 = ((&___lhs)->___m21_6);
		float L_19 = ((&___v)->___y_2);
		float L_20 = ((&___lhs)->___m22_10);
		float L_21 = ((&___v)->___z_3);
		float L_22 = ((&___lhs)->___m23_14);
		float L_23 = ((&___v)->___w_4);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m30_3);
		float L_25 = ((&___v)->___x_1);
		float L_26 = ((&___lhs)->___m31_7);
		float L_27 = ((&___v)->___y_2);
		float L_28 = ((&___lhs)->___m32_11);
		float L_29 = ((&___v)->___z_3);
		float L_30 = ((&___lhs)->___m33_15);
		float L_31 = ((&___v)->___w_4);
		(&V_0)->___w_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		Vector4_t100  L_32 = V_0;
		return L_32;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Equality_m4223 (Object_t * __this /* static, unused */, Matrix4x4_t31  ___lhs, Matrix4x4_t31  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		Vector4_t100  L_0 = Matrix4x4_GetColumn_m4210((&___lhs), 0, /*hidden argument*/NULL);
		Vector4_t100  L_1 = Matrix4x4_GetColumn_m4210((&___rhs), 0, /*hidden argument*/NULL);
		bool L_2 = Vector4_op_Equality_m4258(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t100  L_3 = Matrix4x4_GetColumn_m4210((&___lhs), 1, /*hidden argument*/NULL);
		Vector4_t100  L_4 = Matrix4x4_GetColumn_m4210((&___rhs), 1, /*hidden argument*/NULL);
		bool L_5 = Vector4_op_Equality_m4258(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t100  L_6 = Matrix4x4_GetColumn_m4210((&___lhs), 2, /*hidden argument*/NULL);
		Vector4_t100  L_7 = Matrix4x4_GetColumn_m4210((&___rhs), 2, /*hidden argument*/NULL);
		bool L_8 = Vector4_op_Equality_m4258(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t100  L_9 = Matrix4x4_GetColumn_m4210((&___lhs), 3, /*hidden argument*/NULL);
		Vector4_t100  L_10 = Matrix4x4_GetColumn_m4210((&___rhs), 3, /*hidden argument*/NULL);
		bool L_11 = Vector4_op_Equality_m4258(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Inequality_m4224 (Object_t * __this /* static, unused */, Matrix4x4_t31  ___lhs, Matrix4x4_t31  ___rhs, const MethodInfo* method)
{
	{
		Matrix4x4_t31  L_0 = ___lhs;
		Matrix4x4_t31  L_1 = ___rhs;
		bool L_2 = Matrix4x4_op_Equality_m4223(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void Bounds__ctor_m3066 (Bounds_t427 * __this, Vector3_t28  ___center, Vector3_t28  ___size, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___center;
		__this->___m_Center_0 = L_0;
		Vector3_t28  L_1 = ___size;
		Vector3_t28  L_2 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/NULL);
		__this->___m_Extents_1 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.Bounds::GetHashCode()
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
extern "C" int32_t Bounds_GetHashCode_m4225 (Bounds_t427 * __this, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	Vector3_t28  V_1 = {0};
	{
		Vector3_t28  L_0 = Bounds_get_center_m3068(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector3_GetHashCode_m4173((&V_0), /*hidden argument*/NULL);
		Vector3_t28  L_2 = Bounds_get_extents_m4227(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector3_GetHashCode_m4173((&V_1), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Bounds_t427_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t28_il2cpp_TypeInfo_var;
extern "C" bool Bounds_Equals_m4226 (Bounds_t427 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bounds_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		Vector3_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	Bounds_t427  V_0 = {0};
	Vector3_t28  V_1 = {0};
	Vector3_t28  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Bounds_t427_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Bounds_t427 *)((Bounds_t427 *)UnBox (L_1, Bounds_t427_il2cpp_TypeInfo_var))));
		Vector3_t28  L_2 = Bounds_get_center_m3068(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector3_t28  L_3 = Bounds_get_center_m3068((&V_0), /*hidden argument*/NULL);
		Vector3_t28  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t28_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = Vector3_Equals_m4174((&V_1), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t28  L_7 = Bounds_get_extents_m4227(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector3_t28  L_8 = Bounds_get_extents_m4227((&V_0), /*hidden argument*/NULL);
		Vector3_t28  L_9 = L_8;
		Object_t * L_10 = Box(Vector3_t28_il2cpp_TypeInfo_var, &L_9);
		bool L_11 = Vector3_Equals_m4174((&V_2), L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		return G_B5_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" Vector3_t28  Bounds_get_center_m3068 (Bounds_t427 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___m_Center_0);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" void Bounds_set_center_m3070 (Bounds_t427 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___value;
		__this->___m_Center_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" Vector3_t28  Bounds_get_size_m3057 (Bounds_t427 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___m_Extents_1);
		Vector3_t28  L_1 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_0, (2.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern "C" void Bounds_set_size_m3069 (Bounds_t427 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___value;
		Vector3_t28  L_1 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_0, (0.5f), /*hidden argument*/NULL);
		__this->___m_Extents_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" Vector3_t28  Bounds_get_extents_m4227 (Bounds_t427 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___m_Extents_1);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" void Bounds_set_extents_m4228 (Bounds_t427 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___value;
		__this->___m_Extents_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" Vector3_t28  Bounds_get_min_m3062 (Bounds_t427 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Bounds_get_center_m3068(__this, /*hidden argument*/NULL);
		Vector3_t28  L_1 = Bounds_get_extents_m4227(__this, /*hidden argument*/NULL);
		Vector3_t28  L_2 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern "C" void Bounds_set_min_m4229 (Bounds_t427 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___value;
		Vector3_t28  L_1 = Bounds_get_max_m3076(__this, /*hidden argument*/NULL);
		Bounds_SetMinMax_m4231(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" Vector3_t28  Bounds_get_max_m3076 (Bounds_t427 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Bounds_get_center_m3068(__this, /*hidden argument*/NULL);
		Vector3_t28  L_1 = Bounds_get_extents_m4227(__this, /*hidden argument*/NULL);
		Vector3_t28  L_2 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern "C" void Bounds_set_max_m4230 (Bounds_t427 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Bounds_get_min_m3062(__this, /*hidden argument*/NULL);
		Vector3_t28  L_1 = ___value;
		Bounds_SetMinMax_m4231(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds_SetMinMax_m4231 (Bounds_t427 * __this, Vector3_t28  ___min, Vector3_t28  ___max, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___max;
		Vector3_t28  L_1 = ___min;
		Vector3_t28  L_2 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Vector3_t28  L_3 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_2, (0.5f), /*hidden argument*/NULL);
		Bounds_set_extents_m4228(__this, L_3, /*hidden argument*/NULL);
		Vector3_t28  L_4 = ___min;
		Vector3_t28  L_5 = Bounds_get_extents_m4227(__this, /*hidden argument*/NULL);
		Vector3_t28  L_6 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Bounds_set_center_m3070(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" void Bounds_Encapsulate_m3075 (Bounds_t427 * __this, Vector3_t28  ___point, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Bounds_get_min_m3062(__this, /*hidden argument*/NULL);
		Vector3_t28  L_1 = ___point;
		Vector3_t28  L_2 = Vector3_Min_m3073(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Vector3_t28  L_3 = Bounds_get_max_m3076(__this, /*hidden argument*/NULL);
		Vector3_t28  L_4 = ___point;
		Vector3_t28  L_5 = Vector3_Max_m3074(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Bounds_SetMinMax_m4231(__this, L_2, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
extern "C" void Bounds_Encapsulate_m4232 (Bounds_t427 * __this, Bounds_t427  ___bounds, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Bounds_get_center_m3068((&___bounds), /*hidden argument*/NULL);
		Vector3_t28  L_1 = Bounds_get_extents_m4227((&___bounds), /*hidden argument*/NULL);
		Vector3_t28  L_2 = Vector3_op_Subtraction_m336(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Bounds_Encapsulate_m3075(__this, L_2, /*hidden argument*/NULL);
		Vector3_t28  L_3 = Bounds_get_center_m3068((&___bounds), /*hidden argument*/NULL);
		Vector3_t28  L_4 = Bounds_get_extents_m4227((&___bounds), /*hidden argument*/NULL);
		Vector3_t28  L_5 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Bounds_Encapsulate_m3075(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Bounds_Expand_m4233 (Bounds_t427 * __this, float ___amount, const MethodInfo* method)
{
	{
		float L_0 = ___amount;
		___amount = ((float)((float)L_0*(float)(0.5f)));
		Vector3_t28  L_1 = Bounds_get_extents_m4227(__this, /*hidden argument*/NULL);
		float L_2 = ___amount;
		float L_3 = ___amount;
		float L_4 = ___amount;
		Vector3_t28  L_5 = {0};
		Vector3__ctor_m396(&L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		Vector3_t28  L_6 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		Bounds_set_extents_m4228(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern "C" void Bounds_Expand_m4234 (Bounds_t427 * __this, Vector3_t28  ___amount, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Bounds_get_extents_m4227(__this, /*hidden argument*/NULL);
		Vector3_t28  L_1 = ___amount;
		Vector3_t28  L_2 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/NULL);
		Vector3_t28  L_3 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Bounds_set_extents_m4228(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern "C" bool Bounds_Intersects_m4235 (Bounds_t427 * __this, Bounds_t427  ___bounds, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
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
	int32_t G_B7_0 = 0;
	{
		Vector3_t28  L_0 = Bounds_get_min_m3062(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		Vector3_t28  L_2 = Bounds_get_max_m3076((&___bounds), /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = ((&V_1)->___x_1);
		if ((!(((float)L_1) <= ((float)L_3))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t28  L_4 = Bounds_get_max_m3076(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = ((&V_2)->___x_1);
		Vector3_t28  L_6 = Bounds_get_min_m3062((&___bounds), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = ((&V_3)->___x_1);
		if ((!(((float)L_5) >= ((float)L_7))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t28  L_8 = Bounds_get_min_m3062(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = ((&V_4)->___y_2);
		Vector3_t28  L_10 = Bounds_get_max_m3076((&___bounds), /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = ((&V_5)->___y_2);
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t28  L_12 = Bounds_get_max_m3076(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		float L_13 = ((&V_6)->___y_2);
		Vector3_t28  L_14 = Bounds_get_min_m3062((&___bounds), /*hidden argument*/NULL);
		V_7 = L_14;
		float L_15 = ((&V_7)->___y_2);
		if ((!(((float)L_13) >= ((float)L_15))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t28  L_16 = Bounds_get_min_m3062(__this, /*hidden argument*/NULL);
		V_8 = L_16;
		float L_17 = ((&V_8)->___z_3);
		Vector3_t28  L_18 = Bounds_get_max_m3076((&___bounds), /*hidden argument*/NULL);
		V_9 = L_18;
		float L_19 = ((&V_9)->___z_3);
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t28  L_20 = Bounds_get_max_m3076(__this, /*hidden argument*/NULL);
		V_10 = L_20;
		float L_21 = ((&V_10)->___z_3);
		Vector3_t28  L_22 = Bounds_get_min_m3062((&___bounds), /*hidden argument*/NULL);
		V_11 = L_22;
		float L_23 = ((&V_11)->___z_3);
		G_B7_0 = ((((int32_t)((!(((float)L_21) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B7_0 = 0;
	}

IL_00d7:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" bool Bounds_Internal_Contains_m4236 (Object_t * __this /* static, unused */, Bounds_t427  ___m, Vector3_t28  ___point, const MethodInfo* method)
{
	{
		bool L_0 = Bounds_INTERNAL_CALL_Internal_Contains_m4237(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_Contains_m4237 (Object_t * __this /* static, unused */, Bounds_t427 * ___m, Vector3_t28 * ___point, const MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_Contains_m4237_ftn) (Bounds_t427 *, Vector3_t28 *);
	static Bounds_INTERNAL_CALL_Internal_Contains_m4237_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_Contains_m4237_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern "C" bool Bounds_Contains_m4238 (Bounds_t427 * __this, Vector3_t28  ___point, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___point;
		bool L_1 = Bounds_Internal_Contains_m4236(NULL /*static, unused*/, (*(Bounds_t427 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" float Bounds_Internal_SqrDistance_m4239 (Object_t * __this /* static, unused */, Bounds_t427  ___m, Vector3_t28  ___point, const MethodInfo* method)
{
	{
		float L_0 = Bounds_INTERNAL_CALL_Internal_SqrDistance_m4240(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" float Bounds_INTERNAL_CALL_Internal_SqrDistance_m4240 (Object_t * __this /* static, unused */, Bounds_t427 * ___m, Vector3_t28 * ___point, const MethodInfo* method)
{
	typedef float (*Bounds_INTERNAL_CALL_Internal_SqrDistance_m4240_ftn) (Bounds_t427 *, Vector3_t28 *);
	static Bounds_INTERNAL_CALL_Internal_SqrDistance_m4240_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_SqrDistance_m4240_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
extern "C" float Bounds_SqrDistance_m4241 (Bounds_t427 * __this, Vector3_t28  ___point, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___point;
		float L_1 = Bounds_Internal_SqrDistance_m4239(NULL /*static, unused*/, (*(Bounds_t427 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_Internal_IntersectRay_m4242 (Object_t * __this /* static, unused */, Ray_t529 * ___ray, Bounds_t427 * ___bounds, float* ___distance, const MethodInfo* method)
{
	{
		Ray_t529 * L_0 = ___ray;
		Bounds_t427 * L_1 = ___bounds;
		float* L_2 = ___distance;
		bool L_3 = Bounds_INTERNAL_CALL_Internal_IntersectRay_m4243(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m4243 (Object_t * __this /* static, unused */, Ray_t529 * ___ray, Bounds_t427 * ___bounds, float* ___distance, const MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_IntersectRay_m4243_ftn) (Ray_t529 *, Bounds_t427 *, float*);
	static Bounds_INTERNAL_CALL_Internal_IntersectRay_m4243_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_IntersectRay_m4243_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(___ray, ___bounds, ___distance);
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern "C" bool Bounds_IntersectRay_m4244 (Bounds_t427 * __this, Ray_t529  ___ray, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = Bounds_Internal_IntersectRay_m4242(NULL /*static, unused*/, (&___ray), __this, (&V_0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern "C" bool Bounds_IntersectRay_m4245 (Bounds_t427 * __this, Ray_t529  ___ray, float* ___distance, const MethodInfo* method)
{
	{
		float* L_0 = ___distance;
		bool L_1 = Bounds_Internal_IntersectRay_m4242(NULL /*static, unused*/, (&___ray), __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t28  Bounds_Internal_GetClosestPoint_m4246 (Object_t * __this /* static, unused */, Bounds_t427 * ___bounds, Vector3_t28 * ___point, const MethodInfo* method)
{
	{
		Bounds_t427 * L_0 = ___bounds;
		Vector3_t28 * L_1 = ___point;
		Vector3_t28  L_2 = Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m4247(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t28  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m4247 (Object_t * __this /* static, unused */, Bounds_t427 * ___bounds, Vector3_t28 * ___point, const MethodInfo* method)
{
	typedef Vector3_t28  (*Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m4247_ftn) (Bounds_t427 *, Vector3_t28 *);
	static Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m4247_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m4247_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___bounds, ___point);
}
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
extern "C" Vector3_t28  Bounds_ClosestPoint_m4248 (Bounds_t427 * __this, Vector3_t28  ___point, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Bounds_Internal_GetClosestPoint_m4246(NULL /*static, unused*/, __this, (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Bounds::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t28_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral384;
extern "C" String_t* Bounds_ToString_m4249 (Bounds_t427 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Vector3_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		_stringLiteral384 = il2cpp_codegen_string_literal_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 2));
		Vector3_t28  L_1 = (__this->___m_Center_0);
		Vector3_t28  L_2 = L_1;
		Object_t * L_3 = Box(Vector3_t28_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		Vector3_t28  L_5 = (__this->___m_Extents_1);
		Vector3_t28  L_6 = L_5;
		Object_t * L_7 = Box(Vector3_t28_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral384, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String UnityEngine.Bounds::ToString(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral384;
extern "C" String_t* Bounds_ToString_m4250 (Bounds_t427 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		_stringLiteral384 = il2cpp_codegen_string_literal_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 2));
		Vector3_t28 * L_1 = &(__this->___m_Center_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Vector3_ToString_m4177(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		Vector3_t28 * L_5 = &(__this->___m_Extents_1);
		String_t* L_6 = ___format;
		String_t* L_7 = Vector3_ToString_m4177(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral384, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Equality_m4251 (Object_t * __this /* static, unused */, Bounds_t427  ___lhs, Bounds_t427  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Vector3_t28  L_0 = Bounds_get_center_m3068((&___lhs), /*hidden argument*/NULL);
		Vector3_t28  L_1 = Bounds_get_center_m3068((&___rhs), /*hidden argument*/NULL);
		bool L_2 = Vector3_op_Equality_m3881(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t28  L_3 = Bounds_get_extents_m4227((&___lhs), /*hidden argument*/NULL);
		Vector3_t28  L_4 = Bounds_get_extents_m4227((&___rhs), /*hidden argument*/NULL);
		bool L_5 = Vector3_op_Equality_m3881(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Inequality_m3060 (Object_t * __this /* static, unused */, Bounds_t427  ___lhs, Bounds_t427  ___rhs, const MethodInfo* method)
{
	{
		Bounds_t427  L_0 = ___lhs;
		Bounds_t427  L_1 = ___rhs;
		bool L_2 = Bounds_op_Equality_m4251(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Vector4__ctor_m284 (Vector4_t100 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		float L_3 = ___w;
		__this->___w_4 = L_3;
		return;
	}
}
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t956_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral385;
extern "C" float Vector4_get_Item_m2931 (Vector4_t100 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t956_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral385 = il2cpp_codegen_string_literal_from_index(385);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0024;
		}
		if (L_1 == 2)
		{
			goto IL_002b;
		}
		if (L_1 == 3)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0039;
	}

IL_001d:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0024:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_002b:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_0032:
	{
		float L_5 = (__this->___w_4);
		return L_5;
	}

IL_0039:
	{
		IndexOutOfRangeException_t956 * L_6 = (IndexOutOfRangeException_t956 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t956_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m5205(L_6, _stringLiteral385, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}
}
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t956_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral385;
extern "C" void Vector4_set_Item_m2933 (Vector4_t100 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t956_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral385 = il2cpp_codegen_string_literal_from_index(385);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0029;
		}
		if (L_1 == 2)
		{
			goto IL_0035;
		}
		if (L_1 == 3)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_004d;
	}

IL_001d:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0058;
	}

IL_0029:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0058;
	}

IL_0035:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0058;
	}

IL_0041:
	{
		float L_5 = ___value;
		__this->___w_4 = L_5;
		goto IL_0058;
	}

IL_004d:
	{
		IndexOutOfRangeException_t956 * L_6 = (IndexOutOfRangeException_t956 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t956_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m5205(L_6, _stringLiteral385, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t Vector4_GetHashCode_m4252 (Vector4_t100 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m5197(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m5197(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m5197(L_4, /*hidden argument*/NULL);
		float* L_6 = &(__this->___w_4);
		int32_t L_7 = Single_GetHashCode_m5197(L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Vector4_t100_il2cpp_TypeInfo_var;
extern "C" bool Vector4_Equals_m4253 (Vector4_t100 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t100  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector4_t100_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector4_t100 *)((Vector4_t100 *)UnBox (L_1, Vector4_t100_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m2850(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m2850(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m2850(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_4);
		float L_12 = ((&V_0)->___w_4);
		bool L_13 = Single_Equals_m2850(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.Vector4::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral379;
extern "C" String_t* Vector4_ToString_m4254 (Vector4_t100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral379 = il2cpp_codegen_string_literal_from_index(379);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t522_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t522_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t522_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t234* L_12 = L_8;
		float L_13 = (__this->___w_4);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t522_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral379, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern "C" float Vector4_Dot_m4255 (Object_t * __this /* static, unused */, Vector4_t100  ___a, Vector4_t100  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" float Vector4_SqrMagnitude_m4256 (Object_t * __this /* static, unused */, Vector4_t100  ___a, const MethodInfo* method)
{
	{
		Vector4_t100  L_0 = ___a;
		Vector4_t100  L_1 = ___a;
		float L_2 = Vector4_Dot_m4255(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C" float Vector4_get_sqrMagnitude_m2917 (Vector4_t100 * __this, const MethodInfo* method)
{
	{
		float L_0 = Vector4_Dot_m4255(NULL /*static, unused*/, (*(Vector4_t100 *)__this), (*(Vector4_t100 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C" Vector4_t100  Vector4_get_zero_m331 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector4_t100  L_0 = {0};
		Vector4__ctor_m284(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
extern "C" Vector4_t100  Vector4_get_one_m400 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector4_t100  L_0 = {0};
		Vector4__ctor_m284(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t100  Vector4_op_Subtraction_m4257 (Object_t * __this /* static, unused */, Vector4_t100  ___a, Vector4_t100  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		Vector4_t100  L_8 = {0};
		Vector4__ctor_m284(&L_8, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), ((float)((float)L_6-(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern "C" Vector4_t100  Vector4_op_Multiply_m290 (Object_t * __this /* static, unused */, Vector4_t100  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		float L_6 = ((&___a)->___w_4);
		float L_7 = ___d;
		Vector4_t100  L_8 = {0};
		Vector4__ctor_m284(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(System.Single,UnityEngine.Vector4)
extern "C" Vector4_t100  Vector4_op_Multiply_m401 (Object_t * __this /* static, unused */, float ___d, Vector4_t100  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		float L_6 = ((&___a)->___w_4);
		float L_7 = ___d;
		Vector4_t100  L_8 = {0};
		Vector4__ctor_m284(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C" Vector4_t100  Vector4_op_Division_m2929 (Object_t * __this /* static, unused */, Vector4_t100  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		float L_6 = ((&___a)->___w_4);
		float L_7 = ___d;
		Vector4_t100  L_8 = {0};
		Vector4__ctor_m284(&L_8, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_6/(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m4258 (Object_t * __this /* static, unused */, Vector4_t100  ___lhs, Vector4_t100  ___rhs, const MethodInfo* method)
{
	{
		Vector4_t100  L_0 = ___lhs;
		Vector4_t100  L_1 = ___rhs;
		Vector4_t100  L_2 = Vector4_op_Subtraction_m4257(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector4_SqrMagnitude_m4256(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector4_t100  Vector4_op_Implicit_m397 (Object_t * __this /* static, unused */, Vector3_t28  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		float L_2 = ((&___v)->___z_3);
		Vector4_t100  L_3 = {0};
		Vector4__ctor_m284(&L_3, L_0, L_1, L_2, (0.0f), /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" Vector3_t28  Vector4_op_Implicit_m1127 (Object_t * __this /* static, unused */, Vector4_t100  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		float L_2 = ((&___v)->___z_3);
		Vector3_t28  L_3 = {0};
		Vector3__ctor_m396(&L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" Vector4_t100  Vector4_op_Implicit_m446 (Object_t * __this /* static, unused */, Vector2_t85  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector4_t100  L_2 = {0};
		Vector4__ctor_m284(&L_2, L_0, L_1, (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void Ray__ctor_m3964 (Ray_t529 * __this, Vector3_t28  ___origin, Vector3_t28  ___direction, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___origin;
		__this->___m_Origin_0 = L_0;
		Vector3_t28  L_1 = Vector3_get_normalized_m3087((&___direction), /*hidden argument*/NULL);
		__this->___m_Direction_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" Vector3_t28  Ray_get_origin_m2739 (Ray_t529 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___m_Origin_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" Vector3_t28  Ray_get_direction_m2740 (Ray_t529 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___m_Direction_1);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" Vector3_t28  Ray_GetPoint_m2975 (Ray_t529 * __this, float ___distance, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___m_Origin_0);
		Vector3_t28  L_1 = (__this->___m_Direction_1);
		float L_2 = ___distance;
		Vector3_t28  L_3 = Vector3_op_Multiply_m328(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t28  L_4 = Vector3_op_Addition_m389(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.Ray::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t28_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral386;
extern "C" String_t* Ray_ToString_m4259 (Ray_t529 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Vector3_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		_stringLiteral386 = il2cpp_codegen_string_literal_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 2));
		Vector3_t28  L_1 = (__this->___m_Origin_0);
		Vector3_t28  L_2 = L_1;
		Object_t * L_3 = Box(Vector3_t28_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		Vector3_t28  L_5 = (__this->___m_Direction_1);
		Vector3_t28  L_6 = L_5;
		Object_t * L_7 = Box(Vector3_t28_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral386, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void Plane__ctor_m2973 (Plane_t554 * __this, Vector3_t28  ___inNormal, Vector3_t28  ___inPoint, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___inNormal;
		Vector3_t28  L_1 = Vector3_Normalize_m4175(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___m_Normal_0 = L_1;
		Vector3_t28  L_2 = ___inNormal;
		Vector3_t28  L_3 = ___inPoint;
		float L_4 = Vector3_Dot_m334(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->___m_Distance_1 = ((-L_4));
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" Vector3_t28  Plane_get_normal_m3877 (Plane_t554 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___m_Normal_0);
		return L_0;
	}
}
// System.Single UnityEngine.Plane::get_distance()
extern "C" float Plane_get_distance_m4260 (Plane_t554 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_1);
		return L_0;
	}
}
// System.Single UnityEngine.Plane::GetDistanceToPoint(UnityEngine.Vector3)
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
extern "C" float Plane_GetDistanceToPoint_m3963 (Plane_t554 * __this, Vector3_t28  ___inPt, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Plane_get_normal_m3877(__this, /*hidden argument*/NULL);
		Vector3_t28  L_1 = ___inPt;
		float L_2 = Vector3_Dot_m334(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Plane_get_distance_m4260(__this, /*hidden argument*/NULL);
		return ((float)((float)L_2+(float)L_3));
	}
}
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" bool Plane_Raycast_m2974 (Plane_t554 * __this, Ray_t529  ___ray, float* ___enter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t28  L_0 = Ray_get_direction_m2740((&___ray), /*hidden argument*/NULL);
		Vector3_t28  L_1 = Plane_get_normal_m3877(__this, /*hidden argument*/NULL);
		float L_2 = Vector3_Dot_m334(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t28  L_3 = Ray_get_origin_m2739((&___ray), /*hidden argument*/NULL);
		Vector3_t28  L_4 = Plane_get_normal_m3877(__this, /*hidden argument*/NULL);
		float L_5 = Vector3_Dot_m334(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Plane_get_distance_m4260(__this, /*hidden argument*/NULL);
		V_1 = ((float)((float)((-L_5))-(float)L_6));
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		bool L_8 = Mathf_Approximately_m2715(NULL /*static, unused*/, L_7, (0.0f), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		float* L_9 = ___enter;
		*((float*)(L_9)) = (float)(0.0f);
		return 0;
	}

IL_0047:
	{
		float* L_10 = ___enter;
		float L_11 = V_1;
		float L_12 = V_0;
		*((float*)(L_10)) = (float)((float)((float)L_11/(float)L_12));
		float* L_13 = ___enter;
		return ((((float)(*((float*)L_13))) > ((float)(0.0f)))? 1 : 0);
	}
}
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternal.h"
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternalMethodDeclarations.h"
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern TypeInfo* MathfInternal_t759_il2cpp_TypeInfo_var;
extern "C" void MathfInternal__cctor_m4261 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MathfInternal_t759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t759_StaticFields*)MathfInternal_t759_il2cpp_TypeInfo_var->static_fields)->___FloatMinNormal_0 = (1.17549435E-38f);
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t759_StaticFields*)MathfInternal_t759_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1 = (1.401298E-45f);
		float L_0 = ((MathfInternal_t759_StaticFields*)MathfInternal_t759_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1;
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t759_StaticFields*)MathfInternal_t759_il2cpp_TypeInfo_var->static_fields)->___IsFlushToZeroEnabled_2 = ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		return;
	}
}
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_Mathf.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Void UnityEngine.Mathf::.cctor()
extern TypeInfo* MathfInternal_t759_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void Mathf__cctor_m4262 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MathfInternal_t759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t759_il2cpp_TypeInfo_var);
		bool L_0 = ((MathfInternal_t759_StaticFields*)MathfInternal_t759_il2cpp_TypeInfo_var->static_fields)->___IsFlushToZeroEnabled_2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t759_il2cpp_TypeInfo_var);
		float L_1 = ((MathfInternal_t759_StaticFields*)MathfInternal_t759_il2cpp_TypeInfo_var->static_fields)->___FloatMinNormal_0;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t759_il2cpp_TypeInfo_var);
		float L_2 = ((MathfInternal_t759_StaticFields*)MathfInternal_t759_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((Mathf_t101_StaticFields*)Mathf_t101_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0 = G_B3_0;
		return;
	}
}
// System.Single UnityEngine.Mathf::Sin(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" float Mathf_Sin_m4263 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sin((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Cos(System.Single)
extern "C" float Mathf_Cos_m4264 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = cos((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Tan(System.Single)
extern "C" float Mathf_Tan_m4265 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = tan((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Acos(System.Single)
extern "C" float Mathf_Acos_m4266 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = acos((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
extern "C" float Mathf_Sqrt_m4267 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sqrt((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C" float Mathf_Abs_m4268 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = fabsf(L_0);
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" float Mathf_Min_m323 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t Mathf_Min_m2993 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" float Mathf_Max_m322 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" int32_t Mathf_Max_m2991 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
extern "C" float Mathf_Pow_m4269 (Object_t * __this /* static, unused */, float ___f, float ___p, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = pow((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" float Mathf_Log_m453 (Object_t * __this /* static, unused */, float ___f, float ___p, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = Math_Log_m5207(NULL /*static, unused*/, (((double)L_0)), (((double)L_1)), /*hidden argument*/NULL);
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Log(System.Single)
extern "C" float Mathf_Log_m4270 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = log((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Floor(System.Single)
extern "C" float Mathf_Floor_m4271 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Round(System.Single)
extern "C" float Mathf_Round_m4272 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" int32_t Mathf_CeilToInt_m437 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = ceil((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" int32_t Mathf_FloorToInt_m377 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" int32_t Mathf_RoundToInt_m2922 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C" float Mathf_Sign_m3065 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (-1.0f);
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Clamp_m368 (Object_t * __this /* static, unused */, float ___value, float ___min, float ___max, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		float L_1 = ___min;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		float L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		float L_3 = ___value;
		float L_4 = ___max;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		float L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		float L_6 = ___value;
		return L_6;
	}
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" int32_t Mathf_Clamp_m438 (Object_t * __this /* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = ___min;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_3 = ___value;
		int32_t L_4 = ___max;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		int32_t L_6 = ___value;
		return L_6;
	}
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" float Mathf_Clamp01_m2912 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (0.0f);
	}

IL_0011:
	{
		float L_1 = ___value;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (1.0f);
	}

IL_0022:
	{
		float L_2 = ___value;
		return L_2;
	}
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" float Mathf_Lerp_m1216 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___a;
		float L_1 = ___b;
		float L_2 = ___a;
		float L_3 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Clamp01_m2912(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return ((float)((float)L_0+(float)((float)((float)((float)((float)L_1-(float)L_2))*(float)L_4))));
	}
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" bool Mathf_Approximately_m2715 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___b;
		float L_1 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = ___a;
		float L_4 = fabsf(L_3);
		float L_5 = ___b;
		float L_6 = fabsf(L_5);
		float L_7 = Mathf_Max_m322(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		float L_8 = ((Mathf_t101_StaticFields*)Mathf_t101_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		float L_9 = Mathf_Max_m322(NULL /*static, unused*/, ((float)((float)(1.0E-06f)*(float)L_7)), ((float)((float)L_8*(float)(8.0f))), /*hidden argument*/NULL);
		return ((((float)L_2) < ((float)L_9))? 1 : 0);
	}
}
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" float Mathf_SmoothDamp_m3058 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, const MethodInfo* method)
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
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		float L_0 = ___smoothTime;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m322(NULL /*static, unused*/, (0.0001f), L_0, /*hidden argument*/NULL);
		___smoothTime = L_1;
		float L_2 = ___smoothTime;
		V_0 = ((float)((float)(2.0f)/(float)L_2));
		float L_3 = V_0;
		float L_4 = ___deltaTime;
		V_1 = ((float)((float)L_3*(float)L_4));
		float L_5 = V_1;
		float L_6 = V_1;
		float L_7 = V_1;
		float L_8 = V_1;
		float L_9 = V_1;
		float L_10 = V_1;
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)((float)((float)(1.0f)+(float)L_5))+(float)((float)((float)((float)((float)(0.48f)*(float)L_6))*(float)L_7))))+(float)((float)((float)((float)((float)((float)((float)(0.235f)*(float)L_8))*(float)L_9))*(float)L_10))))));
		float L_11 = ___current;
		float L_12 = ___target;
		V_3 = ((float)((float)L_11-(float)L_12));
		float L_13 = ___target;
		V_4 = L_13;
		float L_14 = ___maxSpeed;
		float L_15 = ___smoothTime;
		V_5 = ((float)((float)L_14*(float)L_15));
		float L_16 = V_3;
		float L_17 = V_5;
		float L_18 = V_5;
		float L_19 = Mathf_Clamp_m368(NULL /*static, unused*/, L_16, ((-L_17)), L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		float L_20 = ___current;
		float L_21 = V_3;
		___target = ((float)((float)L_20-(float)L_21));
		float* L_22 = ___currentVelocity;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___deltaTime;
		V_6 = ((float)((float)((float)((float)(*((float*)L_22))+(float)((float)((float)L_23*(float)L_24))))*(float)L_25));
		float* L_26 = ___currentVelocity;
		float* L_27 = ___currentVelocity;
		float L_28 = V_0;
		float L_29 = V_6;
		float L_30 = V_2;
		*((float*)(L_26)) = (float)((float)((float)((float)((float)(*((float*)L_27))-(float)((float)((float)L_28*(float)L_29))))*(float)L_30));
		float L_31 = ___target;
		float L_32 = V_3;
		float L_33 = V_6;
		float L_34 = V_2;
		V_7 = ((float)((float)L_31+(float)((float)((float)((float)((float)L_32+(float)L_33))*(float)L_34))));
		float L_35 = V_4;
		float L_36 = ___current;
		float L_37 = V_7;
		float L_38 = V_4;
		if ((!(((uint32_t)((((float)((float)((float)L_35-(float)L_36))) > ((float)(0.0f)))? 1 : 0)) == ((uint32_t)((((float)L_37) > ((float)L_38))? 1 : 0)))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_39 = V_4;
		V_7 = L_39;
		float* L_40 = ___currentVelocity;
		float L_41 = V_7;
		float L_42 = V_4;
		float L_43 = ___deltaTime;
		*((float*)(L_40)) = (float)((float)((float)((float)((float)L_41-(float)L_42))/(float)L_43));
	}

IL_00a0:
	{
		float L_44 = V_7;
		return L_44;
	}
}
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" float Mathf_Repeat_m2942 (Object_t * __this /* static, unused */, float ___t, float ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		float L_1 = ___t;
		float L_2 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_3 = floorf(((float)((float)L_1/(float)L_2)));
		float L_4 = ___length;
		return ((float)((float)L_0-(float)((float)((float)L_3*(float)L_4))));
	}
}
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" float Mathf_InverseLerp_m2941 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		float L_2 = ___value;
		float L_3 = ___a;
		float L_4 = ___b;
		float L_5 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Clamp01_m2912(NULL /*static, unused*/, ((float)((float)((float)((float)L_2-(float)L_3))/(float)((float)((float)L_4-(float)L_5)))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0014:
	{
		return (0.0f);
	}
}
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformPropertiesMethodDeclarations.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTrackerMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"
extern "C" void DrivenRectTransformTracker_Add_m3051 (DrivenRectTransformTracker_t421 * __this, Object_t99 * ___driver, RectTransform_t351 * ___rectTransform, int32_t ___drivenProperties, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
extern "C" void DrivenRectTransformTracker_Clear_m3050 (DrivenRectTransformTracker_t421 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_Edge.h"
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_EdgeMethodDeclarations.h"
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_Axis.h"
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_AxisMethodDeclarations.h"
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertie.h"
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertieMethodDeclarations.h"
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void ReapplyDrivenProperties__ctor_m3146 (ReapplyDrivenProperties_t575 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
extern "C" void ReapplyDrivenProperties_Invoke_m4273 (ReapplyDrivenProperties_t575 * __this, RectTransform_t351 * ___driven, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ReapplyDrivenProperties_Invoke_m4273((ReapplyDrivenProperties_t575 *)__this->___prev_9,___driven, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, RectTransform_t351 * ___driven, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, RectTransform_t351 * ___driven, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ReapplyDrivenProperties_t575(Il2CppObject* delegate, RectTransform_t351 * ___driven)
{
	// Marshaling of parameter '___driven' to native representation
	RectTransform_t351 * ____driven_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.RectTransform'."));
}
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * ReapplyDrivenProperties_BeginInvoke_m4274 (ReapplyDrivenProperties_t575 * __this, RectTransform_t351 * ___driven, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___driven;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
extern "C" void ReapplyDrivenProperties_EndInvoke_m4275 (ReapplyDrivenProperties_t575 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// System.Void UnityEngine.RectTransform::add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertie.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* RectTransform_t351_il2cpp_TypeInfo_var;
extern TypeInfo* ReapplyDrivenProperties_t575_il2cpp_TypeInfo_var;
extern "C" void RectTransform_add_reapplyDrivenProperties_m3147 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t575 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		ReapplyDrivenProperties_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t575 * L_0 = ((RectTransform_t351_StaticFields*)RectTransform_t351_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t575 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((RectTransform_t351_StaticFields*)RectTransform_t351_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t575 *)CastclassSealed(L_2, ReapplyDrivenProperties_t575_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.RectTransform::remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
extern TypeInfo* RectTransform_t351_il2cpp_TypeInfo_var;
extern TypeInfo* ReapplyDrivenProperties_t575_il2cpp_TypeInfo_var;
extern "C" void RectTransform_remove_reapplyDrivenProperties_m4276 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t575 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		ReapplyDrivenProperties_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t575 * L_0 = ((RectTransform_t351_StaticFields*)RectTransform_t351_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t575 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((RectTransform_t351_StaticFields*)RectTransform_t351_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t575 *)CastclassSealed(L_2, ReapplyDrivenProperties_t575_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern "C" Rect_t232  RectTransform_get_rect_m2825 (RectTransform_t351 * __this, const MethodInfo* method)
{
	Rect_t232  V_0 = {0};
	{
		RectTransform_INTERNAL_get_rect_m4277(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t232  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void RectTransform_INTERNAL_get_rect_m4277 (RectTransform_t351 * __this, Rect_t232 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_rect_m4277_ftn) (RectTransform_t351 *, Rect_t232 *);
	static RectTransform_INTERNAL_get_rect_m4277_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_rect_m4277_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMin()
extern "C" Vector2_t85  RectTransform_get_anchorMin_m2836 (RectTransform_t351 * __this, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMin_m4278(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void RectTransform_set_anchorMin_m2783 (RectTransform_t351 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMin_m4279(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMin_m4278 (RectTransform_t351 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMin_m4278_ftn) (RectTransform_t351 *, Vector2_t85 *);
	static RectTransform_INTERNAL_get_anchorMin_m4278_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMin_m4278_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMin_m4279 (RectTransform_t351 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMin_m4279_ftn) (RectTransform_t351 *, Vector2_t85 *);
	static RectTransform_INTERNAL_set_anchorMin_m4279_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMin_m4279_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
extern "C" Vector2_t85  RectTransform_get_anchorMax_m2837 (RectTransform_t351 * __this, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMax_m4280(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchorMax_m2784 (RectTransform_t351 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMax_m4281(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMax_m4280 (RectTransform_t351 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMax_m4280_ftn) (RectTransform_t351 *, Vector2_t85 *);
	static RectTransform_INTERNAL_get_anchorMax_m4280_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMax_m4280_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMax_m4281 (RectTransform_t351 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMax_m4281_ftn) (RectTransform_t351 *, Vector2_t85 *);
	static RectTransform_INTERNAL_set_anchorMax_m4281_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMax_m4281_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C" Vector2_t85  RectTransform_get_anchoredPosition_m2838 (RectTransform_t351 * __this, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchoredPosition_m4282(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchoredPosition_m2785 (RectTransform_t351 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchoredPosition_m4283(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchoredPosition_m4282 (RectTransform_t351 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchoredPosition_m4282_ftn) (RectTransform_t351 *, Vector2_t85 *);
	static RectTransform_INTERNAL_get_anchoredPosition_m4282_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchoredPosition_m4282_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchoredPosition_m4283 (RectTransform_t351 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchoredPosition_m4283_ftn) (RectTransform_t351 *, Vector2_t85 *);
	static RectTransform_INTERNAL_set_anchoredPosition_m4283_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchoredPosition_m4283_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" Vector2_t85  RectTransform_get_sizeDelta_m2798 (RectTransform_t351 * __this, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		RectTransform_INTERNAL_get_sizeDelta_m4284(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" void RectTransform_set_sizeDelta_m2778 (RectTransform_t351 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_sizeDelta_m4285(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_sizeDelta_m4284 (RectTransform_t351 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_sizeDelta_m4284_ftn) (RectTransform_t351 *, Vector2_t85 *);
	static RectTransform_INTERNAL_get_sizeDelta_m4284_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_sizeDelta_m4284_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_sizeDelta_m4285 (RectTransform_t351 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_sizeDelta_m4285_ftn) (RectTransform_t351 *, Vector2_t85 *);
	static RectTransform_INTERNAL_set_sizeDelta_m4285_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_sizeDelta_m4285_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
extern "C" Vector2_t85  RectTransform_get_pivot_m2839 (RectTransform_t351 * __this, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		RectTransform_INTERNAL_get_pivot_m4286(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
extern "C" void RectTransform_set_pivot_m2797 (RectTransform_t351 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_pivot_m4287(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_pivot_m4286 (RectTransform_t351 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_pivot_m4286_ftn) (RectTransform_t351 *, Vector2_t85 *);
	static RectTransform_INTERNAL_get_pivot_m4286_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_pivot_m4286_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_pivot_m4287 (RectTransform_t351 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_pivot_m4287_ftn) (RectTransform_t351 *, Vector2_t85 *);
	static RectTransform_INTERNAL_set_pivot_m4287_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_pivot_m4287_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::SendReapplyDrivenProperties(UnityEngine.RectTransform)
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertieMethodDeclarations.h"
extern TypeInfo* RectTransform_t351_il2cpp_TypeInfo_var;
extern "C" void RectTransform_SendReapplyDrivenProperties_m4288 (Object_t * __this /* static, unused */, RectTransform_t351 * ___driven, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t575 * L_0 = ((RectTransform_t351_StaticFields*)RectTransform_t351_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ReapplyDrivenProperties_t575 * L_1 = ((RectTransform_t351_StaticFields*)RectTransform_t351_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		RectTransform_t351 * L_2 = ___driven;
		NullCheck(L_1);
		ReapplyDrivenProperties_Invoke_m4273(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetLocalCorners(UnityEngine.Vector3[])
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral387;
extern "C" void RectTransform_GetLocalCorners_m4289 (RectTransform_t351 * __this, Vector3U5BU5D_t111* ___fourCornersArray, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t232  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		Vector3U5BU5D_t111* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t111* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral387, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		Rect_t232  L_2 = RectTransform_get_rect_m2825(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_x_m2879((&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = Rect_get_y_m2880((&V_0), /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Rect_get_xMax_m2937((&V_0), /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = Rect_get_yMax_m2938((&V_0), /*hidden argument*/NULL);
		V_4 = L_6;
		Vector3U5BU5D_t111* L_7 = ___fourCornersArray;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		float L_8 = V_1;
		float L_9 = V_2;
		Vector3_t28  L_10 = {0};
		Vector3__ctor_m396(&L_10, L_8, L_9, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_7, 0, sizeof(Vector3_t28 ))) = L_10;
		Vector3U5BU5D_t111* L_11 = ___fourCornersArray;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		float L_12 = V_1;
		float L_13 = V_4;
		Vector3_t28  L_14 = {0};
		Vector3__ctor_m396(&L_14, L_12, L_13, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_11, 1, sizeof(Vector3_t28 ))) = L_14;
		Vector3U5BU5D_t111* L_15 = ___fourCornersArray;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		float L_16 = V_3;
		float L_17 = V_4;
		Vector3_t28  L_18 = {0};
		Vector3__ctor_m396(&L_18, L_16, L_17, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_15, 2, sizeof(Vector3_t28 ))) = L_18;
		Vector3U5BU5D_t111* L_19 = ___fourCornersArray;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		float L_20 = V_3;
		float L_21 = V_2;
		Vector3_t28  L_22 = {0};
		Vector3__ctor_m396(&L_22, L_20, L_21, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_19, 3, sizeof(Vector3_t28 ))) = L_22;
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral388;
extern "C" void RectTransform_GetWorldCorners_m2832 (RectTransform_t351 * __this, Vector3U5BU5D_t111* ___fourCornersArray, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral388 = il2cpp_codegen_string_literal_from_index(388);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t48 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Vector3U5BU5D_t111* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t111* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral388, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		Vector3U5BU5D_t111* L_2 = ___fourCornersArray;
		RectTransform_GetLocalCorners_m4289(__this, L_2, /*hidden argument*/NULL);
		Transform_t48 * L_3 = Component_get_transform_m332(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0051;
	}

IL_002f:
	{
		Vector3U5BU5D_t111* L_4 = ___fourCornersArray;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Transform_t48 * L_6 = V_0;
		Vector3U5BU5D_t111* L_7 = ___fourCornersArray;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		NullCheck(L_6);
		Vector3_t28  L_9 = Transform_TransformPoint_m1240(L_6, (*(Vector3_t28 *)((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_7, L_8, sizeof(Vector3_t28 )))), /*hidden argument*/NULL);
		*((Vector3_t28 *)(Vector3_t28 *)SZArrayLdElema(L_4, L_5, sizeof(Vector3_t28 ))) = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" void RectTransform_set_offsetMin_m2793 (RectTransform_t351 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		Vector2_t85  L_0 = ___value;
		Vector2_t85  L_1 = RectTransform_get_anchoredPosition_m2838(__this, /*hidden argument*/NULL);
		Vector2_t85  L_2 = RectTransform_get_sizeDelta_m2798(__this, /*hidden argument*/NULL);
		Vector2_t85  L_3 = RectTransform_get_pivot_m2839(__this, /*hidden argument*/NULL);
		Vector2_t85  L_4 = Vector2_Scale_m3011(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Vector2_t85  L_5 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		Vector2_t85  L_6 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector2_t85  L_7 = RectTransform_get_sizeDelta_m2798(__this, /*hidden argument*/NULL);
		Vector2_t85  L_8 = V_0;
		Vector2_t85  L_9 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m2778(__this, L_9, /*hidden argument*/NULL);
		Vector2_t85  L_10 = RectTransform_get_anchoredPosition_m2838(__this, /*hidden argument*/NULL);
		Vector2_t85  L_11 = V_0;
		Vector2_t85  L_12 = Vector2_get_one_m1119(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t85  L_13 = RectTransform_get_pivot_m2839(__this, /*hidden argument*/NULL);
		Vector2_t85  L_14 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Vector2_t85  L_15 = Vector2_Scale_m3011(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		Vector2_t85  L_16 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_10, L_15, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m2785(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
extern "C" void RectTransform_set_offsetMax_m2794 (RectTransform_t351 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		Vector2_t85  L_0 = ___value;
		Vector2_t85  L_1 = RectTransform_get_anchoredPosition_m2838(__this, /*hidden argument*/NULL);
		Vector2_t85  L_2 = RectTransform_get_sizeDelta_m2798(__this, /*hidden argument*/NULL);
		Vector2_t85  L_3 = Vector2_get_one_m1119(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t85  L_4 = RectTransform_get_pivot_m2839(__this, /*hidden argument*/NULL);
		Vector2_t85  L_5 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Vector2_t85  L_6 = Vector2_Scale_m3011(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		Vector2_t85  L_7 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_1, L_6, /*hidden argument*/NULL);
		Vector2_t85  L_8 = Vector2_op_Subtraction_m1120(NULL /*static, unused*/, L_0, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector2_t85  L_9 = RectTransform_get_sizeDelta_m2798(__this, /*hidden argument*/NULL);
		Vector2_t85  L_10 = V_0;
		Vector2_t85  L_11 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m2778(__this, L_11, /*hidden argument*/NULL);
		Vector2_t85  L_12 = RectTransform_get_anchoredPosition_m2838(__this, /*hidden argument*/NULL);
		Vector2_t85  L_13 = V_0;
		Vector2_t85  L_14 = RectTransform_get_pivot_m2839(__this, /*hidden argument*/NULL);
		Vector2_t85  L_15 = Vector2_Scale_m3011(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		Vector2_t85  L_16 = Vector2_op_Addition_m1118(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m2785(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetInsetAndSizeFromParentEdge(UnityEngine.RectTransform/Edge,System.Single,System.Single)
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_Edge.h"
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void RectTransform_SetInsetAndSizeFromParentEdge_m3144 (RectTransform_t351 * __this, int32_t ___edge, float ___inset, float ___size, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	Vector2_t85  V_3 = {0};
	Vector2_t85  V_4 = {0};
	Vector2_t85  V_5 = {0};
	Vector2_t85  V_6 = {0};
	Vector2_t85  V_7 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	Vector2_t85 * G_B12_1 = {0};
	int32_t G_B11_0 = 0;
	Vector2_t85 * G_B11_1 = {0};
	float G_B13_0 = 0.0f;
	int32_t G_B13_1 = 0;
	Vector2_t85 * G_B13_2 = {0};
	{
		int32_t L_0 = ___edge;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___edge;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0014;
		}
	}

IL_000e:
	{
		G_B4_0 = 1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B4_0;
		int32_t L_2 = ___edge;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___edge;
		G_B7_0 = ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B7_0 = 1;
	}

IL_0024:
	{
		V_1 = G_B7_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		G_B10_0 = 1;
		goto IL_0032;
	}

IL_0031:
	{
		G_B10_0 = 0;
	}

IL_0032:
	{
		V_2 = (((float)G_B10_0));
		Vector2_t85  L_5 = RectTransform_get_anchorMin_m2836(__this, /*hidden argument*/NULL);
		V_3 = L_5;
		int32_t L_6 = V_0;
		float L_7 = V_2;
		Vector2_set_Item_m2940((&V_3), L_6, L_7, /*hidden argument*/NULL);
		Vector2_t85  L_8 = V_3;
		RectTransform_set_anchorMin_m2783(__this, L_8, /*hidden argument*/NULL);
		Vector2_t85  L_9 = RectTransform_get_anchorMax_m2837(__this, /*hidden argument*/NULL);
		V_3 = L_9;
		int32_t L_10 = V_0;
		float L_11 = V_2;
		Vector2_set_Item_m2940((&V_3), L_10, L_11, /*hidden argument*/NULL);
		Vector2_t85  L_12 = V_3;
		RectTransform_set_anchorMax_m2784(__this, L_12, /*hidden argument*/NULL);
		Vector2_t85  L_13 = RectTransform_get_sizeDelta_m2798(__this, /*hidden argument*/NULL);
		V_4 = L_13;
		int32_t L_14 = V_0;
		float L_15 = ___size;
		Vector2_set_Item_m2940((&V_4), L_14, L_15, /*hidden argument*/NULL);
		Vector2_t85  L_16 = V_4;
		RectTransform_set_sizeDelta_m2778(__this, L_16, /*hidden argument*/NULL);
		Vector2_t85  L_17 = RectTransform_get_anchoredPosition_m2838(__this, /*hidden argument*/NULL);
		V_5 = L_17;
		int32_t L_18 = V_0;
		bool L_19 = V_1;
		G_B11_0 = L_18;
		G_B11_1 = (&V_5);
		if (!L_19)
		{
			G_B12_0 = L_18;
			G_B12_1 = (&V_5);
			goto IL_00ac;
		}
	}
	{
		float L_20 = ___inset;
		float L_21 = ___size;
		Vector2_t85  L_22 = RectTransform_get_pivot_m2839(__this, /*hidden argument*/NULL);
		V_6 = L_22;
		int32_t L_23 = V_0;
		float L_24 = Vector2_get_Item_m2932((&V_6), L_23, /*hidden argument*/NULL);
		G_B13_0 = ((float)((float)((-L_20))-(float)((float)((float)L_21*(float)((float)((float)(1.0f)-(float)L_24))))));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c0;
	}

IL_00ac:
	{
		float L_25 = ___inset;
		float L_26 = ___size;
		Vector2_t85  L_27 = RectTransform_get_pivot_m2839(__this, /*hidden argument*/NULL);
		V_7 = L_27;
		int32_t L_28 = V_0;
		float L_29 = Vector2_get_Item_m2932((&V_7), L_28, /*hidden argument*/NULL);
		G_B13_0 = ((float)((float)L_25+(float)((float)((float)L_26*(float)L_29))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c0:
	{
		Vector2_set_Item_m2940(G_B13_2, G_B13_1, G_B13_0, /*hidden argument*/NULL);
		Vector2_t85  L_30 = V_5;
		RectTransform_set_anchoredPosition_m2785(__this, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_Axis.h"
extern "C" void RectTransform_SetSizeWithCurrentAnchors_m3122 (RectTransform_t351 * __this, int32_t ___axis, float ___size, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t85  V_1 = {0};
	Vector2_t85  V_2 = {0};
	Vector2_t85  V_3 = {0};
	Vector2_t85  V_4 = {0};
	{
		int32_t L_0 = ___axis;
		V_0 = L_0;
		Vector2_t85  L_1 = RectTransform_get_sizeDelta_m2798(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_0;
		float L_3 = ___size;
		Vector2_t85  L_4 = RectTransform_GetParentSize_m4290(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		float L_6 = Vector2_get_Item_m2932((&V_2), L_5, /*hidden argument*/NULL);
		Vector2_t85  L_7 = RectTransform_get_anchorMax_m2837(__this, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_0;
		float L_9 = Vector2_get_Item_m2932((&V_3), L_8, /*hidden argument*/NULL);
		Vector2_t85  L_10 = RectTransform_get_anchorMin_m2836(__this, /*hidden argument*/NULL);
		V_4 = L_10;
		int32_t L_11 = V_0;
		float L_12 = Vector2_get_Item_m2932((&V_4), L_11, /*hidden argument*/NULL);
		Vector2_set_Item_m2940((&V_1), L_2, ((float)((float)L_3-(float)((float)((float)L_6*(float)((float)((float)L_9-(float)L_12)))))), /*hidden argument*/NULL);
		Vector2_t85  L_13 = V_1;
		RectTransform_set_sizeDelta_m2778(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransform::GetParentSize()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern TypeInfo* RectTransform_t351_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  RectTransform_GetParentSize_m4290 (RectTransform_t351 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t351 * V_0 = {0};
	Rect_t232  V_1 = {0};
	{
		Transform_t48 * L_0 = Transform_get_parent_m1205(__this, /*hidden argument*/NULL);
		V_0 = ((RectTransform_t351 *)IsInstSealed(L_0, RectTransform_t351_il2cpp_TypeInfo_var));
		RectTransform_t351 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m294(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Vector2_t85  L_3 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		RectTransform_t351 * L_4 = V_0;
		NullCheck(L_4);
		Rect_t232  L_5 = RectTransform_get_rect_m2825(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector2_t85  L_6 = Rect_get_size_m2828((&V_1), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequest.h"
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequestMethodDeclarations.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// System.Void UnityEngine.ResourceRequest::.ctor()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
extern "C" void ResourceRequest__ctor_m4291 (ResourceRequest_t763 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m4337(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
extern "C" Object_t99 * ResourceRequest_get_asset_m4292 (ResourceRequest_t763 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Path_1);
		Type_t * L_1 = (__this->___m_Type_2);
		Object_t99 * L_2 = Resources_Load_m4293(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
extern "C" Object_t99 * Resources_Load_m4293 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method)
{
	typedef Object_t99 * (*Resources_Load_m4293_ftn) (String_t*, Type_t *);
	static Resources_Load_m4293_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Resources_Load_m4293_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	return _il2cpp_icall_func(___path, ___systemTypeInstance);
}
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
extern "C" AsyncOperation_t718 * Resources_UnloadUnusedAssets_m1141 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef AsyncOperation_t718 * (*Resources_UnloadUnusedAssets_m1141_ftn) ();
	static Resources_UnloadUnusedAssets_m1141_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Resources_UnloadUnusedAssets_m1141_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::UnloadUnusedAssets()");
	return _il2cpp_icall_func();
}
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariables.h"
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariablesMethodDeclarations.h"
// System.Void UnityEngine.SerializePrivateVariables::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SerializePrivateVariables__ctor_m4294 (SerializePrivateVariables_t765 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
// System.Void UnityEngine.SerializeField::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void SerializeField__ctor_m4295 (SerializeField_t766 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// System.Boolean UnityEngine.Shader::get_isSupported()
extern "C" bool Shader_get_isSupported_m266 (Shader_t4 * __this, const MethodInfo* method)
{
	typedef bool (*Shader_get_isSupported_m266_ftn) (Shader_t4 *);
	static Shader_get_isSupported_m266_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_get_isSupported_m266_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::get_isSupported()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" int32_t Shader_PropertyToID_m4296 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Shader_PropertyToID_m4296_ftn) (String_t*);
	static Shader_PropertyToID_m4296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_PropertyToID_m4296_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern "C" void Material__ctor_m300 (Material_t5 * __this, Shader_t4 * ___shader, const MethodInfo* method)
{
	{
		Object__ctor_m4424(__this, /*hidden argument*/NULL);
		Shader_t4 * L_0 = ___shader;
		Material_Internal_CreateWithShader_m4308(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void Material__ctor_m3099 (Material_t5 * __this, Material_t5 * ___source, const MethodInfo* method)
{
	{
		Object__ctor_m4424(__this, /*hidden argument*/NULL);
		Material_t5 * L_0 = ___source;
		Material_Internal_CreateWithMaterial_m4309(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C" Shader_t4 * Material_get_shader_m304 (Material_t5 * __this, const MethodInfo* method)
{
	typedef Shader_t4 * (*Material_get_shader_m304_ftn) (Material_t5 *);
	static Material_get_shader_m304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_get_shader_m304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::get_shader()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Color UnityEngine.Material::get_color()
extern Il2CppCodeGenString* _stringLiteral389;
extern "C" Color_t12  Material_get_color_m1193 (Material_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral389 = il2cpp_codegen_string_literal_from_index(389);
		s_Il2CppMethodIntialized = true;
	}
	{
		Color_t12  L_0 = Material_GetColor_m4299(__this, _stringLiteral389, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern Il2CppCodeGenString* _stringLiteral389;
extern "C" void Material_set_color_m1195 (Material_t5 * __this, Color_t12  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral389 = il2cpp_codegen_string_literal_from_index(389);
		s_Il2CppMethodIntialized = true;
	}
	{
		Color_t12  L_0 = ___value;
		Material_SetColor_m372(__this, _stringLiteral389, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern Il2CppCodeGenString* _stringLiteral69;
extern "C" Texture_t40 * Material_get_mainTexture_m3104 (Material_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture_t40 * L_0 = Material_GetTexture_m4302(__this, _stringLiteral69, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern "C" void Material_SetColor_m372 (Material_t5 * __this, String_t* ___propertyName, Color_t12  ___color, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m4296(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Color_t12  L_2 = ___color;
		Material_SetColor_m4297(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Material_SetColor_m4297 (Material_t5 * __this, int32_t ___nameID, Color_t12  ___color, const MethodInfo* method)
{
	{
		int32_t L_0 = ___nameID;
		Material_INTERNAL_CALL_SetColor_m4298(NULL /*static, unused*/, __this, L_0, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m4298 (Object_t * __this /* static, unused */, Material_t5 * ___self, int32_t ___nameID, Color_t12 * ___color, const MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetColor_m4298_ftn) (Material_t5 *, int32_t, Color_t12 *);
	static Material_INTERNAL_CALL_SetColor_m4298_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetColor_m4298_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___nameID, ___color);
}
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C" Color_t12  Material_GetColor_m4299 (Material_t5 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m4296(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Color_t12  L_2 = Material_GetColor_m4300(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C" Color_t12  Material_GetColor_m4300 (Material_t5 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef Color_t12  (*Material_GetColor_m4300_ftn) (Material_t5 *, int32_t);
	static Material_GetColor_m4300_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetColor_m4300_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetColor(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern "C" void Material_SetVector_m285 (Material_t5 * __this, String_t* ___propertyName, Vector4_t100  ___vector, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		float L_1 = ((&___vector)->___x_1);
		float L_2 = ((&___vector)->___y_2);
		float L_3 = ((&___vector)->___z_3);
		float L_4 = ((&___vector)->___w_4);
		Color_t12  L_5 = {0};
		Color__ctor_m278(&L_5, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		Material_SetColor_m372(__this, L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
extern "C" void Material_SetTexture_m292 (Material_t5 * __this, String_t* ___propertyName, Texture_t40 * ___texture, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m4296(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Texture_t40 * L_2 = ___texture;
		Material_SetTexture_m4301(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" void Material_SetTexture_m4301 (Material_t5 * __this, int32_t ___nameID, Texture_t40 * ___texture, const MethodInfo* method)
{
	typedef void (*Material_SetTexture_m4301_ftn) (Material_t5 *, int32_t, Texture_t40 *);
	static Material_SetTexture_m4301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetTexture_m4301_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___nameID, ___texture);
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t40 * Material_GetTexture_m4302 (Material_t5 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m4296(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Texture_t40 * L_2 = Material_GetTexture_m4303(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t40 * Material_GetTexture_m4303 (Material_t5 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef Texture_t40 * (*Material_GetTexture_m4303_ftn) (Material_t5 *, int32_t);
	static Material_GetTexture_m4303_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetTexture_m4303_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
extern "C" void Material_SetMatrix_m326 (Material_t5 * __this, String_t* ___propertyName, Matrix4x4_t31  ___matrix, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m4296(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Matrix4x4_t31  L_2 = ___matrix;
		Material_SetMatrix_m4304(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C" void Material_SetMatrix_m4304 (Material_t5 * __this, int32_t ___nameID, Matrix4x4_t31  ___matrix, const MethodInfo* method)
{
	{
		int32_t L_0 = ___nameID;
		Material_INTERNAL_CALL_SetMatrix_m4305(NULL /*static, unused*/, __this, L_0, (&___matrix), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)
extern "C" void Material_INTERNAL_CALL_SetMatrix_m4305 (Object_t * __this /* static, unused */, Material_t5 * ___self, int32_t ___nameID, Matrix4x4_t31 * ___matrix, const MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetMatrix_m4305_ftn) (Material_t5 *, int32_t, Matrix4x4_t31 *);
	static Material_INTERNAL_CALL_SetMatrix_m4305_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetMatrix_m4305_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___self, ___nameID, ___matrix);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Material_SetFloat_m269 (Material_t5 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m4296(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___value;
		Material_SetFloat_m4306(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m4306 (Material_t5 * __this, int32_t ___nameID, float ___value, const MethodInfo* method)
{
	typedef void (*Material_SetFloat_m4306_ftn) (Material_t5 *, int32_t, float);
	static Material_SetFloat_m4306_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetFloat_m4306_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___nameID, ___value);
}
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m3101 (Material_t5 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = ___value;
		Material_SetFloat_m269(__this, L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBuffer.h"
extern "C" void Material_SetBuffer_m395 (Material_t5 * __this, String_t* ___propertyName, ComputeBuffer_t49 * ___buffer, const MethodInfo* method)
{
	typedef void (*Material_SetBuffer_m395_ftn) (Material_t5 *, String_t*, ComputeBuffer_t49 *);
	static Material_SetBuffer_m395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetBuffer_m395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)");
	_il2cpp_icall_func(__this, ___propertyName, ___buffer);
}
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m3098 (Material_t5 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m4296(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = Material_HasProperty_m4307(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m4307 (Material_t5 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef bool (*Material_HasProperty_m4307_ftn) (Material_t5 *, int32_t);
	static Material_HasProperty_m4307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_HasProperty_m4307_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Int32 UnityEngine.Material::get_passCount()
extern "C" int32_t Material_get_passCount_m435 (Material_t5 * __this, const MethodInfo* method)
{
	typedef int32_t (*Material_get_passCount_m435_ftn) (Material_t5 *);
	static Material_get_passCount_m435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_get_passCount_m435_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::get_passCount()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C" bool Material_SetPass_m398 (Material_t5 * __this, int32_t ___pass, const MethodInfo* method)
{
	typedef bool (*Material_SetPass_m398_ftn) (Material_t5 *, int32_t);
	static Material_SetPass_m398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetPass_m398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetPass(System.Int32)");
	return _il2cpp_icall_func(__this, ___pass);
}
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m4308 (Object_t * __this /* static, unused */, Material_t5 * ___mono, Shader_t4 * ___shader, const MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithShader_m4308_ftn) (Material_t5 *, Shader_t4 *);
	static Material_Internal_CreateWithShader_m4308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithShader_m4308_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)");
	_il2cpp_icall_func(___mono, ___shader);
}
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m4309 (Object_t * __this /* static, unused */, Material_t5 * ___mono, Material_t5 * ___source, const MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithMaterial_m4309_ftn) (Material_t5 *, Material_t5 *);
	static Material_Internal_CreateWithMaterial_m4309_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithMaterial_m4309_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(___mono, ___source);
}
// UnityEngine.SortingLayer
#include "UnityEngine_UnityEngine_SortingLayer.h"
// UnityEngine.SortingLayer
#include "UnityEngine_UnityEngine_SortingLayerMethodDeclarations.h"
// System.Int32 UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t SortingLayer_GetLayerValueFromID_m2642 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	typedef int32_t (*SortingLayer_GetLayerValueFromID_m2642_ftn) (int32_t);
	static SortingLayer_GetLayerValueFromID_m2642_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingLayer_GetLayerValueFromID_m2642_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)");
	return _il2cpp_icall_func(___id);
}
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2MethodDeclarations.h"
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2MethodDeclarations.h"
extern "C" void SphericalHarmonicsL2_Clear_m4310 (SphericalHarmonicsL2_t768 * __this, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_ClearInternal_m4311(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m4311 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t768 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t768 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m4312(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m4312 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t768 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m4312_ftn) (SphericalHarmonicsL2_t768 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m4312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m4312_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m4313 (SphericalHarmonicsL2_t768 * __this, Color_t12  ___color, const MethodInfo* method)
{
	{
		Color_t12  L_0 = ___color;
		SphericalHarmonicsL2_AddAmbientLightInternal_m4314(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m4314 (Object_t * __this /* static, unused */, Color_t12  ___color, SphericalHarmonicsL2_t768 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t768 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m4315(NULL /*static, unused*/, (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m4315 (Object_t * __this /* static, unused */, Color_t12 * ___color, SphericalHarmonicsL2_t768 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m4315_ftn) (Color_t12 *, SphericalHarmonicsL2_t768 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m4315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m4315_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___color, ___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m4316 (SphericalHarmonicsL2_t768 * __this, Vector3_t28  ___direction, Color_t12  ___color, float ___intensity, const MethodInfo* method)
{
	Color_t12  V_0 = {0};
	{
		Color_t12  L_0 = ___color;
		float L_1 = ___intensity;
		Color_t12  L_2 = Color_op_Multiply_m3086(NULL /*static, unused*/, L_0, ((float)((float)(2.0f)*(float)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t28  L_3 = ___direction;
		Color_t12  L_4 = V_0;
		SphericalHarmonicsL2_AddDirectionalLightInternal_m4317(NULL /*static, unused*/, L_3, L_4, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m4317 (Object_t * __this /* static, unused */, Vector3_t28  ___direction, Color_t12  ___color, SphericalHarmonicsL2_t768 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t768 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m4318(NULL /*static, unused*/, (&___direction), (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m4318 (Object_t * __this /* static, unused */, Vector3_t28 * ___direction, Color_t12 * ___color, SphericalHarmonicsL2_t768 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m4318_ftn) (Vector3_t28 *, Color_t12 *, SphericalHarmonicsL2_t768 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m4318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m4318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___direction, ___color, ___sh);
}
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* IndexOutOfRangeException_t956_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral390;
extern "C" float SphericalHarmonicsL2_get_Item_m4319 (SphericalHarmonicsL2_t768 * __this, int32_t ___rgb, int32_t ___coefficient, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t956_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_0087;
		}
		if (L_3 == 2)
		{
			goto IL_008e;
		}
		if (L_3 == 3)
		{
			goto IL_0095;
		}
		if (L_3 == 4)
		{
			goto IL_009c;
		}
		if (L_3 == 5)
		{
			goto IL_00a3;
		}
		if (L_3 == 6)
		{
			goto IL_00aa;
		}
		if (L_3 == 7)
		{
			goto IL_00b1;
		}
		if (L_3 == 8)
		{
			goto IL_00b8;
		}
		if (L_3 == 9)
		{
			goto IL_00bf;
		}
		if (L_3 == 10)
		{
			goto IL_00c6;
		}
		if (L_3 == 11)
		{
			goto IL_00cd;
		}
		if (L_3 == 12)
		{
			goto IL_00d4;
		}
		if (L_3 == 13)
		{
			goto IL_00db;
		}
		if (L_3 == 14)
		{
			goto IL_00e2;
		}
		if (L_3 == 15)
		{
			goto IL_00e9;
		}
		if (L_3 == 16)
		{
			goto IL_00f0;
		}
		if (L_3 == 17)
		{
			goto IL_00f7;
		}
		if (L_3 == 18)
		{
			goto IL_00fe;
		}
		if (L_3 == 19)
		{
			goto IL_0105;
		}
		if (L_3 == 20)
		{
			goto IL_010c;
		}
		if (L_3 == 21)
		{
			goto IL_0113;
		}
		if (L_3 == 22)
		{
			goto IL_011a;
		}
		if (L_3 == 23)
		{
			goto IL_0121;
		}
		if (L_3 == 24)
		{
			goto IL_0128;
		}
		if (L_3 == 25)
		{
			goto IL_012f;
		}
		if (L_3 == 26)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_013d;
	}

IL_0080:
	{
		float L_4 = (__this->___shr0_0);
		return L_4;
	}

IL_0087:
	{
		float L_5 = (__this->___shr1_1);
		return L_5;
	}

IL_008e:
	{
		float L_6 = (__this->___shr2_2);
		return L_6;
	}

IL_0095:
	{
		float L_7 = (__this->___shr3_3);
		return L_7;
	}

IL_009c:
	{
		float L_8 = (__this->___shr4_4);
		return L_8;
	}

IL_00a3:
	{
		float L_9 = (__this->___shr5_5);
		return L_9;
	}

IL_00aa:
	{
		float L_10 = (__this->___shr6_6);
		return L_10;
	}

IL_00b1:
	{
		float L_11 = (__this->___shr7_7);
		return L_11;
	}

IL_00b8:
	{
		float L_12 = (__this->___shr8_8);
		return L_12;
	}

IL_00bf:
	{
		float L_13 = (__this->___shg0_9);
		return L_13;
	}

IL_00c6:
	{
		float L_14 = (__this->___shg1_10);
		return L_14;
	}

IL_00cd:
	{
		float L_15 = (__this->___shg2_11);
		return L_15;
	}

IL_00d4:
	{
		float L_16 = (__this->___shg3_12);
		return L_16;
	}

IL_00db:
	{
		float L_17 = (__this->___shg4_13);
		return L_17;
	}

IL_00e2:
	{
		float L_18 = (__this->___shg5_14);
		return L_18;
	}

IL_00e9:
	{
		float L_19 = (__this->___shg6_15);
		return L_19;
	}

IL_00f0:
	{
		float L_20 = (__this->___shg7_16);
		return L_20;
	}

IL_00f7:
	{
		float L_21 = (__this->___shg8_17);
		return L_21;
	}

IL_00fe:
	{
		float L_22 = (__this->___shb0_18);
		return L_22;
	}

IL_0105:
	{
		float L_23 = (__this->___shb1_19);
		return L_23;
	}

IL_010c:
	{
		float L_24 = (__this->___shb2_20);
		return L_24;
	}

IL_0113:
	{
		float L_25 = (__this->___shb3_21);
		return L_25;
	}

IL_011a:
	{
		float L_26 = (__this->___shb4_22);
		return L_26;
	}

IL_0121:
	{
		float L_27 = (__this->___shb5_23);
		return L_27;
	}

IL_0128:
	{
		float L_28 = (__this->___shb6_24);
		return L_28;
	}

IL_012f:
	{
		float L_29 = (__this->___shb7_25);
		return L_29;
	}

IL_0136:
	{
		float L_30 = (__this->___shb8_26);
		return L_30;
	}

IL_013d:
	{
		IndexOutOfRangeException_t956 * L_31 = (IndexOutOfRangeException_t956 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t956_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m5205(L_31, _stringLiteral390, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_31);
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t956_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral390;
extern "C" void SphericalHarmonicsL2_set_Item_m4320 (SphericalHarmonicsL2_t768 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t956_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_008c;
		}
		if (L_3 == 2)
		{
			goto IL_0098;
		}
		if (L_3 == 3)
		{
			goto IL_00a4;
		}
		if (L_3 == 4)
		{
			goto IL_00b0;
		}
		if (L_3 == 5)
		{
			goto IL_00bc;
		}
		if (L_3 == 6)
		{
			goto IL_00c8;
		}
		if (L_3 == 7)
		{
			goto IL_00d4;
		}
		if (L_3 == 8)
		{
			goto IL_00e0;
		}
		if (L_3 == 9)
		{
			goto IL_00ec;
		}
		if (L_3 == 10)
		{
			goto IL_00f8;
		}
		if (L_3 == 11)
		{
			goto IL_0104;
		}
		if (L_3 == 12)
		{
			goto IL_0110;
		}
		if (L_3 == 13)
		{
			goto IL_011c;
		}
		if (L_3 == 14)
		{
			goto IL_0128;
		}
		if (L_3 == 15)
		{
			goto IL_0134;
		}
		if (L_3 == 16)
		{
			goto IL_0140;
		}
		if (L_3 == 17)
		{
			goto IL_014c;
		}
		if (L_3 == 18)
		{
			goto IL_0158;
		}
		if (L_3 == 19)
		{
			goto IL_0164;
		}
		if (L_3 == 20)
		{
			goto IL_0170;
		}
		if (L_3 == 21)
		{
			goto IL_017c;
		}
		if (L_3 == 22)
		{
			goto IL_0188;
		}
		if (L_3 == 23)
		{
			goto IL_0194;
		}
		if (L_3 == 24)
		{
			goto IL_01a0;
		}
		if (L_3 == 25)
		{
			goto IL_01ac;
		}
		if (L_3 == 26)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01c4;
	}

IL_0080:
	{
		float L_4 = ___value;
		__this->___shr0_0 = L_4;
		goto IL_01cf;
	}

IL_008c:
	{
		float L_5 = ___value;
		__this->___shr1_1 = L_5;
		goto IL_01cf;
	}

IL_0098:
	{
		float L_6 = ___value;
		__this->___shr2_2 = L_6;
		goto IL_01cf;
	}

IL_00a4:
	{
		float L_7 = ___value;
		__this->___shr3_3 = L_7;
		goto IL_01cf;
	}

IL_00b0:
	{
		float L_8 = ___value;
		__this->___shr4_4 = L_8;
		goto IL_01cf;
	}

IL_00bc:
	{
		float L_9 = ___value;
		__this->___shr5_5 = L_9;
		goto IL_01cf;
	}

IL_00c8:
	{
		float L_10 = ___value;
		__this->___shr6_6 = L_10;
		goto IL_01cf;
	}

IL_00d4:
	{
		float L_11 = ___value;
		__this->___shr7_7 = L_11;
		goto IL_01cf;
	}

IL_00e0:
	{
		float L_12 = ___value;
		__this->___shr8_8 = L_12;
		goto IL_01cf;
	}

IL_00ec:
	{
		float L_13 = ___value;
		__this->___shg0_9 = L_13;
		goto IL_01cf;
	}

IL_00f8:
	{
		float L_14 = ___value;
		__this->___shg1_10 = L_14;
		goto IL_01cf;
	}

IL_0104:
	{
		float L_15 = ___value;
		__this->___shg2_11 = L_15;
		goto IL_01cf;
	}

IL_0110:
	{
		float L_16 = ___value;
		__this->___shg3_12 = L_16;
		goto IL_01cf;
	}

IL_011c:
	{
		float L_17 = ___value;
		__this->___shg4_13 = L_17;
		goto IL_01cf;
	}

IL_0128:
	{
		float L_18 = ___value;
		__this->___shg5_14 = L_18;
		goto IL_01cf;
	}

IL_0134:
	{
		float L_19 = ___value;
		__this->___shg6_15 = L_19;
		goto IL_01cf;
	}

IL_0140:
	{
		float L_20 = ___value;
		__this->___shg7_16 = L_20;
		goto IL_01cf;
	}

IL_014c:
	{
		float L_21 = ___value;
		__this->___shg8_17 = L_21;
		goto IL_01cf;
	}

IL_0158:
	{
		float L_22 = ___value;
		__this->___shb0_18 = L_22;
		goto IL_01cf;
	}

IL_0164:
	{
		float L_23 = ___value;
		__this->___shb1_19 = L_23;
		goto IL_01cf;
	}

IL_0170:
	{
		float L_24 = ___value;
		__this->___shb2_20 = L_24;
		goto IL_01cf;
	}

IL_017c:
	{
		float L_25 = ___value;
		__this->___shb3_21 = L_25;
		goto IL_01cf;
	}

IL_0188:
	{
		float L_26 = ___value;
		__this->___shb4_22 = L_26;
		goto IL_01cf;
	}

IL_0194:
	{
		float L_27 = ___value;
		__this->___shb5_23 = L_27;
		goto IL_01cf;
	}

IL_01a0:
	{
		float L_28 = ___value;
		__this->___shb6_24 = L_28;
		goto IL_01cf;
	}

IL_01ac:
	{
		float L_29 = ___value;
		__this->___shb7_25 = L_29;
		goto IL_01cf;
	}

IL_01b8:
	{
		float L_30 = ___value;
		__this->___shb8_26 = L_30;
		goto IL_01cf;
	}

IL_01c4:
	{
		IndexOutOfRangeException_t956 * L_31 = (IndexOutOfRangeException_t956 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t956_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m5205(L_31, _stringLiteral390, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_31);
	}

IL_01cf:
	{
		return;
	}
}
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m4321 (SphericalHarmonicsL2_t768 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->___shr0_0);
		int32_t L_2 = Single_GetHashCode_m5197(L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->___shr1_1);
		int32_t L_5 = Single_GetHashCode_m5197(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->___shr2_2);
		int32_t L_8 = Single_GetHashCode_m5197(L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->___shr3_3);
		int32_t L_11 = Single_GetHashCode_m5197(L_10, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->___shr4_4);
		int32_t L_14 = Single_GetHashCode_m5197(L_13, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->___shr5_5);
		int32_t L_17 = Single_GetHashCode_m5197(L_16, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->___shr6_6);
		int32_t L_20 = Single_GetHashCode_m5197(L_19, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->___shr7_7);
		int32_t L_23 = Single_GetHashCode_m5197(L_22, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->___shr8_8);
		int32_t L_26 = Single_GetHashCode_m5197(L_25, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->___shg0_9);
		int32_t L_29 = Single_GetHashCode_m5197(L_28, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->___shg1_10);
		int32_t L_32 = Single_GetHashCode_m5197(L_31, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->___shg2_11);
		int32_t L_35 = Single_GetHashCode_m5197(L_34, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->___shg3_12);
		int32_t L_38 = Single_GetHashCode_m5197(L_37, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->___shg4_13);
		int32_t L_41 = Single_GetHashCode_m5197(L_40, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->___shg5_14);
		int32_t L_44 = Single_GetHashCode_m5197(L_43, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->___shg6_15);
		int32_t L_47 = Single_GetHashCode_m5197(L_46, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->___shg7_16);
		int32_t L_50 = Single_GetHashCode_m5197(L_49, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->___shg8_17);
		int32_t L_53 = Single_GetHashCode_m5197(L_52, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->___shb0_18);
		int32_t L_56 = Single_GetHashCode_m5197(L_55, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->___shb1_19);
		int32_t L_59 = Single_GetHashCode_m5197(L_58, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->___shb2_20);
		int32_t L_62 = Single_GetHashCode_m5197(L_61, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->___shb3_21);
		int32_t L_65 = Single_GetHashCode_m5197(L_64, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->___shb4_22);
		int32_t L_68 = Single_GetHashCode_m5197(L_67, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->___shb5_23);
		int32_t L_71 = Single_GetHashCode_m5197(L_70, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->___shb6_24);
		int32_t L_74 = Single_GetHashCode_m5197(L_73, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->___shb7_25);
		int32_t L_77 = Single_GetHashCode_m5197(L_76, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->___shb8_26);
		int32_t L_80 = Single_GetHashCode_m5197(L_79, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var;
extern "C" bool SphericalHarmonicsL2_Equals_m4322 (SphericalHarmonicsL2_t768 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t768  V_0 = {0};
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(SphericalHarmonicsL2_t768 *)((SphericalHarmonicsL2_t768 *)UnBox (L_1, SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var))));
		SphericalHarmonicsL2_t768  L_2 = V_0;
		bool L_3 = SphericalHarmonicsL2_op_Equality_m4326(NULL /*static, unused*/, (*(SphericalHarmonicsL2_t768 *)__this), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
extern TypeInfo* SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t768  SphericalHarmonicsL2_op_Multiply_m4323 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t768  ___lhs, float ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t768  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ___rhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ___rhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ___rhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ___rhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ___rhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ___rhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ___rhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ___rhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ___rhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ___rhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ___rhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ___rhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ___rhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ___rhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ___rhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ___rhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ___rhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ___rhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ___rhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ___rhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ___rhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ___rhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ___rhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ___rhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ___rhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ___rhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ___rhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t768  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t768  SphericalHarmonicsL2_op_Multiply_m4324 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t768  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t768  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___rhs)->___shr0_0);
		float L_1 = ___lhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___rhs)->___shr1_1);
		float L_3 = ___lhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___rhs)->___shr2_2);
		float L_5 = ___lhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___rhs)->___shr3_3);
		float L_7 = ___lhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___rhs)->___shr4_4);
		float L_9 = ___lhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___rhs)->___shr5_5);
		float L_11 = ___lhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___rhs)->___shr6_6);
		float L_13 = ___lhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___rhs)->___shr7_7);
		float L_15 = ___lhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___rhs)->___shr8_8);
		float L_17 = ___lhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___rhs)->___shg0_9);
		float L_19 = ___lhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___rhs)->___shg1_10);
		float L_21 = ___lhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___rhs)->___shg2_11);
		float L_23 = ___lhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___rhs)->___shg3_12);
		float L_25 = ___lhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___rhs)->___shg4_13);
		float L_27 = ___lhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___rhs)->___shg5_14);
		float L_29 = ___lhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___rhs)->___shg6_15);
		float L_31 = ___lhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___rhs)->___shg7_16);
		float L_33 = ___lhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___rhs)->___shg8_17);
		float L_35 = ___lhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___rhs)->___shb0_18);
		float L_37 = ___lhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___rhs)->___shb1_19);
		float L_39 = ___lhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___rhs)->___shb2_20);
		float L_41 = ___lhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___rhs)->___shb3_21);
		float L_43 = ___lhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___rhs)->___shb4_22);
		float L_45 = ___lhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___rhs)->___shb5_23);
		float L_47 = ___lhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___rhs)->___shb6_24);
		float L_49 = ___lhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___rhs)->___shb7_25);
		float L_51 = ___lhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___rhs)->___shb8_26);
		float L_53 = ___lhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t768  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t768  SphericalHarmonicsL2_op_Addition_m4325 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t768  ___lhs, SphericalHarmonicsL2_t768  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t768  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t768_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		(&V_0)->___shr0_0 = ((float)((float)L_0+(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		(&V_0)->___shr1_1 = ((float)((float)L_2+(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		(&V_0)->___shr2_2 = ((float)((float)L_4+(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		(&V_0)->___shr3_3 = ((float)((float)L_6+(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		(&V_0)->___shr4_4 = ((float)((float)L_8+(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		(&V_0)->___shr5_5 = ((float)((float)L_10+(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		(&V_0)->___shr6_6 = ((float)((float)L_12+(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		(&V_0)->___shr7_7 = ((float)((float)L_14+(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		(&V_0)->___shr8_8 = ((float)((float)L_16+(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		(&V_0)->___shg0_9 = ((float)((float)L_18+(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		(&V_0)->___shg1_10 = ((float)((float)L_20+(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		(&V_0)->___shg2_11 = ((float)((float)L_22+(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		(&V_0)->___shg3_12 = ((float)((float)L_24+(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		(&V_0)->___shg4_13 = ((float)((float)L_26+(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		(&V_0)->___shg5_14 = ((float)((float)L_28+(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		(&V_0)->___shg6_15 = ((float)((float)L_30+(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		(&V_0)->___shg7_16 = ((float)((float)L_32+(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		(&V_0)->___shg8_17 = ((float)((float)L_34+(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		(&V_0)->___shb0_18 = ((float)((float)L_36+(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		(&V_0)->___shb1_19 = ((float)((float)L_38+(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		(&V_0)->___shb2_20 = ((float)((float)L_40+(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		(&V_0)->___shb3_21 = ((float)((float)L_42+(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		(&V_0)->___shb4_22 = ((float)((float)L_44+(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		(&V_0)->___shb5_23 = ((float)((float)L_46+(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		(&V_0)->___shb6_24 = ((float)((float)L_48+(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		(&V_0)->___shb7_25 = ((float)((float)L_50+(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		(&V_0)->___shb8_26 = ((float)((float)L_52+(float)L_53));
		SphericalHarmonicsL2_t768  L_54 = V_0;
		return L_54;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m4326 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t768  ___lhs, SphericalHarmonicsL2_t768  ___rhs, const MethodInfo* method)
{
	int32_t G_B28_0 = 0;
	{
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0200;
		}
	}
	{
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0200;
		}
	}
	{
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_0200;
		}
	}
	{
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		if ((!(((float)L_6) == ((float)L_7))))
		{
			goto IL_0200;
		}
	}
	{
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0200;
		}
	}
	{
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0200;
		}
	}
	{
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0200;
		}
	}
	{
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0200;
		}
	}
	{
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		if ((!(((float)L_16) == ((float)L_17))))
		{
			goto IL_0200;
		}
	}
	{
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		if ((!(((float)L_18) == ((float)L_19))))
		{
			goto IL_0200;
		}
	}
	{
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		if ((!(((float)L_20) == ((float)L_21))))
		{
			goto IL_0200;
		}
	}
	{
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		if ((!(((float)L_22) == ((float)L_23))))
		{
			goto IL_0200;
		}
	}
	{
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_0200;
		}
	}
	{
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		if ((!(((float)L_26) == ((float)L_27))))
		{
			goto IL_0200;
		}
	}
	{
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		if ((!(((float)L_28) == ((float)L_29))))
		{
			goto IL_0200;
		}
	}
	{
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		if ((!(((float)L_30) == ((float)L_31))))
		{
			goto IL_0200;
		}
	}
	{
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		if ((!(((float)L_32) == ((float)L_33))))
		{
			goto IL_0200;
		}
	}
	{
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		if ((!(((float)L_34) == ((float)L_35))))
		{
			goto IL_0200;
		}
	}
	{
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		if ((!(((float)L_36) == ((float)L_37))))
		{
			goto IL_0200;
		}
	}
	{
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		if ((!(((float)L_38) == ((float)L_39))))
		{
			goto IL_0200;
		}
	}
	{
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		if ((!(((float)L_40) == ((float)L_41))))
		{
			goto IL_0200;
		}
	}
	{
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		if ((!(((float)L_42) == ((float)L_43))))
		{
			goto IL_0200;
		}
	}
	{
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		if ((!(((float)L_44) == ((float)L_45))))
		{
			goto IL_0200;
		}
	}
	{
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		if ((!(((float)L_46) == ((float)L_47))))
		{
			goto IL_0200;
		}
	}
	{
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		if ((!(((float)L_48) == ((float)L_49))))
		{
			goto IL_0200;
		}
	}
	{
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_0200;
		}
	}
	{
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		G_B28_0 = ((((float)L_52) == ((float)L_53))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B28_0 = 0;
	}

IL_0201:
	{
		return G_B28_0;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Inequality_m4327 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t768  ___lhs, SphericalHarmonicsL2_t768  ___rhs, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t768  L_0 = ___lhs;
		SphericalHarmonicsL2_t768  L_1 = ___rhs;
		bool L_2 = SphericalHarmonicsL2_op_Equality_m4326(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"
extern "C" Rect_t232  Sprite_get_rect_m2921 (Sprite_t181 * __this, const MethodInfo* method)
{
	Rect_t232  V_0 = {0};
	{
		Sprite_INTERNAL_get_rect_m4328(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t232  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_rect_m4328 (Sprite_t181 * __this, Rect_t232 * ___value, const MethodInfo* method)
{
	typedef void (*Sprite_INTERNAL_get_rect_m4328_ftn) (Sprite_t181 *, Rect_t232 *);
	static Sprite_INTERNAL_get_rect_m4328_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_INTERNAL_get_rect_m4328_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m2918 (Sprite_t181 * __this, const MethodInfo* method)
{
	typedef float (*Sprite_get_pixelsPerUnit_m2918_ftn) (Sprite_t181 *);
	static Sprite_get_pixelsPerUnit_m2918_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_pixelsPerUnit_m2918_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t13 * Sprite_get_texture_m2915 (Sprite_t181 * __this, const MethodInfo* method)
{
	typedef Texture2D_t13 * (*Sprite_get_texture_m2915_ftn) (Sprite_t181 *);
	static Sprite_get_texture_m2915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_texture_m2915_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t232  Sprite_get_textureRect_m2936 (Sprite_t181 * __this, const MethodInfo* method)
{
	Rect_t232  V_0 = {0};
	{
		Sprite_INTERNAL_get_textureRect_m4329(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t232  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_textureRect_m4329 (Sprite_t181 * __this, Rect_t232 * ___value, const MethodInfo* method)
{
	typedef void (*Sprite_INTERNAL_get_textureRect_m4329_ftn) (Sprite_t181 *, Rect_t232 *);
	static Sprite_INTERNAL_get_textureRect_m4329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_INTERNAL_get_textureRect_m4329_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t100  Sprite_get_border_m2916 (Sprite_t181 * __this, const MethodInfo* method)
{
	Vector4_t100  V_0 = {0};
	{
		Sprite_INTERNAL_get_border_m4330(__this, (&V_0), /*hidden argument*/NULL);
		Vector4_t100  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)
extern "C" void Sprite_INTERNAL_get_border_m4330 (Sprite_t181 * __this, Vector4_t100 * ___value, const MethodInfo* method)
{
	typedef void (*Sprite_INTERNAL_get_border_m4330_ftn) (Sprite_t181 *, Vector4_t100 *);
	static Sprite_INTERNAL_get_border_m4330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_INTERNAL_get_border_m4330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
extern "C" Sprite_t181 * SpriteRenderer_get_sprite_m1163 (SpriteRenderer_t140 * __this, const MethodInfo* method)
{
	{
		Sprite_t181 * L_0 = SpriteRenderer_GetSprite_INTERNAL_m4331(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
extern "C" void SpriteRenderer_set_sprite_m1169 (SpriteRenderer_t140 * __this, Sprite_t181 * ___value, const MethodInfo* method)
{
	{
		Sprite_t181 * L_0 = ___value;
		SpriteRenderer_SetSprite_INTERNAL_m4332(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::GetSprite_INTERNAL()
extern "C" Sprite_t181 * SpriteRenderer_GetSprite_INTERNAL_m4331 (SpriteRenderer_t140 * __this, const MethodInfo* method)
{
	typedef Sprite_t181 * (*SpriteRenderer_GetSprite_INTERNAL_m4331_ftn) (SpriteRenderer_t140 *);
	static SpriteRenderer_GetSprite_INTERNAL_m4331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRenderer_GetSprite_INTERNAL_m4331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpriteRenderer::GetSprite_INTERNAL()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.SpriteRenderer::SetSprite_INTERNAL(UnityEngine.Sprite)
extern "C" void SpriteRenderer_SetSprite_INTERNAL_m4332 (SpriteRenderer_t140 * __this, Sprite_t181 * ___sprite, const MethodInfo* method)
{
	typedef void (*SpriteRenderer_SetSprite_INTERNAL_m4332_ftn) (SpriteRenderer_t140 *, Sprite_t181 *);
	static SpriteRenderer_SetSprite_INTERNAL_m4332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRenderer_SetSprite_INTERNAL_m4332_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpriteRenderer::SetSprite_INTERNAL(UnityEngine.Sprite)");
	_il2cpp_icall_func(__this, ___sprite);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
extern "C" Color_t12  SpriteRenderer_get_color_m1116 (SpriteRenderer_t140 * __this, const MethodInfo* method)
{
	Color_t12  V_0 = {0};
	{
		SpriteRenderer_INTERNAL_get_color_m4333(__this, (&V_0), /*hidden argument*/NULL);
		Color_t12  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void SpriteRenderer_set_color_m1095 (SpriteRenderer_t140 * __this, Color_t12  ___value, const MethodInfo* method)
{
	{
		SpriteRenderer_INTERNAL_set_color_m4334(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SpriteRenderer::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void SpriteRenderer_INTERNAL_get_color_m4333 (SpriteRenderer_t140 * __this, Color_t12 * ___value, const MethodInfo* method)
{
	typedef void (*SpriteRenderer_INTERNAL_get_color_m4333_ftn) (SpriteRenderer_t140 *, Color_t12 *);
	static SpriteRenderer_INTERNAL_get_color_m4333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRenderer_INTERNAL_get_color_m4333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpriteRenderer::INTERNAL_get_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.SpriteRenderer::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void SpriteRenderer_INTERNAL_set_color_m4334 (SpriteRenderer_t140 * __this, Color_t12 * ___value, const MethodInfo* method)
{
	typedef void (*SpriteRenderer_INTERNAL_set_color_m4334_ftn) (SpriteRenderer_t140 *, Color_t12 *);
	static SpriteRenderer_INTERNAL_set_color_m4334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRenderer_INTERNAL_set_color_m4334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpriteRenderer::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtility.h"
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
extern "C" Vector4_t100  DataUtility_GetInnerUV_m2928 (Object_t * __this /* static, unused */, Sprite_t181 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t100  (*DataUtility_GetInnerUV_m2928_ftn) (Sprite_t181 *);
	static DataUtility_GetInnerUV_m2928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetInnerUV_m2928_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern "C" Vector4_t100  DataUtility_GetOuterUV_m2927 (Object_t * __this /* static, unused */, Sprite_t181 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t100  (*DataUtility_GetOuterUV_m2927_ftn) (Sprite_t181 *);
	static DataUtility_GetOuterUV_m2927_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetOuterUV_m2927_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern "C" Vector4_t100  DataUtility_GetPadding_m2920 (Object_t * __this /* static, unused */, Sprite_t181 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t100  (*DataUtility_GetPadding_m2920_ftn) (Sprite_t181 *);
	static DataUtility_GetPadding_m2920_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetPadding_m2920_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"
extern "C" Vector2_t85  DataUtility_GetMinSize_m2934 (Object_t * __this /* static, unused */, Sprite_t181 * ___sprite, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		Sprite_t181 * L_0 = ___sprite;
		DataUtility_Internal_GetMinSize_m4335(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void DataUtility_Internal_GetMinSize_m4335 (Object_t * __this /* static, unused */, Sprite_t181 * ___sprite, Vector2_t85 * ___output, const MethodInfo* method)
{
	typedef void (*DataUtility_Internal_GetMinSize_m4335_ftn) (Sprite_t181 *, Vector2_t85 *);
	static DataUtility_Internal_GetMinSize_m4335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_Internal_GetMinSize_m4335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___sprite, ___output);
}
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndex.h"
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndexMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.CacheIndex
extern "C" void CacheIndex_t770_marshal(const CacheIndex_t770& unmarshaled, CacheIndex_t770_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
extern "C" void CacheIndex_t770_marshal_back(const CacheIndex_t770_marshaled& marshaled, CacheIndex_t770& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
extern "C" void CacheIndex_t770_marshal_cleanup(CacheIndex_t770_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityString_Format_m4336 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t234* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t234* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m3100(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.AsyncOperation::.ctor()
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern "C" void AsyncOperation__ctor_m4337 (AsyncOperation_t718 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m4473(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m4338 (AsyncOperation_t718 * __this, const MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m4338_ftn) (AsyncOperation_t718 *);
	static AsyncOperation_InternalDestroy_m4338_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m4338_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void AsyncOperation_Finalize_m4339 (AsyncOperation_t718 * __this, const MethodInfo* method)
{
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AsyncOperation_InternalDestroy_m4338(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m5182(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
extern "C" void AsyncOperation_t718_marshal(const AsyncOperation_t718& unmarshaled, AsyncOperation_t718_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void AsyncOperation_t718_marshal_back(const AsyncOperation_t718_marshaled& marshaled, AsyncOperation_t718& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
extern "C" void AsyncOperation_t718_marshal_cleanup(AsyncOperation_t718_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void LogCallback__ctor_m4340 (LogCallback_t772 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
extern "C" void LogCallback_Invoke_m4341 (LogCallback_t772 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m4341((LogCallback_t772 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t772(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* LogType_t722_il2cpp_TypeInfo_var;
extern "C" Object_t * LogCallback_BeginInvoke_m4342 (LogCallback_t772 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t722_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(LogType_t722_il2cpp_TypeInfo_var, &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern "C" void LogCallback_EndInvoke_m4343 (LogCallback_t772 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
// System.Int32 UnityEngine.Application::get_loadedLevel()
extern "C" int32_t Application_get_loadedLevel_m1262 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_loadedLevel_m1262_ftn) ();
	static Application_get_loadedLevel_m1262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_loadedLevel_m1262_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevel()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_loadedLevelName()
extern "C" String_t* Application_get_loadedLevelName_m1259 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_loadedLevelName_m1259_ftn) ();
	static Application_get_loadedLevelName_m1259_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_loadedLevelName_m1259_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevelName()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern "C" void Application_LoadLevel_m1263 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Application_LoadLevelAsync_m4344(NULL /*static, unused*/, (String_t*)NULL, L_0, 0, 1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" AsyncOperation_t718 * Application_LoadLevelAsync_m4344 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, const MethodInfo* method)
{
	typedef AsyncOperation_t718 * (*Application_LoadLevelAsync_m4344_ftn) (String_t*, int32_t, bool, bool);
	static Application_LoadLevelAsync_m4344_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_LoadLevelAsync_m4344_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(___monoLevelName, ___index, ___additive, ___mustCompleteNextFrame);
}
// System.Int32 UnityEngine.Application::get_levelCount()
extern "C" int32_t Application_get_levelCount_m1260 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_levelCount_m1260_ftn) ();
	static Application_get_levelCount_m1260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_levelCount_m1260_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_levelCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" bool Application_get_isPlaying_m2808 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m2808_ftn) ();
	static Application_get_isPlaying_m2808_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m2808_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" bool Application_get_isEditor_m3041 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m3041_ftn) ();
	static Application_get_isEditor_m3041_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m3041_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m457 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m457_ftn) ();
	static Application_get_platform_m457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_dataPath()
extern "C" String_t* Application_get_dataPath_m1177 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_dataPath_m1177_ftn) ();
	static Application_get_dataPath_m1177_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_dataPath_m1177_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_dataPath()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"
extern TypeInfo* Application_t773_il2cpp_TypeInfo_var;
extern "C" void Application_CallLogCallback_m4345 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		s_Il2CppMethodIntialized = true;
	}
	LogCallback_t772 * V_0 = {0};
	LogCallback_t772 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t772 * L_1 = ((Application_t773_StaticFields*)Application_t773_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t772 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t772 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		LogCallback_Invoke_m4341(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001b:
	{
		LogCallback_t772 * L_7 = ((Application_t773_StaticFields*)Application_t773_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t772 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t772 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		LogCallback_Invoke_m4341(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// System.Void UnityEngine.Behaviour::.ctor()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" void Behaviour__ctor_m4346 (Behaviour_t578 * __this, const MethodInfo* method)
{
	{
		Component__ctor_m4436(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" bool Behaviour_get_enabled_m2686 (Behaviour_t578 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m2686_ftn) (Behaviour_t578 *);
	static Behaviour_get_enabled_m2686_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m2686_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Behaviour_set_enabled_m303 (Behaviour_t578 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m303_ftn) (Behaviour_t578 *, bool);
	static Behaviour_set_enabled_m303_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m303_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern "C" bool Behaviour_get_isActiveAndEnabled_m2680 (Behaviour_t578 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m2680_ftn) (Behaviour_t578 *);
	static Behaviour_get_isActiveAndEnabled_m2680_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m2680_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"
// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void CameraCallback__ctor_m4347 (CameraCallback_t774 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern "C" void CameraCallback_Invoke_m4348 (CameraCallback_t774 * __this, Camera_t32 * ___cam, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m4348((CameraCallback_t774 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t32 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t32 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t774(Il2CppObject* delegate, Camera_t32 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t32 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * CameraCallback_BeginInvoke_m4349 (CameraCallback_t774 * __this, Camera_t32 * ___cam, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m4350 (CameraCallback_t774 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C" float Camera_get_fieldOfView_m339 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_fieldOfView_m339_ftn) (Camera_t32 *);
	static Camera_get_fieldOfView_m339_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_fieldOfView_m339_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_fieldOfView()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m387 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m387_ftn) (Camera_t32 *);
	static Camera_get_nearClipPlane_m387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m391 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m391_ftn) (Camera_t32 *);
	static Camera_get_farClipPlane_m391_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m391_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Camera::get_hdr()
extern "C" bool Camera_get_hdr_m281 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef bool (*Camera_get_hdr_m281_ftn) (Camera_t32 *);
	static Camera_get_hdr_m281_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_hdr_m281_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_hdr()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C" float Camera_get_orthographicSize_m1122 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_orthographicSize_m1122_ftn) (Camera_t32 *);
	static Camera_get_orthographicSize_m1122_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_orthographicSize_m1122_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographicSize()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m2640 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_depth_m2640_ftn) (Camera_t32 *);
	static Camera_get_depth_m2640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m2640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_aspect()
extern "C" float Camera_get_aspect_m407 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_aspect_m407_ftn) (Camera_t32 *);
	static Camera_get_aspect_m407_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_aspect_m407_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_aspect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m2749 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m2749_ftn) (Camera_t32 *);
	static Camera_get_cullingMask_m2749_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m2749_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Camera_set_cullingMask_m345 (Camera_t32 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_cullingMask_m345_ftn) (Camera_t32 *, int32_t);
	static Camera_set_cullingMask_m345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_cullingMask_m345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_cullingMask(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m4351 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m4351_ftn) (Camera_t32 *);
	static Camera_get_eventMask_m4351_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m4351_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern "C" Color_t12  Camera_get_backgroundColor_m1096 (Camera_t32 * __this, const MethodInfo* method)
{
	Color_t12  V_0 = {0};
	{
		Camera_INTERNAL_get_backgroundColor_m4352(__this, (&V_0), /*hidden argument*/NULL);
		Color_t12  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void Camera_set_backgroundColor_m1097 (Camera_t32 * __this, Color_t12  ___value, const MethodInfo* method)
{
	{
		Camera_INTERNAL_set_backgroundColor_m4353(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_get_backgroundColor_m4352 (Camera_t32 * __this, Color_t12 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_backgroundColor_m4352_ftn) (Camera_t32 *, Color_t12 *);
	static Camera_INTERNAL_get_backgroundColor_m4352_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_backgroundColor_m4352_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_set_backgroundColor_m4353 (Camera_t32 * __this, Color_t12 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_backgroundColor_m4353_ftn) (Camera_t32 *, Color_t12 *);
	static Camera_INTERNAL_set_backgroundColor_m4353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_backgroundColor_m4353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t232  Camera_get_pixelRect_m3901 (Camera_t32 * __this, const MethodInfo* method)
{
	Rect_t232  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m4354(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t232  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m4354 (Camera_t32 * __this, Rect_t232 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m4354_ftn) (Camera_t32 *, Rect_t232 *);
	static Camera_INTERNAL_get_pixelRect_m4354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m4354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t55 * Camera_get_targetTexture_m4355 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef RenderTexture_t55 * (*Camera_get_targetTexture_m4355_ftn) (Camera_t32 *);
	static Camera_get_targetTexture_m4355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m4355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
extern "C" void Camera_set_targetTexture_m343 (Camera_t32 * __this, RenderTexture_t55 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_targetTexture_m343_ftn) (Camera_t32 *, RenderTexture_t55 *);
	static Camera_set_targetTexture_m343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_targetTexture_m343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C" Matrix4x4_t31  Camera_get_worldToCameraMatrix_m313 (Camera_t32 * __this, const MethodInfo* method)
{
	Matrix4x4_t31  V_0 = {0};
	{
		Camera_INTERNAL_get_worldToCameraMatrix_m4356(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t31  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_worldToCameraMatrix_m4356 (Camera_t32 * __this, Matrix4x4_t31 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_worldToCameraMatrix_m4356_ftn) (Camera_t32 *, Matrix4x4_t31 *);
	static Camera_INTERNAL_get_worldToCameraMatrix_m4356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_worldToCameraMatrix_m4356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C" Matrix4x4_t31  Camera_get_projectionMatrix_m314 (Camera_t32 * __this, const MethodInfo* method)
{
	Matrix4x4_t31  V_0 = {0};
	{
		Camera_INTERNAL_get_projectionMatrix_m4357(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t31  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m4357 (Camera_t32 * __this, Matrix4x4_t31 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_projectionMatrix_m4357_ftn) (Camera_t32 *, Matrix4x4_t31 *);
	static Camera_INTERNAL_get_projectionMatrix_m4357_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_projectionMatrix_m4357_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m4358 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m4358_ftn) (Camera_t32 *);
	static Camera_get_clearFlags_m4358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m4358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
extern "C" void Camera_set_clearFlags_m361 (Camera_t32 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_clearFlags_m361_ftn) (Camera_t32 *, int32_t);
	static Camera_set_clearFlags_m361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_clearFlags_m361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" Vector3_t28  Camera_WorldToViewportPoint_m390 (Camera_t32 * __this, Vector3_t28  ___position, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Camera_INTERNAL_CALL_WorldToViewportPoint_m4359(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern "C" Vector3_t28  Camera_INTERNAL_CALL_WorldToViewportPoint_m4359 (Object_t * __this /* static, unused */, Camera_t32 * ___self, Vector3_t28 * ___position, const MethodInfo* method)
{
	typedef Vector3_t28  (*Camera_INTERNAL_CALL_WorldToViewportPoint_m4359_ftn) (Camera_t32 *, Vector3_t28 *);
	static Camera_INTERNAL_CALL_WorldToViewportPoint_m4359_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_WorldToViewportPoint_m4359_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t28  Camera_ScreenToWorldPoint_m1219 (Camera_t32 * __this, Vector3_t28  ___position, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Camera_INTERNAL_CALL_ScreenToWorldPoint_m4360(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t28  Camera_INTERNAL_CALL_ScreenToWorldPoint_m4360 (Object_t * __this /* static, unused */, Camera_t32 * ___self, Vector3_t28 * ___position, const MethodInfo* method)
{
	typedef Vector3_t28  (*Camera_INTERNAL_CALL_ScreenToWorldPoint_m4360_ftn) (Camera_t32 *, Vector3_t28 *);
	static Camera_INTERNAL_CALL_ScreenToWorldPoint_m4360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToWorldPoint_m4360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t28  Camera_ScreenToViewportPoint_m2897 (Camera_t32 * __this, Vector3_t28  ___position, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m4361(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t28  Camera_INTERNAL_CALL_ScreenToViewportPoint_m4361 (Object_t * __this /* static, unused */, Camera_t32 * ___self, Vector3_t28 * ___position, const MethodInfo* method)
{
	typedef Vector3_t28  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m4361_ftn) (Camera_t32 *, Vector3_t28 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m4361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m4361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t529  Camera_ScreenPointToRay_m2738 (Camera_t32 * __this, Vector3_t28  ___position, const MethodInfo* method)
{
	{
		Ray_t529  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m4362(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t529  Camera_INTERNAL_CALL_ScreenPointToRay_m4362 (Object_t * __this /* static, unused */, Camera_t32 * ___self, Vector3_t28 * ___position, const MethodInfo* method)
{
	typedef Ray_t529  (*Camera_INTERNAL_CALL_ScreenPointToRay_m4362_ftn) (Camera_t32 *, Vector3_t28 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m4362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m4362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t32 * Camera_get_main_m1121 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Camera_t32 * (*Camera_get_main_m1121_ftn) ();
	static Camera_get_main_m1121_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m1121_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m4363 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m4363_ftn) ();
	static Camera_get_allCamerasCount_m4363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m4363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
#include "UnityEngine_ArrayTypes.h"
extern "C" int32_t Camera_GetAllCameras_m4364 (Object_t * __this /* static, unused */, CameraU5BU5D_t896* ___cameras, const MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m4364_ftn) (CameraU5BU5D_t896*);
	static Camera_GetAllCameras_m4364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m4364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"
extern TypeInfo* Camera_t32_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreCull_m4365 (Object_t * __this /* static, unused */, Camera_t32 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t774 * L_0 = ((Camera_t32_StaticFields*)Camera_t32_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t774 * L_1 = ((Camera_t32_StaticFields*)Camera_t32_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		Camera_t32 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m4348(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern TypeInfo* Camera_t32_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreRender_m4366 (Object_t * __this /* static, unused */, Camera_t32 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t774 * L_0 = ((Camera_t32_StaticFields*)Camera_t32_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t774 * L_1 = ((Camera_t32_StaticFields*)Camera_t32_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		Camera_t32 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m4348(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern TypeInfo* Camera_t32_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPostRender_m4367 (Object_t * __this /* static, unused */, Camera_t32 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t774 * L_0 = ((Camera_t32_StaticFields*)Camera_t32_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t774 * L_1 = ((Camera_t32_StaticFields*)Camera_t32_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		Camera_t32 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m4348(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// System.String
#include "mscorlib_System_String.h"
extern "C" void Camera_RenderWithShader_m346 (Camera_t32 * __this, Shader_t4 * ___shader, String_t* ___replacementTag, const MethodInfo* method)
{
	typedef void (*Camera_RenderWithShader_m346_ftn) (Camera_t32 *, Shader_t4 *, String_t*);
	static Camera_RenderWithShader_m346_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_RenderWithShader_m346_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)");
	_il2cpp_icall_func(__this, ___shader, ___replacementTag);
}
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern "C" void Camera_CopyFrom_m360 (Camera_t32 * __this, Camera_t32 * ___other, const MethodInfo* method)
{
	typedef void (*Camera_CopyFrom_m360_ftn) (Camera_t32 *, Camera_t32 *);
	static Camera_CopyFrom_m360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_CopyFrom_m360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::CopyFrom(UnityEngine.Camera)");
	_il2cpp_icall_func(__this, ___other);
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
extern "C" int32_t Camera_get_depthTextureMode_m319 (Camera_t32 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_depthTextureMode_m319_ftn) (Camera_t32 *);
	static Camera_get_depthTextureMode_m319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depthTextureMode_m319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depthTextureMode()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
extern "C" void Camera_set_depthTextureMode_m320 (Camera_t32 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_depthTextureMode_m320_ftn) (Camera_t32 *, int32_t);
	static Camera_set_depthTextureMode_m320_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_depthTextureMode_m320_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Single
#include "mscorlib_System_Single.h"
extern "C" GameObject_t30 * Camera_RaycastTry_m4368 (Camera_t32 * __this, Ray_t529  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		int32_t L_2 = V_0;
		GameObject_t30 * L_3 = Camera_INTERNAL_CALL_RaycastTry_m4369(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
extern "C" GameObject_t30 * Camera_INTERNAL_CALL_RaycastTry_m4369 (Object_t * __this /* static, unused */, Camera_t32 * ___self, Ray_t529 * ___ray, float ___distance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	typedef GameObject_t30 * (*Camera_INTERNAL_CALL_RaycastTry_m4369_ftn) (Camera_t32 *, Ray_t529 *, float, int32_t, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m4369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m4369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask, ___queryTriggerInteraction);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t30 * Camera_RaycastTry2D_m4370 (Camera_t32 * __this, Ray_t529  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t30 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m4371(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t30 * Camera_INTERNAL_CALL_RaycastTry2D_m4371 (Object_t * __this /* static, unused */, Camera_t32 * ___self, Ray_t529 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t30 * (*Camera_INTERNAL_CALL_RaycastTry2D_m4371_ftn) (Camera_t32 *, Ray_t529 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m4371_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m4371_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBufferMethodDeclarations.h"
// UnityEngine.ComputeBufferType
#include "UnityEngine_UnityEngine_ComputeBufferType.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"
// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBufferType)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.ComputeBufferType
#include "UnityEngine_UnityEngine_ComputeBufferType.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBufferMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void ComputeBuffer__ctor_m385 (ComputeBuffer_t49 * __this, int32_t ___count, int32_t ___stride, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		__this->___m_Ptr_0 = L_0;
		int32_t L_1 = ___count;
		int32_t L_2 = ___stride;
		int32_t L_3 = ___type;
		ComputeBuffer_InitBuffer_m4375(NULL /*static, unused*/, __this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::Finalize()
extern "C" void ComputeBuffer_Finalize_m4372 (ComputeBuffer_t49 * __this, const MethodInfo* method)
{
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		ComputeBuffer_Dispose_m4374(__this, 0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m5182(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::Dispose()
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
extern "C" void ComputeBuffer_Dispose_m4373 (ComputeBuffer_t49 * __this, const MethodInfo* method)
{
	{
		ComputeBuffer_Dispose_m4374(__this, 1, /*hidden argument*/NULL);
		GC_SuppressFinalize_m5208(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::Dispose(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void ComputeBuffer_Dispose_m4374 (ComputeBuffer_t49 * __this, bool ___disposing, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	{
		ComputeBuffer_DestroyBuffer_m4376(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		__this->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBuffer.h"
extern "C" void ComputeBuffer_InitBuffer_m4375 (Object_t * __this /* static, unused */, ComputeBuffer_t49 * ___buf, int32_t ___count, int32_t ___stride, int32_t ___type, const MethodInfo* method)
{
	typedef void (*ComputeBuffer_InitBuffer_m4375_ftn) (ComputeBuffer_t49 *, int32_t, int32_t, int32_t);
	static ComputeBuffer_InitBuffer_m4375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_InitBuffer_m4375_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)");
	_il2cpp_icall_func(___buf, ___count, ___stride, ___type);
}
// System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
extern "C" void ComputeBuffer_DestroyBuffer_m4376 (Object_t * __this /* static, unused */, ComputeBuffer_t49 * ___buf, const MethodInfo* method)
{
	typedef void (*ComputeBuffer_DestroyBuffer_m4376_ftn) (ComputeBuffer_t49 *);
	static ComputeBuffer_DestroyBuffer_m4376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_DestroyBuffer_m4376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)");
	_il2cpp_icall_func(___buf);
}
// System.Void UnityEngine.ComputeBuffer::Release()
extern "C" void ComputeBuffer_Release_m384 (ComputeBuffer_t49 * __this, const MethodInfo* method)
{
	{
		ComputeBuffer_Dispose_m4373(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::SetData(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"
extern TypeInfo* Marshal_t958_il2cpp_TypeInfo_var;
extern "C" void ComputeBuffer_SetData_m386 (ComputeBuffer_t49 * __this, Array_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___data;
		Array_t * L_1 = ___data;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m2703(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t958_il2cpp_TypeInfo_var);
		int32_t L_4 = Marshal_SizeOf_m5209(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ComputeBuffer_InternalSetData_m4377(__this, L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32)
extern "C" void ComputeBuffer_InternalSetData_m4377 (ComputeBuffer_t49 * __this, Array_t * ___data, int32_t ___elemSize, const MethodInfo* method)
{
	typedef void (*ComputeBuffer_InternalSetData_m4377_ftn) (ComputeBuffer_t49 *, Array_t *, int32_t);
	static ComputeBuffer_InternalSetData_m4377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_InternalSetData_m4377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32)");
	_il2cpp_icall_func(__this, ___data, ___elemSize);
}
// System.Void UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)
extern "C" void ComputeBuffer_CopyCount_m394 (Object_t * __this /* static, unused */, ComputeBuffer_t49 * ___src, ComputeBuffer_t49 * ___dst, int32_t ___dstOffset, const MethodInfo* method)
{
	typedef void (*ComputeBuffer_CopyCount_m394_ftn) (ComputeBuffer_t49 *, ComputeBuffer_t49 *, int32_t);
	static ComputeBuffer_CopyCount_m394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_CopyCount_m394_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)");
	_il2cpp_icall_func(___src, ___dst, ___dstOffset);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern "C" void Debug_DrawLine_m1139 (Object_t * __this /* static, unused */, Vector3_t28  ___start, Vector3_t28  ___end, Color_t12  ___color, const MethodInfo* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		V_0 = 1;
		V_1 = (0.0f);
		float L_0 = V_1;
		bool L_1 = V_0;
		Debug_INTERNAL_CALL_DrawLine_m4378(NULL /*static, unused*/, (&___start), (&___end), (&___color), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
// System.Single
#include "mscorlib_System_Single.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Debug_INTERNAL_CALL_DrawLine_m4378 (Object_t * __this /* static, unused */, Vector3_t28 * ___start, Vector3_t28 * ___end, Color_t12 * ___color, float ___duration, bool ___depthTest, const MethodInfo* method)
{
	typedef void (*Debug_INTERNAL_CALL_DrawLine_m4378_ftn) (Vector3_t28 *, Vector3_t28 *, Color_t12 *, float, bool);
	static Debug_INTERNAL_CALL_DrawLine_m4378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_INTERNAL_CALL_DrawLine_m4378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)");
	_il2cpp_icall_func(___start, ___end, ___color, ___duration, ___depthTest);
}
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" void Debug_Internal_Log_m4379 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t99 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m4379_ftn) (int32_t, String_t*, Object_t99 *);
	static Debug_Internal_Log_m4379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m4379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
// System.Exception
#include "mscorlib_System_Exception.h"
extern "C" void Debug_Internal_LogException_m4380 (Object_t * __this /* static, unused */, Exception_t236 * ___exception, Object_t99 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m4380_ftn) (Exception_t236 *, Object_t99 *);
	static Debug_Internal_LogException_m4380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m4380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern Il2CppCodeGenString* _stringLiteral391;
extern "C" void Debug_Log_m426 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral391 = il2cpp_codegen_string_literal_from_index(391);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral391;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m4379(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern Il2CppCodeGenString* _stringLiteral391;
extern "C" void Debug_LogError_m380 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral391 = il2cpp_codegen_string_literal_from_index(391);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral391;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m4379(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m2812 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t99 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t99 * L_2 = ___context;
		Debug_Internal_Log_m4379(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m4381 (Object_t * __this /* static, unused */, Exception_t236 * ___exception, const MethodInfo* method)
{
	{
		Exception_t236 * L_0 = ___exception;
		Debug_Internal_LogException_m4380(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m2772 (Object_t * __this /* static, unused */, Exception_t236 * ___exception, Object_t99 * ___context, const MethodInfo* method)
{
	{
		Exception_t236 * L_0 = ___exception;
		Object_t99 * L_1 = ___context;
		Debug_Internal_LogException_m4380(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m378 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Debug_Internal_Log_m4379(NULL /*static, unused*/, 1, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m424 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t99 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t99 * L_2 = ___context;
		Debug_Internal_Log_m4379(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void DisplaysUpdatedDelegate__ctor_m4382 (DisplaysUpdatedDelegate_t776 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m4383 (DisplaysUpdatedDelegate_t776 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m4383((DisplaysUpdatedDelegate_t776 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t776(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m4384 (DisplaysUpdatedDelegate_t776 * __this, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m4385 (DisplaysUpdatedDelegate_t776 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"
// System.Void UnityEngine.Display::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern "C" void Display__ctor_m4386 (Display_t777 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m5210(&L_0, 0, /*hidden argument*/NULL);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Display__ctor_m4387 (Display_t777 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"
extern TypeInfo* DisplayU5BU5D_t778_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m4388 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		DisplayU5BU5D_t778* L_0 = ((DisplayU5BU5D_t778*)SZArrayNew(DisplayU5BU5D_t778_il2cpp_TypeInfo_var, 1));
		Display_t777 * L_1 = (Display_t777 *)il2cpp_codegen_object_new (Display_t777_il2cpp_TypeInfo_var);
		Display__ctor_m4386(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t777 **)(Display_t777 **)SZArrayLdElema(L_0, 0, sizeof(Display_t777 *))) = (Display_t777 *)L_1;
		((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t778* L_2 = ((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t777 **)(Display_t777 **)SZArrayLdElema(L_2, L_3, sizeof(Display_t777 *)));
		((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t776 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t776_il2cpp_TypeInfo_var;
extern "C" void Display_add_onDisplaysUpdated_m4389 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t776 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		DisplaysUpdatedDelegate_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t776 * L_0 = ((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t776 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t776 *)CastclassSealed(L_2, DisplaysUpdatedDelegate_t776_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t776_il2cpp_TypeInfo_var;
extern "C" void Display_remove_onDisplaysUpdated_m4390 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t776 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		DisplaysUpdatedDelegate_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t776 * L_0 = ((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t776 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t776 *)CastclassSealed(L_2, DisplaysUpdatedDelegate_t776_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingWidth_m4391 (Display_t777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m4407(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingHeight_m4392 (Display_t777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m4407(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemWidth_m4393 (Display_t777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m4406(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemHeight_m4394 (Display_t777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m4406(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t872  Display_get_colorBuffer_m4395 (Display_t777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t872  V_0 = {0};
	RenderBuffer_t872  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m4408(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t872  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t872  Display_get_depthBuffer_m4396 (Display_t777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t872  V_0 = {0};
	RenderBuffer_t872  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m4408(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t872  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m4397 (Display_t777 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m4410(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m4398 (Display_t777 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m4410(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" void Display_SetParams_m4399 (Display_t777 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		Display_SetParamsImpl_m4411(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" void Display_SetRenderingResolution_m4400 (Display_t777 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		Display_SetRenderingResolutionImpl_m4409(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" bool Display_MultiDisplayLicense_m4401 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		bool L_0 = Display_MultiDisplayLicenseImpl_m4412(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" Vector3_t28  Display_RelativeMouseAt_m4402 (Object_t * __this /* static, unused */, Vector3_t28  ___inputMouseCoordinates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t28  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		int32_t L_4 = Display_RelativeMouseAtImpl_m4413(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/NULL);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t28  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" Display_t777 * Display_get_main_m4403 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		Display_t777 * L_0 = ((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
#include "mscorlib_ArrayTypes.h"
extern TypeInfo* DisplayU5BU5D_t778_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m4404 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t938* ___nativeDisplay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t938* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___displays_1 = ((DisplayU5BU5D_t778*)SZArrayNew(DisplayU5BU5D_t778_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t778* L_1 = ((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t938* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t777 * L_6 = (Display_t777 *)il2cpp_codegen_object_new (Display_t777_il2cpp_TypeInfo_var);
		Display__ctor_m4387(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5, sizeof(IntPtr_t))), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t777 **)(Display_t777 **)SZArrayLdElema(L_1, L_2, sizeof(Display_t777 *))) = (Display_t777 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t938* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t778* L_10 = ((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t777 **)(Display_t777 **)SZArrayLdElema(L_10, L_11, sizeof(Display_t777 *)));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"
extern TypeInfo* Display_t777_il2cpp_TypeInfo_var;
extern "C" void Display_FireDisplaysUpdated_m4405 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t776 * L_0 = ((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t777_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t776 * L_1 = ((Display_t777_StaticFields*)Display_t777_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		DisplaysUpdatedDelegate_Invoke_m4383(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m4406 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m4406_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m4406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m4406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m4407 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m4407_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m4407_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m4407_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m4408 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t872 * ___color, RenderBuffer_t872 * ___depth, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m4408_ftn) (IntPtr_t, RenderBuffer_t872 *, RenderBuffer_t872 *);
	static Display_GetRenderingBuffersImpl_m4408_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m4408_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m4409 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m4409_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m4409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m4409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m4410 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m4410_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m4410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m4410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m4411 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m4411_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m4411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m4411_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m4412 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m4412_ftn) ();
	static Display_MultiDisplayLicenseImpl_m4412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m4412_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m4413 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, const MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m4413_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m4413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m4413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.Void UnityEngine.MonoBehaviour::.ctor()
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern "C" void MonoBehaviour__ctor_m299 (MonoBehaviour_t23 * __this, const MethodInfo* method)
{
	{
		Behaviour__ctor_m4346(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" Coroutine_t125 * MonoBehaviour_StartCoroutine_m1077 (MonoBehaviour_t23 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t125 * L_1 = MonoBehaviour_StartCoroutine_Auto_m4414(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t125 * MonoBehaviour_StartCoroutine_Auto_m4414 (MonoBehaviour_t23 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef Coroutine_t125 * (*MonoBehaviour_StartCoroutine_Auto_m4414_ftn) (MonoBehaviour_t23 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m4414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m4414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Coroutine_t125 * MonoBehaviour_StartCoroutine_m4415 (MonoBehaviour_t23 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method)
{
	typedef Coroutine_t125 * (*MonoBehaviour_StartCoroutine_m4415_ftn) (MonoBehaviour_t23 *, String_t*, Object_t *);
	static MonoBehaviour_StartCoroutine_m4415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_m4415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)");
	return _il2cpp_icall_func(__this, ___methodName, ___value);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C" Coroutine_t125 * MonoBehaviour_StartCoroutine_m1234 (MonoBehaviour_t23 * __this, String_t* ___methodName, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		V_0 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_0;
		Coroutine_t125 * L_2 = MonoBehaviour_StartCoroutine_m4415(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern "C" void MonoBehaviour_StopCoroutine_m1230 (MonoBehaviour_t23 * __this, String_t* ___methodName, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_m1230_ftn) (MonoBehaviour_t23 *, String_t*);
	static MonoBehaviour_StopCoroutine_m1230_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_m1230_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine(System.String)");
	_il2cpp_icall_func(__this, ___methodName);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m4416 (MonoBehaviour_t23 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4417(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern "C" void MonoBehaviour_StopCoroutine_m1093 (MonoBehaviour_t23 * __this, Coroutine_t125 * ___routine, const MethodInfo* method)
{
	{
		Coroutine_t125 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m4418(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4417 (MonoBehaviour_t23 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4417_ftn) (MonoBehaviour_t23 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m4418 (MonoBehaviour_t23 * __this, Coroutine_t125 * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m4418_ftn) (MonoBehaviour_t23 *, Coroutine_t125 *);
	static MonoBehaviour_StopCoroutine_Auto_m4418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m4418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern "C" void MonoBehaviour_StopAllCoroutines_m1099 (MonoBehaviour_t23 * __this, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopAllCoroutines_m1099_ftn) (MonoBehaviour_t23 *);
	static MonoBehaviour_StopAllCoroutines_m1099_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopAllCoroutines_m1099_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopAllCoroutines()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern "C" void MonoBehaviour_print_m1076 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		Debug_Log_m426(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m2689 (Touch_t503 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t85  Touch_get_position_m2691 (Touch_t503 * __this, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m2690 (Touch_t503 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// Conversion methods for marshalling of: UnityEngine.Touch
extern "C" void Touch_t503_marshal(const Touch_t503& unmarshaled, Touch_t503_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
extern "C" void Touch_t503_marshal_back(const Touch_t503_marshaled& marshaled, Touch_t503& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
extern "C" void Touch_t503_marshal_cleanup(Touch_t503_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.Void UnityEngine.Input::.cctor()
extern "C" void Input__cctor_m4419 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool Input_GetKeyInt_m4420 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyInt_m4420_ftn) (int32_t);
	static Input_GetKeyInt_m4420_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyInt_m4420_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" float Input_GetAxisRaw_m2714 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m2714_ftn) (String_t*);
	static Input_GetAxisRaw_m2714_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m2714_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" bool Input_GetButtonDown_m2713 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m2713_ftn) (String_t*);
	static Input_GetButtonDown_m2713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m2713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
extern TypeInfo* Input_t524_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKey_m3889 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyInt_m4420(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" bool Input_GetMouseButton_m2735 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m2735_ftn) (int32_t);
	static Input_GetMouseButton_m2735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m2735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" bool Input_GetMouseButtonDown_m2692 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m2692_ftn) (int32_t);
	static Input_GetMouseButtonDown_m2692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m2692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" bool Input_GetMouseButtonUp_m2693 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m2693_ftn) (int32_t);
	static Input_GetMouseButtonUp_m2693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m2693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern TypeInfo* Input_t524_il2cpp_TypeInfo_var;
extern "C" Vector3_t28  Input_get_mousePosition_m2694 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t28  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mousePosition_m4421(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector3_t28  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C" void Input_INTERNAL_get_mousePosition_m4421 (Object_t * __this /* static, unused */, Vector3_t28 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_mousePosition_m4421_ftn) (Vector3_t28 *);
	static Input_INTERNAL_get_mousePosition_m4421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mousePosition_m4421_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern TypeInfo* Input_t524_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  Input_get_mouseScrollDelta_m2695 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mouseScrollDelta_m4422(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_get_mouseScrollDelta_m4422 (Object_t * __this /* static, unused */, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_mouseScrollDelta_m4422_ftn) (Vector2_t85 *);
	static Input_INTERNAL_get_mouseScrollDelta_m4422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mouseScrollDelta_m4422_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern "C" bool Input_get_mousePresent_m2712 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m2712_ftn) ();
	static Input_get_mousePresent_m2712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m2712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t503  Input_GetTouch_m2733 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef Touch_t503  (*Input_GetTouch_m2733_ftn) (int32_t);
	static Input_GetTouch_m2733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m2733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m2734 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m2734_ftn) ();
	static Input_get_touchCount_m2734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m2734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m2732 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
extern "C" void Input_set_imeCompositionMode_m3025 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m3025_ftn) (int32_t);
	static Input_set_imeCompositionMode_m3025_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m3025_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern "C" String_t* Input_get_compositionString_m2964 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m2964_ftn) ();
	static Input_get_compositionString_m2964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m2964_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo* Input_t524_il2cpp_TypeInfo_var;
extern "C" void Input_set_compositionCursorPos_m3013 (Object_t * __this /* static, unused */, Vector2_t85  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t524_il2cpp_TypeInfo_var);
		Input_INTERNAL_set_compositionCursorPos_m4423(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m4423 (Object_t * __this /* static, unused */, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m4423_ftn) (Vector2_t85 *);
	static Input_INTERNAL_set_compositionCursorPos_m4423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m4423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"
// System.Void UnityEngine.Object::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Object__ctor_m4424 (Object_t99 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" Object_t99 * Object_Internal_CloneSingle_m4425 (Object_t * __this /* static, unused */, Object_t99 * ___data, const MethodInfo* method)
{
	typedef Object_t99 * (*Object_Internal_CloneSingle_m4425_ftn) (Object_t99 *);
	static Object_Internal_CloneSingle_m4425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m4425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Object_Destroy_m4426 (Object_t * __this /* static, unused */, Object_t99 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_Destroy_m4426_ftn) (Object_t99 *, float);
	static Object_Destroy_m4426_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m4426_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void Object_Destroy_m1143 (Object_t * __this /* static, unused */, Object_t99 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t99 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m4426(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Object_DestroyImmediate_m4427 (Object_t * __this /* static, unused */, Object_t99 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m4427_ftn) (Object_t99 *, bool);
	static Object_DestroyImmediate_m4427_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m4427_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m297 (Object_t * __this /* static, unused */, Object_t99 * ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t99 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m4427(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern "C" ObjectU5BU5D_t709* Object_FindObjectsOfType_m3939 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t709* (*Object_FindObjectsOfType_m3939_ftn) (Type_t *);
	static Object_FindObjectsOfType_m3939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_FindObjectsOfType_m3939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m348 (Object_t99 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m348_ftn) (Object_t99 *);
	static Object_get_name_m348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Object_set_name_m1204 (Object_t99 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*Object_set_name_m1204_ftn) (Object_t99 *, String_t*);
	static Object_set_name_m1204_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m1204_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" void Object_DontDestroyOnLoad_m456 (Object_t * __this /* static, unused */, Object_t99 * ___target, const MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m456_ftn) (Object_t99 *);
	static Object_DontDestroyOnLoad_m456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
extern "C" void Object_set_hideFlags_m301 (Object_t99 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m301_ftn) (Object_t99 *, int32_t);
	static Object_set_hideFlags_m301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m301_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m4428 (Object_t99 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m4428_ftn) (Object_t99 *);
	static Object_ToString_m4428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m4428_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Object_t99_il2cpp_TypeInfo_var;
extern "C" bool Object_Equals_m4429 (Object_t99 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t99_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m4431(NULL /*static, unused*/, __this, ((Object_t99 *)IsInstClass(L_0, Object_t99_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m4430 (Object_t99 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m3871(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m4431 (Object_t * __this /* static, unused */, Object_t99 * ___lhs, Object_t99 * ___rhs, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t99 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t99 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t99 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t99 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t99 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m4432(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t99 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m4432(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t99 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t99 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool Object_IsNativeObjectAlive_m4432 (Object_t * __this /* static, unused */, Object_t99 * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t99 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m4433(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m5201(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m3871 (Object_t99 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m4433 (Object_t99 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern "C" void Object_CheckNullArgument_m4434 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t568 * L_2 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_000d:
	{
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" Object_t99 * Object_FindObjectOfType_m4435 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	ObjectU5BU5D_t709* V_0 = {0};
	{
		Type_t * L_0 = ___type;
		ObjectU5BU5D_t709* L_1 = Object_FindObjectsOfType_m3939(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_t709* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t709* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		return (*(Object_t99 **)(Object_t99 **)SZArrayLdElema(L_3, L_4, sizeof(Object_t99 *)));
	}

IL_0014:
	{
		return (Object_t99 *)NULL;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m294 (Object_t * __this /* static, unused */, Object_t99 * ___exists, const MethodInfo* method)
{
	{
		Object_t99 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m4431(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m295 (Object_t * __this /* static, unused */, Object_t99 * ___x, Object_t99 * ___y, const MethodInfo* method)
{
	{
		Object_t99 * L_0 = ___x;
		Object_t99 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m4431(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m268 (Object_t * __this /* static, unused */, Object_t99 * ___x, Object_t99 * ___y, const MethodInfo* method)
{
	{
		Object_t99 * L_0 = ___x;
		Object_t99 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m4431(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
extern "C" void Object_t99_marshal(const Object_t99& unmarshaled, Object_t99_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = reinterpret_cast<intptr_t>((unmarshaled.___m_CachedPtr_1).___m_value_0);
}
extern "C" void Object_t99_marshal_back(const Object_t99_marshaled& marshaled, Object_t99& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	(unmarshaled.___m_CachedPtr_1).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_CachedPtr_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
extern "C" void Object_t99_marshal_cleanup(Object_t99_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_16.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Void UnityEngine.Component::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" void Component__ctor_m4436 (Component_t102 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m4424(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t48 * Component_get_transform_m332 (Component_t102 * __this, const MethodInfo* method)
{
	typedef Transform_t48 * (*Component_get_transform_m332_ftn) (Component_t102 *);
	static Component_get_transform_m332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m332_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t30 * Component_get_gameObject_m317 (Component_t102 * __this, const MethodInfo* method)
{
	typedef GameObject_t30 * (*Component_get_gameObject_m317_ftn) (Component_t102 *);
	static Component_get_gameObject_m317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" Component_t102 * Component_GetComponent_m3143 (Component_t102 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		GameObject_t30 * L_0 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t102 * L_2 = GameObject_GetComponent_m4441(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Component_GetComponentFastPath_m4437 (Component_t102 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m4437_ftn) (Component_t102 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m4437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m4437_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t102 * Component_GetComponentInChildren_m4438 (Component_t102 * __this, Type_t * ___t, const MethodInfo* method)
{
	{
		GameObject_t30 * L_0 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t102 * L_2 = GameObject_GetComponentInChildren_m4443(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C" Component_t102 * Component_GetComponentInParent_m4439 (Component_t102 * __this, Type_t * ___t, const MethodInfo* method)
{
	{
		GameObject_t30 * L_0 = Component_get_gameObject_m317(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t102 * L_2 = GameObject_GetComponentInParent_m4444(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void Component_GetComponentsForListInternal_m4440 (Component_t102 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m4440_ftn) (Component_t102 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m4440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m4440_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_16.h"
extern "C" void Component_GetComponents_m2869 (Component_t102 * __this, Type_t * ___type, List_1_t516 * ___results, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t516 * L_1 = ___results;
		Component_GetComponentsForListInternal_m4440(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" void GameObject__ctor_m2776 (GameObject_t30 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m4424(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m4448(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
#include "mscorlib_ArrayTypes.h"
extern "C" void GameObject__ctor_m352 (GameObject_t30 * __this, String_t* ___name, TypeU5BU5D_t105* ___components, const MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t105* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m4424(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m4448(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		TypeU5BU5D_t105* L_1 = ___components;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0026;
	}

IL_0016:
	{
		TypeU5BU5D_t105* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4, sizeof(Type_t *)));
		Type_t * L_5 = V_0;
		GameObject_AddComponent_m4447(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		TypeU5BU5D_t105* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
extern "C" Component_t102 * GameObject_GetComponent_m4441 (GameObject_t30 * __this, Type_t * ___type, const MethodInfo* method)
{
	typedef Component_t102 * (*GameObject_GetComponent_m4441_ftn) (GameObject_t30 *, Type_t *);
	static GameObject_GetComponent_m4441_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m4441_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void GameObject_GetComponentFastPath_m4442 (GameObject_t30 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m4442_ftn) (GameObject_t30 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m4442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m4442_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" Component_t102 * GameObject_GetComponentInChildren_m4443 (GameObject_t30 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		Transform_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	Component_t102 * V_0 = {0};
	Transform_t48 * V_1 = {0};
	Transform_t48 * V_2 = {0};
	Object_t * V_3 = {0};
	Component_t102 * V_4 = {0};
	Component_t102 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameObject_get_activeInHierarchy_m318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t102 * L_2 = GameObject_GetComponent_m4441(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Component_t102 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m268(NULL /*static, unused*/, L_3, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t102 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t48 * L_6 = GameObject_get_transform_m353(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t48 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m268(NULL /*static, unused*/, L_7, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t48 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_9);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0040:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_11);
			V_2 = ((Transform_t48 *)CastclassClass(L_12, Transform_t48_il2cpp_TypeInfo_var));
			Transform_t48 * L_13 = V_2;
			NullCheck(L_13);
			GameObject_t30 * L_14 = Component_get_gameObject_m317(L_13, /*hidden argument*/NULL);
			Type_t * L_15 = ___type;
			NullCheck(L_14);
			Component_t102 * L_16 = GameObject_GetComponentInChildren_m4443(L_14, L_15, /*hidden argument*/NULL);
			V_4 = L_16;
			Component_t102 * L_17 = V_4;
			bool L_18 = Object_op_Inequality_m268(NULL /*static, unused*/, L_17, (Object_t99 *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0070;
			}
		}

IL_0067:
		{
			Component_t102 * L_19 = V_4;
			V_5 = L_19;
			IL2CPP_LEAVE(0x97, FINALLY_0080);
		}

IL_0070:
		{
			Object_t * L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0040;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_3;
			V_6 = ((Object_t *)IsInst(L_22, IDisposable_t237_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_6;
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(128)
		}

IL_008d:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0095:
	{
		return (Component_t102 *)NULL;
	}

IL_0097:
	{
		Component_t102 * L_25 = V_5;
		return L_25;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Component_t102 * GameObject_GetComponentInParent_m4444 (GameObject_t30 * __this, Type_t * ___type, const MethodInfo* method)
{
	Component_t102 * V_0 = {0};
	Transform_t48 * V_1 = {0};
	Component_t102 * V_2 = {0};
	{
		bool L_0 = GameObject_get_activeInHierarchy_m318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t102 * L_2 = GameObject_GetComponent_m4441(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Component_t102 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m268(NULL /*static, unused*/, L_3, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t102 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t48 * L_6 = GameObject_get_transform_m353(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t48 * L_7 = Transform_get_parent_m1205(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Transform_t48 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m268(NULL /*static, unused*/, L_8, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0070;
	}

IL_003e:
	{
		Transform_t48 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t30 * L_11 = Component_get_gameObject_m317(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = GameObject_get_activeInHierarchy_m318(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		Transform_t48 * L_13 = V_1;
		NullCheck(L_13);
		GameObject_t30 * L_14 = Component_get_gameObject_m317(L_13, /*hidden argument*/NULL);
		Type_t * L_15 = ___type;
		NullCheck(L_14);
		Component_t102 * L_16 = GameObject_GetComponent_m4441(L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		Component_t102 * L_17 = V_2;
		bool L_18 = Object_op_Inequality_m268(NULL /*static, unused*/, L_17, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		Component_t102 * L_19 = V_2;
		return L_19;
	}

IL_0069:
	{
		Transform_t48 * L_20 = V_1;
		NullCheck(L_20);
		Transform_t48 * L_21 = Transform_get_parent_m1205(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
	}

IL_0070:
	{
		Transform_t48 * L_22 = V_1;
		bool L_23 = Object_op_Inequality_m268(NULL /*static, unused*/, L_22, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_003e;
		}
	}

IL_007c:
	{
		return (Component_t102 *)NULL;
	}
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Array_t * GameObject_GetComponentsInternal_m4445 (GameObject_t30 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m4445_ftn) (GameObject_t30 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m4445_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m4445_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t48 * GameObject_get_transform_m353 (GameObject_t30 * __this, const MethodInfo* method)
{
	typedef Transform_t48 * (*GameObject_get_transform_m353_ftn) (GameObject_t30 *);
	static GameObject_get_transform_m353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m2780 (GameObject_t30 * __this, const MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m2780_ftn) (GameObject_t30 *);
	static GameObject_get_layer_m2780_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m2780_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GameObject_set_layer_m2781 (GameObject_t30 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m2781_ftn) (GameObject_t30 *, int32_t);
	static GameObject_set_layer_m2781_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m2781_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m1162 (GameObject_t30 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m1162_ftn) (GameObject_t30 *, bool);
	static GameObject_SetActive_m1162_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m1162_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" bool GameObject_get_activeSelf_m3067 (GameObject_t30 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m3067_ftn) (GameObject_t30 *);
	static GameObject_get_activeSelf_m3067_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m3067_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m318 (GameObject_t30 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m318_ftn) (GameObject_t30 *);
	static GameObject_get_activeInHierarchy_m318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern "C" void GameObject_SendMessage_m3865 (GameObject_t30 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m3865_ftn) (GameObject_t30 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m3865_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m3865_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m3915 (GameObject_t30 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		GameObject_SendMessage_m3865(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t102 * GameObject_Internal_AddComponentWithType_m4446 (GameObject_t30 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	typedef Component_t102 * (*GameObject_Internal_AddComponentWithType_m4446_ftn) (GameObject_t30 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m4446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m4446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t102 * GameObject_AddComponent_m4447 (GameObject_t30 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t102 * L_1 = GameObject_Internal_AddComponentWithType_m4446(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
extern "C" void GameObject_Internal_CreateGameObject_m4448 (Object_t * __this /* static, unused */, GameObject_t30 * ___mono, String_t* ___name, const MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m4448_ftn) (GameObject_t30 *, String_t*);
	static GameObject_Internal_CreateGameObject_m4448_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m4448_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t30 * GameObject_Find_m350 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef GameObject_t30 * (*GameObject_Find_m350_ftn) (String_t*);
	static GameObject_Find_m350_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Find_m350_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Enumerator__ctor_m4449 (Enumerator_t782 * __this, Transform_t48 * ___outer, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		Transform_t48 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Object_t * Enumerator_get_Current_m4450 (Enumerator_t782 * __this, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t48 * L_2 = Transform_GetChild_m1108(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m4451 (Enumerator_t782 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t48 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m1109(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" Vector3_t28  Transform_get_position_m335 (Transform_t48 * __this, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m4452(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t28  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void Transform_set_position_m354 (Transform_t48 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m4453(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m4452 (Transform_t48 * __this, Vector3_t28 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m4452_ftn) (Transform_t48 *, Vector3_t28 *);
	static Transform_INTERNAL_get_position_m4452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m4452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m4453 (Transform_t48 * __this, Vector3_t28 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m4453_ftn) (Transform_t48 *, Vector3_t28 *);
	static Transform_INTERNAL_set_position_m4453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m4453_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t28  Transform_get_localPosition_m1196 (Transform_t48 * __this, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m4454(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t28  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m1215 (Transform_t48 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m4455(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m4454 (Transform_t48 * __this, Vector3_t28 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m4454_ftn) (Transform_t48 *, Vector3_t28 *);
	static Transform_INTERNAL_get_localPosition_m4454_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m4454_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m4455 (Transform_t48 * __this, Vector3_t28 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m4455_ftn) (Transform_t48 *, Vector3_t28 *);
	static Transform_INTERNAL_set_localPosition_m4455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m4455_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern "C" void Transform_set_eulerAngles_m1206 (Transform_t48 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___value;
		Quaternion_t104  L_1 = Quaternion_Euler_m4189(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Transform_set_rotation_m356(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" Vector3_t28  Transform_get_right_m341 (Transform_t48 * __this, const MethodInfo* method)
{
	{
		Quaternion_t104  L_0 = Transform_get_rotation_m355(__this, /*hidden argument*/NULL);
		Vector3_t28  L_1 = Vector3_get_right_m1197(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t28  L_2 = Quaternion_op_Multiply_m1198(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" Vector3_t28  Transform_get_up_m333 (Transform_t48 * __this, const MethodInfo* method)
{
	{
		Quaternion_t104  L_0 = Transform_get_rotation_m355(__this, /*hidden argument*/NULL);
		Vector3_t28  L_1 = Vector3_get_up_m311(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t28  L_2 = Quaternion_op_Multiply_m1198(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t28  Transform_get_forward_m340 (Transform_t48 * __this, const MethodInfo* method)
{
	{
		Quaternion_t104  L_0 = Transform_get_rotation_m355(__this, /*hidden argument*/NULL);
		Vector3_t28  L_1 = Vector3_get_forward_m310(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t28  L_2 = Quaternion_op_Multiply_m1198(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t104  Transform_get_rotation_m355 (Transform_t48 * __this, const MethodInfo* method)
{
	Quaternion_t104  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m4456(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t104  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" void Transform_set_rotation_m356 (Transform_t48 * __this, Quaternion_t104  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m4457(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m4456 (Transform_t48 * __this, Quaternion_t104 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m4456_ftn) (Transform_t48 *, Quaternion_t104 *);
	static Transform_INTERNAL_get_rotation_m4456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m4456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m4457 (Transform_t48 * __this, Quaternion_t104 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m4457_ftn) (Transform_t48 *, Quaternion_t104 *);
	static Transform_INTERNAL_set_rotation_m4457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m4457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t104  Transform_get_localRotation_m1235 (Transform_t48 * __this, const MethodInfo* method)
{
	Quaternion_t104  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m4458(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t104  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m1237 (Transform_t48 * __this, Quaternion_t104  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m4459(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m4458 (Transform_t48 * __this, Quaternion_t104 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m4458_ftn) (Transform_t48 *, Quaternion_t104 *);
	static Transform_INTERNAL_get_localRotation_m4458_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m4458_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m4459 (Transform_t48 * __this, Quaternion_t104 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m4459_ftn) (Transform_t48 *, Quaternion_t104 *);
	static Transform_INTERNAL_set_localRotation_m4459_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m4459_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t28  Transform_get_localScale_m357 (Transform_t48 * __this, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m4460(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t28  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m358 (Transform_t48 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m4461(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m4460 (Transform_t48 * __this, Vector3_t28 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m4460_ftn) (Transform_t48 *, Vector3_t28 *);
	static Transform_INTERNAL_get_localScale_m4460_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m4460_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m4461 (Transform_t48 * __this, Vector3_t28 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m4461_ftn) (Transform_t48 *, Vector3_t28 *);
	static Transform_INTERNAL_set_localScale_m4461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m4461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t48 * Transform_get_parent_m1205 (Transform_t48 * __this, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = Transform_get_parentInternal_m4462(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* RectTransform_t351_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral392;
extern "C" void Transform_set_parent_m1125 (Transform_t48 * __this, Transform_t48 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		_stringLiteral392 = il2cpp_codegen_string_literal_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		if (!((RectTransform_t351 *)IsInstSealed(__this, RectTransform_t351_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m424(NULL /*static, unused*/, _stringLiteral392, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Transform_t48 * L_0 = ___value;
		Transform_set_parentInternal_m4463(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t48 * Transform_get_parentInternal_m4462 (Transform_t48 * __this, const MethodInfo* method)
{
	typedef Transform_t48 * (*Transform_get_parentInternal_m4462_ftn) (Transform_t48 *);
	static Transform_get_parentInternal_m4462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m4462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m4463 (Transform_t48 * __this, Transform_t48 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m4463_ftn) (Transform_t48 *, Transform_t48 *);
	static Transform_set_parentInternal_m4463_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m4463_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m3003 (Transform_t48 * __this, Transform_t48 * ___parent, const MethodInfo* method)
{
	{
		Transform_t48 * L_0 = ___parent;
		Transform_SetParent_m2779(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Transform_SetParent_m2779 (Transform_t48 * __this, Transform_t48 * ___parent, bool ___worldPositionStays, const MethodInfo* method)
{
	typedef void (*Transform_SetParent_m2779_ftn) (Transform_t48 *, Transform_t48 *, bool);
	static Transform_SetParent_m2779_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m2779_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t31  Transform_get_worldToLocalMatrix_m3071 (Transform_t48 * __this, const MethodInfo* method)
{
	Matrix4x4_t31  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m4464(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t31  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m4464 (Transform_t48 * __this, Matrix4x4_t31 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m4464_ftn) (Transform_t48 *, Matrix4x4_t31 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m4464_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m4464_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t28  Transform_TransformDirection_m3884 (Transform_t48 * __this, Vector3_t28  ___direction, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Transform_INTERNAL_CALL_TransformDirection_m4465(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t28  Transform_INTERNAL_CALL_TransformDirection_m4465 (Object_t * __this /* static, unused */, Transform_t48 * ___self, Vector3_t28 * ___direction, const MethodInfo* method)
{
	typedef Vector3_t28  (*Transform_INTERNAL_CALL_TransformDirection_m4465_ftn) (Transform_t48 *, Vector3_t28 *);
	static Transform_INTERNAL_CALL_TransformDirection_m4465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformDirection_m4465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t28  Transform_InverseTransformDirection_m3814 (Transform_t48 * __this, Vector3_t28  ___direction, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Transform_INTERNAL_CALL_InverseTransformDirection_m4466(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t28  Transform_INTERNAL_CALL_InverseTransformDirection_m4466 (Object_t * __this /* static, unused */, Transform_t48 * ___self, Vector3_t28 * ___direction, const MethodInfo* method)
{
	typedef Vector3_t28  (*Transform_INTERNAL_CALL_InverseTransformDirection_m4466_ftn) (Transform_t48 *, Vector3_t28 *);
	static Transform_INTERNAL_CALL_InverseTransformDirection_m4466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformDirection_m4466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t28  Transform_TransformPoint_m1240 (Transform_t48 * __this, Vector3_t28  ___position, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Transform_INTERNAL_CALL_TransformPoint_m4467(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t28  Transform_INTERNAL_CALL_TransformPoint_m4467 (Object_t * __this /* static, unused */, Transform_t48 * ___self, Vector3_t28 * ___position, const MethodInfo* method)
{
	typedef Vector3_t28  (*Transform_INTERNAL_CALL_TransformPoint_m4467_ftn) (Transform_t48 *, Vector3_t28 *);
	static Transform_INTERNAL_CALL_TransformPoint_m4467_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m4467_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t28  Transform_InverseTransformPoint_m2833 (Transform_t48 * __this, Vector3_t28  ___position, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m4468(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t28  Transform_INTERNAL_CALL_InverseTransformPoint_m4468 (Object_t * __this /* static, unused */, Transform_t48 * ___self, Vector3_t28 * ___position, const MethodInfo* method)
{
	typedef Vector3_t28  (*Transform_INTERNAL_CALL_InverseTransformPoint_m4468_ftn) (Transform_t48 *, Vector3_t28 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m4468_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m4468_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m1109 (Transform_t48 * __this, const MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m1109_ftn) (Transform_t48 *);
	static Transform_get_childCount_m1109_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m1109_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m3004 (Transform_t48 * __this, const MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m3004_ftn) (Transform_t48 *);
	static Transform_SetAsFirstSibling_m3004_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m3004_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" Transform_t48 * Transform_Find_m4469 (Transform_t48 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef Transform_t48 * (*Transform_Find_m4469_ftn) (Transform_t48 *, String_t*);
	static Transform_Find_m4469_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_Find_m4469_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::Find(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
extern "C" bool Transform_IsChildOf_m2814 (Transform_t48 * __this, Transform_t48 * ___parent, const MethodInfo* method)
{
	typedef bool (*Transform_IsChildOf_m2814_ftn) (Transform_t48 *, Transform_t48 *);
	static Transform_IsChildOf_m2814_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_IsChildOf_m2814_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::IsChildOf(UnityEngine.Transform)");
	return _il2cpp_icall_func(__this, ___parent);
}
// UnityEngine.Transform UnityEngine.Transform::FindChild(System.String)
extern "C" Transform_t48 * Transform_FindChild_m1222 (Transform_t48 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Transform_t48 * L_1 = Transform_Find_m4469(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"
extern TypeInfo* Enumerator_t782_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_GetEnumerator_m4470 (Transform_t48 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t782 * L_0 = (Enumerator_t782 *)il2cpp_codegen_object_new (Enumerator_t782_il2cpp_TypeInfo_var);
		Enumerator__ctor_m4449(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" Transform_t48 * Transform_GetChild_m1108 (Transform_t48 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Transform_t48 * (*Transform_GetChild_m1108_ftn) (Transform_t48 *, int32_t);
	static Transform_GetChild_m1108_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m1108_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// System.Single UnityEngine.Time::get_time()
extern "C" float Time_get_time_m3861 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_time_m3861_ftn) ();
	static Time_get_time_m3861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_time_m3861_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" float Time_get_deltaTime_m383 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m383_ftn) ();
	static Time_get_deltaTime_m383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" float Time_get_unscaledTime_m2718 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m2718_ftn) ();
	static Time_get_unscaledTime_m2718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m2718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" float Time_get_unscaledDeltaTime_m1221 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m1221_ftn) ();
	static Time_get_unscaledDeltaTime_m1221_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m1221_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" int32_t Time_get_frameCount_m347 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Time_get_frameCount_m347_ftn) ();
	static Time_get_frameCount_m347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_frameCount_m347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_frameCount()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" float Random_Range_m425 (Object_t * __this /* static, unused */, float ___min, float ___max, const MethodInfo* method)
{
	typedef float (*Random_Range_m425_ftn) (float, float);
	static Random_Range_m425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_Range_m425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern "C" int32_t Random_Range_m1168 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m4471(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m4471 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m4471_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m4471_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m4471_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Single UnityEngine.Random::get_value()
extern "C" float Random_get_value_m427 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Random_get_value_m427_ftn) ();
	static Random_get_value_m427_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_value_m427_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_value()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
extern "C" Vector3_t28  Random_get_insideUnitSphere_m1242 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	{
		Random_INTERNAL_get_insideUnitSphere_m4472(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector3_t28  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Random::INTERNAL_get_insideUnitSphere(UnityEngine.Vector3&)
extern "C" void Random_INTERNAL_get_insideUnitSphere_m4472 (Object_t * __this /* static, unused */, Vector3_t28 * ___value, const MethodInfo* method)
{
	typedef void (*Random_INTERNAL_get_insideUnitSphere_m4472_ftn) (Vector3_t28 *);
	static Random_INTERNAL_get_insideUnitSphere_m4472_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_INTERNAL_get_insideUnitSphere_m4472_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::INTERNAL_get_insideUnitSphere(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
// System.Void UnityEngine.YieldInstruction::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void YieldInstruction__ctor_m4473 (YieldInstruction_t724 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t724_marshal(const YieldInstruction_t724& unmarshaled, YieldInstruction_t724_marshaled& marshaled)
{
}
extern "C" void YieldInstruction_t724_marshal_back(const YieldInstruction_t724_marshaled& marshaled, YieldInstruction_t724& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t724_marshal_cleanup(YieldInstruction_t724_marshaled& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
