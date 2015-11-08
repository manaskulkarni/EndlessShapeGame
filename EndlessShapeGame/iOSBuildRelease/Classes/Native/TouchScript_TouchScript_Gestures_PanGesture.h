#pragma once
#include <stdint.h>
// TouchScript.Clusters.Clusters
struct Clusters_t591;
// TouchScript.Gestures.Simple.SimplePanGesture
#include "TouchScript_TouchScript_Gestures_Simple_SimplePanGesture.h"
// TouchScript.Gestures.PanGesture
struct  PanGesture_t611  : public SimplePanGesture_t612
{
	// TouchScript.Clusters.Clusters TouchScript.Gestures.PanGesture::clusters
	Clusters_t591 * ___clusters_42;
};
