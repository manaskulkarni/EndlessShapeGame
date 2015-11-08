#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


extern "C" void GameSettings_t165_marshal(const GameSettings_t165& unmarshaled, GameSettings_t165_marshaled& marshaled);
extern "C" void GameSettings_t165_marshal_back(const GameSettings_t165_marshaled& marshaled, GameSettings_t165& unmarshaled);
extern "C" void GameSettings_t165_marshal_cleanup(GameSettings_t165_marshaled& marshaled);
