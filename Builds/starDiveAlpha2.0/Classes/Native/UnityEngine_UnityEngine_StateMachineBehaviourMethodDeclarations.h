#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t769;
// UnityEngine.Animator
struct Animator_t414;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m3755 (StateMachineBehaviour_t769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m3756 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, AnimatorStateInfo_t714  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m3757 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, AnimatorStateInfo_t714  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m3758 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, AnimatorStateInfo_t714  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m3759 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, AnimatorStateInfo_t714  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m3760 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, AnimatorStateInfo_t714  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m3761 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m3762 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
