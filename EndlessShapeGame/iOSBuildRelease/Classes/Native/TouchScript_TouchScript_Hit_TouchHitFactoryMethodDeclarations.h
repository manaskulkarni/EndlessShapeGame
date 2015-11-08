#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Hit.TouchHitFactory
struct TouchHitFactory_t630;
// TouchScript.Hit.ITouchHitFactory
struct ITouchHitFactory_t679;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t666;
// UnityEngine.Transform
struct Transform_t48;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void TouchScript.Hit.TouchHitFactory::.ctor()
extern "C" void TouchHitFactory__ctor_m3589 (TouchHitFactory_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.ITouchHitFactory TouchScript.Hit.TouchHitFactory::get_Instance()
extern "C" Object_t * TouchHitFactory_get_Instance_m3590 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.ITouchHit TouchScript.Hit.TouchHitFactory::GetTouchHit(UnityEngine.RaycastHit)
extern "C" Object_t * TouchHitFactory_GetTouchHit_m3591 (TouchHitFactory_t630 * __this, RaycastHit_t504  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.ITouchHit TouchScript.Hit.TouchHitFactory::GetTouchHit(UnityEngine.RaycastHit2D)
extern "C" Object_t * TouchHitFactory_GetTouchHit_m3592 (TouchHitFactory_t630 * __this, RaycastHit2D_t532  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.ITouchHit TouchScript.Hit.TouchHitFactory::GetTouchHit(UnityEngine.Transform)
extern "C" Object_t * TouchHitFactory_GetTouchHit_m3593 (TouchHitFactory_t630 * __this, Transform_t48 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
