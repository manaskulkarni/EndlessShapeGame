#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Hit.TouchHit2D
struct TouchHit2D_t628;
// UnityEngine.Collider2D
struct Collider2D_t224;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t225;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void TouchScript.Hit.TouchHit2D::.ctor()
extern "C" void TouchHit2D__ctor_m3578 (TouchHit2D_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D TouchScript.Hit.TouchHit2D::get_Collider2D()
extern "C" Collider2D_t224 * TouchHit2D_get_Collider2D_m3579 (TouchHit2D_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Hit.TouchHit2D::get_Point()
extern "C" Vector3_t28  TouchHit2D_get_Point_m3580 (TouchHit2D_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D TouchScript.Hit.TouchHit2D::get_Rigidbody2D()
extern "C" Rigidbody2D_t225 * TouchHit2D_get_Rigidbody2D_m3581 (TouchHit2D_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Hit.TouchHit2D::InitWith(UnityEngine.RaycastHit2D)
extern "C" void TouchHit2D_InitWith_m3582 (TouchHit2D_t628 * __this, RaycastHit2D_t532  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
