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
#include "codegen/il2cpp-codegen.h"

// System.Array
#include "mscorlib_System_Array.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Reflection.Emit.ILGenerator/LabelFixup
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// Declaration System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32,T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Reflection.Emit.ILGenerator/LabelFixup
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"
// Declaration System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisLabelFixup_t1600_m23485_gshared (Array_t * __this, int32_t ___index, LabelFixup_t1600  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisLabelFixup_t1600_m23485(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, LabelFixup_t1600 , const MethodInfo*))Array_InternalArray__set_Item_TisLabelFixup_t1600_m23485_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral588;
extern "C" void Array_InternalArray__set_Item_TisLabelFixup_t1600_m23485_gshared (Array_t * __this, int32_t ___index, LabelFixup_t1600  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t234* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t1209 * L_2 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6283(L_2, (String_t*)_stringLiteral588, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		V_0 = (ObjectU5BU5D_t234*)((ObjectU5BU5D_t234*)IsInst(__this, ObjectU5BU5D_t234_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t234* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ObjectU5BU5D_t234* L_4 = V_0;
		int32_t L_5 = ___index;
		LabelFixup_t1600  L_6 = ___item;
		LabelFixup_t1600  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))) = (Object_t *)L_8;
		return;
	}

IL_002e:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (LabelFixup_t1600 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32,T&)
// System.Array
#include "mscorlib_System_Array.h"
// System.Reflection.Emit.ILGenerator/LabelFixup
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"
// Declaration System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_104.h"
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_104MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ILGenerator/LabelFixup>()
struct IEnumerator_1_t3135;
// System.Array
#include "mscorlib_System_Array.h"
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ILGenerator/LabelFixup>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ILGenerator/LabelFixup>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisLabelFixup_t1600_m23487_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisLabelFixup_t1600_m23487(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisLabelFixup_t1600_m23487_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ILGenerator/LabelFixup>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisLabelFixup_t1600_m23487_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t2866  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t2866 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t2866  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_gen.h"
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_genMethodDeclarations.h"
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
struct Object_t;
struct Getter_2_t2873;
// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// Declaration System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
extern "C" Object_t * MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m23488_gshared (Object_t * __this /* static, unused */, Getter_2_t2873 * ___getter, Object_t * ___obj, const MethodInfo* method);
#define MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m23488(__this /* static, unused */, ___getter, ___obj, method) (( Object_t * (*) (Object_t * /* static, unused */, Getter_2_t2873 *, Object_t *, const MethodInfo*))MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m23488_gshared)(__this /* static, unused */, ___getter, ___obj, method)
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_gen.h"
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m23488_gshared (Object_t * __this /* static, unused */, Getter_2_t2873 * ___getter, Object_t * ___obj, const MethodInfo* method)
{
	{
		Getter_2_t2873 * L_0 = ___getter;
		Object_t * L_1 = ___obj;
		NullCheck((Getter_2_t2873 *)L_0);
		Object_t * L_2 = (( Object_t * (*) (Getter_2_t2873 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Getter_2_t2873 *)L_0, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_gen.h"
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_genMethodDeclarations.h"
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
struct Object_t;
struct StaticGetter_1_t2874;
// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// Declaration System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
extern "C" Object_t * MonoProperty_StaticGetterAdapterFrame_TisObject_t_m23489_gshared (Object_t * __this /* static, unused */, StaticGetter_1_t2874 * ___getter, Object_t * ___obj, const MethodInfo* method);
#define MonoProperty_StaticGetterAdapterFrame_TisObject_t_m23489(__this /* static, unused */, ___getter, ___obj, method) (( Object_t * (*) (Object_t * /* static, unused */, StaticGetter_1_t2874 *, Object_t *, const MethodInfo*))MonoProperty_StaticGetterAdapterFrame_TisObject_t_m23489_gshared)(__this /* static, unused */, ___getter, ___obj, method)
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_gen.h"
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * MonoProperty_StaticGetterAdapterFrame_TisObject_t_m23489_gshared (Object_t * __this /* static, unused */, StaticGetter_1_t2874 * ___getter, Object_t * ___obj, const MethodInfo* method)
{
	{
		StaticGetter_1_t2874 * L_0 = ___getter;
		NullCheck((StaticGetter_1_t2874 *)L_0);
		Object_t * L_1 = (( Object_t * (*) (StaticGetter_1_t2874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)((StaticGetter_1_t2874 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.DateTime
#include "mscorlib_System_DateTime.h"
// Declaration System.Void System.Array::GetGenericValueImpl<System.DateTime>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Declaration T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern "C" DateTime_t833  Array_InternalArray__get_Item_TisDateTime_t833_m23490_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDateTime_t833_m23490(__this, ___index, method) (( DateTime_t833  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDateTime_t833_m23490_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral588;
extern "C" DateTime_t833  Array_InternalArray__get_Item_TisDateTime_t833_m23490_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t833  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t1209 * L_2 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6283(L_2, (String_t*)_stringLiteral588, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (DateTime_t833 *)(&V_0));
		DateTime_t833  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.DateTime>(System.Int32,T&)
// System.Array
#include "mscorlib_System_Array.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Declaration System.Void System.Array::GetGenericValueImpl<System.DateTime>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisDateTime_t833_m23492_gshared (Array_t * __this, DateTime_t833  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisDateTime_t833_m23492(__this, ___item, method) (( void (*) (Array_t *, DateTime_t833 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisDateTime_t833_m23492_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" void Array_InternalArray__ICollection_Add_TisDateTime_t833_m23492_gshared (Array_t * __this, DateTime_t833  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.RankException
#include "mscorlib_System_RankException.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisDateTime_t833_m23493_gshared (Array_t * __this, DateTime_t833  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisDateTime_t833_m23493(__this, ___item, method) (( bool (*) (Array_t *, DateTime_t833 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisDateTime_t833_m23493_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1393;
extern "C" bool Array_InternalArray__ICollection_Contains_TisDateTime_t833_m23493_gshared (Array_t * __this, DateTime_t833  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t833  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_2 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001c:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_006b;
	}

IL_002a:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (DateTime_t833 *)(&V_2));
		DateTime_t833  L_5 = ___item;
		goto IL_004d;
	}
	{
		DateTime_t833  L_6 = V_2;
		goto IL_004b;
	}
	{
		return 1;
	}

IL_004b:
	{
		return 0;
	}

IL_004d:
	{
		DateTime_t833  L_7 = V_2;
		DateTime_t833  L_8 = L_7;
		Object_t * L_9 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_8);
		NullCheck((DateTime_t833 *)(&___item));
		bool L_10 = DateTime_Equals_m11845((DateTime_t833 *)(&___item), (Object_t *)L_9, NULL);
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		return 1;
	}

IL_0067:
	{
		int32_t L_11 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_006b:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
struct DateTimeU5BU5D_t2081;
// System.Array
#include "mscorlib_System_Array.h"
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDateTime_t833_m23494_gshared (Array_t * __this, DateTimeU5BU5D_t2081* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisDateTime_t833_m23494(__this, ___array, ___index, method) (( void (*) (Array_t *, DateTimeU5BU5D_t2081*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisDateTime_t833_m23494_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t976_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral586;
extern Il2CppCodeGenString* _stringLiteral1393;
extern Il2CppCodeGenString* _stringLiteral1430;
extern Il2CppCodeGenString* _stringLiteral588;
extern Il2CppCodeGenString* _stringLiteral1416;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDateTime_t833_m23494_gshared (Array_t * __this, DateTimeU5BU5D_t2081* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t976_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		_stringLiteral586 = il2cpp_codegen_string_literal_from_index(586);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		_stringLiteral1430 = il2cpp_codegen_string_literal_from_index(1430);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		_stringLiteral1416 = il2cpp_codegen_string_literal_from_index(1416);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTimeU5BU5D_t2081* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t976 * L_1 = (ArgumentNullException_t976 *)il2cpp_codegen_object_new (ArgumentNullException_t976_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5261(L_1, (String_t*)_stringLiteral586, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_4 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_002d:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m8069((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		DateTimeU5BU5D_t2081* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m8071((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		DateTimeU5BU5D_t2081* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m8069((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t568 * L_11 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_11, (String_t*)_stringLiteral1430, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0055:
	{
		DateTimeU5BU5D_t2081* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m5336((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_15 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_15);
	}

IL_0071:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1416, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1209 * L_18 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6279(L_18, (String_t*)_stringLiteral588, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}

IL_008d:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		DateTimeU5BU5D_t2081* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m8069((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m8110(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisDateTime_t833_m23495_gshared (Array_t * __this, DateTime_t833  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisDateTime_t833_m23495(__this, ___item, method) (( bool (*) (Array_t *, DateTime_t833 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisDateTime_t833_m23495_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" bool Array_InternalArray__ICollection_Remove_TisDateTime_t833_m23495_gshared (Array_t * __this, DateTime_t833  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisDateTime_t833_m23496_gshared (Array_t * __this, DateTime_t833  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisDateTime_t833_m23496(__this, ___item, method) (( int32_t (*) (Array_t *, DateTime_t833 , const MethodInfo*))Array_InternalArray__IndexOf_TisDateTime_t833_m23496_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1393;
extern "C" int32_t Array_InternalArray__IndexOf_TisDateTime_t833_m23496_gshared (Array_t * __this, DateTime_t833  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t833  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_2 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001c:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0083;
	}

IL_002a:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (DateTime_t833 *)(&V_2));
		DateTime_t833  L_5 = ___item;
		goto IL_005d;
	}
	{
		DateTime_t833  L_6 = V_2;
		goto IL_0053;
	}
	{
		int32_t L_7 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_8 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_7+(int32_t)L_8));
	}

IL_0053:
	{
		NullCheck((Array_t *)__this);
		int32_t L_9 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_9-(int32_t)1));
	}

IL_005d:
	{
		DateTime_t833  L_10 = ___item;
		DateTime_t833  L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_11);
		NullCheck((DateTime_t833 *)(&V_2));
		bool L_13 = DateTime_Equals_m11845((DateTime_t833 *)(&V_2), (Object_t *)L_12, NULL);
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_14 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_15 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_14+(int32_t)L_15));
	}

IL_007f:
	{
		int32_t L_16 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002a;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_19-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
// System.Array
#include "mscorlib_System_Array.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Declaration System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisDateTime_t833_m23497_gshared (Array_t * __this, int32_t ___index, DateTime_t833  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisDateTime_t833_m23497(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, DateTime_t833 , const MethodInfo*))Array_InternalArray__Insert_TisDateTime_t833_m23497_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" void Array_InternalArray__Insert_TisDateTime_t833_m23497_gshared (Array_t * __this, int32_t ___index, DateTime_t833  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// Declaration System.Void System.Array::SetGenericValueImpl<System.DateTime>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
// System.Array
#include "mscorlib_System_Array.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Declaration System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisDateTime_t833_m23498_gshared (Array_t * __this, int32_t ___index, DateTime_t833  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisDateTime_t833_m23498(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, DateTime_t833 , const MethodInfo*))Array_InternalArray__set_Item_TisDateTime_t833_m23498_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral588;
extern "C" void Array_InternalArray__set_Item_TisDateTime_t833_m23498_gshared (Array_t * __this, int32_t ___index, DateTime_t833  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t234* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t1209 * L_2 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6283(L_2, (String_t*)_stringLiteral588, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		V_0 = (ObjectU5BU5D_t234*)((ObjectU5BU5D_t234*)IsInst(__this, ObjectU5BU5D_t234_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t234* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ObjectU5BU5D_t234* L_4 = V_0;
		int32_t L_5 = ___index;
		DateTime_t833  L_6 = ___item;
		DateTime_t833  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))) = (Object_t *)L_8;
		return;
	}

IL_002e:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (DateTime_t833 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.DateTime>(System.Int32,T&)
// System.Array
#include "mscorlib_System_Array.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Declaration System.Void System.Array::SetGenericValueImpl<System.DateTime>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_115.h"
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_115MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
struct IEnumerator_1_t3136;
// System.Array
#include "mscorlib_System_Array.h"
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t833_m23500_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t833_m23500(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t833_m23500_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t833_m23500_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t2879  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t2879 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t2879  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Decimal
#include "mscorlib_System_Decimal.h"
// Declaration System.Void System.Array::GetGenericValueImpl<System.Decimal>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// Declaration T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern "C" Decimal_t1009  Array_InternalArray__get_Item_TisDecimal_t1009_m23501_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDecimal_t1009_m23501(__this, ___index, method) (( Decimal_t1009  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDecimal_t1009_m23501_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral588;
extern "C" Decimal_t1009  Array_InternalArray__get_Item_TisDecimal_t1009_m23501_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	Decimal_t1009  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t1209 * L_2 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6283(L_2, (String_t*)_stringLiteral588, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (Decimal_t1009 *)(&V_0));
		Decimal_t1009  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Decimal>(System.Int32,T&)
// System.Array
#include "mscorlib_System_Array.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// Declaration System.Void System.Array::GetGenericValueImpl<System.Decimal>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisDecimal_t1009_m23503_gshared (Array_t * __this, Decimal_t1009  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisDecimal_t1009_m23503(__this, ___item, method) (( void (*) (Array_t *, Decimal_t1009 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisDecimal_t1009_m23503_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" void Array_InternalArray__ICollection_Add_TisDecimal_t1009_m23503_gshared (Array_t * __this, Decimal_t1009  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisDecimal_t1009_m23504_gshared (Array_t * __this, Decimal_t1009  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisDecimal_t1009_m23504(__this, ___item, method) (( bool (*) (Array_t *, Decimal_t1009 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisDecimal_t1009_m23504_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1393;
extern "C" bool Array_InternalArray__ICollection_Contains_TisDecimal_t1009_m23504_gshared (Array_t * __this, Decimal_t1009  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_t1009  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_2 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001c:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_006b;
	}

IL_002a:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Decimal_t1009 *)(&V_2));
		Decimal_t1009  L_5 = ___item;
		goto IL_004d;
	}
	{
		Decimal_t1009  L_6 = V_2;
		goto IL_004b;
	}
	{
		return 1;
	}

IL_004b:
	{
		return 0;
	}

IL_004d:
	{
		Decimal_t1009  L_7 = V_2;
		Decimal_t1009  L_8 = L_7;
		Object_t * L_9 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_8);
		NullCheck((Decimal_t1009 *)(&___item));
		bool L_10 = Decimal_Equals_m7856((Decimal_t1009 *)(&___item), (Object_t *)L_9, NULL);
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		return 1;
	}

IL_0067:
	{
		int32_t L_11 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_006b:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
struct DecimalU5BU5D_t2082;
// System.Array
#include "mscorlib_System_Array.h"
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDecimal_t1009_m23505_gshared (Array_t * __this, DecimalU5BU5D_t2082* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisDecimal_t1009_m23505(__this, ___array, ___index, method) (( void (*) (Array_t *, DecimalU5BU5D_t2082*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisDecimal_t1009_m23505_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t976_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral586;
extern Il2CppCodeGenString* _stringLiteral1393;
extern Il2CppCodeGenString* _stringLiteral1430;
extern Il2CppCodeGenString* _stringLiteral588;
extern Il2CppCodeGenString* _stringLiteral1416;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDecimal_t1009_m23505_gshared (Array_t * __this, DecimalU5BU5D_t2082* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t976_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		_stringLiteral586 = il2cpp_codegen_string_literal_from_index(586);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		_stringLiteral1430 = il2cpp_codegen_string_literal_from_index(1430);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		_stringLiteral1416 = il2cpp_codegen_string_literal_from_index(1416);
		s_Il2CppMethodIntialized = true;
	}
	{
		DecimalU5BU5D_t2082* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t976 * L_1 = (ArgumentNullException_t976 *)il2cpp_codegen_object_new (ArgumentNullException_t976_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5261(L_1, (String_t*)_stringLiteral586, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_4 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_002d:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m8069((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		DecimalU5BU5D_t2082* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m8071((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		DecimalU5BU5D_t2082* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m8069((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t568 * L_11 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_11, (String_t*)_stringLiteral1430, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0055:
	{
		DecimalU5BU5D_t2082* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m5336((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_15 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_15);
	}

IL_0071:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1416, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1209 * L_18 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6279(L_18, (String_t*)_stringLiteral588, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}

IL_008d:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		DecimalU5BU5D_t2082* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m8069((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m8110(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisDecimal_t1009_m23506_gshared (Array_t * __this, Decimal_t1009  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisDecimal_t1009_m23506(__this, ___item, method) (( bool (*) (Array_t *, Decimal_t1009 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisDecimal_t1009_m23506_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" bool Array_InternalArray__ICollection_Remove_TisDecimal_t1009_m23506_gshared (Array_t * __this, Decimal_t1009  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisDecimal_t1009_m23507_gshared (Array_t * __this, Decimal_t1009  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisDecimal_t1009_m23507(__this, ___item, method) (( int32_t (*) (Array_t *, Decimal_t1009 , const MethodInfo*))Array_InternalArray__IndexOf_TisDecimal_t1009_m23507_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1393;
extern "C" int32_t Array_InternalArray__IndexOf_TisDecimal_t1009_m23507_gshared (Array_t * __this, Decimal_t1009  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_t1009  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_2 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001c:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0083;
	}

IL_002a:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Decimal_t1009 *)(&V_2));
		Decimal_t1009  L_5 = ___item;
		goto IL_005d;
	}
	{
		Decimal_t1009  L_6 = V_2;
		goto IL_0053;
	}
	{
		int32_t L_7 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_8 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_7+(int32_t)L_8));
	}

IL_0053:
	{
		NullCheck((Array_t *)__this);
		int32_t L_9 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_9-(int32_t)1));
	}

IL_005d:
	{
		Decimal_t1009  L_10 = ___item;
		Decimal_t1009  L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_11);
		NullCheck((Decimal_t1009 *)(&V_2));
		bool L_13 = Decimal_Equals_m7856((Decimal_t1009 *)(&V_2), (Object_t *)L_12, NULL);
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_14 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_15 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_14+(int32_t)L_15));
	}

IL_007f:
	{
		int32_t L_16 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002a;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_19-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// Declaration System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisDecimal_t1009_m23508_gshared (Array_t * __this, int32_t ___index, Decimal_t1009  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisDecimal_t1009_m23508(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Decimal_t1009 , const MethodInfo*))Array_InternalArray__Insert_TisDecimal_t1009_m23508_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" void Array_InternalArray__Insert_TisDecimal_t1009_m23508_gshared (Array_t * __this, int32_t ___index, Decimal_t1009  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// Declaration System.Void System.Array::SetGenericValueImpl<System.Decimal>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// Declaration System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisDecimal_t1009_m23509_gshared (Array_t * __this, int32_t ___index, Decimal_t1009  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisDecimal_t1009_m23509(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Decimal_t1009 , const MethodInfo*))Array_InternalArray__set_Item_TisDecimal_t1009_m23509_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral588;
extern "C" void Array_InternalArray__set_Item_TisDecimal_t1009_m23509_gshared (Array_t * __this, int32_t ___index, Decimal_t1009  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t234* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t1209 * L_2 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6283(L_2, (String_t*)_stringLiteral588, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		V_0 = (ObjectU5BU5D_t234*)((ObjectU5BU5D_t234*)IsInst(__this, ObjectU5BU5D_t234_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t234* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ObjectU5BU5D_t234* L_4 = V_0;
		int32_t L_5 = ___index;
		Decimal_t1009  L_6 = ___item;
		Decimal_t1009  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))) = (Object_t *)L_8;
		return;
	}

IL_002e:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (Decimal_t1009 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Decimal>(System.Int32,T&)
// System.Array
#include "mscorlib_System_Array.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// Declaration System.Void System.Array::SetGenericValueImpl<System.Decimal>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_116.h"
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_116MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
struct IEnumerator_1_t3137;
// System.Array
#include "mscorlib_System_Array.h"
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t1009_m23511_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t1009_m23511(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t1009_m23511_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t1009_m23511_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t2880  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t2880 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t2880  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Declaration System.Void System.Array::GetGenericValueImpl<System.TimeSpan>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Declaration T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern "C" TimeSpan_t1097  Array_InternalArray__get_Item_TisTimeSpan_t1097_m23512_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTimeSpan_t1097_m23512(__this, ___index, method) (( TimeSpan_t1097  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTimeSpan_t1097_m23512_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral588;
extern "C" TimeSpan_t1097  Array_InternalArray__get_Item_TisTimeSpan_t1097_m23512_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t1097  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t1209 * L_2 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6283(L_2, (String_t*)_stringLiteral588, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (TimeSpan_t1097 *)(&V_0));
		TimeSpan_t1097  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
// System.Array
#include "mscorlib_System_Array.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Declaration System.Void System.Array::GetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisTimeSpan_t1097_m23514_gshared (Array_t * __this, TimeSpan_t1097  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisTimeSpan_t1097_m23514(__this, ___item, method) (( void (*) (Array_t *, TimeSpan_t1097 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisTimeSpan_t1097_m23514_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" void Array_InternalArray__ICollection_Add_TisTimeSpan_t1097_m23514_gshared (Array_t * __this, TimeSpan_t1097  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisTimeSpan_t1097_m23515_gshared (Array_t * __this, TimeSpan_t1097  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisTimeSpan_t1097_m23515(__this, ___item, method) (( bool (*) (Array_t *, TimeSpan_t1097 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisTimeSpan_t1097_m23515_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1393;
extern "C" bool Array_InternalArray__ICollection_Contains_TisTimeSpan_t1097_m23515_gshared (Array_t * __this, TimeSpan_t1097  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t1097  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_2 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001c:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_006b;
	}

IL_002a:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TimeSpan_t1097 *)(&V_2));
		TimeSpan_t1097  L_5 = ___item;
		goto IL_004d;
	}
	{
		TimeSpan_t1097  L_6 = V_2;
		goto IL_004b;
	}
	{
		return 1;
	}

IL_004b:
	{
		return 0;
	}

IL_004d:
	{
		TimeSpan_t1097  L_7 = V_2;
		TimeSpan_t1097  L_8 = L_7;
		Object_t * L_9 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_8);
		NullCheck((TimeSpan_t1097 *)(&___item));
		bool L_10 = TimeSpan_Equals_m12247((TimeSpan_t1097 *)(&___item), (Object_t *)L_9, NULL);
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		return 1;
	}

IL_0067:
	{
		int32_t L_11 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_006b:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
struct TimeSpanU5BU5D_t2083;
// System.Array
#include "mscorlib_System_Array.h"
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t1097_m23516_gshared (Array_t * __this, TimeSpanU5BU5D_t2083* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t1097_m23516(__this, ___array, ___index, method) (( void (*) (Array_t *, TimeSpanU5BU5D_t2083*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t1097_m23516_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t976_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral586;
extern Il2CppCodeGenString* _stringLiteral1393;
extern Il2CppCodeGenString* _stringLiteral1430;
extern Il2CppCodeGenString* _stringLiteral588;
extern Il2CppCodeGenString* _stringLiteral1416;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t1097_m23516_gshared (Array_t * __this, TimeSpanU5BU5D_t2083* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t976_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		_stringLiteral586 = il2cpp_codegen_string_literal_from_index(586);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		_stringLiteral1430 = il2cpp_codegen_string_literal_from_index(1430);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		_stringLiteral1416 = il2cpp_codegen_string_literal_from_index(1416);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpanU5BU5D_t2083* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t976 * L_1 = (ArgumentNullException_t976 *)il2cpp_codegen_object_new (ArgumentNullException_t976_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5261(L_1, (String_t*)_stringLiteral586, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_4 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_002d:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m8069((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TimeSpanU5BU5D_t2083* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m8071((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		TimeSpanU5BU5D_t2083* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m8069((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t568 * L_11 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_11, (String_t*)_stringLiteral1430, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0055:
	{
		TimeSpanU5BU5D_t2083* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m5336((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_15 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_15);
	}

IL_0071:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1416, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1209 * L_18 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6279(L_18, (String_t*)_stringLiteral588, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}

IL_008d:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TimeSpanU5BU5D_t2083* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m8069((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m8110(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisTimeSpan_t1097_m23517_gshared (Array_t * __this, TimeSpan_t1097  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisTimeSpan_t1097_m23517(__this, ___item, method) (( bool (*) (Array_t *, TimeSpan_t1097 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisTimeSpan_t1097_m23517_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" bool Array_InternalArray__ICollection_Remove_TisTimeSpan_t1097_m23517_gshared (Array_t * __this, TimeSpan_t1097  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisTimeSpan_t1097_m23518_gshared (Array_t * __this, TimeSpan_t1097  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisTimeSpan_t1097_m23518(__this, ___item, method) (( int32_t (*) (Array_t *, TimeSpan_t1097 , const MethodInfo*))Array_InternalArray__IndexOf_TisTimeSpan_t1097_m23518_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1393;
extern "C" int32_t Array_InternalArray__IndexOf_TisTimeSpan_t1097_m23518_gshared (Array_t * __this, TimeSpan_t1097  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t1097  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_2 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001c:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0083;
	}

IL_002a:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TimeSpan_t1097 *)(&V_2));
		TimeSpan_t1097  L_5 = ___item;
		goto IL_005d;
	}
	{
		TimeSpan_t1097  L_6 = V_2;
		goto IL_0053;
	}
	{
		int32_t L_7 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_8 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_7+(int32_t)L_8));
	}

IL_0053:
	{
		NullCheck((Array_t *)__this);
		int32_t L_9 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_9-(int32_t)1));
	}

IL_005d:
	{
		TimeSpan_t1097  L_10 = ___item;
		TimeSpan_t1097  L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_11);
		NullCheck((TimeSpan_t1097 *)(&V_2));
		bool L_13 = TimeSpan_Equals_m12247((TimeSpan_t1097 *)(&V_2), (Object_t *)L_12, NULL);
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_14 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_15 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_14+(int32_t)L_15));
	}

IL_007f:
	{
		int32_t L_16 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002a;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_19-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
// System.Array
#include "mscorlib_System_Array.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Declaration System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisTimeSpan_t1097_m23519_gshared (Array_t * __this, int32_t ___index, TimeSpan_t1097  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisTimeSpan_t1097_m23519(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TimeSpan_t1097 , const MethodInfo*))Array_InternalArray__Insert_TisTimeSpan_t1097_m23519_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" void Array_InternalArray__Insert_TisTimeSpan_t1097_m23519_gshared (Array_t * __this, int32_t ___index, TimeSpan_t1097  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// Declaration System.Void System.Array::SetGenericValueImpl<System.TimeSpan>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
// System.Array
#include "mscorlib_System_Array.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Declaration System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisTimeSpan_t1097_m23520_gshared (Array_t * __this, int32_t ___index, TimeSpan_t1097  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisTimeSpan_t1097_m23520(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TimeSpan_t1097 , const MethodInfo*))Array_InternalArray__set_Item_TisTimeSpan_t1097_m23520_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral588;
extern "C" void Array_InternalArray__set_Item_TisTimeSpan_t1097_m23520_gshared (Array_t * __this, int32_t ___index, TimeSpan_t1097  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t234* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t1209 * L_2 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6283(L_2, (String_t*)_stringLiteral588, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		V_0 = (ObjectU5BU5D_t234*)((ObjectU5BU5D_t234*)IsInst(__this, ObjectU5BU5D_t234_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t234* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ObjectU5BU5D_t234* L_4 = V_0;
		int32_t L_5 = ___index;
		TimeSpan_t1097  L_6 = ___item;
		TimeSpan_t1097  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))) = (Object_t *)L_8;
		return;
	}

IL_002e:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (TimeSpan_t1097 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
// System.Array
#include "mscorlib_System_Array.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Declaration System.Void System.Array::SetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_117.h"
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_117MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
struct IEnumerator_1_t3138;
// System.Array
#include "mscorlib_System_Array.h"
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t1097_m23522_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t1097_m23522(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t1097_m23522_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t1097_m23522_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t2881  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t2881 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t2881  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisTypeTag_t1797_m23523_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTypeTag_t1797_m23523(__this, ___index, method) (( uint8_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTypeTag_t1797_m23523_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral588;
extern "C" uint8_t Array_InternalArray__get_Item_TisTypeTag_t1797_m23523_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t1209 * L_2 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6283(L_2, (String_t*)_stringLiteral588, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (uint8_t*)(&V_0));
		uint8_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T&)
// System.Array
#include "mscorlib_System_Array.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisTypeTag_t1797_m23525_gshared (Array_t * __this, uint8_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisTypeTag_t1797_m23525(__this, ___item, method) (( void (*) (Array_t *, uint8_t, const MethodInfo*))Array_InternalArray__ICollection_Add_TisTypeTag_t1797_m23525_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" void Array_InternalArray__ICollection_Add_TisTypeTag_t1797_m23525_gshared (Array_t * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisTypeTag_t1797_m23526_gshared (Array_t * __this, uint8_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisTypeTag_t1797_m23526(__this, ___item, method) (( bool (*) (Array_t *, uint8_t, const MethodInfo*))Array_InternalArray__ICollection_Contains_TisTypeTag_t1797_m23526_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1393;
extern "C" bool Array_InternalArray__ICollection_Contains_TisTypeTag_t1797_m23526_gshared (Array_t * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_2 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001c:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_006b;
	}

IL_002a:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (uint8_t*)(&V_2));
		uint8_t L_5 = ___item;
		goto IL_004d;
	}
	{
		uint8_t L_6 = V_2;
		goto IL_004b;
	}
	{
		return 1;
	}

IL_004b:
	{
		return 0;
	}

IL_004d:
	{
		uint8_t L_7 = V_2;
		uint8_t L_8 = L_7;
		Object_t * L_9 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_8);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_9);
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		return 1;
	}

IL_0067:
	{
		int32_t L_11 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_006b:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T[],System.Int32)
struct TypeTagU5BU5D_t2084;
// System.Array
#include "mscorlib_System_Array.h"
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTypeTag_t1797_m23527_gshared (Array_t * __this, TypeTagU5BU5D_t2084* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisTypeTag_t1797_m23527(__this, ___array, ___index, method) (( void (*) (Array_t *, TypeTagU5BU5D_t2084*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisTypeTag_t1797_m23527_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t976_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t568_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral586;
extern Il2CppCodeGenString* _stringLiteral1393;
extern Il2CppCodeGenString* _stringLiteral1430;
extern Il2CppCodeGenString* _stringLiteral588;
extern Il2CppCodeGenString* _stringLiteral1416;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTypeTag_t1797_m23527_gshared (Array_t * __this, TypeTagU5BU5D_t2084* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t976_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		ArgumentException_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		_stringLiteral586 = il2cpp_codegen_string_literal_from_index(586);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		_stringLiteral1430 = il2cpp_codegen_string_literal_from_index(1430);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		_stringLiteral1416 = il2cpp_codegen_string_literal_from_index(1416);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeTagU5BU5D_t2084* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t976 * L_1 = (ArgumentNullException_t976 *)il2cpp_codegen_object_new (ArgumentNullException_t976_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5261(L_1, (String_t*)_stringLiteral586, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_4 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_002d:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m8069((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TypeTagU5BU5D_t2084* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m8071((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		TypeTagU5BU5D_t2084* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m8069((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t568 * L_11 = (ArgumentException_t568 *)il2cpp_codegen_object_new (ArgumentException_t568_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3113(L_11, (String_t*)_stringLiteral1430, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0055:
	{
		TypeTagU5BU5D_t2084* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m5336((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_15 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_15);
	}

IL_0071:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1416, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1209 * L_18 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6279(L_18, (String_t*)_stringLiteral588, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}

IL_008d:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TypeTagU5BU5D_t2084* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m8069((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m8110(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisTypeTag_t1797_m23528_gshared (Array_t * __this, uint8_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisTypeTag_t1797_m23528(__this, ___item, method) (( bool (*) (Array_t *, uint8_t, const MethodInfo*))Array_InternalArray__ICollection_Remove_TisTypeTag_t1797_m23528_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" bool Array_InternalArray__ICollection_Remove_TisTypeTag_t1797_m23528_gshared (Array_t * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisTypeTag_t1797_m23529_gshared (Array_t * __this, uint8_t ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisTypeTag_t1797_m23529(__this, ___item, method) (( int32_t (*) (Array_t *, uint8_t, const MethodInfo*))Array_InternalArray__IndexOf_TisTypeTag_t1797_m23529_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
extern TypeInfo* RankException_t1997_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1393;
extern "C" int32_t Array_InternalArray__IndexOf_TisTypeTag_t1797_m23529_gshared (Array_t * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(916);
		_stringLiteral1393 = il2cpp_codegen_string_literal_from_index(1393);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m5336((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m8260(NULL /*static, unused*/, (String_t*)_stringLiteral1393, /*hidden argument*/NULL);
		RankException_t1997 * L_2 = (RankException_t1997 *)il2cpp_codegen_object_new (RankException_t1997_il2cpp_TypeInfo_var);
		RankException__ctor_m12199(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001c:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0083;
	}

IL_002a:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (uint8_t*)(&V_2));
		uint8_t L_5 = ___item;
		goto IL_005d;
	}
	{
		uint8_t L_6 = V_2;
		goto IL_0053;
	}
	{
		int32_t L_7 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_8 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_7+(int32_t)L_8));
	}

IL_0053:
	{
		NullCheck((Array_t *)__this);
		int32_t L_9 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_9-(int32_t)1));
	}

IL_005d:
	{
		uint8_t L_10 = ___item;
		uint8_t L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_11);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_12);
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_14 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_15 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_14+(int32_t)L_15));
	}

IL_007f:
	{
		int32_t L_16 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002a;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m8071((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_19-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisTypeTag_t1797_m23530_gshared (Array_t * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisTypeTag_t1797_m23530(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, uint8_t, const MethodInfo*))Array_InternalArray__Insert_TisTypeTag_t1797_m23530_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t229_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral609;
extern "C" void Array_InternalArray__Insert_TisTypeTag_t1797_m23530_gshared (Array_t * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral609 = il2cpp_codegen_string_literal_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t229 * L_0 = (NotSupportedException_t229 *)il2cpp_codegen_object_new (NotSupportedException_t229_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6292(L_0, (String_t*)_stringLiteral609, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
// System.Array
#include "mscorlib_System_Array.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisTypeTag_t1797_m23531_gshared (Array_t * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisTypeTag_t1797_m23531(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, uint8_t, const MethodInfo*))Array_InternalArray__set_Item_TisTypeTag_t1797_m23531_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t234_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral588;
extern "C" void Array_InternalArray__set_Item_TisTypeTag_t1797_m23531_gshared (Array_t * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(625);
		ObjectU5BU5D_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		_stringLiteral588 = il2cpp_codegen_string_literal_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t234* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m5337((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t1209 * L_2 = (ArgumentOutOfRangeException_t1209 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1209_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6283(L_2, (String_t*)_stringLiteral588, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		V_0 = (ObjectU5BU5D_t234*)((ObjectU5BU5D_t234*)IsInst(__this, ObjectU5BU5D_t234_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t234* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ObjectU5BU5D_t234* L_4 = V_0;
		int32_t L_5 = ___index;
		uint8_t L_6 = ___item;
		uint8_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5, sizeof(Object_t *))) = (Object_t *)L_8;
		return;
	}

IL_002e:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (uint8_t*)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T&)
// System.Array
#include "mscorlib_System_Array.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_118.h"
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_118MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.Binary.TypeTag>()
struct IEnumerator_1_t3139;
// System.Array
#include "mscorlib_System_Array.h"
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.Binary.TypeTag>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.Binary.TypeTag>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTypeTag_t1797_m23533_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisTypeTag_t1797_m23533(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisTypeTag_t1797_m23533_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.Binary.TypeTag>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTypeTag_t1797_m23533_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t2882  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t2882 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t2882  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
