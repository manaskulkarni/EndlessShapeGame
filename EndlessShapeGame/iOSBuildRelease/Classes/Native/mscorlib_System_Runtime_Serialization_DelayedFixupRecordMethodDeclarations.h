#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t1817;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1812;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1806;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C" void DelayedFixupRecord__ctor_m10671 (DelayedFixupRecord_t1817 * __this, ObjectRecord_t1812 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t1812 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void DelayedFixupRecord_FixupImpl_m10672 (DelayedFixupRecord_t1817 * __this, ObjectManager_t1806 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
