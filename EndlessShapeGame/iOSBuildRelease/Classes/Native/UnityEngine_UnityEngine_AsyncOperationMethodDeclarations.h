#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t718;
struct AsyncOperation_t718_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m4337 (AsyncOperation_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m4338 (AsyncOperation_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m4339 (AsyncOperation_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t718_marshal(const AsyncOperation_t718& unmarshaled, AsyncOperation_t718_marshaled& marshaled);
extern "C" void AsyncOperation_t718_marshal_back(const AsyncOperation_t718_marshaled& marshaled, AsyncOperation_t718& unmarshaled);
extern "C" void AsyncOperation_t718_marshal_cleanup(AsyncOperation_t718_marshaled& marshaled);
