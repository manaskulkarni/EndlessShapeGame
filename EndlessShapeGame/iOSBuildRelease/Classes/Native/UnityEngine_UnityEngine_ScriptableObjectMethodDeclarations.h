#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t632;
struct ScriptableObject_t632_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m3887 (ScriptableObject_t632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m3984 (Object_t * __this /* static, unused */, ScriptableObject_t632 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t632 * ScriptableObject_CreateInstance_m3985 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t632 * ScriptableObject_CreateInstance_m3986 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t632 * ScriptableObject_CreateInstanceFromType_m3987 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void ScriptableObject_t632_marshal(const ScriptableObject_t632& unmarshaled, ScriptableObject_t632_marshaled& marshaled);
extern "C" void ScriptableObject_t632_marshal_back(const ScriptableObject_t632_marshaled& marshaled, ScriptableObject_t632& unmarshaled);
extern "C" void ScriptableObject_t632_marshal_cleanup(ScriptableObject_t632_marshaled& marshaled);
