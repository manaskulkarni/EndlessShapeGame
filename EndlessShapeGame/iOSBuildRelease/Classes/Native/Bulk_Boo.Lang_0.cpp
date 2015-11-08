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
#include "Boo_Lang_U3CModuleU3E.h"
// <Module>
#include "Boo_Lang_U3CModuleU3EMethodDeclarations.h"
// Boo.Lang.Builtins
#include "Boo_Lang_Boo_Lang_Builtins.h"
// Boo.Lang.Builtins
#include "Boo_Lang_Boo_Lang_BuiltinsMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern TypeInfo* StringBuilder_t518_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t713_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern "C" String_t* Builtins_join_m5283 (Object_t * __this /* static, unused */, Object_t * ___enumerable, String_t* ___separator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		IEnumerable_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(585);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t518 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t518 * L_0 = (StringBuilder_t518 *)il2cpp_codegen_object_new (StringBuilder_t518_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2645(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = ___enumerable;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t713_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		V_2 = ((Object_t *)IsInst(L_3, IDisposable_t237_il2cpp_TypeInfo_var));
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_4);
			if (!L_5)
			{
				goto IL_0051;
			}
		}

IL_001f:
		{
			StringBuilder_t518 * L_6 = V_0;
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_7);
			NullCheck(L_6);
			StringBuilder_Append_m5330(L_6, L_8, /*hidden argument*/NULL);
			goto IL_0046;
		}

IL_0031:
		{
			StringBuilder_t518 * L_9 = V_0;
			String_t* L_10 = ___separator;
			NullCheck(L_9);
			StringBuilder_Append_m3959(L_9, L_10, /*hidden argument*/NULL);
			StringBuilder_t518 * L_11 = V_0;
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_12);
			NullCheck(L_11);
			StringBuilder_Append_m5330(L_11, L_13, /*hidden argument*/NULL);
		}

IL_0046:
		{
			Object_t * L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0031;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			Object_t * L_16 = V_2;
			if (!L_16)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			Object_t * L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_17);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_0063:
	{
		StringBuilder_t518 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = StringBuilder_ToString_m2649(L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCacheMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispatcher.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void DispatcherFactory__ctor_m5284 (DispatcherFactory_t989 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern "C" Dispatcher_t990 * DispatcherFactory_Invoke_m5285 (DispatcherFactory_t989 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DispatcherFactory_Invoke_m5285((DispatcherFactory_t989 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef Dispatcher_t990 * (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Dispatcher_t990 * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispatcher.h"
extern TypeInfo* Dispatcher_t990_il2cpp_TypeInfo_var;
extern "C" Dispatcher_t990 * pinvoke_delegate_wrapper_DispatcherFactory_t989(Il2CppObject* delegate)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dispatcher_t990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(586);
		s_Il2CppMethodIntialized = true;
	}
	typedef methodPointerType (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation and marshaling of return value back from native representation
	methodPointerType _return_value = _il2cpp_pinvoke_func();
	Dispatcher_t990 * __return_value_unmarshaled = { 0 };
	__return_value_unmarshaled = il2cpp_codegen_marshal_function_ptr_to_delegate<Dispatcher_t990>(_return_value, Dispatcher_t990_il2cpp_TypeInfo_var);

	return __return_value_unmarshaled;
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * DispatcherFactory_BeginInvoke_m5286 (DispatcherFactory_t989 * __this, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern "C" Dispatcher_t990 * DispatcherFactory_EndInvoke_m5287 (DispatcherFactory_t989 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Dispatcher_t990 *)__result;
}
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache_0.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache_0MethodDeclarations.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey.h"
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKeyMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void DispatcherCache__ctor_m5288 (DispatcherCache_t991 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
extern TypeInfo* DispatcherKey_t994_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t992_il2cpp_TypeInfo_var;
extern TypeInfo* DispatcherCache_t991_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5331_MethodInfo_var;
extern "C" void DispatcherCache__cctor_m5289 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DispatcherKey_t994_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(587);
		Dictionary_2_t992_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(588);
		DispatcherCache_t991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(589);
		Dictionary_2__ctor_m5331_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484201);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DispatcherKey_t994_il2cpp_TypeInfo_var);
		Object_t* L_0 = ((DispatcherKey_t994_StaticFields*)DispatcherKey_t994_il2cpp_TypeInfo_var->static_fields)->___EqualityComparer_0;
		Dictionary_2_t992 * L_1 = (Dictionary_2_t992 *)il2cpp_codegen_object_new (Dictionary_2_t992_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5331(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m5331_MethodInfo_var);
		((DispatcherCache_t991_StaticFields*)DispatcherCache_t991_il2cpp_TypeInfo_var->static_fields)->____cache_0 = L_1;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCacheMethodDeclarations.h"
extern TypeInfo* DispatcherCache_t991_il2cpp_TypeInfo_var;
extern "C" Dispatcher_t990 * DispatcherCache_Get_m5290 (DispatcherCache_t991 * __this, DispatcherKey_t994 * ___key, DispatcherFactory_t989 * ___factory, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DispatcherCache_t991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(589);
		s_Il2CppMethodIntialized = true;
	}
	Dispatcher_t990 * V_0 = {0};
	Dictionary_2_t992 * V_1 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t991_il2cpp_TypeInfo_var);
		Dictionary_2_t992 * L_0 = ((DispatcherCache_t991_StaticFields*)DispatcherCache_t991_il2cpp_TypeInfo_var->static_fields)->____cache_0;
		DispatcherKey_t994 * L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, DispatcherKey_t994 *, Dispatcher_t990 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t991_il2cpp_TypeInfo_var);
		Dictionary_2_t992 * L_3 = ((DispatcherCache_t991_StaticFields*)DispatcherCache_t991_il2cpp_TypeInfo_var->static_fields)->____cache_0;
		V_1 = L_3;
		Dictionary_2_t992 * L_4 = V_1;
		Monitor_Enter_m3930(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t991_il2cpp_TypeInfo_var);
			Dictionary_2_t992 * L_5 = ((DispatcherCache_t991_StaticFields*)DispatcherCache_t991_il2cpp_TypeInfo_var->static_fields)->____cache_0;
			DispatcherKey_t994 * L_6 = ___key;
			NullCheck(L_5);
			bool L_7 = (bool)VirtFuncInvoker2< bool, DispatcherKey_t994 *, Dispatcher_t990 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::TryGetValue(!0,!1&) */, L_5, L_6, (&V_0));
			if (L_7)
			{
				goto IL_0043;
			}
		}

IL_0030:
		{
			DispatcherFactory_t989 * L_8 = ___factory;
			NullCheck(L_8);
			Dispatcher_t990 * L_9 = DispatcherFactory_Invoke_m5285(L_8, /*hidden argument*/NULL);
			V_0 = L_9;
			IL2CPP_RUNTIME_CLASS_INIT(DispatcherCache_t991_il2cpp_TypeInfo_var);
			Dictionary_2_t992 * L_10 = ((DispatcherCache_t991_StaticFields*)DispatcherCache_t991_il2cpp_TypeInfo_var->static_fields)->____cache_0;
			DispatcherKey_t994 * L_11 = ___key;
			Dispatcher_t990 * L_12 = V_0;
			NullCheck(L_10);
			VirtActionInvoker2< DispatcherKey_t994 *, Dispatcher_t990 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Add(!0,!1) */, L_10, L_11, L_12);
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Dictionary_2_t992 * L_13 = V_1;
		Monitor_Exit_m3931(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_004f:
	{
		Dispatcher_t990 * L_14 = V_0;
		return L_14;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey__.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey__MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "mscorlib_ArrayTypes.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void _EqualityComparer__ctor_m5291 (_EqualityComparer_t993 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::GetHashCode(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern "C" int32_t _EqualityComparer_GetHashCode_m5292 (_EqualityComparer_t993 * __this, DispatcherKey_t994 * ___key, const MethodInfo* method)
{
	{
		DispatcherKey_t994 * L_0 = ___key;
		NullCheck(L_0);
		Type_t * L_1 = (L_0->____type_1);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Type::GetHashCode() */, L_1);
		DispatcherKey_t994 * L_3 = ___key;
		NullCheck(L_3);
		String_t* L_4 = (L_3->____name_2);
		NullCheck(L_4);
		int32_t L_5 = String_GetHashCode_m5216(L_4, /*hidden argument*/NULL);
		DispatcherKey_t994 * L_6 = ___key;
		NullCheck(L_6);
		TypeU5BU5D_t105* L_7 = (L_6->____arguments_3);
		NullCheck(L_7);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_2^(int32_t)L_5))^(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
	}
}
// System.Boolean Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::Equals(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool _EqualityComparer_Equals_m5293 (_EqualityComparer_t993 * __this, DispatcherKey_t994 * ___x, DispatcherKey_t994 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		DispatcherKey_t994 * L_0 = ___x;
		NullCheck(L_0);
		Type_t * L_1 = (L_0->____type_1);
		DispatcherKey_t994 * L_2 = ___y;
		NullCheck(L_2);
		Type_t * L_3 = (L_2->____type_1);
		if ((((Object_t*)(Type_t *)L_1) == ((Object_t*)(Type_t *)L_3)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		DispatcherKey_t994 * L_4 = ___x;
		NullCheck(L_4);
		TypeU5BU5D_t105* L_5 = (L_4->____arguments_3);
		NullCheck(L_5);
		DispatcherKey_t994 * L_6 = ___y;
		NullCheck(L_6);
		TypeU5BU5D_t105* L_7 = (L_6->____arguments_3);
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}

IL_002a:
	{
		DispatcherKey_t994 * L_8 = ___x;
		NullCheck(L_8);
		String_t* L_9 = (L_8->____name_2);
		DispatcherKey_t994 * L_10 = ___y;
		NullCheck(L_10);
		String_t* L_11 = (L_10->____name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Inequality_m2969(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}

IL_0042:
	{
		V_0 = 0;
		goto IL_0064;
	}

IL_0049:
	{
		DispatcherKey_t994 * L_13 = ___x;
		NullCheck(L_13);
		TypeU5BU5D_t105* L_14 = (L_13->____arguments_3);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		DispatcherKey_t994 * L_17 = ___y;
		NullCheck(L_17);
		TypeU5BU5D_t105* L_18 = (L_17->____arguments_3);
		int32_t L_19 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_14, L_16, sizeof(Type_t *)))) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_18, L_20, sizeof(Type_t *))))))
		{
			goto IL_0060;
		}
	}
	{
		return 0;
	}

