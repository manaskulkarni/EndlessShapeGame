#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t125;
struct Coroutine_t125_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m3981 (Coroutine_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m3982 (Coroutine_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m3983 (Coroutine_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t125_marshal(const Coroutine_t125& unmarshaled, Coroutine_t125_marshaled& marshaled);
extern "C" void Coroutine_t125_marshal_back(const Coroutine_t125_marshaled& marshaled, Coroutine_t125& unmarshaled);
extern "C" void Coroutine_t125_marshal_cleanup(Coroutine_t125_marshaled& marshaled);
