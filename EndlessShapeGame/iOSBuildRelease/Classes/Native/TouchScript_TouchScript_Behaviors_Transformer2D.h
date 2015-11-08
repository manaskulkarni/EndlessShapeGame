#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// TouchScript.Behaviors.Transformer2D
struct  Transformer2D_t590  : public MonoBehaviour_t23
{
	// System.Single TouchScript.Behaviors.Transformer2D::Speed
	float ___Speed_2;
	// System.Single TouchScript.Behaviors.Transformer2D::PanMultiplier
	float ___PanMultiplier_3;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer2D::localPositionToGo
	Vector3_t28  ___localPositionToGo_4;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer2D::localScaleToGo
	Vector3_t28  ___localScaleToGo_5;
	// UnityEngine.Quaternion TouchScript.Behaviors.Transformer2D::localRotationToGo
	Quaternion_t104  ___localRotationToGo_6;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer2D::lastLocalPosition
	Vector3_t28  ___lastLocalPosition_7;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer2D::lastLocalScale
	Vector3_t28  ___lastLocalScale_8;
	// UnityEngine.Quaternion TouchScript.Behaviors.Transformer2D::lastLocalRotation
	Quaternion_t104  ___lastLocalRotation_9;
};
