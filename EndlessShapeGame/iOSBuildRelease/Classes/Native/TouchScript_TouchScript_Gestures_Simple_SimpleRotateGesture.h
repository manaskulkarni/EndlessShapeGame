#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_TwoPointTransform2DG.h"
// TouchScript.Gestures.Simple.SimpleRotateGesture
struct  SimpleRotateGesture_t614  : public TwoPointTransform2DGestureBase_t621
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleRotateGesture::rotateStartedInvoker
	EventHandler_1_t241 * ___rotateStartedInvoker_40;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleRotateGesture::rotatedInvoker
	EventHandler_1_t241 * ___rotatedInvoker_41;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleRotateGesture::rotateCompletedInvoker
	EventHandler_1_t241 * ___rotateCompletedInvoker_42;
	// System.Single TouchScript.Gestures.Simple.SimpleRotateGesture::rotationThreshold
	float ___rotationThreshold_43;
	// System.Single TouchScript.Gestures.Simple.SimpleRotateGesture::rotationBuffer
	float ___rotationBuffer_44;
	// System.Boolean TouchScript.Gestures.Simple.SimpleRotateGesture::isRotating
	bool ___isRotating_45;
	// System.Single TouchScript.Gestures.Simple.SimpleRotateGesture::<DeltaRotation>k__BackingField
	float ___U3CDeltaRotationU3Ek__BackingField_46;
};
