#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ShapeManager/ShapePool
struct ShapePool_t177;
// ShapeBehavior
struct ShapeBehavior_t144;

// System.Void ShapeManager/ShapePool::.ctor()
extern "C" void ShapePool__ctor_m786 (ShapePool_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager/ShapePool::AddShape(ShapeBehavior)
extern "C" void ShapePool_AddShape_m787 (ShapePool_t177 * __this, ShapeBehavior_t144 * ___shape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ShapeBehavior ShapeManager/ShapePool::UseShape()
extern "C" ShapeBehavior_t144 * ShapePool_UseShape_m788 (ShapePool_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
