#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t534;
// UnityEngine.Rigidbody
struct Rigidbody_t260;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t260 * Collider_get_attachedRigidbody_m4532 (Collider_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C" Bounds_t427  Collider_get_bounds_m3883 (Collider_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Collider_INTERNAL_get_bounds_m4533 (Collider_t534 * __this, Bounds_t427 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
