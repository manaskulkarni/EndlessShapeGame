#pragma once
#include <stdint.h>
// TouchScript.Clusters.Clusters
struct Clusters_t591;
// TouchScript.Gestures.Simple.SimpleScaleGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimpleScaleGesture.h"
// TouchScript.Gestures.ScaleGesture
struct  ScaleGesture_t615  : public SimpleScaleGesture_t616
{
	// TouchScript.Clusters.Clusters TouchScript.Gestures.ScaleGesture::clusters
	Clusters_t591 * ___clusters_47;
};
