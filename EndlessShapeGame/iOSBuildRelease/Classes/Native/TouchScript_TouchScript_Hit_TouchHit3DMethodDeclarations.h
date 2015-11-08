#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.Hit.TouchHit3D
struct TouchHit3D_t629;
// UnityEngine.Collider
struct Collider_t534;
// UnityEngine.Rigidbody
struct Rigidbody_t260;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void TouchScript.Hit.TouchHit3D::.ctor()
extern "C" void TouchHit3D__ctor_m3583 (TouchHit3D_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider TouchScript.Hit.TouchHit3D::get_Collider()
extern "C" Collider_t534 * TouchHit3D_get_Collider_m3584 (TouchHit3D_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Hit.TouchHit3D::get_Normal()
extern "C" Vector3_t28  TouchHit3D_get_Normal_m3585 (TouchHit3D_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Hit.TouchHit3D::get_Point()
extern "C" Vector3_t28  TouchHit3D_get_Point_m3586 (TouchHit3D_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody TouchScript.Hit.TouchHit3D::get_Rigidbody()
extern "C" Rigidbody_t260 * TouchHit3D_get_Rigidbody_m3587 (TouchHit3D_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Hit.TouchHit3D::InitWith(UnityEngine.RaycastHit)
extern "C" void TouchHit3D_InitWith_m3588 (TouchHit3D_t629 * __this, RaycastHit_t504  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
