#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Projectile
struct Projectile_t64;
// UnityEngine.Collider2D
struct Collider2D_t71;

// System.Void Projectile::.ctor()
extern "C" void Projectile__ctor_m337 (Projectile_t64 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::NormalMovement()
extern "C" void Projectile_NormalMovement_m338 (Projectile_t64 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::ShakeCamera(System.Single,System.Single,System.Single,System.Single)
extern "C" void Projectile_ShakeCamera_m339 (Projectile_t64 * __this, float ___shake, float ___decreseFactor, float ___shakeIntesity, float ___smoothness, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::HitEnemy(System.Int32,System.Int32)
extern "C" void Projectile_HitEnemy_m340 (Projectile_t64 * __this, int32_t ___MoneyToAdd, int32_t ___SubtractBulletStrength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::BulletDeath()
extern "C" void Projectile_BulletDeath_m341 (Projectile_t64 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::OnEnableBullet()
extern "C" void Projectile_OnEnableBullet_m342 (Projectile_t64 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::OnEnable()
extern "C" void Projectile_OnEnable_m343 (Projectile_t64 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::FixedUpdate()
extern "C" void Projectile_FixedUpdate_m344 (Projectile_t64 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::Update()
extern "C" void Projectile_Update_m345 (Projectile_t64 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void Projectile_OnTriggerEnter2D_m346 (Projectile_t64 * __this, Collider2D_t71 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
