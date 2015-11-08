#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Manager
struct Manager_t155;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t223;

// System.Void Manager::.ctor()
extern "C" void Manager__ctor_m753 (Manager_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::RegisterToEvents()
extern "C" void Manager_RegisterToEvents_m754 (Manager_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::OnDifficultyChange(System.Object,System.EventArgs)
extern "C" void Manager_OnDifficultyChange_m755 (Manager_t155 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::OnSpeedChange(System.Object,System.EventArgs)
extern "C" void Manager_OnSpeedChange_m756 (Manager_t155 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::OnHighScore(System.Object,System.EventArgs)
extern "C" void Manager_OnHighScore_m757 (Manager_t155 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
