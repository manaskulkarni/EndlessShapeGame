﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.AmbiguousMatchException
struct AmbiguousMatchException_t1620;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t945;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AmbiguousMatchException::.ctor()
extern "C" void AmbiguousMatchException__ctor_m9809 (AmbiguousMatchException_t1620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.String)
extern "C" void AmbiguousMatchException__ctor_m9810 (AmbiguousMatchException_t1620 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AmbiguousMatchException__ctor_m9811 (AmbiguousMatchException_t1620 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
