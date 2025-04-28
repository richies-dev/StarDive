#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Gun
struct Gun_t175;
// UnityEngine.Material
struct Material_t4;
// ObjectPool
struct ObjectPool_t173;
// GunStats
struct GunStats_t168;
// UnityEngine.AudioClip
struct AudioClip_t149;

// System.Void Gun::.ctor(System.Int32,UnityEngine.Material,UnityEngine.Material,ObjectPool,System.Single,System.Single,System.Single,GunStats,UnityEngine.AudioClip,UnityEngine.AudioClip)
extern "C" void Gun__ctor_m600 (Gun_t175 * __this, int32_t ___speedOfBullet, Material_t4 * ___turretSkin, Material_t4 * ___baseSkin, ObjectPool_t173 * ___Bulletobj, float ___blowBackDist, float ___blowBackStrength, float ___blowBackResetStrength, GunStats_t168 * ___gunType, AudioClip_t149 * ___gunshotSoundEfx, AudioClip_t149 * ___blowbacknoise, MethodInfo* method) IL2CPP_METHOD_ATTR;
