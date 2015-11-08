#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ChannelData
struct ChannelData_t1780;
// System.Collections.ArrayList
struct ArrayList_t1029;
// System.Collections.Hashtable
struct Hashtable_t1020;

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C" void ChannelData__ctor_m10518 (ChannelData_t1780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C" ArrayList_t1029 * ChannelData_get_ServerProviders_m10519 (ChannelData_t1780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C" ArrayList_t1029 * ChannelData_get_ClientProviders_m10520 (ChannelData_t1780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C" Hashtable_t1020 * ChannelData_get_CustomProperties_m10521 (ChannelData_t1780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C" void ChannelData_CopyFrom_m10522 (ChannelData_t1780 * __this, ChannelData_t1780 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
