#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionSet
struct PermissionSet_t1623;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1083;

// System.Void System.Security.PermissionSet::.ctor()
extern "C" void PermissionSet__ctor_m11115 (PermissionSet_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
extern "C" void PermissionSet__ctor_m11116 (PermissionSet_t1623 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
extern "C" void PermissionSet_set_DeclarativeSecurity_m11117 (PermissionSet_t1623 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
extern "C" PermissionSet_t1623 * PermissionSet_CreateFromBinaryFormat_m11118 (Object_t * __this /* static, unused */, ByteU5BU5D_t1083* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
