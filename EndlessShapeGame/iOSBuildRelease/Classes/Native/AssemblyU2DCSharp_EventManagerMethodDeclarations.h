#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// EventManager
struct EventManager_t151;
// System.Object
struct Object_t;
// System.EventHandler
struct EventHandler_t169;
// System.EventArgs
struct EventArgs_t223;

// System.Void EventManager::.ctor()
extern "C" void EventManager__ctor_m657 (EventManager_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::SendEvent(System.Object,System.EventHandler,System.EventArgs)
extern "C" void EventManager_SendEvent_m658 (Object_t * __this /* static, unused */, Object_t * ___sender, EventHandler_t169 * ___handler, EventArgs_t223 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
