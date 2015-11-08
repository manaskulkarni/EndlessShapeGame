#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<TouchScript.ITouch>
struct List_1_t592;
// System.Object
#include "mscorlib_System_Object.h"
// TouchScript.Clusters.Clusters
struct  Clusters_t591  : public Object_t
{
	// System.Collections.Generic.List`1<TouchScript.ITouch> TouchScript.Clusters.Clusters::points
	List_1_t592 * ___points_2;
	// System.Boolean TouchScript.Clusters.Clusters::dirty
	bool ___dirty_3;
	// System.Collections.Generic.List`1<TouchScript.ITouch> TouchScript.Clusters.Clusters::cluster1
	List_1_t592 * ___cluster1_4;
	// System.Collections.Generic.List`1<TouchScript.ITouch> TouchScript.Clusters.Clusters::cluster2
	List_1_t592 * ___cluster2_5;
	// System.Single TouchScript.Clusters.Clusters::minPointDistance
	float ___minPointDistance_6;
	// System.Single TouchScript.Clusters.Clusters::minPointDistanceSqr
	float ___minPointDistanceSqr_7;
	// System.Boolean TouchScript.Clusters.Clusters::hasClusters
	bool ___hasClusters_8;
};
