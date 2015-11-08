#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Tags
struct Tags_t637;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t680;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t681;

// System.Void TouchScript.Tags::.ctor(TouchScript.Tags)
extern "C" void Tags__ctor_m3684 (Tags_t637 * __this, Tags_t637 * ___tags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Tags::.ctor(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void Tags__ctor_m3685 (Tags_t637 * __this, Object_t* ___tags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Tags::.ctor(System.String)
extern "C" void Tags__ctor_m3686 (Tags_t637 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Tags::.ctor()
extern "C" void Tags__ctor_m3687 (Tags_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> TouchScript.Tags::get_TagList()
extern "C" Object_t* Tags_get_TagList_m3688 (Tags_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Tags::get_Count()
extern "C" int32_t Tags_get_Count_m3689 (Tags_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Tags::AddTag(System.String)
extern "C" void Tags_AddTag_m3690 (Tags_t637 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Tags::RemoveTag(System.String)
extern "C" void Tags_RemoveTag_m3691 (Tags_t637 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Tags::HasTag(System.String)
extern "C" bool Tags_HasTag_m3692 (Tags_t637 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TouchScript.Tags::ToString()
extern "C" String_t* Tags_ToString_m3693 (Tags_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
