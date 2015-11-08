﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter/NullTextWriter
struct NullTextWriter_t1582;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t113;

// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
extern "C" void NullTextWriter__ctor_m9517 (NullTextWriter_t1582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
extern "C" void NullTextWriter_Write_m9518 (NullTextWriter_t1582 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char)
extern "C" void NullTextWriter_Write_m9519 (NullTextWriter_t1582 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void NullTextWriter_Write_m9520 (NullTextWriter_t1582 * __this, CharU5BU5D_t113* ___value, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
