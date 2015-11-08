#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t30;
// UnityEngine.Transform
struct Transform_t48;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// LongPress_Button
struct  LongPress_Button_t214  : public MonoBehaviour_t23
{
	// UnityEngine.GameObject LongPress_Button::Plane
	GameObject_t30 * ___Plane_2;
	// UnityEngine.Transform LongPress_Button::button
	Transform_t48 * ___button_3;
	// UnityEngine.Transform LongPress_Button::thebase
	Transform_t48 * ___thebase_4;
	// System.Single LongPress_Button::timeToPress
	float ___timeToPress_5;
	// UnityEngine.Vector3 LongPress_Button::startScale
	Vector3_t28  ___startScale_6;
	// UnityEngine.Vector3 LongPress_Button::targetScale
	Vector3_t28  ___targetScale_7;
};
