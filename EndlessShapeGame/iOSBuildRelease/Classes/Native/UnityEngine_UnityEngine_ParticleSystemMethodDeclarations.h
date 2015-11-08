#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t191;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t939;
// UnityEngine.Transform
struct Transform_t48;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t940;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.ParticleSystem::set_startColor(UnityEngine.Color)
extern "C" void ParticleSystem_set_startColor_m1165 (ParticleSystem_t191 * __this, Color_t12  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_set_startColor(UnityEngine.Color&)
extern "C" void ParticleSystem_INTERNAL_set_startColor_m4503 (ParticleSystem_t191 * __this, Color_t12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m4504 (ParticleSystem_t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m1166 (ParticleSystem_t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m4505 (ParticleSystem_t191 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t939* ParticleSystem_GetParticleSystems_m4506 (Object_t * __this /* static, unused */, ParticleSystem_t191 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m4507 (Object_t * __this /* static, unused */, Transform_t48 * ___transform, List_1_t940 * ___particleSystems, const MethodInfo* method) IL2CPP_METHOD_ATTR;
