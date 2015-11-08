#pragma once
#include <stdint.h>
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t140;
// UnityEngine.Coroutine
struct Coroutine_t125;
struct Coroutine_t125_marshaled;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// ShapeBehavior/ShapeResponse
#include "AssemblyU2DCSharp_ShapeBehavior_ShapeResponse.h"
// ShapeBehavior/ShapeType
#include "AssemblyU2DCSharp_ShapeBehavior_ShapeType.h"
// ShapeBehavior
struct  ShapeBehavior_t144  : public MonoBehaviour_t23
{
	// UnityEngine.SpriteRenderer ShapeBehavior::<spriteRenderer>k__BackingField
	SpriteRenderer_t140 * ___U3CspriteRendererU3Ek__BackingField_2;
	// UnityEngine.Color ShapeBehavior::<originalColor>k__BackingField
	Color_t12  ___U3CoriginalColorU3Ek__BackingField_3;
	// System.Boolean ShapeBehavior::<triggered>k__BackingField
	bool ___U3CtriggeredU3Ek__BackingField_4;
	// ShapeBehavior/ShapeResponse ShapeBehavior::<shapeResponse>k__BackingField
	int32_t ___U3CshapeResponseU3Ek__BackingField_5;
	// ShapeBehavior/ShapeType ShapeBehavior::<shapeType>k__BackingField
	int32_t ___U3CshapeTypeU3Ek__BackingField_6;
	// UnityEngine.Coroutine ShapeBehavior::<updateSpecial>k__BackingField
	Coroutine_t125 * ___U3CupdateSpecialU3Ek__BackingField_7;
	// UnityEngine.Coroutine ShapeBehavior::<updateInvisible>k__BackingField
	Coroutine_t125 * ___U3CupdateInvisibleU3Ek__BackingField_8;
	// System.Boolean ShapeBehavior::<update>k__BackingField
	bool ___U3CupdateU3Ek__BackingField_9;
};
