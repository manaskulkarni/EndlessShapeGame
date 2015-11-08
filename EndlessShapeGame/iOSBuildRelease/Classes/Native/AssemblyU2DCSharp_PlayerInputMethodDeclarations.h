#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerInput
struct PlayerInput_t137;
// TouchScript.Gestures.FlickGesture
struct FlickGesture_t138;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t223;

// System.Void PlayerInput::.ctor()
extern "C" void PlayerInput__ctor_m579 (PlayerInput_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.FlickGesture PlayerInput::get_flick()
extern "C" FlickGesture_t138 * PlayerInput_get_flick_m580 (PlayerInput_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerInput::set_flick(TouchScript.Gestures.FlickGesture)
extern "C" void PlayerInput_set_flick_m581 (PlayerInput_t137 * __this, FlickGesture_t138 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerInput::Start()
extern "C" void PlayerInput_Start_m582 (PlayerInput_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerInput::HandleFlicked(System.Object,System.EventArgs)
extern "C" void PlayerInput_HandleFlicked_m583 (PlayerInput_t137 * __this, Object_t * ___sender, EventArgs_t223 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
