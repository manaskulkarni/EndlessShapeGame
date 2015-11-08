#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t241;
// TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase
#include "TouchScript_TouchScript_Gestures_Simple_TwoPointTransform2DG.h"
// TouchScript.Gestures.Simple.SimpleScaleGesture
struct  SimpleScaleGesture_t616  : public TwoPointTransform2DGestureBase_t621
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleScaleGesture::scaleStartedInvoker
	EventHandler_1_t241 * ___scaleStartedInvoker_40;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleScaleGesture::scaledInvoker
	EventHandler_1_t241 * ___scaledInvoker_41;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleScaleGesture::scaleCompletedInvoker
	EventHandler_1_t241 * ___scaleCompletedInvoker_42;
	// System.Single TouchScript.Gestures.Simple.SimpleScaleGesture::scalingThreshold
	float ___scalingThreshold_43;
	// System.Single TouchScript.Gestures.Simple.SimpleScaleGesture::scalingBuffer
	float ___scalingBuffer_44;
	// System.Boolean TouchScript.Gestures.Simple.SimpleScaleGesture::isScaling
	bool ___isScaling_45;
	// System.Single TouchScript.Gestures.Simple.SimpleScaleGesture::<LocalDeltaScale>k__BackingField
	float ___U3CLocalDeltaScaleU3Ek__BackingField_46;
};