IL_0060:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0064:
	{
		int32_t L_22 = V_0;
		DispatcherKey_t994 * L_23 = ___x;
		NullCheck(L_23);
		TypeU5BU5D_t105* L_24 = (L_23->____arguments_3);
		NullCheck(L_24);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		return 1;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.ctor(System.Type,System.String,System.Type[])
// System.Type
#include "mscorlib_System_Type.h"
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void DispatcherKey__ctor_m5294 (DispatcherKey_t994 * __this, Type_t * ___type, String_t* ___name, TypeU5BU5D_t105* ___arguments, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		__this->____type_1 = L_0;
		String_t* L_1 = ___name;
		__this->____name_2 = L_1;
		TypeU5BU5D_t105* L_2 = ___arguments;
		__this->____arguments_3 = L_2;
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.cctor()
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey__MethodDeclarations.h"
extern TypeInfo* _EqualityComparer_t993_il2cpp_TypeInfo_var;
extern TypeInfo* DispatcherKey_t994_il2cpp_TypeInfo_var;
extern "C" void DispatcherKey__cctor_m5295 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_EqualityComparer_t993_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		DispatcherKey_t994_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(587);
		s_Il2CppMethodIntialized = true;
	}
	{
		_EqualityComparer_t993 * L_0 = (_EqualityComparer_t993 *)il2cpp_codegen_object_new (_EqualityComparer_t993_il2cpp_TypeInfo_var);
		_EqualityComparer__ctor_m5291(L_0, /*hidden argument*/NULL);
		((DispatcherKey_t994_StaticFields*)DispatcherKey_t994_il2cpp_TypeInfo_var->static_fields)->___EqualityComparer_0 = L_0;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_NumericPromotio.h"
// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_NumericPromotioMethodDeclarations.h"
// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistry.h"
// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistryMethodDeclarations.h"
// Boo.Lang.List`1<System.Reflection.MemberInfo>
#include "Boo_Lang_Boo_Lang_List_1_gen.h"
// Boo.Lang.List`1<System.Reflection.MemberInfo>
#include "Boo_Lang_Boo_Lang_List_1_genMethodDeclarations.h"
// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
// Boo.Lang.List`1<System.Reflection.MemberInfo>
#include "Boo_Lang_Boo_Lang_List_1_genMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* List_1_t998_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5332_MethodInfo_var;
extern "C" void ExtensionRegistry__ctor_m5296 (ExtensionRegistry_t997 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		List_1__ctor_m5332_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484202);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t998 * L_0 = (List_1_t998 *)il2cpp_codegen_object_new (List_1_t998_il2cpp_TypeInfo_var);
		List_1__ctor_m5332(L_0, /*hidden argument*/List_1__ctor_m5332_MethodInfo_var);
		__this->____extensions_0 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m419(L_1, /*hidden argument*/NULL);
		__this->____classLock_1 = L_1;
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
extern "C" Object_t* ExtensionRegistry_get_Extensions_m5297 (ExtensionRegistry_t997 * __this, const MethodInfo* method)
{
	{
		List_1_t998 * L_0 = (__this->____extensions_0);
		return L_0;
	}
}
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMet.h"
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMetMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5298 (U3CGetExtensionMethodsU3Ec__IteratorC_t999 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current()
extern "C" MethodInfo_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5299 (U3CGetExtensionMethodsU3Ec__IteratorC_t999 * __this, const MethodInfo* method)
{
	{
		MethodInfo_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5300 (U3CGetExtensionMethodsU3Ec__IteratorC_t999 * __this, const MethodInfo* method)
{
	{
		MethodInfo_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Collections.IEnumerator Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerable.GetEnumerator()
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMetMethodDeclarations.h"
extern "C" Object_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5301 (U3CGetExtensionMethodsU3Ec__IteratorC_t999 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5302(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
extern TypeInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t999_il2cpp_TypeInfo_var;
extern "C" Object_t* U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5302 (U3CGetExtensionMethodsU3Ec__IteratorC_t999 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t* L_0 = &(__this->___U24PC_2);
		int32_t L_1 = Interlocked_CompareExchange_m5333(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t999 * L_2 = (U3CGetExtensionMethodsU3Ec__IteratorC_t999 *)il2cpp_codegen_object_new (U3CGetExtensionMethodsU3Ec__IteratorC_t999_il2cpp_TypeInfo_var);
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5298(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::MoveNext()
// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistryMethodDeclarations.h"
extern TypeInfo* RuntimeServices_t271_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t1003_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t1000_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" bool U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m5303 (U3CGetExtensionMethodsU3Ec__IteratorC_t999 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RuntimeServices_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		IEnumerable_1_t1003_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		IEnumerator_1_t1000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(574);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00c2;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		ExtensionRegistry_t997 * L_2 = ((RuntimeServices_t271_StaticFields*)RuntimeServices_t271_il2cpp_TypeInfo_var->static_fields)->____extensions_3;
		NullCheck(L_2);
		Object_t* L_3 = ExtensionRegistry_get_Extensions_m5297(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Object_t* L_4 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, IEnumerable_1_t1003_il2cpp_TypeInfo_var, L_3);
		__this->___U3CU24s_49U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_008d;
			}
		}

IL_0047:
		{
			goto IL_008d;
		}

IL_004c:
		{
			Object_t* L_6 = (__this->___U3CU24s_49U3E__0_0);
			NullCheck(L_6);
			MemberInfo_t * L_7 = (MemberInfo_t *)InterfaceFuncInvoker0< MemberInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, IEnumerator_1_t1000_il2cpp_TypeInfo_var, L_6);
			__this->___U3CmemberU3E__1_1 = L_7;
			MemberInfo_t * L_8 = (__this->___U3CmemberU3E__1_1);
			NullCheck(L_8);
			int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_8);
			if ((!(((uint32_t)L_9) == ((uint32_t)8))))
			{
				goto IL_008d;
			}
		}

IL_006e:
		{
			MemberInfo_t * L_10 = (__this->___U3CmemberU3E__1_1);
			__this->___U24current_3 = ((MethodInfo_t *)CastclassClass(L_10, MethodInfo_t_il2cpp_TypeInfo_var));
			__this->___U24PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xC4, FINALLY_00a2);
		}

IL_008d:
		{
			Object_t* L_11 = (__this->___U3CU24s_49U3E__0_0);
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_004c;
			}
		}

IL_009d:
		{
			IL2CPP_LEAVE(0xBB, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a6;
			}
		}

IL_00a5:
		{
			IL2CPP_END_FINALLY(162)
		}

IL_00a6:
		{
			Object_t* L_14 = (__this->___U3CU24s_49U3E__0_0);
			if (L_14)
			{
				goto IL_00af;
			}
		}

IL_00ae:
		{
			IL2CPP_END_FINALLY(162)
		}

IL_00af:
		{
			Object_t* L_15 = (__this->___U3CU24s_49U3E__0_0);
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_JUMP_TBL(0xBB, IL_00bb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_00bb:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00c2:
	{
		return 0;
	}

IL_00c4:
	{
		return 1;
	}
	// Dead block : IL_00c6: ldloc.2
}
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::Dispose()
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern "C" void U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5304 (U3CGetExtensionMethodsU3Ec__IteratorC_t999 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (__this->___U3CU24s_49U3E__0_0);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (__this->___U3CU24s_49U3E__0_0);
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_003b:
	{
		return;
	}
}
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CCoerceU3Ec__Ano.h"
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CCoerceU3Ec__AnoMethodDeclarations.h"
// System.Void Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CCoerceU3Ec__AnonStorey1D__ctor_m5305 (U3CCoerceU3Ec__AnonStorey1D_t1001 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::<>m__15()
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
extern TypeInfo* RuntimeServices_t271_il2cpp_TypeInfo_var;
extern "C" Dispatcher_t990 * U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m5306 (U3CCoerceU3Ec__AnonStorey1D_t1001 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RuntimeServices_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___value_0);
		Type_t * L_1 = (__this->___toType_1);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		Dispatcher_t990 * L_2 = RuntimeServices_CreateCoerceDispatcher_m5312(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CEmitImplicitCon.h"
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CEmitImplicitConMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Void Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m5307 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1002 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::<>m__16(System.Object,System.Object[])
// System.Object
#include "mscorlib_System_Object.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern "C" Object_t * U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5308 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1002 * __this, Object_t * ___target, ObjectU5BU5D_t234* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___method_0);
		ObjectU5BU5D_t234* L_1 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 1));
		Object_t * L_2 = ___target;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)L_2;
		NullCheck(L_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t234* >::Invoke(16 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, NULL, L_1);
		return L_3;
	}
}
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache_0MethodDeclarations.h"
// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistryMethodDeclarations.h"
extern const Il2CppType* RuntimeServices_t271_0_0_0_var;
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t271_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* DispatcherCache_t991_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionRegistry_t997_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t523_il2cpp_TypeInfo_var;
extern "C" void RuntimeServices__cctor_m5309 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RuntimeServices_t271_0_0_0_var = il2cpp_codegen_type_from_index(149);
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		RuntimeServices_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		DispatcherCache_t991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(589);
		ExtensionRegistry_t997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		Boolean_t523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(206);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RuntimeServices_t271_StaticFields*)RuntimeServices_t271_il2cpp_TypeInfo_var->static_fields)->___NoArguments_0 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 0));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(RuntimeServices_t271_0_0_0_var), /*hidden argument*/NULL);
		((RuntimeServices_t271_StaticFields*)RuntimeServices_t271_il2cpp_TypeInfo_var->static_fields)->___RuntimeServicesType_1 = L_0;
		DispatcherCache_t991 * L_1 = (DispatcherCache_t991 *)il2cpp_codegen_object_new (DispatcherCache_t991_il2cpp_TypeInfo_var);
		DispatcherCache__ctor_m5288(L_1, /*hidden argument*/NULL);
		((RuntimeServices_t271_StaticFields*)RuntimeServices_t271_il2cpp_TypeInfo_var->static_fields)->____cache_2 = L_1;
		ExtensionRegistry_t997 * L_2 = (ExtensionRegistry_t997 *)il2cpp_codegen_object_new (ExtensionRegistry_t997_il2cpp_TypeInfo_var);
		ExtensionRegistry__ctor_m5296(L_2, /*hidden argument*/NULL);
		((RuntimeServices_t271_StaticFields*)RuntimeServices_t271_il2cpp_TypeInfo_var->static_fields)->____extensions_3 = L_2;
		bool L_3 = 1;
		Object_t * L_4 = Box(Boolean_t523_il2cpp_TypeInfo_var, &L_3);
		((RuntimeServices_t271_StaticFields*)RuntimeServices_t271_il2cpp_TypeInfo_var->static_fields)->___True_4 = L_4;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKeyMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* DispatcherKey_t994_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t271_il2cpp_TypeInfo_var;
