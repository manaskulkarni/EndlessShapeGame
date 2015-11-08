#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TypeInitializationException
struct TypeInitializationException_t2007;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t945;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException__ctor_m12283 (TypeInitializationException_t2007 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException_GetObjectData_m12284 (TypeInitializationException_t2007 * __this, SerializationInfo_t945 * ___info, StreamingContext_t946  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
