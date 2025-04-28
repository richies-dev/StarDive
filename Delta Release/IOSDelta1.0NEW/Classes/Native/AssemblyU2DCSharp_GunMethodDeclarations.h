#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Gun
struct Gun_t109;
// UnityEngine.Material
struct Material_t4;
// ObjectPool
struct ObjectPool_t107;
// GunStats
struct GunStats_t102;
// UnityEngine.AudioClip
struct AudioClip_t55;

// System.Void Gun::.ctor(System.Int32,UnityEngine.Material,UnityEngine.Material,ObjectPool,System.Single,System.Single,System.Single,GunStats,UnityEngine.AudioClip)
extern "C" void Gun__ctor_m335 (Gun_t109 * __this, int32_t ___speedOfBullet, Material_t4 * ___turretSkin, Material_t4 * ___baseSkin, ObjectPool_t107 * ___Bulletobj, float ___blowBackDist, float ___blowBackStrength, float ___blowBackResetStrength, GunStats_t102 * ___gunType, AudioClip_t55 * ___gunshotSoundEfx, MethodInfo* method) IL2CPP_METHOD_ATTR;
