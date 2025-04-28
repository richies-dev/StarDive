#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ActivityController
struct ActivityController_t82;
// UnityEngine.GameObject
struct GameObject_t59;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ActivityController::.ctor()
extern "C" void ActivityController__ctor_m217 (ActivityController_t82 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::.cctor()
extern "C" void ActivityController__cctor_m218 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ActivityController::get_StartScreenWidth()
extern "C" float ActivityController_get_StartScreenWidth_m219 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::set_StartScreenWidth(System.Single)
extern "C" void ActivityController_set_StartScreenWidth_m220 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ActivityController::get_StartScreenHeight()
extern "C" float ActivityController_get_StartScreenHeight_m221 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::set_StartScreenHeight(System.Single)
extern "C" void ActivityController_set_StartScreenHeight_m222 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::Awake()
extern "C" void ActivityController_Awake_m223 (ActivityController_t82 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::Start()
extern "C" void ActivityController_Start_m224 (ActivityController_t82 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangePositionOfGameObject(UnityEngine.GameObject,UnityEngine.Vector3)
extern "C" void ActivityController_ChangePositionOfGameObject_m225 (Object_t * __this /* static, unused */, GameObject_t59 * ___gameObject, Vector3_t32  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::OnNewRound()
extern "C" void ActivityController_OnNewRound_m226 (ActivityController_t82 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ShowPlayersHealth()
extern "C" void ActivityController_ShowPlayersHealth_m227 (ActivityController_t82 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::OnGameOver()
extern "C" void ActivityController_OnGameOver_m228 (ActivityController_t82 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ShopActivityTriggers()
extern "C" void ActivityController_ShopActivityTriggers_m229 (ActivityController_t82 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::Update()
extern "C" void ActivityController_Update_m230 (ActivityController_t82 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::FixedUpdate()
extern "C" void ActivityController_FixedUpdate_m231 (ActivityController_t82 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
