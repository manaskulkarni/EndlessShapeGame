﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.TypeInfo
struct TypeInfo_t1791;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Runtime.Remoting.TypeInfo::.ctor(System.Type)
extern "C" void TypeInfo__ctor_m10582 (TypeInfo_t1791 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.TypeInfo::get_TypeName()
extern "C" String_t* TypeInfo_get_TypeName_m10583 (TypeInfo_t1791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
