#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t543;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t688;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
#define Action_1__ctor_m16589(__this, ___object, ___method, method) (( void (*) (Action_1_t543 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m14939_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(T)
#define Action_1_Invoke_m3601(__this, ___obj, method) (( void (*) (Action_1_t543 *, IScoreU5BU5D_t688*, MethodInfo*))Action_1_Invoke_m14940_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m16590(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t543 *, IScoreU5BU5D_t688*, AsyncCallback_t311 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m14942_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m16591(__this, ___result, method) (( void (*) (Action_1_t543 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m14944_gshared)(__this, ___result, method)