extern "C" Dispatcher_t990 * RuntimeServices_GetDispatcher_m5310 (Object_t * __this /* static, unused */, Object_t * ___target, String_t* ___cacheKeyName, TypeU5BU5D_t105* ___cacheKeyTypes, DispatcherFactory_t989 * ___factory, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		DispatcherKey_t994_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(587);
		RuntimeServices_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	DispatcherKey_t994 * V_1 = {0};
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	{
		Object_t * L_0 = ___target;
		Type_t * L_1 = ((Type_t *)IsInstClass(L_0, Type_t_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		Object_t * L_2 = ___target;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2703(L_2, /*hidden argument*/NULL);
		G_B2_0 = L_3;
	}

IL_0013:
	{
		V_0 = G_B2_0;
		Type_t * L_4 = V_0;
		String_t* L_5 = ___cacheKeyName;
		TypeU5BU5D_t105* L_6 = ___cacheKeyTypes;
		DispatcherKey_t994 * L_7 = (DispatcherKey_t994 *)il2cpp_codegen_object_new (DispatcherKey_t994_il2cpp_TypeInfo_var);
		DispatcherKey__ctor_m5294(L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		DispatcherCache_t991 * L_8 = ((RuntimeServices_t271_StaticFields*)RuntimeServices_t271_il2cpp_TypeInfo_var->static_fields)->____cache_2;
		DispatcherKey_t994 * L_9 = V_1;
		DispatcherFactory_t989 * L_10 = ___factory;
		NullCheck(L_8);
		Dispatcher_t990 * L_11 = DispatcherCache_Get_m5290(L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CCoerceU3Ec__AnoMethodDeclarations.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCacheMethodDeclarations.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherMethodDeclarations.h"
extern TypeInfo* U3CCoerceU3Ec__AnonStorey1D_t1001_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t105_il2cpp_TypeInfo_var;
extern TypeInfo* DispatcherFactory_t989_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t271_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m5306_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral569;
extern "C" Object_t * RuntimeServices_Coerce_m5311 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CCoerceU3Ec__AnonStorey1D_t1001_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		TypeU5BU5D_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		DispatcherFactory_t989_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		RuntimeServices_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m5306_MethodInfo_var = il2cpp_codegen_method_info_from_index(555);
		_stringLiteral569 = il2cpp_codegen_string_literal_from_index(569);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t234* V_0 = {0};
	Dispatcher_t990 * V_1 = {0};
	U3CCoerceU3Ec__AnonStorey1D_t1001 * V_2 = {0};
	{
		U3CCoerceU3Ec__AnonStorey1D_t1001 * L_0 = (U3CCoerceU3Ec__AnonStorey1D_t1001 *)il2cpp_codegen_object_new (U3CCoerceU3Ec__AnonStorey1D_t1001_il2cpp_TypeInfo_var);
		U3CCoerceU3Ec__AnonStorey1D__ctor_m5305(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		U3CCoerceU3Ec__AnonStorey1D_t1001 * L_1 = V_2;
		Object_t * L_2 = ___value;
		NullCheck(L_1);
		L_1->___value_0 = L_2;
		U3CCoerceU3Ec__AnonStorey1D_t1001 * L_3 = V_2;
		Type_t * L_4 = ___toType;
		NullCheck(L_3);
		L_3->___toType_1 = L_4;
		U3CCoerceU3Ec__AnonStorey1D_t1001 * L_5 = V_2;
		NullCheck(L_5);
		Object_t * L_6 = (L_5->___value_0);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return NULL;
	}

IL_0021:
	{
		ObjectU5BU5D_t234* L_7 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 1));
		U3CCoerceU3Ec__AnonStorey1D_t1001 * L_8 = V_2;
		NullCheck(L_8);
		Type_t * L_9 = (L_8->___toType_1);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0, sizeof(Object_t *))) = (Object_t *)L_9;
		V_0 = L_7;
		U3CCoerceU3Ec__AnonStorey1D_t1001 * L_10 = V_2;
		NullCheck(L_10);
		Object_t * L_11 = (L_10->___value_0);
		TypeU5BU5D_t105* L_12 = ((TypeU5BU5D_t105*)SZArrayNew(TypeU5BU5D_t105_il2cpp_TypeInfo_var, 1));
		U3CCoerceU3Ec__AnonStorey1D_t1001 * L_13 = V_2;
		NullCheck(L_13);
		Type_t * L_14 = (L_13->___toType_1);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		ArrayElementTypeCheck (L_12, L_14);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_12, 0, sizeof(Type_t *))) = (Type_t *)L_14;
		U3CCoerceU3Ec__AnonStorey1D_t1001 * L_15 = V_2;
		IntPtr_t L_16 = { (void*)U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m5306_MethodInfo_var };
		DispatcherFactory_t989 * L_17 = (DispatcherFactory_t989 *)il2cpp_codegen_object_new (DispatcherFactory_t989_il2cpp_TypeInfo_var);
		DispatcherFactory__ctor_m5284(L_17, L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		Dispatcher_t990 * L_18 = RuntimeServices_GetDispatcher_m5310(NULL /*static, unused*/, L_11, _stringLiteral569, L_12, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		Dispatcher_t990 * L_19 = V_1;
		U3CCoerceU3Ec__AnonStorey1D_t1001 * L_20 = V_2;
		NullCheck(L_20);
		Object_t * L_21 = (L_20->___value_0);
		ObjectU5BU5D_t234* L_22 = V_0;
		NullCheck(L_19);
		Object_t * L_23 = Dispatcher_Invoke_m5327(L_19, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
extern TypeInfo* Dispatcher_t990_il2cpp_TypeInfo_var;
extern TypeInfo* ICoercible_t1006_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t271_il2cpp_TypeInfo_var;
extern const MethodInfo* RuntimeServices_IdentityDispatcher_m5317_MethodInfo_var;
extern const MethodInfo* RuntimeServices_CoercibleDispatcher_m5316_MethodInfo_var;
extern "C" Dispatcher_t990 * RuntimeServices_CreateCoerceDispatcher_m5312 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dispatcher_t990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(586);
		ICoercible_t1006_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		RuntimeServices_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		RuntimeServices_IdentityDispatcher_m5317_MethodInfo_var = il2cpp_codegen_method_info_from_index(556);
		RuntimeServices_CoercibleDispatcher_m5316_MethodInfo_var = il2cpp_codegen_method_info_from_index(557);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	{
		Type_t * L_0 = ___toType;
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(41 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_3 = { (void*)RuntimeServices_IdentityDispatcher_m5317_MethodInfo_var };
		Dispatcher_t990 * L_4 = (Dispatcher_t990 *)il2cpp_codegen_object_new (Dispatcher_t990_il2cpp_TypeInfo_var);
		Dispatcher__ctor_m5326(L_4, NULL, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, ICoercible_t1006_il2cpp_TypeInfo_var)))
		{
			goto IL_0031;
		}
	}
	{
		IntPtr_t L_6 = { (void*)RuntimeServices_CoercibleDispatcher_m5316_MethodInfo_var };
		Dispatcher_t990 * L_7 = (Dispatcher_t990 *)il2cpp_codegen_object_new (Dispatcher_t990_il2cpp_TypeInfo_var);
		Dispatcher__ctor_m5326(L_7, NULL, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0031:
	{
		Object_t * L_8 = ___value;
		NullCheck(L_8);
		Type_t * L_9 = Object_GetType_m2703(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Type_t * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		bool L_11 = RuntimeServices_IsPromotableNumeric_m5314(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		Type_t * L_12 = ___toType;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		bool L_13 = RuntimeServices_IsPromotableNumeric_m5314(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		Type_t * L_14 = V_0;
		Type_t * L_15 = ___toType;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		Dispatcher_t990 * L_16 = RuntimeServices_EmitPromotionDispatcher_m5313(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0056:
	{
		Type_t * L_17 = V_0;
		Type_t * L_18 = ___toType;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		MethodInfo_t * L_19 = RuntimeServices_FindImplicitConversionOperator_m5323(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		MethodInfo_t * L_20 = V_1;
		if (L_20)
		{
			goto IL_0071;
		}
	}
	{
		IntPtr_t L_21 = { (void*)RuntimeServices_IdentityDispatcher_m5317_MethodInfo_var };
		Dispatcher_t990 * L_22 = (Dispatcher_t990 *)il2cpp_codegen_object_new (Dispatcher_t990_il2cpp_TypeInfo_var);
		Dispatcher__ctor_m5326(L_22, NULL, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_0071:
	{
		MethodInfo_t * L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		Dispatcher_t990 * L_24 = RuntimeServices_EmitImplicitConversionDispatcher_m5315(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern const Il2CppType* Dispatcher_t990_0_0_0_var;
extern const Il2CppType* NumericPromotions_t996_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern TypeInfo* TypeCode_t1007_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dispatcher_t990_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral570;
extern Il2CppCodeGenString* _stringLiteral571;
extern "C" Dispatcher_t990 * RuntimeServices_EmitPromotionDispatcher_m5313 (Object_t * __this /* static, unused */, Type_t * ___fromType, Type_t * ___toType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dispatcher_t990_0_0_0_var = il2cpp_codegen_type_from_index(586);
		NumericPromotions_t996_0_0_0_var = il2cpp_codegen_type_from_index(600);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		TypeCode_t1007_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dispatcher_t990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(586);
		_stringLiteral570 = il2cpp_codegen_string_literal_from_index(570);
		_stringLiteral571 = il2cpp_codegen_string_literal_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(Dispatcher_t990_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m351(NULL /*static, unused*/, LoadTypeToken(NumericPromotions_t996_0_0_0_var), /*hidden argument*/NULL);
		ObjectU5BU5D_t234* L_2 = ((ObjectU5BU5D_t234*)SZArrayNew(ObjectU5BU5D_t234_il2cpp_TypeInfo_var, 4));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, _stringLiteral570);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral570;
		ObjectU5BU5D_t234* L_3 = L_2;
		Type_t * L_4 = ___fromType;
		int32_t L_5 = Type_GetTypeCode_m5334(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(TypeCode_t1007_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t234* L_8 = L_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, _stringLiteral571);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral571;
		ObjectU5BU5D_t234* L_9 = L_8;
		Type_t * L_10 = ___toType;
		int32_t L_11 = Type_GetTypeCode_m5334(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(TypeCode_t1007_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3, sizeof(Object_t *))) = (Object_t *)L_13;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1089(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_1, L_14);
		Delegate_t112 * L_16 = Delegate_CreateDelegate_m5335(NULL /*static, unused*/, L_0, L_15, /*hidden argument*/NULL);
		return ((Dispatcher_t990 *)CastclassSealed(L_16, Dispatcher_t990_il2cpp_TypeInfo_var));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t271_il2cpp_TypeInfo_var;
extern "C" bool RuntimeServices_IsPromotableNumeric_m5314 (Object_t * __this /* static, unused */, Type_t * ___fromType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		RuntimeServices_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___fromType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_1 = Type_GetTypeCode_m5334(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		bool L_2 = RuntimeServices_IsPromotableNumeric_m5322(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CEmitImplicitConMethodDeclarations.h"
extern TypeInfo* U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1002_il2cpp_TypeInfo_var;
extern TypeInfo* Dispatcher_t990_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5308_MethodInfo_var;
extern "C" Dispatcher_t990 * RuntimeServices_EmitImplicitConversionDispatcher_m5315 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1002_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		Dispatcher_t990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(586);
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5308_MethodInfo_var = il2cpp_codegen_method_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1002 * V_0 = {0};
	{
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1002 * L_0 = (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1002 *)il2cpp_codegen_object_new (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1002_il2cpp_TypeInfo_var);
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m5307(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1002 * L_1 = V_0;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_1);
		L_1->___method_0 = L_2;
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1002 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5308_MethodInfo_var };
		Dispatcher_t990 * L_5 = (Dispatcher_t990 *)il2cpp_codegen_object_new (Dispatcher_t990_il2cpp_TypeInfo_var);
		Dispatcher__ctor_m5326(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
extern TypeInfo* ICoercible_t1006_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Object_t * RuntimeServices_CoercibleDispatcher_m5316 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t234* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICoercible_t1006_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		ObjectU5BU5D_t234* L_1 = ___args;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		NullCheck(((Object_t *)Castclass(L_0, ICoercible_t1006_il2cpp_TypeInfo_var)));
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(0 /* System.Object Boo.Lang.Runtime.ICoercible::Coerce(System.Type) */, ICoercible_t1006_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_0, ICoercible_t1006_il2cpp_TypeInfo_var)), ((Type_t *)CastclassClass((*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_2, sizeof(Object_t *))), Type_t_il2cpp_TypeInfo_var)));
		return L_3;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
extern "C" Object_t * RuntimeServices_IdentityDispatcher_m5317 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t234* ___args, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		return L_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
extern "C" bool RuntimeServices_IsNumeric_m5318 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___code;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 0)
		{
			goto IL_003d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 1)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 2)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 3)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 4)
		{
			goto IL_0041;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 5)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 6)
		{
			goto IL_0043;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 7)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 9)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)5)) == 10)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0051;
	}

IL_003b:
	{
		return 1;
	}

IL_003d:
	{
		return 1;
	}

IL_003f:
	{
		return 1;
	}

IL_0041:
	{
		return 1;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t271_il2cpp_TypeInfo_var;
extern TypeInfo* Array_t_il2cpp_TypeInfo_var;
extern "C" bool RuntimeServices_EqualityOperator_m1272 (Object_t * __this /* static, unused */, Object_t * ___lhs, Object_t * ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		RuntimeServices_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		Array_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(603);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	Array_t * V_2 = {0};
	Array_t * V_3 = {0};
	int32_t G_B15_0 = 0;
	{
		Object_t * L_0 = ___lhs;
		Object_t * L_1 = ___rhs;
		if ((!(((Object_t*)(Object_t *)L_0) == ((Object_t*)(Object_t *)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		return 1;
	}

IL_0009:
	{
		Object_t * L_2 = ___lhs;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_3 = ___rhs;
		Object_t * L_4 = ___lhs;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		return L_5;
	}

IL_0017:
	{
		Object_t * L_6 = ___rhs;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		Object_t * L_7 = ___lhs;
		Object_t * L_8 = ___rhs;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_7, L_8);
		return L_9;
	}

IL_0025:
	{
		Object_t * L_10 = ___lhs;
		NullCheck(L_10);
		Type_t * L_11 = Object_GetType_m2703(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_12 = Type_GetTypeCode_m5334(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		Object_t * L_13 = ___rhs;
		NullCheck(L_13);
		Type_t * L_14 = Object_GetType_m2703(L_13, /*hidden argument*/NULL);
		int32_t L_15 = Type_GetTypeCode_m5334(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		bool L_17 = RuntimeServices_IsNumeric_m5318(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		bool L_19 = RuntimeServices_IsNumeric_m5318(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_005d;
		}
	}
	{
		Object_t * L_20 = ___lhs;
		int32_t L_21 = V_0;
		Object_t * L_22 = ___rhs;
		int32_t L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		bool L_24 = RuntimeServices_EqualityOperator_m5321(NULL /*static, unused*/, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}

IL_005d:
	{
		Object_t * L_25 = ___lhs;
		V_2 = ((Array_t *)IsInstClass(L_25, Array_t_il2cpp_TypeInfo_var));
		Array_t * L_26 = V_2;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		Object_t * L_27 = ___rhs;
		V_3 = ((Array_t *)IsInstClass(L_27, Array_t_il2cpp_TypeInfo_var));
		Array_t * L_28 = V_3;
		if (!L_28)
		{
			goto IL_007f;
		}
	}
	{
		Array_t * L_29 = V_2;
		Array_t * L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		bool L_31 = RuntimeServices_ArrayEqualityImpl_m5319(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_007f:
	{
		Object_t * L_32 = ___lhs;
		Object_t * L_33 = ___rhs;
		NullCheck(L_32);
		bool L_34 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_32, L_33);
		if (L_34)
		{
			goto IL_0094;
		}
	}
	{
		Object_t * L_35 = ___rhs;
		Object_t * L_36 = ___lhs;
		NullCheck(L_35);
		bool L_37 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_35, L_36);
		G_B15_0 = ((int32_t)(L_37));
		goto IL_0095;
	}

IL_0094:
	{
		G_B15_0 = 1;
	}

IL_0095:
	{
		return G_B15_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t271_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral572;
extern "C" bool RuntimeServices_ArrayEqualityImpl_m5319 (Object_t * __this /* static, unused */, Array_t * ___lhs, Array_t * ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		RuntimeServices_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		_stringLiteral572 = il2cpp_codegen_string_literal_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Array_t * L_0 = ___lhs;
		NullCheck(L_0);
		int32_t L_1 = Array_get_Rank_m5336(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		Array_t * L_2 = ___rhs;
		NullCheck(L_2);
		int32_t L_3 = Array_get_Rank_m5336(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t568 * L_4 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_4, _stringLiteral572, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0023:
	{
		Array_t * L_5 = ___lhs;
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5337(L_5, /*hidden argument*/NULL);
		Array_t * L_7 = ___rhs;
		NullCheck(L_7);
		int32_t L_8 = Array_get_Length_m5337(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		return 0;
	}

IL_0036:
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_003d:
	{
		Array_t * L_9 = ___lhs;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Object_t * L_11 = Array_GetValue_m5338(L_9, L_10, /*hidden argument*/NULL);
		Array_t * L_12 = ___rhs;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Object_t * L_14 = Array_GetValue_m5338(L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		bool L_15 = RuntimeServices_EqualityOperator_m1272(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0057;
		}
	}
	{
		return 0;
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		Array_t * L_18 = ___lhs;
		NullCheck(L_18);
		int32_t L_19 = Array_get_Length_m5337(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_003d;
		}
	}
	{
		return 1;
	}
}
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
extern "C" int32_t RuntimeServices_GetConvertTypeCode_m5320 (Object_t * __this /* static, unused */, int32_t ___lhsTypeCode, int32_t ___rhsTypeCode, const MethodInfo* method)
{
	{
		int32_t L_0 = ___lhsTypeCode;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)15))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___rhsTypeCode;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0013;
		}
	}

IL_0010:
	{
		return (int32_t)(((int32_t)15));
	}

IL_0013:
	{
		int32_t L_2 = ___lhsTypeCode;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)14))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___rhsTypeCode;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0026;
		}
	}

IL_0023:
	{
		return (int32_t)(((int32_t)14));
	}

IL_0026:
	{
		int32_t L_4 = ___lhsTypeCode;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_5 = ___rhsTypeCode;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0039;
		}
	}

IL_0036:
	{
		return (int32_t)(((int32_t)13));
	}

IL_0039:
	{
		int32_t L_6 = ___lhsTypeCode;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_7 = ___rhsTypeCode;
		if ((((int32_t)L_7) == ((int32_t)5)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = ___rhsTypeCode;
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_9 = ___rhsTypeCode;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)9))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_10 = ___rhsTypeCode;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0062;
		}
	}

IL_005f:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0062:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0065:
	{
		int32_t L_11 = ___rhsTypeCode;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_12 = ___lhsTypeCode;
		if ((((int32_t)L_12) == ((int32_t)5)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_13 = ___lhsTypeCode;
		if ((((int32_t)L_13) == ((int32_t)7)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_14 = ___lhsTypeCode;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)9))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_15 = ___lhsTypeCode;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_008e;
		}
	}

IL_008b:
	{
		return (int32_t)(((int32_t)11));
	}

IL_008e:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0091:
	{
		int32_t L_16 = ___lhsTypeCode;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)11))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_17 = ___rhsTypeCode;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00a4;
		}
	}

IL_00a1:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00a4:
	{
		int32_t L_18 = ___lhsTypeCode;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_19 = ___rhsTypeCode;
		if ((((int32_t)L_19) == ((int32_t)5)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_20 = ___rhsTypeCode;
		if ((((int32_t)L_20) == ((int32_t)7)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_21 = ___rhsTypeCode;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00c5;
		}
	}

IL_00c2:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00c5:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00c8:
	{
		int32_t L_22 = ___rhsTypeCode;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_23 = ___lhsTypeCode;
		if ((((int32_t)L_23) == ((int32_t)5)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_24 = ___lhsTypeCode;
		if ((((int32_t)L_24) == ((int32_t)7)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_25 = ___lhsTypeCode;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00e9;
		}
	}

IL_00e6:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00e9:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00ec:
	{
		return (int32_t)(((int32_t)9));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
extern TypeInfo* IConvertible_t1008_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t271_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t1009_il2cpp_TypeInfo_var;
extern "C" bool RuntimeServices_EqualityOperator_m5321 (Object_t * __this /* static, unused */, Object_t * ___lhs, int32_t ___lhsTypeCode, Object_t * ___rhs, int32_t ___rhsTypeCode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConvertible_t1008_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(604);
		RuntimeServices_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		Decimal_t1009_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = {0};
	{
		Object_t * L_0 = ___lhs;
		V_0 = ((Object_t *)Castclass(L_0, IConvertible_t1008_il2cpp_TypeInfo_var));
		Object_t * L_1 = ___rhs;
		V_1 = ((Object_t *)Castclass(L_1, IConvertible_t1008_il2cpp_TypeInfo_var));
		int32_t L_2 = ___lhsTypeCode;
		int32_t L_3 = ___rhsTypeCode;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		int32_t L_4 = RuntimeServices_GetConvertTypeCode_m5320(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 0)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 1)
		{
			goto IL_0083;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 2)
		{
			goto IL_0072;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 3)
		{
			goto IL_0061;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 4)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)10))) == 5)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00a5;
	}

IL_003c:
	{
		Object_t * L_6 = V_0;
		NullCheck(L_6);
		Decimal_t1009  L_7 = (Decimal_t1009 )InterfaceFuncInvoker1< Decimal_t1009 , Object_t * >::Invoke(4 /* System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_6, (Object_t *)NULL);
		Object_t * L_8 = V_1;
		NullCheck(L_8);
		Decimal_t1009  L_9 = (Decimal_t1009 )InterfaceFuncInvoker1< Decimal_t1009 , Object_t * >::Invoke(4 /* System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_8, (Object_t *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t1009_il2cpp_TypeInfo_var);
		bool L_10 = Decimal_op_Equality_m5339(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0050:
	{
		Object_t * L_11 = V_0;
		NullCheck(L_11);
		double L_12 = (double)InterfaceFuncInvoker1< double, Object_t * >::Invoke(5 /* System.Double System.IConvertible::ToDouble(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_11, (Object_t *)NULL);
		Object_t * L_13 = V_1;
		NullCheck(L_13);
		double L_14 = (double)InterfaceFuncInvoker1< double, Object_t * >::Invoke(5 /* System.Double System.IConvertible::ToDouble(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_13, (Object_t *)NULL);
		return ((((double)L_12) == ((double)L_14))? 1 : 0);
	}

IL_0061:
	{
		Object_t * L_15 = V_0;
		NullCheck(L_15);
		float L_16 = (float)InterfaceFuncInvoker1< float, Object_t * >::Invoke(10 /* System.Single System.IConvertible::ToSingle(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_15, (Object_t *)NULL);
		Object_t * L_17 = V_1;
		NullCheck(L_17);
		float L_18 = (float)InterfaceFuncInvoker1< float, Object_t * >::Invoke(10 /* System.Single System.IConvertible::ToSingle(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_17, (Object_t *)NULL);
		return ((((float)L_16) == ((float)L_18))? 1 : 0);
	}

IL_0072:
	{
		Object_t * L_19 = V_0;
		NullCheck(L_19);
		uint64_t L_20 = (uint64_t)InterfaceFuncInvoker1< uint64_t, Object_t * >::Invoke(15 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_19, (Object_t *)NULL);
		Object_t * L_21 = V_1;
		NullCheck(L_21);
		uint64_t L_22 = (uint64_t)InterfaceFuncInvoker1< uint64_t, Object_t * >::Invoke(15 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_21, (Object_t *)NULL);
		return ((((int64_t)L_20) == ((int64_t)L_22))? 1 : 0);
	}

IL_0083:
	{
		Object_t * L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(8 /* System.Int64 System.IConvertible::ToInt64(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_23, (Object_t *)NULL);
		Object_t * L_25 = V_1;
		NullCheck(L_25);
		int64_t L_26 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(8 /* System.Int64 System.IConvertible::ToInt64(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_25, (Object_t *)NULL);
		return ((((int64_t)L_24) == ((int64_t)L_26))? 1 : 0);
	}

IL_0094:
	{
		Object_t * L_27 = V_0;
		NullCheck(L_27);
		uint32_t L_28 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(14 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_27, (Object_t *)NULL);
		Object_t * L_29 = V_1;
		NullCheck(L_29);
		uint32_t L_30 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(14 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_29, (Object_t *)NULL);
		return ((((int32_t)L_28) == ((int32_t)L_30))? 1 : 0);
	}

IL_00a5:
	{
		Object_t * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_31, (Object_t *)NULL);
		Object_t * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t1008_il2cpp_TypeInfo_var, L_33, (Object_t *)NULL);
		return ((((int32_t)L_32) == ((int32_t)L_34))? 1 : 0);
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
extern "C" bool RuntimeServices_IsPromotableNumeric_m5322 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___code;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 0)
		{
			goto IL_0057;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 1)
		{
			goto IL_005b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 2)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 3)
		{
			goto IL_0043;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 4)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 5)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 6)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 7)
		{
			goto IL_004f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 9)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 10)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 11)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 12)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_005d;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 1;
	}

IL_0055:
	{
		return 1;
	}

IL_0057:
	{
		return 1;
	}

IL_0059:
	{
		return 1;
	}

IL_005b:
	{
		return 1;
	}

IL_005d:
	{
		return 0;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
extern TypeInfo* RuntimeServices_t271_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * RuntimeServices_FindImplicitConversionOperator_m5323 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RuntimeServices_t271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	MethodInfo_t * G_B3_0 = {0};
	MethodInfo_t * G_B1_0 = {0};
	MethodInfo_t * G_B2_0 = {0};
	{
		Type_t * L_0 = ___from;
		NullCheck(L_0);
		MethodInfoU5BU5D_t1010* L_1 = (MethodInfoU5BU5D_t1010*)VirtFuncInvoker1< MethodInfoU5BU5D_t1010*, int32_t >::Invoke(51 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_0, ((int32_t)88));
		Type_t * L_2 = ___from;
		Type_t * L_3 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		MethodInfo_t * L_4 = RuntimeServices_FindImplicitConversionMethod_m5325(NULL /*static, unused*/, (Object_t*)(Object_t*)L_1, L_2, L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		Type_t * L_6 = ___to;
		NullCheck(L_6);
		MethodInfoU5BU5D_t1010* L_7 = (MethodInfoU5BU5D_t1010*)VirtFuncInvoker1< MethodInfoU5BU5D_t1010*, int32_t >::Invoke(51 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_6, ((int32_t)88));
		Type_t * L_8 = ___from;
		Type_t * L_9 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		MethodInfo_t * L_10 = RuntimeServices_FindImplicitConversionMethod_m5325(NULL /*static, unused*/, (Object_t*)(Object_t*)L_7, L_8, L_9, /*hidden argument*/NULL);
		MethodInfo_t * L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t271_il2cpp_TypeInfo_var);
		Object_t* L_12 = RuntimeServices_GetExtensionMethods_m5324(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_13 = ___from;
		Type_t * L_14 = ___to;
		MethodInfo_t * L_15 = RuntimeServices_FindImplicitConversionMethod_m5325(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		G_B3_0 = L_15;
	}

IL_0038:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMetMethodDeclarations.h"
extern TypeInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t999_il2cpp_TypeInfo_var;
extern "C" Object_t* RuntimeServices_GetExtensionMethods_m5324 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetExtensionMethodsU3Ec__IteratorC_t999 * V_0 = {0};
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t999 * L_0 = (U3CGetExtensionMethodsU3Ec__IteratorC_t999 *)il2cpp_codegen_object_new (U3CGetExtensionMethodsU3Ec__IteratorC_t999_il2cpp_TypeInfo_var);
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5298(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetExtensionMethodsU3Ec__IteratorC_t999 * L_1 = V_0;
		U3CGetExtensionMethodsU3Ec__IteratorC_t999 * L_2 = L_1;
		NullCheck(L_2);
		L_2->___U24PC_2 = ((int32_t)-2);
		return L_2;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
extern TypeInfo* IEnumerable_1_t1005_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t1004_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t222_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t237_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral573;
extern "C" MethodInfo_t * RuntimeServices_FindImplicitConversionMethod_m5325 (Object_t * __this /* static, unused */, Object_t* ___candidates, Type_t * ___from, Type_t * ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t1005_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(606);
		IEnumerator_1_t1004_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(607);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IEnumerator_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		IDisposable_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		_stringLiteral573 = il2cpp_codegen_string_literal_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	Object_t* V_1 = {0};
	ParameterInfoU5BU5D_t974* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	Exception_t236 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t236 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___candidates;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator() */, IEnumerable_1_t1005_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck(L_2);
			MethodInfo_t * L_3 = (MethodInfo_t *)InterfaceFuncInvoker0< MethodInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current() */, IEnumerator_1_t1004_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			MethodInfo_t * L_4 = V_0;
			NullCheck(L_4);
			String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_6 = String_op_Inequality_m2969(NULL /*static, unused*/, L_5, _stringLiteral573, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_002d;
			}
		}

IL_0028:
		{
			goto IL_0072;
		}

IL_002d:
		{
			MethodInfo_t * L_7 = V_0;
			NullCheck(L_7);
			Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(31 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_7);
			Type_t * L_9 = ___to;
			if ((((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9)))
			{
				goto IL_003e;
			}
		}

IL_0039:
		{
			goto IL_0072;
		}

IL_003e:
		{
			MethodInfo_t * L_10 = V_0;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t974* L_11 = (ParameterInfoU5BU5D_t974*)VirtFuncInvoker0< ParameterInfoU5BU5D_t974* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_2 = L_11;
			ParameterInfoU5BU5D_t974* L_12 = V_2;
			NullCheck(L_12);
			if ((((int32_t)(((int32_t)(((Array_t *)L_12)->max_length)))) == ((int32_t)1)))
			{
				goto IL_0053;
			}
		}

IL_004e:
		{
			goto IL_0072;
		}

IL_0053:
		{
			ParameterInfoU5BU5D_t974* L_13 = V_2;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
			int32_t L_14 = 0;
			NullCheck((*(ParameterInfo_t975 **)(ParameterInfo_t975 **)SZArrayLdElema(L_13, L_14, sizeof(ParameterInfo_t975 *))));
			Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t975 **)(ParameterInfo_t975 **)SZArrayLdElema(L_13, L_14, sizeof(ParameterInfo_t975 *))));
			Type_t * L_16 = ___from;
			NullCheck(L_15);
			bool L_17 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_16);
			if (L_17)
			{
				goto IL_006b;
			}
		}

IL_0066:
		{
			goto IL_0072;
		}

IL_006b:
		{
			MethodInfo_t * L_18 = V_0;
			V_3 = L_18;
			IL2CPP_LEAVE(0x8F, FINALLY_0082);
		}

IL_0072:
		{
			Object_t* L_19 = V_1;
			NullCheck(L_19);
			bool L_20 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t222_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_000c;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t236 *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		{
			Object_t* L_21 = V_1;
			if (L_21)
			{
				goto IL_0086;
			}
		}

IL_0085:
		{
			IL2CPP_END_FINALLY(130)
		}

IL_0086:
		{
			Object_t* L_22 = V_1;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t237_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(130)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t236 *)
	}

IL_008d:
	{
		return (MethodInfo_t *)NULL;
	}

IL_008f:
	{
		MethodInfo_t * L_23 = V_3;
		return L_23;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Dispatcher__ctor_m5326 (Dispatcher_t990 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
#include "mscorlib_ArrayTypes.h"
extern "C" Object_t * Dispatcher_Invoke_m5327 (Dispatcher_t990 * __this, Object_t * ___target, ObjectU5BU5D_t234* ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Dispatcher_Invoke_m5327((Dispatcher_t990 *)__this->___prev_9,___target, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___target, ObjectU5BU5D_t234* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___target, ObjectU5BU5D_t234* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t234* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_Dispatcher_t990(Il2CppObject* delegate, Object_t * ___target, ObjectU5BU5D_t234* ___args)
{
	// Marshaling of parameter '___target' to native representation
	Object_t * ____target_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Dispatcher_BeginInvoke_m5328 (Dispatcher_t990 * __this, Object_t * ___target, ObjectU5BU5D_t234* ___args, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___target;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Dispatcher_EndInvoke_m5329 (Dispatcher_t990 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
