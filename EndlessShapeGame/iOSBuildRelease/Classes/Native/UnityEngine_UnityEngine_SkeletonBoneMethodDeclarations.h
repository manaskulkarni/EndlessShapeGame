#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


extern "C" void SkeletonBone_t816_marshal(const SkeletonBone_t816& unmarshaled, SkeletonBone_t816_marshaled& marshaled);
extern "C" void SkeletonBone_t816_marshal_back(const SkeletonBone_t816_marshaled& marshaled, SkeletonBone_t816& unmarshaled);
extern "C" void SkeletonBone_t816_marshal_cleanup(SkeletonBone_t816_marshaled& marshaled);
