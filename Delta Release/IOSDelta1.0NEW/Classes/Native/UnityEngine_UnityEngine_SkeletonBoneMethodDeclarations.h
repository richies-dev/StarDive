#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t652;
struct SkeletonBone_t652_marshaled;

void SkeletonBone_t652_marshal(const SkeletonBone_t652& unmarshaled, SkeletonBone_t652_marshaled& marshaled);
void SkeletonBone_t652_marshal_back(const SkeletonBone_t652_marshaled& marshaled, SkeletonBone_t652& unmarshaled);
void SkeletonBone_t652_marshal_cleanup(SkeletonBone_t652_marshaled& marshaled);
