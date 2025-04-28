#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t718;
struct SkeletonBone_t718_marshaled;

void SkeletonBone_t718_marshal(const SkeletonBone_t718& unmarshaled, SkeletonBone_t718_marshaled& marshaled);
void SkeletonBone_t718_marshal_back(const SkeletonBone_t718_marshaled& marshaled, SkeletonBone_t718& unmarshaled);
void SkeletonBone_t718_marshal_cleanup(SkeletonBone_t718_marshaled& marshaled);
