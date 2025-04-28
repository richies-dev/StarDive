#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo LogCallback_t686_il2cpp_TypeInfo;
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo LogCallback__ctor_m3365_MethodInfo;
extern "C" void LogCallback__ctor_m3365 (LogCallback_t686 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern MethodInfo LogCallback_Invoke_m3366_MethodInfo;
extern "C" void LogCallback_Invoke_m3366 (LogCallback_t686 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m3366((LogCallback_t686 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t686(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern MethodInfo LogCallback_BeginInvoke_m3367_MethodInfo;
extern "C" Object_t * LogCallback_BeginInvoke_m3367 (LogCallback_t686 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(InitializedTypeInfo(&LogType_t604_il2cpp_TypeInfo), &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo LogCallback_EndInvoke_m3368_MethodInfo;
extern "C" void LogCallback_EndInvoke_m3368 (LogCallback_t686 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Application_t687_il2cpp_TypeInfo;
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
extern TypeInfo Void_t103_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo LogType_t604_il2cpp_TypeInfo;
extern MethodInfo Application_LoadLevelAsync_m3369_MethodInfo;


// System.Void UnityEngine.Application::LoadLevel(System.Int32)
extern MethodInfo Application_LoadLevel_m900_MethodInfo;
extern "C" void Application_LoadLevel_m900 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Application_LoadLevelAsync_m3369(NULL /*static, unused*/, (String_t*)NULL, L_0, 0, 1, /*hidden argument*/&Application_LoadLevelAsync_m3369_MethodInfo);
		return;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t597 * Application_LoadLevelAsync_m3369 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, MethodInfo* method)
{
	typedef AsyncOperation_t597 * (*Application_LoadLevelAsync_m3369_ftn) (String_t*, int32_t, bool, bool);
	static Application_LoadLevelAsync_m3369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_LoadLevelAsync_m3369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(___monoLevelName, ___index, ___additive, ___mustCompleteNextFrame);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern MethodInfo Application_get_isPlaying_m2510_MethodInfo;
extern "C" bool Application_get_isPlaying_m2510 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m2510_ftn) ();
	static Application_get_isPlaying_m2510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m2510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern MethodInfo Application_get_isEditor_m2511_MethodInfo;
extern "C" bool Application_get_isEditor_m2511 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m2511_ftn) ();
	static Application_get_isEditor_m2511_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m2511_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern MethodInfo Application_get_platform_m2410_MethodInfo;
extern "C" int32_t Application_get_platform_m2410 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m2410_ftn) ();
	static Application_get_platform_m2410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m2410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_persistentDataPath()
extern MethodInfo Application_get_persistentDataPath_m867_MethodInfo;
extern "C" String_t* Application_get_persistentDataPath_m867 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Application_get_persistentDataPath_m867_ftn) ();
	static Application_get_persistentDataPath_m867_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_persistentDataPath_m867_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_persistentDataPath()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern MethodInfo Application_CallLogCallback_m3370_MethodInfo;
extern "C" void Application_CallLogCallback_m3370 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, MethodInfo* method)
{
	LogCallback_t686 * V_0 = {0};
	LogCallback_t686 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t686 * L_1 = ((Application_t687_StaticFields*)InitializedTypeInfo(&Application_t687_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t686 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t686 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m3366_MethodInfo, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		LogCallback_t686 * L_7 = ((Application_t687_StaticFields*)InitializedTypeInfo(&Application_t687_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t686 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t686 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m3366_MethodInfo, L_9, L_10, L_11, L_12);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Behaviour_t524_il2cpp_TypeInfo;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern MethodInfo Component__ctor_m3452_MethodInfo;


// System.Void UnityEngine.Behaviour::.ctor()
extern MethodInfo Behaviour__ctor_m3371_MethodInfo;
extern "C" void Behaviour__ctor_m3371 (Behaviour_t524 * __this, MethodInfo* method)
{
	{
		Component__ctor_m3452(__this, /*hidden argument*/&Component__ctor_m3452_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern MethodInfo Behaviour_get_enabled_m765_MethodInfo;
extern "C" bool Behaviour_get_enabled_m765 (Behaviour_t524 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m765_ftn) (Behaviour_t524 *);
	static Behaviour_get_enabled_m765_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m765_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern MethodInfo Behaviour_set_enabled_m250_MethodInfo;
extern "C" void Behaviour_set_enabled_m250 (Behaviour_t524 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m250_ftn) (Behaviour_t524 *, bool);
	static Behaviour_set_enabled_m250_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m250_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern MethodInfo Behaviour_get_isActiveAndEnabled_m2172_MethodInfo;
extern "C" bool Behaviour_get_isActiveAndEnabled_m2172 (Behaviour_t524 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m2172_ftn) (Behaviour_t524 *);
	static Behaviour_get_isActiveAndEnabled_m2172_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m2172_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraCallback_t688_il2cpp_TypeInfo;
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CameraCallback__ctor_m3372_MethodInfo;
extern "C" void CameraCallback__ctor_m3372 (CameraCallback_t688 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern MethodInfo CameraCallback_Invoke_m3373_MethodInfo;
extern "C" void CameraCallback_Invoke_m3373 (CameraCallback_t688 * __this, Camera_t29 * ___cam, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m3373((CameraCallback_t688 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t29 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t29 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t688(Il2CppObject* delegate, Camera_t29 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t29 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern MethodInfo CameraCallback_BeginInvoke_m3374_MethodInfo;
extern "C" Object_t * CameraCallback_BeginInvoke_m3374 (CameraCallback_t688 * __this, Camera_t29 * ___cam, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CameraCallback_EndInvoke_m3375_MethodInfo;
extern "C" void CameraCallback_EndInvoke_m3375 (CameraCallback_t688 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Camera_t29_il2cpp_TypeInfo;
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
extern MethodInfo Camera_INTERNAL_get_pixelRect_m3377_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_worldToCameraMatrix_m3380_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_projectionMatrix_m3381_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_WorldToViewportPoint_m3383_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenToWorldPoint_m3384_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenToViewportPoint_m3385_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenPointToRay_m3386_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry_m3393_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry2D_m3395_MethodInfo;


// System.Single UnityEngine.Camera::get_fieldOfView()
extern MethodInfo Camera_get_fieldOfView_m286_MethodInfo;
extern "C" float Camera_get_fieldOfView_m286 (Camera_t29 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_fieldOfView_m286_ftn) (Camera_t29 *);
	static Camera_get_fieldOfView_m286_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_fieldOfView_m286_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_fieldOfView()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern MethodInfo Camera_get_nearClipPlane_m339_MethodInfo;
extern "C" float Camera_get_nearClipPlane_m339 (Camera_t29 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m339_ftn) (Camera_t29 *);
	static Camera_get_nearClipPlane_m339_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m339_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern MethodInfo Camera_get_farClipPlane_m343_MethodInfo;
extern "C" float Camera_get_farClipPlane_m343 (Camera_t29 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m343_ftn) (Camera_t29 *);
	static Camera_get_farClipPlane_m343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Camera::get_hdr()
extern MethodInfo Camera_get_hdr_m232_MethodInfo;
extern "C" bool Camera_get_hdr_m232 (Camera_t29 * __this, MethodInfo* method)
{
	typedef bool (*Camera_get_hdr_m232_ftn) (Camera_t29 *);
	static Camera_get_hdr_m232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_hdr_m232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_hdr()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_orthographicSize()
extern MethodInfo Camera_get_orthographicSize_m896_MethodInfo;
extern "C" float Camera_get_orthographicSize_m896 (Camera_t29 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_orthographicSize_m896_ftn) (Camera_t29 *);
	static Camera_get_orthographicSize_m896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_orthographicSize_m896_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographicSize()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern MethodInfo Camera_set_orthographicSize_m898_MethodInfo;
extern "C" void Camera_set_orthographicSize_m898 (Camera_t29 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_orthographicSize_m898_ftn) (Camera_t29 *, float);
	static Camera_set_orthographicSize_m898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographicSize_m898_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_depth()
extern MethodInfo Camera_get_depth_m2101_MethodInfo;
extern "C" float Camera_get_depth_m2101 (Camera_t29 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_depth_m2101_ftn) (Camera_t29 *);
	static Camera_get_depth_m2101_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m2101_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_aspect()
extern MethodInfo Camera_get_aspect_m359_MethodInfo;
extern "C" float Camera_get_aspect_m359 (Camera_t29 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_aspect_m359_ftn) (Camera_t29 *);
	static Camera_get_aspect_m359_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_aspect_m359_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_aspect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern MethodInfo Camera_get_cullingMask_m2248_MethodInfo;
extern "C" int32_t Camera_get_cullingMask_m2248 (Camera_t29 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m2248_ftn) (Camera_t29 *);
	static Camera_get_cullingMask_m2248_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m2248_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern MethodInfo Camera_set_cullingMask_m292_MethodInfo;
extern "C" void Camera_set_cullingMask_m292 (Camera_t29 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_cullingMask_m292_ftn) (Camera_t29 *, int32_t);
	static Camera_set_cullingMask_m292_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_cullingMask_m292_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_cullingMask(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern MethodInfo Camera_get_eventMask_m3376_MethodInfo;
extern "C" int32_t Camera_get_eventMask_m3376 (Camera_t29 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m3376_ftn) (Camera_t29 *);
	static Camera_get_eventMask_m3376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m3376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m3377 (Camera_t29 * __this, Rect_t213 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m3377_ftn) (Camera_t29 *, Rect_t213 *);
	static Camera_INTERNAL_get_pixelRect_m3377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m3377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern MethodInfo Camera_get_pixelRect_m3378_MethodInfo;
extern "C" Rect_t213  Camera_get_pixelRect_m3378 (Camera_t29 * __this, MethodInfo* method)
{
	Rect_t213  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m3377(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_pixelRect_m3377_MethodInfo);
		Rect_t213  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern MethodInfo Camera_get_targetTexture_m3379_MethodInfo;
extern "C" RenderTexture_t7 * Camera_get_targetTexture_m3379 (Camera_t29 * __this, MethodInfo* method)
{
	typedef RenderTexture_t7 * (*Camera_get_targetTexture_m3379_ftn) (Camera_t29 *);
	static Camera_get_targetTexture_m3379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m3379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern MethodInfo Camera_set_targetTexture_m290_MethodInfo;
extern "C" void Camera_set_targetTexture_m290 (Camera_t29 * __this, RenderTexture_t7 * ___value, MethodInfo* method)
{
	typedef void (*Camera_set_targetTexture_m290_ftn) (Camera_t29 *, RenderTexture_t7 *);
	static Camera_set_targetTexture_m290_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_targetTexture_m290_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_worldToCameraMatrix_m3380 (Camera_t29 * __this, Matrix4x4_t33 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_worldToCameraMatrix_m3380_ftn) (Camera_t29 *, Matrix4x4_t33 *);
	static Camera_INTERNAL_get_worldToCameraMatrix_m3380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_worldToCameraMatrix_m3380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern MethodInfo Camera_get_worldToCameraMatrix_m260_MethodInfo;
extern "C" Matrix4x4_t33  Camera_get_worldToCameraMatrix_m260 (Camera_t29 * __this, MethodInfo* method)
{
	Matrix4x4_t33  V_0 = {0};
	{
		Camera_INTERNAL_get_worldToCameraMatrix_m3380(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_worldToCameraMatrix_m3380_MethodInfo);
		Matrix4x4_t33  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m3381 (Camera_t29 * __this, Matrix4x4_t33 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_projectionMatrix_m3381_ftn) (Camera_t29 *, Matrix4x4_t33 *);
	static Camera_INTERNAL_get_projectionMatrix_m3381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_projectionMatrix_m3381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern MethodInfo Camera_get_projectionMatrix_m261_MethodInfo;
extern "C" Matrix4x4_t33  Camera_get_projectionMatrix_m261 (Camera_t29 * __this, MethodInfo* method)
{
	Matrix4x4_t33  V_0 = {0};
	{
		Camera_INTERNAL_get_projectionMatrix_m3381(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_projectionMatrix_m3381_MethodInfo);
		Matrix4x4_t33  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern MethodInfo Camera_get_clearFlags_m3382_MethodInfo;
extern "C" int32_t Camera_get_clearFlags_m3382 (Camera_t29 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m3382_ftn) (Camera_t29 *);
	static Camera_get_clearFlags_m3382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m3382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern MethodInfo Camera_set_clearFlags_m307_MethodInfo;
extern "C" void Camera_set_clearFlags_m307 (Camera_t29 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_clearFlags_m307_ftn) (Camera_t29 *, int32_t);
	static Camera_set_clearFlags_m307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_clearFlags_m307_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern MethodInfo Camera_WorldToViewportPoint_m342_MethodInfo;
extern "C" Vector3_t31  Camera_WorldToViewportPoint_m342 (Camera_t29 * __this, Vector3_t31  ___position, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Camera_INTERNAL_CALL_WorldToViewportPoint_m3383(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_WorldToViewportPoint_m3383_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t31  Camera_INTERNAL_CALL_WorldToViewportPoint_m3383 (Object_t * __this /* static, unused */, Camera_t29 * ___self, Vector3_t31 * ___position, MethodInfo* method)
{
	typedef Vector3_t31  (*Camera_INTERNAL_CALL_WorldToViewportPoint_m3383_ftn) (Camera_t29 *, Vector3_t31 *);
	static Camera_INTERNAL_CALL_WorldToViewportPoint_m3383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_WorldToViewportPoint_m3383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenToWorldPoint_m855_MethodInfo;
extern "C" Vector3_t31  Camera_ScreenToWorldPoint_m855 (Camera_t29 * __this, Vector3_t31  ___position, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Camera_INTERNAL_CALL_ScreenToWorldPoint_m3384(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenToWorldPoint_m3384_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t31  Camera_INTERNAL_CALL_ScreenToWorldPoint_m3384 (Object_t * __this /* static, unused */, Camera_t29 * ___self, Vector3_t31 * ___position, MethodInfo* method)
{
	typedef Vector3_t31  (*Camera_INTERNAL_CALL_ScreenToWorldPoint_m3384_ftn) (Camera_t29 *, Vector3_t31 *);
	static Camera_INTERNAL_CALL_ScreenToWorldPoint_m3384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToWorldPoint_m3384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenToViewportPoint_m2340_MethodInfo;
extern "C" Vector3_t31  Camera_ScreenToViewportPoint_m2340 (Camera_t29 * __this, Vector3_t31  ___position, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m3385(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenToViewportPoint_m3385_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t31  Camera_INTERNAL_CALL_ScreenToViewportPoint_m3385 (Object_t * __this /* static, unused */, Camera_t29 * ___self, Vector3_t31 * ___position, MethodInfo* method)
{
	typedef Vector3_t31  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m3385_ftn) (Camera_t29 *, Vector3_t31 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m3385_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m3385_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenPointToRay_m810_MethodInfo;
extern "C" Ray_t226  Camera_ScreenPointToRay_m810 (Camera_t29 * __this, Vector3_t31  ___position, MethodInfo* method)
{
	{
		Ray_t226  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m3386(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenPointToRay_m3386_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t226  Camera_INTERNAL_CALL_ScreenPointToRay_m3386 (Object_t * __this /* static, unused */, Camera_t29 * ___self, Vector3_t31 * ___position, MethodInfo* method)
{
	typedef Ray_t226  (*Camera_INTERNAL_CALL_ScreenPointToRay_m3386_ftn) (Camera_t29 *, Vector3_t31 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m3386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m3386_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern MethodInfo Camera_get_main_m808_MethodInfo;
extern "C" Camera_t29 * Camera_get_main_m808 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t29 * (*Camera_get_main_m808_ftn) ();
	static Camera_get_main_m808_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m808_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern MethodInfo Camera_get_allCamerasCount_m3387_MethodInfo;
extern "C" int32_t Camera_get_allCamerasCount_m3387 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m3387_ftn) ();
	static Camera_get_allCamerasCount_m3387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m3387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern MethodInfo Camera_GetAllCameras_m3388_MethodInfo;
extern "C" int32_t Camera_GetAllCameras_m3388 (Object_t * __this /* static, unused */, CameraU5BU5D_t689* ___cameras, MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m3388_ftn) (CameraU5BU5D_t689*);
	static Camera_GetAllCameras_m3388_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m3388_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreCull_m3389_MethodInfo;
extern "C" void Camera_FireOnPreCull_m3389 (Object_t * __this /* static, unused */, Camera_t29 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t688 * L_0 = ((Camera_t29_StaticFields*)InitializedTypeInfo(&Camera_t29_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t688 * L_1 = ((Camera_t29_StaticFields*)InitializedTypeInfo(&Camera_t29_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		Camera_t29 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t29 * >::Invoke(&CameraCallback_Invoke_m3373_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreRender_m3390_MethodInfo;
extern "C" void Camera_FireOnPreRender_m3390 (Object_t * __this /* static, unused */, Camera_t29 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t688 * L_0 = ((Camera_t29_StaticFields*)InitializedTypeInfo(&Camera_t29_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t688 * L_1 = ((Camera_t29_StaticFields*)InitializedTypeInfo(&Camera_t29_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		Camera_t29 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t29 * >::Invoke(&CameraCallback_Invoke_m3373_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPostRender_m3391_MethodInfo;
extern "C" void Camera_FireOnPostRender_m3391 (Object_t * __this /* static, unused */, Camera_t29 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t688 * L_0 = ((Camera_t29_StaticFields*)InitializedTypeInfo(&Camera_t29_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t688 * L_1 = ((Camera_t29_StaticFields*)InitializedTypeInfo(&Camera_t29_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		Camera_t29 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t29 * >::Invoke(&CameraCallback_Invoke_m3373_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)
extern MethodInfo Camera_RenderWithShader_m293_MethodInfo;
extern "C" void Camera_RenderWithShader_m293 (Camera_t29 * __this, Shader_t3 * ___shader, String_t* ___replacementTag, MethodInfo* method)
{
	typedef void (*Camera_RenderWithShader_m293_ftn) (Camera_t29 *, Shader_t3 *, String_t*);
	static Camera_RenderWithShader_m293_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_RenderWithShader_m293_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)");
	_il2cpp_icall_func(__this, ___shader, ___replacementTag);
}
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern MethodInfo Camera_CopyFrom_m306_MethodInfo;
extern "C" void Camera_CopyFrom_m306 (Camera_t29 * __this, Camera_t29 * ___other, MethodInfo* method)
{
	typedef void (*Camera_CopyFrom_m306_ftn) (Camera_t29 *, Camera_t29 *);
	static Camera_CopyFrom_m306_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_CopyFrom_m306_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::CopyFrom(UnityEngine.Camera)");
	_il2cpp_icall_func(__this, ___other);
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
extern MethodInfo Camera_get_depthTextureMode_m266_MethodInfo;
extern "C" int32_t Camera_get_depthTextureMode_m266 (Camera_t29 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_depthTextureMode_m266_ftn) (Camera_t29 *);
	static Camera_get_depthTextureMode_m266_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depthTextureMode_m266_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depthTextureMode()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
extern MethodInfo Camera_set_depthTextureMode_m267_MethodInfo;
extern "C" void Camera_set_depthTextureMode_m267 (Camera_t29 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_depthTextureMode_m267_ftn) (Camera_t29 *, int32_t);
	static Camera_set_depthTextureMode_m267_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_depthTextureMode_m267_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry_m3392_MethodInfo;
extern "C" GameObject_t28 * Camera_RaycastTry_m3392 (Camera_t29 * __this, Ray_t226  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t28 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m3393(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry_m3393_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t28 * Camera_INTERNAL_CALL_RaycastTry_m3393 (Object_t * __this /* static, unused */, Camera_t29 * ___self, Ray_t226 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t28 * (*Camera_INTERNAL_CALL_RaycastTry_m3393_ftn) (Camera_t29 *, Ray_t226 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m3393_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m3393_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry2D_m3394_MethodInfo;
extern "C" GameObject_t28 * Camera_RaycastTry2D_m3394 (Camera_t29 * __this, Ray_t226  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t28 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m3395(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry2D_m3395_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t28 * Camera_INTERNAL_CALL_RaycastTry2D_m3395 (Object_t * __this /* static, unused */, Camera_t29 * ___self, Ray_t226 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t28 * (*Camera_INTERNAL_CALL_RaycastTry2D_m3395_ftn) (Camera_t29 *, Ray_t226 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m3395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m3395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.ComputeBufferType
#include "UnityEngine_UnityEngine_ComputeBufferType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ComputeBufferType_t690_il2cpp_TypeInfo;
// UnityEngine.ComputeBufferType
#include "UnityEngine_UnityEngine_ComputeBufferTypeMethodDeclarations.h"



// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBuffer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ComputeBuffer_t49_il2cpp_TypeInfo;
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBufferMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Marshal_t804_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"
extern MethodInfo Object__ctor_m373_MethodInfo;
extern MethodInfo ComputeBuffer_InitBuffer_m3399_MethodInfo;
extern MethodInfo ComputeBuffer_Dispose_m3398_MethodInfo;
extern MethodInfo Object_Finalize_m410_MethodInfo;
extern MethodInfo GC_SuppressFinalize_m3887_MethodInfo;
extern MethodInfo ComputeBuffer_DestroyBuffer_m3400_MethodInfo;
extern MethodInfo ComputeBuffer_Dispose_m3397_MethodInfo;
extern MethodInfo Object_GetType_m2196_MethodInfo;
extern MethodInfo Type_GetElementType_m3888_MethodInfo;
extern MethodInfo Marshal_SizeOf_m3889_MethodInfo;
extern MethodInfo ComputeBuffer_InternalSetData_m3401_MethodInfo;


// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern MethodInfo ComputeBuffer__ctor_m337_MethodInfo;
extern "C" void ComputeBuffer__ctor_m337 (ComputeBuffer_t49 * __this, int32_t ___count, int32_t ___stride, int32_t ___type, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		IntPtr_t L_0 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		__this->___m_Ptr_0 = L_0;
		int32_t L_1 = ___count;
		int32_t L_2 = ___stride;
		int32_t L_3 = ___type;
		ComputeBuffer_InitBuffer_m3399(NULL /*static, unused*/, __this, L_1, L_2, L_3, /*hidden argument*/&ComputeBuffer_InitBuffer_m3399_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::Finalize()
extern MethodInfo ComputeBuffer_Finalize_m3396_MethodInfo;
extern "C" void ComputeBuffer_Finalize_m3396 (ComputeBuffer_t49 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		ComputeBuffer_Dispose_m3398(__this, 0, /*hidden argument*/&ComputeBuffer_Dispose_m3398_MethodInfo);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::Dispose()
extern "C" void ComputeBuffer_Dispose_m3397 (ComputeBuffer_t49 * __this, MethodInfo* method)
{
	{
		ComputeBuffer_Dispose_m3398(__this, 1, /*hidden argument*/&ComputeBuffer_Dispose_m3398_MethodInfo);
		GC_SuppressFinalize_m3887(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m3887_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::Dispose(System.Boolean)
extern "C" void ComputeBuffer_Dispose_m3398 (ComputeBuffer_t49 * __this, bool ___disposing, MethodInfo* method)
{
	{
		ComputeBuffer_DestroyBuffer_m3400(NULL /*static, unused*/, __this, /*hidden argument*/&ComputeBuffer_DestroyBuffer_m3400_MethodInfo);
		IntPtr_t L_0 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		__this->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C" void ComputeBuffer_InitBuffer_m3399 (Object_t * __this /* static, unused */, ComputeBuffer_t49 * ___buf, int32_t ___count, int32_t ___stride, int32_t ___type, MethodInfo* method)
{
	typedef void (*ComputeBuffer_InitBuffer_m3399_ftn) (ComputeBuffer_t49 *, int32_t, int32_t, int32_t);
	static ComputeBuffer_InitBuffer_m3399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_InitBuffer_m3399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)");
	_il2cpp_icall_func(___buf, ___count, ___stride, ___type);
}
// System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
extern "C" void ComputeBuffer_DestroyBuffer_m3400 (Object_t * __this /* static, unused */, ComputeBuffer_t49 * ___buf, MethodInfo* method)
{
	typedef void (*ComputeBuffer_DestroyBuffer_m3400_ftn) (ComputeBuffer_t49 *);
	static ComputeBuffer_DestroyBuffer_m3400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_DestroyBuffer_m3400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)");
	_il2cpp_icall_func(___buf);
}
// System.Void UnityEngine.ComputeBuffer::Release()
extern MethodInfo ComputeBuffer_Release_m336_MethodInfo;
extern "C" void ComputeBuffer_Release_m336 (ComputeBuffer_t49 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&ComputeBuffer_Dispose_m3397_MethodInfo, __this);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::SetData(System.Array)
extern MethodInfo ComputeBuffer_SetData_m338_MethodInfo;
extern "C" void ComputeBuffer_SetData_m338 (ComputeBuffer_t49 * __this, Array_t * ___data, MethodInfo* method)
{
	{
		Array_t * L_0 = ___data;
		Array_t * L_1 = ___data;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m2196(L_1, /*hidden argument*/&Object_GetType_m2196_MethodInfo);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m3888_MethodInfo, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Marshal_t804_il2cpp_TypeInfo));
		int32_t L_4 = Marshal_SizeOf_m3889(NULL /*static, unused*/, L_3, /*hidden argument*/&Marshal_SizeOf_m3889_MethodInfo);
		ComputeBuffer_InternalSetData_m3401(__this, L_0, L_4, /*hidden argument*/&ComputeBuffer_InternalSetData_m3401_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32)
extern "C" void ComputeBuffer_InternalSetData_m3401 (ComputeBuffer_t49 * __this, Array_t * ___data, int32_t ___elemSize, MethodInfo* method)
{
	typedef void (*ComputeBuffer_InternalSetData_m3401_ftn) (ComputeBuffer_t49 *, Array_t *, int32_t);
	static ComputeBuffer_InternalSetData_m3401_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_InternalSetData_m3401_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32)");
	_il2cpp_icall_func(__this, ___data, ___elemSize);
}
// System.Void UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)
extern MethodInfo ComputeBuffer_CopyCount_m346_MethodInfo;
extern "C" void ComputeBuffer_CopyCount_m346 (Object_t * __this /* static, unused */, ComputeBuffer_t49 * ___src, ComputeBuffer_t49 * ___dst, int32_t ___dstOffset, MethodInfo* method)
{
	typedef void (*ComputeBuffer_CopyCount_m346_ftn) (ComputeBuffer_t49 *, ComputeBuffer_t49 *, int32_t);
	static ComputeBuffer_CopyCount_m346_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ComputeBuffer_CopyCount_m346_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)");
	_il2cpp_icall_func(___src, ___dst, ___dstOffset);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Debug_t691_il2cpp_TypeInfo;
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"
extern MethodInfo Object_ToString_m442_MethodInfo;
extern MethodInfo Debug_Internal_Log_m3402_MethodInfo;
extern MethodInfo Debug_Internal_LogException_m3403_MethodInfo;


// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m3402 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t93 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m3402_ftn) (int32_t, String_t*, Object_t93 *);
	static Debug_Internal_Log_m3402_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m3402_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m3403 (Object_t * __this /* static, unused */, Exception_t234 * ___exception, Object_t93 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m3403_ftn) (Exception_t234 *, Object_t93 *);
	static Debug_Internal_LogException_m3403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m3403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern MethodInfo Debug_Log_m380_MethodInfo;
extern "C" void Debug_Log_m380 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m442_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral355;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m3402(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t93 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3402_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern MethodInfo Debug_LogError_m331_MethodInfo;
extern "C" void Debug_LogError_m331 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m442_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral355;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m3402(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t93 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3402_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogError_m2395_MethodInfo;
extern "C" void Debug_LogError_m2395 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t93 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m442_MethodInfo, L_0);
		Object_t93 * L_2 = ___context;
		Debug_Internal_Log_m3402(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m3402_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern MethodInfo Debug_LogException_m3404_MethodInfo;
extern "C" void Debug_LogException_m3404 (Object_t * __this /* static, unused */, Exception_t234 * ___exception, MethodInfo* method)
{
	{
		Exception_t234 * L_0 = ___exception;
		Debug_Internal_LogException_m3403(NULL /*static, unused*/, L_0, (Object_t93 *)NULL, /*hidden argument*/&Debug_Internal_LogException_m3403_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern MethodInfo Debug_LogException_m2269_MethodInfo;
extern "C" void Debug_LogException_m2269 (Object_t * __this /* static, unused */, Exception_t234 * ___exception, Object_t93 * ___context, MethodInfo* method)
{
	{
		Exception_t234 * L_0 = ___exception;
		Object_t93 * L_1 = ___context;
		Debug_Internal_LogException_m3403(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Debug_Internal_LogException_m3403_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern MethodInfo Debug_LogWarning_m329_MethodInfo;
extern "C" void Debug_LogWarning_m329 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m442_MethodInfo, L_0);
		Debug_Internal_Log_m3402(NULL /*static, unused*/, 1, L_1, (Object_t93 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3402_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogWarning_m378_MethodInfo;
extern "C" void Debug_LogWarning_m378 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t93 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m442_MethodInfo, L_0);
		Object_t93 * L_2 = ___context;
		Debug_Internal_Log_m3402(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m3402_MethodInfo);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DisplaysUpdatedDelegate_t692_il2cpp_TypeInfo;
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo DisplaysUpdatedDelegate__ctor_m3405_MethodInfo;
extern "C" void DisplaysUpdatedDelegate__ctor_m3405 (DisplaysUpdatedDelegate_t692 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern MethodInfo DisplaysUpdatedDelegate_Invoke_m3406_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_Invoke_m3406 (DisplaysUpdatedDelegate_t692 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m3406((DisplaysUpdatedDelegate_t692 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t692(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DisplaysUpdatedDelegate_BeginInvoke_m3407_MethodInfo;
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m3407 (DisplaysUpdatedDelegate_t692 * __this, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo DisplaysUpdatedDelegate_EndInvoke_m3408_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m3408 (DisplaysUpdatedDelegate_t692 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Display_t694_il2cpp_TypeInfo;
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo DisplayU5BU5D_t693_il2cpp_TypeInfo;
extern TypeInfo Vector3_t31_il2cpp_TypeInfo;
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern Il2CppType DisplayU5BU5D_t693_0_0_0;
extern MethodInfo Display_GetRenderingExtImpl_m3430_MethodInfo;
extern MethodInfo Display_GetSystemExtImpl_m3429_MethodInfo;
extern MethodInfo Display_GetRenderingBuffersImpl_m3431_MethodInfo;
extern MethodInfo IntPtr__ctor_m3890_MethodInfo;
extern MethodInfo Display__ctor_m3409_MethodInfo;
extern MethodInfo Delegate_Combine_m2321_MethodInfo;
extern MethodInfo Delegate_Remove_m2322_MethodInfo;
extern MethodInfo Display_ActivateDisplayImpl_m3433_MethodInfo;
extern MethodInfo Display_SetParamsImpl_m3434_MethodInfo;
extern MethodInfo Display_SetRenderingResolutionImpl_m3432_MethodInfo;
extern MethodInfo Display_MultiDisplayLicenseImpl_m3435_MethodInfo;
extern MethodInfo Display_RelativeMouseAtImpl_m3436_MethodInfo;
extern MethodInfo Display__ctor_m3410_MethodInfo;


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m3409 (Display_t694 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m3890(&L_0, 0, /*hidden argument*/&IntPtr__ctor_m3890_MethodInfo);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m3410 (Display_t694 * __this, IntPtr_t ___nativeDisplay, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern MethodInfo Display__cctor_m3411_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t693_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m3411 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Display__cctor_m3411_init;
	if (!Display__cctor_m3411_init)
	{
		DisplayU5BU5D_t693_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t693_0_0_0);
		Display__cctor_m3411_init = true;
	}
	{
		DisplayU5BU5D_t693* L_0 = ((DisplayU5BU5D_t693*)SZArrayNew(DisplayU5BU5D_t693_il2cpp_TypeInfo_var, 1));
		Display_t694 * L_1 = (Display_t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display__ctor_m3409(L_1, /*hidden argument*/&Display__ctor_m3409_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t694 **)(Display_t694 **)SZArrayLdElema(L_0, 0)) = (Display_t694 *)L_1;
		((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t693* L_2 = ((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t694 **)(Display_t694 **)SZArrayLdElema(L_2, L_3));
		((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t692 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_add_onDisplaysUpdated_m3412_MethodInfo;
extern "C" void Display_add_onDisplaysUpdated_m3412 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t692 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t692 * L_0 = ((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t692 * L_1 = ___value;
		Delegate_t493 * L_2 = Delegate_Combine_m2321(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t692 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t692_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_remove_onDisplaysUpdated_m3413_MethodInfo;
extern "C" void Display_remove_onDisplaysUpdated_m3413 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t692 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t692 * L_0 = ((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t692 * L_1 = ___value;
		Delegate_t493 * L_2 = Delegate_Remove_m2322(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m2322_MethodInfo);
		((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t692 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t692_il2cpp_TypeInfo)));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern MethodInfo Display_get_renderingWidth_m3414_MethodInfo;
extern "C" int32_t Display_get_renderingWidth_m3414 (Display_t694 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m3430(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m3430_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern MethodInfo Display_get_renderingHeight_m3415_MethodInfo;
extern "C" int32_t Display_get_renderingHeight_m3415 (Display_t694 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m3430(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m3430_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern MethodInfo Display_get_systemWidth_m3416_MethodInfo;
extern "C" int32_t Display_get_systemWidth_m3416 (Display_t694 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m3429(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m3429_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern MethodInfo Display_get_systemHeight_m3417_MethodInfo;
extern "C" int32_t Display_get_systemHeight_m3417 (Display_t694 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m3429(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m3429_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern MethodInfo Display_get_colorBuffer_m3418_MethodInfo;
extern "C" RenderBuffer_t634  Display_get_colorBuffer_m3418 (Display_t694 * __this, MethodInfo* method)
{
	RenderBuffer_t634  V_0 = {0};
	RenderBuffer_t634  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m3431(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m3431_MethodInfo);
		RenderBuffer_t634  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern MethodInfo Display_get_depthBuffer_m3419_MethodInfo;
extern "C" RenderBuffer_t634  Display_get_depthBuffer_m3419 (Display_t694 * __this, MethodInfo* method)
{
	RenderBuffer_t634  V_0 = {0};
	RenderBuffer_t634  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m3431(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m3431_MethodInfo);
		RenderBuffer_t634  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern MethodInfo Display_Activate_m3420_MethodInfo;
extern "C" void Display_Activate_m3420 (Display_t694 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m3433(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/&Display_ActivateDisplayImpl_m3433_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_Activate_m3421_MethodInfo;
extern "C" void Display_Activate_m3421 (Display_t694 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m3433(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Display_ActivateDisplayImpl_m3433_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_SetParams_m3422_MethodInfo;
extern "C" void Display_SetParams_m3422 (Display_t694 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display_SetParamsImpl_m3434(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Display_SetParamsImpl_m3434_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern MethodInfo Display_SetRenderingResolution_m3423_MethodInfo;
extern "C" void Display_SetRenderingResolution_m3423 (Display_t694 * __this, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display_SetRenderingResolutionImpl_m3432(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Display_SetRenderingResolutionImpl_m3432_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern MethodInfo Display_MultiDisplayLicense_m3424_MethodInfo;
extern "C" bool Display_MultiDisplayLicense_m3424 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		bool L_0 = Display_MultiDisplayLicenseImpl_m3435(NULL /*static, unused*/, /*hidden argument*/&Display_MultiDisplayLicenseImpl_m3435_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern MethodInfo Display_RelativeMouseAt_m3425_MethodInfo;
extern "C" Vector3_t31  Display_RelativeMouseAt_m3425 (Object_t * __this /* static, unused */, Vector3_t31  ___inputMouseCoordinates, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		int32_t L_4 = Display_RelativeMouseAtImpl_m3436(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/&Display_RelativeMouseAtImpl_m3436_MethodInfo);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t31  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern MethodInfo Display_get_main_m3426_MethodInfo;
extern "C" Display_t694 * Display_get_main_m3426 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display_t694 * L_0 = ((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern MethodInfo Display_RecreateDisplayList_m3427_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t693_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m3427 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t695* ___nativeDisplay, MethodInfo* method)
{
	static bool Display_RecreateDisplayList_m3427_init;
	if (!Display_RecreateDisplayList_m3427_init)
	{
		DisplayU5BU5D_t693_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t693_0_0_0);
		Display_RecreateDisplayList_m3427_init = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t695* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___displays_1 = ((DisplayU5BU5D_t693*)SZArrayNew(DisplayU5BU5D_t693_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		DisplayU5BU5D_t693* L_1 = ((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t695* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t694 * L_6 = (Display_t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		Display__ctor_m3410(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&Display__ctor_m3410_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t694 **)(Display_t694 **)SZArrayLdElema(L_1, L_2)) = (Display_t694 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t695* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		DisplayU5BU5D_t693* L_10 = ((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t694 **)(Display_t694 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern MethodInfo Display_FireDisplaysUpdated_m3428_MethodInfo;
extern "C" void Display_FireDisplaysUpdated_m3428 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t692 * L_0 = ((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t692 * L_1 = ((Display_t694_StaticFields*)InitializedTypeInfo(&Display_t694_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&DisplaysUpdatedDelegate_Invoke_m3406_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m3429 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m3429_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m3429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m3429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m3430 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m3430_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m3430_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m3430_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m3431 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t634 * ___color, RenderBuffer_t634 * ___depth, MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m3431_ftn) (IntPtr_t, RenderBuffer_t634 *, RenderBuffer_t634 *);
	static Display_GetRenderingBuffersImpl_m3431_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m3431_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m3432 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m3432_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m3432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m3432_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m3433 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m3433_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m3433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m3433_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m3434 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m3434_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m3434_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m3434_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m3435 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m3435_ftn) ();
	static Display_MultiDisplayLicenseImpl_m3435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m3435_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m3436 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m3436_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m3436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m3436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoBehaviour_t24_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern MethodInfo MonoBehaviour_StartCoroutine_Auto_m3437_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3439_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutine_Auto_m3440_MethodInfo;


// System.Void UnityEngine.MonoBehaviour::.ctor()
extern MethodInfo MonoBehaviour__ctor_m248_MethodInfo;
extern "C" void MonoBehaviour__ctor_m248 (MonoBehaviour_t24 * __this, MethodInfo* method)
{
	{
		Behaviour__ctor_m3371(__this, /*hidden argument*/&Behaviour__ctor_m3371_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern MethodInfo MonoBehaviour_Invoke_m907_MethodInfo;
extern "C" void MonoBehaviour_Invoke_m907 (MonoBehaviour_t24 * __this, String_t* ___methodName, float ___time, MethodInfo* method)
{
	typedef void (*MonoBehaviour_Invoke_m907_ftn) (MonoBehaviour_t24 *, String_t*, float);
	static MonoBehaviour_Invoke_m907_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_Invoke_m907_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___methodName, ___time);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StartCoroutine_m840_MethodInfo;
extern "C" Coroutine_t390 * MonoBehaviour_StartCoroutine_m840 (MonoBehaviour_t24 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t390 * L_1 = MonoBehaviour_StartCoroutine_Auto_m3437(__this, L_0, /*hidden argument*/&MonoBehaviour_StartCoroutine_Auto_m3437_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t390 * MonoBehaviour_StartCoroutine_Auto_m3437 (MonoBehaviour_t24 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef Coroutine_t390 * (*MonoBehaviour_StartCoroutine_Auto_m3437_ftn) (MonoBehaviour_t24 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m3437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m3437_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StopCoroutine_m3438_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m3438 (MonoBehaviour_t24 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3439(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3439_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern MethodInfo MonoBehaviour_StopCoroutine_m2515_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m2515 (MonoBehaviour_t24 * __this, Coroutine_t390 * ___routine, MethodInfo* method)
{
	{
		Coroutine_t390 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m3440(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutine_Auto_m3440_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3439 (MonoBehaviour_t24 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3439_ftn) (MonoBehaviour_t24 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3439_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3439_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m3440 (MonoBehaviour_t24 * __this, Coroutine_t390 * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m3440_ftn) (MonoBehaviour_t24 *, Coroutine_t390 *);
	static MonoBehaviour_StopCoroutine_Auto_m3440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m3440_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern MethodInfo MonoBehaviour_StopAllCoroutines_m843_MethodInfo;
extern "C" void MonoBehaviour_StopAllCoroutines_m843 (MonoBehaviour_t24 * __this, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopAllCoroutines_m843_ftn) (MonoBehaviour_t24 *);
	static MonoBehaviour_StopAllCoroutines_m843_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopAllCoroutines_m843_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopAllCoroutines()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern MethodInfo MonoBehaviour_print_m864_MethodInfo;
extern "C" void MonoBehaviour_print_m864 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		Debug_Log_m380(NULL /*static, unused*/, L_0, /*hidden argument*/&Debug_Log_m380_MethodInfo);
		return;
	}
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchPhase_t696_il2cpp_TypeInfo;
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IMECompositionMode_t697_il2cpp_TypeInfo;
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Touch_t314_il2cpp_TypeInfo;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// System.Int32 UnityEngine.Touch::get_fingerId()
extern MethodInfo Touch_get_fingerId_m2189_MethodInfo;
extern "C" int32_t Touch_get_fingerId_m2189 (Touch_t314 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern MethodInfo Touch_get_position_m2191_MethodInfo;
extern "C" Vector2_t62  Touch_get_position_m2191 (Touch_t314 * __this, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern MethodInfo Touch_get_phase_m2190_MethodInfo;
extern "C" int32_t Touch_get_phase_m2190 (Touch_t314 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t314_marshal(const Touch_t314& unmarshaled, Touch_t314_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t314_marshal_back(const Touch_t314_marshaled& marshaled, Touch_t314& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void Touch_t314_marshal_cleanup(Touch_t314_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Input_t224_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"

extern MethodInfo Input_get_touchSupported_m2231_MethodInfo;
extern MethodInfo Input_INTERNAL_set_compositionCursorPos_m3442_MethodInfo;


// System.Void UnityEngine.Input::.cctor()
extern MethodInfo Input__cctor_m3441_MethodInfo;
extern "C" void Input__cctor_m3441 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern MethodInfo Input_GetAxisRaw_m2214_MethodInfo;
extern "C" float Input_GetAxisRaw_m2214 (Object_t * __this /* static, unused */, String_t* ___axisName, MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m2214_ftn) (String_t*);
	static Input_GetAxisRaw_m2214_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m2214_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern MethodInfo Input_GetButtonDown_m2213_MethodInfo;
extern "C" bool Input_GetButtonDown_m2213 (Object_t * __this /* static, unused */, String_t* ___buttonName, MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m2213_ftn) (String_t*);
	static Input_GetButtonDown_m2213_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m2213_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern MethodInfo Input_GetMouseButton_m811_MethodInfo;
extern "C" bool Input_GetMouseButton_m811 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m811_ftn) (int32_t);
	static Input_GetMouseButton_m811_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m811_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern MethodInfo Input_GetMouseButtonDown_m838_MethodInfo;
extern "C" bool Input_GetMouseButtonDown_m838 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m838_ftn) (int32_t);
	static Input_GetMouseButtonDown_m838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern MethodInfo Input_GetMouseButtonUp_m2193_MethodInfo;
extern "C" bool Input_GetMouseButtonUp_m2193 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m2193_ftn) (int32_t);
	static Input_GetMouseButtonUp_m2193_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m2193_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern MethodInfo Input_get_mousePosition_m809_MethodInfo;
extern "C" Vector3_t31  Input_get_mousePosition_m809 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t31  (*Input_get_mousePosition_m809_ftn) ();
	static Input_get_mousePosition_m809_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m809_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern MethodInfo Input_get_mouseScrollDelta_m2194_MethodInfo;
extern "C" Vector2_t62  Input_get_mouseScrollDelta_m2194 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector2_t62  (*Input_get_mouseScrollDelta_m2194_ftn) ();
	static Input_get_mouseScrollDelta_m2194_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m2194_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern MethodInfo Input_get_mousePresent_m2212_MethodInfo;
extern "C" bool Input_get_mousePresent_m2212 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t224_il2cpp_TypeInfo));
		bool L_0 = Input_get_touchSupported_m2231(NULL /*static, unused*/, /*hidden argument*/&Input_get_touchSupported_m2231_MethodInfo);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Input::get_anyKey()
extern MethodInfo Input_get_anyKey_m801_MethodInfo;
extern "C" bool Input_get_anyKey_m801 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Input_get_anyKey_m801_ftn) ();
	static Input_get_anyKey_m801_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_anyKey_m801_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_anyKey()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_anyKeyDown()
extern MethodInfo Input_get_anyKeyDown_m800_MethodInfo;
extern "C" bool Input_get_anyKeyDown_m800 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Input_get_anyKeyDown_m800_ftn) ();
	static Input_get_anyKeyDown_m800_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_anyKeyDown_m800_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_anyKeyDown()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern MethodInfo Input_GetTouch_m2232_MethodInfo;
extern "C" Touch_t314  Input_GetTouch_m2232 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	typedef Touch_t314  (*Input_GetTouch_m2232_ftn) (int32_t);
	static Input_GetTouch_m2232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m2232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern MethodInfo Input_get_touchCount_m2233_MethodInfo;
extern "C" int32_t Input_get_touchCount_m2233 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m2233_ftn) ();
	static Input_get_touchCount_m2233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m2233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m2231 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern MethodInfo Input_set_imeCompositionMode_m2491_MethodInfo;
extern "C" void Input_set_imeCompositionMode_m2491 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m2491_ftn) (int32_t);
	static Input_set_imeCompositionMode_m2491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m2491_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern MethodInfo Input_get_compositionString_m2414_MethodInfo;
extern "C" String_t* Input_get_compositionString_m2414 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m2414_ftn) ();
	static Input_get_compositionString_m2414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m2414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m3442 (Object_t * __this /* static, unused */, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m3442_ftn) (Vector2_t62 *);
	static Input_INTERNAL_set_compositionCursorPos_m3442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m3442_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern MethodInfo Input_set_compositionCursorPos_m2479_MethodInfo;
extern "C" void Input_set_compositionCursorPos_m2479 (Object_t * __this /* static, unused */, Vector2_t62  ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t224_il2cpp_TypeInfo));
		Input_INTERNAL_set_compositionCursorPos_m3442(NULL /*static, unused*/, (&___value), /*hidden argument*/&Input_INTERNAL_set_compositionCursorPos_m3442_MethodInfo);
		return;
	}
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HideFlags_t698_il2cpp_TypeInfo;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo Object_t93_il2cpp_TypeInfo;
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"

// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo ArgumentException_t514_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo Object_Destroy_m3445_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m3446_MethodInfo;
extern MethodInfo Object_CompareBaseObjects_m3447_MethodInfo;
extern MethodInfo Object_GetInstanceID_m3449_MethodInfo;
extern MethodInfo Object_IsNativeObjectAlive_m3448_MethodInfo;
extern MethodInfo Object_GetCachedPtr_m3450_MethodInfo;
extern MethodInfo IntPtr_op_Inequality_m3891_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2604_MethodInfo;


// System.Void UnityEngine.Object::.ctor()
extern MethodInfo Object__ctor_m3443_MethodInfo;
extern "C" void Object__ctor_m3443 (Object_t93 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern MethodInfo Object_Internal_CloneSingle_m3444_MethodInfo;
extern "C" Object_t93 * Object_Internal_CloneSingle_m3444 (Object_t * __this /* static, unused */, Object_t93 * ___data, MethodInfo* method)
{
	typedef Object_t93 * (*Object_Internal_CloneSingle_m3444_ftn) (Object_t93 *);
	static Object_Internal_CloneSingle_m3444_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m3444_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m3445 (Object_t * __this /* static, unused */, Object_t93 * ___obj, float ___t, MethodInfo* method)
{
	typedef void (*Object_Destroy_m3445_ftn) (Object_t93 *, float);
	static Object_Destroy_m3445_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m3445_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern MethodInfo Object_Destroy_m852_MethodInfo;
extern "C" void Object_Destroy_m852 (Object_t * __this /* static, unused */, Object_t93 * ___obj, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t93 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m3445(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_Destroy_m3445_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m3446 (Object_t * __this /* static, unused */, Object_t93 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m3446_ftn) (Object_t93 *, bool);
	static Object_DestroyImmediate_m3446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m3446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern MethodInfo Object_DestroyImmediate_m212_MethodInfo;
extern "C" void Object_DestroyImmediate_m212 (Object_t * __this /* static, unused */, Object_t93 * ___obj, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t93 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m3446(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_DestroyImmediate_m3446_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Object::get_name()
extern MethodInfo Object_get_name_m295_MethodInfo;
extern "C" String_t* Object_get_name_m295 (Object_t93 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m295_ftn) (Object_t93 *);
	static Object_get_name_m295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m295_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern MethodInfo Object_set_name_m2582_MethodInfo;
extern "C" void Object_set_name_m2582 (Object_t93 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*Object_set_name_m2582_ftn) (Object_t93 *, String_t*);
	static Object_set_name_m2582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m2582_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern MethodInfo Object_DontDestroyOnLoad_m862_MethodInfo;
extern "C" void Object_DontDestroyOnLoad_m862 (Object_t * __this /* static, unused */, Object_t93 * ___target, MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m862_ftn) (Object_t93 *);
	static Object_DontDestroyOnLoad_m862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern MethodInfo Object_set_hideFlags_m247_MethodInfo;
extern "C" void Object_set_hideFlags_m247 (Object_t93 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m247_ftn) (Object_t93 *, int32_t);
	static Object_set_hideFlags_m247_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m247_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern MethodInfo Object_ToString_m384_MethodInfo;
extern "C" String_t* Object_ToString_m384 (Object_t93 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m384_ftn) (Object_t93 *);
	static Object_ToString_m384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern MethodInfo Object_Equals_m432_MethodInfo;
extern "C" bool Object_Equals_m432 (Object_t93 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m3447(NULL /*static, unused*/, __this, ((Object_t93 *)IsInst(L_0, InitializedTypeInfo(&Object_t93_il2cpp_TypeInfo))), /*hidden argument*/&Object_CompareBaseObjects_m3447_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern MethodInfo Object_GetHashCode_m433_MethodInfo;
extern "C" int32_t Object_GetHashCode_m433 (Object_t93 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m3449(__this, /*hidden argument*/&Object_GetInstanceID_m3449_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m3447 (Object_t * __this /* static, unused */, Object_t93 * ___lhs, Object_t93 * ___rhs, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t93 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t93 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t93 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t93 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t93 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m3448(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_IsNativeObjectAlive_m3448_MethodInfo);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t93 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m3448(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_IsNativeObjectAlive_m3448_MethodInfo);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t93 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t93 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m3448 (Object_t * __this /* static, unused */, Object_t93 * ___o, MethodInfo* method)
{
	{
		Object_t93 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m3450(L_0, /*hidden argument*/&Object_GetCachedPtr_m3450_MethodInfo);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m3891(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&IntPtr_op_Inequality_m3891_MethodInfo);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m3449 (Object_t93 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m3450 (Object_t93 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern MethodInfo Object_CheckNullArgument_m3451_MethodInfo;
extern "C" void Object_CheckNullArgument_m3451 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t514 * L_2 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_2, L_1, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern MethodInfo Object_op_Implicit_m211_MethodInfo;
extern "C" bool Object_op_Implicit_m211 (Object_t * __this /* static, unused */, Object_t93 * ___exists, MethodInfo* method)
{
	{
		Object_t93 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m3447(NULL /*static, unused*/, L_0, (Object_t93 *)NULL, /*hidden argument*/&Object_CompareBaseObjects_m3447_MethodInfo);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Equality_m243_MethodInfo;
extern "C" bool Object_op_Equality_m243 (Object_t * __this /* static, unused */, Object_t93 * ___x, Object_t93 * ___y, MethodInfo* method)
{
	{
		Object_t93 * L_0 = ___x;
		Object_t93 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m3447(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m3447_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Inequality_m225_MethodInfo;
extern "C" bool Object_op_Inequality_m225 (Object_t * __this /* static, unused */, Object_t93 * ___x, Object_t93 * ___y, MethodInfo* method)
{
	{
		Object_t93 * L_0 = ___x;
		Object_t93 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m3447(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m3447_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t93_marshal(const Object_t93& unmarshaled, Object_t93_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = unmarshaled.___m_CachedPtr_1;
}
void Object_t93_marshal_back(const Object_t93_marshaled& marshaled, Object_t93& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	unmarshaled.___m_CachedPtr_1 = marshaled.___m_CachedPtr_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t93_marshal_cleanup(Object_t93_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Component_t95_il2cpp_TypeInfo;

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_10.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern MethodInfo Component_get_gameObject_m264_MethodInfo;
extern MethodInfo GameObject_get_tag_m879_MethodInfo;
extern MethodInfo GameObject_GetComponent_m3455_MethodInfo;
extern MethodInfo Component_GetComponentsForListInternal_m3454_MethodInfo;


// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m3452 (Component_t95 * __this, MethodInfo* method)
{
	{
		Object__ctor_m3443(__this, /*hidden argument*/&Object__ctor_m3443_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern MethodInfo Component_get_transform_m279_MethodInfo;
extern "C" Transform_t48 * Component_get_transform_m279 (Component_t95 * __this, MethodInfo* method)
{
	typedef Transform_t48 * (*Component_get_transform_m279_ftn) (Component_t95 *);
	static Component_get_transform_m279_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m279_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t28 * Component_get_gameObject_m264 (Component_t95 * __this, MethodInfo* method)
{
	typedef GameObject_t28 * (*Component_get_gameObject_m264_ftn) (Component_t95 *);
	static Component_get_gameObject_m264_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m264_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern MethodInfo Component_GetComponent_m2636_MethodInfo;
extern "C" Component_t95 * Component_GetComponent_m2636 (Component_t95 * __this, Type_t * ___type, MethodInfo* method)
{
	{
		GameObject_t28 * L_0 = Component_get_gameObject_m264(__this, /*hidden argument*/&Component_get_gameObject_m264_MethodInfo);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t95 * L_2 = GameObject_GetComponent_m3455(L_0, L_1, /*hidden argument*/&GameObject_GetComponent_m3455_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo Component_GetComponentFastPath_m3453_MethodInfo;
extern "C" void Component_GetComponentFastPath_m3453 (Component_t95 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m3453_ftn) (Component_t95 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m3453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m3453_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m3454 (Component_t95 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m3454_ftn) (Component_t95 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m3454_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m3454_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern MethodInfo Component_GetComponents_m2292_MethodInfo;
extern "C" void Component_GetComponents_m2292 (Component_t95 * __this, Type_t * ___type, List_1_t454 * ___results, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t454 * L_1 = ___results;
		Component_GetComponentsForListInternal_m3454(__this, L_0, L_1, /*hidden argument*/&Component_GetComponentsForListInternal_m3454_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Component::get_tag()
extern MethodInfo Component_get_tag_m906_MethodInfo;
extern "C" String_t* Component_get_tag_m906 (Component_t95 * __this, MethodInfo* method)
{
	{
		GameObject_t28 * L_0 = Component_get_gameObject_m264(__this, /*hidden argument*/&Component_get_gameObject_m264_MethodInfo);
		NullCheck(L_0);
		String_t* L_1 = GameObject_get_tag_m879(L_0, /*hidden argument*/&GameObject_get_tag_m879_MethodInfo);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GameObject_t28_il2cpp_TypeInfo;

// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern MethodInfo GameObject_Internal_CreateGameObject_m3461_MethodInfo;
extern MethodInfo GameObject_AddComponent_m3460_MethodInfo;
extern MethodInfo GameObject_Internal_AddComponentWithType_m3459_MethodInfo;


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern MethodInfo GameObject__ctor_m2461_MethodInfo;
extern "C" void GameObject__ctor_m2461 (GameObject_t28 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Object__ctor_m3443(__this, /*hidden argument*/&Object__ctor_m3443_MethodInfo);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m3461(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&GameObject_Internal_CreateGameObject_m3461_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern MethodInfo GameObject__ctor_m299_MethodInfo;
extern "C" void GameObject__ctor_m299 (GameObject_t28 * __this, String_t* ___name, TypeU5BU5D_t97* ___components, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t97* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m3443(__this, /*hidden argument*/&Object__ctor_m3443_MethodInfo);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m3461(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&GameObject_Internal_CreateGameObject_m3461_MethodInfo);
		TypeU5BU5D_t97* L_1 = ___components;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0026;
	}

IL_0016:
	{
		TypeU5BU5D_t97* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		GameObject_AddComponent_m3460(__this, L_5, /*hidden argument*/&GameObject_AddComponent_m3460_MethodInfo);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		TypeU5BU5D_t97* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t95 * GameObject_GetComponent_m3455 (GameObject_t28 * __this, Type_t * ___type, MethodInfo* method)
{
	typedef Component_t95 * (*GameObject_GetComponent_m3455_ftn) (GameObject_t28 *, Type_t *);
	static GameObject_GetComponent_m3455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m3455_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo GameObject_GetComponentFastPath_m3456_MethodInfo;
extern "C" void GameObject_GetComponentFastPath_m3456 (GameObject_t28 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m3456_ftn) (GameObject_t28 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m3456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m3456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern MethodInfo GameObject_GetComponentsInternal_m3457_MethodInfo;
extern "C" Array_t * GameObject_GetComponentsInternal_m3457 (GameObject_t28 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m3457_ftn) (GameObject_t28 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m3457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m3457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern MethodInfo GameObject_get_transform_m300_MethodInfo;
extern "C" Transform_t48 * GameObject_get_transform_m300 (GameObject_t28 * __this, MethodInfo* method)
{
	typedef Transform_t48 * (*GameObject_get_transform_m300_ftn) (GameObject_t28 *);
	static GameObject_get_transform_m300_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m300_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern MethodInfo GameObject_get_layer_m2464_MethodInfo;
extern "C" int32_t GameObject_get_layer_m2464 (GameObject_t28 * __this, MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m2464_ftn) (GameObject_t28 *);
	static GameObject_get_layer_m2464_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m2464_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern MethodInfo GameObject_set_layer_m2465_MethodInfo;
extern "C" void GameObject_set_layer_m2465 (GameObject_t28 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m2465_ftn) (GameObject_t28 *, int32_t);
	static GameObject_set_layer_m2465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m2465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern MethodInfo GameObject_SetActive_m763_MethodInfo;
extern "C" void GameObject_SetActive_m763 (GameObject_t28 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m763_ftn) (GameObject_t28 *, bool);
	static GameObject_SetActive_m763_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m763_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern MethodInfo GameObject_get_activeSelf_m764_MethodInfo;
extern "C" bool GameObject_get_activeSelf_m764 (GameObject_t28 * __this, MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m764_ftn) (GameObject_t28 *);
	static GameObject_get_activeSelf_m764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern MethodInfo GameObject_get_activeInHierarchy_m265_MethodInfo;
extern "C" bool GameObject_get_activeInHierarchy_m265 (GameObject_t28 * __this, MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m265_ftn) (GameObject_t28 *);
	static GameObject_get_activeInHierarchy_m265_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m265_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.GameObject::get_tag()
extern "C" String_t* GameObject_get_tag_m879 (GameObject_t28 * __this, MethodInfo* method)
{
	typedef String_t* (*GameObject_get_tag_m879_ftn) (GameObject_t28 *);
	static GameObject_get_tag_m879_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_tag_m879_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern MethodInfo GameObject_SendMessage_m3458_MethodInfo;
extern "C" void GameObject_SendMessage_m3458 (GameObject_t28 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m3458_ftn) (GameObject_t28 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m3458_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m3458_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t95 * GameObject_Internal_AddComponentWithType_m3459 (GameObject_t28 * __this, Type_t * ___componentType, MethodInfo* method)
{
	typedef Component_t95 * (*GameObject_Internal_AddComponentWithType_m3459_ftn) (GameObject_t28 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m3459_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m3459_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t95 * GameObject_AddComponent_m3460 (GameObject_t28 * __this, Type_t * ___componentType, MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t95 * L_1 = GameObject_Internal_AddComponentWithType_m3459(__this, L_0, /*hidden argument*/&GameObject_Internal_AddComponentWithType_m3459_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m3461 (Object_t * __this /* static, unused */, GameObject_t28 * ___mono, String_t* ___name, MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m3461_ftn) (GameObject_t28 *, String_t*);
	static GameObject_Internal_CreateGameObject_m3461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m3461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern MethodInfo GameObject_Find_m297_MethodInfo;
extern "C" GameObject_t28 * GameObject_Find_m297 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef GameObject_t28 * (*GameObject_Find_m297_ftn) (String_t*);
	static GameObject_Find_m297_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Find_m297_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t699_il2cpp_TypeInfo;
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern MethodInfo Transform_GetChild_m2640_MethodInfo;
extern MethodInfo Transform_get_childCount_m2643_MethodInfo;


// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern MethodInfo Enumerator__ctor_m3462_MethodInfo;
extern "C" void Enumerator__ctor_m3462 (Enumerator_t699 * __this, Transform_t48 * ___outer, MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		Transform_t48 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern MethodInfo Enumerator_get_Current_m3463_MethodInfo;
extern "C" Object_t * Enumerator_get_Current_m3463 (Enumerator_t699 * __this, MethodInfo* method)
{
	{
		Transform_t48 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t48 * L_2 = Transform_GetChild_m2640(L_0, L_1, /*hidden argument*/&Transform_GetChild_m2640_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern MethodInfo Enumerator_MoveNext_m3464_MethodInfo;
extern "C" bool Enumerator_MoveNext_m3464 (Enumerator_t699 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t48 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m2643(L_0, /*hidden argument*/&Transform_get_childCount_m2643_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_t48_il2cpp_TypeInfo;

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
extern TypeInfo RectTransform_t345_il2cpp_TypeInfo;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern MethodInfo Transform_INTERNAL_get_position_m3465_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_position_m3466_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localPosition_m3467_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localPosition_m3468_MethodInfo;
extern MethodInfo Transform_get_rotation_m302_MethodInfo;
extern MethodInfo Quaternion_get_eulerAngles_m3226_MethodInfo;
extern MethodInfo Quaternion_Euler_m3227_MethodInfo;
extern MethodInfo Transform_set_rotation_m303_MethodInfo;
extern MethodInfo Vector3_get_right_m2563_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m2346_MethodInfo;
extern MethodInfo Vector3_get_up_m258_MethodInfo;
extern MethodInfo Vector3_get_forward_m257_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_rotation_m3469_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_rotation_m3470_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localRotation_m3471_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localRotation_m3472_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localScale_m3473_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localScale_m3474_MethodInfo;
extern MethodInfo Transform_get_parentInternal_m3475_MethodInfo;
extern MethodInfo Transform_set_parentInternal_m3476_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_worldToLocalMatrix_m3478_MethodInfo;
extern MethodInfo Transform_SetParent_m3477_MethodInfo;
extern MethodInfo Transform_Translate_m3479_MethodInfo;
extern MethodInfo Transform_get_position_m282_MethodInfo;
extern MethodInfo Vector3_op_Addition_m341_MethodInfo;
extern MethodInfo Transform_set_position_m301_MethodInfo;
extern MethodInfo Transform_TransformDirection_m3480_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformDirection_m3481_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformPoint_m3482_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_InverseTransformPoint_m3483_MethodInfo;


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m3465 (Transform_t48 * __this, Vector3_t31 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m3465_ftn) (Transform_t48 *, Vector3_t31 *);
	static Transform_INTERNAL_get_position_m3465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m3465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m3466 (Transform_t48 * __this, Vector3_t31 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m3466_ftn) (Transform_t48 *, Vector3_t31 *);
	static Transform_INTERNAL_set_position_m3466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m3466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t31  Transform_get_position_m282 (Transform_t48 * __this, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m3465(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_position_m3465_MethodInfo);
		Vector3_t31  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m301 (Transform_t48 * __this, Vector3_t31  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m3466(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_position_m3466_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m3467 (Transform_t48 * __this, Vector3_t31 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m3467_ftn) (Transform_t48 *, Vector3_t31 *);
	static Transform_INTERNAL_get_localPosition_m3467_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m3467_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m3468 (Transform_t48 * __this, Vector3_t31 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m3468_ftn) (Transform_t48 *, Vector3_t31 *);
	static Transform_INTERNAL_set_localPosition_m3468_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m3468_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern MethodInfo Transform_get_localPosition_m788_MethodInfo;
extern "C" Vector3_t31  Transform_get_localPosition_m788 (Transform_t48 * __this, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m3467(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localPosition_m3467_MethodInfo);
		Vector3_t31  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern MethodInfo Transform_set_localPosition_m783_MethodInfo;
extern "C" void Transform_set_localPosition_m783 (Transform_t48 * __this, Vector3_t31  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m3468(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localPosition_m3468_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern MethodInfo Transform_get_eulerAngles_m848_MethodInfo;
extern "C" Vector3_t31  Transform_get_eulerAngles_m848 (Transform_t48 * __this, MethodInfo* method)
{
	Quaternion_t98  V_0 = {0};
	{
		Quaternion_t98  L_0 = Transform_get_rotation_m302(__this, /*hidden argument*/&Transform_get_rotation_m302_MethodInfo);
		V_0 = L_0;
		Vector3_t31  L_1 = Quaternion_get_eulerAngles_m3226((&V_0), /*hidden argument*/&Quaternion_get_eulerAngles_m3226_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern MethodInfo Transform_set_eulerAngles_m789_MethodInfo;
extern "C" void Transform_set_eulerAngles_m789 (Transform_t48 * __this, Vector3_t31  ___value, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___value;
		Quaternion_t98  L_1 = Quaternion_Euler_m3227(NULL /*static, unused*/, L_0, /*hidden argument*/&Quaternion_Euler_m3227_MethodInfo);
		Transform_set_rotation_m303(__this, L_1, /*hidden argument*/&Transform_set_rotation_m303_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern MethodInfo Transform_get_right_m288_MethodInfo;
extern "C" Vector3_t31  Transform_get_right_m288 (Transform_t48 * __this, MethodInfo* method)
{
	{
		Quaternion_t98  L_0 = Transform_get_rotation_m302(__this, /*hidden argument*/&Transform_get_rotation_m302_MethodInfo);
		Vector3_t31  L_1 = Vector3_get_right_m2563(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_right_m2563_MethodInfo);
		Vector3_t31  L_2 = Quaternion_op_Multiply_m2346(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m2346_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern MethodInfo Transform_get_up_m280_MethodInfo;
extern "C" Vector3_t31  Transform_get_up_m280 (Transform_t48 * __this, MethodInfo* method)
{
	{
		Quaternion_t98  L_0 = Transform_get_rotation_m302(__this, /*hidden argument*/&Transform_get_rotation_m302_MethodInfo);
		Vector3_t31  L_1 = Vector3_get_up_m258(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m258_MethodInfo);
		Vector3_t31  L_2 = Quaternion_op_Multiply_m2346(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m2346_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern MethodInfo Transform_get_forward_m287_MethodInfo;
extern "C" Vector3_t31  Transform_get_forward_m287 (Transform_t48 * __this, MethodInfo* method)
{
	{
		Quaternion_t98  L_0 = Transform_get_rotation_m302(__this, /*hidden argument*/&Transform_get_rotation_m302_MethodInfo);
		Vector3_t31  L_1 = Vector3_get_forward_m257(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m257_MethodInfo);
		Vector3_t31  L_2 = Quaternion_op_Multiply_m2346(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m2346_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m3469 (Transform_t48 * __this, Quaternion_t98 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m3469_ftn) (Transform_t48 *, Quaternion_t98 *);
	static Transform_INTERNAL_get_rotation_m3469_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m3469_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m3470 (Transform_t48 * __this, Quaternion_t98 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m3470_ftn) (Transform_t48 *, Quaternion_t98 *);
	static Transform_INTERNAL_set_rotation_m3470_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m3470_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t98  Transform_get_rotation_m302 (Transform_t48 * __this, MethodInfo* method)
{
	Quaternion_t98  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m3469(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_rotation_m3469_MethodInfo);
		Quaternion_t98  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m303 (Transform_t48 * __this, Quaternion_t98  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m3470(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_rotation_m3470_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m3471 (Transform_t48 * __this, Quaternion_t98 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m3471_ftn) (Transform_t48 *, Quaternion_t98 *);
	static Transform_INTERNAL_get_localRotation_m3471_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m3471_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m3472 (Transform_t48 * __this, Quaternion_t98 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m3472_ftn) (Transform_t48 *, Quaternion_t98 *);
	static Transform_INTERNAL_set_localRotation_m3472_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m3472_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern MethodInfo Transform_get_localRotation_m2467_MethodInfo;
extern "C" Quaternion_t98  Transform_get_localRotation_m2467 (Transform_t48 * __this, MethodInfo* method)
{
	Quaternion_t98  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m3471(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localRotation_m3471_MethodInfo);
		Quaternion_t98  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern MethodInfo Transform_set_localRotation_m2473_MethodInfo;
extern "C" void Transform_set_localRotation_m2473 (Transform_t48 * __this, Quaternion_t98  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m3472(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localRotation_m3472_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m3473 (Transform_t48 * __this, Vector3_t31 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m3473_ftn) (Transform_t48 *, Vector3_t31 *);
	static Transform_INTERNAL_get_localScale_m3473_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m3473_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m3474 (Transform_t48 * __this, Vector3_t31 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m3474_ftn) (Transform_t48 *, Vector3_t31 *);
	static Transform_INTERNAL_set_localScale_m3474_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m3474_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern MethodInfo Transform_get_localScale_m304_MethodInfo;
extern "C" Vector3_t31  Transform_get_localScale_m304 (Transform_t48 * __this, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m3473(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localScale_m3473_MethodInfo);
		Vector3_t31  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern MethodInfo Transform_set_localScale_m305_MethodInfo;
extern "C" void Transform_set_localScale_m305 (Transform_t48 * __this, Vector3_t31  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m3474(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localScale_m3474_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern MethodInfo Transform_get_parent_m2162_MethodInfo;
extern "C" Transform_t48 * Transform_get_parent_m2162 (Transform_t48 * __this, MethodInfo* method)
{
	{
		Transform_t48 * L_0 = Transform_get_parentInternal_m3475(__this, /*hidden argument*/&Transform_get_parentInternal_m3475_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern MethodInfo Transform_set_parent_m833_MethodInfo;
extern "C" void Transform_set_parent_m833 (Transform_t48 * __this, Transform_t48 * ___value, MethodInfo* method)
{
	{
		if (!((RectTransform_t345 *)IsInst(__this, InitializedTypeInfo(&RectTransform_t345_il2cpp_TypeInfo))))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m378(NULL /*static, unused*/, (String_t*) &_stringLiteral357, __this, /*hidden argument*/&Debug_LogWarning_m378_MethodInfo);
	}

IL_0016:
	{
		Transform_t48 * L_0 = ___value;
		Transform_set_parentInternal_m3476(__this, L_0, /*hidden argument*/&Transform_set_parentInternal_m3476_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t48 * Transform_get_parentInternal_m3475 (Transform_t48 * __this, MethodInfo* method)
{
	typedef Transform_t48 * (*Transform_get_parentInternal_m3475_ftn) (Transform_t48 *);
	static Transform_get_parentInternal_m3475_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m3475_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m3476 (Transform_t48 * __this, Transform_t48 * ___value, MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m3476_ftn) (Transform_t48 *, Transform_t48 *);
	static Transform_set_parentInternal_m3476_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m3476_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern MethodInfo Transform_SetParent_m2462_MethodInfo;
extern "C" void Transform_SetParent_m2462 (Transform_t48 * __this, Transform_t48 * ___parent, MethodInfo* method)
{
	{
		Transform_t48 * L_0 = ___parent;
		Transform_SetParent_m3477(__this, L_0, 1, /*hidden argument*/&Transform_SetParent_m3477_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m3477 (Transform_t48 * __this, Transform_t48 * ___parent, bool ___worldPositionStays, MethodInfo* method)
{
	typedef void (*Transform_SetParent_m3477_ftn) (Transform_t48 *, Transform_t48 *, bool);
	static Transform_SetParent_m3477_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m3477_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m3478 (Transform_t48 * __this, Matrix4x4_t33 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m3478_ftn) (Transform_t48 *, Matrix4x4_t33 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m3478_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m3478_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern MethodInfo Transform_get_worldToLocalMatrix_m2539_MethodInfo;
extern "C" Matrix4x4_t33  Transform_get_worldToLocalMatrix_m2539 (Transform_t48 * __this, MethodInfo* method)
{
	Matrix4x4_t33  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m3478(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_worldToLocalMatrix_m3478_MethodInfo);
		Matrix4x4_t33  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern MethodInfo Transform_Translate_m787_MethodInfo;
extern "C" void Transform_Translate_m787 (Transform_t48 * __this, Vector3_t31  ___translation, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 1;
		Vector3_t31  L_0 = ___translation;
		int32_t L_1 = V_0;
		Transform_Translate_m3479(__this, L_0, L_1, /*hidden argument*/&Transform_Translate_m3479_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Translate_m3479 (Transform_t48 * __this, Vector3_t31  ___translation, int32_t ___relativeTo, MethodInfo* method)
{
	{
		int32_t L_0 = ___relativeTo;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t31  L_1 = Transform_get_position_m282(__this, /*hidden argument*/&Transform_get_position_m282_MethodInfo);
		Vector3_t31  L_2 = ___translation;
		Vector3_t31  L_3 = Vector3_op_Addition_m341(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Addition_m341_MethodInfo);
		Transform_set_position_m301(__this, L_3, /*hidden argument*/&Transform_set_position_m301_MethodInfo);
		goto IL_0035;
	}

IL_001d:
	{
		Vector3_t31  L_4 = Transform_get_position_m282(__this, /*hidden argument*/&Transform_get_position_m282_MethodInfo);
		Vector3_t31  L_5 = ___translation;
		Vector3_t31  L_6 = Transform_TransformDirection_m3480(__this, L_5, /*hidden argument*/&Transform_TransformDirection_m3480_MethodInfo);
		Vector3_t31  L_7 = Vector3_op_Addition_m341(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&Vector3_op_Addition_m341_MethodInfo);
		Transform_set_position_m301(__this, L_7, /*hidden argument*/&Transform_set_position_m301_MethodInfo);
	}

IL_0035:
	{
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t31  Transform_TransformDirection_m3480 (Transform_t48 * __this, Vector3_t31  ___direction, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Transform_INTERNAL_CALL_TransformDirection_m3481(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/&Transform_INTERNAL_CALL_TransformDirection_m3481_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t31  Transform_INTERNAL_CALL_TransformDirection_m3481 (Object_t * __this /* static, unused */, Transform_t48 * ___self, Vector3_t31 * ___direction, MethodInfo* method)
{
	typedef Vector3_t31  (*Transform_INTERNAL_CALL_TransformDirection_m3481_ftn) (Transform_t48 *, Vector3_t31 *);
	static Transform_INTERNAL_CALL_TransformDirection_m3481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformDirection_m3481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_TransformPoint_m2559_MethodInfo;
extern "C" Vector3_t31  Transform_TransformPoint_m2559 (Transform_t48 * __this, Vector3_t31  ___position, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Transform_INTERNAL_CALL_TransformPoint_m3482(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_TransformPoint_m3482_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t31  Transform_INTERNAL_CALL_TransformPoint_m3482 (Object_t * __this /* static, unused */, Transform_t48 * ___self, Vector3_t31 * ___position, MethodInfo* method)
{
	typedef Vector3_t31  (*Transform_INTERNAL_CALL_TransformPoint_m3482_ftn) (Transform_t48 *, Vector3_t31 *);
	static Transform_INTERNAL_CALL_TransformPoint_m3482_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m3482_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_InverseTransformPoint_m2430_MethodInfo;
extern "C" Vector3_t31  Transform_InverseTransformPoint_m2430 (Transform_t48 * __this, Vector3_t31  ___position, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m3483(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_InverseTransformPoint_m3483_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t31  Transform_INTERNAL_CALL_InverseTransformPoint_m3483 (Object_t * __this /* static, unused */, Transform_t48 * ___self, Vector3_t31 * ___position, MethodInfo* method)
{
	typedef Vector3_t31  (*Transform_INTERNAL_CALL_InverseTransformPoint_m3483_ftn) (Transform_t48 *, Vector3_t31 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m3483_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m3483_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m2643 (Transform_t48 * __this, MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m2643_ftn) (Transform_t48 *);
	static Transform_get_childCount_m2643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m2643_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern MethodInfo Transform_SetAsFirstSibling_m2463_MethodInfo;
extern "C" void Transform_SetAsFirstSibling_m2463 (Transform_t48 * __this, MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m2463_ftn) (Transform_t48 *);
	static Transform_SetAsFirstSibling_m2463_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m2463_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern MethodInfo Transform_GetEnumerator_m3484_MethodInfo;
extern "C" Object_t * Transform_GetEnumerator_m3484 (Transform_t48 * __this, MethodInfo* method)
{
	{
		Enumerator_t699 * L_0 = (Enumerator_t699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Enumerator_t699_il2cpp_TypeInfo));
		Enumerator__ctor_m3462(L_0, __this, /*hidden argument*/&Enumerator__ctor_m3462_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t48 * Transform_GetChild_m2640 (Transform_t48 * __this, int32_t ___index, MethodInfo* method)
{
	typedef Transform_t48 * (*Transform_GetChild_m2640_ftn) (Transform_t48 *, int32_t);
	static Transform_GetChild_m2640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m2640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Time_t700_il2cpp_TypeInfo;
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_time()
extern MethodInfo Time_get_time_m816_MethodInfo;
extern "C" float Time_get_time_m816 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_time_m816_ftn) ();
	static Time_get_time_m816_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_time_m816_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern MethodInfo Time_get_deltaTime_m334_MethodInfo;
extern "C" float Time_get_deltaTime_m334 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m334_ftn) ();
	static Time_get_deltaTime_m334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern MethodInfo Time_get_unscaledTime_m2216_MethodInfo;
extern "C" float Time_get_unscaledTime_m2216 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m2216_ftn) ();
	static Time_get_unscaledTime_m2216_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m2216_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern MethodInfo Time_get_unscaledDeltaTime_m2259_MethodInfo;
extern "C" float Time_get_unscaledDeltaTime_m2259 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m2259_ftn) ();
	static Time_get_unscaledDeltaTime_m2259_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m2259_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Time::get_frameCount()
extern MethodInfo Time_get_frameCount_m294_MethodInfo;
extern "C" int32_t Time_get_frameCount_m294 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Time_get_frameCount_m294_ftn) ();
	static Time_get_frameCount_m294_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_frameCount_m294_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_frameCount()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Random_t701_il2cpp_TypeInfo;
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"

extern MethodInfo Random_GetRandomUnitCircle_m3486_MethodInfo;
extern MethodInfo Random_RandomRangeInt_m3485_MethodInfo;


// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern MethodInfo Random_Range_m379_MethodInfo;
extern "C" float Random_Range_m379 (Object_t * __this /* static, unused */, float ___min, float ___max, MethodInfo* method)
{
	typedef float (*Random_Range_m379_ftn) (float, float);
	static Random_Range_m379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_Range_m379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern MethodInfo Random_Range_m785_MethodInfo;
extern "C" int32_t Random_Range_m785 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m3485(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Random_RandomRangeInt_m3485_MethodInfo);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m3485 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m3485_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m3485_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m3485_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Single UnityEngine.Random::get_value()
extern MethodInfo Random_get_value_m381_MethodInfo;
extern "C" float Random_get_value_m381 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Random_get_value_m381_ftn) ();
	static Random_get_value_m381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_value_m381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_value()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Random::GetRandomUnitCircle(UnityEngine.Vector2&)
extern "C" void Random_GetRandomUnitCircle_m3486 (Object_t * __this /* static, unused */, Vector2_t62 * ___output, MethodInfo* method)
{
	typedef void (*Random_GetRandomUnitCircle_m3486_ftn) (Vector2_t62 *);
	static Random_GetRandomUnitCircle_m3486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_GetRandomUnitCircle_m3486_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::GetRandomUnitCircle(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___output);
}
// UnityEngine.Vector2 UnityEngine.Random::get_insideUnitCircle()
extern MethodInfo Random_get_insideUnitCircle_m805_MethodInfo;
extern "C" Vector2_t62  Random_get_insideUnitCircle_m805 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		Random_GetRandomUnitCircle_m3486(NULL /*static, unused*/, (&V_0), /*hidden argument*/&Random_GetRandomUnitCircle_m3486_MethodInfo);
		Vector2_t62  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo YieldInstruction_t606_il2cpp_TypeInfo;
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"



// System.Void UnityEngine.YieldInstruction::.ctor()
extern MethodInfo YieldInstruction__ctor_m3487_MethodInfo;
extern "C" void YieldInstruction__ctor_m3487 (YieldInstruction_t606 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t606_marshal(const YieldInstruction_t606& unmarshaled, YieldInstruction_t606_marshaled& marshaled)
{
}
void YieldInstruction_t606_marshal_back(const YieldInstruction_t606_marshaled& marshaled, YieldInstruction_t606& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t606_marshal_cleanup(YieldInstruction_t606_marshaled& marshaled)
{
}
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParticleSystem_t178_il2cpp_TypeInfo;
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"

extern MethodInfo ParticleSystem_INTERNAL_CALL_Emit_m3488_MethodInfo;


// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern MethodInfo ParticleSystem_set_enableEmission_m856_MethodInfo;
extern "C" void ParticleSystem_set_enableEmission_m856 (ParticleSystem_t178 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*ParticleSystem_set_enableEmission_m856_ftn) (ParticleSystem_t178 *, bool);
	static ParticleSystem_set_enableEmission_m856_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_enableEmission_m856_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern MethodInfo ParticleSystem_get_startLifetime_m877_MethodInfo;
extern "C" float ParticleSystem_get_startLifetime_m877 (ParticleSystem_t178 * __this, MethodInfo* method)
{
	typedef float (*ParticleSystem_get_startLifetime_m877_ftn) (ParticleSystem_t178 *);
	static ParticleSystem_get_startLifetime_m877_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startLifetime_m877_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startLifetime()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern MethodInfo ParticleSystem_Emit_m857_MethodInfo;
extern "C" void ParticleSystem_Emit_m857 (ParticleSystem_t178 * __this, int32_t ___count, MethodInfo* method)
{
	{
		int32_t L_0 = ___count;
		ParticleSystem_INTERNAL_CALL_Emit_m3488(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&ParticleSystem_INTERNAL_CALL_Emit_m3488_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C" void ParticleSystem_INTERNAL_CALL_Emit_m3488 (Object_t * __this /* static, unused */, ParticleSystem_t178 * ___self, int32_t ___count, MethodInfo* method)
{
	typedef void (*ParticleSystem_INTERNAL_CALL_Emit_m3488_ftn) (ParticleSystem_t178 *, int32_t);
	static ParticleSystem_INTERNAL_CALL_Emit_m3488_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_CALL_Emit_m3488_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)");
	_il2cpp_icall_func(___self, ___count);
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Particle_t702_il2cpp_TypeInfo;
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"


// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern MethodInfo Particle_get_position_m3489_MethodInfo;
extern "C" Vector3_t31  Particle_get_position_m3489 (Particle_t702 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern MethodInfo Particle_set_position_m3490_MethodInfo;
extern "C" void Particle_set_position_m3490 (Particle_t702 * __this, Vector3_t31  ___value, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern MethodInfo Particle_get_velocity_m3491_MethodInfo;
extern "C" Vector3_t31  Particle_get_velocity_m3491 (Particle_t702 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern MethodInfo Particle_set_velocity_m3492_MethodInfo;
extern "C" void Particle_set_velocity_m3492 (Particle_t702 * __this, Vector3_t31  ___value, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern MethodInfo Particle_get_energy_m3493_MethodInfo;
extern "C" float Particle_get_energy_m3493 (Particle_t702 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern MethodInfo Particle_set_energy_m3494_MethodInfo;
extern "C" void Particle_set_energy_m3494 (Particle_t702 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern MethodInfo Particle_get_startEnergy_m3495_MethodInfo;
extern "C" float Particle_get_startEnergy_m3495 (Particle_t702 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern MethodInfo Particle_set_startEnergy_m3496_MethodInfo;
extern "C" void Particle_set_startEnergy_m3496 (Particle_t702 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern MethodInfo Particle_get_size_m3497_MethodInfo;
extern "C" float Particle_get_size_m3497 (Particle_t702 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern MethodInfo Particle_set_size_m3498_MethodInfo;
extern "C" void Particle_set_size_m3498 (Particle_t702 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern MethodInfo Particle_get_rotation_m3499_MethodInfo;
extern "C" float Particle_get_rotation_m3499 (Particle_t702 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern MethodInfo Particle_set_rotation_m3500_MethodInfo;
extern "C" void Particle_set_rotation_m3500 (Particle_t702 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern MethodInfo Particle_get_angularVelocity_m3501_MethodInfo;
extern "C" float Particle_get_angularVelocity_m3501 (Particle_t702 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern MethodInfo Particle_set_angularVelocity_m3502_MethodInfo;
extern "C" void Particle_set_angularVelocity_m3502 (Particle_t702 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern MethodInfo Particle_get_color_m3503_MethodInfo;
extern "C" Color_t17  Particle_get_color_m3503 (Particle_t702 * __this, MethodInfo* method)
{
	{
		Color_t17  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern MethodInfo Particle_set_color_m3504_MethodInfo;
extern "C" void Particle_set_color_m3504 (Particle_t702 * __this, Color_t17  ___value, MethodInfo* method)
{
	{
		Color_t17  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics_t703_il2cpp_TypeInfo;
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern MethodInfo Physics_INTERNAL_CALL_Internal_Raycast_m3506_MethodInfo;
extern MethodInfo Physics_Internal_Raycast_m3505_MethodInfo;
extern MethodInfo Physics_Raycast_m2341_MethodInfo;
extern MethodInfo Ray_get_origin_m2237_MethodInfo;
extern MethodInfo Ray_get_direction_m2238_MethodInfo;
extern MethodInfo Physics_Raycast_m3507_MethodInfo;
extern MethodInfo Physics_RaycastAll_m3508_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_RaycastAll_m3509_MethodInfo;


// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m3505 (Object_t * __this /* static, unused */, Vector3_t31  ___origin, Vector3_t31  ___direction, RaycastHit_t225 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		RaycastHit_t225 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m3506(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/&Physics_INTERNAL_CALL_Internal_Raycast_m3506_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m3506 (Object_t * __this /* static, unused */, Vector3_t31 * ___origin, Vector3_t31 * ___direction, RaycastHit_t225 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m3506_ftn) (Vector3_t31 *, Vector3_t31 *, RaycastHit_t225 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m3506_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m3506_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m3507 (Object_t * __this /* static, unused */, Vector3_t31  ___origin, Vector3_t31  ___direction, RaycastHit_t225 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___origin;
		Vector3_t31  L_1 = ___direction;
		RaycastHit_t225 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m3505(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Internal_Raycast_m3505_MethodInfo);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern MethodInfo Physics_Raycast_m812_MethodInfo;
extern "C" bool Physics_Raycast_m812 (Object_t * __this /* static, unused */, Ray_t226  ___ray, RaycastHit_t225 * ___hitInfo, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = ((int32_t)-5);
		V_1 = (std::numeric_limits<float>::infinity());
		Ray_t226  L_0 = ___ray;
		RaycastHit_t225 * L_1 = ___hitInfo;
		float L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m2341(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_Raycast_m2341_MethodInfo);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2341 (Object_t * __this /* static, unused */, Ray_t226  ___ray, RaycastHit_t225 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Ray_get_origin_m2237((&___ray), /*hidden argument*/&Ray_get_origin_m2237_MethodInfo);
		Vector3_t31  L_1 = Ray_get_direction_m2238((&___ray), /*hidden argument*/&Ray_get_direction_m2238_MethodInfo);
		RaycastHit_t225 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m3507(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Raycast_m3507_MethodInfo);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Physics_RaycastAll_m2249_MethodInfo;
extern "C" RaycastHitU5BU5D_t483* Physics_RaycastAll_m2249 (Object_t * __this /* static, unused */, Ray_t226  ___ray, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Ray_get_origin_m2237((&___ray), /*hidden argument*/&Ray_get_origin_m2237_MethodInfo);
		Vector3_t31  L_1 = Ray_get_direction_m2238((&___ray), /*hidden argument*/&Ray_get_direction_m2238_MethodInfo);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t483* L_4 = Physics_RaycastAll_m3508(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_RaycastAll_m3508_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t483* Physics_RaycastAll_m3508 (Object_t * __this /* static, unused */, Vector3_t31  ___origin, Vector3_t31  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t483* L_2 = Physics_INTERNAL_CALL_RaycastAll_m3509(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/&Physics_INTERNAL_CALL_RaycastAll_m3509_MethodInfo);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t483* Physics_INTERNAL_CALL_RaycastAll_m3509 (Object_t * __this /* static, unused */, Vector3_t31 * ___origin, Vector3_t31 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t483* (*Physics_INTERNAL_CALL_RaycastAll_m3509_ftn) (Vector3_t31 *, Vector3_t31 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m3509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m3509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider_t227_il2cpp_TypeInfo;
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit_t225_il2cpp_TypeInfo;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern MethodInfo RaycastHit_get_point_m2251_MethodInfo;
extern "C" Vector3_t31  RaycastHit_get_point_m2251 (RaycastHit_t225 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern MethodInfo RaycastHit_get_normal_m2252_MethodInfo;
extern "C" Vector3_t31  RaycastHit_get_normal_m2252 (RaycastHit_t225 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern MethodInfo RaycastHit_get_distance_m2253_MethodInfo;
extern "C" float RaycastHit_get_distance_m2253 (RaycastHit_t225 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern MethodInfo RaycastHit_get_collider_m813_MethodInfo;
extern "C" Collider_t227 * RaycastHit_get_collider_m813 (RaycastHit_t225 * __this, MethodInfo* method)
{
	{
		Collider_t227 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics2D_t221_il2cpp_TypeInfo;
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
extern TypeInfo List_1_t704_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_21MethodDeclarations.h"
extern Il2CppType List_1_t704_0_0_0;
extern MethodInfo List_1__ctor_m3892_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_Internal_Raycast_m3512_MethodInfo;
extern MethodInfo Physics2D_Raycast_m3513_MethodInfo;
extern MethodInfo Physics2D_Internal_Raycast_m3511_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_RaycastAll_m3514_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_OverlapCircleAll_m3515_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3892_GenericMethod;


// System.Void UnityEngine.Physics2D::.cctor()
extern MethodInfo Physics2D__cctor_m3510_MethodInfo;
extern TypeInfo* List_1_t704_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3892_MethodInfo_var;
extern "C" void Physics2D__cctor_m3510 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Physics2D__cctor_m3510_init;
	if (!Physics2D__cctor_m3510_init)
	{
		List_1_t704_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t704_0_0_0);
		List_1__ctor_m3892_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3892_GenericMethod);
		Physics2D__cctor_m3510_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t704_il2cpp_TypeInfo_var);
		List_1_t704 * L_0 = (List_1_t704 *)il2cpp_codegen_object_new (List_1_t704_il2cpp_TypeInfo_var);
		List_1__ctor_m3892(L_0, /*hidden argument*/List_1__ctor_m3892_MethodInfo_var);
		((Physics2D_t221_StaticFields*)InitializedTypeInfo(&Physics2D_t221_il2cpp_TypeInfo)->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m3511 (Object_t * __this /* static, unused */, Vector2_t62  ___origin, Vector2_t62  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t482 * ___raycastHit, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t482 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t221_il2cpp_TypeInfo));
		Physics2D_INTERNAL_CALL_Internal_Raycast_m3512(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics2D_INTERNAL_CALL_Internal_Raycast_m3512_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m3512 (Object_t * __this /* static, unused */, Vector2_t62 * ___origin, Vector2_t62 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t482 * ___raycastHit, MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m3512_ftn) (Vector2_t62 *, Vector2_t62 *, float, int32_t, float, float, RaycastHit2D_t482 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m3512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m3512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_Raycast_m2342_MethodInfo;
extern "C" RaycastHit2D_t482  Physics2D_Raycast_m2342 (Object_t * __this /* static, unused */, Vector2_t62  ___origin, Vector2_t62  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t62  L_0 = ___origin;
		Vector2_t62  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t221_il2cpp_TypeInfo));
		RaycastHit2D_t482  L_6 = Physics2D_Raycast_m3513(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&Physics2D_Raycast_m3513_MethodInfo);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t482  Physics2D_Raycast_m3513 (Object_t * __this /* static, unused */, Vector2_t62  ___origin, Vector2_t62  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	RaycastHit2D_t482  V_0 = {0};
	{
		Vector2_t62  L_0 = ___origin;
		Vector2_t62  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t221_il2cpp_TypeInfo));
		Physics2D_Internal_Raycast_m3511(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/&Physics2D_Internal_Raycast_m3511_MethodInfo);
		RaycastHit2D_t482  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_RaycastAll_m2239_MethodInfo;
extern "C" RaycastHit2DU5BU5D_t481* Physics2D_RaycastAll_m2239 (Object_t * __this /* static, unused */, Vector2_t62  ___origin, Vector2_t62  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t221_il2cpp_TypeInfo));
		RaycastHit2DU5BU5D_t481* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m3514(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/&Physics2D_INTERNAL_CALL_RaycastAll_m3514_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t481* Physics2D_INTERNAL_CALL_RaycastAll_m3514 (Object_t * __this /* static, unused */, Vector2_t62 * ___origin, Vector2_t62 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t481* (*Physics2D_INTERNAL_CALL_RaycastAll_m3514_ftn) (Vector2_t62 *, Vector2_t62 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m3514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m3514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single)
extern MethodInfo Physics2D_OverlapCircleAll_m773_MethodInfo;
extern "C" Collider2DU5BU5D_t223* Physics2D_OverlapCircleAll_m773 (Object_t * __this /* static, unused */, Vector2_t62  ___point, float ___radius, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = ((int32_t)-5);
		float L_0 = ___radius;
		int32_t L_1 = V_2;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t221_il2cpp_TypeInfo));
		Collider2DU5BU5D_t223* L_4 = Physics2D_INTERNAL_CALL_OverlapCircleAll_m3515(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, L_3, /*hidden argument*/&Physics2D_INTERNAL_CALL_OverlapCircleAll_m3515_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Collider2D[] UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2DU5BU5D_t223* Physics2D_INTERNAL_CALL_OverlapCircleAll_m3515 (Object_t * __this /* static, unused */, Vector2_t62 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	typedef Collider2DU5BU5D_t223* (*Physics2D_INTERNAL_CALL_OverlapCircleAll_m3515_ftn) (Vector2_t62 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_OverlapCircleAll_m3515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_OverlapCircleAll_m3515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___point, ___radius, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit2D_t482_il2cpp_TypeInfo;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern MethodInfo RaycastHit2D_get_collider_m2242_MethodInfo;
extern MethodInfo Collider2D_get_attachedRigidbody_m3519_MethodInfo;
extern MethodInfo RaycastHit2D_get_rigidbody_m3516_MethodInfo;


// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern MethodInfo RaycastHit2D_get_point_m2240_MethodInfo;
extern "C" Vector2_t62  RaycastHit2D_get_point_m2240 (RaycastHit2D_t482 * __this, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern MethodInfo RaycastHit2D_get_normal_m2241_MethodInfo;
extern "C" Vector2_t62  RaycastHit2D_get_normal_m2241 (RaycastHit2D_t482 * __this, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern MethodInfo RaycastHit2D_get_fraction_m2343_MethodInfo;
extern "C" float RaycastHit2D_get_fraction_m2343 (RaycastHit2D_t482 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t136 * RaycastHit2D_get_collider_m2242 (RaycastHit2D_t482 * __this, MethodInfo* method)
{
	{
		Collider2D_t136 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t236 * RaycastHit2D_get_rigidbody_m3516 (RaycastHit2D_t482 * __this, MethodInfo* method)
{
	Rigidbody2D_t236 * G_B3_0 = {0};
	{
		Collider2D_t136 * L_0 = RaycastHit2D_get_collider_m2242(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2242_MethodInfo);
		bool L_1 = Object_op_Inequality_m225(NULL /*static, unused*/, L_0, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t136 * L_2 = RaycastHit2D_get_collider_m2242(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2242_MethodInfo);
		NullCheck(L_2);
		Rigidbody2D_t236 * L_3 = Collider2D_get_attachedRigidbody_m3519(L_2, /*hidden argument*/&Collider2D_get_attachedRigidbody_m3519_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t236 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern MethodInfo RaycastHit2D_get_transform_m2243_MethodInfo;
extern "C" Transform_t48 * RaycastHit2D_get_transform_m2243 (RaycastHit2D_t482 * __this, MethodInfo* method)
{
	Rigidbody2D_t236 * V_0 = {0};
	{
		Rigidbody2D_t236 * L_0 = RaycastHit2D_get_rigidbody_m3516(__this, /*hidden argument*/&RaycastHit2D_get_rigidbody_m3516_MethodInfo);
		V_0 = L_0;
		Rigidbody2D_t236 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m225(NULL /*static, unused*/, L_1, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t236 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t48 * L_4 = Component_get_transform_m279(L_3, /*hidden argument*/&Component_get_transform_m279_MethodInfo);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t136 * L_5 = RaycastHit2D_get_collider_m2242(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2242_MethodInfo);
		bool L_6 = Object_op_Inequality_m225(NULL /*static, unused*/, L_5, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t136 * L_7 = RaycastHit2D_get_collider_m2242(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2242_MethodInfo);
		NullCheck(L_7);
		Transform_t48 * L_8 = Component_get_transform_m279(L_7, /*hidden argument*/&Component_get_transform_m279_MethodInfo);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t48 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rigidbody2D_t236_il2cpp_TypeInfo;
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"

extern MethodInfo Rigidbody2D_INTERNAL_get_velocity_m3517_MethodInfo;
extern MethodInfo Rigidbody2D_INTERNAL_set_velocity_m3518_MethodInfo;


// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_velocity_m3517 (Rigidbody2D_t236 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_get_velocity_m3517_ftn) (Rigidbody2D_t236 *, Vector2_t62 *);
	static Rigidbody2D_INTERNAL_get_velocity_m3517_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_get_velocity_m3517_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m3518 (Rigidbody2D_t236 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_set_velocity_m3518_ftn) (Rigidbody2D_t236 *, Vector2_t62 *);
	static Rigidbody2D_INTERNAL_set_velocity_m3518_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_set_velocity_m3518_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern MethodInfo Rigidbody2D_get_velocity_m881_MethodInfo;
extern "C" Vector2_t62  Rigidbody2D_get_velocity_m881 (Rigidbody2D_t236 * __this, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		Rigidbody2D_INTERNAL_get_velocity_m3517(__this, (&V_0), /*hidden argument*/&Rigidbody2D_INTERNAL_get_velocity_m3517_MethodInfo);
		Vector2_t62  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern MethodInfo Rigidbody2D_set_velocity_m883_MethodInfo;
extern "C" void Rigidbody2D_set_velocity_m883 (Rigidbody2D_t236 * __this, Vector2_t62  ___value, MethodInfo* method)
{
	{
		Rigidbody2D_INTERNAL_set_velocity_m3518(__this, (&___value), /*hidden argument*/&Rigidbody2D_INTERNAL_set_velocity_m3518_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider2D_t136_il2cpp_TypeInfo;



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t236 * Collider2D_get_attachedRigidbody_m3519 (Collider2D_t136 * __this, MethodInfo* method)
{
	typedef Rigidbody2D_t236 * (*Collider2D_get_attachedRigidbody_m3519_ftn) (Collider2D_t136 *);
	static Collider2D_get_attachedRigidbody_m3519_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m3519_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioConfigurationChangeHandler_t705_il2cpp_TypeInfo;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo AudioConfigurationChangeHandler__ctor_m3520_MethodInfo;
extern "C" void AudioConfigurationChangeHandler__ctor_m3520 (AudioConfigurationChangeHandler_t705 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern MethodInfo AudioConfigurationChangeHandler_Invoke_m3521_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_Invoke_m3521 (AudioConfigurationChangeHandler_t705 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m3521((AudioConfigurationChangeHandler_t705 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t705(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern MethodInfo AudioConfigurationChangeHandler_BeginInvoke_m3522_MethodInfo;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m3522 (AudioConfigurationChangeHandler_t705 * __this, bool ___deviceWasChanged, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Boolean_t90_il2cpp_TypeInfo), &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo AudioConfigurationChangeHandler_EndInvoke_m3523_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m3523 (AudioConfigurationChangeHandler_t705 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioSettings_t706_il2cpp_TypeInfo;
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"

extern TypeInfo Boolean_t90_il2cpp_TypeInfo;


// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern MethodInfo AudioSettings_InvokeOnAudioConfigurationChanged_m3524_MethodInfo;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m3524 (AudioSettings_t706 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	{
		AudioConfigurationChangeHandler_t705 * L_0 = ((AudioSettings_t706_StaticFields*)InitializedTypeInfo(&AudioSettings_t706_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t705 * L_1 = ((AudioSettings_t706_StaticFields*)InitializedTypeInfo(&AudioSettings_t706_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(&AudioConfigurationChangeHandler_Invoke_m3521_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMReaderCallback_t708_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMReaderCallback__ctor_m3525_MethodInfo;
extern "C" void PCMReaderCallback__ctor_m3525 (PCMReaderCallback_t708 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern MethodInfo PCMReaderCallback_Invoke_m3526_MethodInfo;
extern "C" void PCMReaderCallback_Invoke_m3526 (PCMReaderCallback_t708 * __this, SingleU5BU5D_t707* ___data, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m3526((PCMReaderCallback_t708 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t707* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t707* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern TypeInfo Single_t110_il2cpp_TypeInfo;
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t708(Il2CppObject* delegate, SingleU5BU5D_t707* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern MethodInfo PCMReaderCallback_BeginInvoke_m3527_MethodInfo;
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m3527 (PCMReaderCallback_t708 * __this, SingleU5BU5D_t707* ___data, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMReaderCallback_EndInvoke_m3528_MethodInfo;
extern "C" void PCMReaderCallback_EndInvoke_m3528 (PCMReaderCallback_t708 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMSetPositionCallback_t709_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMSetPositionCallback__ctor_m3529_MethodInfo;
extern "C" void PCMSetPositionCallback__ctor_m3529 (PCMSetPositionCallback_t709 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern MethodInfo PCMSetPositionCallback_Invoke_m3530_MethodInfo;
extern "C" void PCMSetPositionCallback_Invoke_m3530 (PCMSetPositionCallback_t709 * __this, int32_t ___position, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m3530((PCMSetPositionCallback_t709 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t709(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo PCMSetPositionCallback_BeginInvoke_m3531_MethodInfo;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m3531 (PCMSetPositionCallback_t709 * __this, int32_t ___position, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMSetPositionCallback_EndInvoke_m3532_MethodInfo;
extern "C" void PCMSetPositionCallback_EndInvoke_m3532 (PCMSetPositionCallback_t709 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioClip_t149_il2cpp_TypeInfo;
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"

extern TypeInfo SingleU5BU5D_t707_il2cpp_TypeInfo;
extern TypeInfo Int32_t92_il2cpp_TypeInfo;


// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern MethodInfo AudioClip_InvokePCMReaderCallback_Internal_m3533_MethodInfo;
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m3533 (AudioClip_t149 * __this, SingleU5BU5D_t707* ___data, MethodInfo* method)
{
	{
		PCMReaderCallback_t708 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t708 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t707* L_2 = ___data;
		NullCheck(L_1);
		VirtActionInvoker1< SingleU5BU5D_t707* >::Invoke(&PCMReaderCallback_Invoke_m3526_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern MethodInfo AudioClip_InvokePCMSetPositionCallback_Internal_m3534_MethodInfo;
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m3534 (AudioClip_t149 * __this, int32_t ___position, MethodInfo* method)
{
	{
		PCMSetPositionCallback_t709 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t709 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(&PCMSetPositionCallback_Invoke_m3530_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioSource_t150_il2cpp_TypeInfo;
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"

// System.UInt64
#include "mscorlib_System_UInt64.h"
extern MethodInfo AudioSource_Play_m3535_MethodInfo;
extern MethodInfo AudioSource_PlayOneShot_m3536_MethodInfo;


// System.Single UnityEngine.AudioSource::get_volume()
extern MethodInfo AudioSource_get_volume_m902_MethodInfo;
extern "C" float AudioSource_get_volume_m902 (AudioSource_t150 * __this, MethodInfo* method)
{
	typedef float (*AudioSource_get_volume_m902_ftn) (AudioSource_t150 *);
	static AudioSource_get_volume_m902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_m902_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern MethodInfo AudioSource_set_volume_m904_MethodInfo;
extern "C" void AudioSource_set_volume_m904 (AudioSource_t150 * __this, float ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_volume_m904_ftn) (AudioSource_t150 *, float);
	static AudioSource_set_volume_m904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_m904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m3535 (AudioSource_t150 * __this, uint64_t ___delay, MethodInfo* method)
{
	typedef void (*AudioSource_Play_m3535_ftn) (AudioSource_t150 *, uint64_t);
	static AudioSource_Play_m3535_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m3535_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay);
}
// System.Void UnityEngine.AudioSource::Play()
extern MethodInfo AudioSource_Play_m903_MethodInfo;
extern "C" void AudioSource_Play_m903 (AudioSource_t150 * __this, MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		AudioSource_Play_m3535(__this, L_0, /*hidden argument*/&AudioSource_Play_m3535_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m3536 (AudioSource_t150 * __this, AudioClip_t149 * ___clip, float ___volumeScale, MethodInfo* method)
{
	typedef void (*AudioSource_PlayOneShot_m3536_ftn) (AudioSource_t150 *, AudioClip_t149 *, float);
	static AudioSource_PlayOneShot_m3536_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShot_m3536_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(__this, ___clip, ___volumeScale);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern MethodInfo AudioSource_PlayOneShot_m806_MethodInfo;
extern "C" void AudioSource_PlayOneShot_m806 (AudioSource_t150 * __this, AudioClip_t149 * ___clip, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		AudioClip_t149 * L_0 = ___clip;
		float L_1 = V_0;
		AudioSource_PlayOneShot_m3536(__this, L_0, L_1, /*hidden argument*/&AudioSource_PlayOneShot_m3536_MethodInfo);
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WebCamDevice_t710_il2cpp_TypeInfo;
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern MethodInfo WebCamDevice_get_name_m3537_MethodInfo;
extern "C" String_t* WebCamDevice_get_name_m3537 (WebCamDevice_t710 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern MethodInfo WebCamDevice_get_isFrontFacing_m3538_MethodInfo;
extern "C" bool WebCamDevice_get_isFrontFacing_m3538 (WebCamDevice_t710 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t710_marshal(const WebCamDevice_t710& unmarshaled, WebCamDevice_t710_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t710_marshal_back(const WebCamDevice_t710_marshaled& marshaled, WebCamDevice_t710& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t710_marshal_cleanup(WebCamDevice_t710_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEventSource_t711_il2cpp_TypeInfo;
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEvent_t713_il2cpp_TypeInfo;
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo AnimationEvent_get_isFiredByLegacy_m3556_MethodInfo;
extern MethodInfo AnimationEvent_get_isFiredByAnimator_m3557_MethodInfo;


// System.Void UnityEngine.AnimationEvent::.ctor()
extern MethodInfo AnimationEvent__ctor_m3539_MethodInfo;
extern "C" void AnimationEvent__ctor_m3539 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t93 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t712 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern MethodInfo AnimationEvent_get_data_m3540_MethodInfo;
extern "C" String_t* AnimationEvent_get_data_m3540 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern MethodInfo AnimationEvent_set_data_m3541_MethodInfo;
extern "C" void AnimationEvent_set_data_m3541 (AnimationEvent_t713 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern MethodInfo AnimationEvent_get_stringParameter_m3542_MethodInfo;
extern "C" String_t* AnimationEvent_get_stringParameter_m3542 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern MethodInfo AnimationEvent_set_stringParameter_m3543_MethodInfo;
extern "C" void AnimationEvent_set_stringParameter_m3543 (AnimationEvent_t713 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern MethodInfo AnimationEvent_get_floatParameter_m3544_MethodInfo;
extern "C" float AnimationEvent_get_floatParameter_m3544 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern MethodInfo AnimationEvent_set_floatParameter_m3545_MethodInfo;
extern "C" void AnimationEvent_set_floatParameter_m3545 (AnimationEvent_t713 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern MethodInfo AnimationEvent_get_intParameter_m3546_MethodInfo;
extern "C" int32_t AnimationEvent_get_intParameter_m3546 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern MethodInfo AnimationEvent_set_intParameter_m3547_MethodInfo;
extern "C" void AnimationEvent_set_intParameter_m3547 (AnimationEvent_t713 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern MethodInfo AnimationEvent_get_objectReferenceParameter_m3548_MethodInfo;
extern "C" Object_t93 * AnimationEvent_get_objectReferenceParameter_m3548 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		Object_t93 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern MethodInfo AnimationEvent_set_objectReferenceParameter_m3549_MethodInfo;
extern "C" void AnimationEvent_set_objectReferenceParameter_m3549 (AnimationEvent_t713 * __this, Object_t93 * ___value, MethodInfo* method)
{
	{
		Object_t93 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern MethodInfo AnimationEvent_get_functionName_m3550_MethodInfo;
extern "C" String_t* AnimationEvent_get_functionName_m3550 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern MethodInfo AnimationEvent_set_functionName_m3551_MethodInfo;
extern "C" void AnimationEvent_set_functionName_m3551 (AnimationEvent_t713 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern MethodInfo AnimationEvent_get_time_m3552_MethodInfo;
extern "C" float AnimationEvent_get_time_m3552 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern MethodInfo AnimationEvent_set_time_m3553_MethodInfo;
extern "C" void AnimationEvent_set_time_m3553 (AnimationEvent_t713 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern MethodInfo AnimationEvent_get_messageOptions_m3554_MethodInfo;
extern "C" int32_t AnimationEvent_get_messageOptions_m3554 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern MethodInfo AnimationEvent_set_messageOptions_m3555_MethodInfo;
extern "C" void AnimationEvent_set_messageOptions_m3555 (AnimationEvent_t713 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m3556 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m3557 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern MethodInfo AnimationEvent_get_animationState_m3558_MethodInfo;
extern "C" AnimationState_t712 * AnimationEvent_get_animationState_m3558 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m3556(__this, /*hidden argument*/&AnimationEvent_get_isFiredByLegacy_m3556_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m331(NULL /*static, unused*/, (String_t*) &_stringLiteral358, /*hidden argument*/&Debug_LogError_m331_MethodInfo);
	}

IL_0015:
	{
		AnimationState_t712 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern MethodInfo AnimationEvent_get_animatorStateInfo_m3559_MethodInfo;
extern "C" AnimatorStateInfo_t714  AnimationEvent_get_animatorStateInfo_m3559 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m3557(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m3557_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m331(NULL /*static, unused*/, (String_t*) &_stringLiteral359, /*hidden argument*/&Debug_LogError_m331_MethodInfo);
	}

IL_0015:
	{
		AnimatorStateInfo_t714  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern MethodInfo AnimationEvent_get_animatorClipInfo_m3560_MethodInfo;
extern "C" AnimatorClipInfo_t715  AnimationEvent_get_animatorClipInfo_m3560 (AnimationEvent_t713 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m3557(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m3557_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m331(NULL /*static, unused*/, (String_t*) &_stringLiteral360, /*hidden argument*/&Debug_LogError_m331_MethodInfo);
	}

IL_0015:
	{
		AnimatorClipInfo_t715  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Keyframe_t100_il2cpp_TypeInfo;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
extern MethodInfo Keyframe__ctor_m311_MethodInfo;
extern "C" void Keyframe__ctor_m311 (Keyframe_t100 * __this, float ___time, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___time;
		__this->___m_Time_0 = L_0;
		float L_1 = ___value;
		__this->___m_Value_1 = L_1;
		__this->___m_InTangent_2 = (0.0f);
		__this->___m_OutTangent_3 = (0.0f);
		return;
	}
}
// System.Single UnityEngine.Keyframe::get_time()
extern MethodInfo Keyframe_get_time_m406_MethodInfo;
extern "C" float Keyframe_get_time_m406 (Keyframe_t100 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationCurve_t35_il2cpp_TypeInfo;
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"

extern MethodInfo AnimationCurve_GetKeys_m3565_MethodInfo;
extern MethodInfo AnimationCurve_GetKey_Internal_m3564_MethodInfo;
extern MethodInfo AnimationCurve_Init_m3566_MethodInfo;
extern MethodInfo AnimationCurve_Cleanup_m3562_MethodInfo;


// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern MethodInfo AnimationCurve__ctor_m312_MethodInfo;
extern "C" void AnimationCurve__ctor_m312 (AnimationCurve_t35 * __this, KeyframeU5BU5D_t99* ___keys, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		KeyframeU5BU5D_t99* L_0 = ___keys;
		AnimationCurve_Init_m3566(__this, L_0, /*hidden argument*/&AnimationCurve_Init_m3566_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern MethodInfo AnimationCurve__ctor_m3561_MethodInfo;
extern "C" void AnimationCurve__ctor_m3561 (AnimationCurve_t35 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		AnimationCurve_Init_m3566(__this, (KeyframeU5BU5D_t99*)(KeyframeU5BU5D_t99*)NULL, /*hidden argument*/&AnimationCurve_Init_m3566_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3562 (AnimationCurve_t35 * __this, MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m3562_ftn) (AnimationCurve_t35 *);
	static AnimationCurve_Cleanup_m3562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m3562_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern MethodInfo AnimationCurve_Finalize_m3563_MethodInfo;
extern "C" void AnimationCurve_Finalize_m3563 (AnimationCurve_t35 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m3562(__this, /*hidden argument*/&AnimationCurve_Cleanup_m3562_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern MethodInfo AnimationCurve_Evaluate_m314_MethodInfo;
extern "C" float AnimationCurve_Evaluate_m314 (AnimationCurve_t35 * __this, float ___time, MethodInfo* method)
{
	typedef float (*AnimationCurve_Evaluate_m314_ftn) (AnimationCurve_t35 *, float);
	static AnimationCurve_Evaluate_m314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Evaluate_m314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Evaluate(System.Single)");
	return _il2cpp_icall_func(__this, ___time);
}
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern MethodInfo AnimationCurve_get_keys_m403_MethodInfo;
extern "C" KeyframeU5BU5D_t99* AnimationCurve_get_keys_m403 (AnimationCurve_t35 * __this, MethodInfo* method)
{
	{
		KeyframeU5BU5D_t99* L_0 = AnimationCurve_GetKeys_m3565(__this, /*hidden argument*/&AnimationCurve_GetKeys_m3565_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern MethodInfo AnimationCurve_get_Item_m405_MethodInfo;
extern "C" Keyframe_t100  AnimationCurve_get_Item_m405 (AnimationCurve_t35 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Keyframe_t100  L_1 = AnimationCurve_GetKey_Internal_m3564(__this, L_0, /*hidden argument*/&AnimationCurve_GetKey_Internal_m3564_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern MethodInfo AnimationCurve_get_length_m404_MethodInfo;
extern "C" int32_t AnimationCurve_get_length_m404 (AnimationCurve_t35 * __this, MethodInfo* method)
{
	typedef int32_t (*AnimationCurve_get_length_m404_ftn) (AnimationCurve_t35 *);
	static AnimationCurve_get_length_m404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_get_length_m404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::get_length()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t100  AnimationCurve_GetKey_Internal_m3564 (AnimationCurve_t35 * __this, int32_t ___index, MethodInfo* method)
{
	typedef Keyframe_t100  (*AnimationCurve_GetKey_Internal_m3564_ftn) (AnimationCurve_t35 *, int32_t);
	static AnimationCurve_GetKey_Internal_m3564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_GetKey_Internal_m3564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t99* AnimationCurve_GetKeys_m3565 (AnimationCurve_t35 * __this, MethodInfo* method)
{
	typedef KeyframeU5BU5D_t99* (*AnimationCurve_GetKeys_m3565_ftn) (AnimationCurve_t35 *);
	static AnimationCurve_GetKeys_m3565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_GetKeys_m3565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::GetKeys()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3566 (AnimationCurve_t35 * __this, KeyframeU5BU5D_t99* ___keys, MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m3566_ftn) (AnimationCurve_t35 *, KeyframeU5BU5D_t99*);
	static AnimationCurve_Init_m3566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m3566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t35_marshal(const AnimationCurve_t35& unmarshaled, AnimationCurve_t35_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AnimationCurve_t35_marshal_back(const AnimationCurve_t35_marshaled& marshaled, AnimationCurve_t35& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t35_marshal_cleanup(AnimationCurve_t35_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationState_t712_il2cpp_TypeInfo;
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorClipInfo_t715_il2cpp_TypeInfo;
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorStateInfo_t714_il2cpp_TypeInfo;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern MethodInfo Animator_StringToHash_m3585_MethodInfo;


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern MethodInfo AnimatorStateInfo_IsName_m3567_MethodInfo;
extern "C" bool AnimatorStateInfo_IsName_m3567 (AnimatorStateInfo_t714 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3585(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3585_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern MethodInfo AnimatorStateInfo_get_fullPathHash_m3568_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m3568 (AnimatorStateInfo_t714 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern MethodInfo AnimatorStateInfo_get_nameHash_m3569_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_nameHash_m3569 (AnimatorStateInfo_t714 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern MethodInfo AnimatorStateInfo_get_shortNameHash_m3570_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m3570 (AnimatorStateInfo_t714 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern MethodInfo AnimatorStateInfo_get_normalizedTime_m3571_MethodInfo;
extern "C" float AnimatorStateInfo_get_normalizedTime_m3571 (AnimatorStateInfo_t714 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern MethodInfo AnimatorStateInfo_get_length_m3572_MethodInfo;
extern "C" float AnimatorStateInfo_get_length_m3572 (AnimatorStateInfo_t714 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern MethodInfo AnimatorStateInfo_get_tagHash_m3573_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_tagHash_m3573 (AnimatorStateInfo_t714 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern MethodInfo AnimatorStateInfo_IsTag_m3574_MethodInfo;
extern "C" bool AnimatorStateInfo_IsTag_m3574 (AnimatorStateInfo_t714 * __this, String_t* ___tag, MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m3585(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3585_MethodInfo);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern MethodInfo AnimatorStateInfo_get_loop_m3575_MethodInfo;
extern "C" bool AnimatorStateInfo_get_loop_m3575 (AnimatorStateInfo_t714 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorTransitionInfo_t717_il2cpp_TypeInfo;
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsName_m3576_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsName_m3576 (AnimatorTransitionInfo_t717 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3585(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3585_MethodInfo);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m3585(NULL /*static, unused*/, L_3, /*hidden argument*/&Animator_StringToHash_m3585_MethodInfo);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsUserName_m3577_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsUserName_m3577 (AnimatorTransitionInfo_t717 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3585(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3585_MethodInfo);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern MethodInfo AnimatorTransitionInfo_get_fullPathHash_m3578_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m3578 (AnimatorTransitionInfo_t717 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern MethodInfo AnimatorTransitionInfo_get_nameHash_m3579_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m3579 (AnimatorTransitionInfo_t717 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern MethodInfo AnimatorTransitionInfo_get_userNameHash_m3580_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m3580 (AnimatorTransitionInfo_t717 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern MethodInfo AnimatorTransitionInfo_get_normalizedTime_m3581_MethodInfo;
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m3581 (AnimatorTransitionInfo_t717 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern MethodInfo AnimatorTransitionInfo_get_anyState_m3582_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_anyState_m3582 (AnimatorTransitionInfo_t717 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern MethodInfo AnimatorTransitionInfo_get_entry_m3583_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_entry_m3583 (AnimatorTransitionInfo_t717 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern MethodInfo AnimatorTransitionInfo_get_exit_m3584_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_exit_m3584 (AnimatorTransitionInfo_t717 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t717_marshal(const AnimatorTransitionInfo_t717& unmarshaled, AnimatorTransitionInfo_t717_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t717_marshal_back(const AnimatorTransitionInfo_t717_marshaled& marshaled, AnimatorTransitionInfo_t717& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t717_marshal_cleanup(AnimatorTransitionInfo_t717_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Animator_t414_il2cpp_TypeInfo;

// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
extern MethodInfo Animator_SetTriggerString_m3586_MethodInfo;
extern MethodInfo Animator_ResetTriggerString_m3587_MethodInfo;


// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern MethodInfo Animator_SetTrigger_m2566_MethodInfo;
extern "C" void Animator_SetTrigger_m2566 (Animator_t414 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m3586(__this, L_0, /*hidden argument*/&Animator_SetTriggerString_m3586_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern MethodInfo Animator_ResetTrigger_m2565_MethodInfo;
extern "C" void Animator_ResetTrigger_m2565 (Animator_t414 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m3587(__this, L_0, /*hidden argument*/&Animator_ResetTriggerString_m3587_MethodInfo);
		return;
	}
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern MethodInfo Animator_get_runtimeAnimatorController_m2564_MethodInfo;
extern "C" RuntimeAnimatorController_t511 * Animator_get_runtimeAnimatorController_m2564 (Animator_t414 * __this, MethodInfo* method)
{
	typedef RuntimeAnimatorController_t511 * (*Animator_get_runtimeAnimatorController_m2564_ftn) (Animator_t414 *);
	static Animator_get_runtimeAnimatorController_m2564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m2564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m3585 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m3585_ftn) (String_t*);
	static Animator_StringToHash_m3585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m3585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m3586 (Animator_t414 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m3586_ftn) (Animator_t414 *, String_t*);
	static Animator_SetTriggerString_m3586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m3586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m3587 (Animator_t414 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m3587_ftn) (Animator_t414 *, String_t*);
	static Animator_ResetTriggerString_m3587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m3587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SkeletonBone_t718_il2cpp_TypeInfo;
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t718_marshal(const SkeletonBone_t718& unmarshaled, SkeletonBone_t718_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t718_marshal_back(const SkeletonBone_t718_marshaled& marshaled, SkeletonBone_t718& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t718_marshal_cleanup(SkeletonBone_t718_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanLimit_t719_il2cpp_TypeInfo;
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanBone_t720_il2cpp_TypeInfo;
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern MethodInfo HumanBone_get_boneName_m3588_MethodInfo;
extern "C" String_t* HumanBone_get_boneName_m3588 (HumanBone_t720 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern MethodInfo HumanBone_set_boneName_m3589_MethodInfo;
extern "C" void HumanBone_set_boneName_m3589 (HumanBone_t720 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern MethodInfo HumanBone_get_humanName_m3590_MethodInfo;
extern "C" String_t* HumanBone_get_humanName_m3590 (HumanBone_t720 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern MethodInfo HumanBone_set_humanName_m3591_MethodInfo;
extern "C" void HumanBone_set_humanName_m3591 (HumanBone_t720 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t720_marshal(const HumanBone_t720& unmarshaled, HumanBone_t720_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t720_marshal_back(const HumanBone_t720_marshaled& marshaled, HumanBone_t720& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t720_marshal_cleanup(HumanBone_t720_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RuntimeAnimatorController_t511_il2cpp_TypeInfo;
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"



// UnityEngine.Terrain
#include "UnityEngine_UnityEngine_Terrain.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Terrain_t721_il2cpp_TypeInfo;
// UnityEngine.Terrain
#include "UnityEngine_UnityEngine_TerrainMethodDeclarations.h"



// System.Void UnityEngine.Terrain::.ctor()
extern MethodInfo Terrain__ctor_m3592_MethodInfo;
extern "C" void Terrain__ctor_m3592 (Terrain_t721 * __this, MethodInfo* method)
{
	{
		Behaviour__ctor_m3371(__this, /*hidden argument*/&Behaviour__ctor_m3371_MethodInfo);
		return;
	}
}
// UnityEngine.TextAlignment
#include "UnityEngine_UnityEngine_TextAlignment.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAlignment_t722_il2cpp_TypeInfo;
// UnityEngine.TextAlignment
#include "UnityEngine_UnityEngine_TextAlignmentMethodDeclarations.h"



// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAnchor_t520_il2cpp_TypeInfo;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HorizontalWrapMode_t553_il2cpp_TypeInfo;
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VerticalWrapMode_t554_il2cpp_TypeInfo;
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUIText.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUIText_t157_il2cpp_TypeInfo;
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"

extern MethodInfo GUIText_Internal_GetPixelOffset_m3593_MethodInfo;
extern MethodInfo GUIText_Internal_SetPixelOffset_m3594_MethodInfo;
extern MethodInfo GUIText_INTERNAL_set_color_m3596_MethodInfo;
extern MethodInfo GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3595_MethodInfo;


// System.String UnityEngine.GUIText::get_text()
extern MethodInfo GUIText_get_text_m895_MethodInfo;
extern "C" String_t* GUIText_get_text_m895 (GUIText_t157 * __this, MethodInfo* method)
{
	typedef String_t* (*GUIText_get_text_m895_ftn) (GUIText_t157 *);
	static GUIText_get_text_m895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_get_text_m895_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIText::set_text(System.String)
extern MethodInfo GUIText_set_text_m825_MethodInfo;
extern "C" void GUIText_set_text_m825 (GUIText_t157 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*GUIText_set_text_m825_ftn) (GUIText_t157 *, String_t*);
	static GUIText_set_text_m825_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_set_text_m825_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIText::Internal_GetPixelOffset(UnityEngine.Vector2&)
extern "C" void GUIText_Internal_GetPixelOffset_m3593 (GUIText_t157 * __this, Vector2_t62 * ___output, MethodInfo* method)
{
	typedef void (*GUIText_Internal_GetPixelOffset_m3593_ftn) (GUIText_t157 *, Vector2_t62 *);
	static GUIText_Internal_GetPixelOffset_m3593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_Internal_GetPixelOffset_m3593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::Internal_GetPixelOffset(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___output);
}
// System.Void UnityEngine.GUIText::Internal_SetPixelOffset(UnityEngine.Vector2)
extern "C" void GUIText_Internal_SetPixelOffset_m3594 (GUIText_t157 * __this, Vector2_t62  ___p, MethodInfo* method)
{
	{
		GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3595(NULL /*static, unused*/, __this, (&___p), /*hidden argument*/&GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3595_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIText::INTERNAL_CALL_Internal_SetPixelOffset(UnityEngine.GUIText,UnityEngine.Vector2&)
extern "C" void GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3595 (Object_t * __this /* static, unused */, GUIText_t157 * ___self, Vector2_t62 * ___p, MethodInfo* method)
{
	typedef void (*GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3595_ftn) (GUIText_t157 *, Vector2_t62 *);
	static GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3595_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3595_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::INTERNAL_CALL_Internal_SetPixelOffset(UnityEngine.GUIText,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___self, ___p);
}
// UnityEngine.Vector2 UnityEngine.GUIText::get_pixelOffset()
extern MethodInfo GUIText_get_pixelOffset_m834_MethodInfo;
extern "C" Vector2_t62  GUIText_get_pixelOffset_m834 (GUIText_t157 * __this, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		GUIText_Internal_GetPixelOffset_m3593(__this, (&V_0), /*hidden argument*/&GUIText_Internal_GetPixelOffset_m3593_MethodInfo);
		Vector2_t62  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUIText::set_pixelOffset(UnityEngine.Vector2)
extern MethodInfo GUIText_set_pixelOffset_m824_MethodInfo;
extern "C" void GUIText_set_pixelOffset_m824 (GUIText_t157 * __this, Vector2_t62  ___value, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = ___value;
		GUIText_Internal_SetPixelOffset_m3594(__this, L_0, /*hidden argument*/&GUIText_Internal_SetPixelOffset_m3594_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIText::set_alignment(UnityEngine.TextAlignment)
extern MethodInfo GUIText_set_alignment_m908_MethodInfo;
extern "C" void GUIText_set_alignment_m908 (GUIText_t157 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GUIText_set_alignment_m908_ftn) (GUIText_t157 *, int32_t);
	static GUIText_set_alignment_m908_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_set_alignment_m908_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_alignment(UnityEngine.TextAlignment)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIText::set_anchor(UnityEngine.TextAnchor)
extern MethodInfo GUIText_set_anchor_m909_MethodInfo;
extern "C" void GUIText_set_anchor_m909 (GUIText_t157 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GUIText_set_anchor_m909_ftn) (GUIText_t157 *, int32_t);
	static GUIText_set_anchor_m909_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_set_anchor_m909_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_anchor(UnityEngine.TextAnchor)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIText::set_fontSize(System.Int32)
extern MethodInfo GUIText_set_fontSize_m823_MethodInfo;
extern "C" void GUIText_set_fontSize_m823 (GUIText_t157 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GUIText_set_fontSize_m823_ftn) (GUIText_t157 *, int32_t);
	static GUIText_set_fontSize_m823_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_set_fontSize_m823_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_fontSize(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIText::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void GUIText_INTERNAL_set_color_m3596 (GUIText_t157 * __this, Color_t17 * ___value, MethodInfo* method)
{
	typedef void (*GUIText_INTERNAL_set_color_m3596_ftn) (GUIText_t157 *, Color_t17 *);
	static GUIText_INTERNAL_set_color_m3596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_INTERNAL_set_color_m3596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIText::set_color(UnityEngine.Color)
extern MethodInfo GUIText_set_color_m899_MethodInfo;
extern "C" void GUIText_set_color_m899 (GUIText_t157 * __this, Color_t17  ___value, MethodInfo* method)
{
	{
		GUIText_INTERNAL_set_color_m3596(__this, (&___value), /*hidden argument*/&GUIText_INTERNAL_set_color_m3596_MethodInfo);
		return;
	}
}
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMesh.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextMesh_t166_il2cpp_TypeInfo;
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMeshMethodDeclarations.h"

extern MethodInfo TextMesh_INTERNAL_set_color_m3597_MethodInfo;


// System.String UnityEngine.TextMesh::get_text()
extern MethodInfo TextMesh_get_text_m891_MethodInfo;
extern "C" String_t* TextMesh_get_text_m891 (TextMesh_t166 * __this, MethodInfo* method)
{
	typedef String_t* (*TextMesh_get_text_m891_ftn) (TextMesh_t166 *);
	static TextMesh_get_text_m891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_get_text_m891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern MethodInfo TextMesh_set_text_m796_MethodInfo;
extern "C" void TextMesh_set_text_m796 (TextMesh_t166 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*TextMesh_set_text_m796_ftn) (TextMesh_t166 *, String_t*);
	static TextMesh_set_text_m796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_text_m796_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TextMesh::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void TextMesh_INTERNAL_set_color_m3597 (TextMesh_t166 * __this, Color_t17 * ___value, MethodInfo* method)
{
	typedef void (*TextMesh_INTERNAL_set_color_m3597_ftn) (TextMesh_t166 *, Color_t17 *);
	static TextMesh_INTERNAL_set_color_m3597_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_INTERNAL_set_color_m3597_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
extern MethodInfo TextMesh_set_color_m799_MethodInfo;
extern "C" void TextMesh_set_color_m799 (TextMesh_t166 * __this, Color_t17  ___value, MethodInfo* method)
{
	{
		TextMesh_INTERNAL_set_color_m3597(__this, (&___value), /*hidden argument*/&TextMesh_INTERNAL_set_color_m3597_MethodInfo);
		return;
	}
}
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CharacterInfo_t723_il2cpp_TypeInfo;
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

extern TypeInfo Vector2_t62_il2cpp_TypeInfo;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern MethodInfo Rect_get_width_m827_MethodInfo;
extern MethodInfo Rect_get_height_m2306_MethodInfo;
extern MethodInfo Rect_get_x_m836_MethodInfo;
extern MethodInfo Rect_get_y_m837_MethodInfo;
extern MethodInfo Vector2__ctor_m252_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomLeftUnFlipped_m3606_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopLeftUnFlipped_m3609_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomRightUnFlipped_m3607_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopRightUnFlipped_m3608_MethodInfo;


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern MethodInfo CharacterInfo_get_advance_m3598_MethodInfo;
extern "C" int32_t CharacterInfo_get_advance_m3598 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern MethodInfo CharacterInfo_get_glyphWidth_m3599_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphWidth_m3599 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		Rect_t213 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m827(L_0, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern MethodInfo CharacterInfo_get_glyphHeight_m3600_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphHeight_m3600 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		Rect_t213 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m2306(L_0, /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern MethodInfo CharacterInfo_get_bearing_m3601_MethodInfo;
extern "C" int32_t CharacterInfo_get_bearing_m3601 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		Rect_t213 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m836(L_0, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern MethodInfo CharacterInfo_get_minY_m3602_MethodInfo;
extern "C" int32_t CharacterInfo_get_minY_m3602 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t213 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m837(L_1, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		Rect_t213 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m2306(L_3, /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern MethodInfo CharacterInfo_get_maxY_m3603_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxY_m3603 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t213 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m837(L_1, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern MethodInfo CharacterInfo_get_minX_m3604_MethodInfo;
extern "C" int32_t CharacterInfo_get_minX_m3604 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		Rect_t213 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m836(L_0, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern MethodInfo CharacterInfo_get_maxX_m3605_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxX_m3605 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		Rect_t213 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m836(L_0, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		Rect_t213 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m827(L_2, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t62  CharacterInfo_get_uvBottomLeftUnFlipped_m3606 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		Rect_t213 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m836(L_0, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		Rect_t213 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m837(L_2, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		Vector2_t62  L_4 = {0};
		Vector2__ctor_m252(&L_4, L_1, L_3, /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t62  CharacterInfo_get_uvBottomRightUnFlipped_m3607 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		Rect_t213 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m836(L_0, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		Rect_t213 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m827(L_2, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		Rect_t213 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m837(L_4, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		Vector2_t62  L_6 = {0};
		Vector2__ctor_m252(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t62  CharacterInfo_get_uvTopRightUnFlipped_m3608 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		Rect_t213 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m836(L_0, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		Rect_t213 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m827(L_2, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		Rect_t213 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m837(L_4, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		Rect_t213 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m2306(L_6, /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		Vector2_t62  L_8 = {0};
		Vector2__ctor_m252(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t62  CharacterInfo_get_uvTopLeftUnFlipped_m3609 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	{
		Rect_t213 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m836(L_0, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		Rect_t213 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m837(L_2, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		Rect_t213 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m2306(L_4, /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		Vector2_t62  L_6 = {0};
		Vector2__ctor_m252(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern MethodInfo CharacterInfo_get_uvBottomLeft_m3610_MethodInfo;
extern "C" Vector2_t62  CharacterInfo_get_uvBottomLeft_m3610 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	Vector2_t62  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t62  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m3606(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m3606_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t62  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m3606(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m3606_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern MethodInfo CharacterInfo_get_uvBottomRight_m3611_MethodInfo;
extern "C" Vector2_t62  CharacterInfo_get_uvBottomRight_m3611 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	Vector2_t62  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t62  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m3609(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m3609_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t62  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m3607(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m3607_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern MethodInfo CharacterInfo_get_uvTopRight_m3612_MethodInfo;
extern "C" Vector2_t62  CharacterInfo_get_uvTopRight_m3612 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	Vector2_t62  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t62  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m3608(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m3608_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t62  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m3608(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m3608_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern MethodInfo CharacterInfo_get_uvTopLeft_m3613_MethodInfo;
extern "C" Vector2_t62  CharacterInfo_get_uvTopLeft_m3613 (CharacterInfo_t723 * __this, MethodInfo* method)
{
	Vector2_t62  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t62  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m3607(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m3607_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t62  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m3609(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m3609_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t723_marshal(const CharacterInfo_t723& unmarshaled, CharacterInfo_t723_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t723_marshal_back(const CharacterInfo_t723_marshaled& marshaled, CharacterInfo_t723& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t723_marshal_cleanup(CharacterInfo_t723_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FontTextureRebuildCallback_t724_il2cpp_TypeInfo;
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo FontTextureRebuildCallback__ctor_m3614_MethodInfo;
extern "C" void FontTextureRebuildCallback__ctor_m3614 (FontTextureRebuildCallback_t724 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern MethodInfo FontTextureRebuildCallback_Invoke_m3615_MethodInfo;
extern "C" void FontTextureRebuildCallback_Invoke_m3615 (FontTextureRebuildCallback_t724 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m3615((FontTextureRebuildCallback_t724 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t724(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo FontTextureRebuildCallback_BeginInvoke_m3616_MethodInfo;
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m3616 (FontTextureRebuildCallback_t724 * __this, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo FontTextureRebuildCallback_EndInvoke_m3617_MethodInfo;
extern "C" void FontTextureRebuildCallback_EndInvoke_m3617 (FontTextureRebuildCallback_t724 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Font_t339_il2cpp_TypeInfo;
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo Action_1_t486_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
extern Il2CppType Action_1_t486_0_0_0;
extern MethodInfo Action_1_Invoke_m3893_MethodInfo;
extern Il2CppGenericMethod Action_1_Invoke_m3893_GenericMethod;


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_add_textureRebuilt_m2285_MethodInfo;
extern TypeInfo* Action_1_t486_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m2285 (Object_t * __this /* static, unused */, Action_1_t486 * ___value, MethodInfo* method)
{
	static bool Font_add_textureRebuilt_m2285_init;
	if (!Font_add_textureRebuilt_m2285_init)
	{
		Action_1_t486_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t486_0_0_0);
		Font_add_textureRebuilt_m2285_init = true;
	}
	{
		Action_1_t486 * L_0 = ((Font_t339_StaticFields*)InitializedTypeInfo(&Font_t339_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t486 * L_1 = ___value;
		Delegate_t493 * L_2 = Delegate_Combine_m2321(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		((Font_t339_StaticFields*)InitializedTypeInfo(&Font_t339_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t486 *)Castclass(L_2, Action_1_t486_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_remove_textureRebuilt_m3618_MethodInfo;
extern TypeInfo* Action_1_t486_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m3618 (Object_t * __this /* static, unused */, Action_1_t486 * ___value, MethodInfo* method)
{
	static bool Font_remove_textureRebuilt_m3618_init;
	if (!Font_remove_textureRebuilt_m3618_init)
	{
		Action_1_t486_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t486_0_0_0);
		Font_remove_textureRebuilt_m3618_init = true;
	}
	{
		Action_1_t486 * L_0 = ((Font_t339_StaticFields*)InitializedTypeInfo(&Font_t339_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t486 * L_1 = ___value;
		Delegate_t493 * L_2 = Delegate_Remove_m2322(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m2322_MethodInfo);
		((Font_t339_StaticFields*)InitializedTypeInfo(&Font_t339_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t486 *)Castclass(L_2, Action_1_t486_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern MethodInfo Font_get_material_m2588_MethodInfo;
extern "C" Material_t4 * Font_get_material_m2588 (Font_t339 * __this, MethodInfo* method)
{
	typedef Material_t4 * (*Font_get_material_m2588_ftn) (Font_t339 *);
	static Font_get_material_m2588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m2588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern MethodInfo Font_HasCharacter_m2444_MethodInfo;
extern "C" bool Font_HasCharacter_m2444 (Font_t339 * __this, uint16_t ___c, MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m2444_ftn) (Font_t339 *, uint16_t);
	static Font_HasCharacter_m2444_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m2444_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern MethodInfo Font_InvokeTextureRebuilt_Internal_m3619_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3893_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m3619 (Object_t * __this /* static, unused */, Font_t339 * ___font, MethodInfo* method)
{
	static bool Font_InvokeTextureRebuilt_Internal_m3619_init;
	if (!Font_InvokeTextureRebuilt_Internal_m3619_init)
	{
		Action_1_Invoke_m3893_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3893_GenericMethod);
		Font_InvokeTextureRebuilt_Internal_m3619_init = true;
	}
	Action_1_t486 * V_0 = {0};
	{
		Action_1_t486 * L_0 = ((Font_t339_StaticFields*)InitializedTypeInfo(&Font_t339_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t486 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t486 * L_2 = V_0;
		Font_t339 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t339 * >::Invoke(Action_1_Invoke_m3893_MethodInfo_var, L_2, L_3);
	}

IL_0013:
	{
		Font_t339 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t724 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t339 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t724 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(&FontTextureRebuildCallback_Invoke_m3615_MethodInfo, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern MethodInfo Font_get_dynamic_m2590_MethodInfo;
extern "C" bool Font_get_dynamic_m2590 (Font_t339 * __this, MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m2590_ftn) (Font_t339 *);
	static Font_get_dynamic_m2590_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m2590_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern MethodInfo Font_get_fontSize_m2592_MethodInfo;
extern "C" int32_t Font_get_fontSize_m2592 (Font_t339 * __this, MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m2592_ftn) (Font_t339 *);
	static Font_get_fontSize_m2592_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m2592_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UICharInfo_t504_il2cpp_TypeInfo;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UILineInfo_t502_il2cpp_TypeInfo;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerator_t389_il2cpp_TypeInfo;
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_22.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
extern TypeInfo Mathf_t94_il2cpp_TypeInfo;
extern TypeInfo List_1_t352_il2cpp_TypeInfo;
extern TypeInfo List_1_t725_il2cpp_TypeInfo;
extern TypeInfo List_1_t726_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t231_il2cpp_TypeInfo;
extern TypeInfo TextGenerationSettings_t423_il2cpp_TypeInfo;
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_11MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_22MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern Il2CppType List_1_t352_0_0_0;
extern Il2CppType List_1_t725_0_0_0;
extern Il2CppType List_1_t726_0_0_0;
extern MethodInfo String_IsNullOrEmpty_m2457_MethodInfo;
extern MethodInfo String_get_Length_m893_MethodInfo;
extern MethodInfo TextGenerator_get_vertexCount_m3626_MethodInfo;
extern MethodInfo Mathf_Max_m2449_MethodInfo;
extern MethodInfo Mathf_Min_m2451_MethodInfo;
extern MethodInfo TextGenerator_GetVertices_m3638_MethodInfo;
extern MethodInfo TextGenerator_GetCharacters_m3636_MethodInfo;
extern MethodInfo TextGenerator_GetLines_m3637_MethodInfo;
extern MethodInfo TextGenerator__ctor_m2586_MethodInfo;
extern MethodInfo List_1__ctor_m3894_MethodInfo;
extern MethodInfo List_1__ctor_m3895_MethodInfo;
extern MethodInfo List_1__ctor_m3896_MethodInfo;
extern MethodInfo TextGenerator_Init_m3621_MethodInfo;
extern MethodInfo TextGenerator_Dispose_cpp_m3622_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_cpp_m3624_MethodInfo;
extern MethodInfo TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3625_MethodInfo;
extern MethodInfo IDisposable_Dispose_m861_MethodInfo;
extern MethodInfo TextGenerator_GetCharactersInternal_m3630_MethodInfo;
extern MethodInfo TextGenerator_GetLinesInternal_m3632_MethodInfo;
extern MethodInfo TextGenerator_GetVerticesInternal_m3627_MethodInfo;
extern MethodInfo TextGenerator_Populate_m2458_MethodInfo;
extern MethodInfo TextGenerator_get_rectExtents_m2460_MethodInfo;
extern MethodInfo String_op_Equality_m880_MethodInfo;
extern MethodInfo TextGenerationSettings_Equals_m3771_MethodInfo;
extern MethodInfo TextGenerator_PopulateAlways_m3639_MethodInfo;
extern MethodInfo TextGenerator_ValidatedSettings_m3635_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_m3623_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3894_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3895_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3896_GenericMethod;


// System.Void UnityEngine.TextGenerator::.ctor()
extern MethodInfo TextGenerator__ctor_m2409_MethodInfo;
extern "C" void TextGenerator__ctor_m2409 (TextGenerator_t389 * __this, MethodInfo* method)
{
	{
		TextGenerator__ctor_m2586(__this, ((int32_t)50), /*hidden argument*/&TextGenerator__ctor_m2586_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t352_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t725_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t726_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3894_MethodInfo_var;
extern MethodInfo* List_1__ctor_m3895_MethodInfo_var;
extern MethodInfo* List_1__ctor_m3896_MethodInfo_var;
extern "C" void TextGenerator__ctor_m2586 (TextGenerator_t389 * __this, int32_t ___initialCapacity, MethodInfo* method)
{
	static bool TextGenerator__ctor_m2586_init;
	if (!TextGenerator__ctor_m2586_init)
	{
		List_1_t352_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t352_0_0_0);
		List_1_t725_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t725_0_0_0);
		List_1_t726_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t726_0_0_0);
		List_1__ctor_m3894_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3894_GenericMethod);
		List_1__ctor_m3895_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3895_GenericMethod);
		List_1__ctor_m3896_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3896_GenericMethod);
		TextGenerator__ctor_m2586_init = true;
	}
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		int32_t L_0 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t352_il2cpp_TypeInfo_var);
		List_1_t352 * L_1 = (List_1_t352 *)il2cpp_codegen_object_new (List_1_t352_il2cpp_TypeInfo_var);
		List_1__ctor_m3894(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m3894_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t725_il2cpp_TypeInfo_var);
		List_1_t725 * L_3 = (List_1_t725 *)il2cpp_codegen_object_new (List_1_t725_il2cpp_TypeInfo_var);
		List_1__ctor_m3895(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m3895_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t726_il2cpp_TypeInfo_var);
		List_1_t726 * L_4 = (List_1_t726 *)il2cpp_codegen_object_new (List_1_t726_il2cpp_TypeInfo_var);
		List_1__ctor_m3896(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m3896_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m3621(__this, /*hidden argument*/&TextGenerator_Init_m3621_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern MethodInfo TextGenerator_System_IDisposable_Dispose_m3620_MethodInfo;
extern "C" void TextGenerator_System_IDisposable_Dispose_m3620 (TextGenerator_t389 * __this, MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m3622(__this, /*hidden argument*/&TextGenerator_Dispose_cpp_m3622_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m3621 (TextGenerator_t389 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m3621_ftn) (TextGenerator_t389 *);
	static TextGenerator_Init_m3621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m3621_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m3622 (TextGenerator_t389 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m3622_ftn) (TextGenerator_t389 *);
	static TextGenerator_Dispose_cpp_m3622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m3622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m3623 (TextGenerator_t389 * __this, String_t* ___str, Font_t339 * ___font, Color_t17  ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t62  ___extents, Vector2_t62  ___pivot, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t339 * L_1 = ___font;
		Color_t17  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ((&___extents)->___x_1);
		float L_15 = ((&___extents)->___y_2);
		float L_16 = ((&___pivot)->___x_1);
		float L_17 = ((&___pivot)->___y_2);
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_Populate_Internal_cpp_m3624(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/&TextGenerator_Populate_Internal_cpp_m3624_MethodInfo);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m3624 (TextGenerator_t389 * __this, String_t* ___str, Font_t339 * ___font, Color_t17  ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t339 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___lineSpacing;
		int32_t L_4 = ___style;
		bool L_5 = ___richText;
		bool L_6 = ___resizeTextForBestFit;
		int32_t L_7 = ___resizeTextMinSize;
		int32_t L_8 = ___resizeTextMaxSize;
		int32_t L_9 = ___verticalOverFlow;
		int32_t L_10 = ___horizontalOverflow;
		bool L_11 = ___updateBounds;
		int32_t L_12 = ___anchor;
		float L_13 = ___extentsX;
		float L_14 = ___extentsY;
		float L_15 = ___pivotX;
		float L_16 = ___pivotY;
		bool L_17 = ___generateOutOfBounds;
		bool L_18 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3625(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/&TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3625_MethodInfo);
		return L_18;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3625 (Object_t * __this /* static, unused */, TextGenerator_t389 * ___self, String_t* ___str, Font_t339 * ___font, Color_t17 * ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3625_ftn) (TextGenerator_t389 *, String_t*, Font_t339 *, Color_t17 *, int32_t, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3625_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t213  TextGenerator_get_rectExtents_m2460 (TextGenerator_t389 * __this, MethodInfo* method)
{
	typedef Rect_t213  (*TextGenerator_get_rectExtents_m2460_ftn) (TextGenerator_t389 *);
	static TextGenerator_get_rectExtents_m2460_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_rectExtents_m2460_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m3626 (TextGenerator_t389 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m3626_ftn) (TextGenerator_t389 *);
	static TextGenerator_get_vertexCount_m3626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m3626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m3627 (TextGenerator_t389 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m3627_ftn) (TextGenerator_t389 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m3627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m3627_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern MethodInfo TextGenerator_GetVerticesArray_m3628_MethodInfo;
extern "C" UIVertexU5BU5D_t388* TextGenerator_GetVerticesArray_m3628 (TextGenerator_t389 * __this, MethodInfo* method)
{
	typedef UIVertexU5BU5D_t388* (*TextGenerator_GetVerticesArray_m3628_ftn) (TextGenerator_t389 *);
	static TextGenerator_GetVerticesArray_m3628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m3628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern MethodInfo TextGenerator_get_characterCount_m3629_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCount_m3629 (TextGenerator_t389 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m3629_ftn) (TextGenerator_t389 *);
	static TextGenerator_get_characterCount_m3629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m3629_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern MethodInfo TextGenerator_get_characterCountVisible_m2437_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCountVisible_m2437 (TextGenerator_t389 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_IsNullOrEmpty_m2457(NULL /*static, unused*/, L_0, /*hidden argument*/&String_IsNullOrEmpty_m2457_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m893(L_2, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		int32_t L_4 = TextGenerator_get_vertexCount_m3626(__this, /*hidden argument*/&TextGenerator_get_vertexCount_m3626_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		int32_t L_5 = Mathf_Max_m2449(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/&Mathf_Max_m2449_MethodInfo);
		int32_t L_6 = Mathf_Min_m2451(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Mathf_Min_m2451_MethodInfo);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m3630 (TextGenerator_t389 * __this, Object_t * ___characters, MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m3630_ftn) (TextGenerator_t389 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m3630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m3630_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern MethodInfo TextGenerator_GetCharactersArray_m3631_MethodInfo;
extern "C" UICharInfoU5BU5D_t727* TextGenerator_GetCharactersArray_m3631 (TextGenerator_t389 * __this, MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t727* (*TextGenerator_GetCharactersArray_m3631_ftn) (TextGenerator_t389 *);
	static TextGenerator_GetCharactersArray_m3631_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m3631_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern MethodInfo TextGenerator_get_lineCount_m2436_MethodInfo;
extern "C" int32_t TextGenerator_get_lineCount_m2436 (TextGenerator_t389 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m2436_ftn) (TextGenerator_t389 *);
	static TextGenerator_get_lineCount_m2436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m2436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m3632 (TextGenerator_t389 * __this, Object_t * ___lines, MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m3632_ftn) (TextGenerator_t389 *, Object_t *);
	static TextGenerator_GetLinesInternal_m3632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m3632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern MethodInfo TextGenerator_GetLinesArray_m3633_MethodInfo;
extern "C" UILineInfoU5BU5D_t728* TextGenerator_GetLinesArray_m3633 (TextGenerator_t389 * __this, MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t728* (*TextGenerator_GetLinesArray_m3633_ftn) (TextGenerator_t389 *);
	static TextGenerator_GetLinesArray_m3633_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m3633_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern MethodInfo TextGenerator_get_fontSizeUsedForBestFit_m2478_MethodInfo;
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m2478 (TextGenerator_t389 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m2478_ftn) (TextGenerator_t389 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m2478_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m2478_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern MethodInfo TextGenerator_Finalize_m3634_MethodInfo;
extern "C" void TextGenerator_Finalize_m3634 (TextGenerator_t389 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t423  TextGenerator_ValidatedSettings_m3635 (TextGenerator_t389 * __this, TextGenerationSettings_t423  ___settings, MethodInfo* method)
{
	{
		Font_t339 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m225(NULL /*static, unused*/, L_0, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t339 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m2590(L_2, /*hidden argument*/&Font_get_dynamic_m2590_MethodInfo);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t423  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_5);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m329(NULL /*static, unused*/, (String_t*) &_stringLiteral361, /*hidden argument*/&Debug_LogWarning_m329_MethodInfo);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_5 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_7);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m329(NULL /*static, unused*/, (String_t*) &_stringLiteral362, /*hidden argument*/&Debug_LogWarning_m329_MethodInfo);
		(&___settings)->___resizeTextForBestFit_7 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t423  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern MethodInfo TextGenerator_Invalidate_m2595_MethodInfo;
extern "C" void TextGenerator_Invalidate_m2595 (TextGenerator_t389 * __this, MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m3636 (TextGenerator_t389 * __this, List_1_t725 * ___characters, MethodInfo* method)
{
	{
		List_1_t725 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m3630(__this, L_0, /*hidden argument*/&TextGenerator_GetCharactersInternal_m3630_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m3637 (TextGenerator_t389 * __this, List_1_t726 * ___lines, MethodInfo* method)
{
	{
		List_1_t726 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m3632(__this, L_0, /*hidden argument*/&TextGenerator_GetLinesInternal_m3632_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m3638 (TextGenerator_t389 * __this, List_1_t352 * ___vertices, MethodInfo* method)
{
	{
		List_1_t352 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m3627(__this, L_0, /*hidden argument*/&TextGenerator_GetVerticesInternal_m3627_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredWidth_m2593_MethodInfo;
extern "C" float TextGenerator_GetPreferredWidth_m2593 (TextGenerator_t389 * __this, String_t* ___str, TextGenerationSettings_t423  ___settings, MethodInfo* method)
{
	Rect_t213  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_12 = 1;
		(&___settings)->___verticalOverflow_11 = 1;
		(&___settings)->___updateBounds_10 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t423  L_1 = ___settings;
		TextGenerator_Populate_m2458(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2458_MethodInfo);
		Rect_t213  L_2 = TextGenerator_get_rectExtents_m2460(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2460_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_width_m827((&V_0), /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredHeight_m2594_MethodInfo;
extern "C" float TextGenerator_GetPreferredHeight_m2594 (TextGenerator_t389 * __this, String_t* ___str, TextGenerationSettings_t423  ___settings, MethodInfo* method)
{
	Rect_t213  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_11 = 1;
		(&___settings)->___updateBounds_10 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t423  L_1 = ___settings;
		TextGenerator_Populate_m2458(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2458_MethodInfo);
		Rect_t213  L_2 = TextGenerator_get_rectExtents_m2460(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2460_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_height_m2306((&V_0), /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_Populate_m2458 (TextGenerator_t389 * __this, String_t* ___str, TextGenerationSettings_t423  ___settings, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_op_Equality_m880(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Equality_m880_MethodInfo);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t423  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m3771((&___settings), L_4, /*hidden argument*/&TextGenerationSettings_Equals_m3771_MethodInfo);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t423  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m3639(__this, L_7, L_8, /*hidden argument*/&TextGenerator_PopulateAlways_m3639_MethodInfo);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m3639 (TextGenerator_t389 * __this, String_t* ___str, TextGenerationSettings_t423  ___settings, MethodInfo* method)
{
	TextGenerationSettings_t423  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t423  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t423  L_2 = ___settings;
		TextGenerationSettings_t423  L_3 = TextGenerator_ValidatedSettings_m3635(__this, L_2, /*hidden argument*/&TextGenerator_ValidatedSettings_m3635_MethodInfo);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t339 * L_5 = ((&V_0)->___font_0);
		Color_t17  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___lineSpacing_3);
		int32_t L_9 = ((&V_0)->___fontStyle_5);
		bool L_10 = ((&V_0)->___richText_4);
		bool L_11 = ((&V_0)->___resizeTextForBestFit_7);
		int32_t L_12 = ((&V_0)->___resizeTextMinSize_8);
		int32_t L_13 = ((&V_0)->___resizeTextMaxSize_9);
		int32_t L_14 = ((&V_0)->___verticalOverflow_11);
		int32_t L_15 = ((&V_0)->___horizontalOverflow_12);
		bool L_16 = ((&V_0)->___updateBounds_10);
		int32_t L_17 = ((&V_0)->___textAnchor_6);
		Vector2_t62  L_18 = ((&V_0)->___generationExtents_13);
		Vector2_t62  L_19 = ((&V_0)->___pivot_14);
		bool L_20 = ((&V_0)->___generateOutOfBounds_15);
		bool L_21 = TextGenerator_Populate_Internal_m3623(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/&TextGenerator_Populate_Internal_m3623_MethodInfo);
		__this->___m_LastValid_4 = L_21;
		bool L_22 = (__this->___m_LastValid_4);
		return L_22;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern MethodInfo TextGenerator_get_verts_m2596_MethodInfo;
extern "C" Object_t* TextGenerator_get_verts_m2596 (TextGenerator_t389 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t352 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m3638(__this, L_1, /*hidden argument*/&TextGenerator_GetVertices_m3638_MethodInfo);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t352 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern MethodInfo TextGenerator_get_characters_m2438_MethodInfo;
extern "C" Object_t* TextGenerator_get_characters_m2438 (TextGenerator_t389 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t725 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m3636(__this, L_1, /*hidden argument*/&TextGenerator_GetCharacters_m3636_MethodInfo);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t725 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern MethodInfo TextGenerator_get_lines_m2434_MethodInfo;
extern "C" Object_t* TextGenerator_get_lines_m2434 (TextGenerator_t389 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t726 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m3637(__this, L_1, /*hidden argument*/&TextGenerator_GetLines_m3637_MethodInfo);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t726 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderMode_t729_il2cpp_TypeInfo;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"



// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WillRenderCanvases_t484_il2cpp_TypeInfo;
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern MethodInfo WillRenderCanvases__ctor_m2262_MethodInfo;
extern "C" void WillRenderCanvases__ctor_m2262 (WillRenderCanvases_t484 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern MethodInfo WillRenderCanvases_Invoke_m3640_MethodInfo;
extern "C" void WillRenderCanvases_Invoke_m3640 (WillRenderCanvases_t484 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m3640((WillRenderCanvases_t484 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t484(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo WillRenderCanvases_BeginInvoke_m3641_MethodInfo;
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m3641 (WillRenderCanvases_t484 * __this, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern MethodInfo WillRenderCanvases_EndInvoke_m3642_MethodInfo;
extern "C" void WillRenderCanvases_EndInvoke_m3642 (WillRenderCanvases_t484 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Canvas_t347_il2cpp_TypeInfo;
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"

extern MethodInfo Canvas_SendWillRenderCanvases_m3644_MethodInfo;


// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_add_willRenderCanvases_m2263_MethodInfo;
extern "C" void Canvas_add_willRenderCanvases_m2263 (Object_t * __this /* static, unused */, WillRenderCanvases_t484 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t484 * L_0 = ((Canvas_t347_StaticFields*)InitializedTypeInfo(&Canvas_t347_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t484 * L_1 = ___value;
		Delegate_t493 * L_2 = Delegate_Combine_m2321(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		((Canvas_t347_StaticFields*)InitializedTypeInfo(&Canvas_t347_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t484 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t484_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_remove_willRenderCanvases_m3643_MethodInfo;
extern "C" void Canvas_remove_willRenderCanvases_m3643 (Object_t * __this /* static, unused */, WillRenderCanvases_t484 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t484 * L_0 = ((Canvas_t347_StaticFields*)InitializedTypeInfo(&Canvas_t347_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t484 * L_1 = ___value;
		Delegate_t493 * L_2 = Delegate_Remove_m2322(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m2322_MethodInfo);
		((Canvas_t347_StaticFields*)InitializedTypeInfo(&Canvas_t347_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t484 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t484_il2cpp_TypeInfo)));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern MethodInfo Canvas_get_renderMode_m2335_MethodInfo;
extern "C" int32_t Canvas_get_renderMode_m2335 (Canvas_t347 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m2335_ftn) (Canvas_t347 *);
	static Canvas_get_renderMode_m2335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m2335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern MethodInfo Canvas_get_isRootCanvas_m2616_MethodInfo;
extern "C" bool Canvas_get_isRootCanvas_m2616 (Canvas_t347 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m2616_ftn) (Canvas_t347 *);
	static Canvas_get_isRootCanvas_m2616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m2616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern MethodInfo Canvas_get_worldCamera_m2338_MethodInfo;
extern "C" Camera_t29 * Canvas_get_worldCamera_m2338 (Canvas_t347 * __this, MethodInfo* method)
{
	typedef Camera_t29 * (*Canvas_get_worldCamera_m2338_ftn) (Canvas_t347 *);
	static Canvas_get_worldCamera_m2338_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m2338_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern MethodInfo Canvas_get_scaleFactor_m2591_MethodInfo;
extern "C" float Canvas_get_scaleFactor_m2591 (Canvas_t347 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m2591_ftn) (Canvas_t347 *);
	static Canvas_get_scaleFactor_m2591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m2591_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern MethodInfo Canvas_set_scaleFactor_m2618_MethodInfo;
extern "C" void Canvas_set_scaleFactor_m2618 (Canvas_t347 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m2618_ftn) (Canvas_t347 *, float);
	static Canvas_set_scaleFactor_m2618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m2618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern MethodInfo Canvas_get_referencePixelsPerUnit_m2367_MethodInfo;
extern "C" float Canvas_get_referencePixelsPerUnit_m2367 (Canvas_t347 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m2367_ftn) (Canvas_t347 *);
	static Canvas_get_referencePixelsPerUnit_m2367_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m2367_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern MethodInfo Canvas_set_referencePixelsPerUnit_m2619_MethodInfo;
extern "C" void Canvas_set_referencePixelsPerUnit_m2619 (Canvas_t347 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m2619_ftn) (Canvas_t347 *, float);
	static Canvas_set_referencePixelsPerUnit_m2619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m2619_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern MethodInfo Canvas_get_pixelPerfect_m2314_MethodInfo;
extern "C" bool Canvas_get_pixelPerfect_m2314 (Canvas_t347 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m2314_ftn) (Canvas_t347 *);
	static Canvas_get_pixelPerfect_m2314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m2314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern MethodInfo Canvas_get_renderOrder_m2337_MethodInfo;
extern "C" int32_t Canvas_get_renderOrder_m2337 (Canvas_t347 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m2337_ftn) (Canvas_t347 *);
	static Canvas_get_renderOrder_m2337_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m2337_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern MethodInfo Canvas_get_sortingOrder_m2336_MethodInfo;
extern "C" int32_t Canvas_get_sortingOrder_m2336 (Canvas_t347 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m2336_ftn) (Canvas_t347 *);
	static Canvas_get_sortingOrder_m2336_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m2336_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
extern MethodInfo Canvas_get_sortingLayerID_m2347_MethodInfo;
extern "C" int32_t Canvas_get_sortingLayerID_m2347 (Canvas_t347 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingLayerID_m2347_ftn) (Canvas_t347 *);
	static Canvas_get_sortingLayerID_m2347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingLayerID_m2347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern MethodInfo Canvas_GetDefaultCanvasMaterial_m2290_MethodInfo;
extern "C" Material_t4 * Canvas_GetDefaultCanvasMaterial_m2290 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t4 * (*Canvas_GetDefaultCanvasMaterial_m2290_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m2290_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m2290_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern MethodInfo Canvas_GetDefaultCanvasTextMaterial_m2587_MethodInfo;
extern "C" Material_t4 * Canvas_GetDefaultCanvasTextMaterial_m2587 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t4 * (*Canvas_GetDefaultCanvasTextMaterial_m2587_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m2587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m2587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C" void Canvas_SendWillRenderCanvases_m3644 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		WillRenderCanvases_t484 * L_0 = ((Canvas_t347_StaticFields*)InitializedTypeInfo(&Canvas_t347_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t484 * L_1 = ((Canvas_t347_StaticFields*)InitializedTypeInfo(&Canvas_t347_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&WillRenderCanvases_Invoke_m3640_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern MethodInfo Canvas_ForceUpdateCanvases_m2529_MethodInfo;
extern "C" void Canvas_ForceUpdateCanvases_m2529 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m3644(NULL /*static, unused*/, /*hidden argument*/&Canvas_SendWillRenderCanvases_m3644_MethodInfo);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasGroup_t491_il2cpp_TypeInfo;
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"

extern MethodInfo CanvasGroup_get_blocksRaycasts_m3645_MethodInfo;


// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern MethodInfo CanvasGroup_get_interactable_m2552_MethodInfo;
extern "C" bool CanvasGroup_get_interactable_m2552 (CanvasGroup_t491 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m2552_ftn) (CanvasGroup_t491 *);
	static CanvasGroup_get_interactable_m2552_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m2552_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m3645 (CanvasGroup_t491 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m3645_ftn) (CanvasGroup_t491 *);
	static CanvasGroup_get_blocksRaycasts_m3645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m3645_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern MethodInfo CanvasGroup_get_ignoreParentGroups_m2312_MethodInfo;
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2312 (CanvasGroup_t491 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m2312_ftn) (CanvasGroup_t491 *);
	static CanvasGroup_get_ignoreParentGroups_m2312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m2312_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo CanvasGroup_IsRaycastLocationValid_m3646_MethodInfo;
extern "C" bool CanvasGroup_IsRaycastLocationValid_m3646 (CanvasGroup_t491 * __this, Vector2_t62  ___sp, Camera_t29 * ___eventCamera, MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m3645(__this, /*hidden argument*/&CanvasGroup_get_blocksRaycasts_m3645_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UIVertex_t370_il2cpp_TypeInfo;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern TypeInfo Color32_t471_il2cpp_TypeInfo;
extern TypeInfo Vector4_t91_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern MethodInfo Color32__ctor_m2278_MethodInfo;
extern MethodInfo Vector4__ctor_m214_MethodInfo;
extern MethodInfo Vector3_get_zero_m259_MethodInfo;
extern MethodInfo Vector3_get_back_m3213_MethodInfo;
extern MethodInfo Vector2_get_zero_m2173_MethodInfo;


// System.Void UnityEngine.UIVertex::.cctor()
extern MethodInfo UIVertex__cctor_m3647_MethodInfo;
extern "C" void UIVertex__cctor_m3647 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	UIVertex_t370  V_0 = {0};
	{
		Color32_t471  L_0 = {0};
		Color32__ctor_m2278(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/&Color32__ctor_m2278_MethodInfo);
		((UIVertex_t370_StaticFields*)InitializedTypeInfo(&UIVertex_t370_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t91  L_1 = {0};
		Vector4__ctor_m214(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		((UIVertex_t370_StaticFields*)InitializedTypeInfo(&UIVertex_t370_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (InitializedTypeInfo(&UIVertex_t370_il2cpp_TypeInfo), (&V_0));
		Vector3_t31  L_2 = Vector3_get_zero_m259(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m259_MethodInfo);
		(&V_0)->___position_0 = L_2;
		Vector3_t31  L_3 = Vector3_get_back_m3213(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m3213_MethodInfo);
		(&V_0)->___normal_1 = L_3;
		Vector4_t91  L_4 = ((UIVertex_t370_StaticFields*)InitializedTypeInfo(&UIVertex_t370_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t471  L_5 = ((UIVertex_t370_StaticFields*)InitializedTypeInfo(&UIVertex_t370_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t62  L_6 = Vector2_get_zero_m2173(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2173_MethodInfo);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t62  L_7 = Vector2_get_zero_m2173(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2173_MethodInfo);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t370  L_8 = V_0;
		((UIVertex_t370_StaticFields*)InitializedTypeInfo(&UIVertex_t370_il2cpp_TypeInfo)->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasRenderer_t346_il2cpp_TypeInfo;
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo ObjectU5BU5D_t219_il2cpp_TypeInfo;
extern TypeInfo UInt16_t805_il2cpp_TypeInfo;
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t219_0_0_0;
extern MethodInfo CanvasRenderer_INTERNAL_CALL_SetColor_m3648_MethodInfo;
extern MethodInfo List_1_get_Count_m2466_MethodInfo;
extern MethodInfo UnityString_Format_m3361_MethodInfo;
extern MethodInfo List_1_Clear_m2323_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternal_m3649_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternalArray_m3650_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m2466_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m2323_GenericMethod;


// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern MethodInfo CanvasRenderer_SetColor_m2319_MethodInfo;
extern "C" void CanvasRenderer_SetColor_m2319 (CanvasRenderer_t346 * __this, Color_t17  ___color, MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m3648(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/&CanvasRenderer_INTERNAL_CALL_SetColor_m3648_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m3648 (Object_t * __this /* static, unused */, CanvasRenderer_t346 * ___self, Color_t17 * ___color, MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m3648_ftn) (CanvasRenderer_t346 *, Color_t17 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m3648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m3648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern MethodInfo CanvasRenderer_GetColor_m2317_MethodInfo;
extern "C" Color_t17  CanvasRenderer_GetColor_m2317 (CanvasRenderer_t346 * __this, MethodInfo* method)
{
	typedef Color_t17  (*CanvasRenderer_GetColor_m2317_ftn) (CanvasRenderer_t346 *);
	static CanvasRenderer_GetColor_m2317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m2317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern MethodInfo CanvasRenderer_set_isMask_m2667_MethodInfo;
extern "C" void CanvasRenderer_set_isMask_m2667 (CanvasRenderer_t346 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m2667_ftn) (CanvasRenderer_t346 *, bool);
	static CanvasRenderer_set_isMask_m2667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m2667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern MethodInfo CanvasRenderer_SetMaterial_m2309_MethodInfo;
extern "C" void CanvasRenderer_SetMaterial_m2309 (CanvasRenderer_t346 * __this, Material_t4 * ___material, Texture_t39 * ___texture, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m2309_ftn) (CanvasRenderer_t346 *, Material_t4 *, Texture_t39 *);
	static CanvasRenderer_SetMaterial_m2309_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m2309_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern MethodInfo CanvasRenderer_SetVertices_m2308_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m2466_MethodInfo_var;
extern MethodInfo* List_1_Clear_m2323_MethodInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2308 (CanvasRenderer_t346 * __this, List_1_t352 * ___vertices, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2308_init;
	if (!CanvasRenderer_SetVertices_m2308_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		List_1_get_Count_m2466_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m2466_GenericMethod);
		List_1_Clear_m2323_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m2323_GenericMethod);
		CanvasRenderer_SetVertices_m2308_init = true;
	}
	{
		List_1_t352 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m2466_MethodInfo_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t219* L_2 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(InitializedTypeInfo(&UInt16_t805_il2cpp_TypeInfo), &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral363, L_2, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		Debug_LogWarning_m378(NULL /*static, unused*/, L_5, __this, /*hidden argument*/&Debug_LogWarning_m378_MethodInfo);
		List_1_t352 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(List_1_Clear_m2323_MethodInfo_var, L_6);
	}

IL_0039:
	{
		List_1_t352 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m3649(__this, L_7, /*hidden argument*/&CanvasRenderer_SetVerticesInternal_m3649_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m3649 (CanvasRenderer_t346 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m3649_ftn) (CanvasRenderer_t346 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m3649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m3649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern MethodInfo CanvasRenderer_SetVertices_m2424_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2424 (CanvasRenderer_t346 * __this, UIVertexU5BU5D_t388* ___vertices, int32_t ___size, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2424_init;
	if (!CanvasRenderer_SetVertices_m2424_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		CanvasRenderer_SetVertices_m2424_init = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t219* L_1 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(InitializedTypeInfo(&UInt16_t805_il2cpp_TypeInfo), &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral363, L_1, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		Debug_LogWarning_m378(NULL /*static, unused*/, L_4, __this, /*hidden argument*/&Debug_LogWarning_m378_MethodInfo);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t388* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m3650(__this, L_5, L_6, /*hidden argument*/&CanvasRenderer_SetVerticesInternalArray_m3650_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m3650 (CanvasRenderer_t346 * __this, UIVertexU5BU5D_t388* ___vertices, int32_t ___size, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m3650_ftn) (CanvasRenderer_t346 *, UIVertexU5BU5D_t388*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m3650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m3650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern MethodInfo CanvasRenderer_Clear_m2303_MethodInfo;
extern "C" void CanvasRenderer_Clear_m2303 (CanvasRenderer_t346 * __this, MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m2303_ftn) (CanvasRenderer_t346 *);
	static CanvasRenderer_Clear_m2303_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m2303_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern MethodInfo CanvasRenderer_get_absoluteDepth_m2291_MethodInfo;
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m2291 (CanvasRenderer_t346 * __this, MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m2291_ftn) (CanvasRenderer_t346 *);
	static CanvasRenderer_get_absoluteDepth_m2291_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m2291_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RectTransformUtility_t492_il2cpp_TypeInfo;
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"

// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
extern TypeInfo Vector3U5BU5D_t105_il2cpp_TypeInfo;
extern TypeInfo Ray_t226_il2cpp_TypeInfo;
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern Il2CppType Vector3U5BU5D_t105_0_0_0;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3652_MethodInfo;
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m3653_MethodInfo;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3654_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m2236_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToRay_m3656_MethodInfo;
extern MethodInfo Plane__ctor_m2431_MethodInfo;
extern MethodInfo Plane_Raycast_m2432_MethodInfo;
extern MethodInfo Ray_GetPoint_m2433_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToWorldPointInRectangle_m3655_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m772_MethodInfo;
extern MethodInfo Ray__ctor_m3298_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutOnAxis_m2521_MethodInfo;
extern MethodInfo RectTransform_get_pivot_m2373_MethodInfo;
extern MethodInfo Vector2_get_Item_m2387_MethodInfo;
extern MethodInfo Vector2_set_Item_m2396_MethodInfo;
extern MethodInfo RectTransform_set_pivot_m2476_MethodInfo;
extern MethodInfo RectTransform_get_anchoredPosition_m2471_MethodInfo;
extern MethodInfo RectTransform_set_anchoredPosition_m2475_MethodInfo;
extern MethodInfo RectTransform_get_anchorMin_m2377_MethodInfo;
extern MethodInfo RectTransform_get_anchorMax_m2470_MethodInfo;
extern MethodInfo RectTransform_set_anchorMin_m2474_MethodInfo;
extern MethodInfo RectTransform_set_anchorMax_m2378_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutAxes_m2520_MethodInfo;
extern MethodInfo RectTransformUtility_GetTransposed_m3657_MethodInfo;
extern MethodInfo RectTransform_get_sizeDelta_m2472_MethodInfo;
extern MethodInfo RectTransform_set_sizeDelta_m2379_MethodInfo;


// System.Void UnityEngine.RectTransformUtility::.cctor()
extern MethodInfo RectTransformUtility__cctor_m3651_MethodInfo;
extern TypeInfo* Vector3U5BU5D_t105_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m3651 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool RectTransformUtility__cctor_m3651_init;
	if (!RectTransformUtility__cctor_m3651_init)
	{
		Vector3U5BU5D_t105_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t105_0_0_0);
		RectTransformUtility__cctor_m3651_init = true;
	}
	{
		((RectTransformUtility_t492_StaticFields*)InitializedTypeInfo(&RectTransformUtility_t492_il2cpp_TypeInfo)->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t105*)SZArrayNew(Vector3U5BU5D_t105_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo RectTransformUtility_RectangleContainsScreenPoint_m2350_MethodInfo;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2350 (Object_t * __this /* static, unused */, RectTransform_t345 * ___rect, Vector2_t62  ___screenPoint, Camera_t29 * ___cam, MethodInfo* method)
{
	{
		RectTransform_t345 * L_0 = ___rect;
		Camera_t29 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t492_il2cpp_TypeInfo));
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3652(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3652_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3652 (Object_t * __this /* static, unused */, RectTransform_t345 * ___rect, Vector2_t62 * ___screenPoint, Camera_t29 * ___cam, MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3652_ftn) (RectTransform_t345 *, Vector2_t62 *, Camera_t29 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m2315_MethodInfo;
extern "C" Vector2_t62  RectTransformUtility_PixelAdjustPoint_m2315 (Object_t * __this /* static, unused */, Vector2_t62  ___point, Transform_t48 * ___elementTransform, Canvas_t347 * ___canvas, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		Vector2_t62  L_0 = ___point;
		Transform_t48 * L_1 = ___elementTransform;
		Canvas_t347 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t492_il2cpp_TypeInfo));
		RectTransformUtility_PixelAdjustPoint_m3653(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/&RectTransformUtility_PixelAdjustPoint_m3653_MethodInfo);
		Vector2_t62  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m3653 (Object_t * __this /* static, unused */, Vector2_t62  ___point, Transform_t48 * ___elementTransform, Canvas_t347 * ___canvas, Vector2_t62 * ___output, MethodInfo* method)
{
	{
		Transform_t48 * L_0 = ___elementTransform;
		Canvas_t347 * L_1 = ___canvas;
		Vector2_t62 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t492_il2cpp_TypeInfo));
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3654(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3654_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3654 (Object_t * __this /* static, unused */, Vector2_t62 * ___point, Transform_t48 * ___elementTransform, Canvas_t347 * ___canvas, Vector2_t62 * ___output, MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3654_ftn) (Vector2_t62 *, Transform_t48 *, Canvas_t347 *, Vector2_t62 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustRect_m2316_MethodInfo;
extern "C" Rect_t213  RectTransformUtility_PixelAdjustRect_m2316 (Object_t * __this /* static, unused */, RectTransform_t345 * ___rectTransform, Canvas_t347 * ___canvas, MethodInfo* method)
{
	typedef Rect_t213  (*RectTransformUtility_PixelAdjustRect_m2316_ftn) (RectTransform_t345 *, Canvas_t347 *);
	static RectTransformUtility_PixelAdjustRect_m2316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m2316_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m3655 (Object_t * __this /* static, unused */, RectTransform_t345 * ___rect, Vector2_t62  ___screenPoint, Camera_t29 * ___cam, Vector3_t31 * ___worldPoint, MethodInfo* method)
{
	Ray_t226  V_0 = {0};
	Plane_t507  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t31 * L_0 = ___worldPoint;
		Vector2_t62  L_1 = Vector2_get_zero_m2173(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2173_MethodInfo);
		Vector3_t31  L_2 = Vector2_op_Implicit_m2236(NULL /*static, unused*/, L_1, /*hidden argument*/&Vector2_op_Implicit_m2236_MethodInfo);
		*L_0 = L_2;
		Camera_t29 * L_3 = ___cam;
		Vector2_t62  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t492_il2cpp_TypeInfo));
		Ray_t226  L_5 = RectTransformUtility_ScreenPointToRay_m3656(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&RectTransformUtility_ScreenPointToRay_m3656_MethodInfo);
		V_0 = L_5;
		RectTransform_t345 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t98  L_7 = Transform_get_rotation_m302(L_6, /*hidden argument*/&Transform_get_rotation_m302_MethodInfo);
		Vector3_t31  L_8 = Vector3_get_back_m3213(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m3213_MethodInfo);
		Vector3_t31  L_9 = Quaternion_op_Multiply_m2346(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Quaternion_op_Multiply_m2346_MethodInfo);
		RectTransform_t345 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t31  L_11 = Transform_get_position_m282(L_10, /*hidden argument*/&Transform_get_position_m282_MethodInfo);
		Plane__ctor_m2431((&V_1), L_9, L_11, /*hidden argument*/&Plane__ctor_m2431_MethodInfo);
		Ray_t226  L_12 = V_0;
		bool L_13 = Plane_Raycast_m2432((&V_1), L_12, (&V_2), /*hidden argument*/&Plane_Raycast_m2432_MethodInfo);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t31 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t31  L_16 = Ray_GetPoint_m2433((&V_0), L_15, /*hidden argument*/&Ray_GetPoint_m2433_MethodInfo);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern MethodInfo RectTransformUtility_ScreenPointToLocalPointInRectangle_m2389_MethodInfo;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2389 (Object_t * __this /* static, unused */, RectTransform_t345 * ___rect, Vector2_t62  ___screenPoint, Camera_t29 * ___cam, Vector2_t62 * ___localPoint, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	{
		Vector2_t62 * L_0 = ___localPoint;
		Vector2_t62  L_1 = Vector2_get_zero_m2173(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2173_MethodInfo);
		*L_0 = L_1;
		RectTransform_t345 * L_2 = ___rect;
		Vector2_t62  L_3 = ___screenPoint;
		Camera_t29 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t492_il2cpp_TypeInfo));
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m3655(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/&RectTransformUtility_ScreenPointToWorldPointInRectangle_m3655_MethodInfo);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t62 * L_6 = ___localPoint;
		RectTransform_t345 * L_7 = ___rect;
		Vector3_t31  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t31  L_9 = Transform_InverseTransformPoint_m2430(L_7, L_8, /*hidden argument*/&Transform_InverseTransformPoint_m2430_MethodInfo);
		Vector2_t62  L_10 = Vector2_op_Implicit_m772(NULL /*static, unused*/, L_9, /*hidden argument*/&Vector2_op_Implicit_m772_MethodInfo);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t226  RectTransformUtility_ScreenPointToRay_m3656 (Object_t * __this /* static, unused */, Camera_t29 * ___cam, Vector2_t62  ___screenPos, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	{
		Camera_t29 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m225(NULL /*static, unused*/, L_0, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t29 * L_2 = ___cam;
		Vector2_t62  L_3 = ___screenPos;
		Vector3_t31  L_4 = Vector2_op_Implicit_m2236(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector2_op_Implicit_m2236_MethodInfo);
		NullCheck(L_2);
		Ray_t226  L_5 = Camera_ScreenPointToRay_m810(L_2, L_4, /*hidden argument*/&Camera_ScreenPointToRay_m810_MethodInfo);
		return L_5;
	}

IL_0019:
	{
		Vector2_t62  L_6 = ___screenPos;
		Vector3_t31  L_7 = Vector2_op_Implicit_m2236(NULL /*static, unused*/, L_6, /*hidden argument*/&Vector2_op_Implicit_m2236_MethodInfo);
		V_0 = L_7;
		Vector3_t31 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t31  L_10 = V_0;
		Vector3_t31  L_11 = Vector3_get_forward_m257(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m257_MethodInfo);
		Ray_t226  L_12 = {0};
		Ray__ctor_m3298(&L_12, L_10, L_11, /*hidden argument*/&Ray__ctor_m3298_MethodInfo);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2521 (Object_t * __this /* static, unused */, RectTransform_t345 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t345 * V_1 = {0};
	Vector2_t62  V_2 = {0};
	Vector2_t62  V_3 = {0};
	Vector2_t62  V_4 = {0};
	Vector2_t62  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t345 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m243(NULL /*static, unused*/, L_0, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Equality_m243_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t345 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t48 * L_5 = Transform_GetChild_m2640(L_3, L_4, /*hidden argument*/&Transform_GetChild_m2640_MethodInfo);
		V_1 = ((RectTransform_t345 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t345_il2cpp_TypeInfo)));
		RectTransform_t345 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m225(NULL /*static, unused*/, L_6, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t345 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t492_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutOnAxis_m2521(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutOnAxis_m2521_MethodInfo);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t345 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m2643(L_12, /*hidden argument*/&Transform_get_childCount_m2643_MethodInfo);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t345 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t62  L_15 = RectTransform_get_pivot_m2373(L_14, /*hidden argument*/&RectTransform_get_pivot_m2373_MethodInfo);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m2387((&V_2), L_17, /*hidden argument*/&Vector2_get_Item_m2387_MethodInfo);
		Vector2_set_Item_m2396((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/&Vector2_set_Item_m2396_MethodInfo);
		RectTransform_t345 * L_19 = ___rect;
		Vector2_t62  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m2476(L_19, L_20, /*hidden argument*/&RectTransform_set_pivot_m2476_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t345 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t62  L_23 = RectTransform_get_anchoredPosition_m2471(L_22, /*hidden argument*/&RectTransform_get_anchoredPosition_m2471_MethodInfo);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m2387((&V_3), L_25, /*hidden argument*/&Vector2_get_Item_m2387_MethodInfo);
		Vector2_set_Item_m2396((&V_3), L_24, ((-L_26)), /*hidden argument*/&Vector2_set_Item_m2396_MethodInfo);
		RectTransform_t345 * L_27 = ___rect;
		Vector2_t62  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m2475(L_27, L_28, /*hidden argument*/&RectTransform_set_anchoredPosition_m2475_MethodInfo);
		RectTransform_t345 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t62  L_30 = RectTransform_get_anchorMin_m2377(L_29, /*hidden argument*/&RectTransform_get_anchorMin_m2377_MethodInfo);
		V_4 = L_30;
		RectTransform_t345 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t62  L_32 = RectTransform_get_anchorMax_m2470(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2470_MethodInfo);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m2387((&V_4), L_33, /*hidden argument*/&Vector2_get_Item_m2387_MethodInfo);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m2387((&V_5), L_36, /*hidden argument*/&Vector2_get_Item_m2387_MethodInfo);
		Vector2_set_Item_m2396((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/&Vector2_set_Item_m2396_MethodInfo);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m2396((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/&Vector2_set_Item_m2396_MethodInfo);
		RectTransform_t345 * L_40 = ___rect;
		Vector2_t62  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m2474(L_40, L_41, /*hidden argument*/&RectTransform_set_anchorMin_m2474_MethodInfo);
		RectTransform_t345 * L_42 = ___rect;
		Vector2_t62  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m2378(L_42, L_43, /*hidden argument*/&RectTransform_set_anchorMax_m2378_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m2520 (Object_t * __this /* static, unused */, RectTransform_t345 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t345 * V_1 = {0};
	{
		RectTransform_t345 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m243(NULL /*static, unused*/, L_0, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Equality_m243_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t345 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t48 * L_5 = Transform_GetChild_m2640(L_3, L_4, /*hidden argument*/&Transform_GetChild_m2640_MethodInfo);
		V_1 = ((RectTransform_t345 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t345_il2cpp_TypeInfo)));
		RectTransform_t345 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m225(NULL /*static, unused*/, L_6, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t345 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t492_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutAxes_m2520(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutAxes_m2520_MethodInfo);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t345 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m2643(L_11, /*hidden argument*/&Transform_get_childCount_m2643_MethodInfo);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t345 * L_13 = ___rect;
		RectTransform_t345 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t62  L_15 = RectTransform_get_pivot_m2373(L_14, /*hidden argument*/&RectTransform_get_pivot_m2373_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t492_il2cpp_TypeInfo));
		Vector2_t62  L_16 = RectTransformUtility_GetTransposed_m3657(NULL /*static, unused*/, L_15, /*hidden argument*/&RectTransformUtility_GetTransposed_m3657_MethodInfo);
		NullCheck(L_13);
		RectTransform_set_pivot_m2476(L_13, L_16, /*hidden argument*/&RectTransform_set_pivot_m2476_MethodInfo);
		RectTransform_t345 * L_17 = ___rect;
		RectTransform_t345 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t62  L_19 = RectTransform_get_sizeDelta_m2472(L_18, /*hidden argument*/&RectTransform_get_sizeDelta_m2472_MethodInfo);
		Vector2_t62  L_20 = RectTransformUtility_GetTransposed_m3657(NULL /*static, unused*/, L_19, /*hidden argument*/&RectTransformUtility_GetTransposed_m3657_MethodInfo);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m2379(L_17, L_20, /*hidden argument*/&RectTransform_set_sizeDelta_m2379_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t345 * L_22 = ___rect;
		RectTransform_t345 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t62  L_24 = RectTransform_get_anchoredPosition_m2471(L_23, /*hidden argument*/&RectTransform_get_anchoredPosition_m2471_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t492_il2cpp_TypeInfo));
		Vector2_t62  L_25 = RectTransformUtility_GetTransposed_m3657(NULL /*static, unused*/, L_24, /*hidden argument*/&RectTransformUtility_GetTransposed_m3657_MethodInfo);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m2475(L_22, L_25, /*hidden argument*/&RectTransform_set_anchoredPosition_m2475_MethodInfo);
		RectTransform_t345 * L_26 = ___rect;
		RectTransform_t345 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t62  L_28 = RectTransform_get_anchorMin_m2377(L_27, /*hidden argument*/&RectTransform_get_anchorMin_m2377_MethodInfo);
		Vector2_t62  L_29 = RectTransformUtility_GetTransposed_m3657(NULL /*static, unused*/, L_28, /*hidden argument*/&RectTransformUtility_GetTransposed_m3657_MethodInfo);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m2474(L_26, L_29, /*hidden argument*/&RectTransform_set_anchorMin_m2474_MethodInfo);
		RectTransform_t345 * L_30 = ___rect;
		RectTransform_t345 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t62  L_32 = RectTransform_get_anchorMax_m2470(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2470_MethodInfo);
		Vector2_t62  L_33 = RectTransformUtility_GetTransposed_m3657(NULL /*static, unused*/, L_32, /*hidden argument*/&RectTransformUtility_GetTransposed_m3657_MethodInfo);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m2378(L_30, L_33, /*hidden argument*/&RectTransform_set_anchorMax_m2378_MethodInfo);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t62  RectTransformUtility_GetTransposed_m3657 (Object_t * __this /* static, unused */, Vector2_t62  ___input, MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t62  L_2 = {0};
		Vector2__ctor_m252(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_2;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WrapperlessIcall_t730_il2cpp_TypeInfo;
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3847_MethodInfo;


// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern MethodInfo WrapperlessIcall__ctor_m3658_MethodInfo;
extern "C" void WrapperlessIcall__ctor_m3658 (WrapperlessIcall_t730 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IL2CPPStructAlignmentAttribute_t731_il2cpp_TypeInfo;
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"



// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern MethodInfo IL2CPPStructAlignmentAttribute__ctor_m3659_MethodInfo;
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m3659 (IL2CPPStructAlignmentAttribute_t731 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AttributeHelperEngine_t735_il2cpp_TypeInfo;
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"

// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
extern TypeInfo DisallowMultipleComponentU5BU5D_t732_il2cpp_TypeInfo;
extern TypeInfo DisallowMultipleComponent_t555_il2cpp_TypeInfo;
extern TypeInfo ExecuteInEditModeU5BU5D_t733_il2cpp_TypeInfo;
extern TypeInfo ExecuteInEditMode_t113_il2cpp_TypeInfo;
extern TypeInfo RequireComponentU5BU5D_t734_il2cpp_TypeInfo;
extern TypeInfo RequireComponent_t112_il2cpp_TypeInfo;
extern TypeInfo Stack_1_t806_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t97_il2cpp_TypeInfo;
extern TypeInfo List_1_t807_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
extern Il2CppType DisallowMultipleComponentU5BU5D_t732_0_0_0;
extern Il2CppType ExecuteInEditModeU5BU5D_t733_0_0_0;
extern Il2CppType RequireComponentU5BU5D_t734_0_0_0;
extern Il2CppType Stack_1_t806_0_0_0;
extern Il2CppType MonoBehaviour_t24_0_0_0;
extern Il2CppType DisallowMultipleComponent_t555_0_0_0;
extern Il2CppType RequireComponent_t112_0_0_0;
extern Il2CppType TypeU5BU5D_t97_0_0_0;
extern Il2CppType List_1_t807_0_0_0;
extern Il2CppType ExecuteInEditMode_t113_0_0_0;
extern MethodInfo Stack_1__ctor_m3897_MethodInfo;
extern MethodInfo Type_get_BaseType_m3898_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m298_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m3899_MethodInfo;
extern MethodInfo Stack_1_get_Count_m3900_MethodInfo;
extern MethodInfo List_1__ctor_m3901_MethodInfo;
extern MethodInfo List_1_Add_m3902_MethodInfo;
extern Il2CppGenericMethod Stack_1__ctor_m3897_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m3903_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m3904_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m3900_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3901_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3902_GenericMethod;
extern Il2CppGenericMethod List_1_ToArray_m3905_GenericMethod;


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern MethodInfo AttributeHelperEngine__cctor_m3660_MethodInfo;
extern TypeInfo* DisallowMultipleComponentU5BU5D_t732_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t733_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t734_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m3660 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool AttributeHelperEngine__cctor_m3660_init;
	if (!AttributeHelperEngine__cctor_m3660_init)
	{
		DisallowMultipleComponentU5BU5D_t732_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisallowMultipleComponentU5BU5D_t732_0_0_0);
		ExecuteInEditModeU5BU5D_t733_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ExecuteInEditModeU5BU5D_t733_0_0_0);
		RequireComponentU5BU5D_t734_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&RequireComponentU5BU5D_t734_0_0_0);
		AttributeHelperEngine__cctor_m3660_init = true;
	}
	{
		((AttributeHelperEngine_t735_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t735_il2cpp_TypeInfo)->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t732*)SZArrayNew(DisallowMultipleComponentU5BU5D_t732_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t735_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t735_il2cpp_TypeInfo)->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t733*)SZArrayNew(ExecuteInEditModeU5BU5D_t733_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t735_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t735_il2cpp_TypeInfo)->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t734*)SZArrayNew(RequireComponentU5BU5D_t734_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern MethodInfo AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3661_MethodInfo;
extern TypeInfo* Stack_1_t806_il2cpp_TypeInfo_var;
extern MethodInfo* Stack_1__ctor_m3897_MethodInfo_var;
extern MethodInfo* Stack_1_Push_m3903_MethodInfo_var;
extern MethodInfo* Stack_1_Pop_m3904_MethodInfo_var;
extern MethodInfo* Stack_1_get_Count_m3900_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3661 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	static bool AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3661_init;
	if (!AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3661_init)
	{
		Stack_1_t806_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Stack_1_t806_0_0_0);
		Stack_1__ctor_m3897_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1__ctor_m3897_GenericMethod);
		Stack_1_Push_m3903_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_Push_m3903_GenericMethod);
		Stack_1_Pop_m3904_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_Pop_m3904_GenericMethod);
		Stack_1_get_Count_m3900_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_get_Count_m3900_GenericMethod);
		AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3661_init = true;
	}
	Stack_1_t806 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t219* V_2 = {0};
	{
		Stack_1_t806 * L_0 = (Stack_1_t806 *)il2cpp_codegen_object_new (Stack_1_t806_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3897(L_0, /*hidden argument*/Stack_1__ctor_m3897_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t806 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m3903(L_1, L_2, /*hidden argument*/Stack_1_Push_m3903_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3898_MethodInfo, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_7 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t24_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		Stack_1_t806 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m3904(L_8, /*hidden argument*/Stack_1_Pop_m3904_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&DisallowMultipleComponent_t555_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_10);
		ObjectU5BU5D_t219* L_12 = (ObjectU5BU5D_t219*)VirtFuncInvoker2< ObjectU5BU5D_t219*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m3899_MethodInfo, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t219* L_13 = V_2;
		NullCheck(L_13);
		if (!(((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		Type_t * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		Stack_1_t806 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Stack_1_get_Count_m3900_MethodInfo_var, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern MethodInfo AttributeHelperEngine_GetRequiredComponents_m3662_MethodInfo;
extern TypeInfo* TypeU5BU5D_t97_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t807_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3901_MethodInfo_var;
extern MethodInfo* List_1_Add_m3902_MethodInfo_var;
extern MethodInfo* List_1_ToArray_m3905_MethodInfo_var;
extern "C" TypeU5BU5D_t97* AttributeHelperEngine_GetRequiredComponents_m3662 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method)
{
	static bool AttributeHelperEngine_GetRequiredComponents_m3662_init;
	if (!AttributeHelperEngine_GetRequiredComponents_m3662_init)
	{
		TypeU5BU5D_t97_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t97_0_0_0);
		List_1_t807_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t807_0_0_0);
		List_1__ctor_m3901_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3901_GenericMethod);
		List_1_Add_m3902_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3902_GenericMethod);
		List_1_ToArray_m3905_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_ToArray_m3905_GenericMethod);
		AttributeHelperEngine_GetRequiredComponents_m3662_init = true;
	}
	List_1_t807 * V_0 = {0};
	ObjectU5BU5D_t219* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t112 * V_3 = {0};
	TypeU5BU5D_t97* V_4 = {0};
	{
		V_0 = (List_1_t807 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&RequireComponent_t112_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_0);
		ObjectU5BU5D_t219* L_2 = (ObjectU5BU5D_t219*)VirtFuncInvoker2< ObjectU5BU5D_t219*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m3899_MethodInfo, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t219* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t112 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), InitializedTypeInfo(&RequireComponent_t112_il2cpp_TypeInfo)));
		List_1_t807 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t219* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3898_MethodInfo, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_10 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t24_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t97* L_11 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 3));
		RequireComponent_t112 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t97* L_14 = L_11;
		RequireComponent_t112 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t97* L_17 = L_14;
		RequireComponent_t112 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t97* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t807 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t807_il2cpp_TypeInfo_var);
		List_1_t807 * L_22 = (List_1_t807 *)il2cpp_codegen_object_new (List_1_t807_il2cpp_TypeInfo_var);
		List_1__ctor_m3901(L_22, /*hidden argument*/List_1__ctor_m3901_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t112 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t807 * L_25 = V_0;
		RequireComponent_t112 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m3902_MethodInfo_var, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t112 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t807 * L_30 = V_0;
		RequireComponent_t112 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m3902_MethodInfo_var, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t112 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t807 * L_35 = V_0;
		RequireComponent_t112 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m3902_MethodInfo_var, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t219* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3898_MethodInfo, L_41);
		___klass = L_42;
	}

IL_00d9:
	{
		Type_t * L_43 = ___klass;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		Type_t * L_44 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_45 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t24_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t807 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t97*)NULL;
	}

IL_00f7:
	{
		List_1_t807 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t97* L_48 = List_1_ToArray_m3905(L_47, /*hidden argument*/List_1_ToArray_m3905_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern MethodInfo AttributeHelperEngine_CheckIsEditorScript_m3663_MethodInfo;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m3663 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method)
{
	ObjectU5BU5D_t219* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&ExecuteInEditMode_t113_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_0);
		ObjectU5BU5D_t219* L_2 = (ObjectU5BU5D_t219*)VirtFuncInvoker2< ObjectU5BU5D_t219*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m3899_MethodInfo, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t219* L_3 = V_0;
		NullCheck(L_3);
		if (!(((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		Type_t * L_4 = ___klass;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3898_MethodInfo, L_4);
		___klass = L_5;
	}

IL_0029:
	{
		Type_t * L_6 = ___klass;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Type_t * L_7 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t24_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"



// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
extern MethodInfo DisallowMultipleComponent__ctor_m2737_MethodInfo;
extern "C" void DisallowMultipleComponent__ctor_m2737 (DisallowMultipleComponent_t555 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern MethodInfo RequireComponent__ctor_m435_MethodInfo;
extern "C" void RequireComponent__ctor_m435 (RequireComponent_t112 * __this, Type_t * ___requiredComponent, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AddComponentMenu_t111_il2cpp_TypeInfo;
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"



// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern MethodInfo AddComponentMenu__ctor_m434_MethodInfo;
extern "C" void AddComponentMenu__ctor_m434 (AddComponentMenu_t111 * __this, String_t* ___menuName, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
extern MethodInfo AddComponentMenu__ctor_m2736_MethodInfo;
extern "C" void AddComponentMenu__ctor_m2736 (AddComponentMenu_t111 * __this, String_t* ___menuName, int32_t ___order, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"



// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern MethodInfo ExecuteInEditMode__ctor_m436_MethodInfo;
extern "C" void ExecuteInEditMode__ctor_m436 (ExecuteInEditMode_t113 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SetupCoroutine_t736_il2cpp_TypeInfo;
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"

// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo BindingFlags_t808_il2cpp_TypeInfo;
extern TypeInfo Binder_t809_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t810_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t811_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t812_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t104_il2cpp_TypeInfo;
extern MethodInfo Type_InvokeMember_m3906_MethodInfo;


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern MethodInfo SetupCoroutine__ctor_m3664_MethodInfo;
extern "C" void SetupCoroutine__ctor_m3664 (SetupCoroutine_t736 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern MethodInfo SetupCoroutine_InvokeMember_m3665_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m3665 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, MethodInfo* method)
{
	static bool SetupCoroutine_InvokeMember_m3665_init;
	if (!SetupCoroutine_InvokeMember_m3665_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		SetupCoroutine_InvokeMember_m3665_init = true;
	}
	ObjectU5BU5D_t219* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t219*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t219* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2196(L_3, /*hidden argument*/&Object_GetType_m2196_MethodInfo);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t219* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t809 *, Object_t *, ObjectU5BU5D_t219*, ParameterModifierU5BU5D_t810*, CultureInfo_t812 *, StringU5BU5D_t104* >::Invoke(&Type_InvokeMember_m3906_MethodInfo, L_4, L_5, ((int32_t)308), (Binder_t809 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t810*)(ParameterModifierU5BU5D_t810*)NULL, (CultureInfo_t812 *)NULL, (StringU5BU5D_t104*)(StringU5BU5D_t104*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern MethodInfo SetupCoroutine_InvokeStatic_m3666_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m3666 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, MethodInfo* method)
{
	static bool SetupCoroutine_InvokeStatic_m3666_init;
	if (!SetupCoroutine_InvokeStatic_m3666_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		SetupCoroutine_InvokeStatic_m3666_init = true;
	}
	ObjectU5BU5D_t219* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t219*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t219* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t219* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t809 *, Object_t *, ObjectU5BU5D_t219*, ParameterModifierU5BU5D_t810*, CultureInfo_t812 *, StringU5BU5D_t104* >::Invoke(&Type_InvokeMember_m3906_MethodInfo, L_3, L_4, ((int32_t)312), (Binder_t809 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t810*)(ParameterModifierU5BU5D_t810*)NULL, (CultureInfo_t812 *)NULL, (StringU5BU5D_t104*)(StringU5BU5D_t104*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WritableAttribute_t737_il2cpp_TypeInfo;
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern MethodInfo WritableAttribute__ctor_m3667_MethodInfo;
extern "C" void WritableAttribute__ctor_m3667 (WritableAttribute_t737 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyIsEditorAssembly_t738_il2cpp_TypeInfo;
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern MethodInfo AssemblyIsEditorAssembly__ctor_m3668_MethodInfo;
extern "C" void AssemblyIsEditorAssembly__ctor_m3668 (AssemblyIsEditorAssembly_t738 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcUserProfileData_t627_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
extern TypeInfo UserProfile_t739_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern MethodInfo UserProfile__ctor_m3680_MethodInfo;
extern MethodInfo GcUserProfileData_ToUserProfile_m3669_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t739 * GcUserProfileData_ToUserProfile_m3669 (GcUserProfileData_t627 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t15 * L_3 = (__this->___image_3);
		UserProfile_t739 * L_4 = (UserProfile_t739 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UserProfile_t739_il2cpp_TypeInfo));
		UserProfile__ctor_m3680(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/&UserProfile__ctor_m3680_MethodInfo);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern MethodInfo GcUserProfileData_AddToArray_m3670_MethodInfo;
extern "C" void GcUserProfileData_AddToArray_m3670 (GcUserProfileData_t627 * __this, UserProfileU5BU5D_t615** ___array, int32_t ___number, MethodInfo* method)
{
	{
		UserProfileU5BU5D_t615** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t615**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t615**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t615** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t739 * L_5 = GcUserProfileData_ToUserProfile_m3669(__this, /*hidden argument*/&GcUserProfileData_ToUserProfile_m3669_MethodInfo);
		NullCheck((*((UserProfileU5BU5D_t615**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t615**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t615**)L_3)), L_5);
		*((UserProfile_t739 **)(UserProfile_t739 **)SZArrayLdElema((*((UserProfileU5BU5D_t615**)L_3)), L_4)) = (UserProfile_t739 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral364, /*hidden argument*/&Debug_Log_m380_MethodInfo);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcAchievementDescriptionData_t626_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
extern TypeInfo AchievementDescription_t740_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern MethodInfo AchievementDescription__ctor_m3700_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern MethodInfo GcAchievementDescriptionData_ToAchievementDescription_m3671_MethodInfo;
extern "C" AchievementDescription_t740 * GcAchievementDescriptionData_ToAchievementDescription_m3671 (GcAchievementDescriptionData_t626 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t15 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t15 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t15 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t15 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t740 * L_7 = (AchievementDescription_t740 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AchievementDescription_t740_il2cpp_TypeInfo));
		AchievementDescription__ctor_m3700(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/&AchievementDescription__ctor_m3700_MethodInfo);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcAchievementData_t621_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Double
#include "mscorlib_System_Double.h"
extern TypeInfo Achievement_t741_il2cpp_TypeInfo;
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern MethodInfo DateTime__ctor_m3907_MethodInfo;
extern MethodInfo DateTime_AddSeconds_m3908_MethodInfo;
extern MethodInfo Achievement__ctor_m3689_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern MethodInfo GcAchievementData_ToAchievement_m3672_MethodInfo;
extern "C" Achievement_t741 * GcAchievementData_ToAchievement_m3672 (GcAchievementData_t621 * __this, MethodInfo* method)
{
	DateTime_t650  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m3907((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/&DateTime__ctor_m3907_MethodInfo);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t650  L_5 = DateTime_AddSeconds_m3908((&V_0), (((double)L_4)), /*hidden argument*/&DateTime_AddSeconds_m3908_MethodInfo);
		Achievement_t741 * L_6 = (Achievement_t741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Achievement_t741_il2cpp_TypeInfo));
		Achievement__ctor_m3689(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/&Achievement__ctor_m3689_MethodInfo);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t621_marshal(const GcAchievementData_t621& unmarshaled, GcAchievementData_t621_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t621_marshal_back(const GcAchievementData_t621_marshaled& marshaled, GcAchievementData_t621& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t621_marshal_cleanup(GcAchievementData_t621_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcScoreData_t623_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Int64
#include "mscorlib_System_Int64.h"
extern TypeInfo Score_t742_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern MethodInfo Score__ctor_m3711_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern MethodInfo GcScoreData_ToScore_m3673_MethodInfo;
extern "C" Score_t742 * GcScoreData_ToScore_m3673 (GcScoreData_t623 * __this, MethodInfo* method)
{
	DateTime_t650  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m3907((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/&DateTime__ctor_m3907_MethodInfo);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t650  L_5 = DateTime_AddSeconds_m3908((&V_0), (((double)L_4)), /*hidden argument*/&DateTime_AddSeconds_m3908_MethodInfo);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t742 * L_8 = (Score_t742 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Score_t742_il2cpp_TypeInfo));
		Score__ctor_m3711(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/&Score__ctor_m3711_MethodInfo);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t623_marshal(const GcScoreData_t623& unmarshaled, GcScoreData_t623_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t623_marshal_back(const GcScoreData_t623_marshaled& marshaled, GcScoreData_t623& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t623_marshal_cleanup(GcScoreData_t623_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderBuffer_t634_il2cpp_TypeInfo;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



// UnityEngine.FogMode
#include "UnityEngine_UnityEngine_FogMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FogMode_t743_il2cpp_TypeInfo;
// UnityEngine.FogMode
#include "UnityEngine_UnityEngine_FogModeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraClearFlags_t744_il2cpp_TypeInfo;
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo DepthTextureMode_t745_il2cpp_TypeInfo;
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureModeMethodDeclarations.h"



// UnityEngine.MeshTopology
#include "UnityEngine_UnityEngine_MeshTopology.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MeshTopology_t746_il2cpp_TypeInfo;
// UnityEngine.MeshTopology
#include "UnityEngine_UnityEngine_MeshTopologyMethodDeclarations.h"



// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpace.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ColorSpace_t747_il2cpp_TypeInfo;
// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpaceMethodDeclarations.h"



// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FilterMode_t119_il2cpp_TypeInfo;
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterModeMethodDeclarations.h"



// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextureWrapMode_t748_il2cpp_TypeInfo;
// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapModeMethodDeclarations.h"



// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextureFormat_t749_il2cpp_TypeInfo;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"



// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderTextureFormat_t120_il2cpp_TypeInfo;
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormatMethodDeclarations.h"



// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWrite.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderTextureReadWrite_t750_il2cpp_TypeInfo;
// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWriteMethodDeclarations.h"



// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReflectionProbeBlendInfo_t751_il2cpp_TypeInfo;
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LocalUser_t616_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"

extern TypeInfo UserProfileU5BU5D_t615_il2cpp_TypeInfo;
extern Il2CppType UserProfileU5BU5D_t615_0_0_0;
extern MethodInfo UserProfile__ctor_m3679_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern MethodInfo LocalUser__ctor_m3674_MethodInfo;
extern TypeInfo* UserProfileU5BU5D_t615_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m3674 (LocalUser_t616 * __this, MethodInfo* method)
{
	static bool LocalUser__ctor_m3674_init;
	if (!LocalUser__ctor_m3674_init)
	{
		UserProfileU5BU5D_t615_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UserProfileU5BU5D_t615_0_0_0);
		LocalUser__ctor_m3674_init = true;
	}
	{
		UserProfile__ctor_m3679(__this, /*hidden argument*/&UserProfile__ctor_m3679_MethodInfo);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t752*)((UserProfileU5BU5D_t615*)SZArrayNew(UserProfileU5BU5D_t615_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern MethodInfo LocalUser_SetFriends_m3675_MethodInfo;
extern "C" void LocalUser_SetFriends_m3675 (LocalUser_t616 * __this, IUserProfileU5BU5D_t752* ___friends, MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t752* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern MethodInfo LocalUser_SetAuthenticated_m3676_MethodInfo;
extern "C" void LocalUser_SetAuthenticated_m3676 (LocalUser_t616 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern MethodInfo LocalUser_SetUnderage_m3677_MethodInfo;
extern "C" void LocalUser_SetUnderage_m3677 (LocalUser_t616 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern MethodInfo LocalUser_get_authenticated_m3678_MethodInfo;
extern "C" bool LocalUser_get_authenticated_m3678 (LocalUser_t616 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
