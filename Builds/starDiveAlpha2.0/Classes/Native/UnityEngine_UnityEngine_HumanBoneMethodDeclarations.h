#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t720;
struct HumanBone_t720_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m3588 (HumanBone_t720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m3589 (HumanBone_t720 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m3590 (HumanBone_t720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m3591 (HumanBone_t720 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t720_marshal(const HumanBone_t720& unmarshaled, HumanBone_t720_marshaled& marshaled);
void HumanBone_t720_marshal_back(const HumanBone_t720_marshaled& marshaled, HumanBone_t720& unmarshaled);
void HumanBone_t720_marshal_cleanup(HumanBone_t720_marshaled& marshaled);
