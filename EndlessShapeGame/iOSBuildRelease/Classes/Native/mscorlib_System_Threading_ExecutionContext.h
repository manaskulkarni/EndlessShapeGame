﻿#pragma once
#include <stdint.h>
// System.Security.SecurityContext
struct SecurityContext_t1882;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ExecutionContext
struct  ExecutionContext_t1731  : public Object_t
{
	// System.Security.SecurityContext System.Threading.ExecutionContext::_sc
	SecurityContext_t1882 * ____sc_0;
	// System.Boolean System.Threading.ExecutionContext::_suppressFlow
	bool ____suppressFlow_1;
	// System.Boolean System.Threading.ExecutionContext::_capture
	bool ____capture_2;
};
