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

// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsException.h"
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsExceptionMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Void UnityEngine.PlayerPrefsException::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern "C" void PlayerPrefsException__ctor_m4474 (PlayerPrefsException_t785 * __this, String_t* ___error, const MethodInfo* method)
{
	{
		String_t* L_0 = ___error;
		Exception__ctor_m5200(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool PlayerPrefs_TrySetInt_m4475 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetInt_m4475_ftn) (String_t*, int32_t);
	static PlayerPrefs_TrySetInt_m4475_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetInt_m4475_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsExceptionMethodDeclarations.h"
extern TypeInfo* PlayerPrefsException_t785_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral393;
extern "C" void PlayerPrefs_SetInt_m1178 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		_stringLiteral393 = il2cpp_codegen_string_literal_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		int32_t L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetInt_m4475(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t785 * L_3 = (PlayerPrefsException_t785 *)il2cpp_codegen_object_new (PlayerPrefsException_t785_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m4474(L_3, _stringLiteral393, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C" int32_t PlayerPrefs_GetInt_m4476 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___defaultValue, const MethodInfo* method)
{
	typedef int32_t (*PlayerPrefs_GetInt_m4476_ftn) (String_t*, int32_t);
	static PlayerPrefs_GetInt_m4476_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetInt_m4476_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C" int32_t PlayerPrefs_GetInt_m1175 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		String_t* L_0 = ___key;
		int32_t L_1 = V_0;
		int32_t L_2 = PlayerPrefs_GetInt_m4476(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Experimental.Director.DirectorPlayer
#include "UnityEngine_UnityEngine_Experimental_Director_DirectorPlayer.h"
// UnityEngine.Experimental.Director.DirectorPlayer
#include "UnityEngine_UnityEngine_Experimental_Director_DirectorPlayerMethodDeclarations.h"
// UnityEngine.Advertisements.UnityAdsInternal
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsInternal.h"
// UnityEngine.Advertisements.UnityAdsInternal
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsInternalMethodDeclarations.h"
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_ge.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_geMethodDeclarations.h"
// System.Void UnityEngine.Advertisements.UnityAdsInternal::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void UnityAdsInternal__ctor_m4477 (UnityAdsInternal_t788 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onCampaignsAvailable(UnityEngine.Advertisements.UnityAdsDelegate)
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t789_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onCampaignsAvailable_m4478 (Object_t * __this /* static, unused */, UnityAdsDelegate_t789 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0;
		UnityAdsDelegate_t789 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0 = ((UnityAdsDelegate_t789 *)CastclassSealed(L_2, UnityAdsDelegate_t789_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onCampaignsAvailable(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t789_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onCampaignsAvailable_m4479 (Object_t * __this /* static, unused */, UnityAdsDelegate_t789 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0;
		UnityAdsDelegate_t789 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0 = ((UnityAdsDelegate_t789 *)CastclassSealed(L_2, UnityAdsDelegate_t789_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onCampaignsFetchFailed(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t789_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onCampaignsFetchFailed_m4480 (Object_t * __this /* static, unused */, UnityAdsDelegate_t789 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1;
		UnityAdsDelegate_t789 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1 = ((UnityAdsDelegate_t789 *)CastclassSealed(L_2, UnityAdsDelegate_t789_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onCampaignsFetchFailed(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t789_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onCampaignsFetchFailed_m4481 (Object_t * __this /* static, unused */, UnityAdsDelegate_t789 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1;
		UnityAdsDelegate_t789 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1 = ((UnityAdsDelegate_t789 *)CastclassSealed(L_2, UnityAdsDelegate_t789_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onShow(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t789_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onShow_m4482 (Object_t * __this /* static, unused */, UnityAdsDelegate_t789 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onShow_2;
		UnityAdsDelegate_t789 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onShow_2 = ((UnityAdsDelegate_t789 *)CastclassSealed(L_2, UnityAdsDelegate_t789_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onShow(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t789_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onShow_m4483 (Object_t * __this /* static, unused */, UnityAdsDelegate_t789 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onShow_2;
		UnityAdsDelegate_t789 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onShow_2 = ((UnityAdsDelegate_t789 *)CastclassSealed(L_2, UnityAdsDelegate_t789_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onHide(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t789_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onHide_m4484 (Object_t * __this /* static, unused */, UnityAdsDelegate_t789 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onHide_3;
		UnityAdsDelegate_t789 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onHide_3 = ((UnityAdsDelegate_t789 *)CastclassSealed(L_2, UnityAdsDelegate_t789_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onHide(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t789_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onHide_m4485 (Object_t * __this /* static, unused */, UnityAdsDelegate_t789 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onHide_3;
		UnityAdsDelegate_t789 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onHide_3 = ((UnityAdsDelegate_t789 *)CastclassSealed(L_2, UnityAdsDelegate_t789_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onVideoCompleted(UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>)
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_ge.h"
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_2_t790_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onVideoCompleted_m4486 (Object_t * __this /* static, unused */, UnityAdsDelegate_2_t790 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_2_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_2_t790 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4;
		UnityAdsDelegate_2_t790 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4 = ((UnityAdsDelegate_2_t790 *)CastclassSealed(L_2, UnityAdsDelegate_2_t790_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onVideoCompleted(UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>)
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_2_t790_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onVideoCompleted_m4487 (Object_t * __this /* static, unused */, UnityAdsDelegate_2_t790 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_2_t790_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_2_t790 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4;
		UnityAdsDelegate_2_t790 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4 = ((UnityAdsDelegate_2_t790 *)CastclassSealed(L_2, UnityAdsDelegate_2_t790_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onVideoStarted(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t789_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_add_onVideoStarted_m4488 (Object_t * __this /* static, unused */, UnityAdsDelegate_t789 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5;
		UnityAdsDelegate_t789 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5 = ((UnityAdsDelegate_t789 *)CastclassSealed(L_2, UnityAdsDelegate_t789_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onVideoStarted(UnityEngine.Advertisements.UnityAdsDelegate)
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAdsDelegate_t789_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_remove_onVideoStarted_m4489 (Object_t * __this /* static, unused */, UnityAdsDelegate_t789 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5;
		UnityAdsDelegate_t789 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5 = ((UnityAdsDelegate_t789 *)CastclassSealed(L_2, UnityAdsDelegate_t789_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::RegisterNative()
extern "C" void UnityAdsInternal_RegisterNative_m4490 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_RegisterNative_m4490_ftn) ();
	static UnityAdsInternal_RegisterNative_m4490_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_RegisterNative_m4490_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::RegisterNative()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::Init(System.String,System.Boolean,System.Boolean,System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void UnityAdsInternal_Init_m4491 (Object_t * __this /* static, unused */, String_t* ___gameId, bool ___testModeEnabled, bool ___debugModeEnabled, String_t* ___unityVersion, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_Init_m4491_ftn) (String_t*, bool, bool, String_t*);
	static UnityAdsInternal_Init_m4491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_Init_m4491_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::Init(System.String,System.Boolean,System.Boolean,System.String)");
	_il2cpp_icall_func(___gameId, ___testModeEnabled, ___debugModeEnabled, ___unityVersion);
}
// System.Boolean UnityEngine.Advertisements.UnityAdsInternal::Show(System.String,System.String,System.String)
extern "C" bool UnityAdsInternal_Show_m4492 (Object_t * __this /* static, unused */, String_t* ___zoneId, String_t* ___rewardItemKey, String_t* ___options, const MethodInfo* method)
{
	typedef bool (*UnityAdsInternal_Show_m4492_ftn) (String_t*, String_t*, String_t*);
	static UnityAdsInternal_Show_m4492_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_Show_m4492_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::Show(System.String,System.String,System.String)");
	return _il2cpp_icall_func(___zoneId, ___rewardItemKey, ___options);
}
// System.Boolean UnityEngine.Advertisements.UnityAdsInternal::CanShowAds(System.String)
extern "C" bool UnityAdsInternal_CanShowAds_m4493 (Object_t * __this /* static, unused */, String_t* ___zoneId, const MethodInfo* method)
{
	typedef bool (*UnityAdsInternal_CanShowAds_m4493_ftn) (String_t*);
	static UnityAdsInternal_CanShowAds_m4493_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_CanShowAds_m4493_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::CanShowAds(System.String)");
	return _il2cpp_icall_func(___zoneId);
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::SetLogLevel(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UnityAdsInternal_SetLogLevel_m4494 (Object_t * __this /* static, unused */, int32_t ___logLevel, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_SetLogLevel_m4494_ftn) (int32_t);
	static UnityAdsInternal_SetLogLevel_m4494_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_SetLogLevel_m4494_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::SetLogLevel(System.Int32)");
	_il2cpp_icall_func(___logLevel);
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::SetCampaignDataURL(System.String)
extern "C" void UnityAdsInternal_SetCampaignDataURL_m4495 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	typedef void (*UnityAdsInternal_SetCampaignDataURL_m4495_ftn) (String_t*);
	static UnityAdsInternal_SetCampaignDataURL_m4495_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsInternal_SetCampaignDataURL_m4495_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsInternal::SetCampaignDataURL(System.String)");
	_il2cpp_icall_func(___url);
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::RemoveAllEventHandlers()
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_RemoveAllEventHandlers_m4496 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0 = (UnityAdsDelegate_t789 *)NULL;
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1 = (UnityAdsDelegate_t789 *)NULL;
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onShow_2 = (UnityAdsDelegate_t789 *)NULL;
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onHide_3 = (UnityAdsDelegate_t789 *)NULL;
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4 = (UnityAdsDelegate_2_t790 *)NULL;
		((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5 = (UnityAdsDelegate_t789 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsCampaignsAvailable()
// UnityEngine.Advertisements.UnityAdsDelegate
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsCampaignsAvailable_m4497 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t789 * V_0 = {0};
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsAvailable_0;
		V_0 = L_0;
		UnityAdsDelegate_t789 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t789 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m5176(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsCampaignsFetchFailed()
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsCampaignsFetchFailed_m4498 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t789 * V_0 = {0};
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onCampaignsFetchFailed_1;
		V_0 = L_0;
		UnityAdsDelegate_t789 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t789 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m5176(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsShow()
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsShow_m4499 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t789 * V_0 = {0};
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onShow_2;
		V_0 = L_0;
		UnityAdsDelegate_t789 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t789 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m5176(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsHide()
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsHide_m4500 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t789 * V_0 = {0};
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onHide_3;
		V_0 = L_0;
		UnityAdsDelegate_t789 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t789 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m5176(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsVideoCompleted(System.String,System.Boolean)
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate_2_geMethodDeclarations.h"
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern const MethodInfo* UnityAdsDelegate_2_Invoke_m5211_MethodInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsVideoCompleted_m4501 (Object_t * __this /* static, unused */, String_t* ___rewardItemKey, bool ___skipped, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		UnityAdsDelegate_2_Invoke_m5211_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484166);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_2_t790 * V_0 = {0};
	{
		UnityAdsDelegate_2_t790 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoCompleted_4;
		V_0 = L_0;
		UnityAdsDelegate_2_t790 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		UnityAdsDelegate_2_t790 * L_2 = V_0;
		String_t* L_3 = ___rewardItemKey;
		bool L_4 = ___skipped;
		NullCheck(L_2);
		UnityAdsDelegate_2_Invoke_m5211(L_2, L_3, L_4, /*hidden argument*/UnityAdsDelegate_2_Invoke_m5211_MethodInfo_var);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsVideoStarted()
extern TypeInfo* UnityAdsInternal_t788_il2cpp_TypeInfo_var;
extern "C" void UnityAdsInternal_CallUnityAdsVideoStarted_m4502 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAdsInternal_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	UnityAdsDelegate_t789 * V_0 = {0};
	{
		UnityAdsDelegate_t789 * L_0 = ((UnityAdsInternal_t788_StaticFields*)UnityAdsInternal_t788_il2cpp_TypeInfo_var->static_fields)->___onVideoStarted_5;
		V_0 = L_0;
		UnityAdsDelegate_t789 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		UnityAdsDelegate_t789 * L_2 = V_0;
		NullCheck(L_2);
		UnityAdsDelegate_Invoke_m5176(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_38.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_38MethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
struct ParticleSystem_t191;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m363_gshared (GameObject_t30 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m363(__this, method) (( Object_t * (*) (GameObject_t30 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m363_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
#define GameObject_GetComponent_TisParticleSystem_t191_m5214(__this, method) (( ParticleSystem_t191 * (*) (GameObject_t30 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m363_gshared)(__this, method)
// System.Void UnityEngine.ParticleSystem::set_startColor(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"
extern "C" void ParticleSystem_set_startColor_m1165 (ParticleSystem_t191 * __this, Color_t12  ___value, const MethodInfo* method)
{
	{
		ParticleSystem_INTERNAL_set_startColor_m4503(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_set_startColor(UnityEngine.Color&)
extern "C" void ParticleSystem_INTERNAL_set_startColor_m4503 (ParticleSystem_t191 * __this, Color_t12 * ___value, const MethodInfo* method)
{
	typedef void (*ParticleSystem_INTERNAL_set_startColor_m4503_ftn) (ParticleSystem_t191 *, Color_t12 *);
	static ParticleSystem_INTERNAL_set_startColor_m4503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_set_startColor_m4503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_set_startColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m4504 (ParticleSystem_t191 * __this, const MethodInfo* method)
{
	typedef void (*ParticleSystem_Internal_Play_m4504_ftn) (ParticleSystem_t191 *);
	static ParticleSystem_Internal_Play_m4504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_Play_m4504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_Play()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m1166 (ParticleSystem_t191 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		ParticleSystem_Play_m4505(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void ParticleSystem_Play_m4505 (ParticleSystem_t191 * __this, bool ___withChildren, const MethodInfo* method)
{
	ParticleSystemU5BU5D_t939* V_0 = {0};
	ParticleSystem_t191 * V_1 = {0};
	ParticleSystemU5BU5D_t939* V_2 = {0};
	int32_t V_3 = 0;
	{
		bool L_0 = ___withChildren;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		ParticleSystemU5BU5D_t939* L_1 = ParticleSystem_GetParticleSystems_m4506(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		ParticleSystemU5BU5D_t939* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		ParticleSystemU5BU5D_t939* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(ParticleSystem_t191 **)(ParticleSystem_t191 **)SZArrayLdElema(L_3, L_5, sizeof(ParticleSystem_t191 *)));
		ParticleSystem_t191 * L_6 = V_1;
		NullCheck(L_6);
		ParticleSystem_Internal_Play_m4504(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_3;
		ParticleSystemU5BU5D_t939* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0038;
	}

IL_0032:
	{
		ParticleSystem_Internal_Play_m4504(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_38MethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern TypeInfo* List_1_t940_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5212_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m5213_MethodInfo_var;
extern "C" ParticleSystemU5BU5D_t939* ParticleSystem_GetParticleSystems_m4506 (Object_t * __this /* static, unused */, ParticleSystem_t191 * ___root, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t940_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(512);
		List_1__ctor_m5212_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484167);
		List_1_ToArray_m5213_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484168);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t940 * V_0 = {0};
	{
		ParticleSystem_t191 * L_0 = ___root;
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (ParticleSystemU5BU5D_t939*)NULL;
	}

IL_000d:
	{
		List_1_t940 * L_2 = (List_1_t940 *)il2cpp_codegen_object_new (List_1_t940_il2cpp_TypeInfo_var);
		List_1__ctor_m5212(L_2, /*hidden argument*/List_1__ctor_m5212_MethodInfo_var);
		V_0 = L_2;
		List_1_t940 * L_3 = V_0;
		ParticleSystem_t191 * L_4 = ___root;
		NullCheck(L_3);
		VirtActionInvoker1< ParticleSystem_t191 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(!0) */, L_3, L_4);
		ParticleSystem_t191 * L_5 = ___root;
		NullCheck(L_5);
		Transform_t48 * L_6 = Component_get_transform_m332(L_5, /*hidden argument*/NULL);
		List_1_t940 * L_7 = V_0;
		ParticleSystem_GetDirectParticleSystemChildrenRecursive_m4507(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		List_1_t940 * L_8 = V_0;
		NullCheck(L_8);
		ParticleSystemU5BU5D_t939* L_9 = List_1_ToArray_m5213(L_8, /*hidden argument*/List_1_ToArray_m5213_MethodInfo_var);
		return L_9;
	}
}
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_38.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisParticleSystem_t191_m5214_MethodInfo_var;
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m4507 (Object_t * __this /* static, unused */, Transform_t48 * ___transform, List_1_t940 * ___particleSystems, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		Transform_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		GameObject_GetComponent_TisParticleSystem_t191_m5214_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484169);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t48 * V_0 = {0};
	Object_t * V_1 = {0};
	ParticleSystem_t191 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t48 * L_0 = ___transform;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t48 *)CastclassClass(L_3, Transform_t48_il2cpp_TypeInfo_var));
			Transform_t48 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t30 * L_5 = Component_get_gameObject_m317(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			ParticleSystem_t191 * L_6 = GameObject_GetComponent_TisParticleSystem_t191_m5214(L_5, /*hidden argument*/GameObject_GetComponent_TisParticleSystem_t191_m5214_MethodInfo_var);
			V_2 = L_6;
			ParticleSystem_t191 * L_7 = V_2;
			bool L_8 = Object_op_Inequality_m268(NULL /*static, unused*/, L_7, (Object_t99 *)NULL, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0030:
		{
			List_1_t940 * L_9 = ___particleSystems;
			ParticleSystem_t191 * L_10 = V_2;
			NullCheck(L_9);
			VirtActionInvoker1< ParticleSystem_t191 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(!0) */, L_9, L_10);
			Transform_t48 * L_11 = V_0;
			List_1_t940 * L_12 = ___particleSystems;
			ParticleSystem_GetDirectParticleSystemChildrenRecursive_m4507(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		}

IL_003e:
		{
			Object_t * L_13 = V_1;
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_000c;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x60, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_15 = V_1;
			V_3 = ((Object_t *)IsInst(L_15, IDisposable_t237_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_3;
			if (L_16)
			{
				goto IL_0059;
			}
		}

IL_0058:
		{
			IL2CPP_END_FINALLY(78)
		}

IL_0059:
		{
			Object_t * L_17 = V_3;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0060:
	{
		return;
	}
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern "C" Vector3_t28  Particle_get_position_m4508 (Particle_t791 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void Particle_set_position_m4509 (Particle_t791 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern "C" Vector3_t28  Particle_get_velocity_m4510 (Particle_t791 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m4511 (Particle_t791 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern "C" float Particle_get_energy_m4512 (Particle_t791 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Particle_set_energy_m4513 (Particle_t791 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern "C" float Particle_get_startEnergy_m4514 (Particle_t791 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern "C" void Particle_set_startEnergy_m4515 (Particle_t791 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern "C" float Particle_get_size_m4516 (Particle_t791 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern "C" void Particle_set_size_m4517 (Particle_t791 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern "C" float Particle_get_rotation_m4518 (Particle_t791 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m4519 (Particle_t791 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern "C" float Particle_get_angularVelocity_m4520 (Particle_t791 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern "C" void Particle_set_angularVelocity_m4521 (Particle_t791 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern "C" Color_t12  Particle_get_color_m4522 (Particle_t791 * __this, const MethodInfo* method)
{
	{
		Color_t12  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void Particle_set_color_m4523 (Particle_t791 * __this, Color_t12  ___value, const MethodInfo* method)
{
	{
		Color_t12  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceModeMethodDeclarations.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_Collision.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_CollisionMethodDeclarations.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteractionMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
extern "C" bool Physics_Raycast_m4524 (Object_t * __this /* static, unused */, Vector3_t28  ___origin, Vector3_t28  ___direction, RaycastHit_t504 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = ___origin;
		Vector3_t28  L_1 = ___direction;
		RaycastHit_t504 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		int32_t L_5 = ___queryTriggerInteraction;
		bool L_6 = Physics_Internal_Raycast_m4529(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern "C" bool Physics_Raycast_m2898 (Object_t * __this /* static, unused */, Ray_t529  ___ray, RaycastHit_t504 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		Ray_t529  L_0 = ___ray;
		RaycastHit_t504 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m4525(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern "C" bool Physics_Raycast_m4525 (Object_t * __this /* static, unused */, Ray_t529  ___ray, RaycastHit_t504 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Ray_get_origin_m2739((&___ray), /*hidden argument*/NULL);
		Vector3_t28  L_1 = Ray_get_direction_m2740((&___ray), /*hidden argument*/NULL);
		RaycastHit_t504 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		int32_t L_5 = ___queryTriggerInteraction;
		bool L_6 = Physics_Raycast_m4524(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t533* Physics_RaycastAll_m2750 (Object_t * __this /* static, unused */, Ray_t529  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		Ray_t529  L_0 = ___ray;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layerMask;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t533* L_4 = Physics_RaycastAll_m4526(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t533* Physics_RaycastAll_m4526 (Object_t * __this /* static, unused */, Ray_t529  ___ray, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Ray_get_origin_m2739((&___ray), /*hidden argument*/NULL);
		Vector3_t28  L_1 = Ray_get_direction_m2740((&___ray), /*hidden argument*/NULL);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		int32_t L_4 = ___queryTriggerInteraction;
		RaycastHitU5BU5D_t533* L_5 = Physics_RaycastAll_m4527(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t533* Physics_RaycastAll_m4527 (Object_t * __this /* static, unused */, Vector3_t28  ___origin, Vector3_t28  ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		int32_t L_2 = ___queryTriggerInteraction;
		RaycastHitU5BU5D_t533* L_3 = Physics_INTERNAL_CALL_RaycastAll_m4528(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t533* Physics_INTERNAL_CALL_RaycastAll_m4528 (Object_t * __this /* static, unused */, Vector3_t28 * ___origin, Vector3_t28 * ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t533* (*Physics_INTERNAL_CALL_RaycastAll_m4528_ftn) (Vector3_t28 *, Vector3_t28 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m4528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m4528_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask, ___queryTriggerInteraction);
}
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Internal_Raycast_m4529 (Object_t * __this /* static, unused */, Vector3_t28  ___origin, Vector3_t28  ___direction, RaycastHit_t504 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		RaycastHit_t504 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		int32_t L_3 = ___queryTriggerInteraction;
		bool L_4 = Physics_INTERNAL_CALL_Internal_Raycast_m4530(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m4530 (Object_t * __this /* static, unused */, Vector3_t28 * ___origin, Vector3_t28 * ___direction, RaycastHit_t504 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m4530_ftn) (Vector3_t28 *, Vector3_t28 *, RaycastHit_t504 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m4530_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m4530_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask, ___queryTriggerInteraction);
}
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPoint.h"
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPointMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
extern "C" void Rigidbody_AddForce_m1243 (Rigidbody_t260 * __this, Vector3_t28  ___force, int32_t ___mode, const MethodInfo* method)
{
	{
		int32_t L_0 = ___mode;
		Rigidbody_INTERNAL_CALL_AddForce_m4531(NULL /*static, unused*/, __this, (&___force), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m4531 (Object_t * __this /* static, unused */, Rigidbody_t260 * ___self, Vector3_t28 * ___force, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForce_m4531_ftn) (Rigidbody_t260 *, Vector3_t28 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForce_m4531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForce_m4531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self, ___force, ___mode);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t260 * Collider_get_attachedRigidbody_m4532 (Collider_t534 * __this, const MethodInfo* method)
{
	typedef Rigidbody_t260 * (*Collider_get_attachedRigidbody_m4532_ftn) (Collider_t534 *);
	static Collider_get_attachedRigidbody_m4532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_attachedRigidbody_m4532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
extern "C" Bounds_t427  Collider_get_bounds_m3883 (Collider_t534 * __this, const MethodInfo* method)
{
	Bounds_t427  V_0 = {0};
	{
		Collider_INTERNAL_get_bounds_m4533(__this, (&V_0), /*hidden argument*/NULL);
		Bounds_t427  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Collider_INTERNAL_get_bounds_m4533 (Collider_t534 * __this, Bounds_t427 * ___value, const MethodInfo* method)
{
	typedef void (*Collider_INTERNAL_get_bounds_m4533_ftn) (Collider_t534 *, Bounds_t427 *);
	static Collider_INTERNAL_get_bounds_m4533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_INTERNAL_get_bounds_m4533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxCollider.h"
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxColliderMethodDeclarations.h"
// System.Void UnityEngine.BoxCollider::set_center(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxColliderMethodDeclarations.h"
extern "C" void BoxCollider_set_center_m3808 (BoxCollider_t684 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		BoxCollider_INTERNAL_set_center_m4534(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.BoxCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" void BoxCollider_INTERNAL_set_center_m4534 (BoxCollider_t684 * __this, Vector3_t28 * ___value, const MethodInfo* method)
{
	typedef void (*BoxCollider_INTERNAL_set_center_m4534_ftn) (BoxCollider_t684 *, Vector3_t28 *);
	static BoxCollider_INTERNAL_set_center_m4534_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_set_center_m4534_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_set_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
extern "C" void BoxCollider_set_size_m3809 (BoxCollider_t684 * __this, Vector3_t28  ___value, const MethodInfo* method)
{
	{
		BoxCollider_INTERNAL_set_size_m4535(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.BoxCollider::INTERNAL_set_size(UnityEngine.Vector3&)
extern "C" void BoxCollider_INTERNAL_set_size_m4535 (BoxCollider_t684 * __this, Vector3_t28 * ___value, const MethodInfo* method)
{
	typedef void (*BoxCollider_INTERNAL_set_size_m4535_ftn) (BoxCollider_t684 *, Vector3_t28 *);
	static BoxCollider_INTERNAL_set_size_m4535_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_set_size_m4535_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_set_size(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t28  RaycastHit_get_point_m2755 (RaycastHit_t504 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t28  RaycastHit_get_normal_m2756 (RaycastHit_t504 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m2754 (RaycastHit_t504 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t534 * RaycastHit_get_collider_m2753 (RaycastHit_t504 * __this, const MethodInfo* method)
{
	{
		Collider_t534 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
extern "C" Rigidbody_t260 * RaycastHit_get_rigidbody_m3886 (RaycastHit_t504 * __this, const MethodInfo* method)
{
	Rigidbody_t260 * G_B3_0 = {0};
	{
		Collider_t534 * L_0 = RaycastHit_get_collider_m2753(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m268(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider_t534 * L_2 = RaycastHit_get_collider_m2753(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_t260 * L_3 = Collider_get_attachedRigidbody_m4532(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody_t260 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" Transform_t48 * RaycastHit_get_transform_m3891 (RaycastHit_t504 * __this, const MethodInfo* method)
{
	Rigidbody_t260 * V_0 = {0};
	{
		Rigidbody_t260 * L_0 = RaycastHit_get_rigidbody_m3886(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody_t260 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m268(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody_t260 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t48 * L_4 = Component_get_transform_m332(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider_t534 * L_5 = RaycastHit_get_collider_m2753(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m268(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider_t534 * L_7 = RaycastHit_get_collider_m2753(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t48 * L_8 = Component_get_transform_m332(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t48 *)NULL;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_39.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_39MethodDeclarations.h"
// System.Void UnityEngine.Physics2D::.cctor()
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_39MethodDeclarations.h"
extern TypeInfo* List_1_t798_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t531_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5215_MethodInfo_var;
extern "C" void Physics2D__cctor_m4536 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		Physics2D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		List_1__ctor_m5215_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484170);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t798 * L_0 = (List_1_t798 *)il2cpp_codegen_object_new (List_1_t798_il2cpp_TypeInfo_var);
		List_1__ctor_m5215(L_0, /*hidden argument*/List_1__ctor_m5215_MethodInfo_var);
		((Physics2D_t531_StaticFields*)Physics2D_t531_il2cpp_TypeInfo_var->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
extern TypeInfo* Physics2D_t531_il2cpp_TypeInfo_var;
extern "C" void Physics2D_Internal_Raycast_m4537 (Object_t * __this /* static, unused */, Vector2_t85  ___origin, Vector2_t85  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t532 * ___raycastHit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t532 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t531_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_CALL_Internal_Raycast_m4538(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m4538 (Object_t * __this /* static, unused */, Vector2_t85 * ___origin, Vector2_t85 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t532 * ___raycastHit, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m4538_ftn) (Vector2_t85 *, Vector2_t85 *, float, int32_t, float, float, RaycastHit2D_t532 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m4538_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m4538_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t531_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t532  Physics2D_Raycast_m2899 (Object_t * __this /* static, unused */, Vector2_t85  ___origin, Vector2_t85  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t85  L_0 = ___origin;
		Vector2_t85  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t531_il2cpp_TypeInfo_var);
		RaycastHit2D_t532  L_6 = Physics2D_Raycast_m4539(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern TypeInfo* Physics2D_t531_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t532  Physics2D_Raycast_m4539 (Object_t * __this /* static, unused */, Vector2_t85  ___origin, Vector2_t85  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit2D_t532  V_0 = {0};
	{
		Vector2_t85  L_0 = ___origin;
		Vector2_t85  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t531_il2cpp_TypeInfo_var);
		Physics2D_Internal_Raycast_m4537(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/NULL);
		RaycastHit2D_t532  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t531_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t530* Physics2D_RaycastAll_m2741 (Object_t * __this /* static, unused */, Vector2_t85  ___origin, Vector2_t85  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t531_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t530* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m4540(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t530* Physics2D_INTERNAL_CALL_RaycastAll_m4540 (Object_t * __this /* static, unused */, Vector2_t85 * ___origin, Vector2_t85 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t530* (*Physics2D_INTERNAL_CALL_RaycastAll_m4540_ftn) (Vector2_t85 *, Vector2_t85 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m4540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m4540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single,System.Int32)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern TypeInfo* Physics2D_t531_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t530* Physics2D_GetRayIntersectionAll_m3896 (Object_t * __this /* static, unused */, Ray_t529  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t531_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t530* L_2 = Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m4541(NULL /*static, unused*/, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_GetRayIntersectionAll(UnityEngine.Ray&,System.Single,System.Int32)
extern "C" RaycastHit2DU5BU5D_t530* Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m4541 (Object_t * __this /* static, unused */, Ray_t529 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t530* (*Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m4541_ftn) (Ray_t529 *, float, int32_t);
	static Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m4541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m4541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_GetRayIntersectionAll(UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___ray, ___distance, ___layerMask);
}
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t85  RaycastHit2D_get_point_m2745 (RaycastHit2D_t532 * __this, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t85  RaycastHit2D_get_normal_m2746 (RaycastHit2D_t532 * __this, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m2900 (RaycastHit2D_t532 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t224 * RaycastHit2D_get_collider_m2742 (RaycastHit2D_t532 * __this, const MethodInfo* method)
{
	{
		Collider2D_t224 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern "C" Rigidbody2D_t225 * RaycastHit2D_get_rigidbody_m3885 (RaycastHit2D_t532 * __this, const MethodInfo* method)
{
	Rigidbody2D_t225 * G_B3_0 = {0};
	{
		Collider2D_t224 * L_0 = RaycastHit2D_get_collider_m2742(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m268(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t224 * L_2 = RaycastHit2D_get_collider_m2742(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_t225 * L_3 = Collider2D_get_attachedRigidbody_m4543(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t225 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" Transform_t48 * RaycastHit2D_get_transform_m2743 (RaycastHit2D_t532 * __this, const MethodInfo* method)
{
	Rigidbody2D_t225 * V_0 = {0};
	{
		Rigidbody2D_t225 * L_0 = RaycastHit2D_get_rigidbody_m3885(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t225 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m268(NULL /*static, unused*/, L_1, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t225 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t48 * L_4 = Component_get_transform_m332(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t224 * L_5 = RaycastHit2D_get_collider_m2742(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m268(NULL /*static, unused*/, L_5, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t224 * L_7 = RaycastHit2D_get_collider_m2742(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t48 * L_8 = Component_get_transform_m332(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t48 *)NULL;
	}
}
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2D.h"
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2DMethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// System.Single UnityEngine.Rigidbody2D::get_mass()
extern "C" float Rigidbody2D_get_mass_m1200 (Rigidbody2D_t225 * __this, const MethodInfo* method)
{
	typedef float (*Rigidbody2D_get_mass_m1200_ftn) (Rigidbody2D_t225 *);
	static Rigidbody2D_get_mass_m1200_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_get_mass_m1200_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::get_mass()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody2D::set_mass(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Rigidbody2D_set_mass_m1201 (Rigidbody2D_t225 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_set_mass_m1201_ftn) (Rigidbody2D_t225 *, float);
	static Rigidbody2D_set_mass_m1201_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_set_mass_m1201_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::set_mass(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
extern "C" void Rigidbody2D_AddForce_m1203 (Rigidbody2D_t225 * __this, Vector2_t85  ___force, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody2D_INTERNAL_CALL_AddForce_m4542(NULL /*static, unused*/, __this, (&___force), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2D.h"
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForce_m4542 (Object_t * __this /* static, unused */, Rigidbody2D_t225 * ___self, Vector2_t85 * ___force, int32_t ___mode, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_CALL_AddForce_m4542_ftn) (Rigidbody2D_t225 *, Vector2_t85 *, int32_t);
	static Rigidbody2D_INTERNAL_CALL_AddForce_m4542_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_CALL_AddForce_m4542_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)");
	_il2cpp_icall_func(___self, ___force, ___mode);
}
// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t225 * Collider2D_get_attachedRigidbody_m4543 (Collider2D_t224 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t225 * (*Collider2D_get_attachedRigidbody_m4543_ftn) (Collider2D_t224 *);
	static Collider2D_get_attachedRigidbody_m4543_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m4543_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2D.h"
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2DMethodDeclarations.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2D.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2DMethodDeclarations.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void AudioConfigurationChangeHandler__ctor_m4544 (AudioConfigurationChangeHandler_t803 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void AudioConfigurationChangeHandler_Invoke_m4545 (AudioConfigurationChangeHandler_t803 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m4545((AudioConfigurationChangeHandler_t803 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t803(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t523_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m4546 (AudioConfigurationChangeHandler_t803 * __this, bool ___deviceWasChanged, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(206);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t523_il2cpp_TypeInfo_var, &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m4547 (AudioConfigurationChangeHandler_t803 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"
extern TypeInfo* AudioSettings_t804_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m4548 (Object_t * __this /* static, unused */, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t803 * L_0 = ((AudioSettings_t804_StaticFields*)AudioSettings_t804_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t803 * L_1 = ((AudioSettings_t804_StaticFields*)AudioSettings_t804_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m4545(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void PCMReaderCallback__ctor_m4549 (PCMReaderCallback_t805 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
#include "mscorlib_ArrayTypes.h"
extern "C" void PCMReaderCallback_Invoke_m4550 (PCMReaderCallback_t805 * __this, SingleU5BU5D_t242* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m4550((PCMReaderCallback_t805 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t242* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t242* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t805(Il2CppObject* delegate, SingleU5BU5D_t242* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m4551 (PCMReaderCallback_t805 * __this, SingleU5BU5D_t242* ___data, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m4552 (PCMReaderCallback_t805 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void PCMSetPositionCallback__ctor_m4553 (PCMSetPositionCallback_t806 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void PCMSetPositionCallback_Invoke_m4554 (PCMSetPositionCallback_t806 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m4554((PCMSetPositionCallback_t806 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t806(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t246_il2cpp_TypeInfo_var;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m4555 (PCMSetPositionCallback_t806 * __this, int32_t ___position, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t246_il2cpp_TypeInfo_var, &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m4556 (PCMSetPositionCallback_t806 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
#include "mscorlib_ArrayTypes.h"
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m4557 (AudioClip_t156 * __this, SingleU5BU5D_t242* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t805 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t805 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t242* L_2 = ___data;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m4550(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m4558 (AudioClip_t156 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t806 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t806 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m4554(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.FFTWindow
#include "UnityEngine_UnityEngine_FFTWindow.h"
// UnityEngine.FFTWindow
#include "UnityEngine_UnityEngine_FFTWindowMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Single UnityEngine.AudioSource::get_volume()
extern "C" float AudioSource_get_volume_m1129 (AudioSource_t157 * __this, const MethodInfo* method)
{
	typedef float (*AudioSource_get_volume_m1129_ftn) (AudioSource_t157 *);
	static AudioSource_get_volume_m1129_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_m1129_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void AudioSource_set_volume_m1130 (AudioSource_t157 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*AudioSource_set_volume_m1130_ftn) (AudioSource_t157 *, float);
	static AudioSource_set_volume_m1130_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_m1130_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
extern "C" void AudioSource_set_clip_m1135 (AudioSource_t157 * __this, AudioClip_t156 * ___value, const MethodInfo* method)
{
	typedef void (*AudioSource_set_clip_m1135_ftn) (AudioSource_t157 *, AudioClip_t156 *);
	static AudioSource_set_clip_m1135_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_m1135_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
// System.UInt64
#include "mscorlib_System_UInt64.h"
extern "C" void AudioSource_Play_m4559 (AudioSource_t157 * __this, uint64_t ___delay, const MethodInfo* method)
{
	typedef void (*AudioSource_Play_m4559_ftn) (AudioSource_t157 *, uint64_t);
	static AudioSource_Play_m4559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m4559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay);
}
// System.Void UnityEngine.AudioSource::Play()
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
extern "C" void AudioSource_Play_m1132 (AudioSource_t157 * __this, const MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		AudioSource_Play_m4559(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::Stop()
extern "C" void AudioSource_Stop_m1131 (AudioSource_t157 * __this, const MethodInfo* method)
{
	typedef void (*AudioSource_Stop_m1131_ftn) (AudioSource_t157 *);
	static AudioSource_Stop_m1131_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m1131_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.FFTWindow
#include "UnityEngine_UnityEngine_FFTWindow.h"
extern "C" void AudioSource_GetSpectrumDataHelper_m4560 (AudioSource_t157 * __this, SingleU5BU5D_t242* ___samples, int32_t ___channel, int32_t ___window, const MethodInfo* method)
{
	typedef void (*AudioSource_GetSpectrumDataHelper_m4560_ftn) (AudioSource_t157 *, SingleU5BU5D_t242*, int32_t, int32_t);
	static AudioSource_GetSpectrumDataHelper_m4560_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetSpectrumDataHelper_m4560_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)");
	_il2cpp_icall_func(__this, ___samples, ___channel, ___window);
}
// System.Single[] UnityEngine.AudioSource::GetSpectrumData(System.Int32,System.Int32,UnityEngine.FFTWindow)
extern TypeInfo* SingleU5BU5D_t242_il2cpp_TypeInfo_var;
extern "C" SingleU5BU5D_t242* AudioSource_GetSpectrumData_m1137 (AudioSource_t157 * __this, int32_t ___numSamples, int32_t ___channel, int32_t ___window, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	SingleU5BU5D_t242* V_0 = {0};
	{
		int32_t L_0 = ___numSamples;
		V_0 = ((SingleU5BU5D_t242*)SZArrayNew(SingleU5BU5D_t242_il2cpp_TypeInfo_var, L_0));
		SingleU5BU5D_t242* L_1 = V_0;
		int32_t L_2 = ___channel;
		int32_t L_3 = ___window;
		AudioSource_GetSpectrumDataHelper_m4560(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		SingleU5BU5D_t242* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"
// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m4561 (WebCamDevice_t808 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m4562 (WebCamDevice_t808 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t808_marshal(const WebCamDevice_t808& unmarshaled, WebCamDevice_t808_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
extern "C" void WebCamDevice_t808_marshal_back(const WebCamDevice_t808_marshaled& marshaled, WebCamDevice_t808& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t808_marshal_cleanup(WebCamDevice_t808_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.Void UnityEngine.AnimationEvent::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AnimationEvent__ctor_m4563 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t99 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t811 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m4564 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void AnimationEvent_set_data_m4565 (AnimationEvent_t810 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m4566 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m4567 (AnimationEvent_t810 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m4568 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void AnimationEvent_set_floatParameter_m4569 (AnimationEvent_t810 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m4570 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void AnimationEvent_set_intParameter_m4571 (AnimationEvent_t810 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t99 * AnimationEvent_get_objectReferenceParameter_m4572 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	{
		Object_t99 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" void AnimationEvent_set_objectReferenceParameter_m4573 (AnimationEvent_t810 * __this, Object_t99 * ___value, const MethodInfo* method)
{
	{
		Object_t99 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m4574 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m4575 (AnimationEvent_t810 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m4576 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m4577 (AnimationEvent_t810 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m4578 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern "C" void AnimationEvent_set_messageOptions_m4579 (AnimationEvent_t810 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m4580 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m4581 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral394;
extern "C" AnimationState_t811 * AnimationEvent_get_animationState_m4582 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral394 = il2cpp_codegen_string_literal_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m4580(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral394, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimationState_t811 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern Il2CppCodeGenString* _stringLiteral395;
extern "C" AnimatorStateInfo_t812  AnimationEvent_get_animatorStateInfo_m4583 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral395 = il2cpp_codegen_string_literal_from_index(395);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m4581(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral395, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorStateInfo_t812  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern Il2CppCodeGenString* _stringLiteral396;
extern "C" AnimatorClipInfo_t813  AnimationEvent_get_animatorClipInfo_m4584 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral396 = il2cpp_codegen_string_literal_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m4581(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral396, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorClipInfo_t813  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t AnimationEvent_GetHash_m4585 (AnimationEvent_t810 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m4574(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m5216(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m4576(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m5197((&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Keyframe__ctor_m364 (Keyframe_t107 * __this, float ___time, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___time;
		__this->___m_Time_0 = L_0;
		float L_1 = ___value;
		__this->___m_Value_1 = L_1;
		__this->___m_InTangent_2 = (0.0f);
		__this->___m_OutTangent_3 = (0.0f);
		return;
	}
}
// System.Single UnityEngine.Keyframe::get_time()
extern "C" float Keyframe_get_time_m451 (Keyframe_t107 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
#include "UnityEngine_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
extern "C" void AnimationCurve__ctor_m365 (AnimationCurve_t35 * __this, KeyframeU5BU5D_t106* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t106* L_0 = ___keys;
		AnimationCurve_Init_m4591(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m4586 (AnimationCurve_t35 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m4591(__this, (KeyframeU5BU5D_t106*)(KeyframeU5BU5D_t106*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m4587 (AnimationCurve_t35 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m4587_ftn) (AnimationCurve_t35 *);
	static AnimationCurve_Cleanup_m4587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m4587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m4588 (AnimationCurve_t35 * __this, const MethodInfo* method)
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
		AnimationCurve_Cleanup_m4587(__this, /*hidden argument*/NULL);
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
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" float AnimationCurve_Evaluate_m367 (AnimationCurve_t35 * __this, float ___time, const MethodInfo* method)
{
	typedef float (*AnimationCurve_Evaluate_m367_ftn) (AnimationCurve_t35 *, float);
	static AnimationCurve_Evaluate_m367_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Evaluate_m367_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Evaluate(System.Single)");
	return _il2cpp_icall_func(__this, ___time);
}
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" KeyframeU5BU5D_t106* AnimationCurve_get_keys_m448 (AnimationCurve_t35 * __this, const MethodInfo* method)
{
	{
		KeyframeU5BU5D_t106* L_0 = AnimationCurve_GetKeys_m4590(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" Keyframe_t107  AnimationCurve_get_Item_m450 (AnimationCurve_t35 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Keyframe_t107  L_1 = AnimationCurve_GetKey_Internal_m4589(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" int32_t AnimationCurve_get_length_m449 (AnimationCurve_t35 * __this, const MethodInfo* method)
{
	typedef int32_t (*AnimationCurve_get_length_m449_ftn) (AnimationCurve_t35 *);
	static AnimationCurve_get_length_m449_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_get_length_m449_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::get_length()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t107  AnimationCurve_GetKey_Internal_m4589 (AnimationCurve_t35 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Keyframe_t107  (*AnimationCurve_GetKey_Internal_m4589_ftn) (AnimationCurve_t35 *, int32_t);
	static AnimationCurve_GetKey_Internal_m4589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_GetKey_Internal_m4589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t106* AnimationCurve_GetKeys_m4590 (AnimationCurve_t35 * __this, const MethodInfo* method)
{
	typedef KeyframeU5BU5D_t106* (*AnimationCurve_GetKeys_m4590_ftn) (AnimationCurve_t35 *);
	static AnimationCurve_GetKeys_m4590_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_GetKeys_m4590_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::GetKeys()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m4591 (AnimationCurve_t35 * __this, KeyframeU5BU5D_t106* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m4591_ftn) (AnimationCurve_t35 *, KeyframeU5BU5D_t106*);
	static AnimationCurve_Init_m4591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m4591_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t35_marshal(const AnimationCurve_t35& unmarshaled, AnimationCurve_t35_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void AnimationCurve_t35_marshal_back(const AnimationCurve_t35_marshaled& marshaled, AnimationCurve_t35& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t35_marshal_cleanup(AnimationCurve_t35_marshaled& marshaled)
{
}
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" bool AnimatorStateInfo_IsName_m4592 (AnimatorStateInfo_t812 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m4612(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m4593 (AnimatorStateInfo_t812 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" int32_t AnimatorStateInfo_get_nameHash_m4594 (AnimatorStateInfo_t812 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m4595 (AnimatorStateInfo_t812 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" float AnimatorStateInfo_get_normalizedTime_m4596 (AnimatorStateInfo_t812 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" float AnimatorStateInfo_get_length_m4597 (AnimatorStateInfo_t812 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_speed()
extern "C" float AnimatorStateInfo_get_speed_m4598 (AnimatorStateInfo_t812 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Speed_5);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_speedMultiplier()
extern "C" float AnimatorStateInfo_get_speedMultiplier_m4599 (AnimatorStateInfo_t812 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_SpeedMultiplier_6);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" int32_t AnimatorStateInfo_get_tagHash_m4600 (AnimatorStateInfo_t812 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" bool AnimatorStateInfo_IsTag_m4601 (AnimatorStateInfo_t812 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m4612(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Tag_7);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" bool AnimatorStateInfo_get_loop_m4602 (AnimatorStateInfo_t812 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_8);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" bool AnimatorTransitionInfo_IsName_m4603 (AnimatorTransitionInfo_t815 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m4612(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m4612(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m4604 (AnimatorTransitionInfo_t815 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m4612(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m4605 (AnimatorTransitionInfo_t815 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m4606 (AnimatorTransitionInfo_t815 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m4607 (AnimatorTransitionInfo_t815 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m4608 (AnimatorTransitionInfo_t815 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m4609 (AnimatorTransitionInfo_t815 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m4610 (AnimatorTransitionInfo_t815 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m4611 (AnimatorTransitionInfo_t815 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t815_marshal(const AnimatorTransitionInfo_t815& unmarshaled, AnimatorTransitionInfo_t815_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
extern "C" void AnimatorTransitionInfo_t815_marshal_back(const AnimatorTransitionInfo_t815_marshaled& marshaled, AnimatorTransitionInfo_t815& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t815_marshal_cleanup(AnimatorTransitionInfo_t815_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
// System.Void UnityEngine.Animator::SetTrigger(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" void Animator_SetTrigger_m3094 (Animator_t233 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m4613(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m3093 (Animator_t233 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m4614(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Animator_set_speed_m1087 (Animator_t233 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Animator_set_speed_m1087_ftn) (Animator_t233 *, float);
	static Animator_set_speed_m1087_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_speed_m1087_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t562 * Animator_get_runtimeAnimatorController_m3092 (Animator_t233 * __this, const MethodInfo* method)
{
	typedef RuntimeAnimatorController_t562 * (*Animator_get_runtimeAnimatorController_m3092_ftn) (Animator_t233 *);
	static Animator_get_runtimeAnimatorController_m3092_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m3092_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m4612 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m4612_ftn) (String_t*);
	static Animator_StringToHash_m4612_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m4612_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m4613 (Animator_t233 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m4613_ftn) (Animator_t233 *, String_t*);
	static Animator_SetTriggerString_m4613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m4613_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m4614 (Animator_t233 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m4614_ftn) (Animator_t233 *, String_t*);
	static Animator_ResetTriggerString_m4614_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m4614_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t816_marshal(const SkeletonBone_t816& unmarshaled, SkeletonBone_t816_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
extern "C" void SkeletonBone_t816_marshal_back(const SkeletonBone_t816_marshaled& marshaled, SkeletonBone_t816& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t816_marshal_cleanup(SkeletonBone_t816_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"
// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m4615 (HumanBone_t818 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void HumanBone_set_boneName_m4616 (HumanBone_t818 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m4617 (HumanBone_t818 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m4618 (HumanBone_t818 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
// Conversion methods for marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t818_marshal(const HumanBone_t818& unmarshaled, HumanBone_t818_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
extern "C" void HumanBone_t818_marshal_back(const HumanBone_t818_marshaled& marshaled, HumanBone_t818& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t818_marshal_cleanup(HumanBone_t818_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m4619 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Void UnityEngine.CharacterInfo::set_advance(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void CharacterInfo_set_advance_m4620 (CharacterInfo_t821 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___width_3 = (((float)L_0));
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" int32_t CharacterInfo_get_glyphWidth_m4621 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m2877(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_glyphWidth(System.Int32)
extern "C" void CharacterInfo_set_glyphWidth_m4622 (CharacterInfo_t821 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_set_width_m2925(L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m4623 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m2831(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_glyphHeight(System.Int32)
extern "C" void CharacterInfo_set_glyphHeight_m4624 (CharacterInfo_t821 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m2831(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t232 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		Rect_set_height_m2923(L_2, (((float)((-L_3)))), /*hidden argument*/NULL);
		Rect_t232 * L_4 = &(__this->___vert_2);
		Rect_t232 * L_5 = L_4;
		float L_6 = Rect_get_y_m2880(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		Rect_t232 * L_8 = &(__this->___vert_2);
		float L_9 = Rect_get_height_m2831(L_8, /*hidden argument*/NULL);
		Rect_set_y_m2924(L_5, ((float)((float)L_6+(float)((float)((float)L_7-(float)L_9)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m4625 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2879(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_bearing(System.Int32)
extern "C" void CharacterInfo_set_bearing_m4626 (CharacterInfo_t821 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_set_x_m2926(L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m4627 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t232 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m2880(L_1, /*hidden argument*/NULL);
		Rect_t232 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m2831(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_minY(System.Int32)
extern "C" void CharacterInfo_set_minY_m4628 (CharacterInfo_t821 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		int32_t L_2 = (__this->___ascent_7);
		Rect_t232 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_y_m2880(L_3, /*hidden argument*/NULL);
		Rect_set_height_m2923(L_0, ((float)((float)(((float)((int32_t)((int32_t)L_1-(int32_t)L_2))))-(float)L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m4629 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t232 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m2880(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_maxY(System.Int32)
extern "C" void CharacterInfo_set_maxY_m4630 (CharacterInfo_t821 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_y_m2880(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t232 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		int32_t L_4 = (__this->___ascent_7);
		Rect_set_y_m2924(L_2, (((float)((int32_t)((int32_t)L_3-(int32_t)L_4)))), /*hidden argument*/NULL);
		Rect_t232 * L_5 = &(__this->___vert_2);
		Rect_t232 * L_6 = L_5;
		float L_7 = Rect_get_height_m2831(L_6, /*hidden argument*/NULL);
		float L_8 = V_0;
		Rect_t232 * L_9 = &(__this->___vert_2);
		float L_10 = Rect_get_y_m2880(L_9, /*hidden argument*/NULL);
		Rect_set_height_m2923(L_6, ((float)((float)L_7+(float)((float)((float)L_8-(float)L_10)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m4631 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2879(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_minX(System.Int32)
extern "C" void CharacterInfo_set_minX_m4632 (CharacterInfo_t821 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2879(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t232 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		Rect_set_x_m2926(L_2, (((float)L_3)), /*hidden argument*/NULL);
		Rect_t232 * L_4 = &(__this->___vert_2);
		Rect_t232 * L_5 = L_4;
		float L_6 = Rect_get_width_m2877(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		Rect_t232 * L_8 = &(__this->___vert_2);
		float L_9 = Rect_get_x_m2879(L_8, /*hidden argument*/NULL);
		Rect_set_width_m2925(L_5, ((float)((float)L_6+(float)((float)((float)L_7-(float)L_9)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m4633 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2879(L_0, /*hidden argument*/NULL);
		Rect_t232 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m2877(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_maxX(System.Int32)
extern "C" void CharacterInfo_set_maxX_m4634 (CharacterInfo_t821 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_t232 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_x_m2879(L_2, /*hidden argument*/NULL);
		Rect_set_width_m2925(L_0, ((float)((float)(((float)L_1))-(float)L_3)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t85  CharacterInfo_get_uvBottomLeftUnFlipped_m4635 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2879(L_0, /*hidden argument*/NULL);
		Rect_t232 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m2880(L_2, /*hidden argument*/NULL);
		Vector2_t85  L_4 = {0};
		Vector2__ctor_m305(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeftUnFlipped(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"
extern "C" void CharacterInfo_set_uvBottomLeftUnFlipped_m4636 (CharacterInfo_t821 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		Vector2_t85  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m4639(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t232 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_set_x_m2926(L_1, L_2, /*hidden argument*/NULL);
		Rect_t232 * L_3 = &(__this->___uv_1);
		float L_4 = ((&___value)->___y_2);
		Rect_set_y_m2924(L_3, L_4, /*hidden argument*/NULL);
		Rect_t232 * L_5 = &(__this->___uv_1);
		float L_6 = ((&V_0)->___x_1);
		Rect_t232 * L_7 = &(__this->___uv_1);
		float L_8 = Rect_get_x_m2879(L_7, /*hidden argument*/NULL);
		Rect_set_width_m2925(L_5, ((float)((float)L_6-(float)L_8)), /*hidden argument*/NULL);
		Rect_t232 * L_9 = &(__this->___uv_1);
		float L_10 = ((&V_0)->___y_2);
		Rect_t232 * L_11 = &(__this->___uv_1);
		float L_12 = Rect_get_y_m2880(L_11, /*hidden argument*/NULL);
		Rect_set_height_m2923(L_9, ((float)((float)L_10-(float)L_12)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t85  CharacterInfo_get_uvBottomRightUnFlipped_m4637 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2879(L_0, /*hidden argument*/NULL);
		Rect_t232 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2877(L_2, /*hidden argument*/NULL);
		Rect_t232 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m2880(L_4, /*hidden argument*/NULL);
		Vector2_t85  L_6 = {0};
		Vector2__ctor_m305(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRightUnFlipped_m4638 (CharacterInfo_t821 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		Vector2_t85  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m4639(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t232 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_t232 * L_3 = &(__this->___uv_1);
		float L_4 = Rect_get_x_m2879(L_3, /*hidden argument*/NULL);
		Rect_set_width_m2925(L_1, ((float)((float)L_2-(float)L_4)), /*hidden argument*/NULL);
		Rect_t232 * L_5 = &(__this->___uv_1);
		float L_6 = ((&___value)->___y_2);
		Rect_set_y_m2924(L_5, L_6, /*hidden argument*/NULL);
		Rect_t232 * L_7 = &(__this->___uv_1);
		float L_8 = ((&V_0)->___y_2);
		Rect_t232 * L_9 = &(__this->___uv_1);
		float L_10 = Rect_get_y_m2880(L_9, /*hidden argument*/NULL);
		Rect_set_height_m2923(L_7, ((float)((float)L_8-(float)L_10)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t85  CharacterInfo_get_uvTopRightUnFlipped_m4639 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2879(L_0, /*hidden argument*/NULL);
		Rect_t232 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2877(L_2, /*hidden argument*/NULL);
		Rect_t232 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m2880(L_4, /*hidden argument*/NULL);
		Rect_t232 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m2831(L_6, /*hidden argument*/NULL);
		Vector2_t85  L_8 = {0};
		Vector2__ctor_m305(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRightUnFlipped_m4640 (CharacterInfo_t821 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___uv_1);
		float L_1 = ((&___value)->___x_1);
		Rect_t232 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_x_m2879(L_2, /*hidden argument*/NULL);
		Rect_set_width_m2925(L_0, ((float)((float)L_1-(float)L_3)), /*hidden argument*/NULL);
		Rect_t232 * L_4 = &(__this->___uv_1);
		float L_5 = ((&___value)->___y_2);
		Rect_t232 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_y_m2880(L_6, /*hidden argument*/NULL);
		Rect_set_height_m2923(L_4, ((float)((float)L_5-(float)L_7)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t85  CharacterInfo_get_uvTopLeftUnFlipped_m4641 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2879(L_0, /*hidden argument*/NULL);
		Rect_t232 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m2880(L_2, /*hidden argument*/NULL);
		Rect_t232 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m2831(L_4, /*hidden argument*/NULL);
		Vector2_t85  L_6 = {0};
		Vector2__ctor_m305(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopLeftUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeftUnFlipped_m4642 (CharacterInfo_t821 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		Vector2_t85  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m4639(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t232 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_set_x_m2926(L_1, L_2, /*hidden argument*/NULL);
		Rect_t232 * L_3 = &(__this->___uv_1);
		float L_4 = ((&___value)->___y_2);
		Rect_t232 * L_5 = &(__this->___uv_1);
		float L_6 = Rect_get_y_m2880(L_5, /*hidden argument*/NULL);
		Rect_set_height_m2923(L_3, ((float)((float)L_4-(float)L_6)), /*hidden argument*/NULL);
		Rect_t232 * L_7 = &(__this->___uv_1);
		float L_8 = ((&V_0)->___x_1);
		Rect_t232 * L_9 = &(__this->___uv_1);
		float L_10 = Rect_get_x_m2879(L_9, /*hidden argument*/NULL);
		Rect_set_width_m2925(L_7, ((float)((float)L_8-(float)L_10)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t85  CharacterInfo_get_uvBottomLeft_m4643 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = CharacterInfo_get_uvBottomLeftUnFlipped_m4635(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomLeft_m4644 (CharacterInfo_t821 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___value;
		CharacterInfo_set_uvBottomLeftUnFlipped_m4636(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t85  CharacterInfo_get_uvBottomRight_m4645 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	Vector2_t85  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t85  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m4641(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t85  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m4637(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRight_m4646 (CharacterInfo_t821 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t85  L_1 = ___value;
		CharacterInfo_set_uvTopLeftUnFlipped_m4642(__this, L_1, /*hidden argument*/NULL);
		goto IL_001e;
	}

IL_0017:
	{
		Vector2_t85  L_2 = ___value;
		CharacterInfo_set_uvBottomRightUnFlipped_m4638(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t85  CharacterInfo_get_uvTopRight_m4647 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m4639(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRight_m4648 (CharacterInfo_t821 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___value;
		CharacterInfo_set_uvTopRightUnFlipped_m4640(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t85  CharacterInfo_get_uvTopLeft_m4649 (CharacterInfo_t821 * __this, const MethodInfo* method)
{
	Vector2_t85  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t85  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m4637(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t85  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m4641(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeft_m4650 (CharacterInfo_t821 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t85  L_1 = ___value;
		CharacterInfo_set_uvBottomRightUnFlipped_m4638(__this, L_1, /*hidden argument*/NULL);
		goto IL_001e;
	}

IL_0017:
	{
		Vector2_t85  L_2 = ___value;
		CharacterInfo_set_uvTopLeftUnFlipped_m4642(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t821_marshal(const CharacterInfo_t821& unmarshaled, CharacterInfo_t821_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
extern "C" void CharacterInfo_t821_marshal_back(const CharacterInfo_t821_marshaled& marshaled, CharacterInfo_t821& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t821_marshal_cleanup(CharacterInfo_t821_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"
// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void FontTextureRebuildCallback__ctor_m4651 (FontTextureRebuildCallback_t822 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m4652 (FontTextureRebuildCallback_t822 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m4652((FontTextureRebuildCallback_t822 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t822(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m4653 (FontTextureRebuildCallback_t822 * __this, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m4654 (FontTextureRebuildCallback_t822 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Char
#include "mscorlib_System_Char.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// System.Void UnityEngine.Font::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
extern "C" void Font__ctor_m4655 (Font_t364 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m4424(__this, /*hidden argument*/NULL);
		Font_Internal_CreateFont_m4662(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Font__ctor_m4656 (Font_t364 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m4424(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		Font_Internal_CreateFont_m4662(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::.ctor(System.String[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Font__ctor_m4657 (Font_t364 * __this, StringU5BU5D_t110* ___names, int32_t ___size, const MethodInfo* method)
{
	{
		Object__ctor_m4424(__this, /*hidden argument*/NULL);
		StringU5BU5D_t110* L_0 = ___names;
		int32_t L_1 = ___size;
		Font_Internal_CreateDynamicFont_m4663(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Font_t364_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t541_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m2860 (Object_t * __this /* static, unused */, Action_1_t541 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		Action_1_t541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t541 * L_0 = ((Font_t364_StaticFields*)Font_t364_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t541 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t364_StaticFields*)Font_t364_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t541 *)CastclassSealed(L_2, Action_1_t541_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t364_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t541_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m4658 (Object_t * __this /* static, unused */, Action_1_t541 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		Action_1_t541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t541 * L_0 = ((Font_t364_StaticFields*)Font_t364_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t541 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t364_StaticFields*)Font_t364_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t541 *)CastclassSealed(L_2, Action_1_t541_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::add_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
extern TypeInfo* FontTextureRebuildCallback_t822_il2cpp_TypeInfo_var;
extern "C" void Font_add_m_FontTextureRebuildCallback_m4659 (Font_t364 * __this, FontTextureRebuildCallback_t822 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FontTextureRebuildCallback_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	{
		FontTextureRebuildCallback_t822 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		FontTextureRebuildCallback_t822 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___m_FontTextureRebuildCallback_3 = ((FontTextureRebuildCallback_t822 *)CastclassSealed(L_2, FontTextureRebuildCallback_t822_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern TypeInfo* FontTextureRebuildCallback_t822_il2cpp_TypeInfo_var;
extern "C" void Font_remove_m_FontTextureRebuildCallback_m4660 (Font_t364 * __this, FontTextureRebuildCallback_t822 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FontTextureRebuildCallback_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	{
		FontTextureRebuildCallback_t822 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		FontTextureRebuildCallback_t822 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___m_FontTextureRebuildCallback_3 = ((FontTextureRebuildCallback_t822 *)CastclassSealed(L_2, FontTextureRebuildCallback_t822_il2cpp_TypeInfo_var));
		return;
	}
}
// System.String[] UnityEngine.Font::GetOSInstalledFontNames()
extern "C" StringU5BU5D_t110* Font_GetOSInstalledFontNames_m4661 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef StringU5BU5D_t110* (*Font_GetOSInstalledFontNames_m4661_ftn) ();
	static Font_GetOSInstalledFontNames_m4661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_GetOSInstalledFontNames_m4661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::GetOSInstalledFontNames()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
extern "C" void Font_Internal_CreateFont_m4662 (Object_t * __this /* static, unused */, Font_t364 * ____font, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Font_Internal_CreateFont_m4662_ftn) (Font_t364 *, String_t*);
	static Font_Internal_CreateFont_m4662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_Internal_CreateFont_m4662_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)");
	_il2cpp_icall_func(____font, ___name);
}
// System.Void UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)
extern "C" void Font_Internal_CreateDynamicFont_m4663 (Object_t * __this /* static, unused */, Font_t364 * ____font, StringU5BU5D_t110* ____names, int32_t ___size, const MethodInfo* method)
{
	typedef void (*Font_Internal_CreateDynamicFont_m4663_ftn) (Font_t364 *, StringU5BU5D_t110*, int32_t);
	static Font_Internal_CreateDynamicFont_m4663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_Internal_CreateDynamicFont_m4663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)");
	_il2cpp_icall_func(____font, ____names, ___size);
}
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String,System.Int32)
extern TypeInfo* StringU5BU5D_t110_il2cpp_TypeInfo_var;
extern TypeInfo* Font_t364_il2cpp_TypeInfo_var;
extern "C" Font_t364 * Font_CreateDynamicFontFromOSFont_m4664 (Object_t * __this /* static, unused */, String_t* ___fontname, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		Font_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		s_Il2CppMethodIntialized = true;
	}
	Font_t364 * V_0 = {0};
	{
		StringU5BU5D_t110* L_0 = ((StringU5BU5D_t110*)SZArrayNew(StringU5BU5D_t110_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___fontname;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)L_1;
		int32_t L_2 = ___size;
		Font_t364 * L_3 = (Font_t364 *)il2cpp_codegen_object_new (Font_t364_il2cpp_TypeInfo_var);
		Font__ctor_m4657(L_3, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Font_t364 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String[],System.Int32)
extern TypeInfo* Font_t364_il2cpp_TypeInfo_var;
extern "C" Font_t364 * Font_CreateDynamicFontFromOSFont_m4665 (Object_t * __this /* static, unused */, StringU5BU5D_t110* ___fontnames, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		s_Il2CppMethodIntialized = true;
	}
	Font_t364 * V_0 = {0};
	{
		StringU5BU5D_t110* L_0 = ___fontnames;
		int32_t L_1 = ___size;
		Font_t364 * L_2 = (Font_t364 *)il2cpp_codegen_object_new (Font_t364_il2cpp_TypeInfo_var);
		Font__ctor_m4657(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Font_t364 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t5 * Font_get_material_m3103 (Font_t364 * __this, const MethodInfo* method)
{
	typedef Material_t5 * (*Font_get_material_m3103_ftn) (Font_t364 *);
	static Font_get_material_m3103_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m3103_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_material(UnityEngine.Material)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void Font_set_material_m4666 (Font_t364 * __this, Material_t5 * ___value, const MethodInfo* method)
{
	typedef void (*Font_set_material_m4666_ftn) (Font_t364 *, Material_t5 *);
	static Font_set_material_m4666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_material_m4666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_material(UnityEngine.Material)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" bool Font_HasCharacter_m2984 (Font_t364 * __this, uint16_t ___c, const MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m2984_ftn) (Font_t364 *, uint16_t);
	static Font_HasCharacter_m2984_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m2984_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.String[] UnityEngine.Font::get_fontNames()
extern "C" StringU5BU5D_t110* Font_get_fontNames_m4667 (Font_t364 * __this, const MethodInfo* method)
{
	typedef StringU5BU5D_t110* (*Font_get_fontNames_m4667_ftn) (Font_t364 *);
	static Font_get_fontNames_m4667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontNames_m4667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontNames()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_fontNames(System.String[])
extern "C" void Font_set_fontNames_m4668 (Font_t364 * __this, StringU5BU5D_t110* ___value, const MethodInfo* method)
{
	typedef void (*Font_set_fontNames_m4668_ftn) (Font_t364 *, StringU5BU5D_t110*);
	static Font_set_fontNames_m4668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_fontNames_m4668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_fontNames(System.String[])");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CharacterInfo[] UnityEngine.Font::get_characterInfo()
extern "C" CharacterInfoU5BU5D_t941* Font_get_characterInfo_m4669 (Font_t364 * __this, const MethodInfo* method)
{
	typedef CharacterInfoU5BU5D_t941* (*Font_get_characterInfo_m4669_ftn) (Font_t364 *);
	static Font_get_characterInfo_m4669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_characterInfo_m4669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_characterInfo()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void Font_set_characterInfo_m4670 (Font_t364 * __this, CharacterInfoU5BU5D_t941* ___value, const MethodInfo* method)
{
	typedef void (*Font_set_characterInfo_m4670_ftn) (Font_t364 *, CharacterInfoU5BU5D_t941*);
	static Font_set_characterInfo_m4670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_characterInfo_m4670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
extern "C" void Font_RequestCharactersInTexture_m4671 (Font_t364 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, const MethodInfo* method)
{
	typedef void (*Font_RequestCharactersInTexture_m4671_ftn) (Font_t364 *, String_t*, int32_t, int32_t);
	static Font_RequestCharactersInTexture_m4671_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_RequestCharactersInTexture_m4671_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)");
	_il2cpp_icall_func(__this, ___characters, ___size, ___style);
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32)
extern "C" void Font_RequestCharactersInTexture_m4672 (Font_t364 * __this, String_t* ___characters, int32_t ___size, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		String_t* L_0 = ___characters;
		int32_t L_1 = ___size;
		int32_t L_2 = V_0;
		Font_RequestCharactersInTexture_m4671(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String)
extern "C" void Font_RequestCharactersInTexture_m4673 (Font_t364 * __this, String_t* ___characters, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		String_t* L_0 = ___characters;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		Font_RequestCharactersInTexture_m4671(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"
extern TypeInfo* Font_t364_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5217_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m4674 (Object_t * __this /* static, unused */, Font_t364 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		Action_1_Invoke_m5217_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484171);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t541 * V_0 = {0};
	{
		Action_1_t541 * L_0 = ((Font_t364_StaticFields*)Font_t364_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t541 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t541 * L_2 = V_0;
		Font_t364 * L_3 = ___font;
		NullCheck(L_2);
		Action_1_Invoke_m5217(L_2, L_3, /*hidden argument*/Action_1_Invoke_m5217_MethodInfo_var);
	}

IL_0013:
	{
		Font_t364 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t822 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t364 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t822 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		FontTextureRebuildCallback_Invoke_m4652(L_7, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C" FontTextureRebuildCallback_t822 * Font_get_textureRebuildCallback_m4675 (Font_t364 * __this, const MethodInfo* method)
{
	{
		FontTextureRebuildCallback_t822 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		return L_0;
	}
}
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_set_textureRebuildCallback_m4676 (Font_t364 * __this, FontTextureRebuildCallback_t822 * ___value, const MethodInfo* method)
{
	{
		FontTextureRebuildCallback_t822 * L_0 = ___value;
		__this->___m_FontTextureRebuildCallback_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Font::GetMaxVertsForString(System.String)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern "C" int32_t Font_GetMaxVertsForString_m4677 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2952(L_0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)4))+(int32_t)4));
	}
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C" bool Font_GetCharacterInfo_m4678 (Font_t364 * __this, uint16_t ___ch, CharacterInfo_t821 * ___info, int32_t ___size, int32_t ___style, const MethodInfo* method)
{
	typedef bool (*Font_GetCharacterInfo_m4678_ftn) (Font_t364 *, uint16_t, CharacterInfo_t821 *, int32_t, int32_t);
	static Font_GetCharacterInfo_m4678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_GetCharacterInfo_m4678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)");
	return _il2cpp_icall_func(__this, ___ch, ___info, ___size, ___style);
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32)
extern "C" bool Font_GetCharacterInfo_m4679 (Font_t364 * __this, uint16_t ___ch, CharacterInfo_t821 * ___info, int32_t ___size, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		uint16_t L_0 = ___ch;
		CharacterInfo_t821 * L_1 = ___info;
		int32_t L_2 = ___size;
		int32_t L_3 = V_0;
		bool L_4 = Font_GetCharacterInfo_m4678(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&)
extern "C" bool Font_GetCharacterInfo_m4680 (Font_t364 * __this, uint16_t ___ch, CharacterInfo_t821 * ___info, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		uint16_t L_0 = ___ch;
		CharacterInfo_t821 * L_1 = ___info;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Font_GetCharacterInfo_m4678(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m3106 (Font_t364 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m3106_ftn) (Font_t364 *);
	static Font_get_dynamic_m3106_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m3106_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_ascent()
extern "C" int32_t Font_get_ascent_m4681 (Font_t364 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_ascent_m4681_ftn) (Font_t364 *);
	static Font_get_ascent_m4681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_ascent_m4681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_ascent()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_lineHeight()
extern "C" int32_t Font_get_lineHeight_m4682 (Font_t364 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_lineHeight_m4682_ftn) (Font_t364 *);
	static Font_get_lineHeight_m4682_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_lineHeight_m4682_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_lineHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m3108 (Font_t364 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m3108_ftn) (Font_t364 *);
	static Font_get_fontSize_m3108_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m3108_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_15.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_40.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_41.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_15MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_40MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_41MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
// System.Void UnityEngine.TextGenerator::.ctor()
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"
extern "C" void TextGenerator__ctor_m2948 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	{
		TextGenerator__ctor_m3102(__this, ((int32_t)50), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_15MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_40MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_41MethodDeclarations.h"
extern TypeInfo* List_1_t508_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t823_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t824_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5218_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m5219_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m5220_MethodInfo_var;
extern "C" void TextGenerator__ctor_m3102 (TextGenerator_t399 * __this, int32_t ___initialCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(380);
		List_1_t823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(517);
		List_1_t824_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(518);
		List_1__ctor_m5218_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484172);
		List_1__ctor_m5219_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484173);
		List_1__ctor_m5220_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484174);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialCapacity;
		List_1_t508 * L_1 = (List_1_t508 *)il2cpp_codegen_object_new (List_1_t508_il2cpp_TypeInfo_var);
		List_1__ctor_m5218(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m5218_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		List_1_t823 * L_3 = (List_1_t823 *)il2cpp_codegen_object_new (List_1_t823_il2cpp_TypeInfo_var);
		List_1__ctor_m5219(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m5219_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		List_1_t824 * L_4 = (List_1_t824 *)il2cpp_codegen_object_new (List_1_t824_il2cpp_TypeInfo_var);
		List_1__ctor_m5220(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m5220_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m4684(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m4683 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m4685(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m4684 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m4684_ftn) (TextGenerator_t399 *);
	static TextGenerator_Init_m4684_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m4684_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m4685 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m4685_ftn) (TextGenerator_t399 *);
	static TextGenerator_Dispose_cpp_m4685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m4685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" bool TextGenerator_Populate_Internal_m4686 (TextGenerator_t399 * __this, String_t* ___str, Font_t364 * ___font, Color_t12  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t85  ___extents, Vector2_t85  ___pivot, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t364 * L_1 = ___font;
		Color_t12  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m4687(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m4687 (TextGenerator_t399 * __this, String_t* ___str, Font_t364 * ___font, Color_t12  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t364 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4688(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4688 (Object_t * __this /* static, unused */, TextGenerator_t399 * ___self, String_t* ___str, Font_t364 * ___font, Color_t12 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4688_ftn) (TextGenerator_t399 *, String_t*, Font_t364 *, Color_t12 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t232  TextGenerator_get_rectExtents_m3002 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	Rect_t232  V_0 = {0};
	{
		TextGenerator_INTERNAL_get_rectExtents_m4689(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t232  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C" void TextGenerator_INTERNAL_get_rectExtents_m4689 (TextGenerator_t399 * __this, Rect_t232 * ___value, const MethodInfo* method)
{
	typedef void (*TextGenerator_INTERNAL_get_rectExtents_m4689_ftn) (TextGenerator_t399 *, Rect_t232 *);
	static TextGenerator_INTERNAL_get_rectExtents_m4689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_get_rectExtents_m4689_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m4690 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m4690_ftn) (TextGenerator_t399 *);
	static TextGenerator_get_vertexCount_m4690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m4690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void TextGenerator_GetVerticesInternal_m4691 (TextGenerator_t399 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m4691_ftn) (TextGenerator_t399 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m4691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m4691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t398* TextGenerator_GetVerticesArray_m4692 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	typedef UIVertexU5BU5D_t398* (*TextGenerator_GetVerticesArray_m4692_ftn) (TextGenerator_t399 *);
	static TextGenerator_GetVerticesArray_m4692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m4692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m4693 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m4693_ftn) (TextGenerator_t399 *);
	static TextGenerator_get_characterCount_m4693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m4693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" int32_t TextGenerator_get_characterCountVisible_m2978 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m3000(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2952(L_2, /*hidden argument*/NULL);
		int32_t L_4 = TextGenerator_get_vertexCount_m4690(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Max_m2991(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_6 = Mathf_Min_m2993(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m4694 (TextGenerator_t399 * __this, Object_t * ___characters, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m4694_ftn) (TextGenerator_t399 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m4694_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m4694_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t942* TextGenerator_GetCharactersArray_m4695 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t942* (*TextGenerator_GetCharactersArray_m4695_ftn) (TextGenerator_t399 *);
	static TextGenerator_GetCharactersArray_m4695_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m4695_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m2977 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m2977_ftn) (TextGenerator_t399 *);
	static TextGenerator_get_lineCount_m2977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m2977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m4696 (TextGenerator_t399 * __this, Object_t * ___lines, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m4696_ftn) (TextGenerator_t399 *, Object_t *);
	static TextGenerator_GetLinesInternal_m4696_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m4696_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t943* TextGenerator_GetLinesArray_m4697 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t943* (*TextGenerator_GetLinesArray_m4697_ftn) (TextGenerator_t399 *);
	static TextGenerator_GetLinesArray_m4697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m4697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m3012 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m3012_ftn) (TextGenerator_t399 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m3012_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m3012_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" void TextGenerator_Finalize_m4698 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
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
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, __this);
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
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral397;
extern Il2CppCodeGenString* _stringLiteral398;
extern "C" TextGenerationSettings_t513  TextGenerator_ValidatedSettings_m4699 (TextGenerator_t399 * __this, TextGenerationSettings_t513  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral397 = il2cpp_codegen_string_literal_from_index(397);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	{
		Font_t364 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m268(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t364 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m3106(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t513  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m378(NULL /*static, unused*/, _stringLiteral397, /*hidden argument*/NULL);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m378(NULL /*static, unused*/, _stringLiteral398, /*hidden argument*/NULL);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t513  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m3105 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_40.h"
extern "C" void TextGenerator_GetCharacters_m4700 (TextGenerator_t399 * __this, List_1_t823 * ___characters, const MethodInfo* method)
{
	{
		List_1_t823 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m4694(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_41.h"
extern "C" void TextGenerator_GetLines_m4701 (TextGenerator_t399 * __this, List_1_t824 * ___lines, const MethodInfo* method)
{
	{
		List_1_t824 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m4696(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_15.h"
extern "C" void TextGenerator_GetVertices_m4702 (TextGenerator_t399 * __this, List_1_t508 * ___vertices, const MethodInfo* method)
{
	{
		List_1_t508 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m4691(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" float TextGenerator_GetPreferredWidth_m3110 (TextGenerator_t399 * __this, String_t* ___str, TextGenerationSettings_t513  ___settings, const MethodInfo* method)
{
	Rect_t232  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t513  L_1 = ___settings;
		TextGenerator_Populate_m3001(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t232  L_2 = TextGenerator_get_rectExtents_m3002(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m2877((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m3111 (TextGenerator_t399 * __this, String_t* ___str, TextGenerationSettings_t513  ___settings, const MethodInfo* method)
{
	Rect_t232  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t513  L_1 = ___settings;
		TextGenerator_Populate_m3001(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t232  L_2 = TextGenerator_get_rectExtents_m3002(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m2831((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextGenerator_Populate_m3001 (TextGenerator_t399 * __this, String_t* ___str, TextGenerationSettings_t513  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m458(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t513  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m5111((&___settings), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t513  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m4703(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m4703 (TextGenerator_t399 * __this, String_t* ___str, TextGenerationSettings_t513  ___settings, const MethodInfo* method)
{
	TextGenerationSettings_t513  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t513  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t513  L_2 = ___settings;
		TextGenerationSettings_t513  L_3 = TextGenerator_ValidatedSettings_m4699(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t364 * L_5 = ((&V_0)->___font_0);
		Color_t12  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t85  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t85  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m4686(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m3109 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t508 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m4702(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t508 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m2979 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t823 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m4700(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t823 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m2976 (TextGenerator_t399 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t824 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m4701(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t824 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"
// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void WillRenderCanvases__ctor_m2766 (WillRenderCanvases_t535 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m4704 (WillRenderCanvases_t535 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m4704((WillRenderCanvases_t535 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t535(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m4705 (WillRenderCanvases_t535 * __this, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m4706 (WillRenderCanvases_t535 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Canvas_t369_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t535_il2cpp_TypeInfo_var;
extern "C" void Canvas_add_willRenderCanvases_m2767 (Object_t * __this /* static, unused */, WillRenderCanvases_t535 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		WillRenderCanvases_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t535 * L_0 = ((Canvas_t369_StaticFields*)Canvas_t369_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t535 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Combine_m454(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t369_StaticFields*)Canvas_t369_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t535 *)CastclassSealed(L_2, WillRenderCanvases_t535_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t369_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t535_il2cpp_TypeInfo_var;
extern "C" void Canvas_remove_willRenderCanvases_m4707 (Object_t * __this /* static, unused */, WillRenderCanvases_t535 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		WillRenderCanvases_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t535 * L_0 = ((Canvas_t369_StaticFields*)Canvas_t369_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t535 * L_1 = ___value;
		Delegate_t112 * L_2 = Delegate_Remove_m455(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t369_StaticFields*)Canvas_t369_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t535 *)CastclassSealed(L_2, WillRenderCanvases_t535_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m2894 (Canvas_t369 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m2894_ftn) (Canvas_t369 *);
	static Canvas_get_renderMode_m2894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m2894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m3123 (Canvas_t369 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m3123_ftn) (Canvas_t369 *);
	static Canvas_get_isRootCanvas_m3123_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m3123_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t32 * Canvas_get_worldCamera_m2902 (Canvas_t369 * __this, const MethodInfo* method)
{
	typedef Camera_t32 * (*Canvas_get_worldCamera_m2902_ftn) (Canvas_t369 *);
	static Canvas_get_worldCamera_m2902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m2902_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m3107 (Canvas_t369 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m3107_ftn) (Canvas_t369 *);
	static Canvas_get_scaleFactor_m3107_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m3107_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Canvas_set_scaleFactor_m3125 (Canvas_t369 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m3125_ftn) (Canvas_t369 *, float);
	static Canvas_set_scaleFactor_m3125_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m3125_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m2919 (Canvas_t369 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m2919_ftn) (Canvas_t369 *);
	static Canvas_get_referencePixelsPerUnit_m2919_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m2919_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m3126 (Canvas_t369 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m3126_ftn) (Canvas_t369 *, float);
	static Canvas_set_referencePixelsPerUnit_m3126_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m3126_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m2885 (Canvas_t369 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m2885_ftn) (Canvas_t369 *);
	static Canvas_get_pixelPerfect_m2885_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m2885_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m2895 (Canvas_t369 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m2895_ftn) (Canvas_t369 *);
	static Canvas_get_renderOrder_m2895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m2895_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_overrideSorting()
extern "C" bool Canvas_get_overrideSorting_m3039 (Canvas_t369 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_overrideSorting_m3039_ftn) (Canvas_t369 *);
	static Canvas_get_overrideSorting_m3039_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_overrideSorting_m3039_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_overrideSorting()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Canvas_set_overrideSorting_m2817 (Canvas_t369 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_overrideSorting_m2817_ftn) (Canvas_t369 *, bool);
	static Canvas_set_overrideSorting_m2817_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_overrideSorting_m2817_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_overrideSorting(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m2844 (Canvas_t369 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m2844_ftn) (Canvas_t369 *);
	static Canvas_get_sortingOrder_m2844_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m2844_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Canvas_set_sortingOrder_m2818 (Canvas_t369 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_sortingOrder_m2818_ftn) (Canvas_t369 *, int32_t);
	static Canvas_set_sortingOrder_m2818_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_sortingOrder_m2818_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
extern "C" int32_t Canvas_get_sortingLayerID_m2842 (Canvas_t369 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingLayerID_m2842_ftn) (Canvas_t369 *);
	static Canvas_get_sortingLayerID_m2842_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingLayerID_m2842_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
extern "C" void Canvas_set_sortingLayerID_m2843 (Canvas_t369 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_sortingLayerID_m2843_ftn) (Canvas_t369 *, int32_t);
	static Canvas_set_sortingLayerID_m2843_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_sortingLayerID_m2843_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_sortingLayerID(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m2901 (Canvas_t369 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m2901_ftn) (Canvas_t369 *);
	static Canvas_get_cachedSortingLayerValue_m2901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m2901_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t5 * Canvas_GetDefaultCanvasMaterial_m2863 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t5 * (*Canvas_GetDefaultCanvasMaterial_m2863_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m2863_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m2863_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"
extern TypeInfo* Canvas_t369_il2cpp_TypeInfo_var;
extern "C" void Canvas_SendWillRenderCanvases_m4708 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t535 * L_0 = ((Canvas_t369_StaticFields*)Canvas_t369_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t535 * L_1 = ((Canvas_t369_StaticFields*)Canvas_t369_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		WillRenderCanvases_Invoke_m4704(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
extern "C" void Canvas_ForceUpdateCanvases_m3056 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m4708(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
// System.Single UnityEngine.CanvasGroup::get_alpha()
extern "C" float CanvasGroup_get_alpha_m1181 (CanvasGroup_t198 * __this, const MethodInfo* method)
{
	typedef float (*CanvasGroup_get_alpha_m1181_ftn) (CanvasGroup_t198 *);
	static CanvasGroup_get_alpha_m1181_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_alpha_m1181_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_alpha()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void CanvasGroup_set_alpha_m1182 (CanvasGroup_t198 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*CanvasGroup_set_alpha_m1182_ftn) (CanvasGroup_t198 *, float);
	static CanvasGroup_set_alpha_m1182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_set_alpha_m1182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::set_alpha(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m3085 (CanvasGroup_t198 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m3085_ftn) (CanvasGroup_t198 *);
	static CanvasGroup_get_interactable_m3085_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m3085_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m4709 (CanvasGroup_t198 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m4709_ftn) (CanvasGroup_t198 *);
	static CanvasGroup_get_blocksRaycasts_m4709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m4709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2884 (CanvasGroup_t198 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m2884_ftn) (CanvasGroup_t198 *);
	static CanvasGroup_get_ignoreParentGroups_m2884_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m2884_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
extern "C" bool CanvasGroup_IsRaycastLocationValid_m4710 (CanvasGroup_t198 * __this, Vector2_t85  ___sp, Camera_t32 * ___eventCamera, const MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m4709(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// System.Void UnityEngine.UIVertex::.cctor()
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* UIVertex_t403_il2cpp_TypeInfo_var;
extern "C" void UIVertex__cctor_m4711 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t403  V_0 = {0};
	{
		Color32_t510  L_0 = {0};
		Color32__ctor_m2774(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/NULL);
		((UIVertex_t403_StaticFields*)UIVertex_t403_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t100  L_1 = {0};
		Vector4__ctor_m284(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((UIVertex_t403_StaticFields*)UIVertex_t403_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (UIVertex_t403_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t28  L_2 = Vector3_get_zero_m312(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___position_0 = L_2;
		Vector3_t28  L_3 = Vector3_get_back_m3171(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___normal_1 = L_3;
		Vector4_t100  L_4 = ((UIVertex_t403_StaticFields*)UIVertex_t403_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t510  L_5 = ((UIVertex_t403_StaticFields*)UIVertex_t403_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t85  L_6 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t85  L_7 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t403  L_8 = V_0;
		((UIVertex_t403_StaticFields*)UIVertex_t403_il2cpp_TypeInfo_var->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"
extern "C" void CanvasRenderer_SetColor_m2890 (CanvasRenderer_t368 * __this, Color_t12  ___color, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m4712(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m4712 (Object_t * __this /* static, unused */, CanvasRenderer_t368 * ___self, Color_t12 * ___color, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m4712_ftn) (CanvasRenderer_t368 *, Color_t12 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m4712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m4712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t12  CanvasRenderer_GetColor_m2888 (CanvasRenderer_t368 * __this, const MethodInfo* method)
{
	typedef Color_t12  (*CanvasRenderer_GetColor_m2888_ftn) (CanvasRenderer_t368 *);
	static CanvasRenderer_GetColor_m2888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m2888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::EnableRectClipping(UnityEngine.Rect)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern "C" void CanvasRenderer_EnableRectClipping_m3036 (CanvasRenderer_t368 * __this, Rect_t232  ___rect, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m4713(NULL /*static, unused*/, __this, (&___rect), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)
extern "C" void CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m4713 (Object_t * __this /* static, unused */, CanvasRenderer_t368 * ___self, Rect_t232 * ___rect, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m4713_ftn) (CanvasRenderer_t368 *, Rect_t232 *);
	static CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m4713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m4713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)");
	_il2cpp_icall_func(___self, ___rect);
}
// System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
extern "C" void CanvasRenderer_DisableRectClipping_m3037 (CanvasRenderer_t368 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_DisableRectClipping_m3037_ftn) (CanvasRenderer_t368 *);
	static CanvasRenderer_DisableRectClipping_m3037_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_DisableRectClipping_m3037_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::DisableRectClipping()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void CanvasRenderer_set_hasPopInstruction_m3027 (CanvasRenderer_t368 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_hasPopInstruction_m3027_ftn) (CanvasRenderer_t368 *, bool);
	static CanvasRenderer_set_hasPopInstruction_m3027_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_hasPopInstruction_m3027_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
extern "C" int32_t CanvasRenderer_get_materialCount_m4714 (CanvasRenderer_t368 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_materialCount_m4714_ftn) (CanvasRenderer_t368 *);
	static CanvasRenderer_get_materialCount_m4714_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_materialCount_m4714_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_materialCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void CanvasRenderer_set_materialCount_m2874 (CanvasRenderer_t368 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_materialCount_m2874_ftn) (CanvasRenderer_t368 *, int32_t);
	static CanvasRenderer_set_materialCount_m2874_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_materialCount_m2874_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_materialCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void CanvasRenderer_SetMaterial_m2875 (CanvasRenderer_t368 * __this, Material_t5 * ___material, int32_t ___index, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m2875_ftn) (CanvasRenderer_t368 *, Material_t5 *, int32_t);
	static CanvasRenderer_SetMaterial_m2875_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m2875_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)");
	_il2cpp_icall_func(__this, ___material, ___index);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void CanvasRenderer_SetMaterial_m3006 (CanvasRenderer_t368 * __this, Material_t5 * ___material, Texture_t40 * ___texture, const MethodInfo* method)
{
	{
		int32_t L_0 = CanvasRenderer_get_materialCount_m4714(__this, /*hidden argument*/NULL);
		int32_t L_1 = Math_Max_m5221(NULL /*static, unused*/, 1, L_0, /*hidden argument*/NULL);
		CanvasRenderer_set_materialCount_m2874(__this, L_1, /*hidden argument*/NULL);
		Material_t5 * L_2 = ___material;
		CanvasRenderer_SetMaterial_m2875(__this, L_2, 0, /*hidden argument*/NULL);
		Texture_t40 * L_3 = ___texture;
		CanvasRenderer_SetTexture_m2876(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
extern "C" void CanvasRenderer_set_popMaterialCount_m3028 (CanvasRenderer_t368 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_popMaterialCount_m3028_ftn) (CanvasRenderer_t368 *, int32_t);
	static CanvasRenderer_set_popMaterialCount_m3028_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_popMaterialCount_m3028_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
extern "C" void CanvasRenderer_SetPopMaterial_m3029 (CanvasRenderer_t368 * __this, Material_t5 * ___material, int32_t ___index, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetPopMaterial_m3029_ftn) (CanvasRenderer_t368 *, Material_t5 *, int32_t);
	static CanvasRenderer_SetPopMaterial_m3029_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetPopMaterial_m3029_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)");
	_il2cpp_icall_func(__this, ___material, ___index);
}
// System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
extern "C" void CanvasRenderer_SetTexture_m2876 (CanvasRenderer_t368 * __this, Texture_t40 * ___texture, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetTexture_m2876_ftn) (CanvasRenderer_t368 *, Texture_t40 *);
	static CanvasRenderer_SetTexture_m2876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetTexture_m2876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
extern "C" void CanvasRenderer_SetMesh_m2878 (CanvasRenderer_t368 * __this, Mesh_t98 * ___mesh, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMesh_m2878_ftn) (CanvasRenderer_t368 *, Mesh_t98 *);
	static CanvasRenderer_SetMesh_m2878_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMesh_m2878_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)");
	_il2cpp_icall_func(__this, ___mesh);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m2872 (CanvasRenderer_t368 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m2872_ftn) (CanvasRenderer_t368 *);
	static CanvasRenderer_Clear_m2872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m2872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasRenderer::get_cull()
extern "C" bool CanvasRenderer_get_cull_m2873 (CanvasRenderer_t368 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasRenderer_get_cull_m2873_ftn) (CanvasRenderer_t368 *);
	static CanvasRenderer_get_cull_m2873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_cull_m2873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_cull()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
extern "C" void CanvasRenderer_set_cull_m3034 (CanvasRenderer_t368 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_cull_m3034_ftn) (CanvasRenderer_t368 *, bool);
	static CanvasRenderer_set_cull_m3034_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_cull_m3034_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_cull(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m2865 (CanvasRenderer_t368 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m2865_ftn) (CanvasRenderer_t368 *);
	static CanvasRenderer_get_absoluteDepth_m2865_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m2865_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
extern "C" bool CanvasRenderer_get_hasMoved_m3032 (CanvasRenderer_t368 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasRenderer_get_hasMoved_m3032_ftn) (CanvasRenderer_t368 *);
	static CanvasRenderer_get_hasMoved_m3032_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_hasMoved_m3032_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_hasMoved()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// System.Void UnityEngine.RectTransformUtility::.cctor()
extern TypeInfo* Vector3U5BU5D_t111_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t539_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m4715 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RectTransformUtility_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RectTransformUtility_t539_StaticFields*)RectTransformUtility_t539_il2cpp_TypeInfo_var->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t111*)SZArrayNew(Vector3U5BU5D_t111_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
extern TypeInfo* RectTransformUtility_t539_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2903 (Object_t * __this /* static, unused */, RectTransform_t351 * ___rect, Vector2_t85  ___screenPoint, Camera_t32 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t351 * L_0 = ___rect;
		Camera_t32 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t539_il2cpp_TypeInfo_var);
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4716(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4716 (Object_t * __this /* static, unused */, RectTransform_t351 * ___rect, Vector2_t85 * ___screenPoint, Camera_t32 * ___cam, const MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4716_ftn) (RectTransform_t351 *, Vector2_t85 *, Camera_t32 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4716_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4716_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
extern TypeInfo* RectTransformUtility_t539_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  RectTransformUtility_PixelAdjustPoint_m2886 (Object_t * __this /* static, unused */, Vector2_t85  ___point, Transform_t48 * ___elementTransform, Canvas_t369 * ___canvas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	{
		Vector2_t85  L_0 = ___point;
		Transform_t48 * L_1 = ___elementTransform;
		Canvas_t369 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t539_il2cpp_TypeInfo_var);
		RectTransformUtility_PixelAdjustPoint_m4717(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t539_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_PixelAdjustPoint_m4717 (Object_t * __this /* static, unused */, Vector2_t85  ___point, Transform_t48 * ___elementTransform, Canvas_t369 * ___canvas, Vector2_t85 * ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t48 * L_0 = ___elementTransform;
		Canvas_t369 * L_1 = ___canvas;
		Vector2_t85 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t539_il2cpp_TypeInfo_var);
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4718(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4718 (Object_t * __this /* static, unused */, Vector2_t85 * ___point, Transform_t48 * ___elementTransform, Canvas_t369 * ___canvas, Vector2_t85 * ___output, const MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4718_ftn) (Vector2_t85 *, Transform_t48 *, Canvas_t369 *, Vector2_t85 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t232  RectTransformUtility_PixelAdjustRect_m2887 (Object_t * __this /* static, unused */, RectTransform_t351 * ___rectTransform, Canvas_t369 * ___canvas, const MethodInfo* method)
{
	typedef Rect_t232  (*RectTransformUtility_PixelAdjustRect_m2887_ftn) (RectTransform_t351 *, Canvas_t369 *);
	static RectTransformUtility_PixelAdjustRect_m2887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m2887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern TypeInfo* RectTransformUtility_t539_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m4719 (Object_t * __this /* static, unused */, RectTransform_t351 * ___rect, Vector2_t85  ___screenPoint, Camera_t32 * ___cam, Vector3_t28 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t529  V_0 = {0};
	Plane_t554  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t28 * L_0 = ___worldPoint;
		Vector2_t85  L_1 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t28  L_2 = Vector2_op_Implicit_m1101(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		*L_0 = L_2;
		Camera_t32 * L_3 = ___cam;
		Vector2_t85  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t539_il2cpp_TypeInfo_var);
		Ray_t529  L_5 = RectTransformUtility_ScreenPointToRay_m4720(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RectTransform_t351 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t104  L_7 = Transform_get_rotation_m355(L_6, /*hidden argument*/NULL);
		Vector3_t28  L_8 = Vector3_get_back_m3171(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t28  L_9 = Quaternion_op_Multiply_m1198(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_t351 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t28  L_11 = Transform_get_position_m335(L_10, /*hidden argument*/NULL);
		Plane__ctor_m2973((&V_1), L_9, L_11, /*hidden argument*/NULL);
		Ray_t529  L_12 = V_0;
		bool L_13 = Plane_Raycast_m2974((&V_1), L_12, (&V_2), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t28 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t28  L_16 = Ray_GetPoint_m2975((&V_0), L_15, /*hidden argument*/NULL);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t539_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2935 (Object_t * __this /* static, unused */, RectTransform_t351 * ___rect, Vector2_t85  ___screenPoint, Camera_t32 * ___cam, Vector2_t85 * ___localPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t28  V_0 = {0};
	{
		Vector2_t85 * L_0 = ___localPoint;
		Vector2_t85  L_1 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_0 = L_1;
		RectTransform_t351 * L_2 = ___rect;
		Vector2_t85  L_3 = ___screenPoint;
		Camera_t32 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t539_il2cpp_TypeInfo_var);
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m4719(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t85 * L_6 = ___localPoint;
		RectTransform_t351 * L_7 = ___rect;
		Vector3_t28  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t28  L_9 = Transform_InverseTransformPoint_m2833(L_7, L_8, /*hidden argument*/NULL);
		Vector2_t85  L_10 = Vector2_op_Implicit_m1100(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern "C" Ray_t529  RectTransformUtility_ScreenPointToRay_m4720 (Object_t * __this /* static, unused */, Camera_t32 * ___cam, Vector2_t85  ___screenPos, const MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	{
		Camera_t32 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m268(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t32 * L_2 = ___cam;
		Vector2_t85  L_3 = ___screenPos;
		Vector3_t28  L_4 = Vector2_op_Implicit_m1101(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t529  L_5 = Camera_ScreenPointToRay_m2738(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		Vector2_t85  L_6 = ___screenPos;
		Vector3_t28  L_7 = Vector2_op_Implicit_m1101(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t28 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t28  L_10 = V_0;
		Vector3_t28  L_11 = Vector3_get_forward_m310(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t529  L_12 = {0};
		Ray__ctor_m3964(&L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern TypeInfo* RectTransform_t351_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t539_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2835 (Object_t * __this /* static, unused */, RectTransform_t351 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		RectTransformUtility_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t351 * V_1 = {0};
	Vector2_t85  V_2 = {0};
	Vector2_t85  V_3 = {0};
	Vector2_t85  V_4 = {0};
	Vector2_t85  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t351 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t351 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t48 * L_5 = Transform_GetChild_m1108(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t351 *)IsInstSealed(L_5, RectTransform_t351_il2cpp_TypeInfo_var));
		RectTransform_t351 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m268(NULL /*static, unused*/, L_6, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t351 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t539_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutOnAxis_m2835(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t351 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m1109(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t351 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t85  L_15 = RectTransform_get_pivot_m2839(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m2932((&V_2), L_17, /*hidden argument*/NULL);
		Vector2_set_Item_m2940((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/NULL);
		RectTransform_t351 * L_19 = ___rect;
		Vector2_t85  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m2797(L_19, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t351 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t85  L_23 = RectTransform_get_anchoredPosition_m2838(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m2932((&V_3), L_25, /*hidden argument*/NULL);
		Vector2_set_Item_m2940((&V_3), L_24, ((-L_26)), /*hidden argument*/NULL);
		RectTransform_t351 * L_27 = ___rect;
		Vector2_t85  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m2785(L_27, L_28, /*hidden argument*/NULL);
		RectTransform_t351 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t85  L_30 = RectTransform_get_anchorMin_m2836(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		RectTransform_t351 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t85  L_32 = RectTransform_get_anchorMax_m2837(L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m2932((&V_4), L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m2932((&V_5), L_36, /*hidden argument*/NULL);
		Vector2_set_Item_m2940((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/NULL);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m2940((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/NULL);
		RectTransform_t351 * L_40 = ___rect;
		Vector2_t85  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m2783(L_40, L_41, /*hidden argument*/NULL);
		RectTransform_t351 * L_42 = ___rect;
		Vector2_t85  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m2784(L_42, L_43, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t351_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t539_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutAxes_m3053 (Object_t * __this /* static, unused */, RectTransform_t351 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		RectTransformUtility_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t351 * V_1 = {0};
	{
		RectTransform_t351 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m295(NULL /*static, unused*/, L_0, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t351 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t48 * L_5 = Transform_GetChild_m1108(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t351 *)IsInstSealed(L_5, RectTransform_t351_il2cpp_TypeInfo_var));
		RectTransform_t351 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m268(NULL /*static, unused*/, L_6, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t351 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t539_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutAxes_m3053(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t351 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m1109(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t351 * L_13 = ___rect;
		RectTransform_t351 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t85  L_15 = RectTransform_get_pivot_m2839(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t539_il2cpp_TypeInfo_var);
		Vector2_t85  L_16 = RectTransformUtility_GetTransposed_m4721(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_pivot_m2797(L_13, L_16, /*hidden argument*/NULL);
		RectTransform_t351 * L_17 = ___rect;
		RectTransform_t351 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t85  L_19 = RectTransform_get_sizeDelta_m2798(L_18, /*hidden argument*/NULL);
		Vector2_t85  L_20 = RectTransformUtility_GetTransposed_m4721(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m2778(L_17, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t351 * L_22 = ___rect;
		RectTransform_t351 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t85  L_24 = RectTransform_get_anchoredPosition_m2838(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t539_il2cpp_TypeInfo_var);
		Vector2_t85  L_25 = RectTransformUtility_GetTransposed_m4721(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m2785(L_22, L_25, /*hidden argument*/NULL);
		RectTransform_t351 * L_26 = ___rect;
		RectTransform_t351 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t85  L_28 = RectTransform_get_anchorMin_m2836(L_27, /*hidden argument*/NULL);
		Vector2_t85  L_29 = RectTransformUtility_GetTransposed_m4721(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m2783(L_26, L_29, /*hidden argument*/NULL);
		RectTransform_t351 * L_30 = ___rect;
		RectTransform_t351 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t85  L_32 = RectTransform_get_anchorMax_m2837(L_31, /*hidden argument*/NULL);
		Vector2_t85  L_33 = RectTransformUtility_GetTransposed_m4721(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m2784(L_30, L_33, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t85  RectTransformUtility_GetTransposed_m4721 (Object_t * __this /* static, unused */, Vector2_t85  ___input, const MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t85  L_2 = {0};
		Vector2__ctor_m305(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// System.Void UnityEngine.Event::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
extern "C" void Event__ctor_m2947 (Event_t400 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		Event_Init_m4753(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::.ctor(UnityEngine.Event)
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral399;
extern "C" void Event__ctor_m4722 (Event_t400 * __this, Event_t400 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		_stringLiteral399 = il2cpp_codegen_string_literal_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		Event_t400 * L_0 = ___other;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t568 * L_1 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_1, _stringLiteral399, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Event_t400 * L_2 = ___other;
		Event_InitCopy_m4755(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::.ctor(System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Event__ctor_m4723 (Event_t400 * __this, IntPtr_t ___ptr, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___ptr;
		Event_InitPtr_m4756(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m4724 (Event_t400 * __this, const MethodInfo* method)
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
		Event_Cleanup_m4754(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t85  Event_get_mousePosition_m4725 (Event_t400 * __this, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		Event_Internal_GetMousePosition_m4761(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Event::set_mousePosition(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void Event_set_mousePosition_m4726 (Event_t400 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___value;
		Event_Internal_SetMousePosition_m4759(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
extern "C" Vector2_t85  Event_get_delta_m4727 (Event_t400 * __this, const MethodInfo* method)
{
	Vector2_t85  V_0 = {0};
	{
		Event_Internal_GetMouseDelta_m4764(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Event::set_delta(UnityEngine.Vector2)
extern "C" void Event_set_delta_m4728 (Event_t400 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		Vector2_t85  L_0 = ___value;
		Event_Internal_SetMouseDelta_m4762(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Ray UnityEngine.Event::get_mouseRay()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern "C" Ray_t529  Event_get_mouseRay_m4729 (Event_t400 * __this, const MethodInfo* method)
{
	{
		Vector3_t28  L_0 = Vector3_get_up_m311(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t28  L_1 = Vector3_get_up_m311(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t529  L_2 = {0};
		Ray__ctor_m3964(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Event::set_mouseRay(UnityEngine.Ray)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern "C" void Event_set_mouseRay_m4730 (Event_t400 * __this, Ray_t529  ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_shift()
extern "C" bool Event_get_shift_m4731 (Event_t400 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_shift(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Event_set_shift_m4732 (Event_t400 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-2))), /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_2|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_control()
extern "C" bool Event_get_control_m4733 (Event_t400 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_control(System.Boolean)
extern "C" void Event_set_control_m4734 (Event_t400 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-3))), /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_2|(int32_t)2)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_alt()
extern "C" bool Event_get_alt_m4735 (Event_t400 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_alt(System.Boolean)
extern "C" void Event_set_alt_m4736 (Event_t400 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-5))), /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_2|(int32_t)4)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_command()
extern "C" bool Event_get_command_m4737 (Event_t400 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_command(System.Boolean)
extern "C" void Event_set_command_m4738 (Event_t400 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-9))), /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_2|(int32_t)8)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_capsLock()
extern "C" bool Event_get_capsLock_m4739 (Event_t400 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_capsLock(System.Boolean)
extern "C" void Event_set_capsLock_m4740 (Event_t400 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-33))), /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_2|(int32_t)((int32_t)32))), /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_numeric()
extern "C" bool Event_get_numeric_m4741 (Event_t400 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_numeric(System.Boolean)
extern "C" void Event_set_numeric_m4742 (Event_t400 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-2))), /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m4767(__this, ((int32_t)((int32_t)L_2|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_functionKey()
extern "C" bool Event_get_functionKey_m4743 (Event_t400 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Event UnityEngine.Event::get_current()
extern TypeInfo* Event_t400_il2cpp_TypeInfo_var;
extern "C" Event_t400 * Event_get_current_m4744 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	{
		Event_t400 * L_0 = ((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___s_Current_1;
		return L_0;
	}
}
// System.Void UnityEngine.Event::set_current(UnityEngine.Event)
extern TypeInfo* Event_t400_il2cpp_TypeInfo_var;
extern "C" void Event_set_current_m4745 (Object_t * __this /* static, unused */, Event_t400 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	{
		Event_t400 * L_0 = ___value;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Event_t400 * L_1 = ___value;
		((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___s_Current_1 = L_1;
		goto IL_001b;
	}

IL_0011:
	{
		Event_t400 * L_2 = ((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___s_Current_1 = L_2;
	}

IL_001b:
	{
		Event_t400 * L_3 = ((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___s_Current_1;
		NullCheck(L_3);
		IntPtr_t L_4 = (L_3->___m_Ptr_0);
		Event_Internal_SetNativeEvent_m4775(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern TypeInfo* Event_t400_il2cpp_TypeInfo_var;
extern "C" void Event_Internal_MakeMasterEventCurrent_m4746 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	{
		Event_t400 * L_0 = ((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Event_t400 * L_1 = (Event_t400 *)il2cpp_codegen_object_new (Event_t400_il2cpp_TypeInfo_var);
		Event__ctor_m2947(L_1, /*hidden argument*/NULL);
		((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2 = L_1;
	}

IL_0014:
	{
		Event_t400 * L_2 = ((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___s_Current_1 = L_2;
		Event_t400 * L_3 = ((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		NullCheck(L_3);
		IntPtr_t L_4 = (L_3->___m_Ptr_0);
		Event_Internal_SetNativeEvent_m4775(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m4747 (Event_t400 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Event_get_type_m2986(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m4748 (Event_t400 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = Event_get_type_m2986(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		return G_B5_0;
	}
}
// UnityEngine.Event UnityEngine.Event::KeyboardEvent(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern const Il2CppType* KeyCode_t826_0_0_0_var;
extern TypeInfo* Event_t400_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t402_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t959_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t246_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2988_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral400;
extern Il2CppCodeGenString* _stringLiteral401;
extern Il2CppCodeGenString* _stringLiteral402;
extern Il2CppCodeGenString* _stringLiteral403;
extern Il2CppCodeGenString* _stringLiteral404;
extern Il2CppCodeGenString* _stringLiteral405;
extern Il2CppCodeGenString* _stringLiteral406;
extern Il2CppCodeGenString* _stringLiteral407;
extern Il2CppCodeGenString* _stringLiteral408;
extern Il2CppCodeGenString* _stringLiteral409;
extern Il2CppCodeGenString* _stringLiteral410;
extern Il2CppCodeGenString* _stringLiteral411;
extern Il2CppCodeGenString* _stringLiteral412;
extern Il2CppCodeGenString* _stringLiteral413;
extern Il2CppCodeGenString* _stringLiteral414;
extern Il2CppCodeGenString* _stringLiteral415;
extern Il2CppCodeGenString* _stringLiteral416;
extern Il2CppCodeGenString* _stringLiteral417;
extern Il2CppCodeGenString* _stringLiteral418;
extern Il2CppCodeGenString* _stringLiteral419;
extern Il2CppCodeGenString* _stringLiteral420;
extern Il2CppCodeGenString* _stringLiteral421;
extern Il2CppCodeGenString* _stringLiteral422;
extern Il2CppCodeGenString* _stringLiteral423;
extern Il2CppCodeGenString* _stringLiteral424;
extern Il2CppCodeGenString* _stringLiteral425;
extern Il2CppCodeGenString* _stringLiteral426;
extern Il2CppCodeGenString* _stringLiteral427;
extern Il2CppCodeGenString* _stringLiteral428;
extern Il2CppCodeGenString* _stringLiteral429;
extern Il2CppCodeGenString* _stringLiteral430;
extern Il2CppCodeGenString* _stringLiteral431;
extern Il2CppCodeGenString* _stringLiteral432;
extern Il2CppCodeGenString* _stringLiteral433;
extern Il2CppCodeGenString* _stringLiteral434;
extern Il2CppCodeGenString* _stringLiteral435;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral437;
extern Il2CppCodeGenString* _stringLiteral438;
extern Il2CppCodeGenString* _stringLiteral439;
extern Il2CppCodeGenString* _stringLiteral440;
extern Il2CppCodeGenString* _stringLiteral441;
extern Il2CppCodeGenString* _stringLiteral442;
extern Il2CppCodeGenString* _stringLiteral443;
extern Il2CppCodeGenString* _stringLiteral444;
extern Il2CppCodeGenString* _stringLiteral445;
extern Il2CppCodeGenString* _stringLiteral446;
extern Il2CppCodeGenString* _stringLiteral447;
extern Il2CppCodeGenString* _stringLiteral448;
extern Il2CppCodeGenString* _stringLiteral449;
extern "C" Event_t400 * Event_KeyboardEvent_m4749 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyCode_t826_0_0_0_var = il2cpp_codegen_type_from_index(519);
		Event_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Enum_t959_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		Int32_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Dictionary_2__ctor_m2988_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483923);
		_stringLiteral400 = il2cpp_codegen_string_literal_from_index(400);
		_stringLiteral401 = il2cpp_codegen_string_literal_from_index(401);
		_stringLiteral402 = il2cpp_codegen_string_literal_from_index(402);
		_stringLiteral403 = il2cpp_codegen_string_literal_from_index(403);
		_stringLiteral404 = il2cpp_codegen_string_literal_from_index(404);
		_stringLiteral405 = il2cpp_codegen_string_literal_from_index(405);
		_stringLiteral406 = il2cpp_codegen_string_literal_from_index(406);
		_stringLiteral407 = il2cpp_codegen_string_literal_from_index(407);
		_stringLiteral408 = il2cpp_codegen_string_literal_from_index(408);
		_stringLiteral409 = il2cpp_codegen_string_literal_from_index(409);
		_stringLiteral410 = il2cpp_codegen_string_literal_from_index(410);
		_stringLiteral411 = il2cpp_codegen_string_literal_from_index(411);
		_stringLiteral412 = il2cpp_codegen_string_literal_from_index(412);
		_stringLiteral413 = il2cpp_codegen_string_literal_from_index(413);
		_stringLiteral414 = il2cpp_codegen_string_literal_from_index(414);
		_stringLiteral415 = il2cpp_codegen_string_literal_from_index(415);
		_stringLiteral416 = il2cpp_codegen_string_literal_from_index(416);
		_stringLiteral417 = il2cpp_codegen_string_literal_from_index(417);
		_stringLiteral418 = il2cpp_codegen_string_literal_from_index(418);
		_stringLiteral419 = il2cpp_codegen_string_literal_from_index(419);
		_stringLiteral420 = il2cpp_codegen_string_literal_from_index(420);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		_stringLiteral422 = il2cpp_codegen_string_literal_from_index(422);
		_stringLiteral423 = il2cpp_codegen_string_literal_from_index(423);
		_stringLiteral424 = il2cpp_codegen_string_literal_from_index(424);
		_stringLiteral425 = il2cpp_codegen_string_literal_from_index(425);
		_stringLiteral426 = il2cpp_codegen_string_literal_from_index(426);
		_stringLiteral427 = il2cpp_codegen_string_literal_from_index(427);
		_stringLiteral428 = il2cpp_codegen_string_literal_from_index(428);
		_stringLiteral429 = il2cpp_codegen_string_literal_from_index(429);
		_stringLiteral430 = il2cpp_codegen_string_literal_from_index(430);
		_stringLiteral431 = il2cpp_codegen_string_literal_from_index(431);
		_stringLiteral432 = il2cpp_codegen_string_literal_from_index(432);
		_stringLiteral433 = il2cpp_codegen_string_literal_from_index(433);
		_stringLiteral434 = il2cpp_codegen_string_literal_from_index(434);
		_stringLiteral435 = il2cpp_codegen_string_literal_from_index(435);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		_stringLiteral439 = il2cpp_codegen_string_literal_from_index(439);
		_stringLiteral440 = il2cpp_codegen_string_literal_from_index(440);
		_stringLiteral441 = il2cpp_codegen_string_literal_from_index(441);
		_stringLiteral442 = il2cpp_codegen_string_literal_from_index(442);
		_stringLiteral443 = il2cpp_codegen_string_literal_from_index(443);
		_stringLiteral444 = il2cpp_codegen_string_literal_from_index(444);
		_stringLiteral445 = il2cpp_codegen_string_literal_from_index(445);
		_stringLiteral446 = il2cpp_codegen_string_literal_from_index(446);
		_stringLiteral447 = il2cpp_codegen_string_literal_from_index(447);
		_stringLiteral448 = il2cpp_codegen_string_literal_from_index(448);
		_stringLiteral449 = il2cpp_codegen_string_literal_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	Event_t400 * V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	uint16_t V_4 = 0x0;
	String_t* V_5 = {0};
	Dictionary_2_t402 * V_6 = {0};
	int32_t V_7 = 0;
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Event_t400 * L_0 = (Event_t400 *)il2cpp_codegen_object_new (Event_t400_il2cpp_TypeInfo_var);
		Event__ctor_m2947(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Event_t400 * L_1 = V_0;
		NullCheck(L_1);
		Event_set_type_m4757(L_1, 4, /*hidden argument*/NULL);
		String_t* L_2 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m3000(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Event_t400 * L_4 = V_0;
		return L_4;
	}

IL_001a:
	{
		V_1 = 0;
		V_2 = 0;
	}

IL_001e:
	{
		V_2 = 1;
		int32_t L_5 = V_1;
		String_t* L_6 = ___key;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m2952(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		V_2 = 0;
		goto IL_00cd;
	}

IL_0033:
	{
		String_t* L_8 = ___key;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m2970(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		uint16_t L_11 = V_4;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)35))) == 0)
		{
			goto IL_00a9;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)35))) == 1)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)35))) == 2)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)35))) == 3)
		{
			goto IL_0064;
		}
	}

IL_0056:
	{
		uint16_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)94))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_00c0;
	}

IL_0064:
	{
		Event_t400 * L_13 = V_0;
		Event_t400 * L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15 = Event_get_modifiers_m2981(L_14, /*hidden argument*/NULL);
		NullCheck(L_14);
		Event_set_modifiers_m4767(L_14, ((int32_t)((int32_t)L_15|(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
		goto IL_00c7;
	}

IL_007b:
	{
		Event_t400 * L_17 = V_0;
		Event_t400 * L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = Event_get_modifiers_m2981(L_18, /*hidden argument*/NULL);
		NullCheck(L_18);
		Event_set_modifiers_m4767(L_18, ((int32_t)((int32_t)L_19|(int32_t)2)), /*hidden argument*/NULL);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
		goto IL_00c7;
	}

IL_0092:
	{
		Event_t400 * L_21 = V_0;
		Event_t400 * L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = Event_get_modifiers_m2981(L_22, /*hidden argument*/NULL);
		NullCheck(L_22);
		Event_set_modifiers_m4767(L_22, ((int32_t)((int32_t)L_23|(int32_t)8)), /*hidden argument*/NULL);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
		goto IL_00c7;
	}

IL_00a9:
	{
		Event_t400 * L_25 = V_0;
		Event_t400 * L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27 = Event_get_modifiers_m2981(L_26, /*hidden argument*/NULL);
		NullCheck(L_26);
		Event_set_modifiers_m4767(L_26, ((int32_t)((int32_t)L_27|(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)((int32_t)L_28+(int32_t)1));
		goto IL_00c7;
	}

IL_00c0:
	{
		V_2 = 0;
		goto IL_00c7;
	}

IL_00c7:
	{
		bool L_29 = V_2;
		if (L_29)
		{
			goto IL_001e;
		}
	}

IL_00cd:
	{
		String_t* L_30 = ___key;
		int32_t L_31 = V_1;
		String_t* L_32 = ___key;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_m2952(L_32, /*hidden argument*/NULL);
		int32_t L_34 = V_1;
		NullCheck(L_30);
		String_t* L_35 = String_Substring_m2971(L_30, L_31, ((int32_t)((int32_t)L_33-(int32_t)L_34)), /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_36 = String_ToLower_m3828(L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		String_t* L_37 = V_3;
		V_5 = L_37;
		String_t* L_38 = V_5;
		if (!L_38)
		{
			goto IL_09e5;
		}
	}
	{
		Dictionary_2_t402 * L_39 = ((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_3;
		if (L_39)
		{
			goto IL_03ab;
		}
	}
	{
		Dictionary_2_t402 * L_40 = (Dictionary_2_t402 *)il2cpp_codegen_object_new (Dictionary_2_t402_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2988(L_40, ((int32_t)49), /*hidden argument*/Dictionary_2__ctor_m2988_MethodInfo_var);
		V_6 = L_40;
		Dictionary_2_t402 * L_41 = V_6;
		NullCheck(L_41);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_41, _stringLiteral400, 0);
		Dictionary_2_t402 * L_42 = V_6;
		NullCheck(L_42);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_42, _stringLiteral401, 1);
		Dictionary_2_t402 * L_43 = V_6;
		NullCheck(L_43);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_43, _stringLiteral402, 2);
		Dictionary_2_t402 * L_44 = V_6;
		NullCheck(L_44);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_44, _stringLiteral403, 3);
		Dictionary_2_t402 * L_45 = V_6;
		NullCheck(L_45);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_45, _stringLiteral404, 4);
		Dictionary_2_t402 * L_46 = V_6;
		NullCheck(L_46);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_46, _stringLiteral405, 5);
		Dictionary_2_t402 * L_47 = V_6;
		NullCheck(L_47);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_47, _stringLiteral406, 6);
		Dictionary_2_t402 * L_48 = V_6;
		NullCheck(L_48);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_48, _stringLiteral407, 7);
		Dictionary_2_t402 * L_49 = V_6;
		NullCheck(L_49);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_49, _stringLiteral408, 8);
		Dictionary_2_t402 * L_50 = V_6;
		NullCheck(L_50);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_50, _stringLiteral409, ((int32_t)9));
		Dictionary_2_t402 * L_51 = V_6;
		NullCheck(L_51);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_51, _stringLiteral410, ((int32_t)10));
		Dictionary_2_t402 * L_52 = V_6;
		NullCheck(L_52);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_52, _stringLiteral411, ((int32_t)11));
		Dictionary_2_t402 * L_53 = V_6;
		NullCheck(L_53);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_53, _stringLiteral412, ((int32_t)12));
		Dictionary_2_t402 * L_54 = V_6;
		NullCheck(L_54);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_54, _stringLiteral413, ((int32_t)13));
		Dictionary_2_t402 * L_55 = V_6;
		NullCheck(L_55);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_55, _stringLiteral414, ((int32_t)14));
		Dictionary_2_t402 * L_56 = V_6;
		NullCheck(L_56);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_56, _stringLiteral415, ((int32_t)15));
		Dictionary_2_t402 * L_57 = V_6;
		NullCheck(L_57);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_57, _stringLiteral416, ((int32_t)16));
		Dictionary_2_t402 * L_58 = V_6;
		NullCheck(L_58);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_58, _stringLiteral417, ((int32_t)17));
		Dictionary_2_t402 * L_59 = V_6;
		NullCheck(L_59);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_59, _stringLiteral418, ((int32_t)18));
		Dictionary_2_t402 * L_60 = V_6;
		NullCheck(L_60);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_60, _stringLiteral419, ((int32_t)19));
		Dictionary_2_t402 * L_61 = V_6;
		NullCheck(L_61);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_61, _stringLiteral420, ((int32_t)20));
		Dictionary_2_t402 * L_62 = V_6;
		NullCheck(L_62);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_62, _stringLiteral421, ((int32_t)21));
		Dictionary_2_t402 * L_63 = V_6;
		NullCheck(L_63);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_63, _stringLiteral422, ((int32_t)22));
		Dictionary_2_t402 * L_64 = V_6;
		NullCheck(L_64);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_64, _stringLiteral423, ((int32_t)23));
		Dictionary_2_t402 * L_65 = V_6;
		NullCheck(L_65);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_65, _stringLiteral424, ((int32_t)24));
		Dictionary_2_t402 * L_66 = V_6;
		NullCheck(L_66);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_66, _stringLiteral425, ((int32_t)25));
		Dictionary_2_t402 * L_67 = V_6;
		NullCheck(L_67);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_67, _stringLiteral426, ((int32_t)26));
		Dictionary_2_t402 * L_68 = V_6;
		NullCheck(L_68);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_68, _stringLiteral427, ((int32_t)27));
		Dictionary_2_t402 * L_69 = V_6;
		NullCheck(L_69);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_69, _stringLiteral428, ((int32_t)28));
		Dictionary_2_t402 * L_70 = V_6;
		NullCheck(L_70);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_70, _stringLiteral429, ((int32_t)29));
		Dictionary_2_t402 * L_71 = V_6;
		NullCheck(L_71);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_71, _stringLiteral430, ((int32_t)30));
		Dictionary_2_t402 * L_72 = V_6;
		NullCheck(L_72);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_72, _stringLiteral431, ((int32_t)31));
		Dictionary_2_t402 * L_73 = V_6;
		NullCheck(L_73);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_73, _stringLiteral432, ((int32_t)32));
		Dictionary_2_t402 * L_74 = V_6;
		NullCheck(L_74);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_74, _stringLiteral433, ((int32_t)33));
		Dictionary_2_t402 * L_75 = V_6;
		NullCheck(L_75);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_75, _stringLiteral434, ((int32_t)34));
		Dictionary_2_t402 * L_76 = V_6;
		NullCheck(L_76);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_76, _stringLiteral435, ((int32_t)35));
		Dictionary_2_t402 * L_77 = V_6;
		NullCheck(L_77);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_77, _stringLiteral436, ((int32_t)36));
		Dictionary_2_t402 * L_78 = V_6;
		NullCheck(L_78);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_78, _stringLiteral437, ((int32_t)37));
		Dictionary_2_t402 * L_79 = V_6;
		NullCheck(L_79);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_79, _stringLiteral438, ((int32_t)38));
		Dictionary_2_t402 * L_80 = V_6;
		NullCheck(L_80);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_80, _stringLiteral439, ((int32_t)39));
		Dictionary_2_t402 * L_81 = V_6;
		NullCheck(L_81);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_81, _stringLiteral440, ((int32_t)40));
		Dictionary_2_t402 * L_82 = V_6;
		NullCheck(L_82);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_82, _stringLiteral441, ((int32_t)41));
		Dictionary_2_t402 * L_83 = V_6;
		NullCheck(L_83);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_83, _stringLiteral442, ((int32_t)42));
		Dictionary_2_t402 * L_84 = V_6;
		NullCheck(L_84);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_84, _stringLiteral443, ((int32_t)43));
		Dictionary_2_t402 * L_85 = V_6;
		NullCheck(L_85);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_85, _stringLiteral444, ((int32_t)44));
		Dictionary_2_t402 * L_86 = V_6;
		NullCheck(L_86);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_86, _stringLiteral445, ((int32_t)45));
		Dictionary_2_t402 * L_87 = V_6;
		NullCheck(L_87);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_87, _stringLiteral446, ((int32_t)46));
		Dictionary_2_t402 * L_88 = V_6;
		NullCheck(L_88);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_88, _stringLiteral447, ((int32_t)47));
		Dictionary_2_t402 * L_89 = V_6;
		NullCheck(L_89);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_89, _stringLiteral448, ((int32_t)48));
		Dictionary_2_t402 * L_90 = V_6;
		((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_3 = L_90;
	}

IL_03ab:
	{
		Dictionary_2_t402 * L_91 = ((Event_t400_StaticFields*)Event_t400_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_3;
		String_t* L_92 = V_5;
		NullCheck(L_91);
		bool L_93 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_91, L_92, (&V_7));
		if (!L_93)
		{
			goto IL_09e5;
		}
	}
	{
		int32_t L_94 = V_7;
		if (L_94 == 0)
		{
			goto IL_048e;
		}
		if (L_94 == 1)
		{
			goto IL_04a6;
		}
		if (L_94 == 2)
		{
			goto IL_04be;
		}
		if (L_94 == 3)
		{
			goto IL_04d6;
		}
		if (L_94 == 4)
		{
			goto IL_04ee;
		}
		if (L_94 == 5)
		{
			goto IL_0506;
		}
		if (L_94 == 6)
		{
			goto IL_051e;
		}
		if (L_94 == 7)
		{
			goto IL_0536;
		}
		if (L_94 == 8)
		{
			goto IL_054e;
		}
		if (L_94 == 9)
		{
			goto IL_0566;
		}
		if (L_94 == 10)
		{
			goto IL_057e;
		}
		if (L_94 == 11)
		{
			goto IL_0596;
		}
		if (L_94 == 12)
		{
			goto IL_05ae;
		}
		if (L_94 == 13)
		{
			goto IL_05c6;
		}
		if (L_94 == 14)
		{
			goto IL_05de;
		}
		if (L_94 == 15)
		{
			goto IL_05f6;
		}
		if (L_94 == 16)
		{
			goto IL_060e;
		}
		if (L_94 == 17)
		{
			goto IL_0626;
		}
		if (L_94 == 18)
		{
			goto IL_0645;
		}
		if (L_94 == 19)
		{
			goto IL_0664;
		}
		if (L_94 == 20)
		{
			goto IL_0683;
		}
		if (L_94 == 21)
		{
			goto IL_06a2;
		}
		if (L_94 == 22)
		{
			goto IL_06c1;
		}
		if (L_94 == 23)
		{
			goto IL_06e0;
		}
		if (L_94 == 24)
		{
			goto IL_06ff;
		}
		if (L_94 == 25)
		{
			goto IL_071e;
		}
		if (L_94 == 26)
		{
			goto IL_073d;
		}
		if (L_94 == 27)
		{
			goto IL_075c;
		}
		if (L_94 == 28)
		{
			goto IL_077b;
		}
		if (L_94 == 29)
		{
			goto IL_0796;
		}
		if (L_94 == 30)
		{
			goto IL_07b2;
		}
		if (L_94 == 31)
		{
			goto IL_07bf;
		}
		if (L_94 == 32)
		{
			goto IL_07de;
		}
		if (L_94 == 33)
		{
			goto IL_07fd;
		}
		if (L_94 == 34)
		{
			goto IL_081c;
		}
		if (L_94 == 35)
		{
			goto IL_083b;
		}
		if (L_94 == 36)
		{
			goto IL_085a;
		}
		if (L_94 == 37)
		{
			goto IL_0879;
		}
		if (L_94 == 38)
		{
			goto IL_0898;
		}
		if (L_94 == 39)
		{
			goto IL_08b7;
		}
		if (L_94 == 40)
		{
			goto IL_08d6;
		}
		if (L_94 == 41)
		{
			goto IL_08f5;
		}
		if (L_94 == 42)
		{
			goto IL_0914;
		}
		if (L_94 == 43)
		{
			goto IL_0933;
		}
		if (L_94 == 44)
		{
			goto IL_0952;
		}
		if (L_94 == 45)
		{
			goto IL_0971;
		}
		if (L_94 == 46)
		{
			goto IL_0990;
		}
		if (L_94 == 47)
		{
			goto IL_099d;
		}
		if (L_94 == 48)
		{
			goto IL_09c1;
		}
	}
	{
		goto IL_09e5;
	}

IL_048e:
	{
		Event_t400 * L_95 = V_0;
		NullCheck(L_95);
		Event_set_character_m4772(L_95, ((int32_t)48), /*hidden argument*/NULL);
		Event_t400 * L_96 = V_0;
		NullCheck(L_96);
		Event_set_keyCode_m4774(L_96, ((int32_t)256), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_04a6:
	{
		Event_t400 * L_97 = V_0;
		NullCheck(L_97);
		Event_set_character_m4772(L_97, ((int32_t)49), /*hidden argument*/NULL);
		Event_t400 * L_98 = V_0;
		NullCheck(L_98);
		Event_set_keyCode_m4774(L_98, ((int32_t)257), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_04be:
	{
		Event_t400 * L_99 = V_0;
		NullCheck(L_99);
		Event_set_character_m4772(L_99, ((int32_t)50), /*hidden argument*/NULL);
		Event_t400 * L_100 = V_0;
		NullCheck(L_100);
		Event_set_keyCode_m4774(L_100, ((int32_t)258), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_04d6:
	{
		Event_t400 * L_101 = V_0;
		NullCheck(L_101);
		Event_set_character_m4772(L_101, ((int32_t)51), /*hidden argument*/NULL);
		Event_t400 * L_102 = V_0;
		NullCheck(L_102);
		Event_set_keyCode_m4774(L_102, ((int32_t)259), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_04ee:
	{
		Event_t400 * L_103 = V_0;
		NullCheck(L_103);
		Event_set_character_m4772(L_103, ((int32_t)52), /*hidden argument*/NULL);
		Event_t400 * L_104 = V_0;
		NullCheck(L_104);
		Event_set_keyCode_m4774(L_104, ((int32_t)260), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0506:
	{
		Event_t400 * L_105 = V_0;
		NullCheck(L_105);
		Event_set_character_m4772(L_105, ((int32_t)53), /*hidden argument*/NULL);
		Event_t400 * L_106 = V_0;
		NullCheck(L_106);
		Event_set_keyCode_m4774(L_106, ((int32_t)261), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_051e:
	{
		Event_t400 * L_107 = V_0;
		NullCheck(L_107);
		Event_set_character_m4772(L_107, ((int32_t)54), /*hidden argument*/NULL);
		Event_t400 * L_108 = V_0;
		NullCheck(L_108);
		Event_set_keyCode_m4774(L_108, ((int32_t)262), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0536:
	{
		Event_t400 * L_109 = V_0;
		NullCheck(L_109);
		Event_set_character_m4772(L_109, ((int32_t)55), /*hidden argument*/NULL);
		Event_t400 * L_110 = V_0;
		NullCheck(L_110);
		Event_set_keyCode_m4774(L_110, ((int32_t)263), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_054e:
	{
		Event_t400 * L_111 = V_0;
		NullCheck(L_111);
		Event_set_character_m4772(L_111, ((int32_t)56), /*hidden argument*/NULL);
		Event_t400 * L_112 = V_0;
		NullCheck(L_112);
		Event_set_keyCode_m4774(L_112, ((int32_t)264), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0566:
	{
		Event_t400 * L_113 = V_0;
		NullCheck(L_113);
		Event_set_character_m4772(L_113, ((int32_t)57), /*hidden argument*/NULL);
		Event_t400 * L_114 = V_0;
		NullCheck(L_114);
		Event_set_keyCode_m4774(L_114, ((int32_t)265), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_057e:
	{
		Event_t400 * L_115 = V_0;
		NullCheck(L_115);
		Event_set_character_m4772(L_115, ((int32_t)46), /*hidden argument*/NULL);
		Event_t400 * L_116 = V_0;
		NullCheck(L_116);
		Event_set_keyCode_m4774(L_116, ((int32_t)266), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0596:
	{
		Event_t400 * L_117 = V_0;
		NullCheck(L_117);
		Event_set_character_m4772(L_117, ((int32_t)47), /*hidden argument*/NULL);
		Event_t400 * L_118 = V_0;
		NullCheck(L_118);
		Event_set_keyCode_m4774(L_118, ((int32_t)267), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_05ae:
	{
		Event_t400 * L_119 = V_0;
		NullCheck(L_119);
		Event_set_character_m4772(L_119, ((int32_t)45), /*hidden argument*/NULL);
		Event_t400 * L_120 = V_0;
		NullCheck(L_120);
		Event_set_keyCode_m4774(L_120, ((int32_t)269), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_05c6:
	{
		Event_t400 * L_121 = V_0;
		NullCheck(L_121);
		Event_set_character_m4772(L_121, ((int32_t)43), /*hidden argument*/NULL);
		Event_t400 * L_122 = V_0;
		NullCheck(L_122);
		Event_set_keyCode_m4774(L_122, ((int32_t)270), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_05de:
	{
		Event_t400 * L_123 = V_0;
		NullCheck(L_123);
		Event_set_character_m4772(L_123, ((int32_t)61), /*hidden argument*/NULL);
		Event_t400 * L_124 = V_0;
		NullCheck(L_124);
		Event_set_keyCode_m4774(L_124, ((int32_t)272), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_05f6:
	{
		Event_t400 * L_125 = V_0;
		NullCheck(L_125);
		Event_set_character_m4772(L_125, ((int32_t)61), /*hidden argument*/NULL);
		Event_t400 * L_126 = V_0;
		NullCheck(L_126);
		Event_set_keyCode_m4774(L_126, ((int32_t)272), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_060e:
	{
		Event_t400 * L_127 = V_0;
		NullCheck(L_127);
		Event_set_character_m4772(L_127, ((int32_t)10), /*hidden argument*/NULL);
		Event_t400 * L_128 = V_0;
		NullCheck(L_128);
		Event_set_keyCode_m4774(L_128, ((int32_t)271), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0626:
	{
		Event_t400 * L_129 = V_0;
		NullCheck(L_129);
		Event_set_keyCode_m4774(L_129, ((int32_t)273), /*hidden argument*/NULL);
		Event_t400 * L_130 = V_0;
		Event_t400 * L_131 = L_130;
		NullCheck(L_131);
		int32_t L_132 = Event_get_modifiers_m2981(L_131, /*hidden argument*/NULL);
		NullCheck(L_131);
		Event_set_modifiers_m4767(L_131, ((int32_t)((int32_t)L_132|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0645:
	{
		Event_t400 * L_133 = V_0;
		NullCheck(L_133);
		Event_set_keyCode_m4774(L_133, ((int32_t)274), /*hidden argument*/NULL);
		Event_t400 * L_134 = V_0;
		Event_t400 * L_135 = L_134;
		NullCheck(L_135);
		int32_t L_136 = Event_get_modifiers_m2981(L_135, /*hidden argument*/NULL);
		NullCheck(L_135);
		Event_set_modifiers_m4767(L_135, ((int32_t)((int32_t)L_136|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0664:
	{
		Event_t400 * L_137 = V_0;
		NullCheck(L_137);
		Event_set_keyCode_m4774(L_137, ((int32_t)276), /*hidden argument*/NULL);
		Event_t400 * L_138 = V_0;
		Event_t400 * L_139 = L_138;
		NullCheck(L_139);
		int32_t L_140 = Event_get_modifiers_m2981(L_139, /*hidden argument*/NULL);
		NullCheck(L_139);
		Event_set_modifiers_m4767(L_139, ((int32_t)((int32_t)L_140|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0683:
	{
		Event_t400 * L_141 = V_0;
		NullCheck(L_141);
		Event_set_keyCode_m4774(L_141, ((int32_t)275), /*hidden argument*/NULL);
		Event_t400 * L_142 = V_0;
		Event_t400 * L_143 = L_142;
		NullCheck(L_143);
		int32_t L_144 = Event_get_modifiers_m2981(L_143, /*hidden argument*/NULL);
		NullCheck(L_143);
		Event_set_modifiers_m4767(L_143, ((int32_t)((int32_t)L_144|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_06a2:
	{
		Event_t400 * L_145 = V_0;
		NullCheck(L_145);
		Event_set_keyCode_m4774(L_145, ((int32_t)277), /*hidden argument*/NULL);
		Event_t400 * L_146 = V_0;
		Event_t400 * L_147 = L_146;
		NullCheck(L_147);
		int32_t L_148 = Event_get_modifiers_m2981(L_147, /*hidden argument*/NULL);
		NullCheck(L_147);
		Event_set_modifiers_m4767(L_147, ((int32_t)((int32_t)L_148|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_06c1:
	{
		Event_t400 * L_149 = V_0;
		NullCheck(L_149);
		Event_set_keyCode_m4774(L_149, ((int32_t)278), /*hidden argument*/NULL);
		Event_t400 * L_150 = V_0;
		Event_t400 * L_151 = L_150;
		NullCheck(L_151);
		int32_t L_152 = Event_get_modifiers_m2981(L_151, /*hidden argument*/NULL);
		NullCheck(L_151);
		Event_set_modifiers_m4767(L_151, ((int32_t)((int32_t)L_152|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_06e0:
	{
		Event_t400 * L_153 = V_0;
		NullCheck(L_153);
		Event_set_keyCode_m4774(L_153, ((int32_t)279), /*hidden argument*/NULL);
		Event_t400 * L_154 = V_0;
		Event_t400 * L_155 = L_154;
		NullCheck(L_155);
		int32_t L_156 = Event_get_modifiers_m2981(L_155, /*hidden argument*/NULL);
		NullCheck(L_155);
		Event_set_modifiers_m4767(L_155, ((int32_t)((int32_t)L_156|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_06ff:
	{
		Event_t400 * L_157 = V_0;
		NullCheck(L_157);
		Event_set_keyCode_m4774(L_157, ((int32_t)281), /*hidden argument*/NULL);
		Event_t400 * L_158 = V_0;
		Event_t400 * L_159 = L_158;
		NullCheck(L_159);
		int32_t L_160 = Event_get_modifiers_m2981(L_159, /*hidden argument*/NULL);
		NullCheck(L_159);
		Event_set_modifiers_m4767(L_159, ((int32_t)((int32_t)L_160|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_071e:
	{
		Event_t400 * L_161 = V_0;
		NullCheck(L_161);
		Event_set_keyCode_m4774(L_161, ((int32_t)280), /*hidden argument*/NULL);
		Event_t400 * L_162 = V_0;
		Event_t400 * L_163 = L_162;
		NullCheck(L_163);
		int32_t L_164 = Event_get_modifiers_m2981(L_163, /*hidden argument*/NULL);
		NullCheck(L_163);
		Event_set_modifiers_m4767(L_163, ((int32_t)((int32_t)L_164|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_073d:
	{
		Event_t400 * L_165 = V_0;
		NullCheck(L_165);
		Event_set_keyCode_m4774(L_165, ((int32_t)280), /*hidden argument*/NULL);
		Event_t400 * L_166 = V_0;
		Event_t400 * L_167 = L_166;
		NullCheck(L_167);
		int32_t L_168 = Event_get_modifiers_m2981(L_167, /*hidden argument*/NULL);
		NullCheck(L_167);
		Event_set_modifiers_m4767(L_167, ((int32_t)((int32_t)L_168|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_075c:
	{
		Event_t400 * L_169 = V_0;
		NullCheck(L_169);
		Event_set_keyCode_m4774(L_169, ((int32_t)281), /*hidden argument*/NULL);
		Event_t400 * L_170 = V_0;
		Event_t400 * L_171 = L_170;
		NullCheck(L_171);
		int32_t L_172 = Event_get_modifiers_m2981(L_171, /*hidden argument*/NULL);
		NullCheck(L_171);
		Event_set_modifiers_m4767(L_171, ((int32_t)((int32_t)L_172|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_077b:
	{
		Event_t400 * L_173 = V_0;
		NullCheck(L_173);
		Event_set_keyCode_m4774(L_173, 8, /*hidden argument*/NULL);
		Event_t400 * L_174 = V_0;
		Event_t400 * L_175 = L_174;
		NullCheck(L_175);
		int32_t L_176 = Event_get_modifiers_m2981(L_175, /*hidden argument*/NULL);
		NullCheck(L_175);
		Event_set_modifiers_m4767(L_175, ((int32_t)((int32_t)L_176|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0796:
	{
		Event_t400 * L_177 = V_0;
		NullCheck(L_177);
		Event_set_keyCode_m4774(L_177, ((int32_t)127), /*hidden argument*/NULL);
		Event_t400 * L_178 = V_0;
		Event_t400 * L_179 = L_178;
		NullCheck(L_179);
		int32_t L_180 = Event_get_modifiers_m2981(L_179, /*hidden argument*/NULL);
		NullCheck(L_179);
		Event_set_modifiers_m4767(L_179, ((int32_t)((int32_t)L_180|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_07b2:
	{
		Event_t400 * L_181 = V_0;
		NullCheck(L_181);
		Event_set_keyCode_m4774(L_181, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_07bf:
	{
		Event_t400 * L_182 = V_0;
		NullCheck(L_182);
		Event_set_keyCode_m4774(L_182, ((int32_t)282), /*hidden argument*/NULL);
		Event_t400 * L_183 = V_0;
		Event_t400 * L_184 = L_183;
		NullCheck(L_184);
		int32_t L_185 = Event_get_modifiers_m2981(L_184, /*hidden argument*/NULL);
		NullCheck(L_184);
		Event_set_modifiers_m4767(L_184, ((int32_t)((int32_t)L_185|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_07de:
	{
		Event_t400 * L_186 = V_0;
		NullCheck(L_186);
		Event_set_keyCode_m4774(L_186, ((int32_t)283), /*hidden argument*/NULL);
		Event_t400 * L_187 = V_0;
		Event_t400 * L_188 = L_187;
		NullCheck(L_188);
		int32_t L_189 = Event_get_modifiers_m2981(L_188, /*hidden argument*/NULL);
		NullCheck(L_188);
		Event_set_modifiers_m4767(L_188, ((int32_t)((int32_t)L_189|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_07fd:
	{
		Event_t400 * L_190 = V_0;
		NullCheck(L_190);
		Event_set_keyCode_m4774(L_190, ((int32_t)284), /*hidden argument*/NULL);
		Event_t400 * L_191 = V_0;
		Event_t400 * L_192 = L_191;
		NullCheck(L_192);
		int32_t L_193 = Event_get_modifiers_m2981(L_192, /*hidden argument*/NULL);
		NullCheck(L_192);
		Event_set_modifiers_m4767(L_192, ((int32_t)((int32_t)L_193|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_081c:
	{
		Event_t400 * L_194 = V_0;
		NullCheck(L_194);
		Event_set_keyCode_m4774(L_194, ((int32_t)285), /*hidden argument*/NULL);
		Event_t400 * L_195 = V_0;
		Event_t400 * L_196 = L_195;
		NullCheck(L_196);
		int32_t L_197 = Event_get_modifiers_m2981(L_196, /*hidden argument*/NULL);
		NullCheck(L_196);
		Event_set_modifiers_m4767(L_196, ((int32_t)((int32_t)L_197|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_083b:
	{
		Event_t400 * L_198 = V_0;
		NullCheck(L_198);
		Event_set_keyCode_m4774(L_198, ((int32_t)286), /*hidden argument*/NULL);
		Event_t400 * L_199 = V_0;
		Event_t400 * L_200 = L_199;
		NullCheck(L_200);
		int32_t L_201 = Event_get_modifiers_m2981(L_200, /*hidden argument*/NULL);
		NullCheck(L_200);
		Event_set_modifiers_m4767(L_200, ((int32_t)((int32_t)L_201|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_085a:
	{
		Event_t400 * L_202 = V_0;
		NullCheck(L_202);
		Event_set_keyCode_m4774(L_202, ((int32_t)287), /*hidden argument*/NULL);
		Event_t400 * L_203 = V_0;
		Event_t400 * L_204 = L_203;
		NullCheck(L_204);
		int32_t L_205 = Event_get_modifiers_m2981(L_204, /*hidden argument*/NULL);
		NullCheck(L_204);
		Event_set_modifiers_m4767(L_204, ((int32_t)((int32_t)L_205|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0879:
	{
		Event_t400 * L_206 = V_0;
		NullCheck(L_206);
		Event_set_keyCode_m4774(L_206, ((int32_t)288), /*hidden argument*/NULL);
		Event_t400 * L_207 = V_0;
		Event_t400 * L_208 = L_207;
		NullCheck(L_208);
		int32_t L_209 = Event_get_modifiers_m2981(L_208, /*hidden argument*/NULL);
		NullCheck(L_208);
		Event_set_modifiers_m4767(L_208, ((int32_t)((int32_t)L_209|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0898:
	{
		Event_t400 * L_210 = V_0;
		NullCheck(L_210);
		Event_set_keyCode_m4774(L_210, ((int32_t)289), /*hidden argument*/NULL);
		Event_t400 * L_211 = V_0;
		Event_t400 * L_212 = L_211;
		NullCheck(L_212);
		int32_t L_213 = Event_get_modifiers_m2981(L_212, /*hidden argument*/NULL);
		NullCheck(L_212);
		Event_set_modifiers_m4767(L_212, ((int32_t)((int32_t)L_213|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_08b7:
	{
		Event_t400 * L_214 = V_0;
		NullCheck(L_214);
		Event_set_keyCode_m4774(L_214, ((int32_t)290), /*hidden argument*/NULL);
		Event_t400 * L_215 = V_0;
		Event_t400 * L_216 = L_215;
		NullCheck(L_216);
		int32_t L_217 = Event_get_modifiers_m2981(L_216, /*hidden argument*/NULL);
		NullCheck(L_216);
		Event_set_modifiers_m4767(L_216, ((int32_t)((int32_t)L_217|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_08d6:
	{
		Event_t400 * L_218 = V_0;
		NullCheck(L_218);
		Event_set_keyCode_m4774(L_218, ((int32_t)291), /*hidden argument*/NULL);
		Event_t400 * L_219 = V_0;
		Event_t400 * L_220 = L_219;
		NullCheck(L_220);
		int32_t L_221 = Event_get_modifiers_m2981(L_220, /*hidden argument*/NULL);
		NullCheck(L_220);
		Event_set_modifiers_m4767(L_220, ((int32_t)((int32_t)L_221|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_08f5:
	{
		Event_t400 * L_222 = V_0;
		NullCheck(L_222);
		Event_set_keyCode_m4774(L_222, ((int32_t)292), /*hidden argument*/NULL);
		Event_t400 * L_223 = V_0;
		Event_t400 * L_224 = L_223;
		NullCheck(L_224);
		int32_t L_225 = Event_get_modifiers_m2981(L_224, /*hidden argument*/NULL);
		NullCheck(L_224);
		Event_set_modifiers_m4767(L_224, ((int32_t)((int32_t)L_225|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0914:
	{
		Event_t400 * L_226 = V_0;
		NullCheck(L_226);
		Event_set_keyCode_m4774(L_226, ((int32_t)293), /*hidden argument*/NULL);
		Event_t400 * L_227 = V_0;
		Event_t400 * L_228 = L_227;
		NullCheck(L_228);
		int32_t L_229 = Event_get_modifiers_m2981(L_228, /*hidden argument*/NULL);
		NullCheck(L_228);
		Event_set_modifiers_m4767(L_228, ((int32_t)((int32_t)L_229|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0933:
	{
		Event_t400 * L_230 = V_0;
		NullCheck(L_230);
		Event_set_keyCode_m4774(L_230, ((int32_t)294), /*hidden argument*/NULL);
		Event_t400 * L_231 = V_0;
		Event_t400 * L_232 = L_231;
		NullCheck(L_232);
		int32_t L_233 = Event_get_modifiers_m2981(L_232, /*hidden argument*/NULL);
		NullCheck(L_232);
		Event_set_modifiers_m4767(L_232, ((int32_t)((int32_t)L_233|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0952:
	{
		Event_t400 * L_234 = V_0;
		NullCheck(L_234);
		Event_set_keyCode_m4774(L_234, ((int32_t)295), /*hidden argument*/NULL);
		Event_t400 * L_235 = V_0;
		Event_t400 * L_236 = L_235;
		NullCheck(L_236);
		int32_t L_237 = Event_get_modifiers_m2981(L_236, /*hidden argument*/NULL);
		NullCheck(L_236);
		Event_set_modifiers_m4767(L_236, ((int32_t)((int32_t)L_237|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0971:
	{
		Event_t400 * L_238 = V_0;
		NullCheck(L_238);
		Event_set_keyCode_m4774(L_238, ((int32_t)296), /*hidden argument*/NULL);
		Event_t400 * L_239 = V_0;
		Event_t400 * L_240 = L_239;
		NullCheck(L_240);
		int32_t L_241 = Event_get_modifiers_m2981(L_240, /*hidden argument*/NULL);
		NullCheck(L_240);
		Event_set_modifiers_m4767(L_240, ((int32_t)((int32_t)L_241|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0990:
	{
		Event_t400 * L_242 = V_0;
		NullCheck(L_242);
		Event_set_keyCode_m4774(L_242, ((int32_t)27), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_099d:
	{
		Event_t400 * L_243 = V_0;
		NullCheck(L_243);
		Event_set_character_m4772(L_243, ((int32_t)10), /*hidden argument*/NULL);
		Event_t400 * L_244 = V_0;
		NullCheck(L_244);
		Event_set_keyCode_m4774(L_244, ((int32_t)13), /*hidden argument*/NULL);
		Event_t400 * L_245 = V_0;
		Event_t400 * L_246 = L_245;
		NullCheck(L_246);
		int32_t L_247 = Event_get_modifiers_m2981(L_246, /*hidden argument*/NULL);
		NullCheck(L_246);
		Event_set_modifiers_m4767(L_246, ((int32_t)((int32_t)L_247&(int32_t)((int32_t)-65))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_09c1:
	{
		Event_t400 * L_248 = V_0;
		NullCheck(L_248);
		Event_set_keyCode_m4774(L_248, ((int32_t)32), /*hidden argument*/NULL);
		Event_t400 * L_249 = V_0;
		NullCheck(L_249);
		Event_set_character_m4772(L_249, ((int32_t)32), /*hidden argument*/NULL);
		Event_t400 * L_250 = V_0;
		Event_t400 * L_251 = L_250;
		NullCheck(L_251);
		int32_t L_252 = Event_get_modifiers_m2981(L_251, /*hidden argument*/NULL);
		NullCheck(L_251);
		Event_set_modifiers_m4767(L_251, ((int32_t)((int32_t)L_252&(int32_t)((int32_t)-65))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_09e5:
	{
		String_t* L_253 = V_3;
		NullCheck(L_253);
		int32_t L_254 = String_get_Length_m2952(L_253, /*hidden argument*/NULL);
		if ((((int32_t)L_254) == ((int32_t)1)))
		{
			goto IL_0a36;
		}
	}

IL_09f1:
	try
	{ // begin try (depth: 1)
		Event_t400 * L_255 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_256 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(KeyCode_t826_0_0_0_var), /*hidden argument*/NULL);
		String_t* L_257 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t959_il2cpp_TypeInfo_var);
		Object_t * L_258 = Enum_Parse_m5222(NULL /*static, unused*/, L_256, L_257, 1, /*hidden argument*/NULL);
		NullCheck(L_255);
		Event_set_keyCode_m4774(L_255, ((*(int32_t*)((int32_t*)UnBox (L_258, Int32_t246_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		goto IL_0a31;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t236 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t568_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0a12;
		throw e;
	}

CATCH_0a12:
	{ // begin catch(System.ArgumentException)
		ObjectU5BU5D_t234* L_259 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 1));
		String_t* L_260 = V_3;
		NullCheck(L_259);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_259, 0);
		ArrayElementTypeCheck (L_259, L_260);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_259, 0, sizeof(Object_t *))) = (Object_t *)L_260;
		String_t* L_261 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral449, L_259, /*hidden argument*/NULL);
		Debug_LogError_m380(NULL /*static, unused*/, L_261, /*hidden argument*/NULL);
		goto IL_0a31;
	} // end catch (depth: 1)

IL_0a31:
	{
		goto IL_0a66;
	}

IL_0a36:
	{
		Event_t400 * L_262 = V_0;
		String_t* L_263 = V_3;
		NullCheck(L_263);
		String_t* L_264 = String_ToLower_m3828(L_263, /*hidden argument*/NULL);
		NullCheck(L_264);
		uint16_t L_265 = String_get_Chars_m2970(L_264, 0, /*hidden argument*/NULL);
		NullCheck(L_262);
		Event_set_character_m4772(L_262, L_265, /*hidden argument*/NULL);
		Event_t400 * L_266 = V_0;
		Event_t400 * L_267 = V_0;
		NullCheck(L_267);
		uint16_t L_268 = Event_get_character_m2983(L_267, /*hidden argument*/NULL);
		NullCheck(L_266);
		Event_set_keyCode_m4774(L_266, L_268, /*hidden argument*/NULL);
		Event_t400 * L_269 = V_0;
		NullCheck(L_269);
		int32_t L_270 = Event_get_modifiers_m2981(L_269, /*hidden argument*/NULL);
		if (!L_270)
		{
			goto IL_0a66;
		}
	}
	{
		Event_t400 * L_271 = V_0;
		NullCheck(L_271);
		Event_set_character_m4772(L_271, 0, /*hidden argument*/NULL);
	}

IL_0a66:
	{
		goto IL_0a6b;
	}

IL_0a6b:
	{
		Event_t400 * L_272 = V_0;
		return L_272;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" int32_t Event_GetHashCode_m4750 (Event_t400 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t85  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = Event_get_isKey_m4747(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Event_get_keyCode_m2982(__this, /*hidden argument*/NULL);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = Event_get_isMouse_m4748(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector2_t85  L_3 = Event_get_mousePosition_m4725(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Vector2_GetHashCode_m4170((&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Event_t400_il2cpp_TypeInfo_var;
extern "C" bool Event_Equals_m4751 (Event_t400 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	Event_t400 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___obj;
		bool L_2 = Object_ReferenceEquals_m5223(NULL /*static, unused*/, __this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_3 = ___obj;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2703(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = Object_GetType_m2703(__this, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		Object_t * L_6 = ___obj;
		V_0 = ((Event_t400 *)CastclassSealed(L_6, Event_t400_il2cpp_TypeInfo_var));
		int32_t L_7 = Event_get_type_m2986(__this, /*hidden argument*/NULL);
		Event_t400 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m2986(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		Event_t400 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = Event_get_modifiers_m2981(L_11, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_005a;
		}
	}

IL_0058:
	{
		return 0;
	}

IL_005a:
	{
		bool L_13 = Event_get_isKey_m4747(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = Event_get_keyCode_m2982(__this, /*hidden argument*/NULL);
		Event_t400 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = Event_get_keyCode_m2982(L_15, /*hidden argument*/NULL);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = Event_get_isMouse_m4748(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		Vector2_t85  L_18 = Event_get_mousePosition_m4725(__this, /*hidden argument*/NULL);
		Event_t400 * L_19 = V_0;
		NullCheck(L_19);
		Vector2_t85  L_20 = Event_get_mousePosition_m4725(L_19, /*hidden argument*/NULL);
		bool L_21 = Vector2_op_Equality_m3189(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
// System.String UnityEngine.Event::ToString()
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t827_il2cpp_TypeInfo_var;
extern TypeInfo* EventModifiers_t828_il2cpp_TypeInfo_var;
extern TypeInfo* KeyCode_t826_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t246_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t85_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral450;
extern Il2CppCodeGenString* _stringLiteral451;
extern Il2CppCodeGenString* _stringLiteral452;
extern Il2CppCodeGenString* _stringLiteral453;
extern Il2CppCodeGenString* _stringLiteral454;
extern Il2CppCodeGenString* _stringLiteral455;
extern Il2CppCodeGenString* _stringLiteral456;
extern "C" String_t* Event_ToString_m4752 (Event_t400 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		EventType_t827_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		EventModifiers_t828_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		KeyCode_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		Int32_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Vector2_t85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral450 = il2cpp_codegen_string_literal_from_index(450);
		_stringLiteral451 = il2cpp_codegen_string_literal_from_index(451);
		_stringLiteral452 = il2cpp_codegen_string_literal_from_index(452);
		_stringLiteral453 = il2cpp_codegen_string_literal_from_index(453);
		_stringLiteral454 = il2cpp_codegen_string_literal_from_index(454);
		_stringLiteral455 = il2cpp_codegen_string_literal_from_index(455);
		_stringLiteral456 = il2cpp_codegen_string_literal_from_index(456);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Event_get_isKey_m4747(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_1 = Event_get_character_m2983(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t234* L_2 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 3));
		int32_t L_3 = Event_get_type_m2986(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(EventType_t827_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t234* L_6 = L_2;
		int32_t L_7 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(EventModifiers_t828_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t234* L_10 = L_6;
		int32_t L_11 = Event_get_keyCode_m2982(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(KeyCode_t826_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2, sizeof(Object_t *))) = (Object_t *)L_13;
		String_t* L_14 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral450, L_10, /*hidden argument*/NULL);
		return L_14;
	}

IL_0051:
	{
		ObjectU5BU5D_t234* L_15 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 8));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, _stringLiteral451);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral451;
		ObjectU5BU5D_t234* L_16 = L_15;
		int32_t L_17 = Event_get_type_m2986(__this, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(EventType_t827_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 1, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t234* L_20 = L_16;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		ArrayElementTypeCheck (L_20, _stringLiteral452);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral452;
		ObjectU5BU5D_t234* L_21 = L_20;
		uint16_t L_22 = Event_get_character_m2983(__this, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(Int32_t246_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 3, sizeof(Object_t *))) = (Object_t *)L_24;
		ObjectU5BU5D_t234* L_25 = L_21;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, _stringLiteral453);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral453;
		ObjectU5BU5D_t234* L_26 = L_25;
		int32_t L_27 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(EventModifiers_t828_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 5);
		ArrayElementTypeCheck (L_26, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 5, sizeof(Object_t *))) = (Object_t *)L_29;
		ObjectU5BU5D_t234* L_30 = L_26;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 6);
		ArrayElementTypeCheck (L_30, _stringLiteral454);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral454;
		ObjectU5BU5D_t234* L_31 = L_30;
		int32_t L_32 = Event_get_keyCode_m2982(__this, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(KeyCode_t826_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 7);
		ArrayElementTypeCheck (L_31, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 7, sizeof(Object_t *))) = (Object_t *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m1089(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		return L_35;
	}

IL_00b5:
	{
		bool L_36 = Event_get_isMouse_m4748(__this, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00fb;
		}
	}
	{
		ObjectU5BU5D_t234* L_37 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 3));
		int32_t L_38 = Event_get_type_m2986(__this, /*hidden argument*/NULL);
		int32_t L_39 = L_38;
		Object_t * L_40 = Box(EventType_t827_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		ArrayElementTypeCheck (L_37, L_40);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 0, sizeof(Object_t *))) = (Object_t *)L_40;
		ObjectU5BU5D_t234* L_41 = L_37;
		Vector2_t85  L_42 = Event_get_mousePosition_m4725(__this, /*hidden argument*/NULL);
		Vector2_t85  L_43 = L_42;
		Object_t * L_44 = Box(Vector2_t85_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 1);
		ArrayElementTypeCheck (L_41, L_44);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 1, sizeof(Object_t *))) = (Object_t *)L_44;
		ObjectU5BU5D_t234* L_45 = L_41;
		int32_t L_46 = Event_get_modifiers_m2981(__this, /*hidden argument*/NULL);
		int32_t L_47 = L_46;
		Object_t * L_48 = Box(EventModifiers_t828_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 2);
		ArrayElementTypeCheck (L_45, L_48);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, 2, sizeof(Object_t *))) = (Object_t *)L_48;
		String_t* L_49 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral455, L_45, /*hidden argument*/NULL);
		return L_49;
	}

IL_00fb:
	{
		int32_t L_50 = Event_get_type_m2986(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_50) == ((int32_t)((int32_t)14))))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_51 = Event_get_type_m2986(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_013d;
		}
	}

IL_0115:
	{
		ObjectU5BU5D_t234* L_52 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 2));
		int32_t L_53 = Event_get_type_m2986(__this, /*hidden argument*/NULL);
		int32_t L_54 = L_53;
		Object_t * L_55 = Box(EventType_t827_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 0);
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 0, sizeof(Object_t *))) = (Object_t *)L_55;
		ObjectU5BU5D_t234* L_56 = L_52;
		String_t* L_57 = Event_get_commandName_m2987(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 1);
		ArrayElementTypeCheck (L_56, L_57);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, 1, sizeof(Object_t *))) = (Object_t *)L_57;
		String_t* L_58 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral456, L_56, /*hidden argument*/NULL);
		return L_58;
	}

IL_013d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_60 = Event_get_type_m2986(__this, /*hidden argument*/NULL);
		int32_t L_61 = L_60;
		Object_t * L_62 = Box(EventType_t827_il2cpp_TypeInfo_var, &L_61);
		String_t* L_63 = String_Concat_m2646(NULL /*static, unused*/, L_59, L_62, /*hidden argument*/NULL);
		return L_63;
	}
}
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m4753 (Event_t400 * __this, const MethodInfo* method)
{
	typedef void (*Event_Init_m4753_ftn) (Event_t400 *);
	static Event_Init_m4753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Init_m4753_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m4754 (Event_t400 * __this, const MethodInfo* method)
{
	typedef void (*Event_Cleanup_m4754_ftn) (Event_t400 *);
	static Event_Cleanup_m4754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Cleanup_m4754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::InitCopy(UnityEngine.Event)
extern "C" void Event_InitCopy_m4755 (Event_t400 * __this, Event_t400 * ___other, const MethodInfo* method)
{
	typedef void (*Event_InitCopy_m4755_ftn) (Event_t400 *, Event_t400 *);
	static Event_InitCopy_m4755_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_InitCopy_m4755_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::InitCopy(UnityEngine.Event)");
	_il2cpp_icall_func(__this, ___other);
}
// System.Void UnityEngine.Event::InitPtr(System.IntPtr)
extern "C" void Event_InitPtr_m4756 (Event_t400 * __this, IntPtr_t ___ptr, const MethodInfo* method)
{
	typedef void (*Event_InitPtr_m4756_ftn) (Event_t400 *, IntPtr_t);
	static Event_InitPtr_m4756_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_InitPtr_m4756_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::InitPtr(System.IntPtr)");
	_il2cpp_icall_func(__this, ___ptr);
}
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m2985 (Event_t400 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_rawType_m2985_ftn) (Event_t400 *);
	static Event_get_rawType_m2985_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_rawType_m2985_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m2986 (Event_t400 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_type_m2986_ftn) (Event_t400 *);
	static Event_get_type_m2986_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m2986_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
extern "C" void Event_set_type_m4757 (Event_t400 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_type_m4757_ftn) (Event_t400 *, int32_t);
	static Event_set_type_m4757_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_type_m4757_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_type(UnityEngine.EventType)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t Event_GetTypeForControl_m4758 (Event_t400 * __this, int32_t ___controlID, const MethodInfo* method)
{
	typedef int32_t (*Event_GetTypeForControl_m4758_ftn) (Event_t400 *, int32_t);
	static Event_GetTypeForControl_m4758_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_GetTypeForControl_m4758_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::GetTypeForControl(System.Int32)");
	return _il2cpp_icall_func(__this, ___controlID);
}
// System.Void UnityEngine.Event::Internal_SetMousePosition(UnityEngine.Vector2)
extern "C" void Event_Internal_SetMousePosition_m4759 (Event_t400 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		Event_INTERNAL_CALL_Internal_SetMousePosition_m4760(NULL /*static, unused*/, __this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMousePosition(UnityEngine.Event,UnityEngine.Vector2&)
extern "C" void Event_INTERNAL_CALL_Internal_SetMousePosition_m4760 (Object_t * __this /* static, unused */, Event_t400 * ___self, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*Event_INTERNAL_CALL_Internal_SetMousePosition_m4760_ftn) (Event_t400 *, Vector2_t85 *);
	static Event_INTERNAL_CALL_Internal_SetMousePosition_m4760_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_INTERNAL_CALL_Internal_SetMousePosition_m4760_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::INTERNAL_CALL_Internal_SetMousePosition(UnityEngine.Event,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___self, ___value);
}
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m4761 (Event_t400 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*Event_Internal_GetMousePosition_m4761_ftn) (Event_t400 *, Vector2_t85 *);
	static Event_Internal_GetMousePosition_m4761_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_GetMousePosition_m4761_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Event::Internal_SetMouseDelta(UnityEngine.Vector2)
extern "C" void Event_Internal_SetMouseDelta_m4762 (Event_t400 * __this, Vector2_t85  ___value, const MethodInfo* method)
{
	{
		Event_INTERNAL_CALL_Internal_SetMouseDelta_m4763(NULL /*static, unused*/, __this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMouseDelta(UnityEngine.Event,UnityEngine.Vector2&)
extern "C" void Event_INTERNAL_CALL_Internal_SetMouseDelta_m4763 (Object_t * __this /* static, unused */, Event_t400 * ___self, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*Event_INTERNAL_CALL_Internal_SetMouseDelta_m4763_ftn) (Event_t400 *, Vector2_t85 *);
	static Event_INTERNAL_CALL_Internal_SetMouseDelta_m4763_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_INTERNAL_CALL_Internal_SetMouseDelta_m4763_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::INTERNAL_CALL_Internal_SetMouseDelta(UnityEngine.Event,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___self, ___value);
}
// System.Void UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMouseDelta_m4764 (Event_t400 * __this, Vector2_t85 * ___value, const MethodInfo* method)
{
	typedef void (*Event_Internal_GetMouseDelta_m4764_ftn) (Event_t400 *, Vector2_t85 *);
	static Event_Internal_GetMouseDelta_m4764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_GetMouseDelta_m4764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Event::get_button()
extern "C" int32_t Event_get_button_m4765 (Event_t400 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_button_m4765_ftn) (Event_t400 *);
	static Event_get_button_m4765_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_button_m4765_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_button()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_button(System.Int32)
extern "C" void Event_set_button_m4766 (Event_t400 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_button_m4766_ftn) (Event_t400 *, int32_t);
	static Event_set_button_m4766_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_button_m4766_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_button(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m2981 (Event_t400 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_modifiers_m2981_ftn) (Event_t400 *);
	static Event_get_modifiers_m2981_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m2981_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
extern "C" void Event_set_modifiers_m4767 (Event_t400 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_modifiers_m4767_ftn) (Event_t400 *, int32_t);
	static Event_set_modifiers_m4767_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_modifiers_m4767_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Event::get_pressure()
extern "C" float Event_get_pressure_m4768 (Event_t400 * __this, const MethodInfo* method)
{
	typedef float (*Event_get_pressure_m4768_ftn) (Event_t400 *);
	static Event_get_pressure_m4768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_pressure_m4768_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_pressure()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_pressure(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Event_set_pressure_m4769 (Event_t400 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Event_set_pressure_m4769_ftn) (Event_t400 *, float);
	static Event_set_pressure_m4769_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_pressure_m4769_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_pressure(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Event::get_clickCount()
extern "C" int32_t Event_get_clickCount_m4770 (Event_t400 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_clickCount_m4770_ftn) (Event_t400 *);
	static Event_get_clickCount_m4770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_clickCount_m4770_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_clickCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_clickCount(System.Int32)
extern "C" void Event_set_clickCount_m4771 (Event_t400 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_clickCount_m4771_ftn) (Event_t400 *, int32_t);
	static Event_set_clickCount_m4771_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_clickCount_m4771_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_clickCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m2983 (Event_t400 * __this, const MethodInfo* method)
{
	typedef uint16_t (*Event_get_character_m2983_ftn) (Event_t400 *);
	static Event_get_character_m2983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m2983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_character(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" void Event_set_character_m4772 (Event_t400 * __this, uint16_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_character_m4772_ftn) (Event_t400 *, uint16_t);
	static Event_set_character_m4772_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_character_m4772_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_character(System.Char)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m2987 (Event_t400 * __this, const MethodInfo* method)
{
	typedef String_t* (*Event_get_commandName_m2987_ftn) (Event_t400 *);
	static Event_get_commandName_m2987_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m2987_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_commandName(System.String)
extern "C" void Event_set_commandName_m4773 (Event_t400 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*Event_set_commandName_m4773_ftn) (Event_t400 *, String_t*);
	static Event_set_commandName_m4773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_commandName_m4773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_commandName(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m2982 (Event_t400 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_keyCode_m2982_ftn) (Event_t400 *);
	static Event_get_keyCode_m2982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_m2982_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
extern "C" void Event_set_keyCode_m4774 (Event_t400 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_keyCode_m4774_ftn) (Event_t400 *, int32_t);
	static Event_set_keyCode_m4774_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_keyCode_m4774_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m4775 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method)
{
	typedef void (*Event_Internal_SetNativeEvent_m4775_ftn) (IntPtr_t);
	static Event_Internal_SetNativeEvent_m4775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_m4775_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___ptr);
}
// System.Void UnityEngine.Event::Use()
extern "C" void Event_Use_m4776 (Event_t400 * __this, const MethodInfo* method)
{
	typedef void (*Event_Use_m4776_ftn) (Event_t400 *);
	static Event_Use_m4776_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Use_m4776_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Use()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C" bool Event_PopEvent_m2989 (Object_t * __this /* static, unused */, Event_t400 * ___outEvent, const MethodInfo* method)
{
	typedef bool (*Event_PopEvent_m2989_ftn) (Event_t400 *);
	static Event_PopEvent_m2989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_PopEvent_m2989_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(___outEvent);
}
// System.Int32 UnityEngine.Event::GetEventCount()
extern "C" int32_t Event_GetEventCount_m4777 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Event_GetEventCount_m4777_ftn) ();
	static Event_GetEventCount_m4777_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_GetEventCount_m4777_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::GetEventCount()");
	return _il2cpp_icall_func();
}
// Conversion methods for marshalling of: UnityEngine.Event
extern "C" void Event_t400_marshal(const Event_t400& unmarshaled, Event_t400_marshaled& marshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)___s_Current_1Exception);
}
extern "C" void Event_t400_marshal_back(const Event_t400_marshaled& marshaled, Event_t400& unmarshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)___s_Current_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
extern "C" void Event_t400_marshal_cleanup(Event_t400_marshaled& marshaled)
{
}
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCodeMethodDeclarations.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventTypeMethodDeclarations.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiersMethodDeclarations.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleModeMethodDeclarations.h"
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewState.h"
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewStateMethodDeclarations.h"
// System.Void UnityEngine.GUI/ScrollViewState::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ScrollViewState__ctor_m4778 (ScrollViewState_t830 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void WindowFunction__ctor_m4779 (WindowFunction_t831 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void WindowFunction_Invoke_m4780 (WindowFunction_t831 * __this, int32_t ___id, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WindowFunction_Invoke_m4780((WindowFunction_t831 *)__this->___prev_9,___id, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___id, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___id, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WindowFunction_t831(Il2CppObject* delegate, int32_t ___id)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.IAsyncResult UnityEngine.GUI/WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t246_il2cpp_TypeInfo_var;
extern "C" Object_t * WindowFunction_BeginInvoke_m4781 (WindowFunction_t831 * __this, int32_t ___id, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t246_il2cpp_TypeInfo_var, &___id);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUI/WindowFunction::EndInvoke(System.IAsyncResult)
extern "C" void WindowFunction_EndInvoke_m4782 (WindowFunction_t831 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUI.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.InternalDrawTextureArguments
#include "UnityEngine_UnityEngine_InternalDrawTextureArguments.h"
// UnityEngine.FocusType
#include "UnityEngine_UnityEngine_FocusType.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCache.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.GUIClip
#include "UnityEngine_UnityEngine_GUIClipMethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
// System.Void UnityEngine.GUI::.cctor()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern TypeInfo* GenericStack_t832_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t833_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral457;
extern Il2CppCodeGenString* _stringLiteral458;
extern Il2CppCodeGenString* _stringLiteral258;
extern Il2CppCodeGenString* _stringLiteral459;
extern Il2CppCodeGenString* _stringLiteral250;
extern Il2CppCodeGenString* _stringLiteral460;
extern Il2CppCodeGenString* _stringLiteral461;
extern "C" void GUI__cctor_m4783 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		GenericStack_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		DateTime_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		_stringLiteral457 = il2cpp_codegen_string_literal_from_index(457);
		_stringLiteral458 = il2cpp_codegen_string_literal_from_index(458);
		_stringLiteral258 = il2cpp_codegen_string_literal_from_index(258);
		_stringLiteral459 = il2cpp_codegen_string_literal_from_index(459);
		_stringLiteral250 = il2cpp_codegen_string_literal_from_index(250);
		_stringLiteral460 = il2cpp_codegen_string_literal_from_index(460);
		_stringLiteral461 = il2cpp_codegen_string_literal_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_ScrollStepSize_0 = (10.0f);
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_HotTextField_2 = (-1);
		NullCheck(_stringLiteral457);
		int32_t L_0 = String_GetHashCode_m5216(_stringLiteral457, /*hidden argument*/NULL);
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_BoxHash_3 = L_0;
		NullCheck(_stringLiteral458);
		int32_t L_1 = String_GetHashCode_m5216(_stringLiteral458, /*hidden argument*/NULL);
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_RepeatButtonHash_4 = L_1;
		NullCheck(_stringLiteral258);
		int32_t L_2 = String_GetHashCode_m5216(_stringLiteral258, /*hidden argument*/NULL);
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_ToggleHash_5 = L_2;
		NullCheck(_stringLiteral459);
		int32_t L_3 = String_GetHashCode_m5216(_stringLiteral459, /*hidden argument*/NULL);
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_ButtonGridHash_6 = L_3;
		NullCheck(_stringLiteral250);
		int32_t L_4 = String_GetHashCode_m5216(_stringLiteral250, /*hidden argument*/NULL);
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_SliderHash_7 = L_4;
		NullCheck(_stringLiteral460);
		int32_t L_5 = String_GetHashCode_m5216(_stringLiteral460, /*hidden argument*/NULL);
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_BeginGroupHash_8 = L_5;
		NullCheck(_stringLiteral461);
		int32_t L_6 = String_GetHashCode_m5216(_stringLiteral461, /*hidden argument*/NULL);
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_ScrollviewHash_9 = L_6;
		GenericStack_t832 * L_7 = (GenericStack_t832 *)il2cpp_codegen_object_new (GenericStack_t832_il2cpp_TypeInfo_var);
		GenericStack__ctor_m5172(L_7, /*hidden argument*/NULL);
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_ScrollViewStates_12 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t833_il2cpp_TypeInfo_var);
		DateTime_t833  L_8 = DateTime_get_Now_m5224(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_set_nextScrollStepTime_m4784(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
// System.DateTime
#include "mscorlib_System_DateTime.h"
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUI_set_nextScrollStepTime_m4784 (Object_t * __this /* static, unused */, DateTime_t833  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t833  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___U3CnextScrollStepTimeU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUI_set_skin_m4785 (Object_t * __this /* static, unused */, GUISkin_t231 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m4982(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUISkin_t231 * L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_DoSetSkin_m4786(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" GUISkin_t231 * GUI_get_skin_m1078 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m4982(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUISkin_t231 * L_0 = ((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_Skin_10;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUI_DoSetSkin_m4786 (Object_t * __this /* static, unused */, GUISkin_t231 * ___newSkin, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUISkin_t231 * L_0 = ___newSkin;
		bool L_1 = Object_op_Implicit_m294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		GUISkin_t231 * L_2 = GUIUtility_GetDefaultSkin_m4978(NULL /*static, unused*/, /*hidden argument*/NULL);
		___newSkin = L_2;
	}

IL_0012:
	{
		GUISkin_t231 * L_3 = ___newSkin;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_Skin_10 = L_3;
		GUISkin_t231 * L_4 = ___newSkin;
		NullCheck(L_4);
		GUISkin_MakeCurrent_m4920(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
extern TypeInfo* GUIContent_t264_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUI_Label_m1082 (Object_t * __this /* static, unused */, Rect_t232  ___position, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t232  L_0 = ___position;
		String_t* L_1 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent_t264 * L_2 = GUIContent_Temp_m4808(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUISkin_t231 * L_3 = ((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_Skin_10;
		NullCheck(L_3);
		GUIStyle_t220 * L_4 = GUISkin_get_label_m1079(L_3, /*hidden argument*/NULL);
		GUI_Label_m4787(NULL /*static, unused*/, L_0, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
extern TypeInfo* GUIContent_t264_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUI_Label_m3823 (Object_t * __this /* static, unused */, Rect_t232  ___position, String_t* ___text, GUIStyle_t220 * ___style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t232  L_0 = ___position;
		String_t* L_1 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent_t264 * L_2 = GUIContent_Temp_m4808(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GUIStyle_t220 * L_3 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_Label_m4787(NULL /*static, unused*/, L_0, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUI_Label_m4787 (Object_t * __this /* static, unused */, Rect_t232  ___position, GUIContent_t264 * ___content, GUIStyle_t220 * ___style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t232  L_0 = ___position;
		GUIContent_t264 * L_1 = ___content;
		GUIStyle_t220 * L_2 = ___style;
		NullCheck(L_2);
		IntPtr_t L_3 = (L_2->___m_Ptr_0);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_DoLabel_m4799(NULL /*static, unused*/, L_0, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUI_DrawTexture_m3821 (Object_t * __this /* static, unused */, Rect_t232  ___position, Texture_t40 * ___image, int32_t ___scaleMode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t232  L_0 = ___position;
		Texture_t40 * L_1 = ___image;
		int32_t L_2 = ___scaleMode;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m4788(NULL /*static, unused*/, L_0, L_1, L_2, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUI_DrawTexture_m4788 (Object_t * __this /* static, unused */, Rect_t232  ___position, Texture_t40 * ___image, int32_t ___scaleMode, bool ___alphaBlend, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t232  L_0 = ___position;
		Texture_t40 * L_1 = ___image;
		int32_t L_2 = ___scaleMode;
		bool L_3 = ___alphaBlend;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m4789(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern TypeInfo* InternalDrawTextureArguments_t742_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral462;
extern "C" void GUI_DrawTexture_m4789 (Object_t * __this /* static, unused */, Rect_t232  ___position, Texture_t40 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		InternalDrawTextureArguments_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(525);
		_stringLiteral462 = il2cpp_codegen_string_literal_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	Material_t5 * V_0 = {0};
	float V_1 = 0.0f;
	InternalDrawTextureArguments_t742  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = {0};
	Material_t5 * G_B8_0 = {0};
	{
		Event_t400 * L_0 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Event_get_type_m2986(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)7))))
		{
			goto IL_0277;
		}
	}
	{
		Texture_t40 * L_2 = ___image;
		bool L_3 = Object_op_Equality_m295(NULL /*static, unused*/, L_2, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Debug_LogWarning_m378(NULL /*static, unused*/, _stringLiteral462, /*hidden argument*/NULL);
		return;
	}

IL_0027:
	{
		float L_4 = ___imageAspect;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		Texture_t40 * L_5 = ___image;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		Texture_t40 * L_7 = ___image;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		___imageAspect = ((float)((float)(((float)L_6))/(float)(((float)L_8))));
	}

IL_0044:
	{
		bool L_9 = ___alphaBlend;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		Material_t5 * L_10 = GUI_get_blendMaterial_m4801(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_10;
		goto IL_0059;
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		Material_t5 * L_11 = GUI_get_blitMaterial_m4802(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_11;
	}

IL_0059:
	{
		V_0 = G_B8_0;
		float L_12 = Rect_get_width_m2877((&___position), /*hidden argument*/NULL);
		float L_13 = Rect_get_height_m2831((&___position), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_12/(float)L_13));
		Initobj (InternalDrawTextureArguments_t742_il2cpp_TypeInfo_var, (&V_2));
		Texture_t40 * L_14 = ___image;
		(&V_2)->___texture_1 = L_14;
		(&V_2)->___leftBorder_3 = 0;
		(&V_2)->___rightBorder_4 = 0;
		(&V_2)->___topBorder_5 = 0;
		(&V_2)->___bottomBorder_6 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		Color_t12  L_15 = GUI_get_color_m4793(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t510  L_16 = Color32_op_Implicit_m2881(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		(&V_2)->___color_7 = L_16;
		Material_t5 * L_17 = V_0;
		(&V_2)->___mat_8 = L_17;
		int32_t L_18 = ___scaleMode;
		V_7 = L_18;
		int32_t L_19 = V_7;
		if (L_19 == 0)
		{
			goto IL_00ce;
		}
		if (L_19 == 1)
		{
			goto IL_0102;
		}
		if (L_19 == 2)
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0277;
	}

IL_00ce:
	{
		Rect_t232  L_20 = ___position;
		(&V_2)->___screenRect_0 = L_20;
		Rect_t232  L_21 = {0};
		Rect__ctor_m1081(&L_21, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		(&V_2)->___sourceRect_2 = L_21;
		Graphics_DrawTexture_m4095(NULL /*static, unused*/, (&V_2), /*hidden argument*/NULL);
		goto IL_0277;
	}

IL_0102:
	{
		float L_22 = V_1;
		float L_23 = ___imageAspect;
		if ((!(((float)L_22) > ((float)L_23))))
		{
			goto IL_0147;
		}
	}
	{
		float L_24 = ___imageAspect;
		float L_25 = V_1;
		V_3 = ((float)((float)L_24/(float)L_25));
		Rect_t232  L_26 = ___position;
		(&V_2)->___screenRect_0 = L_26;
		float L_27 = V_3;
		float L_28 = V_3;
		Rect_t232  L_29 = {0};
		Rect__ctor_m1081(&L_29, (0.0f), ((float)((float)((float)((float)(1.0f)-(float)L_27))*(float)(0.5f))), (1.0f), L_28, /*hidden argument*/NULL);
		(&V_2)->___sourceRect_2 = L_29;
		Graphics_DrawTexture_m4095(NULL /*static, unused*/, (&V_2), /*hidden argument*/NULL);
		goto IL_0182;
	}

IL_0147:
	{
		float L_30 = V_1;
		float L_31 = ___imageAspect;
		V_4 = ((float)((float)L_30/(float)L_31));
		Rect_t232  L_32 = ___position;
		(&V_2)->___screenRect_0 = L_32;
		float L_33 = V_4;
		float L_34 = V_4;
		Rect_t232  L_35 = {0};
		Rect__ctor_m1081(&L_35, ((float)((float)(0.5f)-(float)((float)((float)L_33*(float)(0.5f))))), (0.0f), L_34, (1.0f), /*hidden argument*/NULL);
		(&V_2)->___sourceRect_2 = L_35;
		Graphics_DrawTexture_m4095(NULL /*static, unused*/, (&V_2), /*hidden argument*/NULL);
	}

IL_0182:
	{
		goto IL_0277;
	}

IL_0187:
	{
		float L_36 = V_1;
		float L_37 = ___imageAspect;
		if ((!(((float)L_36) > ((float)L_37))))
		{
			goto IL_0203;
		}
	}
	{
		float L_38 = ___imageAspect;
		float L_39 = V_1;
		V_5 = ((float)((float)L_38/(float)L_39));
		float L_40 = Rect_get_xMin_m2946((&___position), /*hidden argument*/NULL);
		float L_41 = Rect_get_width_m2877((&___position), /*hidden argument*/NULL);
		float L_42 = V_5;
		float L_43 = Rect_get_yMin_m2945((&___position), /*hidden argument*/NULL);
		float L_44 = V_5;
		float L_45 = Rect_get_width_m2877((&___position), /*hidden argument*/NULL);
		float L_46 = Rect_get_height_m2831((&___position), /*hidden argument*/NULL);
		Rect_t232  L_47 = {0};
		Rect__ctor_m1081(&L_47, ((float)((float)L_40+(float)((float)((float)((float)((float)L_41*(float)((float)((float)(1.0f)-(float)L_42))))*(float)(0.5f))))), L_43, ((float)((float)L_44*(float)L_45)), L_46, /*hidden argument*/NULL);
		(&V_2)->___screenRect_0 = L_47;
		Rect_t232  L_48 = {0};
		Rect__ctor_m1081(&L_48, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		(&V_2)->___sourceRect_2 = L_48;
		Graphics_DrawTexture_m4095(NULL /*static, unused*/, (&V_2), /*hidden argument*/NULL);
		goto IL_0272;
	}

IL_0203:
	{
		float L_49 = V_1;
		float L_50 = ___imageAspect;
		V_6 = ((float)((float)L_49/(float)L_50));
		float L_51 = Rect_get_xMin_m2946((&___position), /*hidden argument*/NULL);
		float L_52 = Rect_get_yMin_m2945((&___position), /*hidden argument*/NULL);
		float L_53 = Rect_get_height_m2831((&___position), /*hidden argument*/NULL);
		float L_54 = V_6;
		float L_55 = Rect_get_width_m2877((&___position), /*hidden argument*/NULL);
		float L_56 = V_6;
		float L_57 = Rect_get_height_m2831((&___position), /*hidden argument*/NULL);
		Rect_t232  L_58 = {0};
		Rect__ctor_m1081(&L_58, L_51, ((float)((float)L_52+(float)((float)((float)((float)((float)L_53*(float)((float)((float)(1.0f)-(float)L_54))))*(float)(0.5f))))), L_55, ((float)((float)L_56*(float)L_57)), /*hidden argument*/NULL);
		(&V_2)->___screenRect_0 = L_58;
		Rect_t232  L_59 = {0};
		Rect__ctor_m1081(&L_59, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		(&V_2)->___sourceRect_2 = L_59;
		Graphics_DrawTexture_m4095(NULL /*static, unused*/, (&V_2), /*hidden argument*/NULL);
	}

IL_0272:
	{
		goto IL_0277;
	}

IL_0277:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern TypeInfo* GUIContent_t264_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" bool GUI_Button_m1084 (Object_t * __this /* static, unused */, Rect_t232  ___position, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t232  L_0 = ___position;
		String_t* L_1 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent_t264 * L_2 = GUIContent_Temp_m4808(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUISkin_t231 * L_3 = ((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_Skin_10;
		NullCheck(L_3);
		GUIStyle_t220 * L_4 = GUISkin_get_button_m1083(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		IntPtr_t L_5 = (L_4->___m_Ptr_0);
		bool L_6 = GUI_DoButton_m4803(NULL /*static, unused*/, L_0, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.GUIClip
#include "UnityEngine_UnityEngine_GUIClipMethodDeclarations.h"
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t264_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" void GUI_BeginGroup_m4790 (Object_t * __this /* static, unused */, Rect_t232  ___position, GUIContent_t264 * ___content, GUIStyle_t220 * ___style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		GUIContent_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m4982(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GUI_t230_StaticFields*)GUI_t230_il2cpp_TypeInfo_var->static_fields)->___s_BeginGroupHash_8;
		int32_t L_1 = GUIUtility_GetControlID_m4984(NULL /*static, unused*/, L_0, 2, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIContent_t264 * L_2 = ___content;
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent_t264 * L_3 = ((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___none_6;
		if ((!(((Object_t*)(GUIContent_t264 *)L_2) == ((Object_t*)(GUIContent_t264 *)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		GUIStyle_t220 * L_4 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_5 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t220 *)L_4) == ((Object_t*)(GUIStyle_t220 *)L_5)))
		{
			goto IL_006d;
		}
	}

IL_0027:
	{
		Event_t400 * L_6 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = Event_get_type_m2986(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_003e;
		}
	}
	{
		goto IL_004c;
	}

IL_003e:
	{
		GUIStyle_t220 * L_9 = ___style;
		Rect_t232  L_10 = ___position;
		GUIContent_t264 * L_11 = ___content;
		int32_t L_12 = V_0;
		NullCheck(L_9);
		GUIStyle_Draw_m4947(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		goto IL_006d;
	}

IL_004c:
	{
		Event_t400 * L_13 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector2_t85  L_14 = Event_get_mousePosition_m4725(L_13, /*hidden argument*/NULL);
		bool L_15 = Rect_Contains_m3902((&___position), L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		GUIUtility_set_mouseUsed_m4988(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0068:
	{
		goto IL_006d;
	}

IL_006d:
	{
		Rect_t232  L_16 = ___position;
		Vector2_t85  L_17 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t85  L_18 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIClip_Push_m4989(NULL /*static, unused*/, L_16, L_17, L_18, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::EndGroup()
extern "C" void GUI_EndGroup_m4791 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		GUIClip_Pop_m4991(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t265_il2cpp_TypeInfo_var;
extern "C" void GUI_CallWindowDelegate_m4792 (Object_t * __this /* static, unused */, WindowFunction_t831 * ___func, int32_t ___id, GUISkin_t231 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t220 * ___style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		GUILayoutOptionU5BU5D_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(145);
		s_Il2CppMethodIntialized = true;
	}
	GUISkin_t231 * V_0 = {0};
	GUILayoutOptionU5BU5D_t265* V_1 = {0};
	{
		int32_t L_0 = ___id;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		GUILayoutUtility_SelectIDList_m4816(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUISkin_t231 * L_1 = GUI_get_skin_m1078(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t400 * L_2 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m2986(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_4 = ___forceRect;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		GUILayoutOptionU5BU5D_t265* L_5 = ((GUILayoutOptionU5BU5D_t265*)SZArrayNew(GUILayoutOptionU5BU5D_t265_il2cpp_TypeInfo_var, 2));
		float L_6 = ___width;
		GUILayoutOption_t844 * L_7 = GUILayout_Width_m4812(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_7);
		*((GUILayoutOption_t844 **)(GUILayoutOption_t844 **)SZArrayLdElema(L_5, 0, sizeof(GUILayoutOption_t844 *))) = (GUILayoutOption_t844 *)L_7;
		GUILayoutOptionU5BU5D_t265* L_8 = L_5;
		float L_9 = ___height;
		GUILayoutOption_t844 * L_10 = GUILayout_Height_m4813(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_10);
		*((GUILayoutOption_t844 **)(GUILayoutOption_t844 **)SZArrayLdElema(L_8, 1, sizeof(GUILayoutOption_t844 *))) = (GUILayoutOption_t844 *)L_10;
		V_1 = L_8;
		int32_t L_11 = ___id;
		GUIStyle_t220 * L_12 = ___style;
		GUILayoutOptionU5BU5D_t265* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m4818(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_004d:
	{
		int32_t L_14 = ___id;
		GUIStyle_t220 * L_15 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m4818(NULL /*static, unused*/, L_14, L_15, (GUILayoutOptionU5BU5D_t265*)(GUILayoutOptionU5BU5D_t265*)NULL, /*hidden argument*/NULL);
	}

IL_0056:
	{
		GUISkin_t231 * L_16 = ____skin;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_set_skin_m4785(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		WindowFunction_t831 * L_17 = ___func;
		int32_t L_18 = ___id;
		NullCheck(L_17);
		WindowFunction_Invoke_m4780(L_17, L_18, /*hidden argument*/NULL);
		Event_t400 * L_19 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = Event_get_type_m2986(L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		GUILayoutUtility_Layout_m4819(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0078:
	{
		GUISkin_t231 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_set_skin_m4785(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color UnityEngine.GUI::get_color()
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" Color_t12  GUI_get_color_m4793 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	Color_t12  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_INTERNAL_get_color_m4794(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Color_t12  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUI_set_color_m3822 (Object_t * __this /* static, unused */, Color_t12  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_INTERNAL_set_color_m4795(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m4794 (Object_t * __this /* static, unused */, Color_t12 * ___value, const MethodInfo* method)
{
	typedef void (*GUI_INTERNAL_get_color_m4794_ftn) (Color_t12 *);
	static GUI_INTERNAL_get_color_m4794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_INTERNAL_get_color_m4794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_set_color_m4795 (Object_t * __this /* static, unused */, Color_t12 * ___value, const MethodInfo* method)
{
	typedef void (*GUI_INTERNAL_set_color_m4795_ftn) (Color_t12 *);
	static GUI_INTERNAL_set_color_m4795_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_INTERNAL_set_color_m4795_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Color UnityEngine.GUI::get_backgroundColor()
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" Color_t12  GUI_get_backgroundColor_m1252 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	Color_t12  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_INTERNAL_get_backgroundColor_m4796(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Color_t12  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::set_backgroundColor(UnityEngine.Color)
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUI_set_backgroundColor_m1253 (Object_t * __this /* static, unused */, Color_t12  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_INTERNAL_set_backgroundColor_m4797(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::INTERNAL_get_backgroundColor(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_backgroundColor_m4796 (Object_t * __this /* static, unused */, Color_t12 * ___value, const MethodInfo* method)
{
	typedef void (*GUI_INTERNAL_get_backgroundColor_m4796_ftn) (Color_t12 *);
	static GUI_INTERNAL_get_backgroundColor_m4796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_INTERNAL_get_backgroundColor_m4796_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::INTERNAL_get_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.GUI::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_set_backgroundColor_m4797 (Object_t * __this /* static, unused */, Color_t12 * ___value, const MethodInfo* method)
{
	typedef void (*GUI_INTERNAL_set_backgroundColor_m4797_ftn) (Color_t12 *);
	static GUI_INTERNAL_set_backgroundColor_m4797_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_INTERNAL_set_backgroundColor_m4797_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::INTERNAL_set_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m4798 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*GUI_set_changed_m4798_ftn) (bool);
	static GUI_set_changed_m4798_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_changed_m4798_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUI_DoLabel_m4799 (Object_t * __this /* static, unused */, Rect_t232  ___position, GUIContent_t264 * ___content, IntPtr_t ___style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t264 * L_0 = ___content;
		IntPtr_t L_1 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_INTERNAL_CALL_DoLabel_m4800(NULL /*static, unused*/, (&___position), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m4800 (Object_t * __this /* static, unused */, Rect_t232 * ___position, GUIContent_t264 * ___content, IntPtr_t ___style, const MethodInfo* method)
{
	typedef void (*GUI_INTERNAL_CALL_DoLabel_m4800_ftn) (Rect_t232 *, GUIContent_t264 *, IntPtr_t);
	static GUI_INTERNAL_CALL_DoLabel_m4800_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_INTERNAL_CALL_DoLabel_m4800_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)");
	_il2cpp_icall_func(___position, ___content, ___style);
}
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t5 * GUI_get_blendMaterial_m4801 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t5 * (*GUI_get_blendMaterial_m4801_ftn) ();
	static GUI_get_blendMaterial_m4801_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_get_blendMaterial_m4801_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::get_blendMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t5 * GUI_get_blitMaterial_m4802 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t5 * (*GUI_get_blitMaterial_m4802_ftn) ();
	static GUI_get_blitMaterial_m4802_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_get_blitMaterial_m4802_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::get_blitMaterial()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" bool GUI_DoButton_m4803 (Object_t * __this /* static, unused */, Rect_t232  ___position, GUIContent_t264 * ___content, IntPtr_t ___style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t264 * L_0 = ___content;
		IntPtr_t L_1 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		bool L_2 = GUI_INTERNAL_CALL_DoButton_m4804(NULL /*static, unused*/, (&___position), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m4804 (Object_t * __this /* static, unused */, Rect_t232 * ___position, GUIContent_t264 * ___content, IntPtr_t ___style, const MethodInfo* method)
{
	typedef bool (*GUI_INTERNAL_CALL_DoButton_m4804_ftn) (Rect_t232 *, GUIContent_t264 *, IntPtr_t);
	static GUI_INTERNAL_CALL_DoButton_m4804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_INTERNAL_CALL_DoButton_m4804_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)");
	return _il2cpp_icall_func(___position, ___content, ___style);
}
// System.Void UnityEngine.GUIContent::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent__ctor_m4805 (GUIContent_t264 * __this, const MethodInfo* method)
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
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent__ctor_m1254 (GUIContent_t264 * __this, String_t* ___text, const MethodInfo* method)
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
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___text;
		__this->___m_Text_0 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent__ctor_m4806 (GUIContent_t264 * __this, GUIContent_t264 * ___src, const MethodInfo* method)
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
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		GUIContent_t264 * L_2 = ___src;
		NullCheck(L_2);
		String_t* L_3 = (L_2->___m_Text_0);
		__this->___m_Text_0 = L_3;
		GUIContent_t264 * L_4 = ___src;
		NullCheck(L_4);
		Texture_t40 * L_5 = (L_4->___m_Image_1);
		__this->___m_Image_1 = L_5;
		GUIContent_t264 * L_6 = ___src;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___m_Tooltip_2);
		__this->___m_Tooltip_2 = L_7;
		return;
	}
}
// System.Void UnityEngine.GUIContent::.cctor()
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
extern TypeInfo* GUIContent_t264_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent__cctor_m4807 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t264 * L_0 = (GUIContent_t264 *)il2cpp_codegen_object_new (GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent__ctor_m4805(L_0, /*hidden argument*/NULL);
		((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_Text_3 = L_0;
		GUIContent_t264 * L_1 = (GUIContent_t264 *)il2cpp_codegen_object_new (GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent__ctor_m4805(L_1, /*hidden argument*/NULL);
		((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_Image_4 = L_1;
		GUIContent_t264 * L_2 = (GUIContent_t264 *)il2cpp_codegen_object_new (GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent__ctor_m4805(L_2, /*hidden argument*/NULL);
		((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_5 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t264 * L_4 = (GUIContent_t264 *)il2cpp_codegen_object_new (GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent__ctor_m1254(L_4, L_3, /*hidden argument*/NULL);
		((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___none_6 = L_4;
		return;
	}
}
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern TypeInfo* GUIContent_t264_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" GUIContent_t264 * GUIContent_Temp_m4808 (Object_t * __this /* static, unused */, String_t* ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent_t264 * L_0 = ((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_Text_3;
		String_t* L_1 = ___t;
		NullCheck(L_0);
		L_0->___m_Text_0 = L_1;
		GUIContent_t264 * L_2 = ((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_Text_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_2);
		L_2->___m_Tooltip_2 = L_3;
		GUIContent_t264 * L_4 = ((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_Text_3;
		return L_4;
	}
}
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern TypeInfo* GUIContent_t264_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent_ClearStaticCache_m4809 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent_t264 * L_0 = ((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_Text_3;
		NullCheck(L_0);
		L_0->___m_Text_0 = (String_t*)NULL;
		GUIContent_t264 * L_1 = ((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_Text_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_1);
		L_1->___m_Tooltip_2 = L_2;
		GUIContent_t264 * L_3 = ((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_Image_4;
		NullCheck(L_3);
		L_3->___m_Image_1 = (Texture_t40 *)NULL;
		GUIContent_t264 * L_4 = ((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_Image_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_4);
		L_4->___m_Tooltip_2 = L_5;
		GUIContent_t264 * L_6 = ((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_5;
		NullCheck(L_6);
		L_6->___m_Text_0 = (String_t*)NULL;
		GUIContent_t264 * L_7 = ((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_5;
		NullCheck(L_7);
		L_7->___m_Image_1 = (Texture_t40 *)NULL;
		return;
	}
}
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayout.h"
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroup.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntry.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtility.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_Type.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOptionMethodDeclarations.h"
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
extern TypeInfo* GUIContent_t264_il2cpp_TypeInfo_var;
extern "C" void GUILayout_Label_m1257 (Object_t * __this /* static, unused */, String_t* ___text, GUIStyle_t220 * ___style, GUILayoutOptionU5BU5D_t265* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent_t264 * L_1 = GUIContent_Temp_m4808(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		GUIStyle_t220 * L_2 = ___style;
		GUILayoutOptionU5BU5D_t265* L_3 = ___options;
		GUILayout_DoLabel_m4810(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUILayout_DoLabel_m4810 (Object_t * __this /* static, unused */, GUIContent_t264 * ___content, GUIStyle_t220 * ___style, GUILayoutOptionU5BU5D_t265* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t264 * L_0 = ___content;
		GUIStyle_t220 * L_1 = ___style;
		GUILayoutOptionU5BU5D_t265* L_2 = ___options;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		Rect_t232  L_3 = GUILayoutUtility_GetRect_m4825(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		GUIContent_t264 * L_4 = ___content;
		GUIStyle_t220 * L_5 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_Label_m4787(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
extern TypeInfo* GUIContent_t264_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" void GUILayout_BeginArea_m1256 (Object_t * __this /* static, unused */, Rect_t232  ___screenRect, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t232  L_0 = ___screenRect;
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent_t264 * L_1 = ((GUIContent_t264_StaticFields*)GUIContent_t264_il2cpp_TypeInfo_var->static_fields)->___none_6;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_2 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_BeginArea_m4811(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern const Il2CppType* GUILayoutGroup_t836_0_0_0_var;
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUILayout_BeginArea_m4811 (Object_t * __this /* static, unused */, Rect_t232  ___screenRect, GUIContent_t264 * ___content, GUIStyle_t220 * ___style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutGroup_t836_0_0_0_var = il2cpp_codegen_type_from_index(527);
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutGroup_t836 * V_0 = {0};
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m4982(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIStyle_t220 * L_0 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(GUILayoutGroup_t836_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		GUILayoutGroup_t836 * L_2 = GUILayoutUtility_BeginLayoutArea_m4824(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Event_t400 * L_3 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = Event_get_type_m2986(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)8))))
		{
			goto IL_0088;
		}
	}
	{
		GUILayoutGroup_t836 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___resetCoords_12 = 1;
		GUILayoutGroup_t836 * L_6 = V_0;
		GUILayoutGroup_t836 * L_7 = V_0;
		float L_8 = Rect_get_width_m2877((&___screenRect), /*hidden argument*/NULL);
		float L_9 = L_8;
		V_1 = L_9;
		NullCheck(L_7);
		((GUILayoutEntry_t839 *)L_7)->___maxWidth_1 = L_9;
		float L_10 = V_1;
		NullCheck(L_6);
		((GUILayoutEntry_t839 *)L_6)->___minWidth_0 = L_10;
		GUILayoutGroup_t836 * L_11 = V_0;
		GUILayoutGroup_t836 * L_12 = V_0;
		float L_13 = Rect_get_height_m2831((&___screenRect), /*hidden argument*/NULL);
		float L_14 = L_13;
		V_1 = L_14;
		NullCheck(L_12);
		((GUILayoutEntry_t839 *)L_12)->___maxHeight_3 = L_14;
		float L_15 = V_1;
		NullCheck(L_11);
		((GUILayoutEntry_t839 *)L_11)->___minHeight_2 = L_15;
		GUILayoutGroup_t836 * L_16 = V_0;
		float L_17 = Rect_get_xMin_m2946((&___screenRect), /*hidden argument*/NULL);
		float L_18 = Rect_get_yMin_m2945((&___screenRect), /*hidden argument*/NULL);
		GUILayoutGroup_t836 * L_19 = V_0;
		NullCheck(L_19);
		Rect_t232 * L_20 = &(((GUILayoutEntry_t839 *)L_19)->___rect_4);
		float L_21 = Rect_get_xMax_m2937(L_20, /*hidden argument*/NULL);
		GUILayoutGroup_t836 * L_22 = V_0;
		NullCheck(L_22);
		Rect_t232 * L_23 = &(((GUILayoutEntry_t839 *)L_22)->___rect_4);
		float L_24 = Rect_get_yMax_m2938(L_23, /*hidden argument*/NULL);
		Rect_t232  L_25 = Rect_MinMaxRect_m4194(NULL /*static, unused*/, L_17, L_18, L_21, L_24, /*hidden argument*/NULL);
		NullCheck(L_16);
		((GUILayoutEntry_t839 *)L_16)->___rect_4 = L_25;
	}

IL_0088:
	{
		GUILayoutGroup_t836 * L_26 = V_0;
		NullCheck(L_26);
		Rect_t232  L_27 = (((GUILayoutEntry_t839 *)L_26)->___rect_4);
		GUIContent_t264 * L_28 = ___content;
		GUIStyle_t220 * L_29 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_BeginGroup_m4790(NULL /*static, unused*/, L_27, L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayout::EndArea()
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutGroup_t836_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern "C" void GUILayout_EndArea_m1258 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUILayoutGroup_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m4982(NULL /*static, unused*/, /*hidden argument*/NULL);
		Event_t400 * L_0 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Event_get_type_m2986(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_2 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_2);
		GenericStack_t832 * L_3 = (L_2->___layoutGroups_1);
		NullCheck(L_3);
		VirtFuncInvoker0< Object_t * >::Invoke(16 /* System.Object System.Collections.Stack::Pop() */, L_3);
		LayoutCache_t835 * L_4 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_5 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_5);
		GenericStack_t832 * L_6 = (L_5->___layoutGroups_1);
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Object System.Collections.Stack::Peek() */, L_6);
		NullCheck(L_4);
		L_4->___topLevel_0 = ((GUILayoutGroup_t836 *)CastclassClass(L_7, GUILayoutGroup_t836_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_EndGroup_m4791(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOptionMethodDeclarations.h"
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOption_t844_il2cpp_TypeInfo_var;
extern "C" GUILayoutOption_t844 * GUILayout_Width_m4812 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		GUILayoutOption_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___width;
		float L_1 = L_0;
		Object_t * L_2 = Box(Single_t522_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t844 * L_3 = (GUILayoutOption_t844 *)il2cpp_codegen_object_new (GUILayoutOption_t844_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m4864(L_3, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOption_t844_il2cpp_TypeInfo_var;
extern "C" GUILayoutOption_t844 * GUILayout_Height_m4813 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		GUILayoutOption_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___height;
		float L_1 = L_0;
		Object_t * L_2 = Box(Single_t522_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t844 * L_3 = (GUILayoutOption_t844 *)il2cpp_codegen_object_new (GUILayoutOption_t844_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m4864(L_3, 1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCacheMethodDeclarations.h"
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor()
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* GUILayoutGroup_t836_il2cpp_TypeInfo_var;
extern TypeInfo* GenericStack_t832_il2cpp_TypeInfo_var;
extern "C" void LayoutCache__ctor_m4814 (LayoutCache_t835 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutGroup_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		GenericStack_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayoutGroup_t836 * L_0 = (GUILayoutGroup_t836 *)il2cpp_codegen_object_new (GUILayoutGroup_t836_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m4844(L_0, /*hidden argument*/NULL);
		__this->___topLevel_0 = L_0;
		GenericStack_t832 * L_1 = (GenericStack_t832 *)il2cpp_codegen_object_new (GenericStack_t832_il2cpp_TypeInfo_var);
		GenericStack__ctor_m5172(L_1, /*hidden argument*/NULL);
		__this->___layoutGroups_1 = L_1;
		GUILayoutGroup_t836 * L_2 = (GUILayoutGroup_t836 *)il2cpp_codegen_object_new (GUILayoutGroup_t836_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m4844(L_2, /*hidden argument*/NULL);
		__this->___windows_2 = L_2;
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		GenericStack_t832 * L_3 = (__this->___layoutGroups_1);
		GUILayoutGroup_t836 * L_4 = (__this->___topLevel_0);
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_3, L_4);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_42.h"
// UnityEngine.GUIWordWrapSizer
#include "UnityEngine_UnityEngine_GUIWordWrapSizer.h"
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13MethodDeclarations.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_42MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7MethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// UnityEngine.GUIWordWrapSizer
#include "UnityEngine_UnityEngine_GUIWordWrapSizerMethodDeclarations.h"
// System.Void UnityEngine.GUILayoutUtility::.cctor()
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13MethodDeclarations.h"
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCacheMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern TypeInfo* Dictionary_2_t838_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutCache_t835_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5225_MethodInfo_var;
extern "C" void GUILayoutUtility__cctor_m4815 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		LayoutCache_t835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		Dictionary_2__ctor_m5225_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484175);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t838 * L_0 = (Dictionary_2_t838 *)il2cpp_codegen_object_new (Dictionary_2_t838_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5225(L_0, /*hidden argument*/Dictionary_2__ctor_m5225_MethodInfo_var);
		((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___s_StoredLayouts_0 = L_0;
		Dictionary_2_t838 * L_1 = (Dictionary_2_t838 *)il2cpp_codegen_object_new (Dictionary_2_t838_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5225(L_1, /*hidden argument*/Dictionary_2__ctor_m5225_MethodInfo_var);
		((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___s_StoredWindows_1 = L_1;
		LayoutCache_t835 * L_2 = (LayoutCache_t835 *)il2cpp_codegen_object_new (LayoutCache_t835_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m4814(L_2, /*hidden argument*/NULL);
		((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2 = L_2;
		Rect_t232  L_3 = {0};
		Rect__ctor_m1081(&L_3, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___kDummyRect_3 = L_3;
		return;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutCache_t835_il2cpp_TypeInfo_var;
extern "C" LayoutCache_t835 * GUILayoutUtility_SelectIDList_m4816 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		LayoutCache_t835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t838 * V_0 = {0};
	LayoutCache_t835 * V_1 = {0};
	Dictionary_2_t838 * G_B3_0 = {0};
	{
		bool L_0 = ___isWindow;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		Dictionary_2_t838 * L_1 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___s_StoredWindows_1;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		Dictionary_2_t838 * L_2 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___s_StoredLayouts_0;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		Dictionary_2_t838 * L_3 = V_0;
		int32_t L_4 = ___instanceID;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, LayoutCache_t835 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(!0,!1&) */, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		LayoutCache_t835 * L_6 = (LayoutCache_t835 *)il2cpp_codegen_object_new (LayoutCache_t835_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m4814(L_6, /*hidden argument*/NULL);
		V_1 = L_6;
		Dictionary_2_t838 * L_7 = V_0;
		int32_t L_8 = ___instanceID;
		LayoutCache_t835 * L_9 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, LayoutCache_t835 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(!0,!1) */, L_7, L_8, L_9);
		goto IL_0037;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_10 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_11 = V_1;
		NullCheck(L_11);
		GUILayoutGroup_t836 * L_12 = (L_11->___topLevel_0);
		NullCheck(L_10);
		L_10->___topLevel_0 = L_12;
		LayoutCache_t835 * L_13 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_14 = V_1;
		NullCheck(L_14);
		GenericStack_t832 * L_15 = (L_14->___layoutGroups_1);
		NullCheck(L_13);
		L_13->___layoutGroups_1 = L_15;
		LayoutCache_t835 * L_16 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_17 = V_1;
		NullCheck(L_17);
		GUILayoutGroup_t836 * L_18 = (L_17->___windows_2);
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		LayoutCache_t835 * L_19 = V_1;
		return L_19;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutGroup_t836_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Begin_m4817 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUILayoutGroup_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		s_Il2CppMethodIntialized = true;
	}
	LayoutCache_t835 * V_0 = {0};
	GUILayoutGroup_t836 * V_1 = {0};
	{
		int32_t L_0 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_1 = GUILayoutUtility_SelectIDList_m4816(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t400 * L_2 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m2986(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_4 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_5 = V_0;
		GUILayoutGroup_t836 * L_6 = (GUILayoutGroup_t836 *)il2cpp_codegen_object_new (GUILayoutGroup_t836_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m4844(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_t836 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t836 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t835 * L_9 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_9);
		GenericStack_t832 * L_10 = (L_9->___layoutGroups_1);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Collections.Stack::Clear() */, L_10);
		LayoutCache_t835 * L_11 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_11);
		GenericStack_t832 * L_12 = (L_11->___layoutGroups_1);
		LayoutCache_t835 * L_13 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_13);
		GUILayoutGroup_t836 * L_14 = (L_13->___topLevel_0);
		NullCheck(L_12);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_12, L_14);
		LayoutCache_t835 * L_15 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_16 = V_0;
		GUILayoutGroup_t836 * L_17 = (GUILayoutGroup_t836 *)il2cpp_codegen_object_new (GUILayoutGroup_t836_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m4844(L_17, /*hidden argument*/NULL);
		GUILayoutGroup_t836 * L_18 = L_17;
		V_1 = L_18;
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		GUILayoutGroup_t836 * L_19 = V_1;
		NullCheck(L_15);
		L_15->___windows_2 = L_19;
		goto IL_00a5;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_20 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_21 = V_0;
		NullCheck(L_21);
		GUILayoutGroup_t836 * L_22 = (L_21->___topLevel_0);
		NullCheck(L_20);
		L_20->___topLevel_0 = L_22;
		LayoutCache_t835 * L_23 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_24 = V_0;
		NullCheck(L_24);
		GenericStack_t832 * L_25 = (L_24->___layoutGroups_1);
		NullCheck(L_23);
		L_23->___layoutGroups_1 = L_25;
		LayoutCache_t835 * L_26 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_27 = V_0;
		NullCheck(L_27);
		GUILayoutGroup_t836 * L_28 = (L_27->___windows_2);
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutGroup_t836_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_BeginWindow_m4818 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t220 * ___style, GUILayoutOptionU5BU5D_t265* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUILayoutGroup_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		s_Il2CppMethodIntialized = true;
	}
	LayoutCache_t835 * V_0 = {0};
	GUILayoutGroup_t836 * V_1 = {0};
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_1 = GUILayoutUtility_SelectIDList_m4816(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t400 * L_2 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m2986(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_4 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_5 = V_0;
		GUILayoutGroup_t836 * L_6 = (GUILayoutGroup_t836 *)il2cpp_codegen_object_new (GUILayoutGroup_t836_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m4844(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_t836 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t836 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t835 * L_9 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_9);
		GUILayoutGroup_t836 * L_10 = (L_9->___topLevel_0);
		GUIStyle_t220 * L_11 = ___style;
		NullCheck(L_10);
		GUILayoutEntry_set_style_m4835(L_10, L_11, /*hidden argument*/NULL);
		LayoutCache_t835 * L_12 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t836 * L_13 = (L_12->___topLevel_0);
		int32_t L_14 = ___windowID;
		NullCheck(L_13);
		L_13->___windowID_16 = L_14;
		GUILayoutOptionU5BU5D_t265* L_15 = ___options;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_16 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_16);
		GUILayoutGroup_t836 * L_17 = (L_16->___topLevel_0);
		GUILayoutOptionU5BU5D_t265* L_18 = ___options;
		NullCheck(L_17);
		VirtActionInvoker1< GUILayoutOptionU5BU5D_t265* >::Invoke(10 /* System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[]) */, L_17, L_18);
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_19 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_19);
		GenericStack_t832 * L_20 = (L_19->___layoutGroups_1);
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Collections.Stack::Clear() */, L_20);
		LayoutCache_t835 * L_21 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_21);
		GenericStack_t832 * L_22 = (L_21->___layoutGroups_1);
		LayoutCache_t835 * L_23 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t836 * L_24 = (L_23->___topLevel_0);
		NullCheck(L_22);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_22, L_24);
		LayoutCache_t835 * L_25 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_26 = V_0;
		GUILayoutGroup_t836 * L_27 = (GUILayoutGroup_t836 *)il2cpp_codegen_object_new (GUILayoutGroup_t836_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m4844(L_27, /*hidden argument*/NULL);
		GUILayoutGroup_t836 * L_28 = L_27;
		V_1 = L_28;
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
		GUILayoutGroup_t836 * L_29 = V_1;
		NullCheck(L_25);
		L_25->___windows_2 = L_29;
		goto IL_00db;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_30 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_31 = V_0;
		NullCheck(L_31);
		GUILayoutGroup_t836 * L_32 = (L_31->___topLevel_0);
		NullCheck(L_30);
		L_30->___topLevel_0 = L_32;
		LayoutCache_t835 * L_33 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_34 = V_0;
		NullCheck(L_34);
		GenericStack_t832 * L_35 = (L_34->___layoutGroups_1);
		NullCheck(L_33);
		L_33->___layoutGroups_1 = L_35;
		LayoutCache_t835 * L_36 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t835 * L_37 = V_0;
		NullCheck(L_37);
		GUILayoutGroup_t836 * L_38 = (L_37->___windows_2);
		NullCheck(L_36);
		L_36->___windows_2 = L_38;
	}

IL_00db:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Layout()
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Layout_m4819 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_0 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t836 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___windowID_16);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_3 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_3);
		GUILayoutGroup_t836 * L_4 = (L_3->___topLevel_0);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_4);
		LayoutCache_t835 * L_5 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_t836 * L_6 = (L_5->___topLevel_0);
		int32_t L_7 = Screen_get_width_m428(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		float L_8 = GUIUtility_get_pixelsPerPoint_m4977(NULL /*static, unused*/, /*hidden argument*/NULL);
		LayoutCache_t835 * L_9 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_9);
		GUILayoutGroup_t836 * L_10 = (L_9->___topLevel_0);
		NullCheck(L_10);
		float L_11 = (((GUILayoutEntry_t839 *)L_10)->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Min_m323(NULL /*static, unused*/, ((float)((float)(((float)L_7))/(float)L_8)), L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_6, (0.0f), L_12);
		LayoutCache_t835 * L_13 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_13);
		GUILayoutGroup_t836 * L_14 = (L_13->___topLevel_0);
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_14);
		LayoutCache_t835 * L_15 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_15);
		GUILayoutGroup_t836 * L_16 = (L_15->___topLevel_0);
		int32_t L_17 = Screen_get_height_m429(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = GUIUtility_get_pixelsPerPoint_m4977(NULL /*static, unused*/, /*hidden argument*/NULL);
		LayoutCache_t835 * L_19 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_19);
		GUILayoutGroup_t836 * L_20 = (L_19->___topLevel_0);
		NullCheck(L_20);
		float L_21 = (((GUILayoutEntry_t839 *)L_20)->___maxHeight_3);
		float L_22 = Mathf_Min_m323(NULL /*static, unused*/, ((float)((float)(((float)L_17))/(float)L_18)), L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_16, (0.0f), L_22);
		LayoutCache_t835 * L_23 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t836 * L_24 = (L_23->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m4821(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		goto IL_00cd;
	}

IL_00af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_25 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_25);
		GUILayoutGroup_t836 * L_26 = (L_25->___topLevel_0);
		GUILayoutUtility_LayoutSingleGroup_m4822(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		LayoutCache_t835 * L_27 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_27);
		GUILayoutGroup_t836 * L_28 = (L_27->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m4821(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m4820 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_0 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t836 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_1);
		LayoutCache_t835 * L_2 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_2);
		GUILayoutGroup_t836 * L_3 = (L_2->___topLevel_0);
		int32_t L_4 = Screen_get_width_m428(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		float L_5 = GUIUtility_get_pixelsPerPoint_m4977(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_3, (0.0f), ((float)((float)(((float)L_4))/(float)L_5)));
		LayoutCache_t835 * L_6 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_6);
		GUILayoutGroup_t836 * L_7 = (L_6->___topLevel_0);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_7);
		LayoutCache_t835 * L_8 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_8);
		GUILayoutGroup_t836 * L_9 = (L_8->___topLevel_0);
		int32_t L_10 = Screen_get_height_m429(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = GUIUtility_get_pixelsPerPoint_m4977(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_9, (0.0f), ((float)((float)(((float)L_10))/(float)L_11)));
		LayoutCache_t835 * L_12 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t836 * L_13 = (L_12->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m4821(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroup.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_42MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7MethodDeclarations.h"
extern TypeInfo* GUILayoutGroup_t836_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t960_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m5226_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m5227_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m5228_MethodInfo_var;
extern "C" void GUILayoutUtility_LayoutFreeGroup_m4821 (Object_t * __this /* static, unused */, GUILayoutGroup_t836 * ___toplevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutGroup_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		Enumerator_t960_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		List_1_GetEnumerator_m5226_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		Enumerator_get_Current_m5227_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484177);
		Enumerator_MoveNext_m5228_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484178);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutGroup_t836 * V_0 = {0};
	Enumerator_t960  V_1 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GUILayoutGroup_t836 * L_0 = ___toplevel;
		NullCheck(L_0);
		List_1_t840 * L_1 = (L_0->___entries_10);
		NullCheck(L_1);
		Enumerator_t960  L_2 = List_1_GetEnumerator_m5226(L_1, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0011:
		{
			GUILayoutEntry_t839 * L_3 = Enumerator_get_Current_m5227((&V_1), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_0 = ((GUILayoutGroup_t836 *)CastclassClass(L_3, GUILayoutGroup_t836_il2cpp_TypeInfo_var));
			GUILayoutGroup_t836 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutSingleGroup_m4822(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		}

IL_0024:
		{
			bool L_5 = Enumerator_MoveNext_m5228((&V_1), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_6 = V_1;
		Enumerator_t960  L_7 = L_6;
		Object_t * L_8 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_8);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0041:
	{
		GUILayoutGroup_t836 * L_9 = ___toplevel;
		NullCheck(L_9);
		GUILayoutGroup_ResetCursor_m4848(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_LayoutSingleGroup_m4822 (Object_t * __this /* static, unused */, GUILayoutGroup_t836 * ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_t232  V_4 = {0};
	{
		GUILayoutGroup_t836 * L_0 = ___i;
		NullCheck(L_0);
		bool L_1 = (L_0->___isWindow_15);
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		GUILayoutGroup_t836 * L_2 = ___i;
		NullCheck(L_2);
		float L_3 = (((GUILayoutEntry_t839 *)L_2)->___minWidth_0);
		V_0 = L_3;
		GUILayoutGroup_t836 * L_4 = ___i;
		NullCheck(L_4);
		float L_5 = (((GUILayoutEntry_t839 *)L_4)->___maxWidth_1);
		V_1 = L_5;
		GUILayoutGroup_t836 * L_6 = ___i;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_6);
		GUILayoutGroup_t836 * L_7 = ___i;
		GUILayoutGroup_t836 * L_8 = ___i;
		NullCheck(L_8);
		Rect_t232 * L_9 = &(((GUILayoutEntry_t839 *)L_8)->___rect_4);
		float L_10 = Rect_get_x_m2879(L_9, /*hidden argument*/NULL);
		GUILayoutGroup_t836 * L_11 = ___i;
		NullCheck(L_11);
		float L_12 = (((GUILayoutEntry_t839 *)L_11)->___maxWidth_1);
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Clamp_m368(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_7, L_10, L_15);
		GUILayoutGroup_t836 * L_16 = ___i;
		NullCheck(L_16);
		float L_17 = (((GUILayoutEntry_t839 *)L_16)->___minHeight_2);
		V_2 = L_17;
		GUILayoutGroup_t836 * L_18 = ___i;
		NullCheck(L_18);
		float L_19 = (((GUILayoutEntry_t839 *)L_18)->___maxHeight_3);
		V_3 = L_19;
		GUILayoutGroup_t836 * L_20 = ___i;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_20);
		GUILayoutGroup_t836 * L_21 = ___i;
		GUILayoutGroup_t836 * L_22 = ___i;
		NullCheck(L_22);
		Rect_t232 * L_23 = &(((GUILayoutEntry_t839 *)L_22)->___rect_4);
		float L_24 = Rect_get_y_m2880(L_23, /*hidden argument*/NULL);
		GUILayoutGroup_t836 * L_25 = ___i;
		NullCheck(L_25);
		float L_26 = (((GUILayoutEntry_t839 *)L_25)->___maxHeight_3);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = Mathf_Clamp_m368(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_21, L_24, L_29);
		goto IL_00e8;
	}

IL_0074:
	{
		GUILayoutGroup_t836 * L_30 = ___i;
		NullCheck(L_30);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_30);
		GUILayoutGroup_t836 * L_31 = ___i;
		NullCheck(L_31);
		int32_t L_32 = (L_31->___windowID_16);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		Rect_t232  L_33 = GUILayoutUtility_Internal_GetWindowRect_m4828(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		GUILayoutGroup_t836 * L_34 = ___i;
		float L_35 = Rect_get_x_m2879((&V_4), /*hidden argument*/NULL);
		float L_36 = Rect_get_width_m2877((&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_t836 * L_37 = ___i;
		NullCheck(L_37);
		float L_38 = (((GUILayoutEntry_t839 *)L_37)->___minWidth_0);
		GUILayoutGroup_t836 * L_39 = ___i;
		NullCheck(L_39);
		float L_40 = (((GUILayoutEntry_t839 *)L_39)->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_41 = Mathf_Clamp_m368(NULL /*static, unused*/, L_36, L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_34, L_35, L_41);
		GUILayoutGroup_t836 * L_42 = ___i;
		NullCheck(L_42);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_42);
		GUILayoutGroup_t836 * L_43 = ___i;
		float L_44 = Rect_get_y_m2880((&V_4), /*hidden argument*/NULL);
		float L_45 = Rect_get_height_m2831((&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_t836 * L_46 = ___i;
		NullCheck(L_46);
		float L_47 = (((GUILayoutEntry_t839 *)L_46)->___minHeight_2);
		GUILayoutGroup_t836 * L_48 = ___i;
		NullCheck(L_48);
		float L_49 = (((GUILayoutEntry_t839 *)L_48)->___maxHeight_3);
		float L_50 = Mathf_Clamp_m368(NULL /*static, unused*/, L_45, L_47, L_49, /*hidden argument*/NULL);
		NullCheck(L_43);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_43, L_44, L_50);
		GUILayoutGroup_t836 * L_51 = ___i;
		NullCheck(L_51);
		int32_t L_52 = (L_51->___windowID_16);
		GUILayoutGroup_t836 * L_53 = ___i;
		NullCheck(L_53);
		Rect_t232  L_54 = (((GUILayoutEntry_t839 *)L_53)->___rect_4);
		GUILayoutUtility_Internal_MoveWindow_m4829(NULL /*static, unused*/, L_52, L_54, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		return;
	}
}
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GUILayoutGroup_t836_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutGroup_t836_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral463;
extern "C" GUILayoutGroup_t836 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m4823 (Object_t * __this /* static, unused */, Type_t * ___LayoutType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutGroup_t836_0_0_0_var = il2cpp_codegen_type_from_index(527);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		GUILayoutGroup_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		_stringLiteral463 = il2cpp_codegen_string_literal_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(GUILayoutGroup_t836_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_1 = ___LayoutType;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_t568 * L_3 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_3, _stringLiteral463, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0020:
	{
		Type_t * L_4 = ___LayoutType;
		Object_t * L_5 = Activator_CreateInstance_m5229(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return ((GUILayoutGroup_t836 *)CastclassClass(L_5, GUILayoutGroup_t836_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutArea(UnityEngine.GUIStyle,System.Type)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutGroup_t836_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t827_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral464;
extern "C" GUILayoutGroup_t836 * GUILayoutUtility_BeginLayoutArea_m4824 (Object_t * __this /* static, unused */, GUIStyle_t220 * ___style, Type_t * ___layoutType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUILayoutGroup_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		EventType_t827_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		_stringLiteral464 = il2cpp_codegen_string_literal_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutGroup_t836 * V_0 = {0};
	int32_t V_1 = {0};
	{
		Event_t400 * L_0 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Event_get_type_m2986(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)8)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)12))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0042;
	}

IL_001f:
	{
		Type_t * L_4 = ___layoutType;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		GUILayoutGroup_t836 * L_5 = GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m4823(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		GUILayoutGroup_t836 * L_6 = V_0;
		GUIStyle_t220 * L_7 = ___style;
		NullCheck(L_6);
		GUILayoutEntry_set_style_m4835(L_6, L_7, /*hidden argument*/NULL);
		LayoutCache_t835 * L_8 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_8);
		GUILayoutGroup_t836 * L_9 = (L_8->___windows_2);
		GUILayoutGroup_t836 * L_10 = V_0;
		NullCheck(L_9);
		GUILayoutGroup_Add_m4850(L_9, L_10, /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_11 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_11);
		GUILayoutGroup_t836 * L_12 = (L_11->___windows_2);
		NullCheck(L_12);
		GUILayoutEntry_t839 * L_13 = GUILayoutGroup_GetNext_m4849(L_12, /*hidden argument*/NULL);
		V_0 = ((GUILayoutGroup_t836 *)IsInstClass(L_13, GUILayoutGroup_t836_il2cpp_TypeInfo_var));
		GUILayoutGroup_t836 * L_14 = V_0;
		if (L_14)
		{
			goto IL_007c;
		}
	}
	{
		Event_t400 * L_15 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = Event_get_type_m2986(L_15, /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(EventType_t827_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m2646(NULL /*static, unused*/, _stringLiteral464, L_18, /*hidden argument*/NULL);
		ArgumentException_t568 * L_20 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_20, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_007c:
	{
		GUILayoutGroup_t836 * L_21 = V_0;
		NullCheck(L_21);
		GUILayoutGroup_ResetCursor_m4848(L_21, /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_22 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_22);
		GenericStack_t832 * L_23 = (L_22->___layoutGroups_1);
		GUILayoutGroup_t836 * L_24 = V_0;
		NullCheck(L_23);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_23, L_24);
		LayoutCache_t835 * L_25 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		GUILayoutGroup_t836 * L_26 = V_0;
		NullCheck(L_25);
		L_25->___topLevel_0 = L_26;
		GUILayoutGroup_t836 * L_27 = V_0;
		return L_27;
	}
}
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern "C" Rect_t232  GUILayoutUtility_GetRect_m4825 (Object_t * __this /* static, unused */, GUIContent_t264 * ___content, GUIStyle_t220 * ___style, GUILayoutOptionU5BU5D_t265* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t264 * L_0 = ___content;
		GUIStyle_t220 * L_1 = ___style;
		GUILayoutOptionU5BU5D_t265* L_2 = ___options;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		Rect_t232  L_3 = GUILayoutUtility_DoGetRect_m4826(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.GUIWordWrapSizer
#include "UnityEngine_UnityEngine_GUIWordWrapSizerMethodDeclarations.h"
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUIWordWrapSizer_t842_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t839_il2cpp_TypeInfo_var;
extern "C" Rect_t232  GUILayoutUtility_DoGetRect_m4826 (Object_t * __this /* static, unused */, GUIContent_t264 * ___content, GUIStyle_t220 * ___style, GUILayoutOptionU5BU5D_t265* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUIWordWrapSizer_t842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(532);
		GUILayoutEntry_t839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	int32_t V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m4982(NULL /*static, unused*/, /*hidden argument*/NULL);
		Event_t400 * L_0 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Event_get_type_m2986(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)8)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)12))))
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0091;
	}

IL_0024:
	{
		GUIStyle_t220 * L_4 = ___style;
		NullCheck(L_4);
		bool L_5 = GUIStyle_get_isHeightDependantOnWidth_m4951(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_6 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_6);
		GUILayoutGroup_t836 * L_7 = (L_6->___topLevel_0);
		GUIStyle_t220 * L_8 = ___style;
		GUIContent_t264 * L_9 = ___content;
		GUILayoutOptionU5BU5D_t265* L_10 = ___options;
		GUIWordWrapSizer_t842 * L_11 = (GUIWordWrapSizer_t842 *)il2cpp_codegen_object_new (GUIWordWrapSizer_t842_il2cpp_TypeInfo_var);
		GUIWordWrapSizer__ctor_m4861(L_11, L_8, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		GUILayoutGroup_Add_m4850(L_7, L_11, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_004b:
	{
		GUIStyle_t220 * L_12 = ___style;
		GUIContent_t264 * L_13 = ___content;
		NullCheck(L_12);
		Vector2_t85  L_14 = GUIStyle_CalcSize_m1255(L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_15 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_15);
		GUILayoutGroup_t836 * L_16 = (L_15->___topLevel_0);
		float L_17 = ((&V_0)->___x_1);
		float L_18 = ((&V_0)->___x_1);
		float L_19 = ((&V_0)->___y_2);
		float L_20 = ((&V_0)->___y_2);
		GUIStyle_t220 * L_21 = ___style;
		GUILayoutOptionU5BU5D_t265* L_22 = ___options;
		GUILayoutEntry_t839 * L_23 = (GUILayoutEntry_t839 *)il2cpp_codegen_object_new (GUILayoutEntry_t839_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m4832(L_23, L_17, L_18, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_16);
		GUILayoutGroup_Add_m4850(L_16, L_23, /*hidden argument*/NULL);
	}

IL_0085:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		Rect_t232  L_24 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___kDummyRect_3;
		return L_24;
	}

IL_008b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		Rect_t232  L_25 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___kDummyRect_3;
		return L_25;
	}

IL_0091:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		LayoutCache_t835 * L_26 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_26);
		GUILayoutGroup_t836 * L_27 = (L_26->___topLevel_0);
		NullCheck(L_27);
		GUILayoutEntry_t839 * L_28 = GUILayoutGroup_GetNext_m4849(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Rect_t232  L_29 = (L_28->___rect_4);
		return L_29;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t220 * GUILayoutUtility_get_spaceStyle_m4827 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_0 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t220 * L_1 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_2 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		NullCheck(L_2);
		GUIStyle_set_stretchWidth_m4967(L_2, 0, /*hidden argument*/NULL);
		GUIStyle_t220 * L_3 = ((GUILayoutUtility_t837_StaticFields*)GUILayoutUtility_t837_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		return L_3;
	}
}
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t232  GUILayoutUtility_Internal_GetWindowRect_m4828 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method)
{
	typedef Rect_t232  (*GUILayoutUtility_Internal_GetWindowRect_m4828_ftn) (int32_t);
	static GUILayoutUtility_Internal_GetWindowRect_m4828_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_GetWindowRect_m4828_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)");
	return _il2cpp_icall_func(___windowID);
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Internal_MoveWindow_m4829 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t232  ___r, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m4830(NULL /*static, unused*/, L_0, (&___r), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m4830 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t232 * ___r, const MethodInfo* method)
{
	typedef void (*GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m4830_ftn) (int32_t, Rect_t232 *);
	static GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m4830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m4830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID, ___r);
}
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry__ctor_m4831 (GUILayoutEntry_t839 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t220 * ____style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t232  L_0 = {0};
		Rect__ctor_m1081(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rect_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_1 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_Style_7 = L_1;
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		float L_2 = ____minWidth;
		__this->___minWidth_0 = L_2;
		float L_3 = ____maxWidth;
		__this->___maxWidth_1 = L_3;
		float L_4 = ____minHeight;
		__this->___minHeight_2 = L_4;
		float L_5 = ____maxHeight;
		__this->___maxHeight_3 = L_5;
		GUIStyle_t220 * L_6 = ____style;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_7 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		____style = L_7;
	}

IL_005b:
	{
		GUIStyle_t220 * L_8 = ____style;
		GUILayoutEntry_set_style_m4835(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
#include "UnityEngine_ArrayTypes.h"
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry__ctor_m4832 (GUILayoutEntry_t839 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t220 * ____style, GUILayoutOptionU5BU5D_t265* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t232  L_0 = {0};
		Rect__ctor_m1081(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rect_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_1 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_Style_7 = L_1;
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		float L_2 = ____minWidth;
		__this->___minWidth_0 = L_2;
		float L_3 = ____maxWidth;
		__this->___maxWidth_1 = L_3;
		float L_4 = ____minHeight;
		__this->___minHeight_2 = L_4;
		float L_5 = ____maxHeight;
		__this->___maxHeight_3 = L_5;
		GUIStyle_t220 * L_6 = ____style;
		GUILayoutEntry_set_style_m4835(__this, L_6, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t265* L_7 = ___options;
		VirtActionInvoker1< GUILayoutOptionU5BU5D_t265* >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[]) */, __this, L_7);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern TypeInfo* GUILayoutEntry_t839_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry__cctor_m4833 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutEntry_t839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t232  L_0 = {0};
		Rect__ctor_m1081(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutEntry_t839_StaticFields*)GUILayoutEntry_t839_il2cpp_TypeInfo_var->static_fields)->___kDummyRect_8 = L_0;
		((GUILayoutEntry_t839_StaticFields*)GUILayoutEntry_t839_il2cpp_TypeInfo_var->static_fields)->___indent_9 = 0;
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" GUIStyle_t220 * GUILayoutEntry_get_style_m4834 (GUILayoutEntry_t839 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_Style_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_set_style_m4835 (GUILayoutEntry_t839 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_Style_7 = L_0;
		GUIStyle_t220 * L_1 = ___value;
		VirtActionInvoker1< GUIStyle_t220 * >::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle) */, __this, L_1);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern "C" RectOffset_t263 * GUILayoutEntry_get_margin_m4836 (GUILayoutEntry_t839 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_t263 * L_1 = GUIStyle_get_margin_m4945(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C" void GUILayoutEntry_CalcWidth_m4837 (GUILayoutEntry_t839 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C" void GUILayoutEntry_CalcHeight_m4838 (GUILayoutEntry_t839 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetHorizontal_m4839 (GUILayoutEntry_t839 * __this, float ___x, float ___width, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___rect_4);
		float L_1 = ___x;
		Rect_set_x_m2926(L_0, L_1, /*hidden argument*/NULL);
		Rect_t232 * L_2 = &(__this->___rect_4);
		float L_3 = ___width;
		Rect_set_width_m2925(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetVertical_m4840 (GUILayoutEntry_t839 * __this, float ___y, float ___height, const MethodInfo* method)
{
	{
		Rect_t232 * L_0 = &(__this->___rect_4);
		float L_1 = ___y;
		Rect_set_y_m2924(L_0, L_1, /*hidden argument*/NULL);
		Rect_t232 * L_2 = &(__this->___rect_4);
		float L_3 = ___height;
		Rect_set_height_m2923(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_ApplyStyleSettings_m4841 (GUILayoutEntry_t839 * __this, GUIStyle_t220 * ___style, const MethodInfo* method)
{
	GUILayoutEntry_t839 * G_B3_0 = {0};
	GUILayoutEntry_t839 * G_B1_0 = {0};
	GUILayoutEntry_t839 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	GUILayoutEntry_t839 * G_B4_1 = {0};
	GUILayoutEntry_t839 * G_B7_0 = {0};
	GUILayoutEntry_t839 * G_B5_0 = {0};
	GUILayoutEntry_t839 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	GUILayoutEntry_t839 * G_B8_1 = {0};
	{
		GUIStyle_t220 * L_0 = ___style;
		NullCheck(L_0);
		float L_1 = GUIStyle_get_fixedWidth_m4964(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		GUIStyle_t220 * L_2 = ___style;
		NullCheck(L_2);
		bool L_3 = GUIStyle_get_stretchWidth_m4966(L_2, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		G_B4_1->___stretchWidth_5 = G_B4_0;
		GUIStyle_t220 * L_4 = ___style;
		NullCheck(L_4);
		float L_5 = GUIStyle_get_fixedHeight_m4965(L_4, /*hidden argument*/NULL);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004a;
		}
	}
	{
		GUIStyle_t220 * L_6 = ___style;
		NullCheck(L_6);
		bool L_7 = GUIStyle_get_stretchHeight_m4968(L_6, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_004a;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_004b:
	{
		NullCheck(G_B8_1);
		G_B8_1->___stretchHeight_6 = G_B8_0;
		GUIStyle_t220 * L_8 = ___style;
		__this->___m_Style_7 = L_8;
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t246_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry_ApplyOptions_m4842 (GUILayoutEntry_t839 * __this, GUILayoutOptionU5BU5D_t265* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		Int32_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutOption_t844 * V_0 = {0};
	GUILayoutOptionU5BU5D_t265* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	float V_4 = 0.0f;
	{
		GUILayoutOptionU5BU5D_t265* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t265* L_1 = ___options;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a0;
	}

IL_0010:
	{
		GUILayoutOptionU5BU5D_t265* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(GUILayoutOption_t844 **)(GUILayoutOption_t844 **)SZArrayLdElema(L_2, L_4, sizeof(GUILayoutOption_t844 *)));
		GUILayoutOption_t844 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___type_0);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7 == 0)
		{
			goto IL_0046;
		}
		if (L_7 == 1)
		{
			goto IL_006e;
		}
		if (L_7 == 2)
		{
			goto IL_0096;
		}
		if (L_7 == 3)
		{
			goto IL_00c9;
		}
		if (L_7 == 4)
		{
			goto IL_0103;
		}
		if (L_7 == 5)
		{
			goto IL_0136;
		}
		if (L_7 == 6)
		{
			goto IL_0170;
		}
		if (L_7 == 7)
		{
			goto IL_0186;
		}
	}
	{
		goto IL_019c;
	}

IL_0046:
	{
		GUILayoutOption_t844 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___value_1);
		float L_10 = ((*(float*)((float*)UnBox (L_9, Single_t522_il2cpp_TypeInfo_var))));
		V_4 = L_10;
		__this->___maxWidth_1 = L_10;
		float L_11 = V_4;
		__this->___minWidth_0 = L_11;
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_006e:
	{
		GUILayoutOption_t844 * L_12 = V_0;
		NullCheck(L_12);
		Object_t * L_13 = (L_12->___value_1);
		float L_14 = ((*(float*)((float*)UnBox (L_13, Single_t522_il2cpp_TypeInfo_var))));
		V_4 = L_14;
		__this->___maxHeight_3 = L_14;
		float L_15 = V_4;
		__this->___minHeight_2 = L_15;
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0096:
	{
		GUILayoutOption_t844 * L_16 = V_0;
		NullCheck(L_16);
		Object_t * L_17 = (L_16->___value_1);
		__this->___minWidth_0 = ((*(float*)((float*)UnBox (L_17, Single_t522_il2cpp_TypeInfo_var))));
		float L_18 = (__this->___maxWidth_1);
		float L_19 = (__this->___minWidth_0);
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00c4;
		}
	}
	{
		float L_20 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_20;
	}

IL_00c4:
	{
		goto IL_019c;
	}

IL_00c9:
	{
		GUILayoutOption_t844 * L_21 = V_0;
		NullCheck(L_21);
		Object_t * L_22 = (L_21->___value_1);
		__this->___maxWidth_1 = ((*(float*)((float*)UnBox (L_22, Single_t522_il2cpp_TypeInfo_var))));
		float L_23 = (__this->___minWidth_0);
		float L_24 = (__this->___maxWidth_1);
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00f7;
		}
	}
	{
		float L_25 = (__this->___maxWidth_1);
		__this->___minWidth_0 = L_25;
	}

IL_00f7:
	{
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_0103:
	{
		GUILayoutOption_t844 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = (L_26->___value_1);
		__this->___minHeight_2 = ((*(float*)((float*)UnBox (L_27, Single_t522_il2cpp_TypeInfo_var))));
		float L_28 = (__this->___maxHeight_3);
		float L_29 = (__this->___minHeight_2);
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0131;
		}
	}
	{
		float L_30 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_30;
	}

IL_0131:
	{
		goto IL_019c;
	}

IL_0136:
	{
		GUILayoutOption_t844 * L_31 = V_0;
		NullCheck(L_31);
		Object_t * L_32 = (L_31->___value_1);
		__this->___maxHeight_3 = ((*(float*)((float*)UnBox (L_32, Single_t522_il2cpp_TypeInfo_var))));
		float L_33 = (__this->___minHeight_2);
		float L_34 = (__this->___maxHeight_3);
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_0164;
		}
	}
	{
		float L_35 = (__this->___maxHeight_3);
		__this->___minHeight_2 = L_35;
	}

IL_0164:
	{
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0170:
	{
		GUILayoutOption_t844 * L_36 = V_0;
		NullCheck(L_36);
		Object_t * L_37 = (L_36->___value_1);
		__this->___stretchWidth_5 = ((*(int32_t*)((int32_t*)UnBox (L_37, Int32_t246_il2cpp_TypeInfo_var))));
		goto IL_019c;
	}

IL_0186:
	{
		GUILayoutOption_t844 * L_38 = V_0;
		NullCheck(L_38);
		Object_t * L_39 = (L_38->___value_1);
		__this->___stretchHeight_6 = ((*(int32_t*)((int32_t*)UnBox (L_39, Int32_t246_il2cpp_TypeInfo_var))));
		goto IL_019c;
	}

IL_019c:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_01a0:
	{
		int32_t L_41 = V_2;
		GUILayoutOptionU5BU5D_t265* L_42 = V_1;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		float L_43 = (__this->___maxWidth_1);
		if ((((float)L_43) == ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_44 = (__this->___maxWidth_1);
		float L_45 = (__this->___minWidth_0);
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_46 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_46;
	}

IL_01d6:
	{
		float L_47 = (__this->___maxHeight_3);
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0203;
		}
	}
	{
		float L_48 = (__this->___maxHeight_3);
		float L_49 = (__this->___minHeight_2);
		if ((!(((float)L_48) < ((float)L_49))))
		{
			goto IL_0203;
		}
	}
	{
		float L_50 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_50;
	}

IL_0203:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutEntry::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t839_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral465;
extern Il2CppCodeGenString* _stringLiteral466;
extern Il2CppCodeGenString* _stringLiteral467;
extern Il2CppCodeGenString* _stringLiteral468;
extern Il2CppCodeGenString* _stringLiteral469;
extern Il2CppCodeGenString* _stringLiteral470;
extern Il2CppCodeGenString* _stringLiteral471;
extern "C" String_t* GUILayoutEntry_ToString_m4843 (GUILayoutEntry_t839 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GUILayoutEntry_t839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		_stringLiteral465 = il2cpp_codegen_string_literal_from_index(465);
		_stringLiteral466 = il2cpp_codegen_string_literal_from_index(466);
		_stringLiteral467 = il2cpp_codegen_string_literal_from_index(467);
		_stringLiteral468 = il2cpp_codegen_string_literal_from_index(468);
		_stringLiteral469 = il2cpp_codegen_string_literal_from_index(469);
		_stringLiteral470 = il2cpp_codegen_string_literal_from_index(470);
		_stringLiteral471 = il2cpp_codegen_string_literal_from_index(471);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t234* G_B5_1 = {0};
	ObjectU5BU5D_t234* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B5_4 = 0;
	ObjectU5BU5D_t234* G_B5_5 = {0};
	ObjectU5BU5D_t234* G_B5_6 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t234* G_B4_1 = {0};
	ObjectU5BU5D_t234* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B4_4 = 0;
	ObjectU5BU5D_t234* G_B4_5 = {0};
	ObjectU5BU5D_t234* G_B4_6 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t234* G_B6_2 = {0};
	ObjectU5BU5D_t234* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	int32_t G_B6_5 = 0;
	ObjectU5BU5D_t234* G_B6_6 = {0};
	ObjectU5BU5D_t234* G_B6_7 = {0};
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_t234* G_B8_1 = {0};
	ObjectU5BU5D_t234* G_B8_2 = {0};
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t234* G_B7_1 = {0};
	ObjectU5BU5D_t234* G_B7_2 = {0};
	String_t* G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_t234* G_B9_2 = {0};
	ObjectU5BU5D_t234* G_B9_3 = {0};
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t234* G_B11_1 = {0};
	ObjectU5BU5D_t234* G_B11_2 = {0};
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t234* G_B10_1 = {0};
	ObjectU5BU5D_t234* G_B10_2 = {0};
	String_t* G_B12_0 = {0};
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_t234* G_B12_2 = {0};
	ObjectU5BU5D_t234* G_B12_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m430(NULL /*static, unused*/, L_1, _stringLiteral465, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t839_il2cpp_TypeInfo_var);
		int32_t L_5 = ((GUILayoutEntry_t839_StaticFields*)GUILayoutEntry_t839_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t234* L_6 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, ((int32_t)12)));
		String_t* L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 0, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_6;
		ObjectU5BU5D_t234* L_9 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 6));
		GUIStyle_t220 * L_10 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		G_B4_0 = 0;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = _stringLiteral466;
		G_B4_4 = 1;
		G_B4_5 = L_8;
		G_B4_6 = L_8;
		if (!L_10)
		{
			G_B5_0 = 0;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = _stringLiteral466;
			G_B5_4 = 1;
			G_B5_5 = L_8;
			G_B5_6 = L_8;
			goto IL_005d;
		}
	}
	{
		GUIStyle_t220 * L_11 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = GUIStyle_get_name_m4957(L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_0062;
	}

IL_005d:
	{
		G_B6_0 = _stringLiteral467;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_0062:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(Object_t *))) = (Object_t *)G_B6_0;
		ObjectU5BU5D_t234* L_13 = G_B6_3;
		Type_t * L_14 = Object_GetType_m2703(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1, sizeof(Object_t *))) = (Object_t *)L_14;
		ObjectU5BU5D_t234* L_15 = L_13;
		Rect_t232 * L_16 = &(__this->___rect_4);
		float L_17 = Rect_get_x_m2879(L_16, /*hidden argument*/NULL);
		float L_18 = L_17;
		Object_t * L_19 = Box(Single_t522_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		ArrayElementTypeCheck (L_15, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 2, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t234* L_20 = L_15;
		Rect_t232 * L_21 = &(__this->___rect_4);
		float L_22 = Rect_get_xMax_m2937(L_21, /*hidden argument*/NULL);
		float L_23 = L_22;
		Object_t * L_24 = Box(Single_t522_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 3, sizeof(Object_t *))) = (Object_t *)L_24;
		ObjectU5BU5D_t234* L_25 = L_20;
		Rect_t232 * L_26 = &(__this->___rect_4);
		float L_27 = Rect_get_y_m2880(L_26, /*hidden argument*/NULL);
		float L_28 = L_27;
		Object_t * L_29 = Box(Single_t522_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4, sizeof(Object_t *))) = (Object_t *)L_29;
		ObjectU5BU5D_t234* L_30 = L_25;
		Rect_t232 * L_31 = &(__this->___rect_4);
		float L_32 = Rect_get_yMax_m2938(L_31, /*hidden argument*/NULL);
		float L_33 = L_32;
		Object_t * L_34 = Box(Single_t522_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 5);
		ArrayElementTypeCheck (L_30, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 5, sizeof(Object_t *))) = (Object_t *)L_34;
		String_t* L_35 = UnityString_Format_m4336(NULL /*static, unused*/, G_B6_4, L_30, /*hidden argument*/NULL);
		NullCheck(G_B6_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_6, G_B6_5);
		ArrayElementTypeCheck (G_B6_6, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_6, G_B6_5, sizeof(Object_t *))) = (Object_t *)L_35;
		ObjectU5BU5D_t234* L_36 = G_B6_7;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 2);
		ArrayElementTypeCheck (L_36, _stringLiteral468);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral468;
		ObjectU5BU5D_t234* L_37 = L_36;
		float L_38 = (__this->___minWidth_0);
		float L_39 = L_38;
		Object_t * L_40 = Box(Single_t522_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 3);
		ArrayElementTypeCheck (L_37, L_40);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 3, sizeof(Object_t *))) = (Object_t *)L_40;
		ObjectU5BU5D_t234* L_41 = L_37;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 4);
		ArrayElementTypeCheck (L_41, _stringLiteral469);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral469;
		ObjectU5BU5D_t234* L_42 = L_41;
		float L_43 = (__this->___maxWidth_1);
		float L_44 = L_43;
		Object_t * L_45 = Box(Single_t522_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 5);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 5, sizeof(Object_t *))) = (Object_t *)L_45;
		ObjectU5BU5D_t234* L_46 = L_42;
		int32_t L_47 = (__this->___stretchWidth_5);
		G_B7_0 = 6;
		G_B7_1 = L_46;
		G_B7_2 = L_46;
		if (!L_47)
		{
			G_B8_0 = 6;
			G_B8_1 = L_46;
			G_B8_2 = L_46;
			goto IL_0101;
		}
	}
	{
		G_B9_0 = _stringLiteral470;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0106;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B9_0 = L_48;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0106:
	{
		NullCheck(G_B9_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B9_2, G_B9_1);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B9_2, G_B9_1, sizeof(Object_t *))) = (Object_t *)G_B9_0;
		ObjectU5BU5D_t234* L_49 = G_B9_3;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 7);
		ArrayElementTypeCheck (L_49, _stringLiteral471);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral471;
		ObjectU5BU5D_t234* L_50 = L_49;
		float L_51 = (__this->___minHeight_2);
		float L_52 = L_51;
		Object_t * L_53 = Box(Single_t522_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 8);
		ArrayElementTypeCheck (L_50, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 8, sizeof(Object_t *))) = (Object_t *)L_53;
		ObjectU5BU5D_t234* L_54 = L_50;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)9));
		ArrayElementTypeCheck (L_54, _stringLiteral469);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)_stringLiteral469;
		ObjectU5BU5D_t234* L_55 = L_54;
		float L_56 = (__this->___maxHeight_3);
		float L_57 = L_56;
		Object_t * L_58 = Box(Single_t522_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, ((int32_t)10));
		ArrayElementTypeCheck (L_55, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_58;
		ObjectU5BU5D_t234* L_59 = L_55;
		int32_t L_60 = (__this->___stretchHeight_6);
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_59;
		G_B10_2 = L_59;
		if (!L_60)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_59;
			G_B11_2 = L_59;
			goto IL_014d;
		}
	}
	{
		G_B12_0 = _stringLiteral470;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0152;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B12_0 = L_61;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0152:
	{
		NullCheck(G_B12_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B12_2, G_B12_1);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B12_2, G_B12_1, sizeof(Object_t *))) = (Object_t *)G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = String_Concat_m1089(NULL /*static, unused*/, G_B12_3, /*hidden argument*/NULL);
		return L_62;
	}
}
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// System.Void UnityEngine.GUILayoutGroup::.ctor()
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_42MethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
extern TypeInfo* List_1_t840_il2cpp_TypeInfo_var;
extern TypeInfo* RectOffset_t263_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t839_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5230_MethodInfo_var;
extern "C" void GUILayoutGroup__ctor_m4844 (GUILayoutGroup_t836 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		RectOffset_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		GUILayoutEntry_t839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		List_1__ctor_m5230_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484179);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t840 * L_0 = (List_1_t840 *)il2cpp_codegen_object_new (List_1_t840_il2cpp_TypeInfo_var);
		List_1__ctor_m5230(L_0, /*hidden argument*/List_1__ctor_m5230_MethodInfo_var);
		__this->___entries_10 = L_0;
		__this->___isVertical_11 = 1;
		__this->___sameSize_14 = 1;
		__this->___windowID_16 = (-1);
		__this->___m_StretchableCountX_18 = ((int32_t)100);
		__this->___m_StretchableCountY_19 = ((int32_t)100);
		__this->___m_ChildMinWidth_22 = (100.0f);
		__this->___m_ChildMaxWidth_23 = (100.0f);
		__this->___m_ChildMinHeight_24 = (100.0f);
		__this->___m_ChildMaxHeight_25 = (100.0f);
		RectOffset_t263 * L_1 = (RectOffset_t263 *)il2cpp_codegen_object_new (RectOffset_t263_il2cpp_TypeInfo_var);
		RectOffset__ctor_m3139(L_1, /*hidden argument*/NULL);
		__this->___m_Margin_26 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_2 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t839_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m4831(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t263 * GUILayoutGroup_get_margin_m4845 (GUILayoutGroup_t836 * __this, const MethodInfo* method)
{
	{
		RectOffset_t263 * L_0 = (__this->___m_Margin_26);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
#include "UnityEngine_ArrayTypes.h"
extern TypeInfo* Int32_t246_il2cpp_TypeInfo_var;
extern "C" void GUILayoutGroup_ApplyOptions_m4846 (GUILayoutGroup_t836 * __this, GUILayoutOptionU5BU5D_t265* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutOption_t844 * V_0 = {0};
	GUILayoutOptionU5BU5D_t265* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		GUILayoutOptionU5BU5D_t265* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t265* L_1 = ___options;
		GUILayoutEntry_ApplyOptions_m4842(__this, L_1, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t265* L_2 = ___options;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0098;
	}

IL_0017:
	{
		GUILayoutOptionU5BU5D_t265* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(GUILayoutOption_t844 **)(GUILayoutOption_t844 **)SZArrayLdElema(L_3, L_5, sizeof(GUILayoutOption_t844 *)));
		GUILayoutOption_t844 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___type_0);
		V_3 = L_7;
		int32_t L_8 = V_3;
		if (L_8 == 0)
		{
			goto IL_0065;
		}
		if (L_8 == 1)
		{
			goto IL_0071;
		}
		if (L_8 == 2)
		{
			goto IL_0065;
		}
		if (L_8 == 3)
		{
			goto IL_0065;
		}
		if (L_8 == 4)
		{
			goto IL_0071;
		}
		if (L_8 == 5)
		{
			goto IL_0071;
		}
		if (L_8 == 6)
		{
			goto IL_0094;
		}
		if (L_8 == 7)
		{
			goto IL_0094;
		}
		if (L_8 == 8)
		{
			goto IL_0094;
		}
		if (L_8 == 9)
		{
			goto IL_0094;
		}
		if (L_8 == 10)
		{
			goto IL_0094;
		}
		if (L_8 == 11)
		{
			goto IL_0094;
		}
		if (L_8 == 12)
		{
			goto IL_0094;
		}
		if (L_8 == 13)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0094;
	}

IL_0065:
	{
		__this->___m_UserSpecifiedHeight_21 = 1;
		goto IL_0094;
	}

IL_0071:
	{
		__this->___m_UserSpecifiedWidth_20 = 1;
		goto IL_0094;
	}

IL_007d:
	{
		GUILayoutOption_t844 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (L_9->___value_1);
		__this->___spacing_13 = (((float)((*(int32_t*)((int32_t*)UnBox (L_10, Int32_t246_il2cpp_TypeInfo_var))))));
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0098:
	{
		int32_t L_12 = V_2;
		GUILayoutOptionU5BU5D_t265* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
extern "C" void GUILayoutGroup_ApplyStyleSettings_m4847 (GUILayoutGroup_t836 * __this, GUIStyle_t220 * ___style, const MethodInfo* method)
{
	RectOffset_t263 * V_0 = {0};
	{
		GUIStyle_t220 * L_0 = ___style;
		GUILayoutEntry_ApplyStyleSettings_m4841(__this, L_0, /*hidden argument*/NULL);
		GUIStyle_t220 * L_1 = ___style;
		NullCheck(L_1);
		RectOffset_t263 * L_2 = GUIStyle_get_margin_m4945(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RectOffset_t263 * L_3 = (__this->___m_Margin_26);
		RectOffset_t263 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_left_m3137(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_set_left_m4936(L_3, L_5, /*hidden argument*/NULL);
		RectOffset_t263 * L_6 = (__this->___m_Margin_26);
		RectOffset_t263 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = RectOffset_get_right_m4937(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RectOffset_set_right_m4938(L_6, L_8, /*hidden argument*/NULL);
		RectOffset_t263 * L_9 = (__this->___m_Margin_26);
		RectOffset_t263 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m3138(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectOffset_set_top_m4939(L_9, L_11, /*hidden argument*/NULL);
		RectOffset_t263 * L_12 = (__this->___m_Margin_26);
		RectOffset_t263 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_bottom_m4940(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		RectOffset_set_bottom_m4941(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m4848 (GUILayoutGroup_t836 * __this, const MethodInfo* method)
{
	{
		__this->___m_Cursor_17 = 0;
		return;
	}
}
// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::GetNext()
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t246_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t827_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral472;
extern Il2CppCodeGenString* _stringLiteral473;
extern Il2CppCodeGenString* _stringLiteral474;
extern Il2CppCodeGenString* _stringLiteral475;
extern "C" GUILayoutEntry_t839 * GUILayoutGroup_GetNext_m4849 (GUILayoutGroup_t836 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Int32_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		EventType_t827_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		_stringLiteral472 = il2cpp_codegen_string_literal_from_index(472);
		_stringLiteral473 = il2cpp_codegen_string_literal_from_index(473);
		_stringLiteral474 = il2cpp_codegen_string_literal_from_index(474);
		_stringLiteral475 = il2cpp_codegen_string_literal_from_index(475);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutEntry_t839 * V_0 = {0};
	{
		int32_t L_0 = (__this->___m_Cursor_17);
		List_1_t840 * L_1 = (__this->___entries_10);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_1);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0038;
		}
	}
	{
		List_1_t840 * L_3 = (__this->___entries_10);
		int32_t L_4 = (__this->___m_Cursor_17);
		NullCheck(L_3);
		GUILayoutEntry_t839 * L_5 = (GUILayoutEntry_t839 *)VirtFuncInvoker1< GUILayoutEntry_t839 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_3, L_4);
		V_0 = L_5;
		int32_t L_6 = (__this->___m_Cursor_17);
		__this->___m_Cursor_17 = ((int32_t)((int32_t)L_6+(int32_t)1));
		GUILayoutEntry_t839 * L_7 = V_0;
		return L_7;
	}

IL_0038:
	{
		ObjectU5BU5D_t234* L_8 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 7));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, _stringLiteral472);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral472;
		ObjectU5BU5D_t234* L_9 = L_8;
		int32_t L_10 = (__this->___m_Cursor_17);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t246_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 1, sizeof(Object_t *))) = (Object_t *)L_12;
		ObjectU5BU5D_t234* L_13 = L_9;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 2);
		ArrayElementTypeCheck (L_13, _stringLiteral473);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral473;
		ObjectU5BU5D_t234* L_14 = L_13;
		List_1_t840 * L_15 = (__this->___entries_10);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_15);
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t246_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 3);
		ArrayElementTypeCheck (L_14, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 3, sizeof(Object_t *))) = (Object_t *)L_18;
		ObjectU5BU5D_t234* L_19 = L_14;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 4);
		ArrayElementTypeCheck (L_19, _stringLiteral474);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral474;
		ObjectU5BU5D_t234* L_20 = L_19;
		Event_t400 * L_21 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22 = Event_get_rawType_m2985(L_21, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(EventType_t827_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5, sizeof(Object_t *))) = (Object_t *)L_24;
		ObjectU5BU5D_t234* L_25 = L_20;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 6);
		ArrayElementTypeCheck (L_25, _stringLiteral475);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral475;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m1089(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		ArgumentException_t568 * L_27 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_27, L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_27);
	}
}
// System.Void UnityEngine.GUILayoutGroup::Add(UnityEngine.GUILayoutEntry)
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntry.h"
extern "C" void GUILayoutGroup_Add_m4850 (GUILayoutGroup_t836 * __this, GUILayoutEntry_t839 * ___e, const MethodInfo* method)
{
	{
		List_1_t840 * L_0 = (__this->___entries_10);
		GUILayoutEntry_t839 * L_1 = ___e;
		NullCheck(L_0);
		VirtActionInvoker1< GUILayoutEntry_t839 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7MethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t960_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m5226_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m5227_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m5228_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcWidth_m4851 (GUILayoutGroup_t836 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Enumerator_t960_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		List_1_GetEnumerator_m5226_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		Enumerator_get_Current_m5227_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484177);
		Enumerator_MoveNext_m5228_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484178);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	GUILayoutEntry_t839 * V_3 = {0};
	Enumerator_t960  V_4 = {0};
	RectOffset_t263 * V_5 = {0};
	int32_t V_6 = 0;
	GUILayoutEntry_t839 * V_7 = {0};
	Enumerator_t960  V_8 = {0};
	RectOffset_t263 * V_9 = {0};
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	GUILayoutGroup_t836 * G_B39_2 = {0};
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	GUILayoutGroup_t836 * G_B38_2 = {0};
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	int32_t G_B40_2 = 0;
	GUILayoutGroup_t836 * G_B40_3 = {0};
	{
		List_1_t840 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t220 * L_2 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_t263 * L_3 = GUIStyle_get_padding_m4946(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_horizontal_m3133(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)L_4));
		V_13 = L_5;
		((GUILayoutEntry_t839 *)__this)->___minWidth_0 = L_5;
		float L_6 = V_13;
		((GUILayoutEntry_t839 *)__this)->___maxWidth_1 = L_6;
		return;
	}

IL_0033:
	{
		V_0 = 0;
		V_1 = 0;
		__this->___m_ChildMinWidth_22 = (0.0f);
		__this->___m_ChildMaxWidth_23 = (0.0f);
		__this->___m_StretchableCountX_18 = 0;
		V_2 = 1;
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_016a;
		}
	}
	{
		List_1_t840 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t960  L_9 = List_1_GetEnumerator_m5226(L_8, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_4 = L_9;
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0125;
		}

IL_0073:
		{
			GUILayoutEntry_t839 * L_10 = Enumerator_get_Current_m5227((&V_4), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_3 = L_10;
			GUILayoutEntry_t839 * L_11 = V_3;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_11);
			GUILayoutEntry_t839 * L_12 = V_3;
			NullCheck(L_12);
			RectOffset_t263 * L_13 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_12);
			V_5 = L_13;
			GUILayoutEntry_t839 * L_14 = V_3;
			NullCheck(L_14);
			GUIStyle_t220 * L_15 = GUILayoutEntry_get_style_m4834(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
			GUIStyle_t220 * L_16 = GUILayoutUtility_get_spaceStyle_m4827(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t220 *)L_15) == ((Object_t*)(GUIStyle_t220 *)L_16)))
			{
				goto IL_0112;
			}
		}

IL_0099:
		{
			bool L_17 = V_2;
			if (L_17)
			{
				goto IL_00c0;
			}
		}

IL_009f:
		{
			RectOffset_t263 * L_18 = V_5;
			NullCheck(L_18);
			int32_t L_19 = RectOffset_get_left_m3137(L_18, /*hidden argument*/NULL);
			int32_t L_20 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			int32_t L_21 = Mathf_Min_m2993(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
			V_0 = L_21;
			RectOffset_t263 * L_22 = V_5;
			NullCheck(L_22);
			int32_t L_23 = RectOffset_get_right_m4937(L_22, /*hidden argument*/NULL);
			int32_t L_24 = V_1;
			int32_t L_25 = Mathf_Min_m2993(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
			V_1 = L_25;
			goto IL_00d2;
		}

IL_00c0:
		{
			RectOffset_t263 * L_26 = V_5;
			NullCheck(L_26);
			int32_t L_27 = RectOffset_get_left_m3137(L_26, /*hidden argument*/NULL);
			V_0 = L_27;
			RectOffset_t263 * L_28 = V_5;
			NullCheck(L_28);
			int32_t L_29 = RectOffset_get_right_m4937(L_28, /*hidden argument*/NULL);
			V_1 = L_29;
			V_2 = 0;
		}

IL_00d2:
		{
			GUILayoutEntry_t839 * L_30 = V_3;
			NullCheck(L_30);
			float L_31 = (L_30->___minWidth_0);
			RectOffset_t263 * L_32 = V_5;
			NullCheck(L_32);
			int32_t L_33 = RectOffset_get_horizontal_m3133(L_32, /*hidden argument*/NULL);
			float L_34 = (__this->___m_ChildMinWidth_22);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			float L_35 = Mathf_Max_m322(NULL /*static, unused*/, ((float)((float)L_31+(float)(((float)L_33)))), L_34, /*hidden argument*/NULL);
			__this->___m_ChildMinWidth_22 = L_35;
			GUILayoutEntry_t839 * L_36 = V_3;
			NullCheck(L_36);
			float L_37 = (L_36->___maxWidth_1);
			RectOffset_t263 * L_38 = V_5;
			NullCheck(L_38);
			int32_t L_39 = RectOffset_get_horizontal_m3133(L_38, /*hidden argument*/NULL);
			float L_40 = (__this->___m_ChildMaxWidth_23);
			float L_41 = Mathf_Max_m322(NULL /*static, unused*/, ((float)((float)L_37+(float)(((float)L_39)))), L_40, /*hidden argument*/NULL);
			__this->___m_ChildMaxWidth_23 = L_41;
		}

IL_0112:
		{
			int32_t L_42 = (__this->___m_StretchableCountX_18);
			GUILayoutEntry_t839 * L_43 = V_3;
			NullCheck(L_43);
			int32_t L_44 = (L_43->___stretchWidth_5);
			__this->___m_StretchableCountX_18 = ((int32_t)((int32_t)L_42+(int32_t)L_44));
		}

IL_0125:
		{
			bool L_45 = Enumerator_MoveNext_m5228((&V_4), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_45)
			{
				goto IL_0073;
			}
		}

IL_0131:
		{
			IL2CPP_LEAVE(0x143, FINALLY_0136);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0136;
	}

FINALLY_0136:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_46 = V_4;
		Enumerator_t960  L_47 = L_46;
		Object_t * L_48 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_48);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_48);
		IL2CPP_END_FINALLY(310)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(310)
	{
		IL2CPP_JUMP_TBL(0x143, IL_0143)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0143:
	{
		float L_49 = (__this->___m_ChildMinWidth_22);
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		__this->___m_ChildMinWidth_22 = ((float)((float)L_49-(float)(((float)((int32_t)((int32_t)L_50+(int32_t)L_51))))));
		float L_52 = (__this->___m_ChildMaxWidth_23);
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		__this->___m_ChildMaxWidth_23 = ((float)((float)L_52-(float)(((float)((int32_t)((int32_t)L_53+(int32_t)L_54))))));
		goto IL_02ea;
	}

IL_016a:
	{
		V_6 = 0;
		List_1_t840 * L_55 = (__this->___entries_10);
		NullCheck(L_55);
		Enumerator_t960  L_56 = List_1_GetEnumerator_m5226(L_55, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_8 = L_56;
	}

IL_017a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0273;
		}

IL_017f:
		{
			GUILayoutEntry_t839 * L_57 = Enumerator_get_Current_m5227((&V_8), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_7 = L_57;
			GUILayoutEntry_t839 * L_58 = V_7;
			NullCheck(L_58);
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_58);
			GUILayoutEntry_t839 * L_59 = V_7;
			NullCheck(L_59);
			RectOffset_t263 * L_60 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_59);
			V_9 = L_60;
			GUILayoutEntry_t839 * L_61 = V_7;
			NullCheck(L_61);
			GUIStyle_t220 * L_62 = GUILayoutEntry_get_style_m4834(L_61, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
			GUIStyle_t220 * L_63 = GUILayoutUtility_get_spaceStyle_m4827(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t220 *)L_62) == ((Object_t*)(GUIStyle_t220 *)L_63)))
			{
				goto IL_0237;
			}
		}

IL_01a9:
		{
			bool L_64 = V_2;
			if (L_64)
			{
				goto IL_01d2;
			}
		}

IL_01af:
		{
			int32_t L_65 = V_6;
			RectOffset_t263 * L_66 = V_9;
			NullCheck(L_66);
			int32_t L_67 = RectOffset_get_left_m3137(L_66, /*hidden argument*/NULL);
			if ((((int32_t)L_65) <= ((int32_t)L_67)))
			{
				goto IL_01c4;
			}
		}

IL_01bd:
		{
			int32_t L_68 = V_6;
			G_B22_0 = L_68;
			goto IL_01cb;
		}

IL_01c4:
		{
			RectOffset_t263 * L_69 = V_9;
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_left_m3137(L_69, /*hidden argument*/NULL);
			G_B22_0 = L_70;
		}

IL_01cb:
		{
			V_10 = G_B22_0;
			goto IL_01d7;
		}

IL_01d2:
		{
			V_10 = 0;
			V_2 = 0;
		}

IL_01d7:
		{
			float L_71 = (__this->___m_ChildMinWidth_22);
			GUILayoutEntry_t839 * L_72 = V_7;
			NullCheck(L_72);
			float L_73 = (L_72->___minWidth_0);
			float L_74 = (__this->___spacing_13);
			int32_t L_75 = V_10;
			__this->___m_ChildMinWidth_22 = ((float)((float)L_71+(float)((float)((float)((float)((float)L_73+(float)L_74))+(float)(((float)L_75))))));
			float L_76 = (__this->___m_ChildMaxWidth_23);
			GUILayoutEntry_t839 * L_77 = V_7;
			NullCheck(L_77);
			float L_78 = (L_77->___maxWidth_1);
			float L_79 = (__this->___spacing_13);
			int32_t L_80 = V_10;
			__this->___m_ChildMaxWidth_23 = ((float)((float)L_76+(float)((float)((float)((float)((float)L_78+(float)L_79))+(float)(((float)L_80))))));
			RectOffset_t263 * L_81 = V_9;
			NullCheck(L_81);
			int32_t L_82 = RectOffset_get_right_m4937(L_81, /*hidden argument*/NULL);
			V_6 = L_82;
			int32_t L_83 = (__this->___m_StretchableCountX_18);
			GUILayoutEntry_t839 * L_84 = V_7;
			NullCheck(L_84);
			int32_t L_85 = (L_84->___stretchWidth_5);
			__this->___m_StretchableCountX_18 = ((int32_t)((int32_t)L_83+(int32_t)L_85));
			goto IL_0273;
		}

IL_0237:
		{
			float L_86 = (__this->___m_ChildMinWidth_22);
			GUILayoutEntry_t839 * L_87 = V_7;
			NullCheck(L_87);
			float L_88 = (L_87->___minWidth_0);
			__this->___m_ChildMinWidth_22 = ((float)((float)L_86+(float)L_88));
			float L_89 = (__this->___m_ChildMaxWidth_23);
			GUILayoutEntry_t839 * L_90 = V_7;
			NullCheck(L_90);
			float L_91 = (L_90->___maxWidth_1);
			__this->___m_ChildMaxWidth_23 = ((float)((float)L_89+(float)L_91));
			int32_t L_92 = (__this->___m_StretchableCountX_18);
			GUILayoutEntry_t839 * L_93 = V_7;
			NullCheck(L_93);
			int32_t L_94 = (L_93->___stretchWidth_5);
			__this->___m_StretchableCountX_18 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0273:
		{
			bool L_95 = Enumerator_MoveNext_m5228((&V_8), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_95)
			{
				goto IL_017f;
			}
		}

IL_027f:
		{
			IL2CPP_LEAVE(0x291, FINALLY_0284);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0284;
	}

FINALLY_0284:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_96 = V_8;
		Enumerator_t960  L_97 = L_96;
		Object_t * L_98 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_97);
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_98);
		IL2CPP_END_FINALLY(644)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(644)
	{
		IL2CPP_JUMP_TBL(0x291, IL_0291)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0291:
	{
		float L_99 = (__this->___m_ChildMinWidth_22);
		float L_100 = (__this->___spacing_13);
		__this->___m_ChildMinWidth_22 = ((float)((float)L_99-(float)L_100));
		float L_101 = (__this->___m_ChildMaxWidth_23);
		float L_102 = (__this->___spacing_13);
		__this->___m_ChildMaxWidth_23 = ((float)((float)L_101-(float)L_102));
		List_1_t840 * L_103 = (__this->___entries_10);
		NullCheck(L_103);
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_103);
		if (!L_104)
		{
			goto IL_02e6;
		}
	}
	{
		List_1_t840 * L_105 = (__this->___entries_10);
		NullCheck(L_105);
		GUILayoutEntry_t839 * L_106 = (GUILayoutEntry_t839 *)VirtFuncInvoker1< GUILayoutEntry_t839 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_105, 0);
		NullCheck(L_106);
		RectOffset_t263 * L_107 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_106);
		NullCheck(L_107);
		int32_t L_108 = RectOffset_get_left_m3137(L_107, /*hidden argument*/NULL);
		V_0 = L_108;
		int32_t L_109 = V_6;
		V_1 = L_109;
		goto IL_02ea;
	}

IL_02e6:
	{
		int32_t L_110 = 0;
		V_1 = L_110;
		V_0 = L_110;
	}

IL_02ea:
	{
		V_11 = (0.0f);
		V_12 = (0.0f);
		GUIStyle_t220 * L_111 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_112 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(GUIStyle_t220 *)L_111) == ((Object_t*)(GUIStyle_t220 *)L_112))))
		{
			goto IL_0313;
		}
	}
	{
		bool L_113 = (__this->___m_UserSpecifiedWidth_20);
		if (!L_113)
		{
			goto IL_034a;
		}
	}

IL_0313:
	{
		GUIStyle_t220 * L_114 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_114);
		RectOffset_t263 * L_115 = GUIStyle_get_padding_m4946(L_114, /*hidden argument*/NULL);
		NullCheck(L_115);
		int32_t L_116 = RectOffset_get_left_m3137(L_115, /*hidden argument*/NULL);
		int32_t L_117 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_118 = Mathf_Max_m2991(NULL /*static, unused*/, L_116, L_117, /*hidden argument*/NULL);
		V_11 = (((float)L_118));
		GUIStyle_t220 * L_119 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_119);
		RectOffset_t263 * L_120 = GUIStyle_get_padding_m4946(L_119, /*hidden argument*/NULL);
		NullCheck(L_120);
		int32_t L_121 = RectOffset_get_right_m4937(L_120, /*hidden argument*/NULL);
		int32_t L_122 = V_1;
		int32_t L_123 = Mathf_Max_m2991(NULL /*static, unused*/, L_121, L_122, /*hidden argument*/NULL);
		V_12 = (((float)L_123));
		goto IL_036c;
	}

IL_034a:
	{
		RectOffset_t263 * L_124 = (__this->___m_Margin_26);
		int32_t L_125 = V_0;
		NullCheck(L_124);
		RectOffset_set_left_m4936(L_124, L_125, /*hidden argument*/NULL);
		RectOffset_t263 * L_126 = (__this->___m_Margin_26);
		int32_t L_127 = V_1;
		NullCheck(L_126);
		RectOffset_set_right_m4938(L_126, L_127, /*hidden argument*/NULL);
		float L_128 = (0.0f);
		V_12 = L_128;
		V_11 = L_128;
	}

IL_036c:
	{
		float L_129 = (((GUILayoutEntry_t839 *)__this)->___minWidth_0);
		float L_130 = (__this->___m_ChildMinWidth_22);
		float L_131 = V_11;
		float L_132 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_133 = Mathf_Max_m322(NULL /*static, unused*/, L_129, ((float)((float)((float)((float)L_130+(float)L_131))+(float)L_132)), /*hidden argument*/NULL);
		((GUILayoutEntry_t839 *)__this)->___minWidth_0 = L_133;
		float L_134 = (((GUILayoutEntry_t839 *)__this)->___maxWidth_1);
		if ((!(((float)L_134) == ((float)(0.0f)))))
		{
			goto IL_03db;
		}
	}
	{
		int32_t L_135 = (((GUILayoutEntry_t839 *)__this)->___stretchWidth_5);
		int32_t L_136 = (__this->___m_StretchableCountX_18);
		GUIStyle_t220 * L_137 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_137);
		bool L_138 = GUIStyle_get_stretchWidth_m4966(L_137, /*hidden argument*/NULL);
		G_B38_0 = L_136;
		G_B38_1 = L_135;
		G_B38_2 = __this;
		if (!L_138)
		{
			G_B39_0 = L_136;
			G_B39_1 = L_135;
			G_B39_2 = __this;
			goto IL_03bc;
		}
	}
	{
		G_B40_0 = 1;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		goto IL_03bd;
	}

IL_03bc:
	{
		G_B40_0 = 0;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
	}

IL_03bd:
	{
		NullCheck(G_B40_3);
		((GUILayoutEntry_t839 *)G_B40_3)->___stretchWidth_5 = ((int32_t)((int32_t)G_B40_2+(int32_t)((int32_t)((int32_t)G_B40_1+(int32_t)G_B40_0))));
		float L_139 = (__this->___m_ChildMaxWidth_23);
		float L_140 = V_11;
		float L_141 = V_12;
		((GUILayoutEntry_t839 *)__this)->___maxWidth_1 = ((float)((float)((float)((float)L_139+(float)L_140))+(float)L_141));
		goto IL_03e2;
	}

IL_03db:
	{
		((GUILayoutEntry_t839 *)__this)->___stretchWidth_5 = 0;
	}

IL_03e2:
	{
		float L_142 = (((GUILayoutEntry_t839 *)__this)->___maxWidth_1);
		float L_143 = (((GUILayoutEntry_t839 *)__this)->___minWidth_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_144 = Mathf_Max_m322(NULL /*static, unused*/, L_142, L_143, /*hidden argument*/NULL);
		((GUILayoutEntry_t839 *)__this)->___maxWidth_1 = L_144;
		GUIStyle_t220 * L_145 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_145);
		float L_146 = GUIStyle_get_fixedWidth_m4964(L_145, /*hidden argument*/NULL);
		if ((((float)L_146) == ((float)(0.0f))))
		{
			goto IL_0431;
		}
	}
	{
		GUIStyle_t220 * L_147 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_147);
		float L_148 = GUIStyle_get_fixedWidth_m4964(L_147, /*hidden argument*/NULL);
		float L_149 = L_148;
		V_13 = L_149;
		((GUILayoutEntry_t839 *)__this)->___minWidth_0 = L_149;
		float L_150 = V_13;
		((GUILayoutEntry_t839 *)__this)->___maxWidth_1 = L_150;
		((GUILayoutEntry_t839 *)__this)->___stretchWidth_5 = 0;
	}

IL_0431:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t960_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m5226_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m5227_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m5228_MethodInfo_var;
extern "C" void GUILayoutGroup_SetHorizontal_m4852 (GUILayoutGroup_t836 * __this, float ___x, float ___width, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Enumerator_t960_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		List_1_GetEnumerator_m5226_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		Enumerator_get_Current_m5227_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484177);
		Enumerator_MoveNext_m5228_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484178);
		s_Il2CppMethodIntialized = true;
	}
	RectOffset_t263 * V_0 = {0};
	GUILayoutEntry_t839 * V_1 = {0};
	Enumerator_t960  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	GUILayoutEntry_t839 * V_8 = {0};
	Enumerator_t960  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	GUILayoutEntry_t839 * V_17 = {0};
	Enumerator_t960  V_18 = {0};
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B39_0 = 0;
	{
		float L_0 = ___x;
		float L_1 = ___width;
		GUILayoutEntry_SetHorizontal_m4839(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___resetCoords_12);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		___x = (0.0f);
	}

IL_001a:
	{
		GUIStyle_t220 * L_3 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_t263 * L_4 = GUIStyle_get_padding_m4946(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = (__this->___isVertical_11);
		if (!L_5)
		{
			goto IL_01bb;
		}
	}
	{
		GUIStyle_t220 * L_6 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_7 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t220 *)L_6) == ((Object_t*)(GUIStyle_t220 *)L_7)))
		{
			goto IL_00eb;
		}
	}
	{
		List_1_t840 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t960  L_9 = List_1_GetEnumerator_m5226(L_8, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_2 = L_9;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c9;
		}

IL_0052:
		{
			GUILayoutEntry_t839 * L_10 = Enumerator_get_Current_m5227((&V_2), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_1 = L_10;
			GUILayoutEntry_t839 * L_11 = V_1;
			NullCheck(L_11);
			RectOffset_t263 * L_12 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_11);
			NullCheck(L_12);
			int32_t L_13 = RectOffset_get_left_m3137(L_12, /*hidden argument*/NULL);
			RectOffset_t263 * L_14 = V_0;
			NullCheck(L_14);
			int32_t L_15 = RectOffset_get_left_m3137(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			int32_t L_16 = Mathf_Max_m2991(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
			V_3 = (((float)L_16));
			float L_17 = ___x;
			float L_18 = V_3;
			V_4 = ((float)((float)L_17+(float)L_18));
			float L_19 = ___width;
			GUILayoutEntry_t839 * L_20 = V_1;
			NullCheck(L_20);
			RectOffset_t263 * L_21 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_20);
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_right_m4937(L_21, /*hidden argument*/NULL);
			RectOffset_t263 * L_23 = V_0;
			NullCheck(L_23);
			int32_t L_24 = RectOffset_get_right_m4937(L_23, /*hidden argument*/NULL);
			int32_t L_25 = Mathf_Max_m2991(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
			float L_26 = V_3;
			V_5 = ((float)((float)((float)((float)L_19-(float)(((float)L_25))))-(float)L_26));
			GUILayoutEntry_t839 * L_27 = V_1;
			NullCheck(L_27);
			int32_t L_28 = (L_27->___stretchWidth_5);
			if (!L_28)
			{
				goto IL_00ae;
			}
		}

IL_009f:
		{
			GUILayoutEntry_t839 * L_29 = V_1;
			float L_30 = V_4;
			float L_31 = V_5;
			NullCheck(L_29);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_29, L_30, L_31);
			goto IL_00c9;
		}

IL_00ae:
		{
			GUILayoutEntry_t839 * L_32 = V_1;
			float L_33 = V_4;
			float L_34 = V_5;
			GUILayoutEntry_t839 * L_35 = V_1;
			NullCheck(L_35);
			float L_36 = (L_35->___minWidth_0);
			GUILayoutEntry_t839 * L_37 = V_1;
			NullCheck(L_37);
			float L_38 = (L_37->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			float L_39 = Mathf_Clamp_m368(NULL /*static, unused*/, L_34, L_36, L_38, /*hidden argument*/NULL);
			NullCheck(L_32);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_32, L_33, L_39);
		}

IL_00c9:
		{
			bool L_40 = Enumerator_MoveNext_m5228((&V_2), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_40)
			{
				goto IL_0052;
			}
		}

IL_00d5:
		{
			IL2CPP_LEAVE(0xE6, FINALLY_00da);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_00da;
	}

FINALLY_00da:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_41 = V_2;
		Enumerator_t960  L_42 = L_41;
		Object_t * L_43 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_43);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_43);
		IL2CPP_END_FINALLY(218)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(218)
	{
		IL2CPP_JUMP_TBL(0xE6, IL_00e6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_00e6:
	{
		goto IL_01b6;
	}

IL_00eb:
	{
		float L_44 = ___x;
		RectOffset_t263 * L_45 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_45);
		int32_t L_46 = RectOffset_get_left_m3137(L_45, /*hidden argument*/NULL);
		V_6 = ((float)((float)L_44-(float)(((float)L_46))));
		float L_47 = ___width;
		RectOffset_t263 * L_48 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_48);
		int32_t L_49 = RectOffset_get_horizontal_m3133(L_48, /*hidden argument*/NULL);
		V_7 = ((float)((float)L_47+(float)(((float)L_49))));
		List_1_t840 * L_50 = (__this->___entries_10);
		NullCheck(L_50);
		Enumerator_t960  L_51 = List_1_GetEnumerator_m5226(L_50, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_9 = L_51;
	}

IL_0118:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0198;
		}

IL_011d:
		{
			GUILayoutEntry_t839 * L_52 = Enumerator_get_Current_m5227((&V_9), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_8 = L_52;
			GUILayoutEntry_t839 * L_53 = V_8;
			NullCheck(L_53);
			int32_t L_54 = (L_53->___stretchWidth_5);
			if (!L_54)
			{
				goto IL_015e;
			}
		}

IL_0132:
		{
			GUILayoutEntry_t839 * L_55 = V_8;
			float L_56 = V_6;
			GUILayoutEntry_t839 * L_57 = V_8;
			NullCheck(L_57);
			RectOffset_t263 * L_58 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_57);
			NullCheck(L_58);
			int32_t L_59 = RectOffset_get_left_m3137(L_58, /*hidden argument*/NULL);
			float L_60 = V_7;
			GUILayoutEntry_t839 * L_61 = V_8;
			NullCheck(L_61);
			RectOffset_t263 * L_62 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_61);
			NullCheck(L_62);
			int32_t L_63 = RectOffset_get_horizontal_m3133(L_62, /*hidden argument*/NULL);
			NullCheck(L_55);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_55, ((float)((float)L_56+(float)(((float)L_59)))), ((float)((float)L_60-(float)(((float)L_63)))));
			goto IL_0198;
		}

IL_015e:
		{
			GUILayoutEntry_t839 * L_64 = V_8;
			float L_65 = V_6;
			GUILayoutEntry_t839 * L_66 = V_8;
			NullCheck(L_66);
			RectOffset_t263 * L_67 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_66);
			NullCheck(L_67);
			int32_t L_68 = RectOffset_get_left_m3137(L_67, /*hidden argument*/NULL);
			float L_69 = V_7;
			GUILayoutEntry_t839 * L_70 = V_8;
			NullCheck(L_70);
			RectOffset_t263 * L_71 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_70);
			NullCheck(L_71);
			int32_t L_72 = RectOffset_get_horizontal_m3133(L_71, /*hidden argument*/NULL);
			GUILayoutEntry_t839 * L_73 = V_8;
			NullCheck(L_73);
			float L_74 = (L_73->___minWidth_0);
			GUILayoutEntry_t839 * L_75 = V_8;
			NullCheck(L_75);
			float L_76 = (L_75->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			float L_77 = Mathf_Clamp_m368(NULL /*static, unused*/, ((float)((float)L_69-(float)(((float)L_72)))), L_74, L_76, /*hidden argument*/NULL);
			NullCheck(L_64);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_64, ((float)((float)L_65+(float)(((float)L_68)))), L_77);
		}

IL_0198:
		{
			bool L_78 = Enumerator_MoveNext_m5228((&V_9), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_78)
			{
				goto IL_011d;
			}
		}

IL_01a4:
		{
			IL2CPP_LEAVE(0x1B6, FINALLY_01a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_01a9;
	}

FINALLY_01a9:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_79 = V_9;
		Enumerator_t960  L_80 = L_79;
		Object_t * L_81 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_81);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_81);
		IL2CPP_END_FINALLY(425)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(425)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_01b6:
	{
		goto IL_03b0;
	}

IL_01bb:
	{
		GUIStyle_t220 * L_82 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_83 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t220 *)L_82) == ((Object_t*)(GUIStyle_t220 *)L_83)))
		{
			goto IL_0248;
		}
	}
	{
		RectOffset_t263 * L_84 = V_0;
		NullCheck(L_84);
		int32_t L_85 = RectOffset_get_left_m3137(L_84, /*hidden argument*/NULL);
		V_10 = (((float)L_85));
		RectOffset_t263 * L_86 = V_0;
		NullCheck(L_86);
		int32_t L_87 = RectOffset_get_right_m4937(L_86, /*hidden argument*/NULL);
		V_11 = (((float)L_87));
		List_1_t840 * L_88 = (__this->___entries_10);
		NullCheck(L_88);
		int32_t L_89 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_88);
		if (!L_89)
		{
			goto IL_0239;
		}
	}
	{
		float L_90 = V_10;
		List_1_t840 * L_91 = (__this->___entries_10);
		NullCheck(L_91);
		GUILayoutEntry_t839 * L_92 = (GUILayoutEntry_t839 *)VirtFuncInvoker1< GUILayoutEntry_t839 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_91, 0);
		NullCheck(L_92);
		RectOffset_t263 * L_93 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_92);
		NullCheck(L_93);
		int32_t L_94 = RectOffset_get_left_m3137(L_93, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_95 = Mathf_Max_m322(NULL /*static, unused*/, L_90, (((float)L_94)), /*hidden argument*/NULL);
		V_10 = L_95;
		float L_96 = V_11;
		List_1_t840 * L_97 = (__this->___entries_10);
		List_1_t840 * L_98 = (__this->___entries_10);
		NullCheck(L_98);
		int32_t L_99 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_98);
		NullCheck(L_97);
		GUILayoutEntry_t839 * L_100 = (GUILayoutEntry_t839 *)VirtFuncInvoker1< GUILayoutEntry_t839 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_97, ((int32_t)((int32_t)L_99-(int32_t)1)));
		NullCheck(L_100);
		RectOffset_t263 * L_101 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_100);
		NullCheck(L_101);
		int32_t L_102 = RectOffset_get_right_m4937(L_101, /*hidden argument*/NULL);
		float L_103 = Mathf_Max_m322(NULL /*static, unused*/, L_96, (((float)L_102)), /*hidden argument*/NULL);
		V_11 = L_103;
	}

IL_0239:
	{
		float L_104 = ___x;
		float L_105 = V_10;
		___x = ((float)((float)L_104+(float)L_105));
		float L_106 = ___width;
		float L_107 = V_11;
		float L_108 = V_10;
		___width = ((float)((float)L_106-(float)((float)((float)L_107+(float)L_108))));
	}

IL_0248:
	{
		float L_109 = ___width;
		float L_110 = (__this->___spacing_13);
		List_1_t840 * L_111 = (__this->___entries_10);
		NullCheck(L_111);
		int32_t L_112 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_111);
		V_12 = ((float)((float)L_109-(float)((float)((float)L_110*(float)(((float)((int32_t)((int32_t)L_112-(int32_t)1))))))));
		V_13 = (0.0f);
		float L_113 = (__this->___m_ChildMinWidth_22);
		float L_114 = (__this->___m_ChildMaxWidth_23);
		if ((((float)L_113) == ((float)L_114)))
		{
			goto IL_02a1;
		}
	}
	{
		float L_115 = V_12;
		float L_116 = (__this->___m_ChildMinWidth_22);
		float L_117 = (__this->___m_ChildMaxWidth_23);
		float L_118 = (__this->___m_ChildMinWidth_22);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_119 = Mathf_Clamp_m368(NULL /*static, unused*/, ((float)((float)((float)((float)L_115-(float)L_116))/(float)((float)((float)L_117-(float)L_118)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_13 = L_119;
	}

IL_02a1:
	{
		V_14 = (0.0f);
		float L_120 = V_12;
		float L_121 = (__this->___m_ChildMaxWidth_23);
		if ((!(((float)L_120) > ((float)L_121))))
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_122 = (__this->___m_StretchableCountX_18);
		if ((((int32_t)L_122) <= ((int32_t)0)))
		{
			goto IL_02d4;
		}
	}
	{
		float L_123 = V_12;
		float L_124 = (__this->___m_ChildMaxWidth_23);
		int32_t L_125 = (__this->___m_StretchableCountX_18);
		V_14 = ((float)((float)((float)((float)L_123-(float)L_124))/(float)(((float)L_125))));
	}

IL_02d4:
	{
		V_15 = 0;
		V_16 = 1;
		List_1_t840 * L_126 = (__this->___entries_10);
		NullCheck(L_126);
		Enumerator_t960  L_127 = List_1_GetEnumerator_m5226(L_126, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_18 = L_127;
	}

IL_02e7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0392;
		}

IL_02ec:
		{
			GUILayoutEntry_t839 * L_128 = Enumerator_get_Current_m5227((&V_18), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_17 = L_128;
			GUILayoutEntry_t839 * L_129 = V_17;
			NullCheck(L_129);
			float L_130 = (L_129->___minWidth_0);
			GUILayoutEntry_t839 * L_131 = V_17;
			NullCheck(L_131);
			float L_132 = (L_131->___maxWidth_1);
			float L_133 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			float L_134 = Mathf_Lerp_m1216(NULL /*static, unused*/, L_130, L_132, L_133, /*hidden argument*/NULL);
			V_19 = L_134;
			float L_135 = V_19;
			float L_136 = V_14;
			GUILayoutEntry_t839 * L_137 = V_17;
			NullCheck(L_137);
			int32_t L_138 = (L_137->___stretchWidth_5);
			V_19 = ((float)((float)L_135+(float)((float)((float)L_136*(float)(((float)L_138))))));
			GUILayoutEntry_t839 * L_139 = V_17;
			NullCheck(L_139);
			GUIStyle_t220 * L_140 = GUILayoutEntry_get_style_m4834(L_139, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
			GUIStyle_t220 * L_141 = GUILayoutUtility_get_spaceStyle_m4827(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t220 *)L_140) == ((Object_t*)(GUIStyle_t220 *)L_141)))
			{
				goto IL_0371;
			}
		}

IL_032d:
		{
			GUILayoutEntry_t839 * L_142 = V_17;
			NullCheck(L_142);
			RectOffset_t263 * L_143 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_142);
			NullCheck(L_143);
			int32_t L_144 = RectOffset_get_left_m3137(L_143, /*hidden argument*/NULL);
			V_20 = L_144;
			bool L_145 = V_16;
			if (!L_145)
			{
				goto IL_0348;
			}
		}

IL_0342:
		{
			V_20 = 0;
			V_16 = 0;
		}

IL_0348:
		{
			int32_t L_146 = V_15;
			int32_t L_147 = V_20;
			if ((((int32_t)L_146) <= ((int32_t)L_147)))
			{
				goto IL_0358;
			}
		}

IL_0351:
		{
			int32_t L_148 = V_15;
			G_B39_0 = L_148;
			goto IL_035a;
		}

IL_0358:
		{
			int32_t L_149 = V_20;
			G_B39_0 = L_149;
		}

IL_035a:
		{
			V_21 = G_B39_0;
			float L_150 = ___x;
			int32_t L_151 = V_21;
			___x = ((float)((float)L_150+(float)(((float)L_151))));
			GUILayoutEntry_t839 * L_152 = V_17;
			NullCheck(L_152);
			RectOffset_t263 * L_153 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_152);
			NullCheck(L_153);
			int32_t L_154 = RectOffset_get_right_m4937(L_153, /*hidden argument*/NULL);
			V_15 = L_154;
		}

IL_0371:
		{
			GUILayoutEntry_t839 * L_155 = V_17;
			float L_156 = ___x;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			float L_157 = roundf(L_156);
			float L_158 = V_19;
			float L_159 = roundf(L_158);
			NullCheck(L_155);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_155, L_157, L_159);
			float L_160 = ___x;
			float L_161 = V_19;
			float L_162 = (__this->___spacing_13);
			___x = ((float)((float)L_160+(float)((float)((float)L_161+(float)L_162))));
		}

IL_0392:
		{
			bool L_163 = Enumerator_MoveNext_m5228((&V_18), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_163)
			{
				goto IL_02ec;
			}
		}

IL_039e:
		{
			IL2CPP_LEAVE(0x3B0, FINALLY_03a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_03a3;
	}

FINALLY_03a3:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_164 = V_18;
		Enumerator_t960  L_165 = L_164;
		Object_t * L_166 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_165);
		NullCheck(L_166);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_166);
		IL2CPP_END_FINALLY(931)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(931)
	{
		IL2CPP_JUMP_TBL(0x3B0, IL_03b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_03b0:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t960_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m5226_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m5227_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m5228_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcHeight_m4853 (GUILayoutGroup_t836 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Enumerator_t960_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		List_1_GetEnumerator_m5226_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		Enumerator_get_Current_m5227_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484177);
		Enumerator_MoveNext_m5228_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484178);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	GUILayoutEntry_t839 * V_4 = {0};
	Enumerator_t960  V_5 = {0};
	RectOffset_t263 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	GUILayoutEntry_t839 * V_9 = {0};
	Enumerator_t960  V_10 = {0};
	RectOffset_t263 * V_11 = {0};
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	GUILayoutGroup_t836 * G_B36_2 = {0};
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	GUILayoutGroup_t836 * G_B35_2 = {0};
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	GUILayoutGroup_t836 * G_B37_3 = {0};
	{
		List_1_t840 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t220 * L_2 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_t263 * L_3 = GUIStyle_get_padding_m4946(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_vertical_m3134(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)L_4));
		V_14 = L_5;
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = L_5;
		float L_6 = V_14;
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = L_6;
		return;
	}

IL_0033:
	{
		V_0 = 0;
		V_1 = 0;
		__this->___m_ChildMinHeight_24 = (0.0f);
		__this->___m_ChildMaxHeight_25 = (0.0f);
		__this->___m_StretchableCountY_19 = 0;
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_01d4;
		}
	}
	{
		V_2 = 0;
		V_3 = 1;
		List_1_t840 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t960  L_9 = List_1_GetEnumerator_m5226(L_8, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_5 = L_9;
	}

IL_0070:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0159;
		}

IL_0075:
		{
			GUILayoutEntry_t839 * L_10 = Enumerator_get_Current_m5227((&V_5), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_4 = L_10;
			GUILayoutEntry_t839 * L_11 = V_4;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_11);
			GUILayoutEntry_t839 * L_12 = V_4;
			NullCheck(L_12);
			RectOffset_t263 * L_13 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_12);
			V_6 = L_13;
			GUILayoutEntry_t839 * L_14 = V_4;
			NullCheck(L_14);
			GUIStyle_t220 * L_15 = GUILayoutEntry_get_style_m4834(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
			GUIStyle_t220 * L_16 = GUILayoutUtility_get_spaceStyle_m4827(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t220 *)L_15) == ((Object_t*)(GUIStyle_t220 *)L_16)))
			{
				goto IL_011d;
			}
		}

IL_009f:
		{
			bool L_17 = V_3;
			if (L_17)
			{
				goto IL_00b9;
			}
		}

IL_00a5:
		{
			int32_t L_18 = V_2;
			RectOffset_t263 * L_19 = V_6;
			NullCheck(L_19);
			int32_t L_20 = RectOffset_get_top_m3138(L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			int32_t L_21 = Mathf_Max_m2991(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
			V_7 = L_21;
			goto IL_00be;
		}

IL_00b9:
		{
			V_7 = 0;
			V_3 = 0;
		}

IL_00be:
		{
			float L_22 = (__this->___m_ChildMinHeight_24);
			GUILayoutEntry_t839 * L_23 = V_4;
			NullCheck(L_23);
			float L_24 = (L_23->___minHeight_2);
			float L_25 = (__this->___spacing_13);
			int32_t L_26 = V_7;
			__this->___m_ChildMinHeight_24 = ((float)((float)L_22+(float)((float)((float)((float)((float)L_24+(float)L_25))+(float)(((float)L_26))))));
			float L_27 = (__this->___m_ChildMaxHeight_25);
			GUILayoutEntry_t839 * L_28 = V_4;
			NullCheck(L_28);
			float L_29 = (L_28->___maxHeight_3);
			float L_30 = (__this->___spacing_13);
			int32_t L_31 = V_7;
			__this->___m_ChildMaxHeight_25 = ((float)((float)L_27+(float)((float)((float)((float)((float)L_29+(float)L_30))+(float)(((float)L_31))))));
			RectOffset_t263 * L_32 = V_6;
			NullCheck(L_32);
			int32_t L_33 = RectOffset_get_bottom_m4940(L_32, /*hidden argument*/NULL);
			V_2 = L_33;
			int32_t L_34 = (__this->___m_StretchableCountY_19);
			GUILayoutEntry_t839 * L_35 = V_4;
			NullCheck(L_35);
			int32_t L_36 = (L_35->___stretchHeight_6);
			__this->___m_StretchableCountY_19 = ((int32_t)((int32_t)L_34+(int32_t)L_36));
			goto IL_0159;
		}

IL_011d:
		{
			float L_37 = (__this->___m_ChildMinHeight_24);
			GUILayoutEntry_t839 * L_38 = V_4;
			NullCheck(L_38);
			float L_39 = (L_38->___minHeight_2);
			__this->___m_ChildMinHeight_24 = ((float)((float)L_37+(float)L_39));
			float L_40 = (__this->___m_ChildMaxHeight_25);
			GUILayoutEntry_t839 * L_41 = V_4;
			NullCheck(L_41);
			float L_42 = (L_41->___maxHeight_3);
			__this->___m_ChildMaxHeight_25 = ((float)((float)L_40+(float)L_42));
			int32_t L_43 = (__this->___m_StretchableCountY_19);
			GUILayoutEntry_t839 * L_44 = V_4;
			NullCheck(L_44);
			int32_t L_45 = (L_44->___stretchHeight_6);
			__this->___m_StretchableCountY_19 = ((int32_t)((int32_t)L_43+(int32_t)L_45));
		}

IL_0159:
		{
			bool L_46 = Enumerator_MoveNext_m5228((&V_5), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_46)
			{
				goto IL_0075;
			}
		}

IL_0165:
		{
			IL2CPP_LEAVE(0x177, FINALLY_016a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_016a;
	}

FINALLY_016a:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_47 = V_5;
		Enumerator_t960  L_48 = L_47;
		Object_t * L_49 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_49);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_49);
		IL2CPP_END_FINALLY(362)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(362)
	{
		IL2CPP_JUMP_TBL(0x177, IL_0177)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0177:
	{
		float L_50 = (__this->___m_ChildMinHeight_24);
		float L_51 = (__this->___spacing_13);
		__this->___m_ChildMinHeight_24 = ((float)((float)L_50-(float)L_51));
		float L_52 = (__this->___m_ChildMaxHeight_25);
		float L_53 = (__this->___spacing_13);
		__this->___m_ChildMaxHeight_25 = ((float)((float)L_52-(float)L_53));
		List_1_t840 * L_54 = (__this->___entries_10);
		NullCheck(L_54);
		int32_t L_55 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_54);
		if (!L_55)
		{
			goto IL_01cb;
		}
	}
	{
		List_1_t840 * L_56 = (__this->___entries_10);
		NullCheck(L_56);
		GUILayoutEntry_t839 * L_57 = (GUILayoutEntry_t839 *)VirtFuncInvoker1< GUILayoutEntry_t839 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_56, 0);
		NullCheck(L_57);
		RectOffset_t263 * L_58 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_57);
		NullCheck(L_58);
		int32_t L_59 = RectOffset_get_top_m3138(L_58, /*hidden argument*/NULL);
		V_0 = L_59;
		int32_t L_60 = V_2;
		V_1 = L_60;
		goto IL_01cf;
	}

IL_01cb:
	{
		int32_t L_61 = 0;
		V_0 = L_61;
		V_1 = L_61;
	}

IL_01cf:
	{
		goto IL_02b0;
	}

IL_01d4:
	{
		V_8 = 1;
		List_1_t840 * L_62 = (__this->___entries_10);
		NullCheck(L_62);
		Enumerator_t960  L_63 = List_1_GetEnumerator_m5226(L_62, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_10 = L_63;
	}

IL_01e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0292;
		}

IL_01e9:
		{
			GUILayoutEntry_t839 * L_64 = Enumerator_get_Current_m5227((&V_10), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_9 = L_64;
			GUILayoutEntry_t839 * L_65 = V_9;
			NullCheck(L_65);
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_65);
			GUILayoutEntry_t839 * L_66 = V_9;
			NullCheck(L_66);
			RectOffset_t263 * L_67 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_66);
			V_11 = L_67;
			GUILayoutEntry_t839 * L_68 = V_9;
			NullCheck(L_68);
			GUIStyle_t220 * L_69 = GUILayoutEntry_get_style_m4834(L_68, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
			GUIStyle_t220 * L_70 = GUILayoutUtility_get_spaceStyle_m4827(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t220 *)L_69) == ((Object_t*)(GUIStyle_t220 *)L_70)))
			{
				goto IL_027e;
			}
		}

IL_0213:
		{
			bool L_71 = V_8;
			if (L_71)
			{
				goto IL_023b;
			}
		}

IL_021a:
		{
			RectOffset_t263 * L_72 = V_11;
			NullCheck(L_72);
			int32_t L_73 = RectOffset_get_top_m3138(L_72, /*hidden argument*/NULL);
			int32_t L_74 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			int32_t L_75 = Mathf_Min_m2993(NULL /*static, unused*/, L_73, L_74, /*hidden argument*/NULL);
			V_0 = L_75;
			RectOffset_t263 * L_76 = V_11;
			NullCheck(L_76);
			int32_t L_77 = RectOffset_get_bottom_m4940(L_76, /*hidden argument*/NULL);
			int32_t L_78 = V_1;
			int32_t L_79 = Mathf_Min_m2993(NULL /*static, unused*/, L_77, L_78, /*hidden argument*/NULL);
			V_1 = L_79;
			goto IL_024e;
		}

IL_023b:
		{
			RectOffset_t263 * L_80 = V_11;
			NullCheck(L_80);
			int32_t L_81 = RectOffset_get_top_m3138(L_80, /*hidden argument*/NULL);
			V_0 = L_81;
			RectOffset_t263 * L_82 = V_11;
			NullCheck(L_82);
			int32_t L_83 = RectOffset_get_bottom_m4940(L_82, /*hidden argument*/NULL);
			V_1 = L_83;
			V_8 = 0;
		}

IL_024e:
		{
			GUILayoutEntry_t839 * L_84 = V_9;
			NullCheck(L_84);
			float L_85 = (L_84->___minHeight_2);
			float L_86 = (__this->___m_ChildMinHeight_24);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			float L_87 = Mathf_Max_m322(NULL /*static, unused*/, L_85, L_86, /*hidden argument*/NULL);
			__this->___m_ChildMinHeight_24 = L_87;
			GUILayoutEntry_t839 * L_88 = V_9;
			NullCheck(L_88);
			float L_89 = (L_88->___maxHeight_3);
			float L_90 = (__this->___m_ChildMaxHeight_25);
			float L_91 = Mathf_Max_m322(NULL /*static, unused*/, L_89, L_90, /*hidden argument*/NULL);
			__this->___m_ChildMaxHeight_25 = L_91;
		}

IL_027e:
		{
			int32_t L_92 = (__this->___m_StretchableCountY_19);
			GUILayoutEntry_t839 * L_93 = V_9;
			NullCheck(L_93);
			int32_t L_94 = (L_93->___stretchHeight_6);
			__this->___m_StretchableCountY_19 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0292:
		{
			bool L_95 = Enumerator_MoveNext_m5228((&V_10), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_95)
			{
				goto IL_01e9;
			}
		}

IL_029e:
		{
			IL2CPP_LEAVE(0x2B0, FINALLY_02a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_02a3;
	}

FINALLY_02a3:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_96 = V_10;
		Enumerator_t960  L_97 = L_96;
		Object_t * L_98 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_97);
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_98);
		IL2CPP_END_FINALLY(675)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(675)
	{
		IL2CPP_JUMP_TBL(0x2B0, IL_02b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_02b0:
	{
		V_12 = (0.0f);
		V_13 = (0.0f);
		GUIStyle_t220 * L_99 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_100 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(GUIStyle_t220 *)L_99) == ((Object_t*)(GUIStyle_t220 *)L_100))))
		{
			goto IL_02d9;
		}
	}
	{
		bool L_101 = (__this->___m_UserSpecifiedHeight_21);
		if (!L_101)
		{
			goto IL_0310;
		}
	}

IL_02d9:
	{
		GUIStyle_t220 * L_102 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_102);
		RectOffset_t263 * L_103 = GUIStyle_get_padding_m4946(L_102, /*hidden argument*/NULL);
		NullCheck(L_103);
		int32_t L_104 = RectOffset_get_top_m3138(L_103, /*hidden argument*/NULL);
		int32_t L_105 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		int32_t L_106 = Mathf_Max_m2991(NULL /*static, unused*/, L_104, L_105, /*hidden argument*/NULL);
		V_12 = (((float)L_106));
		GUIStyle_t220 * L_107 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_107);
		RectOffset_t263 * L_108 = GUIStyle_get_padding_m4946(L_107, /*hidden argument*/NULL);
		NullCheck(L_108);
		int32_t L_109 = RectOffset_get_bottom_m4940(L_108, /*hidden argument*/NULL);
		int32_t L_110 = V_1;
		int32_t L_111 = Mathf_Max_m2991(NULL /*static, unused*/, L_109, L_110, /*hidden argument*/NULL);
		V_13 = (((float)L_111));
		goto IL_0332;
	}

IL_0310:
	{
		RectOffset_t263 * L_112 = (__this->___m_Margin_26);
		int32_t L_113 = V_0;
		NullCheck(L_112);
		RectOffset_set_top_m4939(L_112, L_113, /*hidden argument*/NULL);
		RectOffset_t263 * L_114 = (__this->___m_Margin_26);
		int32_t L_115 = V_1;
		NullCheck(L_114);
		RectOffset_set_bottom_m4941(L_114, L_115, /*hidden argument*/NULL);
		float L_116 = (0.0f);
		V_13 = L_116;
		V_12 = L_116;
	}

IL_0332:
	{
		float L_117 = (((GUILayoutEntry_t839 *)__this)->___minHeight_2);
		float L_118 = (__this->___m_ChildMinHeight_24);
		float L_119 = V_12;
		float L_120 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_121 = Mathf_Max_m322(NULL /*static, unused*/, L_117, ((float)((float)((float)((float)L_118+(float)L_119))+(float)L_120)), /*hidden argument*/NULL);
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = L_121;
		float L_122 = (((GUILayoutEntry_t839 *)__this)->___maxHeight_3);
		if ((!(((float)L_122) == ((float)(0.0f)))))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_123 = (((GUILayoutEntry_t839 *)__this)->___stretchHeight_6);
		int32_t L_124 = (__this->___m_StretchableCountY_19);
		GUIStyle_t220 * L_125 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_125);
		bool L_126 = GUIStyle_get_stretchHeight_m4968(L_125, /*hidden argument*/NULL);
		G_B35_0 = L_124;
		G_B35_1 = L_123;
		G_B35_2 = __this;
		if (!L_126)
		{
			G_B36_0 = L_124;
			G_B36_1 = L_123;
			G_B36_2 = __this;
			goto IL_0382;
		}
	}
	{
		G_B37_0 = 1;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		G_B37_3 = G_B35_2;
		goto IL_0383;
	}

IL_0382:
	{
		G_B37_0 = 0;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
		G_B37_3 = G_B36_2;
	}

IL_0383:
	{
		NullCheck(G_B37_3);
		((GUILayoutEntry_t839 *)G_B37_3)->___stretchHeight_6 = ((int32_t)((int32_t)G_B37_2+(int32_t)((int32_t)((int32_t)G_B37_1+(int32_t)G_B37_0))));
		float L_127 = (__this->___m_ChildMaxHeight_25);
		float L_128 = V_12;
		float L_129 = V_13;
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = ((float)((float)((float)((float)L_127+(float)L_128))+(float)L_129));
		goto IL_03a8;
	}

IL_03a1:
	{
		((GUILayoutEntry_t839 *)__this)->___stretchHeight_6 = 0;
	}

IL_03a8:
	{
		float L_130 = (((GUILayoutEntry_t839 *)__this)->___maxHeight_3);
		float L_131 = (((GUILayoutEntry_t839 *)__this)->___minHeight_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_132 = Mathf_Max_m322(NULL /*static, unused*/, L_130, L_131, /*hidden argument*/NULL);
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = L_132;
		GUIStyle_t220 * L_133 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_133);
		float L_134 = GUIStyle_get_fixedHeight_m4965(L_133, /*hidden argument*/NULL);
		if ((((float)L_134) == ((float)(0.0f))))
		{
			goto IL_03f7;
		}
	}
	{
		GUIStyle_t220 * L_135 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_135);
		float L_136 = GUIStyle_get_fixedHeight_m4965(L_135, /*hidden argument*/NULL);
		float L_137 = L_136;
		V_14 = L_137;
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = L_137;
		float L_138 = V_14;
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = L_138;
		((GUILayoutEntry_t839 *)__this)->___stretchHeight_6 = 0;
	}

IL_03f7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t101_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t960_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m5226_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m5227_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m5228_MethodInfo_var;
extern "C" void GUILayoutGroup_SetVertical_m4854 (GUILayoutGroup_t836 * __this, float ___y, float ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		Mathf_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		Enumerator_t960_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		List_1_GetEnumerator_m5226_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		Enumerator_get_Current_m5227_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484177);
		Enumerator_MoveNext_m5228_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484178);
		s_Il2CppMethodIntialized = true;
	}
	RectOffset_t263 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	GUILayoutEntry_t839 * V_8 = {0};
	Enumerator_t960  V_9 = {0};
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	GUILayoutEntry_t839 * V_13 = {0};
	Enumerator_t960  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	GUILayoutEntry_t839 * V_20 = {0};
	Enumerator_t960  V_21 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	{
		float L_0 = ___y;
		float L_1 = ___height;
		GUILayoutEntry_SetVertical_m4840(__this, L_0, L_1, /*hidden argument*/NULL);
		List_1_t840 * L_2 = (__this->___entries_10);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_2);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		GUIStyle_t220 * L_4 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectOffset_t263 * L_5 = GUIStyle_get_padding_m4946(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = (__this->___resetCoords_12);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		___y = (0.0f);
	}

IL_0037:
	{
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_022f;
		}
	}
	{
		GUIStyle_t220 * L_8 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_9 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t220 *)L_8) == ((Object_t*)(GUIStyle_t220 *)L_9)))
		{
			goto IL_00c6;
		}
	}
	{
		RectOffset_t263 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m3138(L_10, /*hidden argument*/NULL);
		V_1 = (((float)L_11));
		RectOffset_t263 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_bottom_m4940(L_12, /*hidden argument*/NULL);
		V_2 = (((float)L_13));
		List_1_t840 * L_14 = (__this->___entries_10);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_14);
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		float L_16 = V_1;
		List_1_t840 * L_17 = (__this->___entries_10);
		NullCheck(L_17);
		GUILayoutEntry_t839 * L_18 = (GUILayoutEntry_t839 *)VirtFuncInvoker1< GUILayoutEntry_t839 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_17, 0);
		NullCheck(L_18);
		RectOffset_t263 * L_19 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_18);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_top_m3138(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Max_m322(NULL /*static, unused*/, L_16, (((float)L_20)), /*hidden argument*/NULL);
		V_1 = L_21;
		float L_22 = V_2;
		List_1_t840 * L_23 = (__this->___entries_10);
		List_1_t840 * L_24 = (__this->___entries_10);
		NullCheck(L_24);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_24);
		NullCheck(L_23);
		GUILayoutEntry_t839 * L_26 = (GUILayoutEntry_t839 *)VirtFuncInvoker1< GUILayoutEntry_t839 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_23, ((int32_t)((int32_t)L_25-(int32_t)1)));
		NullCheck(L_26);
		RectOffset_t263 * L_27 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_26);
		NullCheck(L_27);
		int32_t L_28 = RectOffset_get_bottom_m4940(L_27, /*hidden argument*/NULL);
		float L_29 = Mathf_Max_m322(NULL /*static, unused*/, L_22, (((float)L_28)), /*hidden argument*/NULL);
		V_2 = L_29;
	}

IL_00ba:
	{
		float L_30 = ___y;
		float L_31 = V_1;
		___y = ((float)((float)L_30+(float)L_31));
		float L_32 = ___height;
		float L_33 = V_2;
		float L_34 = V_1;
		___height = ((float)((float)L_32-(float)((float)((float)L_33+(float)L_34))));
	}

IL_00c6:
	{
		float L_35 = ___height;
		float L_36 = (__this->___spacing_13);
		List_1_t840 * L_37 = (__this->___entries_10);
		NullCheck(L_37);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_37);
		V_3 = ((float)((float)L_35-(float)((float)((float)L_36*(float)(((float)((int32_t)((int32_t)L_38-(int32_t)1))))))));
		V_4 = (0.0f);
		float L_39 = (__this->___m_ChildMinHeight_24);
		float L_40 = (__this->___m_ChildMaxHeight_25);
		if ((((float)L_39) == ((float)L_40)))
		{
			goto IL_011d;
		}
	}
	{
		float L_41 = V_3;
		float L_42 = (__this->___m_ChildMinHeight_24);
		float L_43 = (__this->___m_ChildMaxHeight_25);
		float L_44 = (__this->___m_ChildMinHeight_24);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
		float L_45 = Mathf_Clamp_m368(NULL /*static, unused*/, ((float)((float)((float)((float)L_41-(float)L_42))/(float)((float)((float)L_43-(float)L_44)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_4 = L_45;
	}

IL_011d:
	{
		V_5 = (0.0f);
		float L_46 = V_3;
		float L_47 = (__this->___m_ChildMaxHeight_25);
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_48 = (__this->___m_StretchableCountY_19);
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		float L_49 = V_3;
		float L_50 = (__this->___m_ChildMaxHeight_25);
		int32_t L_51 = (__this->___m_StretchableCountY_19);
		V_5 = ((float)((float)((float)((float)L_49-(float)L_50))/(float)(((float)L_51))));
	}

IL_014e:
	{
		V_6 = 0;
		V_7 = 1;
		List_1_t840 * L_52 = (__this->___entries_10);
		NullCheck(L_52);
		Enumerator_t960  L_53 = List_1_GetEnumerator_m5226(L_52, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_9 = L_53;
	}

IL_0161:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020c;
		}

IL_0166:
		{
			GUILayoutEntry_t839 * L_54 = Enumerator_get_Current_m5227((&V_9), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_8 = L_54;
			GUILayoutEntry_t839 * L_55 = V_8;
			NullCheck(L_55);
			float L_56 = (L_55->___minHeight_2);
			GUILayoutEntry_t839 * L_57 = V_8;
			NullCheck(L_57);
			float L_58 = (L_57->___maxHeight_3);
			float L_59 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			float L_60 = Mathf_Lerp_m1216(NULL /*static, unused*/, L_56, L_58, L_59, /*hidden argument*/NULL);
			V_10 = L_60;
			float L_61 = V_10;
			float L_62 = V_5;
			GUILayoutEntry_t839 * L_63 = V_8;
			NullCheck(L_63);
			int32_t L_64 = (L_63->___stretchHeight_6);
			V_10 = ((float)((float)L_61+(float)((float)((float)L_62*(float)(((float)L_64))))));
			GUILayoutEntry_t839 * L_65 = V_8;
			NullCheck(L_65);
			GUIStyle_t220 * L_66 = GUILayoutEntry_get_style_m4834(L_65, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
			GUIStyle_t220 * L_67 = GUILayoutUtility_get_spaceStyle_m4827(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t220 *)L_66) == ((Object_t*)(GUIStyle_t220 *)L_67)))
			{
				goto IL_01eb;
			}
		}

IL_01a7:
		{
			GUILayoutEntry_t839 * L_68 = V_8;
			NullCheck(L_68);
			RectOffset_t263 * L_69 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_68);
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_top_m3138(L_69, /*hidden argument*/NULL);
			V_11 = L_70;
			bool L_71 = V_7;
			if (!L_71)
			{
				goto IL_01c2;
			}
		}

IL_01bc:
		{
			V_11 = 0;
			V_7 = 0;
		}

IL_01c2:
		{
			int32_t L_72 = V_6;
			int32_t L_73 = V_11;
			if ((((int32_t)L_72) <= ((int32_t)L_73)))
			{
				goto IL_01d2;
			}
		}

IL_01cb:
		{
			int32_t L_74 = V_6;
			G_B22_0 = L_74;
			goto IL_01d4;
		}

IL_01d2:
		{
			int32_t L_75 = V_11;
			G_B22_0 = L_75;
		}

IL_01d4:
		{
			V_12 = G_B22_0;
			float L_76 = ___y;
			int32_t L_77 = V_12;
			___y = ((float)((float)L_76+(float)(((float)L_77))));
			GUILayoutEntry_t839 * L_78 = V_8;
			NullCheck(L_78);
			RectOffset_t263 * L_79 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_78);
			NullCheck(L_79);
			int32_t L_80 = RectOffset_get_bottom_m4940(L_79, /*hidden argument*/NULL);
			V_6 = L_80;
		}

IL_01eb:
		{
			GUILayoutEntry_t839 * L_81 = V_8;
			float L_82 = ___y;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			float L_83 = roundf(L_82);
			float L_84 = V_10;
			float L_85 = roundf(L_84);
			NullCheck(L_81);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_81, L_83, L_85);
			float L_86 = ___y;
			float L_87 = V_10;
			float L_88 = (__this->___spacing_13);
			___y = ((float)((float)L_86+(float)((float)((float)L_87+(float)L_88))));
		}

IL_020c:
		{
			bool L_89 = Enumerator_MoveNext_m5228((&V_9), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_89)
			{
				goto IL_0166;
			}
		}

IL_0218:
		{
			IL2CPP_LEAVE(0x22A, FINALLY_021d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_021d;
	}

FINALLY_021d:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_90 = V_9;
		Enumerator_t960  L_91 = L_90;
		Object_t * L_92 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_91);
		NullCheck(L_92);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_92);
		IL2CPP_END_FINALLY(541)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(541)
	{
		IL2CPP_JUMP_TBL(0x22A, IL_022a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_022a:
	{
		goto IL_03c1;
	}

IL_022f:
	{
		GUIStyle_t220 * L_93 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_94 = GUIStyle_get_none_m4949(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t220 *)L_93) == ((Object_t*)(GUIStyle_t220 *)L_94)))
		{
			goto IL_02f6;
		}
	}
	{
		List_1_t840 * L_95 = (__this->___entries_10);
		NullCheck(L_95);
		Enumerator_t960  L_96 = List_1_GetEnumerator_m5226(L_95, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_14 = L_96;
	}

IL_024c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02d3;
		}

IL_0251:
		{
			GUILayoutEntry_t839 * L_97 = Enumerator_get_Current_m5227((&V_14), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_13 = L_97;
			GUILayoutEntry_t839 * L_98 = V_13;
			NullCheck(L_98);
			RectOffset_t263 * L_99 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_98);
			NullCheck(L_99);
			int32_t L_100 = RectOffset_get_top_m3138(L_99, /*hidden argument*/NULL);
			RectOffset_t263 * L_101 = V_0;
			NullCheck(L_101);
			int32_t L_102 = RectOffset_get_top_m3138(L_101, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			int32_t L_103 = Mathf_Max_m2991(NULL /*static, unused*/, L_100, L_102, /*hidden argument*/NULL);
			V_15 = (((float)L_103));
			float L_104 = ___y;
			float L_105 = V_15;
			V_16 = ((float)((float)L_104+(float)L_105));
			float L_106 = ___height;
			GUILayoutEntry_t839 * L_107 = V_13;
			NullCheck(L_107);
			RectOffset_t263 * L_108 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_107);
			NullCheck(L_108);
			int32_t L_109 = RectOffset_get_bottom_m4940(L_108, /*hidden argument*/NULL);
			RectOffset_t263 * L_110 = V_0;
			NullCheck(L_110);
			int32_t L_111 = RectOffset_get_bottom_m4940(L_110, /*hidden argument*/NULL);
			int32_t L_112 = Mathf_Max_m2991(NULL /*static, unused*/, L_109, L_111, /*hidden argument*/NULL);
			float L_113 = V_15;
			V_17 = ((float)((float)((float)((float)L_106-(float)(((float)L_112))))-(float)L_113));
			GUILayoutEntry_t839 * L_114 = V_13;
			NullCheck(L_114);
			int32_t L_115 = (L_114->___stretchHeight_6);
			if (!L_115)
			{
				goto IL_02b5;
			}
		}

IL_02a5:
		{
			GUILayoutEntry_t839 * L_116 = V_13;
			float L_117 = V_16;
			float L_118 = V_17;
			NullCheck(L_116);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_116, L_117, L_118);
			goto IL_02d3;
		}

IL_02b5:
		{
			GUILayoutEntry_t839 * L_119 = V_13;
			float L_120 = V_16;
			float L_121 = V_17;
			GUILayoutEntry_t839 * L_122 = V_13;
			NullCheck(L_122);
			float L_123 = (L_122->___minHeight_2);
			GUILayoutEntry_t839 * L_124 = V_13;
			NullCheck(L_124);
			float L_125 = (L_124->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			float L_126 = Mathf_Clamp_m368(NULL /*static, unused*/, L_121, L_123, L_125, /*hidden argument*/NULL);
			NullCheck(L_119);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_119, L_120, L_126);
		}

IL_02d3:
		{
			bool L_127 = Enumerator_MoveNext_m5228((&V_14), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_127)
			{
				goto IL_0251;
			}
		}

IL_02df:
		{
			IL2CPP_LEAVE(0x2F1, FINALLY_02e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_02e4;
	}

FINALLY_02e4:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_128 = V_14;
		Enumerator_t960  L_129 = L_128;
		Object_t * L_130 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_129);
		NullCheck(L_130);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_130);
		IL2CPP_END_FINALLY(740)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(740)
	{
		IL2CPP_JUMP_TBL(0x2F1, IL_02f1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_02f1:
	{
		goto IL_03c1;
	}

IL_02f6:
	{
		float L_131 = ___y;
		RectOffset_t263 * L_132 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_132);
		int32_t L_133 = RectOffset_get_top_m3138(L_132, /*hidden argument*/NULL);
		V_18 = ((float)((float)L_131-(float)(((float)L_133))));
		float L_134 = ___height;
		RectOffset_t263 * L_135 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_135);
		int32_t L_136 = RectOffset_get_vertical_m3134(L_135, /*hidden argument*/NULL);
		V_19 = ((float)((float)L_134+(float)(((float)L_136))));
		List_1_t840 * L_137 = (__this->___entries_10);
		NullCheck(L_137);
		Enumerator_t960  L_138 = List_1_GetEnumerator_m5226(L_137, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_21 = L_138;
	}

IL_0323:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03a3;
		}

IL_0328:
		{
			GUILayoutEntry_t839 * L_139 = Enumerator_get_Current_m5227((&V_21), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_20 = L_139;
			GUILayoutEntry_t839 * L_140 = V_20;
			NullCheck(L_140);
			int32_t L_141 = (L_140->___stretchHeight_6);
			if (!L_141)
			{
				goto IL_0369;
			}
		}

IL_033d:
		{
			GUILayoutEntry_t839 * L_142 = V_20;
			float L_143 = V_18;
			GUILayoutEntry_t839 * L_144 = V_20;
			NullCheck(L_144);
			RectOffset_t263 * L_145 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_144);
			NullCheck(L_145);
			int32_t L_146 = RectOffset_get_top_m3138(L_145, /*hidden argument*/NULL);
			float L_147 = V_19;
			GUILayoutEntry_t839 * L_148 = V_20;
			NullCheck(L_148);
			RectOffset_t263 * L_149 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_148);
			NullCheck(L_149);
			int32_t L_150 = RectOffset_get_vertical_m3134(L_149, /*hidden argument*/NULL);
			NullCheck(L_142);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_142, ((float)((float)L_143+(float)(((float)L_146)))), ((float)((float)L_147-(float)(((float)L_150)))));
			goto IL_03a3;
		}

IL_0369:
		{
			GUILayoutEntry_t839 * L_151 = V_20;
			float L_152 = V_18;
			GUILayoutEntry_t839 * L_153 = V_20;
			NullCheck(L_153);
			RectOffset_t263 * L_154 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_153);
			NullCheck(L_154);
			int32_t L_155 = RectOffset_get_top_m3138(L_154, /*hidden argument*/NULL);
			float L_156 = V_19;
			GUILayoutEntry_t839 * L_157 = V_20;
			NullCheck(L_157);
			RectOffset_t263 * L_158 = (RectOffset_t263 *)VirtFuncInvoker0< RectOffset_t263 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_157);
			NullCheck(L_158);
			int32_t L_159 = RectOffset_get_vertical_m3134(L_158, /*hidden argument*/NULL);
			GUILayoutEntry_t839 * L_160 = V_20;
			NullCheck(L_160);
			float L_161 = (L_160->___minHeight_2);
			GUILayoutEntry_t839 * L_162 = V_20;
			NullCheck(L_162);
			float L_163 = (L_162->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t101_il2cpp_TypeInfo_var);
			float L_164 = Mathf_Clamp_m368(NULL /*static, unused*/, ((float)((float)L_156-(float)(((float)L_159)))), L_161, L_163, /*hidden argument*/NULL);
			NullCheck(L_151);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_151, ((float)((float)L_152+(float)(((float)L_155)))), L_164);
		}

IL_03a3:
		{
			bool L_165 = Enumerator_MoveNext_m5228((&V_21), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_165)
			{
				goto IL_0328;
			}
		}

IL_03af:
		{
			IL2CPP_LEAVE(0x3C1, FINALLY_03b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_03b4;
	}

FINALLY_03b4:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_166 = V_21;
		Enumerator_t960  L_167 = L_166;
		Object_t * L_168 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_167);
		NullCheck(L_168);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_168);
		IL2CPP_END_FINALLY(948)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(948)
	{
		IL2CPP_JUMP_TBL(0x3C1, IL_03c1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_03c1:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutGroup::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t839_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t522_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t960_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m5226_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m5227_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m5228_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral465;
extern Il2CppCodeGenString* _stringLiteral476;
extern Il2CppCodeGenString* _stringLiteral477;
extern Il2CppCodeGenString* _stringLiteral176;
extern Il2CppCodeGenString* _stringLiteral478;
extern "C" String_t* GUILayoutGroup_ToString_m4855 (GUILayoutGroup_t836 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GUILayoutEntry_t839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Single_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		Enumerator_t960_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		List_1_GetEnumerator_m5226_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		Enumerator_get_Current_m5227_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484177);
		Enumerator_MoveNext_m5228_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484178);
		_stringLiteral465 = il2cpp_codegen_string_literal_from_index(465);
		_stringLiteral476 = il2cpp_codegen_string_literal_from_index(476);
		_stringLiteral477 = il2cpp_codegen_string_literal_from_index(477);
		_stringLiteral176 = il2cpp_codegen_string_literal_from_index(176);
		_stringLiteral478 = il2cpp_codegen_string_literal_from_index(478);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	GUILayoutEntry_t839 * V_3 = {0};
	Enumerator_t960  V_4 = {0};
	String_t* V_5 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0023;
	}

IL_0013:
	{
		String_t* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m430(NULL /*static, unused*/, L_2, _stringLiteral465, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t839_il2cpp_TypeInfo_var);
		int32_t L_6 = ((GUILayoutEntry_t839_StaticFields*)GUILayoutEntry_t839_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_7 = V_0;
		V_5 = L_7;
		ObjectU5BU5D_t234* L_8 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 5));
		String_t* L_9 = V_5;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t234* L_10 = L_8;
		String_t* L_11 = GUILayoutEntry_ToString_m4843(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 1, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t234* L_12 = L_10;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, _stringLiteral476);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral476;
		ObjectU5BU5D_t234* L_13 = L_12;
		float L_14 = (__this->___m_ChildMinHeight_24);
		float L_15 = L_14;
		Object_t * L_16 = Box(Single_t522_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 3, sizeof(Object_t *))) = (Object_t *)L_16;
		ObjectU5BU5D_t234* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 4);
		ArrayElementTypeCheck (L_17, _stringLiteral477);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral477;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m1089(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t839_il2cpp_TypeInfo_var);
		int32_t L_19 = ((GUILayoutEntry_t839_StaticFields*)GUILayoutEntry_t839_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		((GUILayoutEntry_t839_StaticFields*)GUILayoutEntry_t839_il2cpp_TypeInfo_var->static_fields)->___indent_9 = ((int32_t)((int32_t)L_19+(int32_t)4));
		List_1_t840 * L_20 = (__this->___entries_10);
		NullCheck(L_20);
		Enumerator_t960  L_21 = List_1_GetEnumerator_m5226(L_20, /*hidden argument*/List_1_GetEnumerator_m5226_MethodInfo_var);
		V_4 = L_21;
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_0087:
		{
			GUILayoutEntry_t839 * L_22 = Enumerator_get_Current_m5227((&V_4), /*hidden argument*/Enumerator_get_Current_m5227_MethodInfo_var);
			V_3 = L_22;
			String_t* L_23 = V_0;
			GUILayoutEntry_t839 * L_24 = V_3;
			NullCheck(L_24);
			String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.GUILayoutEntry::ToString() */, L_24);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_26 = String_Concat_m349(NULL /*static, unused*/, L_23, L_25, _stringLiteral176, /*hidden argument*/NULL);
			V_0 = L_26;
		}

IL_00a1:
		{
			bool L_27 = Enumerator_MoveNext_m5228((&V_4), /*hidden argument*/Enumerator_MoveNext_m5228_MethodInfo_var);
			if (L_27)
			{
				goto IL_0087;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xBF, FINALLY_00b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_00b2;
	}

FINALLY_00b2:
	{ // begin finally (depth: 1)
		Enumerator_t960  L_28 = V_4;
		Enumerator_t960  L_29 = L_28;
		Object_t * L_30 = Box(Enumerator_t960_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_30);
		IL2CPP_END_FINALLY(178)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(178)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_00bf:
	{
		String_t* L_31 = V_0;
		String_t* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m349(NULL /*static, unused*/, L_31, L_32, _stringLiteral478, /*hidden argument*/NULL);
		V_0 = L_33;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t839_il2cpp_TypeInfo_var);
		int32_t L_34 = ((GUILayoutEntry_t839_StaticFields*)GUILayoutEntry_t839_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		((GUILayoutEntry_t839_StaticFields*)GUILayoutEntry_t839_il2cpp_TypeInfo_var->static_fields)->___indent_9 = ((int32_t)((int32_t)L_34-(int32_t)4));
		String_t* L_35 = V_0;
		return L_35;
	}
}
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroup.h"
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroupMethodDeclarations.h"
// System.Void UnityEngine.GUIScrollGroup::.ctor()
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
extern "C" void GUIScrollGroup__ctor_m4856 (GUIScrollGroup_t841 * __this, const MethodInfo* method)
{
	{
		__this->___allowHorizontalScroll_33 = 1;
		__this->___allowVerticalScroll_34 = 1;
		GUILayoutGroup__ctor_m4844(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
extern "C" void GUIScrollGroup_CalcWidth_m4857 (GUIScrollGroup_t841 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (((GUILayoutEntry_t839 *)__this)->___minWidth_0);
		V_0 = L_0;
		float L_1 = (((GUILayoutEntry_t839 *)__this)->___maxWidth_1);
		V_1 = L_1;
		bool L_2 = (__this->___allowHorizontalScroll_33);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		((GUILayoutEntry_t839 *)__this)->___minWidth_0 = (0.0f);
		((GUILayoutEntry_t839 *)__this)->___maxWidth_1 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcWidth_m4851(__this, /*hidden argument*/NULL);
		float L_3 = (((GUILayoutEntry_t839 *)__this)->___minWidth_0);
		__this->___calcMinWidth_27 = L_3;
		float L_4 = (((GUILayoutEntry_t839 *)__this)->___maxWidth_1);
		__this->___calcMaxWidth_28 = L_4;
		bool L_5 = (__this->___allowHorizontalScroll_33);
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		float L_6 = (((GUILayoutEntry_t839 *)__this)->___minWidth_0);
		if ((!(((float)L_6) > ((float)(32.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		((GUILayoutEntry_t839 *)__this)->___minWidth_0 = (32.0f);
	}

IL_0073:
	{
		float L_7 = V_0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		float L_8 = V_0;
		((GUILayoutEntry_t839 *)__this)->___minWidth_0 = L_8;
	}

IL_0085:
	{
		float L_9 = V_1;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_009e;
		}
	}
	{
		float L_10 = V_1;
		((GUILayoutEntry_t839 *)__this)->___maxWidth_1 = L_10;
		((GUILayoutEntry_t839 *)__this)->___stretchWidth_5 = 0;
	}

IL_009e:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" void GUIScrollGroup_SetHorizontal_m4858 (GUIScrollGroup_t841 * __this, float ___x, float ___width, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = (__this->___needsVerticalScrollbar_36);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = ___width;
		GUIStyle_t220 * L_2 = (__this->___verticalScrollbar_38);
		NullCheck(L_2);
		float L_3 = GUIStyle_get_fixedWidth_m4964(L_2, /*hidden argument*/NULL);
		GUIStyle_t220 * L_4 = (__this->___verticalScrollbar_38);
		NullCheck(L_4);
		RectOffset_t263 * L_5 = GUIStyle_get_margin_m4945(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = RectOffset_get_left_m3137(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((float)((float)((float)((float)L_1-(float)L_3))-(float)(((float)L_6))));
		goto IL_0030;
	}

IL_002f:
	{
		float L_7 = ___width;
		G_B3_0 = L_7;
	}

IL_0030:
	{
		V_0 = G_B3_0;
		bool L_8 = (__this->___allowHorizontalScroll_33);
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinWidth_27);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0091;
		}
	}
	{
		__this->___needsHorizontalScrollbar_35 = 1;
		float L_11 = (__this->___calcMinWidth_27);
		((GUILayoutEntry_t839 *)__this)->___minWidth_0 = L_11;
		float L_12 = (__this->___calcMaxWidth_28);
		((GUILayoutEntry_t839 *)__this)->___maxWidth_1 = L_12;
		float L_13 = ___x;
		float L_14 = (__this->___calcMinWidth_27);
		GUILayoutGroup_SetHorizontal_m4852(__this, L_13, L_14, /*hidden argument*/NULL);
		Rect_t232 * L_15 = &(((GUILayoutEntry_t839 *)__this)->___rect_4);
		float L_16 = ___width;
		Rect_set_width_m2925(L_15, L_16, /*hidden argument*/NULL);
		float L_17 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_17;
		goto IL_00d6;
	}

IL_0091:
	{
		__this->___needsHorizontalScrollbar_35 = 0;
		bool L_18 = (__this->___allowHorizontalScroll_33);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		float L_19 = (__this->___calcMinWidth_27);
		((GUILayoutEntry_t839 *)__this)->___minWidth_0 = L_19;
		float L_20 = (__this->___calcMaxWidth_28);
		((GUILayoutEntry_t839 *)__this)->___maxWidth_1 = L_20;
	}

IL_00bb:
	{
		float L_21 = ___x;
		float L_22 = V_0;
		GUILayoutGroup_SetHorizontal_m4852(__this, L_21, L_22, /*hidden argument*/NULL);
		Rect_t232 * L_23 = &(((GUILayoutEntry_t839 *)__this)->___rect_4);
		float L_24 = ___width;
		Rect_set_width_m2925(L_23, L_24, /*hidden argument*/NULL);
		float L_25 = V_0;
		__this->___clientWidth_31 = L_25;
	}

IL_00d6:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
extern "C" void GUIScrollGroup_CalcHeight_m4859 (GUIScrollGroup_t841 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = (((GUILayoutEntry_t839 *)__this)->___minHeight_2);
		V_0 = L_0;
		float L_1 = (((GUILayoutEntry_t839 *)__this)->___maxHeight_3);
		V_1 = L_1;
		bool L_2 = (__this->___allowVerticalScroll_34);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = (0.0f);
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcHeight_m4853(__this, /*hidden argument*/NULL);
		float L_3 = (((GUILayoutEntry_t839 *)__this)->___minHeight_2);
		__this->___calcMinHeight_29 = L_3;
		float L_4 = (((GUILayoutEntry_t839 *)__this)->___maxHeight_3);
		__this->___calcMaxHeight_30 = L_4;
		bool L_5 = (__this->___needsHorizontalScrollbar_35);
		if (!L_5)
		{
			goto IL_0092;
		}
	}
	{
		GUIStyle_t220 * L_6 = (__this->___horizontalScrollbar_37);
		NullCheck(L_6);
		float L_7 = GUIStyle_get_fixedHeight_m4965(L_6, /*hidden argument*/NULL);
		GUIStyle_t220 * L_8 = (__this->___horizontalScrollbar_37);
		NullCheck(L_8);
		RectOffset_t263 * L_9 = GUIStyle_get_margin_m4945(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_top_m3138(L_9, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_7+(float)(((float)L_10))));
		float L_11 = (((GUILayoutEntry_t839 *)__this)->___minHeight_2);
		float L_12 = V_2;
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = ((float)((float)L_11+(float)L_12));
		float L_13 = (((GUILayoutEntry_t839 *)__this)->___maxHeight_3);
		float L_14 = V_2;
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = ((float)((float)L_13+(float)L_14));
	}

IL_0092:
	{
		bool L_15 = (__this->___allowVerticalScroll_34);
		if (!L_15)
		{
			goto IL_00e3;
		}
	}
	{
		float L_16 = (((GUILayoutEntry_t839 *)__this)->___minHeight_2);
		if ((!(((float)L_16) > ((float)(32.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = (32.0f);
	}

IL_00b8:
	{
		float L_17 = V_0;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00ca;
		}
	}
	{
		float L_18 = V_0;
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = L_18;
	}

IL_00ca:
	{
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_20 = V_1;
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = L_20;
		((GUILayoutEntry_t839 *)__this)->___stretchHeight_6 = 0;
	}

IL_00e3:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroupMethodDeclarations.h"
extern "C" void GUIScrollGroup_SetVertical_m4860 (GUIScrollGroup_t841 * __this, float ___y, float ___height, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___height;
		V_0 = L_0;
		bool L_1 = (__this->___needsHorizontalScrollbar_35);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = V_0;
		GUIStyle_t220 * L_3 = (__this->___horizontalScrollbar_37);
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedHeight_m4965(L_3, /*hidden argument*/NULL);
		GUIStyle_t220 * L_5 = (__this->___horizontalScrollbar_37);
		NullCheck(L_5);
		RectOffset_t263 * L_6 = GUIStyle_get_margin_m4945(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_top_m3138(L_6, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_2-(float)((float)((float)L_4+(float)(((float)L_7))))));
	}

IL_002d:
	{
		bool L_8 = (__this->___allowVerticalScroll_34);
		if (!L_8)
		{
			goto IL_0139;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinHeight_29);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0139;
		}
	}
	{
		bool L_11 = (__this->___needsHorizontalScrollbar_35);
		if (L_11)
		{
			goto IL_00db;
		}
	}
	{
		bool L_12 = (__this->___needsVerticalScrollbar_36);
		if (L_12)
		{
			goto IL_00db;
		}
	}
	{
		Rect_t232 * L_13 = &(((GUILayoutEntry_t839 *)__this)->___rect_4);
		float L_14 = Rect_get_width_m2877(L_13, /*hidden argument*/NULL);
		GUIStyle_t220 * L_15 = (__this->___verticalScrollbar_38);
		NullCheck(L_15);
		float L_16 = GUIStyle_get_fixedWidth_m4964(L_15, /*hidden argument*/NULL);
		GUIStyle_t220 * L_17 = (__this->___verticalScrollbar_38);
		NullCheck(L_17);
		RectOffset_t263 * L_18 = GUIStyle_get_margin_m4945(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = RectOffset_get_left_m3137(L_18, /*hidden argument*/NULL);
		__this->___clientWidth_31 = ((float)((float)((float)((float)L_14-(float)L_16))-(float)(((float)L_19))));
		float L_20 = (__this->___clientWidth_31);
		float L_21 = (__this->___calcMinWidth_27);
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a6;
		}
	}
	{
		float L_22 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_22;
	}

IL_00a6:
	{
		Rect_t232 * L_23 = &(((GUILayoutEntry_t839 *)__this)->___rect_4);
		float L_24 = Rect_get_width_m2877(L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		Rect_t232 * L_25 = &(((GUILayoutEntry_t839 *)__this)->___rect_4);
		float L_26 = Rect_get_x_m2879(L_25, /*hidden argument*/NULL);
		float L_27 = (__this->___clientWidth_31);
		GUIScrollGroup_SetHorizontal_m4858(__this, L_26, L_27, /*hidden argument*/NULL);
		GUIScrollGroup_CalcHeight_m4859(__this, /*hidden argument*/NULL);
		Rect_t232 * L_28 = &(((GUILayoutEntry_t839 *)__this)->___rect_4);
		float L_29 = V_1;
		Rect_set_width_m2925(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00db:
	{
		float L_30 = (((GUILayoutEntry_t839 *)__this)->___minHeight_2);
		V_2 = L_30;
		float L_31 = (((GUILayoutEntry_t839 *)__this)->___maxHeight_3);
		V_3 = L_31;
		float L_32 = (__this->___calcMinHeight_29);
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = L_32;
		float L_33 = (__this->___calcMaxHeight_30);
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = L_33;
		float L_34 = ___y;
		float L_35 = (__this->___calcMinHeight_29);
		GUILayoutGroup_SetVertical_m4854(__this, L_34, L_35, /*hidden argument*/NULL);
		float L_36 = V_2;
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = L_36;
		float L_37 = V_3;
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = L_37;
		Rect_t232 * L_38 = &(((GUILayoutEntry_t839 *)__this)->___rect_4);
		float L_39 = ___height;
		Rect_set_height_m2923(L_38, L_39, /*hidden argument*/NULL);
		float L_40 = (__this->___calcMinHeight_29);
		__this->___clientHeight_32 = L_40;
		goto IL_0177;
	}

IL_0139:
	{
		bool L_41 = (__this->___allowVerticalScroll_34);
		if (!L_41)
		{
			goto IL_015c;
		}
	}
	{
		float L_42 = (__this->___calcMinHeight_29);
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = L_42;
		float L_43 = (__this->___calcMaxHeight_30);
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = L_43;
	}

IL_015c:
	{
		float L_44 = ___y;
		float L_45 = V_0;
		GUILayoutGroup_SetVertical_m4854(__this, L_44, L_45, /*hidden argument*/NULL);
		Rect_t232 * L_46 = &(((GUILayoutEntry_t839 *)__this)->___rect_4);
		float L_47 = ___height;
		Rect_set_height_m2923(L_46, L_47, /*hidden argument*/NULL);
		float L_48 = V_0;
		__this->___clientHeight_32 = L_48;
	}

IL_0177:
	{
		return;
	}
}
// System.Void UnityEngine.GUIWordWrapSizer::.ctor(UnityEngine.GUIStyle,UnityEngine.GUIContent,UnityEngine.GUILayoutOption[])
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
extern TypeInfo* GUILayoutEntry_t839_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t264_il2cpp_TypeInfo_var;
extern "C" void GUIWordWrapSizer__ctor_m4861 (GUIWordWrapSizer_t842 * __this, GUIStyle_t220 * ___style, GUIContent_t264 * ___content, GUILayoutOptionU5BU5D_t265* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutEntry_t839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		GUIContent_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t220 * L_0 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t839_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m4831(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_0, /*hidden argument*/NULL);
		GUIContent_t264 * L_1 = ___content;
		GUIContent_t264 * L_2 = (GUIContent_t264 *)il2cpp_codegen_object_new (GUIContent_t264_il2cpp_TypeInfo_var);
		GUIContent__ctor_m4806(L_2, L_1, /*hidden argument*/NULL);
		__this->___m_Content_10 = L_2;
		GUILayoutOptionU5BU5D_t265* L_3 = ___options;
		VirtActionInvoker1< GUILayoutOptionU5BU5D_t265* >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[]) */, __this, L_3);
		float L_4 = (((GUILayoutEntry_t839 *)__this)->___minHeight_2);
		__this->___m_ForcedMinHeight_11 = L_4;
		float L_5 = (((GUILayoutEntry_t839 *)__this)->___maxHeight_3);
		__this->___m_ForcedMaxHeight_12 = L_5;
		return;
	}
}
// System.Void UnityEngine.GUIWordWrapSizer::CalcWidth()
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
extern "C" void GUIWordWrapSizer_CalcWidth_m4862 (GUIWordWrapSizer_t842 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (((GUILayoutEntry_t839 *)__this)->___minWidth_0);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}
	{
		float L_1 = (((GUILayoutEntry_t839 *)__this)->___maxWidth_1);
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0063;
		}
	}

IL_0020:
	{
		GUIStyle_t220 * L_2 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		GUIContent_t264 * L_3 = (__this->___m_Content_10);
		NullCheck(L_2);
		GUIStyle_CalcMinMaxWidth_m4952(L_2, L_3, (&V_0), (&V_1), /*hidden argument*/NULL);
		float L_4 = (((GUILayoutEntry_t839 *)__this)->___minWidth_0);
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		float L_5 = V_0;
		((GUILayoutEntry_t839 *)__this)->___minWidth_0 = L_5;
	}

IL_004c:
	{
		float L_6 = (((GUILayoutEntry_t839 *)__this)->___maxWidth_1);
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		float L_7 = V_1;
		((GUILayoutEntry_t839 *)__this)->___maxWidth_1 = L_7;
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityEngine.GUIWordWrapSizer::CalcHeight()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" void GUIWordWrapSizer_CalcHeight_m4863 (GUIWordWrapSizer_t842 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = (__this->___m_ForcedMinHeight_11);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}
	{
		float L_1 = (__this->___m_ForcedMaxHeight_12);
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}

IL_0020:
	{
		GUIStyle_t220 * L_2 = GUILayoutEntry_get_style_m4834(__this, /*hidden argument*/NULL);
		GUIContent_t264 * L_3 = (__this->___m_Content_10);
		Rect_t232 * L_4 = &(((GUILayoutEntry_t839 *)__this)->___rect_4);
		float L_5 = Rect_get_width_m2877(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_6 = GUIStyle_CalcHeight_m4950(L_2, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = (__this->___m_ForcedMinHeight_11);
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		float L_8 = V_0;
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = L_8;
		goto IL_0065;
	}

IL_0059:
	{
		float L_9 = (__this->___m_ForcedMinHeight_11);
		((GUILayoutEntry_t839 *)__this)->___minHeight_2 = L_9;
	}

IL_0065:
	{
		float L_10 = (__this->___m_ForcedMaxHeight_12);
		if ((!(((float)L_10) == ((float)(0.0f)))))
		{
			goto IL_0081;
		}
	}
	{
		float L_11 = V_0;
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = L_11;
		goto IL_008d;
	}

IL_0081:
	{
		float L_12 = (__this->___m_ForcedMaxHeight_12);
		((GUILayoutEntry_t839 *)__this)->___maxHeight_3 = L_12;
	}

IL_008d:
	{
		return;
	}
}
// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_TypeMethodDeclarations.h"
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_Type.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void GUILayoutOption__ctor_m4864 (GUILayoutOption_t844 * __this, int32_t ___type, Object_t * ___value, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type;
		__this->___type_0 = L_0;
		Object_t * L_1 = ___value;
		__this->___value_1 = L_1;
		return;
	}
}
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettings.h"
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettingsMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// System.Void UnityEngine.GUISettings::.ctor()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void GUISettings__ctor_m4865 (GUISettings_t845 * __this, const MethodInfo* method)
{
	{
		__this->___m_DoubleClickSelectsWord_0 = 1;
		__this->___m_TripleClickSelectsLine_1 = 1;
		Color_t12  L_0 = Color_get_white_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_CursorColor_2 = L_0;
		__this->___m_CursorFlashSpeed_3 = (-1.0f);
		Color_t12  L_1 = {0};
		Color__ctor_m369(&L_1, (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->___m_SelectionColor_4 = L_1;
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegate.h"
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegateMethodDeclarations.h"
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void SkinChangedDelegate__ctor_m4866 (SkinChangedDelegate_t846 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern "C" void SkinChangedDelegate_Invoke_m4867 (SkinChangedDelegate_t846 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SkinChangedDelegate_Invoke_m4867((SkinChangedDelegate_t846 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_SkinChangedDelegate_t846(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * SkinChangedDelegate_BeginInvoke_m4868 (SkinChangedDelegate_t846 * __this, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SkinChangedDelegate_EndInvoke_m4869 (SkinChangedDelegate_t846 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_2.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1MethodDeclarations.h"
// System.Void UnityEngine.GUISkin::.ctor()
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettingsMethodDeclarations.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern TypeInfo* GUISettings_t845_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyleU5BU5D_t847_il2cpp_TypeInfo_var;
extern "C" void GUISkin__ctor_m4870 (GUISkin_t231 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISettings_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		GUIStyleU5BU5D_t847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUISettings_t845 * L_0 = (GUISettings_t845 *)il2cpp_codegen_object_new (GUISettings_t845_il2cpp_TypeInfo_var);
		GUISettings__ctor_m4865(L_0, /*hidden argument*/NULL);
		__this->___m_Settings_24 = L_0;
		ScriptableObject__ctor_m3887(__this, /*hidden argument*/NULL);
		__this->___m_CustomStyles_23 = ((GUIStyleU5BU5D_t847*)SZArrayNew(GUIStyleU5BU5D_t847_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Void UnityEngine.GUISkin::OnEnable()
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
extern "C" void GUISkin_OnEnable_m4871 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" Font_t364 * GUISkin_get_font_m4872 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		Font_t364 * L_0 = (__this->___m_Font_2);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
extern TypeInfo* GUISkin_t231_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" void GUISkin_set_font_m4873 (GUISkin_t231 * __this, Font_t364 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		Font_t364 * L_0 = ___value;
		__this->___m_Font_2 = L_0;
		GUISkin_t231 * L_1 = ((GUISkin_t231_StaticFields*)GUISkin_t231_il2cpp_TypeInfo_var->static_fields)->___current_28;
		bool L_2 = Object_op_Equality_m295(NULL /*static, unused*/, L_1, __this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Font_t364 * L_3 = (__this->___m_Font_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m4972(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern "C" GUIStyle_t220 * GUISkin_get_box_m4874 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_box_3);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
extern "C" void GUISkin_set_box_m4875 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_box_3 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C" GUIStyle_t220 * GUISkin_get_label_m1079 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_label_6);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_label_m4876 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_label_6 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern "C" GUIStyle_t220 * GUISkin_get_textField_m4877 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_textField_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textField_m4878 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_textField_7 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern "C" GUIStyle_t220 * GUISkin_get_textArea_m4879 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_textArea_8);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textArea_m4880 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_textArea_8 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern "C" GUIStyle_t220 * GUISkin_get_button_m1083 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_button_4);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_button_m4881 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_button_4 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern "C" GUIStyle_t220 * GUISkin_get_toggle_m4882 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_toggle_5);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_toggle_m4883 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_toggle_5 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern "C" GUIStyle_t220 * GUISkin_get_window_m4884 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_window_9);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_window_m4885 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_window_9 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern "C" GUIStyle_t220 * GUISkin_get_horizontalSlider_m4886 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_horizontalSlider_10);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSlider_m4887 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_horizontalSlider_10 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern "C" GUIStyle_t220 * GUISkin_get_horizontalSliderThumb_m4888 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_horizontalSliderThumb_11);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSliderThumb_m4889 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_horizontalSliderThumb_11 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern "C" GUIStyle_t220 * GUISkin_get_verticalSlider_m4890 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_verticalSlider_12);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSlider_m4891 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_verticalSlider_12 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern "C" GUIStyle_t220 * GUISkin_get_verticalSliderThumb_m4892 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_verticalSliderThumb_13);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSliderThumb_m4893 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_verticalSliderThumb_13 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern "C" GUIStyle_t220 * GUISkin_get_horizontalScrollbar_m4894 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_horizontalScrollbar_14);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbar_m4895 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_horizontalScrollbar_14 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern "C" GUIStyle_t220 * GUISkin_get_horizontalScrollbarThumb_m4896 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_horizontalScrollbarThumb_15);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarThumb_m4897 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_horizontalScrollbarThumb_15 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern "C" GUIStyle_t220 * GUISkin_get_horizontalScrollbarLeftButton_m4898 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_horizontalScrollbarLeftButton_16);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarLeftButton_m4899 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_horizontalScrollbarLeftButton_16 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern "C" GUIStyle_t220 * GUISkin_get_horizontalScrollbarRightButton_m4900 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_horizontalScrollbarRightButton_17);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarRightButton_m4901 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_horizontalScrollbarRightButton_17 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern "C" GUIStyle_t220 * GUISkin_get_verticalScrollbar_m4902 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_verticalScrollbar_18);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbar_m4903 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_verticalScrollbar_18 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern "C" GUIStyle_t220 * GUISkin_get_verticalScrollbarThumb_m4904 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_verticalScrollbarThumb_19);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarThumb_m4905 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_verticalScrollbarThumb_19 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern "C" GUIStyle_t220 * GUISkin_get_verticalScrollbarUpButton_m4906 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_verticalScrollbarUpButton_20);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarUpButton_m4907 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_verticalScrollbarUpButton_20 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern "C" GUIStyle_t220 * GUISkin_get_verticalScrollbarDownButton_m4908 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_verticalScrollbarDownButton_21);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarDownButton_m4909 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_verticalScrollbarDownButton_21 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern "C" GUIStyle_t220 * GUISkin_get_scrollView_m4910 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = (__this->___m_ScrollView_22);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_scrollView_m4911 (GUISkin_t231 * __this, GUIStyle_t220 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t220 * L_0 = ___value;
		__this->___m_ScrollView_22 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern "C" GUIStyleU5BU5D_t847* GUISkin_get_customStyles_m4912 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t847* L_0 = (__this->___m_CustomStyles_23);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void GUISkin_set_customStyles_m4913 (GUISkin_t231 * __this, GUIStyleU5BU5D_t847* ___value, const MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t847* L_0 = ___value;
		__this->___m_CustomStyles_23 = L_0;
		GUISkin_Apply_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern "C" GUISettings_t845 * GUISkin_get_settings_m4914 (GUISkin_t231 * __this, const MethodInfo* method)
{
	{
		GUISettings_t845 * L_0 = (__this->___m_Settings_24);
		return L_0;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern TypeInfo* GUISkin_t231_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t220 * GUISkin_get_error_m4915 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t220 * L_0 = ((GUISkin_t231_StaticFields*)GUISkin_t231_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t220 * L_1 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_1, /*hidden argument*/NULL);
		((GUISkin_t231_StaticFields*)GUISkin_t231_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25 = L_1;
	}

IL_0014:
	{
		GUIStyle_t220 * L_2 = ((GUISkin_t231_StaticFields*)GUISkin_t231_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25;
		return L_2;
	}
}
// System.Void UnityEngine.GUISkin::Apply()
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral479;
extern "C" void GUISkin_Apply_m4916 (GUISkin_t231 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral479 = il2cpp_codegen_string_literal_from_index(479);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyleU5BU5D_t847* L_0 = (__this->___m_CustomStyles_23);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_Log_m426(NULL /*static, unused*/, _stringLiteral479, /*hidden argument*/NULL);
	}

IL_0015:
	{
		GUISkin_BuildStyleCache_m4917(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::BuildStyleCache()
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern TypeInfo* StringComparer_t961_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t848_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5232_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral480;
extern Il2CppCodeGenString* _stringLiteral481;
extern Il2CppCodeGenString* _stringLiteral482;
extern Il2CppCodeGenString* _stringLiteral483;
extern Il2CppCodeGenString* _stringLiteral484;
extern Il2CppCodeGenString* _stringLiteral485;
extern Il2CppCodeGenString* _stringLiteral486;
extern Il2CppCodeGenString* _stringLiteral487;
extern Il2CppCodeGenString* _stringLiteral488;
extern Il2CppCodeGenString* _stringLiteral489;
extern Il2CppCodeGenString* _stringLiteral490;
extern Il2CppCodeGenString* _stringLiteral491;
extern Il2CppCodeGenString* _stringLiteral492;
extern Il2CppCodeGenString* _stringLiteral493;
extern Il2CppCodeGenString* _stringLiteral494;
extern Il2CppCodeGenString* _stringLiteral495;
extern Il2CppCodeGenString* _stringLiteral496;
extern Il2CppCodeGenString* _stringLiteral497;
extern Il2CppCodeGenString* _stringLiteral498;
extern Il2CppCodeGenString* _stringLiteral499;
extern "C" void GUISkin_BuildStyleCache_m4917 (GUISkin_t231 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		StringComparer_t961_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		Dictionary_2_t848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		Dictionary_2__ctor_m5232_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484180);
		_stringLiteral480 = il2cpp_codegen_string_literal_from_index(480);
		_stringLiteral481 = il2cpp_codegen_string_literal_from_index(481);
		_stringLiteral482 = il2cpp_codegen_string_literal_from_index(482);
		_stringLiteral483 = il2cpp_codegen_string_literal_from_index(483);
		_stringLiteral484 = il2cpp_codegen_string_literal_from_index(484);
		_stringLiteral485 = il2cpp_codegen_string_literal_from_index(485);
		_stringLiteral486 = il2cpp_codegen_string_literal_from_index(486);
		_stringLiteral487 = il2cpp_codegen_string_literal_from_index(487);
		_stringLiteral488 = il2cpp_codegen_string_literal_from_index(488);
		_stringLiteral489 = il2cpp_codegen_string_literal_from_index(489);
		_stringLiteral490 = il2cpp_codegen_string_literal_from_index(490);
		_stringLiteral491 = il2cpp_codegen_string_literal_from_index(491);
		_stringLiteral492 = il2cpp_codegen_string_literal_from_index(492);
		_stringLiteral493 = il2cpp_codegen_string_literal_from_index(493);
		_stringLiteral494 = il2cpp_codegen_string_literal_from_index(494);
		_stringLiteral495 = il2cpp_codegen_string_literal_from_index(495);
		_stringLiteral496 = il2cpp_codegen_string_literal_from_index(496);
		_stringLiteral497 = il2cpp_codegen_string_literal_from_index(497);
		_stringLiteral498 = il2cpp_codegen_string_literal_from_index(498);
		_stringLiteral499 = il2cpp_codegen_string_literal_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GUIStyle_t220 * L_0 = (__this->___m_box_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		GUIStyle_t220 * L_1 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_1, /*hidden argument*/NULL);
		__this->___m_box_3 = L_1;
	}

IL_0016:
	{
		GUIStyle_t220 * L_2 = (__this->___m_button_4);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		GUIStyle_t220 * L_3 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_3, /*hidden argument*/NULL);
		__this->___m_button_4 = L_3;
	}

IL_002c:
	{
		GUIStyle_t220 * L_4 = (__this->___m_toggle_5);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		GUIStyle_t220 * L_5 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_5, /*hidden argument*/NULL);
		__this->___m_toggle_5 = L_5;
	}

IL_0042:
	{
		GUIStyle_t220 * L_6 = (__this->___m_label_6);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		GUIStyle_t220 * L_7 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_7, /*hidden argument*/NULL);
		__this->___m_label_6 = L_7;
	}

IL_0058:
	{
		GUIStyle_t220 * L_8 = (__this->___m_window_9);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		GUIStyle_t220 * L_9 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_9, /*hidden argument*/NULL);
		__this->___m_window_9 = L_9;
	}

IL_006e:
	{
		GUIStyle_t220 * L_10 = (__this->___m_textField_7);
		if (L_10)
		{
			goto IL_0084;
		}
	}
	{
		GUIStyle_t220 * L_11 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_11, /*hidden argument*/NULL);
		__this->___m_textField_7 = L_11;
	}

IL_0084:
	{
		GUIStyle_t220 * L_12 = (__this->___m_textArea_8);
		if (L_12)
		{
			goto IL_009a;
		}
	}
	{
		GUIStyle_t220 * L_13 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_13, /*hidden argument*/NULL);
		__this->___m_textArea_8 = L_13;
	}

IL_009a:
	{
		GUIStyle_t220 * L_14 = (__this->___m_horizontalSlider_10);
		if (L_14)
		{
			goto IL_00b0;
		}
	}
	{
		GUIStyle_t220 * L_15 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_15, /*hidden argument*/NULL);
		__this->___m_horizontalSlider_10 = L_15;
	}

IL_00b0:
	{
		GUIStyle_t220 * L_16 = (__this->___m_horizontalSliderThumb_11);
		if (L_16)
		{
			goto IL_00c6;
		}
	}
	{
		GUIStyle_t220 * L_17 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_17, /*hidden argument*/NULL);
		__this->___m_horizontalSliderThumb_11 = L_17;
	}

IL_00c6:
	{
		GUIStyle_t220 * L_18 = (__this->___m_verticalSlider_12);
		if (L_18)
		{
			goto IL_00dc;
		}
	}
	{
		GUIStyle_t220 * L_19 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_19, /*hidden argument*/NULL);
		__this->___m_verticalSlider_12 = L_19;
	}

IL_00dc:
	{
		GUIStyle_t220 * L_20 = (__this->___m_verticalSliderThumb_13);
		if (L_20)
		{
			goto IL_00f2;
		}
	}
	{
		GUIStyle_t220 * L_21 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_21, /*hidden argument*/NULL);
		__this->___m_verticalSliderThumb_13 = L_21;
	}

IL_00f2:
	{
		GUIStyle_t220 * L_22 = (__this->___m_horizontalScrollbar_14);
		if (L_22)
		{
			goto IL_0108;
		}
	}
	{
		GUIStyle_t220 * L_23 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_23, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbar_14 = L_23;
	}

IL_0108:
	{
		GUIStyle_t220 * L_24 = (__this->___m_horizontalScrollbarThumb_15);
		if (L_24)
		{
			goto IL_011e;
		}
	}
	{
		GUIStyle_t220 * L_25 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_25, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarThumb_15 = L_25;
	}

IL_011e:
	{
		GUIStyle_t220 * L_26 = (__this->___m_horizontalScrollbarLeftButton_16);
		if (L_26)
		{
			goto IL_0134;
		}
	}
	{
		GUIStyle_t220 * L_27 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_27, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarLeftButton_16 = L_27;
	}

IL_0134:
	{
		GUIStyle_t220 * L_28 = (__this->___m_horizontalScrollbarRightButton_17);
		if (L_28)
		{
			goto IL_014a;
		}
	}
	{
		GUIStyle_t220 * L_29 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_29, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarRightButton_17 = L_29;
	}

IL_014a:
	{
		GUIStyle_t220 * L_30 = (__this->___m_verticalScrollbar_18);
		if (L_30)
		{
			goto IL_0160;
		}
	}
	{
		GUIStyle_t220 * L_31 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_31, /*hidden argument*/NULL);
		__this->___m_verticalScrollbar_18 = L_31;
	}

IL_0160:
	{
		GUIStyle_t220 * L_32 = (__this->___m_verticalScrollbarThumb_19);
		if (L_32)
		{
			goto IL_0176;
		}
	}
	{
		GUIStyle_t220 * L_33 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_33, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarThumb_19 = L_33;
	}

IL_0176:
	{
		GUIStyle_t220 * L_34 = (__this->___m_verticalScrollbarUpButton_20);
		if (L_34)
		{
			goto IL_018c;
		}
	}
	{
		GUIStyle_t220 * L_35 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_35, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarUpButton_20 = L_35;
	}

IL_018c:
	{
		GUIStyle_t220 * L_36 = (__this->___m_verticalScrollbarDownButton_21);
		if (L_36)
		{
			goto IL_01a2;
		}
	}
	{
		GUIStyle_t220 * L_37 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_37, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarDownButton_21 = L_37;
	}

IL_01a2:
	{
		GUIStyle_t220 * L_38 = (__this->___m_ScrollView_22);
		if (L_38)
		{
			goto IL_01b8;
		}
	}
	{
		GUIStyle_t220 * L_39 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_39, /*hidden argument*/NULL);
		__this->___m_ScrollView_22 = L_39;
	}

IL_01b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t961_il2cpp_TypeInfo_var);
		StringComparer_t961 * L_40 = StringComparer_get_OrdinalIgnoreCase_m5231(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_41 = (Dictionary_2_t848 *)il2cpp_codegen_object_new (Dictionary_2_t848_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5232(L_41, L_40, /*hidden argument*/Dictionary_2__ctor_m5232_MethodInfo_var);
		__this->___m_Styles_26 = L_41;
		Dictionary_2_t848 * L_42 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_43 = (__this->___m_box_3);
		NullCheck(L_42);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_42, _stringLiteral480, L_43);
		GUIStyle_t220 * L_44 = (__this->___m_box_3);
		NullCheck(L_44);
		GUIStyle_set_name_m4958(L_44, _stringLiteral480, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_45 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_46 = (__this->___m_button_4);
		NullCheck(L_45);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_45, _stringLiteral481, L_46);
		GUIStyle_t220 * L_47 = (__this->___m_button_4);
		NullCheck(L_47);
		GUIStyle_set_name_m4958(L_47, _stringLiteral481, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_48 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_49 = (__this->___m_toggle_5);
		NullCheck(L_48);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_48, _stringLiteral482, L_49);
		GUIStyle_t220 * L_50 = (__this->___m_toggle_5);
		NullCheck(L_50);
		GUIStyle_set_name_m4958(L_50, _stringLiteral482, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_51 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_52 = (__this->___m_label_6);
		NullCheck(L_51);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_51, _stringLiteral483, L_52);
		GUIStyle_t220 * L_53 = (__this->___m_label_6);
		NullCheck(L_53);
		GUIStyle_set_name_m4958(L_53, _stringLiteral483, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_54 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_55 = (__this->___m_window_9);
		NullCheck(L_54);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_54, _stringLiteral484, L_55);
		GUIStyle_t220 * L_56 = (__this->___m_window_9);
		NullCheck(L_56);
		GUIStyle_set_name_m4958(L_56, _stringLiteral484, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_57 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_58 = (__this->___m_textField_7);
		NullCheck(L_57);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_57, _stringLiteral485, L_58);
		GUIStyle_t220 * L_59 = (__this->___m_textField_7);
		NullCheck(L_59);
		GUIStyle_set_name_m4958(L_59, _stringLiteral485, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_60 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_61 = (__this->___m_textArea_8);
		NullCheck(L_60);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_60, _stringLiteral486, L_61);
		GUIStyle_t220 * L_62 = (__this->___m_textArea_8);
		NullCheck(L_62);
		GUIStyle_set_name_m4958(L_62, _stringLiteral486, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_63 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_64 = (__this->___m_horizontalSlider_10);
		NullCheck(L_63);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_63, _stringLiteral487, L_64);
		GUIStyle_t220 * L_65 = (__this->___m_horizontalSlider_10);
		NullCheck(L_65);
		GUIStyle_set_name_m4958(L_65, _stringLiteral487, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_66 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_67 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_66);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_66, _stringLiteral488, L_67);
		GUIStyle_t220 * L_68 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_68);
		GUIStyle_set_name_m4958(L_68, _stringLiteral488, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_69 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_70 = (__this->___m_verticalSlider_12);
		NullCheck(L_69);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_69, _stringLiteral489, L_70);
		GUIStyle_t220 * L_71 = (__this->___m_verticalSlider_12);
		NullCheck(L_71);
		GUIStyle_set_name_m4958(L_71, _stringLiteral489, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_72 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_73 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_72);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_72, _stringLiteral490, L_73);
		GUIStyle_t220 * L_74 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_74);
		GUIStyle_set_name_m4958(L_74, _stringLiteral490, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_75 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_76 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_75);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_75, _stringLiteral491, L_76);
		GUIStyle_t220 * L_77 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_77);
		GUIStyle_set_name_m4958(L_77, _stringLiteral491, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_78 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_79 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_78);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_78, _stringLiteral492, L_79);
		GUIStyle_t220 * L_80 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_80);
		GUIStyle_set_name_m4958(L_80, _stringLiteral492, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_81 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_82 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_81);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_81, _stringLiteral493, L_82);
		GUIStyle_t220 * L_83 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_83);
		GUIStyle_set_name_m4958(L_83, _stringLiteral493, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_84 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_85 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_84);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_84, _stringLiteral494, L_85);
		GUIStyle_t220 * L_86 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_86);
		GUIStyle_set_name_m4958(L_86, _stringLiteral494, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_87 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_88 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_87);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_87, _stringLiteral495, L_88);
		GUIStyle_t220 * L_89 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_89);
		GUIStyle_set_name_m4958(L_89, _stringLiteral495, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_90 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_91 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_90);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_90, _stringLiteral496, L_91);
		GUIStyle_t220 * L_92 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_92);
		GUIStyle_set_name_m4958(L_92, _stringLiteral496, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_93 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_94 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_93);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_93, _stringLiteral497, L_94);
		GUIStyle_t220 * L_95 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_95);
		GUIStyle_set_name_m4958(L_95, _stringLiteral497, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_96 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_97 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_96);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_96, _stringLiteral498, L_97);
		GUIStyle_t220 * L_98 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_98);
		GUIStyle_set_name_m4958(L_98, _stringLiteral498, /*hidden argument*/NULL);
		Dictionary_2_t848 * L_99 = (__this->___m_Styles_26);
		GUIStyle_t220 * L_100 = (__this->___m_ScrollView_22);
		NullCheck(L_99);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_99, _stringLiteral499, L_100);
		GUIStyle_t220 * L_101 = (__this->___m_ScrollView_22);
		NullCheck(L_101);
		GUIStyle_set_name_m4958(L_101, _stringLiteral499, /*hidden argument*/NULL);
		GUIStyleU5BU5D_t847* L_102 = (__this->___m_CustomStyles_23);
		if (!L_102)
		{
			goto IL_0516;
		}
	}
	{
		V_0 = 0;
		goto IL_0508;
	}

IL_04d2:
	{
		GUIStyleU5BU5D_t847* L_103 = (__this->___m_CustomStyles_23);
		int32_t L_104 = V_0;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		int32_t L_105 = L_104;
		if ((*(GUIStyle_t220 **)(GUIStyle_t220 **)SZArrayLdElema(L_103, L_105, sizeof(GUIStyle_t220 *))))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_0504;
	}

IL_04e4:
	{
		Dictionary_2_t848 * L_106 = (__this->___m_Styles_26);
		GUIStyleU5BU5D_t847* L_107 = (__this->___m_CustomStyles_23);
		int32_t L_108 = V_0;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, L_108);
		int32_t L_109 = L_108;
		NullCheck((*(GUIStyle_t220 **)(GUIStyle_t220 **)SZArrayLdElema(L_107, L_109, sizeof(GUIStyle_t220 *))));
		String_t* L_110 = GUIStyle_get_name_m4957((*(GUIStyle_t220 **)(GUIStyle_t220 **)SZArrayLdElema(L_107, L_109, sizeof(GUIStyle_t220 *))), /*hidden argument*/NULL);
		GUIStyleU5BU5D_t847* L_111 = (__this->___m_CustomStyles_23);
		int32_t L_112 = V_0;
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, L_112);
		int32_t L_113 = L_112;
		NullCheck(L_106);
		VirtActionInvoker2< String_t*, GUIStyle_t220 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_106, L_110, (*(GUIStyle_t220 **)(GUIStyle_t220 **)SZArrayLdElema(L_111, L_113, sizeof(GUIStyle_t220 *))));
	}

IL_0504:
	{
		int32_t L_114 = V_0;
		V_0 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0508:
	{
		int32_t L_115 = V_0;
		GUIStyleU5BU5D_t847* L_116 = (__this->___m_CustomStyles_23);
		NullCheck(L_116);
		if ((((int32_t)L_115) < ((int32_t)(((int32_t)(((Array_t *)L_116)->max_length))))))
		{
			goto IL_04d2;
		}
	}

IL_0516:
	{
		GUIStyle_t220 * L_117 = GUISkin_get_error_m4915(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_117);
		GUIStyle_set_stretchHeight_m4969(L_117, 1, /*hidden argument*/NULL);
		GUIStyle_t220 * L_118 = GUISkin_get_error_m4915(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_118);
		GUIStyleState_t262 * L_119 = GUIStyle_get_normal_m1246(L_118, /*hidden argument*/NULL);
		Color_t12  L_120 = Color_get_red_m1184(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_119);
		GUIStyleState_set_textColor_m4929(L_119, L_120, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t827_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral500;
extern Il2CppCodeGenString* _stringLiteral501;
extern Il2CppCodeGenString* _stringLiteral502;
extern "C" GUIStyle_t220 * GUISkin_GetStyle_m4918 (GUISkin_t231 * __this, String_t* ___styleName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		EventType_t827_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral500 = il2cpp_codegen_string_literal_from_index(500);
		_stringLiteral501 = il2cpp_codegen_string_literal_from_index(501);
		_stringLiteral502 = il2cpp_codegen_string_literal_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t220 * V_0 = {0};
	{
		String_t* L_0 = ___styleName;
		GUIStyle_t220 * L_1 = GUISkin_FindStyle_m4919(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIStyle_t220 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		GUIStyle_t220 * L_3 = V_0;
		return L_3;
	}

IL_0010:
	{
		ObjectU5BU5D_t234* L_4 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 6));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, _stringLiteral500);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral500;
		ObjectU5BU5D_t234* L_5 = L_4;
		String_t* L_6 = ___styleName;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t234* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, _stringLiteral501);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral501;
		ObjectU5BU5D_t234* L_8 = L_7;
		String_t* L_9 = Object_get_name_m348(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t234* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, _stringLiteral502);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral502;
		ObjectU5BU5D_t234* L_11 = L_10;
		Event_t400 * L_12 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = Event_get_type_m2986(L_12, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(EventType_t827_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5, sizeof(Object_t *))) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m1089(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Debug_LogWarning_m378(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		GUIStyle_t220 * L_17 = GUISkin_get_error_m4915(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_17;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern Il2CppCodeGenString* _stringLiteral503;
extern "C" GUIStyle_t220 * GUISkin_FindStyle_m4919 (GUISkin_t231 * __this, String_t* ___styleName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral503 = il2cpp_codegen_string_literal_from_index(503);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t220 * V_0 = {0};
	{
		bool L_0 = Object_op_Equality_m295(NULL /*static, unused*/, __this, (Object_t99 *)NULL, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral503, /*hidden argument*/NULL);
		return (GUIStyle_t220 *)NULL;
	}

IL_0018:
	{
		Dictionary_2_t848 * L_1 = (__this->___m_Styles_26);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		GUISkin_BuildStyleCache_m4917(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		Dictionary_2_t848 * L_2 = (__this->___m_Styles_26);
		String_t* L_3 = ___styleName;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker2< bool, String_t*, GUIStyle_t220 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(!0,!1&) */, L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		GUIStyle_t220 * L_5 = V_0;
		return L_5;
	}

IL_003e:
	{
		return (GUIStyle_t220 *)NULL;
	}
}
// System.Void UnityEngine.GUISkin::MakeCurrent()
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegateMethodDeclarations.h"
extern TypeInfo* GUISkin_t231_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" void GUISkin_MakeCurrent_m4920 (GUISkin_t231 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUISkin_t231_StaticFields*)GUISkin_t231_il2cpp_TypeInfo_var->static_fields)->___current_28 = __this;
		Font_t364 * L_0 = GUISkin_get_font_m4872(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m4972(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		SkinChangedDelegate_t846 * L_1 = ((GUISkin_t231_StaticFields*)GUISkin_t231_il2cpp_TypeInfo_var->static_fields)->___m_SkinChanged_27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		SkinChangedDelegate_t846 * L_2 = ((GUISkin_t231_StaticFields*)GUISkin_t231_il2cpp_TypeInfo_var->static_fields)->___m_SkinChanged_27;
		NullCheck(L_2);
		SkinChangedDelegate_Invoke_m4867(L_2, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1MethodDeclarations.h"
extern TypeInfo* Enumerator_t963_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Values_m5233_MethodInfo_var;
extern const MethodInfo* ValueCollection_GetEnumerator_m5234_MethodInfo_var;
extern "C" Object_t * GUISkin_GetEnumerator_m4921 (GUISkin_t231 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(539);
		Dictionary_2_get_Values_m5233_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484181);
		ValueCollection_GetEnumerator_m5234_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484182);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t848 * L_0 = (__this->___m_Styles_26);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		GUISkin_BuildStyleCache_m4917(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		Dictionary_2_t848 * L_1 = (__this->___m_Styles_26);
		NullCheck(L_1);
		ValueCollection_t962 * L_2 = Dictionary_2_get_Values_m5233(L_1, /*hidden argument*/Dictionary_2_get_Values_m5233_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t963  L_3 = ValueCollection_GetEnumerator_m5234(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m5234_MethodInfo_var);
		Enumerator_t963  L_4 = L_3;
		Object_t * L_5 = Box(Enumerator_t963_il2cpp_TypeInfo_var, &L_4);
		return (Object_t *)L_5;
	}
}
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Void UnityEngine.GUIStyleState::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
extern "C" void GUIStyleState__ctor_m4922 (GUIStyleState_t262 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		GUIStyleState_Init_m4925(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void GUIStyleState__ctor_m4923 (GUIStyleState_t262 * __this, GUIStyle_t220 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		GUIStyle_t220 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		Texture2D_t13 * L_2 = GUIStyleState_GetBackgroundInternal_m4928(__this, /*hidden argument*/NULL);
		__this->___m_Background_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" void GUIStyleState_Finalize_m4924 (GUIStyleState_t262 * __this, const MethodInfo* method)
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
		{
			GUIStyle_t220 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			GUIStyleState_Cleanup_m4926(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m5182(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_001d:
	{
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.GUIStyleState::get_background()
extern "C" Texture2D_t13 * GUIStyleState_get_background_m1249 (GUIStyleState_t262 * __this, const MethodInfo* method)
{
	{
		Texture2D_t13 * L_0 = GUIStyleState_GetBackgroundInternal_m4928(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
extern "C" void GUIStyleState_set_background_m1248 (GUIStyleState_t262 * __this, Texture2D_t13 * ___value, const MethodInfo* method)
{
	{
		Texture2D_t13 * L_0 = ___value;
		GUIStyleState_SetBackgroundInternal_m4927(__this, L_0, /*hidden argument*/NULL);
		Texture2D_t13 * L_1 = ___value;
		__this->___m_Background_2 = L_1;
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m4925 (GUIStyleState_t262 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Init_m4925_ftn) (GUIStyleState_t262 *);
	static GUIStyleState_Init_m4925_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m4925_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m4926 (GUIStyleState_t262 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Cleanup_m4926_ftn) (GUIStyleState_t262 *);
	static GUIStyleState_Cleanup_m4926_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_m4926_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::SetBackgroundInternal(UnityEngine.Texture2D)
extern "C" void GUIStyleState_SetBackgroundInternal_m4927 (GUIStyleState_t262 * __this, Texture2D_t13 * ___value, const MethodInfo* method)
{
	typedef void (*GUIStyleState_SetBackgroundInternal_m4927_ftn) (GUIStyleState_t262 *, Texture2D_t13 *);
	static GUIStyleState_SetBackgroundInternal_m4927_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_SetBackgroundInternal_m4927_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::SetBackgroundInternal(UnityEngine.Texture2D)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C" Texture2D_t13 * GUIStyleState_GetBackgroundInternal_m4928 (GUIStyleState_t262 * __this, const MethodInfo* method)
{
	typedef Texture2D_t13 * (*GUIStyleState_GetBackgroundInternal_m4928_ftn) (GUIStyleState_t262 *);
	static GUIStyleState_GetBackgroundInternal_m4928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_GetBackgroundInternal_m4928_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::GetBackgroundInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void GUIStyleState_set_textColor_m4929 (GUIStyleState_t262 * __this, Color_t12  ___value, const MethodInfo* method)
{
	{
		GUIStyleState_INTERNAL_set_textColor_m4930(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_set_textColor_m4930 (GUIStyleState_t262 * __this, Color_t12 * ___value, const MethodInfo* method)
{
	typedef void (*GUIStyleState_INTERNAL_set_textColor_m4930_ftn) (GUIStyleState_t262 *, Color_t12 *);
	static GUIStyleState_INTERNAL_set_textColor_m4930_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_INTERNAL_set_textColor_m4930_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectOffset::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
extern "C" void RectOffset__ctor_m3139 (RectOffset_t263 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		RectOffset_Init_m4934(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectOffset::.ctor(UnityEngine.GUIStyle,System.IntPtr)
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void RectOffset__ctor_m4931 (RectOffset_t263 * __this, GUIStyle_t220 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		GUIStyle_t220 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void RectOffset__ctor_m1250 (RectOffset_t263 * __this, int32_t ___left, int32_t ___right, int32_t ___top, int32_t ___bottom, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		RectOffset_Init_m4934(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___left;
		RectOffset_set_left_m4936(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___right;
		RectOffset_set_right_m4938(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___top;
		RectOffset_set_top_m4939(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___bottom;
		RectOffset_set_bottom_m4941(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectOffset::Finalize()
extern "C" void RectOffset_Finalize_m4932 (RectOffset_t263 * __this, const MethodInfo* method)
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
		{
			GUIStyle_t220 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			RectOffset_Cleanup_m4935(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m5182(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_001d:
	{
		return;
	}
}
// System.String UnityEngine.RectOffset::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t246_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral504;
extern "C" String_t* RectOffset_ToString_m4933 (RectOffset_t263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Int32_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral504 = il2cpp_codegen_string_literal_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 4));
		int32_t L_1 = RectOffset_get_left_m3137(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t246_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t234* L_4 = L_0;
		int32_t L_5 = RectOffset_get_right_m4937(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t246_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_4;
		int32_t L_9 = RectOffset_get_top_m3138(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t246_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t234* L_12 = L_8;
		int32_t L_13 = RectOffset_get_bottom_m4940(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t246_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral504, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void UnityEngine.RectOffset::Init()
extern "C" void RectOffset_Init_m4934 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Init_m4934_ftn) (RectOffset_t263 *);
	static RectOffset_Init_m4934_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Init_m4934_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::Cleanup()
extern "C" void RectOffset_Cleanup_m4935 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Cleanup_m4935_ftn) (RectOffset_t263 *);
	static RectOffset_Cleanup_m4935_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Cleanup_m4935_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C" int32_t RectOffset_get_left_m3137 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_left_m3137_ftn) (RectOffset_t263 *);
	static RectOffset_get_left_m3137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_left_m3137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_left(System.Int32)
extern "C" void RectOffset_set_left_m4936 (RectOffset_t263 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_left_m4936_ftn) (RectOffset_t263 *, int32_t);
	static RectOffset_set_left_m4936_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_left_m4936_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_left(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C" int32_t RectOffset_get_right_m4937 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_right_m4937_ftn) (RectOffset_t263 *);
	static RectOffset_get_right_m4937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_right_m4937_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_right(System.Int32)
extern "C" void RectOffset_set_right_m4938 (RectOffset_t263 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_right_m4938_ftn) (RectOffset_t263 *, int32_t);
	static RectOffset_set_right_m4938_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_right_m4938_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_right(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C" int32_t RectOffset_get_top_m3138 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_top_m3138_ftn) (RectOffset_t263 *);
	static RectOffset_get_top_m3138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_top_m3138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_top(System.Int32)
extern "C" void RectOffset_set_top_m4939 (RectOffset_t263 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_top_m4939_ftn) (RectOffset_t263 *, int32_t);
	static RectOffset_set_top_m4939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_top_m4939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_top(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C" int32_t RectOffset_get_bottom_m4940 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_bottom_m4940_ftn) (RectOffset_t263 *);
	static RectOffset_get_bottom_m4940_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_bottom_m4940_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
extern "C" void RectOffset_set_bottom_m4941 (RectOffset_t263 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_bottom_m4941_ftn) (RectOffset_t263 *, int32_t);
	static RectOffset_set_bottom_m4941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_bottom_m4941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_bottom(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_horizontal()
extern "C" int32_t RectOffset_get_horizontal_m3133 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_horizontal_m3133_ftn) (RectOffset_t263 *);
	static RectOffset_get_horizontal_m3133_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_horizontal_m3133_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_vertical()
extern "C" int32_t RectOffset_get_vertical_m3134 (RectOffset_t263 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_vertical_m3134_ftn) (RectOffset_t263 *);
	static RectOffset_get_vertical_m3134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_vertical_m3134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyleMethodDeclarations.h"
// UnityEngine.ImagePosition
#include "UnityEngine_UnityEngine_ImagePosition.h"
// UnityEngine.ImagePosition
#include "UnityEngine_UnityEngine_ImagePositionMethodDeclarations.h"
// System.Void UnityEngine.GUIStyle::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
extern "C" void GUIStyle__ctor_m4942 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		GUIStyle_Init_m4954(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
extern "C" void GUIStyle__ctor_m1245 (GUIStyle_t220 * __this, GUIStyle_t220 * ___other, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		GUIStyle_t220 * L_0 = ___other;
		GUIStyle_InitCopy_m4955(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" void GUIStyle__cctor_m4943 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUIStyle_t220_StaticFields*)GUIStyle_t220_il2cpp_TypeInfo_var->static_fields)->___showKeyboardFocus_14 = 1;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m4944 (GUIStyle_t220 * __this, const MethodInfo* method)
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
		GUIStyle_Cleanup_m4956(__this, /*hidden argument*/NULL);
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
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
extern TypeInfo* GUIStyleState_t262_il2cpp_TypeInfo_var;
extern "C" GUIStyleState_t262 * GUIStyle_get_normal_m1246 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyleState_t262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyleState_t262 * L_0 = (__this->___m_Normal_1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetStyleStatePtr_m4959(__this, 0, /*hidden argument*/NULL);
		GUIStyleState_t262 * L_2 = (GUIStyleState_t262 *)il2cpp_codegen_object_new (GUIStyleState_t262_il2cpp_TypeInfo_var);
		GUIStyleState__ctor_m4923(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Normal_1 = L_2;
	}

IL_001e:
	{
		GUIStyleState_t262 * L_3 = (__this->___m_Normal_1);
		return L_3;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
extern TypeInfo* RectOffset_t263_il2cpp_TypeInfo_var;
extern "C" RectOffset_t263 * GUIStyle_get_margin_m4945 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectOffset_t263 * L_0 = (__this->___m_Margin_11);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m4960(__this, 1, /*hidden argument*/NULL);
		RectOffset_t263 * L_2 = (RectOffset_t263 *)il2cpp_codegen_object_new (RectOffset_t263_il2cpp_TypeInfo_var);
		RectOffset__ctor_m4931(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Margin_11 = L_2;
	}

IL_001e:
	{
		RectOffset_t263 * L_3 = (__this->___m_Margin_11);
		return L_3;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern TypeInfo* RectOffset_t263_il2cpp_TypeInfo_var;
extern "C" RectOffset_t263 * GUIStyle_get_padding_m4946 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectOffset_t263 * L_0 = (__this->___m_Padding_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m4960(__this, 2, /*hidden argument*/NULL);
		RectOffset_t263 * L_2 = (RectOffset_t263 *)il2cpp_codegen_object_new (RectOffset_t263_il2cpp_TypeInfo_var);
		RectOffset__ctor_m4931(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Padding_10 = L_2;
	}

IL_001e:
	{
		RectOffset_t263 * L_3 = (__this->___m_Padding_10);
		return L_3;
	}
}
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
extern "C" void GUIStyle_set_padding_m1251 (GUIStyle_t220 * __this, RectOffset_t263 * ___value, const MethodInfo* method)
{
	{
		RectOffset_t263 * L_0 = ___value;
		NullCheck(L_0);
		IntPtr_t L_1 = (L_0->___m_Ptr_0);
		GUIStyle_AssignRectOffset_m4961(__this, 2, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void GUIStyle_Draw_m4947 (GUIStyle_t220 * __this, Rect_t232  ___position, GUIContent_t264 * ___content, int32_t ___controlID, const MethodInfo* method)
{
	{
		Rect_t232  L_0 = ___position;
		GUIContent_t264 * L_1 = ___content;
		int32_t L_2 = ___controlID;
		GUIStyle_Draw_m4948(__this, L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral505;
extern "C" void GUIStyle_Draw_m4948 (GUIStyle_t220 * __this, Rect_t232  ___position, GUIContent_t264 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		_stringLiteral505 = il2cpp_codegen_string_literal_from_index(505);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t264 * L_0 = ___content;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		IntPtr_t L_1 = (__this->___m_Ptr_0);
		Rect_t232  L_2 = ___position;
		GUIContent_t264 * L_3 = ___content;
		int32_t L_4 = ___controlID;
		bool L_5 = ___on;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_Internal_Draw2_m4970(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_001b:
	{
		Debug_LogError_m380(NULL /*static, unused*/, _stringLiteral505, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t220 * GUIStyle_get_none_m4949 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_0 = ((GUIStyle_t220_StaticFields*)GUIStyle_t220_il2cpp_TypeInfo_var->static_fields)->___s_None_15;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t220 * L_1 = (GUIStyle_t220 *)il2cpp_codegen_object_new (GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4942(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		((GUIStyle_t220_StaticFields*)GUIStyle_t220_il2cpp_TypeInfo_var->static_fields)->___s_None_15 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_t220 * L_2 = ((GUIStyle_t220_StaticFields*)GUIStyle_t220_il2cpp_TypeInfo_var->static_fields)->___s_None_15;
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" Vector2_t85  GUIStyle_CalcSize_m1255 (GUIStyle_t220 * __this, GUIContent_t264 * ___content, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t85  V_0 = {0};
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		GUIContent_t264 * L_1 = ___content;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_Internal_CalcSize_m4973(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		Vector2_t85  L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" float GUIStyle_CalcHeight_m4950 (GUIStyle_t220 * __this, GUIContent_t264 * ___content, float ___width, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		GUIContent_t264 * L_1 = ___content;
		float L_2 = ___width;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		float L_3 = GUIStyle_Internal_CalcHeight_m4974(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
extern "C" bool GUIStyle_get_isHeightDependantOnWidth_m4951 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		float L_0 = GUIStyle_get_fixedHeight_m4965(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		bool L_1 = GUIStyle_get_wordWrap_m4963(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = GUIStyle_get_imagePosition_m4962(__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
	}

IL_002a:
	{
		G_B6_0 = G_B4_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B6_0 = 0;
	}

IL_002d:
	{
		return G_B6_0;
	}
}
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" void GUIStyle_CalcMinMaxWidth_m4952 (GUIStyle_t220 * __this, GUIContent_t264 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		GUIContent_t264 * L_1 = ___content;
		float* L_2 = ___minWidth;
		float* L_3 = ___maxWidth;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_Internal_CalcMinMaxWidth_m4975(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.GUIStyle::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral506;
extern "C" String_t* GUIStyle_ToString_m4953 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		_stringLiteral506 = il2cpp_codegen_string_literal_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t234* L_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = GUIStyle_get_name_m4957(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		String_t* L_2 = UnityString_Format_m4336(NULL /*static, unused*/, _stringLiteral506, L_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m4954 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Init_m4954_ftn) (GUIStyle_t220 *);
	static GUIStyle_Init_m4954_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Init_m4954_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::InitCopy(UnityEngine.GUIStyle)
extern "C" void GUIStyle_InitCopy_m4955 (GUIStyle_t220 * __this, GUIStyle_t220 * ___other, const MethodInfo* method)
{
	typedef void (*GUIStyle_InitCopy_m4955_ftn) (GUIStyle_t220 *, GUIStyle_t220 *);
	static GUIStyle_InitCopy_m4955_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_InitCopy_m4955_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::InitCopy(UnityEngine.GUIStyle)");
	_il2cpp_icall_func(__this, ___other);
}
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m4956 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Cleanup_m4956_ftn) (GUIStyle_t220 *);
	static GUIStyle_Cleanup_m4956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Cleanup_m4956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m4957 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	typedef String_t* (*GUIStyle_get_name_m4957_ftn) (GUIStyle_t220 *);
	static GUIStyle_get_name_m4957_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_name_m4957_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void GUIStyle_set_name_m4958 (GUIStyle_t220 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_name_m4958_ftn) (GUIStyle_t220 *, String_t*);
	static GUIStyle_set_name_m4958_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_name_m4958_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m4959 (GUIStyle_t220 * __this, int32_t ___idx, const MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetStyleStatePtr_m4959_ftn) (GUIStyle_t220 *, int32_t);
	static GUIStyle_GetStyleStatePtr_m4959_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_m4959_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m4960 (GUIStyle_t220 * __this, int32_t ___idx, const MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetRectOffsetPtr_m4960_ftn) (GUIStyle_t220 *, int32_t);
	static GUIStyle_GetRectOffsetPtr_m4960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_m4960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void GUIStyle_AssignRectOffset_m4961 (GUIStyle_t220 * __this, int32_t ___idx, IntPtr_t ___srcRectOffset, const MethodInfo* method)
{
	typedef void (*GUIStyle_AssignRectOffset_m4961_ftn) (GUIStyle_t220 *, int32_t, IntPtr_t);
	static GUIStyle_AssignRectOffset_m4961_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_AssignRectOffset_m4961_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)");
	_il2cpp_icall_func(__this, ___idx, ___srcRectOffset);
}
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
extern "C" int32_t GUIStyle_get_imagePosition_m4962 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	typedef int32_t (*GUIStyle_get_imagePosition_m4962_ftn) (GUIStyle_t220 *);
	static GUIStyle_get_imagePosition_m4962_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_imagePosition_m4962_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_imagePosition()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
extern "C" bool GUIStyle_get_wordWrap_m4963 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	typedef bool (*GUIStyle_get_wordWrap_m4963_ftn) (GUIStyle_t220 *);
	static GUIStyle_get_wordWrap_m4963_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_wordWrap_m4963_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_wordWrap()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m4964 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedWidth_m4964_ftn) (GUIStyle_t220 *);
	static GUIStyle_get_fixedWidth_m4964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m4964_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m4965 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedHeight_m4965_ftn) (GUIStyle_t220 *);
	static GUIStyle_get_fixedHeight_m4965_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m4965_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m4966 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchWidth_m4966_ftn) (GUIStyle_t220 *);
	static GUIStyle_get_stretchWidth_m4966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m4966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m4967 (GUIStyle_t220 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchWidth_m4967_ftn) (GUIStyle_t220 *, bool);
	static GUIStyle_set_stretchWidth_m4967_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchWidth_m4967_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m4968 (GUIStyle_t220 * __this, const MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchHeight_m4968_ftn) (GUIStyle_t220 *);
	static GUIStyle_get_stretchHeight_m4968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m4968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m4969 (GUIStyle_t220 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchHeight_m4969_ftn) (GUIStyle_t220 *, bool);
	static GUIStyle_set_stretchHeight_m4969_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_m4969_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" void GUIStyle_set_fontSize_m1080 (GUIStyle_t220 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_fontSize_m1080_ftn) (GUIStyle_t220 *, int32_t);
	static GUIStyle_set_fontSize_m1080_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_fontSize_m1080_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_fontSize(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern TypeInfo* GUIStyle_t220_il2cpp_TypeInfo_var;
extern "C" void GUIStyle_Internal_Draw2_m4970 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t232  ___position, GUIContent_t264 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___style;
		GUIContent_t264 * L_1 = ___content;
		int32_t L_2 = ___controlID;
		bool L_3 = ___on;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t220_il2cpp_TypeInfo_var);
		GUIStyle_INTERNAL_CALL_Internal_Draw2_m4971(NULL /*static, unused*/, L_0, (&___position), L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_Draw2_m4971 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t232 * ___position, GUIContent_t264 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method)
{
	typedef void (*GUIStyle_INTERNAL_CALL_Internal_Draw2_m4971_ftn) (IntPtr_t, Rect_t232 *, GUIContent_t264 *, int32_t, bool);
	static GUIStyle_INTERNAL_CALL_Internal_Draw2_m4971_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_INTERNAL_CALL_Internal_Draw2_m4971_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___style, ___position, ___content, ___controlID, ___on);
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
extern "C" void GUIStyle_SetDefaultFont_m4972 (Object_t * __this /* static, unused */, Font_t364 * ___font, const MethodInfo* method)
{
	typedef void (*GUIStyle_SetDefaultFont_m4972_ftn) (Font_t364 *);
	static GUIStyle_SetDefaultFont_m4972_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_m4972_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___font);
}
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m4973 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t264 * ___content, Vector2_t85 * ___ret, const MethodInfo* method)
{
	typedef void (*GUIStyle_Internal_CalcSize_m4973_ftn) (IntPtr_t, GUIContent_t264 *, Vector2_t85 *);
	static GUIStyle_Internal_CalcSize_m4973_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcSize_m4973_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___target, ___content, ___ret);
}
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m4974 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t264 * ___content, float ___width, const MethodInfo* method)
{
	typedef float (*GUIStyle_Internal_CalcHeight_m4974_ftn) (IntPtr_t, GUIContent_t264 *, float);
	static GUIStyle_Internal_CalcHeight_m4974_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcHeight_m4974_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)");
	return _il2cpp_icall_func(___target, ___content, ___width);
}
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_Internal_CalcMinMaxWidth_m4975 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t264 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method)
{
	typedef void (*GUIStyle_Internal_CalcMinMaxWidth_m4975_ftn) (IntPtr_t, GUIContent_t264 *, float*, float*);
	static GUIStyle_Internal_CalcMinMaxWidth_m4975_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcMinMaxWidth_m4975_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)");
	_il2cpp_icall_func(___target, ___content, ___minWidth, ___maxWidth);
}
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIException.h"
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIExceptionMethodDeclarations.h"
// UnityEngine.FocusType
#include "UnityEngine_UnityEngine_FocusTypeMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtility.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Void UnityEngine.GUIUtility::.cctor()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern "C" void GUIUtility__cctor_m4976 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t85  L_0 = Vector2_get_zero_m2679(NULL /*static, unused*/, /*hidden argument*/NULL);
		((GUIUtility_t553_StaticFields*)GUIUtility_t553_il2cpp_TypeInfo_var->static_fields)->___s_EditorScreenPointOffset_2 = L_0;
		((GUIUtility_t553_StaticFields*)GUIUtility_t553_il2cpp_TypeInfo_var->static_fields)->___s_HasKeyboardFocus_3 = 0;
		return;
	}
}
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern "C" float GUIUtility_get_pixelsPerPoint_m4977 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		float L_0 = GUIUtility_Internal_GetPixelsPerPoint_m4983(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern "C" GUISkin_t231 * GUIUtility_GetDefaultSkin_m4978 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GUIUtility_t553_StaticFields*)GUIUtility_t553_il2cpp_TypeInfo_var->static_fields)->___s_SkinMode_0;
		GUISkin_t231 * L_1 = GUIUtility_Internal_GetDefaultSkin_m4985(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t230_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern "C" void GUIUtility_BeginGUI_m4979 (Object_t * __this /* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		GUI_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___skinMode;
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		((GUIUtility_t553_StaticFields*)GUIUtility_t553_il2cpp_TypeInfo_var->static_fields)->___s_SkinMode_0 = L_0;
		int32_t L_1 = ___instanceID;
		((GUIUtility_t553_StaticFields*)GUIUtility_t553_il2cpp_TypeInfo_var->static_fields)->___s_OriginalID_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_set_skin_m4785(NULL /*static, unused*/, (GUISkin_t231 *)NULL, /*hidden argument*/NULL);
		int32_t L_2 = ___useGUILayout;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
		GUILayoutUtility_SelectIDList_m4816(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		int32_t L_4 = ___instanceID;
		GUILayoutUtility_Begin_m4817(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t230_il2cpp_TypeInfo_var);
		GUI_set_changed_m4798(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t837_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t264_il2cpp_TypeInfo_var;
extern "C" void GUIUtility_EndGUI_m4980 (Object_t * __this /* static, unused */, int32_t ___layoutType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		GUIContent_t264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Event_t400 * L_0 = Event_get_current_m4744(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_0);
			int32_t L_1 = Event_get_type_m2986(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)8))))
			{
				goto IL_0042;
			}
		}

IL_0010:
		{
			int32_t L_2 = ___layoutType;
			V_0 = L_2;
			int32_t L_3 = V_0;
			if (L_3 == 0)
			{
				goto IL_0029;
			}
			if (L_3 == 1)
			{
				goto IL_002e;
			}
			if (L_3 == 2)
			{
				goto IL_0038;
			}
		}

IL_0024:
		{
			goto IL_0042;
		}

IL_0029:
		{
			goto IL_0042;
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
			GUILayoutUtility_Layout_m4819(NULL /*static, unused*/, /*hidden argument*/NULL);
			goto IL_0042;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutFromEditorWindow_m4820(NULL /*static, unused*/, /*hidden argument*/NULL);
			goto IL_0042;
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
			int32_t L_4 = ((GUIUtility_t553_StaticFields*)GUIUtility_t553_il2cpp_TypeInfo_var->static_fields)->___s_OriginalID_1;
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t837_il2cpp_TypeInfo_var);
			GUILayoutUtility_SelectIDList_m4816(NULL /*static, unused*/, L_4, 0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t264_il2cpp_TypeInfo_var);
			GUIContent_ClearStaticCache_m4809(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x5E, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		GUIUtility_Internal_ExitGUI_m4986(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_005e:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
// System.Exception
#include "mscorlib_System_Exception.h"
extern TypeInfo* ExitGUIException_t851_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern "C" bool GUIUtility_EndGUIFromException_m4981 (Object_t * __this /* static, unused */, Exception_t236 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExitGUIException_t851_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t236 * L_0 = ___exception;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Exception_t236 * L_1 = ___exception;
		if (((ExitGUIException_t851 *)IsInstSealed(L_1, ExitGUIException_t851_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		Exception_t236 * L_2 = ___exception;
		NullCheck(L_2);
		Exception_t236 * L_3 = (Exception_t236 *)VirtFuncInvoker0< Exception_t236 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_2);
		if (((ExitGUIException_t851 *)IsInstSealed(L_3, ExitGUIException_t851_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		return 0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		GUIUtility_Internal_ExitGUI_m4986(NULL /*static, unused*/, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* GUIUtility_t553_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral507;
extern "C" void GUIUtility_CheckOnGUI_m4982 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		_stringLiteral507 = il2cpp_codegen_string_literal_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t553_il2cpp_TypeInfo_var);
		int32_t L_0 = GUIUtility_Internal_GetGUIDepth_m4987(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t568 * L_1 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_1, _stringLiteral507, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Single UnityEngine.GUIUtility::Internal_GetPixelsPerPoint()
extern "C" float GUIUtility_Internal_GetPixelsPerPoint_m4983 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*GUIUtility_Internal_GetPixelsPerPoint_m4983_ftn) ();
	static GUIUtility_Internal_GetPixelsPerPoint_m4983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetPixelsPerPoint_m4983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetPixelsPerPoint()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType)
// UnityEngine.FocusType
#include "UnityEngine_UnityEngine_FocusType.h"
extern "C" int32_t GUIUtility_GetControlID_m4984 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___focus, const MethodInfo* method)
{
	typedef int32_t (*GUIUtility_GetControlID_m4984_ftn) (int32_t, int32_t);
	static GUIUtility_GetControlID_m4984_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_GetControlID_m4984_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType)");
	return _il2cpp_icall_func(___hint, ___focus);
}
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern "C" String_t* GUIUtility_get_systemCopyBuffer_m2965 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GUIUtility_get_systemCopyBuffer_m2965_ftn) ();
	static GUIUtility_get_systemCopyBuffer_m2965_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_systemCopyBuffer_m2965_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void GUIUtility_set_systemCopyBuffer_m2966 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GUIUtility_set_systemCopyBuffer_m2966_ftn) (String_t*);
	static GUIUtility_set_systemCopyBuffer_m2966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_systemCopyBuffer_m2966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" GUISkin_t231 * GUIUtility_Internal_GetDefaultSkin_m4985 (Object_t * __this /* static, unused */, int32_t ___skinMode, const MethodInfo* method)
{
	typedef GUISkin_t231 * (*GUIUtility_Internal_GetDefaultSkin_m4985_ftn) (int32_t);
	static GUIUtility_Internal_GetDefaultSkin_m4985_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetDefaultSkin_m4985_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	return _il2cpp_icall_func(___skinMode);
}
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" void GUIUtility_Internal_ExitGUI_m4986 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GUIUtility_Internal_ExitGUI_m4986_ftn) ();
	static GUIUtility_Internal_ExitGUI_m4986_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_ExitGUI_m4986_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C" int32_t GUIUtility_Internal_GetGUIDepth_m4987 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*GUIUtility_Internal_GetGUIDepth_m4987_ftn) ();
	static GUIUtility_Internal_GetGUIDepth_m4987_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetGUIDepth_m4987_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetGUIDepth()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::set_mouseUsed(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void GUIUtility_set_mouseUsed_m4988 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*GUIUtility_set_mouseUsed_m4988_ftn) (bool);
	static GUIUtility_set_mouseUsed_m4988_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_mouseUsed_m4988_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_mouseUsed(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.GUIClip
#include "UnityEngine_UnityEngine_GUIClip.h"
// System.Void UnityEngine.GUIClip::Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.GUIClip
#include "UnityEngine_UnityEngine_GUIClipMethodDeclarations.h"
extern "C" void GUIClip_Push_m4989 (Object_t * __this /* static, unused */, Rect_t232  ___screenRect, Vector2_t85  ___scrollOffset, Vector2_t85  ___renderOffset, bool ___resetOffset, const MethodInfo* method)
{
	{
		bool L_0 = ___resetOffset;
		GUIClip_INTERNAL_CALL_Push_m4990(NULL /*static, unused*/, (&___screenRect), (&___scrollOffset), (&___renderOffset), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Push(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
extern "C" void GUIClip_INTERNAL_CALL_Push_m4990 (Object_t * __this /* static, unused */, Rect_t232 * ___screenRect, Vector2_t85 * ___scrollOffset, Vector2_t85 * ___renderOffset, bool ___resetOffset, const MethodInfo* method)
{
	typedef void (*GUIClip_INTERNAL_CALL_Push_m4990_ftn) (Rect_t232 *, Vector2_t85 *, Vector2_t85 *, bool);
	static GUIClip_INTERNAL_CALL_Push_m4990_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIClip_INTERNAL_CALL_Push_m4990_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIClip::INTERNAL_CALL_Push(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)");
	_il2cpp_icall_func(___screenRect, ___scrollOffset, ___renderOffset, ___resetOffset);
}
// System.Void UnityEngine.GUIClip::Pop()
extern "C" void GUIClip_Pop_m4991 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GUIClip_Pop_m4991_ftn) ();
	static GUIClip_Pop_m4991_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIClip_Pop_m4991_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIClip::Pop()");
	_il2cpp_icall_func();
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Void UnityEngine.WrapperlessIcall::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void WrapperlessIcall__ctor_m4992 (WrapperlessIcall_t854 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m4993 (IL2CPPStructAlignmentAttribute_t855 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_43.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_43MethodDeclarations.h"
// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern TypeInfo* DisallowMultipleComponentU5BU5D_t857_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeHelperEngine_t856_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t858_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t859_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m4994 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisallowMultipleComponentU5BU5D_t857_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(542);
		AttributeHelperEngine_t856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(544);
		ExecuteInEditModeU5BU5D_t858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		RequireComponentU5BU5D_t859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(547);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AttributeHelperEngine_t856_StaticFields*)AttributeHelperEngine_t856_il2cpp_TypeInfo_var->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t857*)SZArrayNew(DisallowMultipleComponentU5BU5D_t857_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t856_StaticFields*)AttributeHelperEngine_t856_il2cpp_TypeInfo_var->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t858*)SZArrayNew(ExecuteInEditModeU5BU5D_t858_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t856_StaticFields*)AttributeHelperEngine_t856_il2cpp_TypeInfo_var->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t859*)SZArrayNew(RequireComponentU5BU5D_t859_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* MonoBehaviour_t23_0_0_0_var;
extern const Il2CppType* DisallowMultipleComponent_t860_0_0_0_var;
extern TypeInfo* Stack_1_t964_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m5235_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m5236_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m5237_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m4995 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviour_t23_0_0_0_var = il2cpp_codegen_type_from_index(549);
		DisallowMultipleComponent_t860_0_0_0_var = il2cpp_codegen_type_from_index(543);
		Stack_1_t964_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(550);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Stack_1__ctor_m5235_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484183);
		Stack_1_Push_m5236_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484184);
		Stack_1_Pop_m5237_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484185);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t964 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t234* V_2 = {0};
	int32_t V_3 = 0;
	{
		Stack_1_t964 * L_0 = (Stack_1_t964 *)il2cpp_codegen_object_new (Stack_1_t964_il2cpp_TypeInfo_var);
		Stack_1__ctor_m5235(L_0, /*hidden argument*/Stack_1__ctor_m5235_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t964 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m5236(L_1, L_2, /*hidden argument*/Stack_1_Push_m5236_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t23_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005c;
	}

IL_0037:
	{
		Stack_1_t964 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m5237(L_8, /*hidden argument*/Stack_1_Pop_m5237_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(DisallowMultipleComponent_t860_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ObjectU5BU5D_t234* L_12 = (ObjectU5BU5D_t234*)VirtFuncInvoker2< ObjectU5BU5D_t234*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t234* L_13 = V_2;
		NullCheck(L_13);
		V_3 = (((int32_t)(((Array_t *)L_13)->max_length)));
		int32_t L_14 = V_3;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_15 = V_1;
		return L_15;
	}

IL_005c:
	{
		Stack_1_t964 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_16);
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_43MethodDeclarations.h"
extern const Il2CppType* RequireComponent_t861_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t23_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t859_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t105_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t965_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5238_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m5239_MethodInfo_var;
extern "C" TypeU5BU5D_t105* AttributeHelperEngine_GetRequiredComponents_m4996 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RequireComponent_t861_0_0_0_var = il2cpp_codegen_type_from_index(548);
		MonoBehaviour_t23_0_0_0_var = il2cpp_codegen_type_from_index(549);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		RequireComponentU5BU5D_t859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(547);
		TypeU5BU5D_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1_t965_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		List_1__ctor_m5238_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		List_1_ToArray_m5239_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t965 * V_0 = {0};
	RequireComponentU5BU5D_t859* V_1 = {0};
	Type_t * V_2 = {0};
	RequireComponent_t861 * V_3 = {0};
	RequireComponentU5BU5D_t859* V_4 = {0};
	int32_t V_5 = 0;
	TypeU5BU5D_t105* V_6 = {0};
	{
		V_0 = (List_1_t965 *)NULL;
		goto IL_00e0;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(RequireComponent_t861_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t234* L_2 = (ObjectU5BU5D_t234*)VirtFuncInvoker2< ObjectU5BU5D_t234*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = ((RequireComponentU5BU5D_t859*)Castclass(L_2, RequireComponentU5BU5D_t859_il2cpp_TypeInfo_var));
		Type_t * L_3 = ___klass;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		V_2 = L_4;
		RequireComponentU5BU5D_t859* L_5 = V_1;
		V_4 = L_5;
		V_5 = 0;
		goto IL_00d2;
	}

IL_0030:
	{
		RequireComponentU5BU5D_t859* L_6 = V_4;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(RequireComponent_t861 **)(RequireComponent_t861 **)SZArrayLdElema(L_6, L_8, sizeof(RequireComponent_t861 *)));
		List_1_t965 * L_9 = V_0;
		if (L_9)
		{
			goto IL_007b;
		}
	}
	{
		RequireComponentU5BU5D_t859* L_10 = V_1;
		NullCheck(L_10);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_007b;
		}
	}
	{
		Type_t * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t23_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_11) == ((Object_t*)(Type_t *)L_12))))
		{
			goto IL_007b;
		}
	}
	{
		TypeU5BU5D_t105* L_13 = ((TypeU5BU5D_t105*)SZArrayNew(TypeU5BU5D_t105_il2cpp_TypeInfo_var, 3));
		RequireComponent_t861 * L_14 = V_3;
		NullCheck(L_14);
		Type_t * L_15 = (L_14->___m_Type0_0);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		ArrayElementTypeCheck (L_13, L_15);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_13, 0, sizeof(Type_t *))) = (Type_t *)L_15;
		TypeU5BU5D_t105* L_16 = L_13;
		RequireComponent_t861 * L_17 = V_3;
		NullCheck(L_17);
		Type_t * L_18 = (L_17->___m_Type1_1);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_16, 1, sizeof(Type_t *))) = (Type_t *)L_18;
		TypeU5BU5D_t105* L_19 = L_16;
		RequireComponent_t861 * L_20 = V_3;
		NullCheck(L_20);
		Type_t * L_21 = (L_20->___m_Type2_2);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2, sizeof(Type_t *))) = (Type_t *)L_21;
		V_6 = L_19;
		TypeU5BU5D_t105* L_22 = V_6;
		return L_22;
	}

IL_007b:
	{
		List_1_t965 * L_23 = V_0;
		if (L_23)
		{
			goto IL_0087;
		}
	}
	{
		List_1_t965 * L_24 = (List_1_t965 *)il2cpp_codegen_object_new (List_1_t965_il2cpp_TypeInfo_var);
		List_1__ctor_m5238(L_24, /*hidden argument*/List_1__ctor_m5238_MethodInfo_var);
		V_0 = L_24;
	}

IL_0087:
	{
		RequireComponent_t861 * L_25 = V_3;
		NullCheck(L_25);
		Type_t * L_26 = (L_25->___m_Type0_0);
		if (!L_26)
		{
			goto IL_009e;
		}
	}
	{
		List_1_t965 * L_27 = V_0;
		RequireComponent_t861 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type0_0);
		NullCheck(L_27);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_27, L_29);
	}

IL_009e:
	{
		RequireComponent_t861 * L_30 = V_3;
		NullCheck(L_30);
		Type_t * L_31 = (L_30->___m_Type1_1);
		if (!L_31)
		{
			goto IL_00b5;
		}
	}
	{
		List_1_t965 * L_32 = V_0;
		RequireComponent_t861 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type1_1);
		NullCheck(L_32);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_32, L_34);
	}

IL_00b5:
	{
		RequireComponent_t861 * L_35 = V_3;
		NullCheck(L_35);
		Type_t * L_36 = (L_35->___m_Type2_2);
		if (!L_36)
		{
			goto IL_00cc;
		}
	}
	{
		List_1_t965 * L_37 = V_0;
		RequireComponent_t861 * L_38 = V_3;
		NullCheck(L_38);
		Type_t * L_39 = (L_38->___m_Type2_2);
		NullCheck(L_37);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_37, L_39);
	}

IL_00cc:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00d2:
	{
		int32_t L_41 = V_5;
		RequireComponentU5BU5D_t859* L_42 = V_4;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_43 = V_2;
		___klass = L_43;
	}

IL_00e0:
	{
		Type_t * L_44 = ___klass;
		if (!L_44)
		{
			goto IL_00f6;
		}
	}
	{
		Type_t * L_45 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t23_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_45) == ((Object_t*)(Type_t *)L_46))))
		{
			goto IL_0007;
		}
	}

IL_00f6:
	{
		List_1_t965 * L_47 = V_0;
		if (L_47)
		{
			goto IL_00fe;
		}
	}
	{
		return (TypeU5BU5D_t105*)NULL;
	}

IL_00fe:
	{
		List_1_t965 * L_48 = V_0;
		NullCheck(L_48);
		TypeU5BU5D_t105* L_49 = List_1_ToArray_m5239(L_48, /*hidden argument*/List_1_ToArray_m5239_MethodInfo_var);
		return L_49;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const Il2CppType* ExecuteInEditMode_t863_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t23_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m4997 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t863_0_0_0_var = il2cpp_codegen_type_from_index(546);
		MonoBehaviour_t23_0_0_0_var = il2cpp_codegen_type_from_index(549);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t234* V_0 = {0};
	int32_t V_1 = 0;
	{
		goto IL_002b;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(ExecuteInEditMode_t863_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t234* L_2 = (ObjectU5BU5D_t234*)VirtFuncInvoker2< ObjectU5BU5D_t234*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t234* L_3 = V_0;
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		Type_t * L_5 = ___klass;
		NullCheck(L_5);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_5);
		___klass = L_6;
	}

IL_002b:
	{
		Type_t * L_7 = ___klass;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		Type_t * L_8 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t23_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))))
		{
			goto IL_0005;
		}
	}

IL_0041:
	{
		return 0;
	}
}
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"
// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void DisallowMultipleComponent__ctor_m4998 (DisallowMultipleComponent_t860 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"
// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void RequireComponent__ctor_m4999 (RequireComponent_t861 * __this, Type_t * ___requiredComponent, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void AddComponentMenu__ctor_m5000 (AddComponentMenu_t862 * __this, String_t* ___menuName, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void AddComponentMenu__ctor_m5001 (AddComponentMenu_t862 * __this, String_t* ___menuName, int32_t ___order, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
// System.Void UnityEngine.ExecuteInEditMode::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ExecuteInEditMode__ctor_m5002 (ExecuteInEditMode_t863 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspector.h"
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspectorMethodDeclarations.h"
// System.Void UnityEngine.HideInInspector::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void HideInInspector__ctor_m5003 (HideInInspector_t864 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Void UnityEngine.SetupCoroutine::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void SetupCoroutine__ctor_m5004 (SetupCoroutine_t865 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m5005 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t234* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t234*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t234* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2703(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t234* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t966 *, Object_t *, ObjectU5BU5D_t234*, ParameterModifierU5BU5D_t967*, CultureInfo_t968 *, StringU5BU5D_t110* >::Invoke(71 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t966 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t967*)(ParameterModifierU5BU5D_t967*)NULL, (CultureInfo_t968 *)NULL, (StringU5BU5D_t110*)(StringU5BU5D_t110*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
// System.Type
#include "mscorlib_System_Type.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m5006 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t234* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t234*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t234* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t234* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t966 *, Object_t *, ObjectU5BU5D_t234*, ParameterModifierU5BU5D_t967*, CultureInfo_t968 *, StringU5BU5D_t110* >::Invoke(71 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (Binder_t966 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t967*)(ParameterModifierU5BU5D_t967*)NULL, (CultureInfo_t968 *)NULL, (StringU5BU5D_t110*)(StringU5BU5D_t110*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
// System.Void UnityEngine.WritableAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void WritableAttribute__ctor_m5007 (WritableAttribute_t866 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"
// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void AssemblyIsEditorAssembly__ctor_m5008 (AssemblyIsEditorAssembly_t867 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5199(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
