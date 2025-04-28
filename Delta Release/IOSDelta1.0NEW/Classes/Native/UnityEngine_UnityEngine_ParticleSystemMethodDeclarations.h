#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t112;

// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern "C" void ParticleSystem_set_enableEmission_m617 (ParticleSystem_t112 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern "C" float ParticleSystem_get_startLifetime_m637 (ParticleSystem_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern "C" void ParticleSystem_Emit_m618 (ParticleSystem_t112 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C" void ParticleSystem_INTERNAL_CALL_Emit_m3258 (Object_t * __this /* static, unused */, ParticleSystem_t112 * ___self, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
