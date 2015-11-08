#pragma once
#include <stdint.h>
// TouchScript.Hit.ITouchHit
struct ITouchHit_t666;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t665;
// UnityEngine.Transform
struct Transform_t48;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t624;
// TouchScript.Tags
struct Tags_t637;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// TouchScript.TouchPoint
struct  TouchPoint_t664  : public Object_t
{
	// UnityEngine.Vector2 TouchScript.TouchPoint::position
	Vector2_t85  ___position_0;
	// UnityEngine.Vector2 TouchScript.TouchPoint::newPosition
	Vector2_t85  ___newPosition_1;
	// TouchScript.Hit.ITouchHit TouchScript.TouchPoint::hit
	Object_t * ___hit_2;
	// System.Boolean TouchScript.TouchPoint::isDirty
	bool ___isDirty_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TouchScript.TouchPoint::properties
	Dictionary_2_t665 * ___properties_4;
	// System.Int32 TouchScript.TouchPoint::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;
	// UnityEngine.Transform TouchScript.TouchPoint::<Target>k__BackingField
	Transform_t48 * ___U3CTargetU3Ek__BackingField_6;
	// UnityEngine.Vector2 TouchScript.TouchPoint::<PreviousPosition>k__BackingField
	Vector2_t85  ___U3CPreviousPositionU3Ek__BackingField_7;
	// TouchScript.Layers.TouchLayer TouchScript.TouchPoint::<Layer>k__BackingField
	TouchLayer_t624 * ___U3CLayerU3Ek__BackingField_8;
	// TouchScript.Tags TouchScript.TouchPoint::<Tags>k__BackingField
	Tags_t637 * ___U3CTagsU3Ek__BackingField_9;
};
