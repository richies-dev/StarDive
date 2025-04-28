#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
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
extern TypeInfo Camera_t18_il2cpp_TypeInfo;
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Void
#include "mscorlib_System_Void.h"
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
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
extern TypeInfo CameraCallback_t618_il2cpp_TypeInfo;
extern TypeInfo Void_t43_il2cpp_TypeInfo;
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"
extern MethodInfo Camera_INTERNAL_get_pixelRect_m3153_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_projectionMatrix_m3156_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenToWorldPoint_m3158_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenToViewportPoint_m3159_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenPointToRay_m3160_MethodInfo;
extern MethodInfo CameraCallback_Invoke_m3149_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry_m3167_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry2D_m3169_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Single UnityEngine.Camera::get_fieldOfView()
extern MethodInfo Camera_get_fieldOfView_m121_MethodInfo;
extern "C" float Camera_get_fieldOfView_m121 (Camera_t18 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_fieldOfView_m121_ftn) (Camera_t18 *);
	static Camera_get_fieldOfView_m121_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_fieldOfView_m121_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_fieldOfView()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern MethodInfo Camera_get_nearClipPlane_m2001_MethodInfo;
extern "C" float Camera_get_nearClipPlane_m2001 (Camera_t18 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m2001_ftn) (Camera_t18 *);
	static Camera_get_nearClipPlane_m2001_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m2001_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern MethodInfo Camera_get_farClipPlane_m2000_MethodInfo;
extern "C" float Camera_get_farClipPlane_m2000 (Camera_t18 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m2000_ftn) (Camera_t18 *);
	static Camera_get_farClipPlane_m2000_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m2000_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_depth()
extern MethodInfo Camera_get_depth_m1864_MethodInfo;
extern "C" float Camera_get_depth_m1864 (Camera_t18 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_depth_m1864_ftn) (Camera_t18 *);
	static Camera_get_depth_m1864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m1864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_aspect()
extern MethodInfo Camera_get_aspect_m124_MethodInfo;
extern "C" float Camera_get_aspect_m124 (Camera_t18 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_aspect_m124_ftn) (Camera_t18 *);
	static Camera_get_aspect_m124_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_aspect_m124_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_aspect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern MethodInfo Camera_get_cullingMask_m2013_MethodInfo;
extern "C" int32_t Camera_get_cullingMask_m2013 (Camera_t18 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m2013_ftn) (Camera_t18 *);
	static Camera_get_cullingMask_m2013_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m2013_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern MethodInfo Camera_get_eventMask_m3152_MethodInfo;
extern "C" int32_t Camera_get_eventMask_m3152 (Camera_t18 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m3152_ftn) (Camera_t18 *);
	static Camera_get_eventMask_m3152_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m3152_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m3153 (Camera_t18 * __this, Rect_t139 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m3153_ftn) (Camera_t18 *, Rect_t139 *);
	static Camera_INTERNAL_get_pixelRect_m3153_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m3153_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern MethodInfo Camera_get_pixelRect_m3154_MethodInfo;
extern "C" Rect_t139  Camera_get_pixelRect_m3154 (Camera_t18 * __this, MethodInfo* method)
{
	Rect_t139  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m3153(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_pixelRect_m3153_MethodInfo);
		Rect_t139  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern MethodInfo Camera_get_targetTexture_m3155_MethodInfo;
extern "C" RenderTexture_t7 * Camera_get_targetTexture_m3155 (Camera_t18 * __this, MethodInfo* method)
{
	typedef RenderTexture_t7 * (*Camera_get_targetTexture_m3155_ftn) (Camera_t18 *);
	static Camera_get_targetTexture_m3155_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m3155_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m3156 (Camera_t18 * __this, Matrix4x4_t31 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_projectionMatrix_m3156_ftn) (Camera_t18 *, Matrix4x4_t31 *);
	static Camera_INTERNAL_get_projectionMatrix_m3156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_projectionMatrix_m3156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern MethodInfo Camera_get_projectionMatrix_m119_MethodInfo;
extern "C" Matrix4x4_t31  Camera_get_projectionMatrix_m119 (Camera_t18 * __this, MethodInfo* method)
{
	Matrix4x4_t31  V_0 = {0};
	{
		Camera_INTERNAL_get_projectionMatrix_m3156(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_projectionMatrix_m3156_MethodInfo);
		Matrix4x4_t31  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern MethodInfo Camera_get_clearFlags_m3157_MethodInfo;
extern "C" int32_t Camera_get_clearFlags_m3157 (Camera_t18 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m3157_ftn) (Camera_t18 *);
	static Camera_get_clearFlags_m3157_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m3157_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenToWorldPoint_m616_MethodInfo;
extern "C" Vector3_t32  Camera_ScreenToWorldPoint_m616 (Camera_t18 * __this, Vector3_t32  ___position, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = Camera_INTERNAL_CALL_ScreenToWorldPoint_m3158(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenToWorldPoint_m3158_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t32  Camera_INTERNAL_CALL_ScreenToWorldPoint_m3158 (Object_t * __this /* static, unused */, Camera_t18 * ___self, Vector3_t32 * ___position, MethodInfo* method)
{
	typedef Vector3_t32  (*Camera_INTERNAL_CALL_ScreenToWorldPoint_m3158_ftn) (Camera_t18 *, Vector3_t32 *);
	static Camera_INTERNAL_CALL_ScreenToWorldPoint_m3158_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToWorldPoint_m3158_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenToViewportPoint_m2109_MethodInfo;
extern "C" Vector3_t32  Camera_ScreenToViewportPoint_m2109 (Camera_t18 * __this, Vector3_t32  ___position, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m3159(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenToViewportPoint_m3159_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t32  Camera_INTERNAL_CALL_ScreenToViewportPoint_m3159 (Object_t * __this /* static, unused */, Camera_t18 * ___self, Vector3_t32 * ___position, MethodInfo* method)
{
	typedef Vector3_t32  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m3159_ftn) (Camera_t18 *, Vector3_t32 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m3159_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m3159_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenPointToRay_m572_MethodInfo;
extern "C" Ray_t155  Camera_ScreenPointToRay_m572 (Camera_t18 * __this, Vector3_t32  ___position, MethodInfo* method)
{
	{
		Ray_t155  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m3160(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenPointToRay_m3160_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t155  Camera_INTERNAL_CALL_ScreenPointToRay_m3160 (Object_t * __this /* static, unused */, Camera_t18 * ___self, Vector3_t32 * ___position, MethodInfo* method)
{
	typedef Ray_t155  (*Camera_INTERNAL_CALL_ScreenPointToRay_m3160_ftn) (Camera_t18 *, Vector3_t32 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m3160_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m3160_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern MethodInfo Camera_get_main_m570_MethodInfo;
extern "C" Camera_t18 * Camera_get_main_m570 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t18 * (*Camera_get_main_m570_ftn) ();
	static Camera_get_main_m570_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m570_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern MethodInfo Camera_get_allCamerasCount_m3161_MethodInfo;
extern "C" int32_t Camera_get_allCamerasCount_m3161 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m3161_ftn) ();
	static Camera_get_allCamerasCount_m3161_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m3161_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern MethodInfo Camera_GetAllCameras_m3162_MethodInfo;
extern "C" int32_t Camera_GetAllCameras_m3162 (Object_t * __this /* static, unused */, CameraU5BU5D_t619* ___cameras, MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m3162_ftn) (CameraU5BU5D_t619*);
	static Camera_GetAllCameras_m3162_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m3162_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreCull_m3163_MethodInfo;
extern "C" void Camera_FireOnPreCull_m3163 (Object_t * __this /* static, unused */, Camera_t18 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t618 * L_0 = ((Camera_t18_StaticFields*)InitializedTypeInfo(&Camera_t18_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t618 * L_1 = ((Camera_t18_StaticFields*)InitializedTypeInfo(&Camera_t18_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		Camera_t18 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t18 * >::Invoke(&CameraCallback_Invoke_m3149_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreRender_m3164_MethodInfo;
extern "C" void Camera_FireOnPreRender_m3164 (Object_t * __this /* static, unused */, Camera_t18 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t618 * L_0 = ((Camera_t18_StaticFields*)InitializedTypeInfo(&Camera_t18_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t618 * L_1 = ((Camera_t18_StaticFields*)InitializedTypeInfo(&Camera_t18_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		Camera_t18 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t18 * >::Invoke(&CameraCallback_Invoke_m3149_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPostRender_m3165_MethodInfo;
extern "C" void Camera_FireOnPostRender_m3165 (Object_t * __this /* static, unused */, Camera_t18 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t618 * L_0 = ((Camera_t18_StaticFields*)InitializedTypeInfo(&Camera_t18_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t618 * L_1 = ((Camera_t18_StaticFields*)InitializedTypeInfo(&Camera_t18_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		Camera_t18 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t18 * >::Invoke(&CameraCallback_Invoke_m3149_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
extern MethodInfo Camera_get_depthTextureMode_m104_MethodInfo;
extern "C" int32_t Camera_get_depthTextureMode_m104 (Camera_t18 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_depthTextureMode_m104_ftn) (Camera_t18 *);
	static Camera_get_depthTextureMode_m104_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depthTextureMode_m104_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depthTextureMode()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
extern MethodInfo Camera_set_depthTextureMode_m105_MethodInfo;
extern "C" void Camera_set_depthTextureMode_m105 (Camera_t18 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_depthTextureMode_m105_ftn) (Camera_t18 *, int32_t);
	static Camera_set_depthTextureMode_m105_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_depthTextureMode_m105_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry_m3166_MethodInfo;
extern "C" GameObject_t59 * Camera_RaycastTry_m3166 (Camera_t18 * __this, Ray_t155  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t59 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m3167(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry_m3167_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t59 * Camera_INTERNAL_CALL_RaycastTry_m3167 (Object_t * __this /* static, unused */, Camera_t18 * ___self, Ray_t155 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t59 * (*Camera_INTERNAL_CALL_RaycastTry_m3167_ftn) (Camera_t18 *, Ray_t155 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m3167_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m3167_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry2D_m3168_MethodInfo;
extern "C" GameObject_t59 * Camera_RaycastTry2D_m3168 (Camera_t18 * __this, Ray_t155  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t59 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m3169(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry2D_m3169_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t59 * Camera_INTERNAL_CALL_RaycastTry2D_m3169 (Object_t * __this /* static, unused */, Camera_t18 * ___self, Ray_t155 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t59 * (*Camera_INTERNAL_CALL_RaycastTry2D_m3169_ftn) (Camera_t18 *, Ray_t155 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m3169_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m3169_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Debug_t620_il2cpp_TypeInfo;
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Object_ToString_m168_MethodInfo;
extern MethodInfo Debug_Internal_Log_m3170_MethodInfo;
extern MethodInfo Debug_Internal_LogException_m3171_MethodInfo;


// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m3170 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t29 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m3170_ftn) (int32_t, String_t*, Object_t29 *);
	static Debug_Internal_Log_m3170_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m3170_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m3171 (Object_t * __this /* static, unused */, Exception_t163 * ___exception, Object_t29 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m3171_ftn) (Exception_t163 *, Object_t29 *);
	static Debug_Internal_LogException_m3171_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m3171_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern MethodInfo Debug_Log_m95_MethodInfo;
extern "C" void Debug_Log_m95 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
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
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m168_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral234;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m3170(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t29 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3170_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern MethodInfo Debug_LogError_m1862_MethodInfo;
extern "C" void Debug_LogError_m1862 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
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
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m168_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral234;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m3170(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t29 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3170_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogError_m2169_MethodInfo;
extern "C" void Debug_LogError_m2169 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t29 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m168_MethodInfo, L_0);
		Object_t29 * L_2 = ___context;
		Debug_Internal_Log_m3170(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m3170_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern MethodInfo Debug_LogException_m3172_MethodInfo;
extern "C" void Debug_LogException_m3172 (Object_t * __this /* static, unused */, Exception_t163 * ___exception, MethodInfo* method)
{
	{
		Exception_t163 * L_0 = ___exception;
		Debug_Internal_LogException_m3171(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Debug_Internal_LogException_m3171_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern MethodInfo Debug_LogException_m2036_MethodInfo;
extern "C" void Debug_LogException_m2036 (Object_t * __this /* static, unused */, Exception_t163 * ___exception, Object_t29 * ___context, MethodInfo* method)
{
	{
		Exception_t163 * L_0 = ___exception;
		Object_t29 * L_1 = ___context;
		Debug_Internal_LogException_m3171(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Debug_Internal_LogException_m3171_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern MethodInfo Debug_LogWarning_m99_MethodInfo;
extern "C" void Debug_LogWarning_m99 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m168_MethodInfo, L_0);
		Debug_Internal_Log_m3170(NULL /*static, unused*/, 1, L_1, (Object_t29 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3170_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogWarning_m2356_MethodInfo;
extern "C" void Debug_LogWarning_m2356 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t29 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m168_MethodInfo, L_0);
		Object_t29 * L_2 = ___context;
		Debug_Internal_Log_m3170(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m3170_MethodInfo);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DisplaysUpdatedDelegate_t621_il2cpp_TypeInfo;
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo DisplaysUpdatedDelegate__ctor_m3173_MethodInfo;
extern "C" void DisplaysUpdatedDelegate__ctor_m3173 (DisplaysUpdatedDelegate_t621 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern MethodInfo DisplaysUpdatedDelegate_Invoke_m3174_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_Invoke_m3174 (DisplaysUpdatedDelegate_t621 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m3174((DisplaysUpdatedDelegate_t621 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t621(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DisplaysUpdatedDelegate_BeginInvoke_m3175_MethodInfo;
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m3175 (DisplaysUpdatedDelegate_t621 * __this, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo DisplaysUpdatedDelegate_EndInvoke_m3176_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m3176 (DisplaysUpdatedDelegate_t621 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Display_t623_il2cpp_TypeInfo;
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern TypeInfo DisplayU5BU5D_t622_il2cpp_TypeInfo;
extern TypeInfo Vector3_t32_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern Il2CppType DisplayU5BU5D_t622_0_0_0;
extern MethodInfo Display_GetRenderingExtImpl_m3198_MethodInfo;
extern MethodInfo Display_GetSystemExtImpl_m3197_MethodInfo;
extern MethodInfo Display_GetRenderingBuffersImpl_m3199_MethodInfo;
extern MethodInfo Object__ctor_m86_MethodInfo;
extern MethodInfo IntPtr__ctor_m3653_MethodInfo;
extern MethodInfo Display__ctor_m3177_MethodInfo;
extern MethodInfo Delegate_Combine_m2090_MethodInfo;
extern MethodInfo Delegate_Remove_m2091_MethodInfo;
extern MethodInfo Display_ActivateDisplayImpl_m3201_MethodInfo;
extern MethodInfo Display_SetParamsImpl_m3202_MethodInfo;
extern MethodInfo Display_SetRenderingResolutionImpl_m3200_MethodInfo;
extern MethodInfo Display_MultiDisplayLicenseImpl_m3203_MethodInfo;
extern MethodInfo Display_RelativeMouseAtImpl_m3204_MethodInfo;
extern MethodInfo Display__ctor_m3178_MethodInfo;


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m3177 (Display_t623 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m3653(&L_0, 0, /*hidden argument*/&IntPtr__ctor_m3653_MethodInfo);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m3178 (Display_t623 * __this, IntPtr_t ___nativeDisplay, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern MethodInfo Display__cctor_m3179_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t622_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m3179 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Display__cctor_m3179_init;
	if (!Display__cctor_m3179_init)
	{
		DisplayU5BU5D_t622_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t622_0_0_0);
		Display__cctor_m3179_init = true;
	}
	{
		DisplayU5BU5D_t622* L_0 = ((DisplayU5BU5D_t622*)SZArrayNew(DisplayU5BU5D_t622_il2cpp_TypeInfo_var, 1));
		Display_t623 * L_1 = (Display_t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display__ctor_m3177(L_1, /*hidden argument*/&Display__ctor_m3177_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t623 **)(Display_t623 **)SZArrayLdElema(L_0, 0)) = (Display_t623 *)L_1;
		((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t622* L_2 = ((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t623 **)(Display_t623 **)SZArrayLdElema(L_2, L_3));
		((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t621 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_add_onDisplaysUpdated_m3180_MethodInfo;
extern "C" void Display_add_onDisplaysUpdated_m3180 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t621 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t621 * L_0 = ((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t621 * L_1 = ___value;
		Delegate_t424 * L_2 = Delegate_Combine_m2090(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m2090_MethodInfo);
		((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t621 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t621_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_remove_onDisplaysUpdated_m3181_MethodInfo;
extern "C" void Display_remove_onDisplaysUpdated_m3181 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t621 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t621 * L_0 = ((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t621 * L_1 = ___value;
		Delegate_t424 * L_2 = Delegate_Remove_m2091(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m2091_MethodInfo);
		((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t621 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t621_il2cpp_TypeInfo)));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern MethodInfo Display_get_renderingWidth_m3182_MethodInfo;
extern "C" int32_t Display_get_renderingWidth_m3182 (Display_t623 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m3198(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m3198_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern MethodInfo Display_get_renderingHeight_m3183_MethodInfo;
extern "C" int32_t Display_get_renderingHeight_m3183 (Display_t623 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m3198(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m3198_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern MethodInfo Display_get_systemWidth_m3184_MethodInfo;
extern "C" int32_t Display_get_systemWidth_m3184 (Display_t623 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m3197(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m3197_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern MethodInfo Display_get_systemHeight_m3185_MethodInfo;
extern "C" int32_t Display_get_systemHeight_m3185 (Display_t623 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m3197(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m3197_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern MethodInfo Display_get_colorBuffer_m3186_MethodInfo;
extern "C" RenderBuffer_t564  Display_get_colorBuffer_m3186 (Display_t623 * __this, MethodInfo* method)
{
	RenderBuffer_t564  V_0 = {0};
	RenderBuffer_t564  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m3199(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m3199_MethodInfo);
		RenderBuffer_t564  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern MethodInfo Display_get_depthBuffer_m3187_MethodInfo;
extern "C" RenderBuffer_t564  Display_get_depthBuffer_m3187 (Display_t623 * __this, MethodInfo* method)
{
	RenderBuffer_t564  V_0 = {0};
	RenderBuffer_t564  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m3199(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m3199_MethodInfo);
		RenderBuffer_t564  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern MethodInfo Display_Activate_m3188_MethodInfo;
extern "C" void Display_Activate_m3188 (Display_t623 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m3201(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/&Display_ActivateDisplayImpl_m3201_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_Activate_m3189_MethodInfo;
extern "C" void Display_Activate_m3189 (Display_t623 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m3201(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Display_ActivateDisplayImpl_m3201_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_SetParams_m3190_MethodInfo;
extern "C" void Display_SetParams_m3190 (Display_t623 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display_SetParamsImpl_m3202(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Display_SetParamsImpl_m3202_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern MethodInfo Display_SetRenderingResolution_m3191_MethodInfo;
extern "C" void Display_SetRenderingResolution_m3191 (Display_t623 * __this, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display_SetRenderingResolutionImpl_m3200(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Display_SetRenderingResolutionImpl_m3200_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern MethodInfo Display_MultiDisplayLicense_m3192_MethodInfo;
extern "C" bool Display_MultiDisplayLicense_m3192 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		bool L_0 = Display_MultiDisplayLicenseImpl_m3203(NULL /*static, unused*/, /*hidden argument*/&Display_MultiDisplayLicenseImpl_m3203_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern MethodInfo Display_RelativeMouseAt_m3193_MethodInfo;
extern "C" Vector3_t32  Display_RelativeMouseAt_m3193 (Object_t * __this /* static, unused */, Vector3_t32  ___inputMouseCoordinates, MethodInfo* method)
{
	Vector3_t32  V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		int32_t L_4 = Display_RelativeMouseAtImpl_m3204(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/&Display_RelativeMouseAtImpl_m3204_MethodInfo);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t32  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern MethodInfo Display_get_main_m3194_MethodInfo;
extern "C" Display_t623 * Display_get_main_m3194 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display_t623 * L_0 = ((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern MethodInfo Display_RecreateDisplayList_m3195_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t622_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m3195 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t624* ___nativeDisplay, MethodInfo* method)
{
	static bool Display_RecreateDisplayList_m3195_init;
	if (!Display_RecreateDisplayList_m3195_init)
	{
		DisplayU5BU5D_t622_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t622_0_0_0);
		Display_RecreateDisplayList_m3195_init = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t624* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___displays_1 = ((DisplayU5BU5D_t622*)SZArrayNew(DisplayU5BU5D_t622_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		DisplayU5BU5D_t622* L_1 = ((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t624* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t623 * L_6 = (Display_t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		Display__ctor_m3178(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&Display__ctor_m3178_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t623 **)(Display_t623 **)SZArrayLdElema(L_1, L_2)) = (Display_t623 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t624* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		DisplayU5BU5D_t622* L_10 = ((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t623 **)(Display_t623 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern MethodInfo Display_FireDisplaysUpdated_m3196_MethodInfo;
extern "C" void Display_FireDisplaysUpdated_m3196 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t621 * L_0 = ((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t621 * L_1 = ((Display_t623_StaticFields*)InitializedTypeInfo(&Display_t623_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&DisplaysUpdatedDelegate_Invoke_m3174_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m3197 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m3197_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m3197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m3197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m3198 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m3198_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m3198_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m3198_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m3199 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t564 * ___color, RenderBuffer_t564 * ___depth, MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m3199_ftn) (IntPtr_t, RenderBuffer_t564 *, RenderBuffer_t564 *);
	static Display_GetRenderingBuffersImpl_m3199_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m3199_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m3200 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m3200_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m3200_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m3200_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m3201 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m3201_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m3201_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m3201_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m3202 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m3202_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m3202_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m3202_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m3203 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m3203_ftn) ();
	static Display_MultiDisplayLicenseImpl_m3203_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m3203_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m3204 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m3204_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m3204_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m3204_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoBehaviour_t11_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern MethodInfo Behaviour__ctor_m3147_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_Auto_m3205_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3207_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutine_Auto_m3208_MethodInfo;


// System.Void UnityEngine.MonoBehaviour::.ctor()
extern MethodInfo MonoBehaviour__ctor_m74_MethodInfo;
extern "C" void MonoBehaviour__ctor_m74 (MonoBehaviour_t11 * __this, MethodInfo* method)
{
	{
		Behaviour__ctor_m3147(__this, /*hidden argument*/&Behaviour__ctor_m3147_MethodInfo);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StartCoroutine_m602_MethodInfo;
extern "C" Coroutine_t321 * MonoBehaviour_StartCoroutine_m602 (MonoBehaviour_t11 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t321 * L_1 = MonoBehaviour_StartCoroutine_Auto_m3205(__this, L_0, /*hidden argument*/&MonoBehaviour_StartCoroutine_Auto_m3205_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t321 * MonoBehaviour_StartCoroutine_Auto_m3205 (MonoBehaviour_t11 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef Coroutine_t321 * (*MonoBehaviour_StartCoroutine_Auto_m3205_ftn) (MonoBehaviour_t11 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m3205_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m3205_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern MethodInfo MonoBehaviour_StopCoroutine_m667_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m667 (MonoBehaviour_t11 * __this, String_t* ___methodName, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_m667_ftn) (MonoBehaviour_t11 *, String_t*);
	static MonoBehaviour_StopCoroutine_m667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_m667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine(System.String)");
	_il2cpp_icall_func(__this, ___methodName);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StopCoroutine_m3206_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m3206 (MonoBehaviour_t11 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3207(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3207_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern MethodInfo MonoBehaviour_StopCoroutine_m2290_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m2290 (MonoBehaviour_t11 * __this, Coroutine_t321 * ___routine, MethodInfo* method)
{
	{
		Coroutine_t321 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m3208(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutine_Auto_m3208_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3207 (MonoBehaviour_t11 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3207_ftn) (MonoBehaviour_t11 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3207_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3207_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m3208 (MonoBehaviour_t11 * __this, Coroutine_t321 * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m3208_ftn) (MonoBehaviour_t11 *, Coroutine_t321 *);
	static MonoBehaviour_StopCoroutine_Auto_m3208_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m3208_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern MethodInfo MonoBehaviour_StopAllCoroutines_m605_MethodInfo;
extern "C" void MonoBehaviour_StopAllCoroutines_m605 (MonoBehaviour_t11 * __this, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopAllCoroutines_m605_ftn) (MonoBehaviour_t11 *);
	static MonoBehaviour_StopAllCoroutines_m605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopAllCoroutines_m605_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopAllCoroutines()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern MethodInfo MonoBehaviour_print_m664_MethodInfo;
extern "C" void MonoBehaviour_print_m664 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		Debug_Log_m95(NULL /*static, unused*/, L_0, /*hidden argument*/&Debug_Log_m95_MethodInfo);
		return;
	}
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchPhase_t625_il2cpp_TypeInfo;
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IMECompositionMode_t626_il2cpp_TypeInfo;
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Touch_t244_il2cpp_TypeInfo;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// System.Int32 UnityEngine.Touch::get_fingerId()
extern MethodInfo Touch_get_fingerId_m1952_MethodInfo;
extern "C" int32_t Touch_get_fingerId_m1952 (Touch_t244 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern MethodInfo Touch_get_position_m1954_MethodInfo;
extern "C" Vector2_t16  Touch_get_position_m1954 (Touch_t244 * __this, MethodInfo* method)
{
	{
		Vector2_t16  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern MethodInfo Touch_get_phase_m1953_MethodInfo;
extern "C" int32_t Touch_get_phase_m1953 (Touch_t244 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t244_marshal(const Touch_t244& unmarshaled, Touch_t244_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t244_marshal_back(const Touch_t244_marshaled& marshaled, Touch_t244& unmarshaled)
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
void Touch_t244_marshal_cleanup(Touch_t244_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Input_t153_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"

extern MethodInfo Input_get_touchSupported_m1994_MethodInfo;
extern MethodInfo Input_INTERNAL_set_compositionCursorPos_m3210_MethodInfo;


// System.Void UnityEngine.Input::.cctor()
extern MethodInfo Input__cctor_m3209_MethodInfo;
extern "C" void Input__cctor_m3209 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern MethodInfo Input_GetAxisRaw_m1977_MethodInfo;
extern "C" float Input_GetAxisRaw_m1977 (Object_t * __this /* static, unused */, String_t* ___axisName, MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m1977_ftn) (String_t*);
	static Input_GetAxisRaw_m1977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m1977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern MethodInfo Input_GetButtonDown_m1976_MethodInfo;
extern "C" bool Input_GetButtonDown_m1976 (Object_t * __this /* static, unused */, String_t* ___buttonName, MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m1976_ftn) (String_t*);
	static Input_GetButtonDown_m1976_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m1976_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern MethodInfo Input_GetMouseButton_m573_MethodInfo;
extern "C" bool Input_GetMouseButton_m573 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m573_ftn) (int32_t);
	static Input_GetMouseButton_m573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern MethodInfo Input_GetMouseButtonDown_m600_MethodInfo;
extern "C" bool Input_GetMouseButtonDown_m600 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m600_ftn) (int32_t);
	static Input_GetMouseButtonDown_m600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern MethodInfo Input_GetMouseButtonUp_m1956_MethodInfo;
extern "C" bool Input_GetMouseButtonUp_m1956 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m1956_ftn) (int32_t);
	static Input_GetMouseButtonUp_m1956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m1956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern MethodInfo Input_get_mousePosition_m571_MethodInfo;
extern "C" Vector3_t32  Input_get_mousePosition_m571 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t32  (*Input_get_mousePosition_m571_ftn) ();
	static Input_get_mousePosition_m571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m571_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern MethodInfo Input_get_mouseScrollDelta_m1957_MethodInfo;
extern "C" Vector2_t16  Input_get_mouseScrollDelta_m1957 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector2_t16  (*Input_get_mouseScrollDelta_m1957_ftn) ();
	static Input_get_mouseScrollDelta_m1957_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m1957_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern MethodInfo Input_get_mousePresent_m1975_MethodInfo;
extern "C" bool Input_get_mousePresent_m1975 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t153_il2cpp_TypeInfo));
		bool L_0 = Input_get_touchSupported_m1994(NULL /*static, unused*/, /*hidden argument*/&Input_get_touchSupported_m1994_MethodInfo);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Input::get_anyKey()
extern MethodInfo Input_get_anyKey_m564_MethodInfo;
extern "C" bool Input_get_anyKey_m564 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Input_get_anyKey_m564_ftn) ();
	static Input_get_anyKey_m564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_anyKey_m564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_anyKey()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_anyKeyDown()
extern MethodInfo Input_get_anyKeyDown_m562_MethodInfo;
extern "C" bool Input_get_anyKeyDown_m562 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Input_get_anyKeyDown_m562_ftn) ();
	static Input_get_anyKeyDown_m562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_anyKeyDown_m562_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_anyKeyDown()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern MethodInfo Input_GetTouch_m1995_MethodInfo;
extern "C" Touch_t244  Input_GetTouch_m1995 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	typedef Touch_t244  (*Input_GetTouch_m1995_ftn) (int32_t);
	static Input_GetTouch_m1995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m1995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern MethodInfo Input_get_touchCount_m1996_MethodInfo;
extern "C" int32_t Input_get_touchCount_m1996 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m1996_ftn) ();
	static Input_get_touchCount_m1996_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m1996_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m1994 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern MethodInfo Input_set_imeCompositionMode_m2266_MethodInfo;
extern "C" void Input_set_imeCompositionMode_m2266 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m2266_ftn) (int32_t);
	static Input_set_imeCompositionMode_m2266_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m2266_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern MethodInfo Input_get_compositionString_m2187_MethodInfo;
extern "C" String_t* Input_get_compositionString_m2187 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m2187_ftn) ();
	static Input_get_compositionString_m2187_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m2187_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m3210 (Object_t * __this /* static, unused */, Vector2_t16 * ___value, MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m3210_ftn) (Vector2_t16 *);
	static Input_INTERNAL_set_compositionCursorPos_m3210_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m3210_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern MethodInfo Input_set_compositionCursorPos_m2254_MethodInfo;
extern "C" void Input_set_compositionCursorPos_m2254 (Object_t * __this /* static, unused */, Vector2_t16  ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t153_il2cpp_TypeInfo));
		Input_INTERNAL_set_compositionCursorPos_m3210(NULL /*static, unused*/, (&___value), /*hidden argument*/&Input_INTERNAL_set_compositionCursorPos_m3210_MethodInfo);
		return;
	}
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HideFlags_t627_il2cpp_TypeInfo;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo Object_t29_il2cpp_TypeInfo;
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"

// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo ArgumentException_t445_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo Object_Destroy_m3213_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m3214_MethodInfo;
extern MethodInfo Object_CompareBaseObjects_m3215_MethodInfo;
extern MethodInfo Object_GetInstanceID_m3217_MethodInfo;
extern MethodInfo Object_IsNativeObjectAlive_m3216_MethodInfo;
extern MethodInfo Object_GetCachedPtr_m3218_MethodInfo;
extern MethodInfo IntPtr_op_Inequality_m3654_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2382_MethodInfo;


// System.Void UnityEngine.Object::.ctor()
extern MethodInfo Object__ctor_m3211_MethodInfo;
extern "C" void Object__ctor_m3211 (Object_t29 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern MethodInfo Object_Internal_CloneSingle_m3212_MethodInfo;
extern "C" Object_t29 * Object_Internal_CloneSingle_m3212 (Object_t * __this /* static, unused */, Object_t29 * ___data, MethodInfo* method)
{
	typedef Object_t29 * (*Object_Internal_CloneSingle_m3212_ftn) (Object_t29 *);
	static Object_Internal_CloneSingle_m3212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m3212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m3213 (Object_t * __this /* static, unused */, Object_t29 * ___obj, float ___t, MethodInfo* method)
{
	typedef void (*Object_Destroy_m3213_ftn) (Object_t29 *, float);
	static Object_Destroy_m3213_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m3213_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern MethodInfo Object_Destroy_m503_MethodInfo;
extern "C" void Object_Destroy_m503 (Object_t * __this /* static, unused */, Object_t29 * ___obj, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t29 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m3213(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_Destroy_m3213_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m3214 (Object_t * __this /* static, unused */, Object_t29 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m3214_ftn) (Object_t29 *, bool);
	static Object_DestroyImmediate_m3214_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m3214_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern MethodInfo Object_DestroyImmediate_m56_MethodInfo;
extern "C" void Object_DestroyImmediate_m56 (Object_t * __this /* static, unused */, Object_t29 * ___obj, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t29 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m3214(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_DestroyImmediate_m3214_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Object::get_name()
extern MethodInfo Object_get_name_m1934_MethodInfo;
extern "C" String_t* Object_get_name_m1934 (Object_t29 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m1934_ftn) (Object_t29 *);
	static Object_get_name_m1934_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m1934_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern MethodInfo Object_set_name_m2360_MethodInfo;
extern "C" void Object_set_name_m2360 (Object_t29 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*Object_set_name_m2360_ftn) (Object_t29 *, String_t*);
	static Object_set_name_m2360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m2360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern MethodInfo Object_DontDestroyOnLoad_m504_MethodInfo;
extern "C" void Object_DontDestroyOnLoad_m504 (Object_t * __this /* static, unused */, Object_t29 * ___target, MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m504_ftn) (Object_t29 *);
	static Object_DontDestroyOnLoad_m504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern MethodInfo Object_set_hideFlags_m73_MethodInfo;
extern "C" void Object_set_hideFlags_m73 (Object_t29 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m73_ftn) (Object_t29 *, int32_t);
	static Object_set_hideFlags_m73_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m73_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern MethodInfo Object_ToString_m93_MethodInfo;
extern "C" String_t* Object_ToString_m93 (Object_t29 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m93_ftn) (Object_t29 *);
	static Object_ToString_m93_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m93_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern MethodInfo Object_Equals_m160_MethodInfo;
extern "C" bool Object_Equals_m160 (Object_t29 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m3215(NULL /*static, unused*/, __this, ((Object_t29 *)IsInst(L_0, InitializedTypeInfo(&Object_t29_il2cpp_TypeInfo))), /*hidden argument*/&Object_CompareBaseObjects_m3215_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern MethodInfo Object_GetHashCode_m161_MethodInfo;
extern "C" int32_t Object_GetHashCode_m161 (Object_t29 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m3217(__this, /*hidden argument*/&Object_GetInstanceID_m3217_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m3215 (Object_t * __this /* static, unused */, Object_t29 * ___lhs, Object_t29 * ___rhs, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t29 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t29 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t29 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t29 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
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
		Object_t29 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m3216(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_IsNativeObjectAlive_m3216_MethodInfo);
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
		Object_t29 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m3216(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_IsNativeObjectAlive_m3216_MethodInfo);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t29 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t29 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m3216 (Object_t * __this /* static, unused */, Object_t29 * ___o, MethodInfo* method)
{
	{
		Object_t29 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m3218(L_0, /*hidden argument*/&Object_GetCachedPtr_m3218_MethodInfo);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m3654(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&IntPtr_op_Inequality_m3654_MethodInfo);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m3217 (Object_t29 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m3218 (Object_t29 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern MethodInfo Object_CheckNullArgument_m3219_MethodInfo;
extern "C" void Object_CheckNullArgument_m3219 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method)
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
		ArgumentException_t445 * L_2 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_2, L_1, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern MethodInfo Object_op_Implicit_m55_MethodInfo;
extern "C" bool Object_op_Implicit_m55 (Object_t * __this /* static, unused */, Object_t29 * ___exists, MethodInfo* method)
{
	{
		Object_t29 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m3215(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_CompareBaseObjects_m3215_MethodInfo);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Equality_m71_MethodInfo;
extern "C" bool Object_op_Equality_m71 (Object_t * __this /* static, unused */, Object_t29 * ___x, Object_t29 * ___y, MethodInfo* method)
{
	{
		Object_t29 * L_0 = ___x;
		Object_t29 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m3215(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m3215_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Inequality_m125_MethodInfo;
extern "C" bool Object_op_Inequality_m125 (Object_t * __this /* static, unused */, Object_t29 * ___x, Object_t29 * ___y, MethodInfo* method)
{
	{
		Object_t29 * L_0 = ___x;
		Object_t29 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m3215(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m3215_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t29_marshal(const Object_t29& unmarshaled, Object_t29_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = unmarshaled.___m_CachedPtr_1;
}
void Object_t29_marshal_back(const Object_t29_marshaled& marshaled, Object_t29& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	unmarshaled.___m_CachedPtr_1 = marshaled.___m_CachedPtr_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t29_marshal_cleanup(Object_t29_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Component_t35_il2cpp_TypeInfo;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_10.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern MethodInfo Component_get_gameObject_m502_MethodInfo;
extern MethodInfo GameObject_GetComponent_m3223_MethodInfo;
extern MethodInfo Component_GetComponentsForListInternal_m3222_MethodInfo;


// System.Void UnityEngine.Component::.ctor()
extern MethodInfo Component__ctor_m3220_MethodInfo;
extern "C" void Component__ctor_m3220 (Component_t35 * __this, MethodInfo* method)
{
	{
		Object__ctor_m3211(__this, /*hidden argument*/&Object__ctor_m3211_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern MethodInfo Component_get_transform_m518_MethodInfo;
extern "C" Transform_t62 * Component_get_transform_m518 (Component_t35 * __this, MethodInfo* method)
{
	typedef Transform_t62 * (*Component_get_transform_m518_ftn) (Component_t35 *);
	static Component_get_transform_m518_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m518_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t59 * Component_get_gameObject_m502 (Component_t35 * __this, MethodInfo* method)
{
	typedef GameObject_t59 * (*Component_get_gameObject_m502_ftn) (Component_t35 *);
	static Component_get_gameObject_m502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern MethodInfo Component_GetComponent_m2417_MethodInfo;
extern "C" Component_t35 * Component_GetComponent_m2417 (Component_t35 * __this, Type_t * ___type, MethodInfo* method)
{
	{
		GameObject_t59 * L_0 = Component_get_gameObject_m502(__this, /*hidden argument*/&Component_get_gameObject_m502_MethodInfo);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t35 * L_2 = GameObject_GetComponent_m3223(L_0, L_1, /*hidden argument*/&GameObject_GetComponent_m3223_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo Component_GetComponentFastPath_m3221_MethodInfo;
extern "C" void Component_GetComponentFastPath_m3221 (Component_t35 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m3221_ftn) (Component_t35 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m3221_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m3221_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m3222 (Component_t35 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m3222_ftn) (Component_t35 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m3222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m3222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern MethodInfo Component_GetComponents_m2060_MethodInfo;
extern "C" void Component_GetComponents_m2060 (Component_t35 * __this, Type_t * ___type, List_1_t385 * ___results, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t385 * L_1 = ___results;
		Component_GetComponentsForListInternal_m3222(__this, L_0, L_1, /*hidden argument*/&Component_GetComponentsForListInternal_m3222_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GameObject_t59_il2cpp_TypeInfo;

// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern MethodInfo GameObject_Internal_CreateGameObject_m3229_MethodInfo;
extern MethodInfo GameObject_Internal_AddComponentWithType_m3227_MethodInfo;


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern MethodInfo GameObject__ctor_m2234_MethodInfo;
extern "C" void GameObject__ctor_m2234 (GameObject_t59 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Object__ctor_m3211(__this, /*hidden argument*/&Object__ctor_m3211_MethodInfo);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m3229(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&GameObject_Internal_CreateGameObject_m3229_MethodInfo);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t35 * GameObject_GetComponent_m3223 (GameObject_t59 * __this, Type_t * ___type, MethodInfo* method)
{
	typedef Component_t35 * (*GameObject_GetComponent_m3223_ftn) (GameObject_t59 *, Type_t *);
	static GameObject_GetComponent_m3223_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m3223_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo GameObject_GetComponentFastPath_m3224_MethodInfo;
extern "C" void GameObject_GetComponentFastPath_m3224 (GameObject_t59 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m3224_ftn) (GameObject_t59 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m3224_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m3224_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern MethodInfo GameObject_GetComponentsInternal_m3225_MethodInfo;
extern "C" Array_t * GameObject_GetComponentsInternal_m3225 (GameObject_t59 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m3225_ftn) (GameObject_t59 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m3225_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m3225_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern MethodInfo GameObject_get_transform_m536_MethodInfo;
extern "C" Transform_t62 * GameObject_get_transform_m536 (GameObject_t59 * __this, MethodInfo* method)
{
	typedef Transform_t62 * (*GameObject_get_transform_m536_ftn) (GameObject_t59 *);
	static GameObject_get_transform_m536_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m536_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern MethodInfo GameObject_get_layer_m2237_MethodInfo;
extern "C" int32_t GameObject_get_layer_m2237 (GameObject_t59 * __this, MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m2237_ftn) (GameObject_t59 *);
	static GameObject_get_layer_m2237_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m2237_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern MethodInfo GameObject_set_layer_m2238_MethodInfo;
extern "C" void GameObject_set_layer_m2238 (GameObject_t59 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m2238_ftn) (GameObject_t59 *, int32_t);
	static GameObject_set_layer_m2238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m2238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern MethodInfo GameObject_SetActive_m509_MethodInfo;
extern "C" void GameObject_SetActive_m509 (GameObject_t59 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m509_ftn) (GameObject_t59 *, bool);
	static GameObject_SetActive_m509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern MethodInfo GameObject_get_activeSelf_m510_MethodInfo;
extern "C" bool GameObject_get_activeSelf_m510 (GameObject_t59 * __this, MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m510_ftn) (GameObject_t59 *);
	static GameObject_get_activeSelf_m510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern MethodInfo GameObject_get_activeInHierarchy_m529_MethodInfo;
extern "C" bool GameObject_get_activeInHierarchy_m529 (GameObject_t59 * __this, MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m529_ftn) (GameObject_t59 *);
	static GameObject_get_activeInHierarchy_m529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.GameObject::get_tag()
extern MethodInfo GameObject_get_tag_m640_MethodInfo;
extern "C" String_t* GameObject_get_tag_m640 (GameObject_t59 * __this, MethodInfo* method)
{
	typedef String_t* (*GameObject_get_tag_m640_ftn) (GameObject_t59 *);
	static GameObject_get_tag_m640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_tag_m640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern MethodInfo GameObject_SendMessage_m3226_MethodInfo;
extern "C" void GameObject_SendMessage_m3226 (GameObject_t59 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m3226_ftn) (GameObject_t59 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m3226_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m3226_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t35 * GameObject_Internal_AddComponentWithType_m3227 (GameObject_t59 * __this, Type_t * ___componentType, MethodInfo* method)
{
	typedef Component_t35 * (*GameObject_Internal_AddComponentWithType_m3227_ftn) (GameObject_t59 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m3227_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m3227_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern MethodInfo GameObject_AddComponent_m3228_MethodInfo;
extern "C" Component_t35 * GameObject_AddComponent_m3228 (GameObject_t59 * __this, Type_t * ___componentType, MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t35 * L_1 = GameObject_Internal_AddComponentWithType_m3227(__this, L_0, /*hidden argument*/&GameObject_Internal_AddComponentWithType_m3227_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m3229 (Object_t * __this /* static, unused */, GameObject_t59 * ___mono, String_t* ___name, MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m3229_ftn) (GameObject_t59 *, String_t*);
	static GameObject_Internal_CreateGameObject_m3229_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m3229_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern MethodInfo GameObject_Find_m669_MethodInfo;
extern "C" GameObject_t59 * GameObject_Find_m669 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef GameObject_t59 * (*GameObject_Find_m669_ftn) (String_t*);
	static GameObject_Find_m669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Find_m669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t628_il2cpp_TypeInfo;
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern MethodInfo Transform_GetChild_m2421_MethodInfo;
extern MethodInfo Transform_get_childCount_m2424_MethodInfo;


// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern MethodInfo Enumerator__ctor_m3230_MethodInfo;
extern "C" void Enumerator__ctor_m3230 (Enumerator_t628 * __this, Transform_t62 * ___outer, MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Transform_t62 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern MethodInfo Enumerator_get_Current_m3231_MethodInfo;
extern "C" Object_t * Enumerator_get_Current_m3231 (Enumerator_t628 * __this, MethodInfo* method)
{
	{
		Transform_t62 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t62 * L_2 = Transform_GetChild_m2421(L_0, L_1, /*hidden argument*/&Transform_GetChild_m2421_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern MethodInfo Enumerator_MoveNext_m3232_MethodInfo;
extern "C" bool Enumerator_MoveNext_m3232 (Enumerator_t628 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t62 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m2424(L_0, /*hidden argument*/&Transform_get_childCount_m2424_MethodInfo);
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
extern TypeInfo Transform_t62_il2cpp_TypeInfo;

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
extern TypeInfo RectTransform_t276_il2cpp_TypeInfo;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern MethodInfo Transform_INTERNAL_get_position_m3233_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_position_m3234_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localPosition_m3235_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localPosition_m3236_MethodInfo;
extern MethodInfo Transform_get_rotation_m526_MethodInfo;
extern MethodInfo Quaternion_get_eulerAngles_m2996_MethodInfo;
extern MethodInfo Quaternion_Euler_m2997_MethodInfo;
extern MethodInfo Transform_set_rotation_m528_MethodInfo;
extern MethodInfo Vector3_get_forward_m524_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m2115_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_rotation_m3237_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_rotation_m3238_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localRotation_m3239_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localRotation_m3240_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localScale_m3241_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localScale_m3242_MethodInfo;
extern MethodInfo Transform_get_parentInternal_m3243_MethodInfo;
extern MethodInfo Transform_set_parentInternal_m3244_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_worldToLocalMatrix_m3246_MethodInfo;
extern MethodInfo Transform_SetParent_m3245_MethodInfo;
extern MethodInfo Transform_Translate_m3247_MethodInfo;
extern MethodInfo Transform_get_position_m519_MethodInfo;
extern MethodInfo Vector3_op_Addition_m554_MethodInfo;
extern MethodInfo Transform_set_position_m547_MethodInfo;
extern MethodInfo Transform_TransformDirection_m3248_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformDirection_m3249_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformPoint_m3250_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_InverseTransformPoint_m3251_MethodInfo;


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m3233 (Transform_t62 * __this, Vector3_t32 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m3233_ftn) (Transform_t62 *, Vector3_t32 *);
	static Transform_INTERNAL_get_position_m3233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m3233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m3234 (Transform_t62 * __this, Vector3_t32 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m3234_ftn) (Transform_t62 *, Vector3_t32 *);
	static Transform_INTERNAL_set_position_m3234_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m3234_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t32  Transform_get_position_m519 (Transform_t62 * __this, MethodInfo* method)
{
	Vector3_t32  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m3233(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_position_m3233_MethodInfo);
		Vector3_t32  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m547 (Transform_t62 * __this, Vector3_t32  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m3234(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_position_m3234_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m3235 (Transform_t62 * __this, Vector3_t32 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m3235_ftn) (Transform_t62 *, Vector3_t32 *);
	static Transform_INTERNAL_get_localPosition_m3235_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m3235_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m3236 (Transform_t62 * __this, Vector3_t32 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m3236_ftn) (Transform_t62 *, Vector3_t32 *);
	static Transform_INTERNAL_set_localPosition_m3236_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m3236_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern MethodInfo Transform_get_localPosition_m543_MethodInfo;
extern "C" Vector3_t32  Transform_get_localPosition_m543 (Transform_t62 * __this, MethodInfo* method)
{
	Vector3_t32  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m3235(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localPosition_m3235_MethodInfo);
		Vector3_t32  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern MethodInfo Transform_set_localPosition_m537_MethodInfo;
extern "C" void Transform_set_localPosition_m537 (Transform_t62 * __this, Vector3_t32  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m3236(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localPosition_m3236_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern MethodInfo Transform_get_eulerAngles_m610_MethodInfo;
extern "C" Vector3_t32  Transform_get_eulerAngles_m610 (Transform_t62 * __this, MethodInfo* method)
{
	Quaternion_t33  V_0 = {0};
	{
		Quaternion_t33  L_0 = Transform_get_rotation_m526(__this, /*hidden argument*/&Transform_get_rotation_m526_MethodInfo);
		V_0 = L_0;
		Vector3_t32  L_1 = Quaternion_get_eulerAngles_m2996((&V_0), /*hidden argument*/&Quaternion_get_eulerAngles_m2996_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern MethodInfo Transform_set_eulerAngles_m544_MethodInfo;
extern "C" void Transform_set_eulerAngles_m544 (Transform_t62 * __this, Vector3_t32  ___value, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = ___value;
		Quaternion_t33  L_1 = Quaternion_Euler_m2997(NULL /*static, unused*/, L_0, /*hidden argument*/&Quaternion_Euler_m2997_MethodInfo);
		Transform_set_rotation_m528(__this, L_1, /*hidden argument*/&Transform_set_rotation_m528_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern MethodInfo Transform_get_forward_m2117_MethodInfo;
extern "C" Vector3_t32  Transform_get_forward_m2117 (Transform_t62 * __this, MethodInfo* method)
{
	{
		Quaternion_t33  L_0 = Transform_get_rotation_m526(__this, /*hidden argument*/&Transform_get_rotation_m526_MethodInfo);
		Vector3_t32  L_1 = Vector3_get_forward_m524(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m524_MethodInfo);
		Vector3_t32  L_2 = Quaternion_op_Multiply_m2115(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m2115_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m3237 (Transform_t62 * __this, Quaternion_t33 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m3237_ftn) (Transform_t62 *, Quaternion_t33 *);
	static Transform_INTERNAL_get_rotation_m3237_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m3237_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m3238 (Transform_t62 * __this, Quaternion_t33 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m3238_ftn) (Transform_t62 *, Quaternion_t33 *);
	static Transform_INTERNAL_set_rotation_m3238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m3238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t33  Transform_get_rotation_m526 (Transform_t62 * __this, MethodInfo* method)
{
	Quaternion_t33  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m3237(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_rotation_m3237_MethodInfo);
		Quaternion_t33  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m528 (Transform_t62 * __this, Quaternion_t33  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m3238(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_rotation_m3238_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m3239 (Transform_t62 * __this, Quaternion_t33 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m3239_ftn) (Transform_t62 *, Quaternion_t33 *);
	static Transform_INTERNAL_get_localRotation_m3239_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m3239_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m3240 (Transform_t62 * __this, Quaternion_t33 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m3240_ftn) (Transform_t62 *, Quaternion_t33 *);
	static Transform_INTERNAL_set_localRotation_m3240_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m3240_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern MethodInfo Transform_get_localRotation_m2240_MethodInfo;
extern "C" Quaternion_t33  Transform_get_localRotation_m2240 (Transform_t62 * __this, MethodInfo* method)
{
	Quaternion_t33  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m3239(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localRotation_m3239_MethodInfo);
		Quaternion_t33  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern MethodInfo Transform_set_localRotation_m2247_MethodInfo;
extern "C" void Transform_set_localRotation_m2247 (Transform_t62 * __this, Quaternion_t33  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m3240(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localRotation_m3240_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m3241 (Transform_t62 * __this, Vector3_t32 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m3241_ftn) (Transform_t62 *, Vector3_t32 *);
	static Transform_INTERNAL_get_localScale_m3241_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m3241_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m3242 (Transform_t62 * __this, Vector3_t32 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m3242_ftn) (Transform_t62 *, Vector3_t32 *);
	static Transform_INTERNAL_set_localScale_m3242_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m3242_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern MethodInfo Transform_get_localScale_m2242_MethodInfo;
extern "C" Vector3_t32  Transform_get_localScale_m2242 (Transform_t62 * __this, MethodInfo* method)
{
	Vector3_t32  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m3241(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localScale_m3241_MethodInfo);
		Vector3_t32  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern MethodInfo Transform_set_localScale_m2248_MethodInfo;
extern "C" void Transform_set_localScale_m2248 (Transform_t62 * __this, Vector3_t32  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m3242(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localScale_m3242_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern MethodInfo Transform_get_parent_m1925_MethodInfo;
extern "C" Transform_t62 * Transform_get_parent_m1925 (Transform_t62 * __this, MethodInfo* method)
{
	{
		Transform_t62 * L_0 = Transform_get_parentInternal_m3243(__this, /*hidden argument*/&Transform_get_parentInternal_m3243_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern MethodInfo Transform_set_parent_m595_MethodInfo;
extern "C" void Transform_set_parent_m595 (Transform_t62 * __this, Transform_t62 * ___value, MethodInfo* method)
{
	{
		if (!((RectTransform_t276 *)IsInst(__this, InitializedTypeInfo(&RectTransform_t276_il2cpp_TypeInfo))))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m2356(NULL /*static, unused*/, (String_t*) &_stringLiteral236, __this, /*hidden argument*/&Debug_LogWarning_m2356_MethodInfo);
	}

IL_0016:
	{
		Transform_t62 * L_0 = ___value;
		Transform_set_parentInternal_m3244(__this, L_0, /*hidden argument*/&Transform_set_parentInternal_m3244_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t62 * Transform_get_parentInternal_m3243 (Transform_t62 * __this, MethodInfo* method)
{
	typedef Transform_t62 * (*Transform_get_parentInternal_m3243_ftn) (Transform_t62 *);
	static Transform_get_parentInternal_m3243_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m3243_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m3244 (Transform_t62 * __this, Transform_t62 * ___value, MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m3244_ftn) (Transform_t62 *, Transform_t62 *);
	static Transform_set_parentInternal_m3244_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m3244_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern MethodInfo Transform_SetParent_m2235_MethodInfo;
extern "C" void Transform_SetParent_m2235 (Transform_t62 * __this, Transform_t62 * ___parent, MethodInfo* method)
{
	{
		Transform_t62 * L_0 = ___parent;
		Transform_SetParent_m3245(__this, L_0, 1, /*hidden argument*/&Transform_SetParent_m3245_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m3245 (Transform_t62 * __this, Transform_t62 * ___parent, bool ___worldPositionStays, MethodInfo* method)
{
	typedef void (*Transform_SetParent_m3245_ftn) (Transform_t62 *, Transform_t62 *, bool);
	static Transform_SetParent_m3245_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m3245_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m3246 (Transform_t62 * __this, Matrix4x4_t31 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m3246_ftn) (Transform_t62 *, Matrix4x4_t31 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m3246_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m3246_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern MethodInfo Transform_get_worldToLocalMatrix_m2314_MethodInfo;
extern "C" Matrix4x4_t31  Transform_get_worldToLocalMatrix_m2314 (Transform_t62 * __this, MethodInfo* method)
{
	Matrix4x4_t31  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m3246(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_worldToLocalMatrix_m3246_MethodInfo);
		Matrix4x4_t31  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern MethodInfo Transform_Translate_m541_MethodInfo;
extern "C" void Transform_Translate_m541 (Transform_t62 * __this, Vector3_t32  ___translation, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 1;
		Vector3_t32  L_0 = ___translation;
		int32_t L_1 = V_0;
		Transform_Translate_m3247(__this, L_0, L_1, /*hidden argument*/&Transform_Translate_m3247_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Translate_m3247 (Transform_t62 * __this, Vector3_t32  ___translation, int32_t ___relativeTo, MethodInfo* method)
{
	{
		int32_t L_0 = ___relativeTo;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t32  L_1 = Transform_get_position_m519(__this, /*hidden argument*/&Transform_get_position_m519_MethodInfo);
		Vector3_t32  L_2 = ___translation;
		Vector3_t32  L_3 = Vector3_op_Addition_m554(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Addition_m554_MethodInfo);
		Transform_set_position_m547(__this, L_3, /*hidden argument*/&Transform_set_position_m547_MethodInfo);
		goto IL_0035;
	}

IL_001d:
	{
		Vector3_t32  L_4 = Transform_get_position_m519(__this, /*hidden argument*/&Transform_get_position_m519_MethodInfo);
		Vector3_t32  L_5 = ___translation;
		Vector3_t32  L_6 = Transform_TransformDirection_m3248(__this, L_5, /*hidden argument*/&Transform_TransformDirection_m3248_MethodInfo);
		Vector3_t32  L_7 = Vector3_op_Addition_m554(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&Vector3_op_Addition_m554_MethodInfo);
		Transform_set_position_m547(__this, L_7, /*hidden argument*/&Transform_set_position_m547_MethodInfo);
	}

IL_0035:
	{
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t32  Transform_TransformDirection_m3248 (Transform_t62 * __this, Vector3_t32  ___direction, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = Transform_INTERNAL_CALL_TransformDirection_m3249(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/&Transform_INTERNAL_CALL_TransformDirection_m3249_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t32  Transform_INTERNAL_CALL_TransformDirection_m3249 (Object_t * __this /* static, unused */, Transform_t62 * ___self, Vector3_t32 * ___direction, MethodInfo* method)
{
	typedef Vector3_t32  (*Transform_INTERNAL_CALL_TransformDirection_m3249_ftn) (Transform_t62 *, Vector3_t32 *);
	static Transform_INTERNAL_CALL_TransformDirection_m3249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformDirection_m3249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_TransformPoint_m2334_MethodInfo;
extern "C" Vector3_t32  Transform_TransformPoint_m2334 (Transform_t62 * __this, Vector3_t32  ___position, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = Transform_INTERNAL_CALL_TransformPoint_m3250(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_TransformPoint_m3250_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t32  Transform_INTERNAL_CALL_TransformPoint_m3250 (Object_t * __this /* static, unused */, Transform_t62 * ___self, Vector3_t32 * ___position, MethodInfo* method)
{
	typedef Vector3_t32  (*Transform_INTERNAL_CALL_TransformPoint_m3250_ftn) (Transform_t62 *, Vector3_t32 *);
	static Transform_INTERNAL_CALL_TransformPoint_m3250_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m3250_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_InverseTransformPoint_m2203_MethodInfo;
extern "C" Vector3_t32  Transform_InverseTransformPoint_m2203 (Transform_t62 * __this, Vector3_t32  ___position, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m3251(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_InverseTransformPoint_m3251_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t32  Transform_INTERNAL_CALL_InverseTransformPoint_m3251 (Object_t * __this /* static, unused */, Transform_t62 * ___self, Vector3_t32 * ___position, MethodInfo* method)
{
	typedef Vector3_t32  (*Transform_INTERNAL_CALL_InverseTransformPoint_m3251_ftn) (Transform_t62 *, Vector3_t32 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m3251_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m3251_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m2424 (Transform_t62 * __this, MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m2424_ftn) (Transform_t62 *);
	static Transform_get_childCount_m2424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m2424_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern MethodInfo Transform_SetAsFirstSibling_m2236_MethodInfo;
extern "C" void Transform_SetAsFirstSibling_m2236 (Transform_t62 * __this, MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m2236_ftn) (Transform_t62 *);
	static Transform_SetAsFirstSibling_m2236_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m2236_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern MethodInfo Transform_GetEnumerator_m3252_MethodInfo;
extern "C" Object_t * Transform_GetEnumerator_m3252 (Transform_t62 * __this, MethodInfo* method)
{
	{
		Enumerator_t628 * L_0 = (Enumerator_t628 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Enumerator_t628_il2cpp_TypeInfo));
		Enumerator__ctor_m3230(L_0, __this, /*hidden argument*/&Enumerator__ctor_m3230_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t62 * Transform_GetChild_m2421 (Transform_t62 * __this, int32_t ___index, MethodInfo* method)
{
	typedef Transform_t62 * (*Transform_GetChild_m2421_ftn) (Transform_t62 *, int32_t);
	static Transform_GetChild_m2421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m2421_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Time_t629_il2cpp_TypeInfo;
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_time()
extern MethodInfo Time_get_time_m578_MethodInfo;
extern "C" float Time_get_time_m578 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_time_m578_ftn) ();
	static Time_get_time_m578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_time_m578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern MethodInfo Time_get_deltaTime_m80_MethodInfo;
extern "C" float Time_get_deltaTime_m80 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m80_ftn) ();
	static Time_get_deltaTime_m80_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m80_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern MethodInfo Time_get_unscaledTime_m1979_MethodInfo;
extern "C" float Time_get_unscaledTime_m1979 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m1979_ftn) ();
	static Time_get_unscaledTime_m1979_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m1979_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern MethodInfo Time_get_unscaledDeltaTime_m2026_MethodInfo;
extern "C" float Time_get_unscaledDeltaTime_m2026 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m2026_ftn) ();
	static Time_get_unscaledDeltaTime_m2026_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m2026_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Random_t630_il2cpp_TypeInfo;
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"

extern MethodInfo Random_GetRandomUnitCircle_m3254_MethodInfo;
extern MethodInfo Random_RandomRangeInt_m3253_MethodInfo;


// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern MethodInfo Random_Range_m542_MethodInfo;
extern "C" float Random_Range_m542 (Object_t * __this /* static, unused */, float ___min, float ___max, MethodInfo* method)
{
	typedef float (*Random_Range_m542_ftn) (float, float);
	static Random_Range_m542_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_Range_m542_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern MethodInfo Random_Range_m505_MethodInfo;
extern "C" int32_t Random_Range_m505 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m3253(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Random_RandomRangeInt_m3253_MethodInfo);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m3253 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m3253_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m3253_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m3253_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Void UnityEngine.Random::GetRandomUnitCircle(UnityEngine.Vector2&)
extern "C" void Random_GetRandomUnitCircle_m3254 (Object_t * __this /* static, unused */, Vector2_t16 * ___output, MethodInfo* method)
{
	typedef void (*Random_GetRandomUnitCircle_m3254_ftn) (Vector2_t16 *);
	static Random_GetRandomUnitCircle_m3254_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_GetRandomUnitCircle_m3254_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::GetRandomUnitCircle(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___output);
}
// UnityEngine.Vector2 UnityEngine.Random::get_insideUnitCircle()
extern MethodInfo Random_get_insideUnitCircle_m568_MethodInfo;
extern "C" Vector2_t16  Random_get_insideUnitCircle_m568 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Vector2_t16  V_0 = {0};
	{
		Random_GetRandomUnitCircle_m3254(NULL /*static, unused*/, (&V_0), /*hidden argument*/&Random_GetRandomUnitCircle_m3254_MethodInfo);
		Vector2_t16  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo YieldInstruction_t537_il2cpp_TypeInfo;
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"



// System.Void UnityEngine.YieldInstruction::.ctor()
extern MethodInfo YieldInstruction__ctor_m3255_MethodInfo;
extern "C" void YieldInstruction__ctor_m3255 (YieldInstruction_t537 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t537_marshal(const YieldInstruction_t537& unmarshaled, YieldInstruction_t537_marshaled& marshaled)
{
}
void YieldInstruction_t537_marshal_back(const YieldInstruction_t537_marshaled& marshaled, YieldInstruction_t537& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t537_marshal_cleanup(YieldInstruction_t537_marshaled& marshaled)
{
}
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PlayerPrefsException_t631_il2cpp_TypeInfo;
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsExceptionMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo Exception__ctor_m3615_MethodInfo;


// System.Void UnityEngine.PlayerPrefsException::.ctor(System.String)
extern MethodInfo PlayerPrefsException__ctor_m3256_MethodInfo;
extern "C" void PlayerPrefsException__ctor_m3256 (PlayerPrefsException_t631 * __this, String_t* ___error, MethodInfo* method)
{
	{
		String_t* L_0 = ___error;
		Exception__ctor_m3615(__this, L_0, /*hidden argument*/&Exception__ctor_m3615_MethodInfo);
		return;
	}
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PlayerPrefs_t632_il2cpp_TypeInfo;
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"

extern MethodInfo PlayerPrefs_TrySetInt_m3257_MethodInfo;


// System.Boolean UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)
extern "C" bool PlayerPrefs_TrySetInt_m3257 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetInt_m3257_ftn) (String_t*, int32_t);
	static PlayerPrefs_TrySetInt_m3257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetInt_m3257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern MethodInfo PlayerPrefs_SetInt_m659_MethodInfo;
extern "C" void PlayerPrefs_SetInt_m659 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___key;
		int32_t L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetInt_m3257(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&PlayerPrefs_TrySetInt_m3257_MethodInfo);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t631 * L_3 = (PlayerPrefsException_t631 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PlayerPrefsException_t631_il2cpp_TypeInfo));
		PlayerPrefsException__ctor_m3256(L_3, (String_t*) &_stringLiteral237, /*hidden argument*/&PlayerPrefsException__ctor_m3256_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern MethodInfo PlayerPrefs_GetInt_m653_MethodInfo;
extern "C" int32_t PlayerPrefs_GetInt_m653 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___defaultValue, MethodInfo* method)
{
	typedef int32_t (*PlayerPrefs_GetInt_m653_ftn) (String_t*, int32_t);
	static PlayerPrefs_GetInt_m653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetInt_m653_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
extern MethodInfo PlayerPrefs_DeleteAll_m663_MethodInfo;
extern "C" void PlayerPrefs_DeleteAll_m663 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*PlayerPrefs_DeleteAll_m663_ftn) ();
	static PlayerPrefs_DeleteAll_m663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_DeleteAll_m663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::DeleteAll()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.PlayerPrefs::Save()
extern MethodInfo PlayerPrefs_Save_m660_MethodInfo;
extern "C" void PlayerPrefs_Save_m660 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*PlayerPrefs_Save_m660_ftn) ();
	static PlayerPrefs_Save_m660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_Save_m660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::Save()");
	_il2cpp_icall_func();
}
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParticleSystem_t112_il2cpp_TypeInfo;
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"

extern MethodInfo ParticleSystem_INTERNAL_CALL_Emit_m3258_MethodInfo;


// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern MethodInfo ParticleSystem_set_enableEmission_m617_MethodInfo;
extern "C" void ParticleSystem_set_enableEmission_m617 (ParticleSystem_t112 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*ParticleSystem_set_enableEmission_m617_ftn) (ParticleSystem_t112 *, bool);
	static ParticleSystem_set_enableEmission_m617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_enableEmission_m617_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern MethodInfo ParticleSystem_get_startLifetime_m637_MethodInfo;
extern "C" float ParticleSystem_get_startLifetime_m637 (ParticleSystem_t112 * __this, MethodInfo* method)
{
	typedef float (*ParticleSystem_get_startLifetime_m637_ftn) (ParticleSystem_t112 *);
	static ParticleSystem_get_startLifetime_m637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startLifetime_m637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startLifetime()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern MethodInfo ParticleSystem_Emit_m618_MethodInfo;
extern "C" void ParticleSystem_Emit_m618 (ParticleSystem_t112 * __this, int32_t ___count, MethodInfo* method)
{
	{
		int32_t L_0 = ___count;
		ParticleSystem_INTERNAL_CALL_Emit_m3258(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&ParticleSystem_INTERNAL_CALL_Emit_m3258_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C" void ParticleSystem_INTERNAL_CALL_Emit_m3258 (Object_t * __this /* static, unused */, ParticleSystem_t112 * ___self, int32_t ___count, MethodInfo* method)
{
	typedef void (*ParticleSystem_INTERNAL_CALL_Emit_m3258_ftn) (ParticleSystem_t112 *, int32_t);
	static ParticleSystem_INTERNAL_CALL_Emit_m3258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_CALL_Emit_m3258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)");
	_il2cpp_icall_func(___self, ___count);
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Particle_t633_il2cpp_TypeInfo;
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"


// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern MethodInfo Particle_get_position_m3259_MethodInfo;
extern "C" Vector3_t32  Particle_get_position_m3259 (Particle_t633 * __this, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern MethodInfo Particle_set_position_m3260_MethodInfo;
extern "C" void Particle_set_position_m3260 (Particle_t633 * __this, Vector3_t32  ___value, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern MethodInfo Particle_get_velocity_m3261_MethodInfo;
extern "C" Vector3_t32  Particle_get_velocity_m3261 (Particle_t633 * __this, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern MethodInfo Particle_set_velocity_m3262_MethodInfo;
extern "C" void Particle_set_velocity_m3262 (Particle_t633 * __this, Vector3_t32  ___value, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern MethodInfo Particle_get_energy_m3263_MethodInfo;
extern "C" float Particle_get_energy_m3263 (Particle_t633 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern MethodInfo Particle_set_energy_m3264_MethodInfo;
extern "C" void Particle_set_energy_m3264 (Particle_t633 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern MethodInfo Particle_get_startEnergy_m3265_MethodInfo;
extern "C" float Particle_get_startEnergy_m3265 (Particle_t633 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern MethodInfo Particle_set_startEnergy_m3266_MethodInfo;
extern "C" void Particle_set_startEnergy_m3266 (Particle_t633 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern MethodInfo Particle_get_size_m3267_MethodInfo;
extern "C" float Particle_get_size_m3267 (Particle_t633 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern MethodInfo Particle_set_size_m3268_MethodInfo;
extern "C" void Particle_set_size_m3268 (Particle_t633 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern MethodInfo Particle_get_rotation_m3269_MethodInfo;
extern "C" float Particle_get_rotation_m3269 (Particle_t633 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern MethodInfo Particle_set_rotation_m3270_MethodInfo;
extern "C" void Particle_set_rotation_m3270 (Particle_t633 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern MethodInfo Particle_get_angularVelocity_m3271_MethodInfo;
extern "C" float Particle_get_angularVelocity_m3271 (Particle_t633 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern MethodInfo Particle_set_angularVelocity_m3272_MethodInfo;
extern "C" void Particle_set_angularVelocity_m3272 (Particle_t633 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern MethodInfo Particle_get_color_m3273_MethodInfo;
extern "C" Color_t30  Particle_get_color_m3273 (Particle_t633 * __this, MethodInfo* method)
{
	{
		Color_t30  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern MethodInfo Particle_set_color_m3274_MethodInfo;
extern "C" void Particle_set_color_m3274 (Particle_t633 * __this, Color_t30  ___value, MethodInfo* method)
{
	{
		Color_t30  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics_t634_il2cpp_TypeInfo;
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern MethodInfo Physics_INTERNAL_CALL_Internal_Raycast_m3276_MethodInfo;
extern MethodInfo Physics_Internal_Raycast_m3275_MethodInfo;
extern MethodInfo Physics_Raycast_m2110_MethodInfo;
extern MethodInfo Ray_get_origin_m2002_MethodInfo;
extern MethodInfo Ray_get_direction_m2003_MethodInfo;
extern MethodInfo Physics_Raycast_m3277_MethodInfo;
extern MethodInfo Physics_RaycastAll_m3278_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_RaycastAll_m3279_MethodInfo;


// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m3275 (Object_t * __this /* static, unused */, Vector3_t32  ___origin, Vector3_t32  ___direction, RaycastHit_t154 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		RaycastHit_t154 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m3276(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/&Physics_INTERNAL_CALL_Internal_Raycast_m3276_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m3276 (Object_t * __this /* static, unused */, Vector3_t32 * ___origin, Vector3_t32 * ___direction, RaycastHit_t154 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m3276_ftn) (Vector3_t32 *, Vector3_t32 *, RaycastHit_t154 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m3276_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m3276_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m3277 (Object_t * __this /* static, unused */, Vector3_t32  ___origin, Vector3_t32  ___direction, RaycastHit_t154 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = ___origin;
		Vector3_t32  L_1 = ___direction;
		RaycastHit_t154 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m3275(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Internal_Raycast_m3275_MethodInfo);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern MethodInfo Physics_Raycast_m574_MethodInfo;
extern "C" bool Physics_Raycast_m574 (Object_t * __this /* static, unused */, Ray_t155  ___ray, RaycastHit_t154 * ___hitInfo, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = ((int32_t)-5);
		V_1 = (std::numeric_limits<float>::infinity());
		Ray_t155  L_0 = ___ray;
		RaycastHit_t154 * L_1 = ___hitInfo;
		float L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m2110(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_Raycast_m2110_MethodInfo);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2110 (Object_t * __this /* static, unused */, Ray_t155  ___ray, RaycastHit_t154 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = Ray_get_origin_m2002((&___ray), /*hidden argument*/&Ray_get_origin_m2002_MethodInfo);
		Vector3_t32  L_1 = Ray_get_direction_m2003((&___ray), /*hidden argument*/&Ray_get_direction_m2003_MethodInfo);
		RaycastHit_t154 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m3277(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Raycast_m3277_MethodInfo);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Physics_RaycastAll_m2016_MethodInfo;
extern "C" RaycastHitU5BU5D_t414* Physics_RaycastAll_m2016 (Object_t * __this /* static, unused */, Ray_t155  ___ray, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = Ray_get_origin_m2002((&___ray), /*hidden argument*/&Ray_get_origin_m2002_MethodInfo);
		Vector3_t32  L_1 = Ray_get_direction_m2003((&___ray), /*hidden argument*/&Ray_get_direction_m2003_MethodInfo);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t414* L_4 = Physics_RaycastAll_m3278(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_RaycastAll_m3278_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t414* Physics_RaycastAll_m3278 (Object_t * __this /* static, unused */, Vector3_t32  ___origin, Vector3_t32  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t414* L_2 = Physics_INTERNAL_CALL_RaycastAll_m3279(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/&Physics_INTERNAL_CALL_RaycastAll_m3279_MethodInfo);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t414* Physics_INTERNAL_CALL_RaycastAll_m3279 (Object_t * __this /* static, unused */, Vector3_t32 * ___origin, Vector3_t32 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t414* (*Physics_INTERNAL_CALL_RaycastAll_m3279_ftn) (Vector3_t32 *, Vector3_t32 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m3279_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m3279_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider_t156_il2cpp_TypeInfo;
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit_t154_il2cpp_TypeInfo;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern MethodInfo RaycastHit_get_point_m2018_MethodInfo;
extern "C" Vector3_t32  RaycastHit_get_point_m2018 (RaycastHit_t154 * __this, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern MethodInfo RaycastHit_get_normal_m2019_MethodInfo;
extern "C" Vector3_t32  RaycastHit_get_normal_m2019 (RaycastHit_t154 * __this, MethodInfo* method)
{
	{
		Vector3_t32  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern MethodInfo RaycastHit_get_distance_m2020_MethodInfo;
extern "C" float RaycastHit_get_distance_m2020 (RaycastHit_t154 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern MethodInfo RaycastHit_get_collider_m575_MethodInfo;
extern "C" Collider_t156 * RaycastHit_get_collider_m575 (RaycastHit_t154 * __this, MethodInfo* method)
{
	{
		Collider_t156 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics2D_t150_il2cpp_TypeInfo;
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
extern TypeInfo List_1_t635_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_21MethodDeclarations.h"
extern Il2CppType List_1_t635_0_0_0;
extern MethodInfo List_1__ctor_m3655_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_Internal_Raycast_m3282_MethodInfo;
extern MethodInfo Physics2D_Raycast_m3283_MethodInfo;
extern MethodInfo Physics2D_Internal_Raycast_m3281_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_RaycastAll_m3284_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_OverlapCircleAll_m3285_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3655_GenericMethod;


// System.Void UnityEngine.Physics2D::.cctor()
extern MethodInfo Physics2D__cctor_m3280_MethodInfo;
extern TypeInfo* List_1_t635_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3655_MethodInfo_var;
extern "C" void Physics2D__cctor_m3280 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Physics2D__cctor_m3280_init;
	if (!Physics2D__cctor_m3280_init)
	{
		List_1_t635_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t635_0_0_0);
		List_1__ctor_m3655_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3655_GenericMethod);
		Physics2D__cctor_m3280_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t635_il2cpp_TypeInfo_var);
		List_1_t635 * L_0 = (List_1_t635 *)il2cpp_codegen_object_new (List_1_t635_il2cpp_TypeInfo_var);
		List_1__ctor_m3655(L_0, /*hidden argument*/List_1__ctor_m3655_MethodInfo_var);
		((Physics2D_t150_StaticFields*)InitializedTypeInfo(&Physics2D_t150_il2cpp_TypeInfo)->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m3281 (Object_t * __this /* static, unused */, Vector2_t16  ___origin, Vector2_t16  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t413 * ___raycastHit, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t413 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t150_il2cpp_TypeInfo));
		Physics2D_INTERNAL_CALL_Internal_Raycast_m3282(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics2D_INTERNAL_CALL_Internal_Raycast_m3282_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m3282 (Object_t * __this /* static, unused */, Vector2_t16 * ___origin, Vector2_t16 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t413 * ___raycastHit, MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m3282_ftn) (Vector2_t16 *, Vector2_t16 *, float, int32_t, float, float, RaycastHit2D_t413 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m3282_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m3282_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_Raycast_m2111_MethodInfo;
extern "C" RaycastHit2D_t413  Physics2D_Raycast_m2111 (Object_t * __this /* static, unused */, Vector2_t16  ___origin, Vector2_t16  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t16  L_0 = ___origin;
		Vector2_t16  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t150_il2cpp_TypeInfo));
		RaycastHit2D_t413  L_6 = Physics2D_Raycast_m3283(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&Physics2D_Raycast_m3283_MethodInfo);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t413  Physics2D_Raycast_m3283 (Object_t * __this /* static, unused */, Vector2_t16  ___origin, Vector2_t16  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	RaycastHit2D_t413  V_0 = {0};
	{
		Vector2_t16  L_0 = ___origin;
		Vector2_t16  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t150_il2cpp_TypeInfo));
		Physics2D_Internal_Raycast_m3281(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/&Physics2D_Internal_Raycast_m3281_MethodInfo);
		RaycastHit2D_t413  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_RaycastAll_m2004_MethodInfo;
extern "C" RaycastHit2DU5BU5D_t412* Physics2D_RaycastAll_m2004 (Object_t * __this /* static, unused */, Vector2_t16  ___origin, Vector2_t16  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t150_il2cpp_TypeInfo));
		RaycastHit2DU5BU5D_t412* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m3284(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/&Physics2D_INTERNAL_CALL_RaycastAll_m3284_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t412* Physics2D_INTERNAL_CALL_RaycastAll_m3284 (Object_t * __this /* static, unused */, Vector2_t16 * ___origin, Vector2_t16 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t412* (*Physics2D_INTERNAL_CALL_RaycastAll_m3284_ftn) (Vector2_t16 *, Vector2_t16 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m3284_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m3284_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single)
extern MethodInfo Physics2D_OverlapCircleAll_m521_MethodInfo;
extern "C" Collider2DU5BU5D_t152* Physics2D_OverlapCircleAll_m521 (Object_t * __this /* static, unused */, Vector2_t16  ___point, float ___radius, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t150_il2cpp_TypeInfo));
		Collider2DU5BU5D_t152* L_4 = Physics2D_INTERNAL_CALL_OverlapCircleAll_m3285(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, L_3, /*hidden argument*/&Physics2D_INTERNAL_CALL_OverlapCircleAll_m3285_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Collider2D[] UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2DU5BU5D_t152* Physics2D_INTERNAL_CALL_OverlapCircleAll_m3285 (Object_t * __this /* static, unused */, Vector2_t16 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	typedef Collider2DU5BU5D_t152* (*Physics2D_INTERNAL_CALL_OverlapCircleAll_m3285_ftn) (Vector2_t16 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_OverlapCircleAll_m3285_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_OverlapCircleAll_m3285_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___point, ___radius, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit2D_t413_il2cpp_TypeInfo;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern MethodInfo RaycastHit2D_get_collider_m2007_MethodInfo;
extern MethodInfo Collider2D_get_attachedRigidbody_m3289_MethodInfo;
extern MethodInfo RaycastHit2D_get_rigidbody_m3286_MethodInfo;


// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern MethodInfo RaycastHit2D_get_point_m2005_MethodInfo;
extern "C" Vector2_t16  RaycastHit2D_get_point_m2005 (RaycastHit2D_t413 * __this, MethodInfo* method)
{
	{
		Vector2_t16  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern MethodInfo RaycastHit2D_get_normal_m2006_MethodInfo;
extern "C" Vector2_t16  RaycastHit2D_get_normal_m2006 (RaycastHit2D_t413 * __this, MethodInfo* method)
{
	{
		Vector2_t16  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern MethodInfo RaycastHit2D_get_fraction_m2112_MethodInfo;
extern "C" float RaycastHit2D_get_fraction_m2112 (RaycastHit2D_t413 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t71 * RaycastHit2D_get_collider_m2007 (RaycastHit2D_t413 * __this, MethodInfo* method)
{
	{
		Collider2D_t71 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t165 * RaycastHit2D_get_rigidbody_m3286 (RaycastHit2D_t413 * __this, MethodInfo* method)
{
	Rigidbody2D_t165 * G_B3_0 = {0};
	{
		Collider2D_t71 * L_0 = RaycastHit2D_get_collider_m2007(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2007_MethodInfo);
		bool L_1 = Object_op_Inequality_m125(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t71 * L_2 = RaycastHit2D_get_collider_m2007(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2007_MethodInfo);
		NullCheck(L_2);
		Rigidbody2D_t165 * L_3 = Collider2D_get_attachedRigidbody_m3289(L_2, /*hidden argument*/&Collider2D_get_attachedRigidbody_m3289_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t165 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern MethodInfo RaycastHit2D_get_transform_m2008_MethodInfo;
extern "C" Transform_t62 * RaycastHit2D_get_transform_m2008 (RaycastHit2D_t413 * __this, MethodInfo* method)
{
	Rigidbody2D_t165 * V_0 = {0};
	{
		Rigidbody2D_t165 * L_0 = RaycastHit2D_get_rigidbody_m3286(__this, /*hidden argument*/&RaycastHit2D_get_rigidbody_m3286_MethodInfo);
		V_0 = L_0;
		Rigidbody2D_t165 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m125(NULL /*static, unused*/, L_1, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t165 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t62 * L_4 = Component_get_transform_m518(L_3, /*hidden argument*/&Component_get_transform_m518_MethodInfo);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t71 * L_5 = RaycastHit2D_get_collider_m2007(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2007_MethodInfo);
		bool L_6 = Object_op_Inequality_m125(NULL /*static, unused*/, L_5, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t71 * L_7 = RaycastHit2D_get_collider_m2007(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2007_MethodInfo);
		NullCheck(L_7);
		Transform_t62 * L_8 = Component_get_transform_m518(L_7, /*hidden argument*/&Component_get_transform_m518_MethodInfo);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t62 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rigidbody2D_t165_il2cpp_TypeInfo;
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"

extern MethodInfo Rigidbody2D_INTERNAL_get_velocity_m3287_MethodInfo;
extern MethodInfo Rigidbody2D_INTERNAL_set_velocity_m3288_MethodInfo;


// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_velocity_m3287 (Rigidbody2D_t165 * __this, Vector2_t16 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_get_velocity_m3287_ftn) (Rigidbody2D_t165 *, Vector2_t16 *);
	static Rigidbody2D_INTERNAL_get_velocity_m3287_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_get_velocity_m3287_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m3288 (Rigidbody2D_t165 * __this, Vector2_t16 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_set_velocity_m3288_ftn) (Rigidbody2D_t165 *, Vector2_t16 *);
	static Rigidbody2D_INTERNAL_set_velocity_m3288_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_set_velocity_m3288_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern MethodInfo Rigidbody2D_get_velocity_m642_MethodInfo;
extern "C" Vector2_t16  Rigidbody2D_get_velocity_m642 (Rigidbody2D_t165 * __this, MethodInfo* method)
{
	Vector2_t16  V_0 = {0};
	{
		Rigidbody2D_INTERNAL_get_velocity_m3287(__this, (&V_0), /*hidden argument*/&Rigidbody2D_INTERNAL_get_velocity_m3287_MethodInfo);
		Vector2_t16  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern MethodInfo Rigidbody2D_set_velocity_m644_MethodInfo;
extern "C" void Rigidbody2D_set_velocity_m644 (Rigidbody2D_t165 * __this, Vector2_t16  ___value, MethodInfo* method)
{
	{
		Rigidbody2D_INTERNAL_set_velocity_m3288(__this, (&___value), /*hidden argument*/&Rigidbody2D_INTERNAL_set_velocity_m3288_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider2D_t71_il2cpp_TypeInfo;



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t165 * Collider2D_get_attachedRigidbody_m3289 (Collider2D_t71 * __this, MethodInfo* method)
{
	typedef Rigidbody2D_t165 * (*Collider2D_get_attachedRigidbody_m3289_ftn) (Collider2D_t71 *);
	static Collider2D_get_attachedRigidbody_m3289_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m3289_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioConfigurationChangeHandler_t636_il2cpp_TypeInfo;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo AudioConfigurationChangeHandler__ctor_m3290_MethodInfo;
extern "C" void AudioConfigurationChangeHandler__ctor_m3290 (AudioConfigurationChangeHandler_t636 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern MethodInfo AudioConfigurationChangeHandler_Invoke_m3291_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_Invoke_m3291 (AudioConfigurationChangeHandler_t636 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m3291((AudioConfigurationChangeHandler_t636 *)__this->___prev_9,___deviceWasChanged, method);
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
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t636(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern MethodInfo AudioConfigurationChangeHandler_BeginInvoke_m3292_MethodInfo;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m3292 (AudioConfigurationChangeHandler_t636 * __this, bool ___deviceWasChanged, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Boolean_t25_il2cpp_TypeInfo), &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo AudioConfigurationChangeHandler_EndInvoke_m3293_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m3293 (AudioConfigurationChangeHandler_t636 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioSettings_t637_il2cpp_TypeInfo;
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"

extern TypeInfo Boolean_t25_il2cpp_TypeInfo;


// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern MethodInfo AudioSettings_InvokeOnAudioConfigurationChanged_m3294_MethodInfo;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m3294 (AudioSettings_t637 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	{
		AudioConfigurationChangeHandler_t636 * L_0 = ((AudioSettings_t637_StaticFields*)InitializedTypeInfo(&AudioSettings_t637_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t636 * L_1 = ((AudioSettings_t637_StaticFields*)InitializedTypeInfo(&AudioSettings_t637_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(&AudioConfigurationChangeHandler_Invoke_m3291_MethodInfo, L_1, L_2);
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
extern TypeInfo PCMReaderCallback_t639_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMReaderCallback__ctor_m3295_MethodInfo;
extern "C" void PCMReaderCallback__ctor_m3295 (PCMReaderCallback_t639 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern MethodInfo PCMReaderCallback_Invoke_m3296_MethodInfo;
extern "C" void PCMReaderCallback_Invoke_m3296 (PCMReaderCallback_t639 * __this, SingleU5BU5D_t638* ___data, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m3296((PCMReaderCallback_t639 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t638* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t638* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern TypeInfo Single_t44_il2cpp_TypeInfo;
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t639(Il2CppObject* delegate, SingleU5BU5D_t638* ___data)
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
extern MethodInfo PCMReaderCallback_BeginInvoke_m3297_MethodInfo;
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m3297 (PCMReaderCallback_t639 * __this, SingleU5BU5D_t638* ___data, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMReaderCallback_EndInvoke_m3298_MethodInfo;
extern "C" void PCMReaderCallback_EndInvoke_m3298 (PCMReaderCallback_t639 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMSetPositionCallback_t640_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMSetPositionCallback__ctor_m3299_MethodInfo;
extern "C" void PCMSetPositionCallback__ctor_m3299 (PCMSetPositionCallback_t640 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern MethodInfo PCMSetPositionCallback_Invoke_m3300_MethodInfo;
extern "C" void PCMSetPositionCallback_Invoke_m3300 (PCMSetPositionCallback_t640 * __this, int32_t ___position, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m3300((PCMSetPositionCallback_t640 *)__this->___prev_9,___position, method);
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
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t640(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo PCMSetPositionCallback_BeginInvoke_m3301_MethodInfo;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m3301 (PCMSetPositionCallback_t640 * __this, int32_t ___position, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMSetPositionCallback_EndInvoke_m3302_MethodInfo;
extern "C" void PCMSetPositionCallback_EndInvoke_m3302 (PCMSetPositionCallback_t640 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioClip_t55_il2cpp_TypeInfo;
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"

extern TypeInfo SingleU5BU5D_t638_il2cpp_TypeInfo;
extern TypeInfo Int32_t27_il2cpp_TypeInfo;


// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern MethodInfo AudioClip_InvokePCMReaderCallback_Internal_m3303_MethodInfo;
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m3303 (AudioClip_t55 * __this, SingleU5BU5D_t638* ___data, MethodInfo* method)
{
	{
		PCMReaderCallback_t639 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t639 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t638* L_2 = ___data;
		NullCheck(L_1);
		VirtActionInvoker1< SingleU5BU5D_t638* >::Invoke(&PCMReaderCallback_Invoke_m3296_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern MethodInfo AudioClip_InvokePCMSetPositionCallback_Internal_m3304_MethodInfo;
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m3304 (AudioClip_t55 * __this, int32_t ___position, MethodInfo* method)
{
	{
		PCMSetPositionCallback_t640 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t640 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(&PCMSetPositionCallback_Invoke_m3300_MethodInfo, L_1, L_2);
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
extern TypeInfo AudioSource_t54_il2cpp_TypeInfo;
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"

// System.UInt64
#include "mscorlib_System_UInt64.h"
extern MethodInfo AudioSource_Play_m3305_MethodInfo;
extern MethodInfo AudioSource_PlayOneShot_m3306_MethodInfo;


// System.Single UnityEngine.AudioSource::get_volume()
extern MethodInfo AudioSource_get_volume_m499_MethodInfo;
extern "C" float AudioSource_get_volume_m499 (AudioSource_t54 * __this, MethodInfo* method)
{
	typedef float (*AudioSource_get_volume_m499_ftn) (AudioSource_t54 *);
	static AudioSource_get_volume_m499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_m499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern MethodInfo AudioSource_set_volume_m501_MethodInfo;
extern "C" void AudioSource_set_volume_m501 (AudioSource_t54 * __this, float ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_volume_m501_ftn) (AudioSource_t54 *, float);
	static AudioSource_set_volume_m501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_m501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern MethodInfo AudioSource_set_clip_m506_MethodInfo;
extern "C" void AudioSource_set_clip_m506 (AudioSource_t54 * __this, AudioClip_t55 * ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_clip_m506_ftn) (AudioSource_t54 *, AudioClip_t55 *);
	static AudioSource_set_clip_m506_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_m506_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m3305 (AudioSource_t54 * __this, uint64_t ___delay, MethodInfo* method)
{
	typedef void (*AudioSource_Play_m3305_ftn) (AudioSource_t54 *, uint64_t);
	static AudioSource_Play_m3305_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m3305_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay);
}
// System.Void UnityEngine.AudioSource::Play()
extern MethodInfo AudioSource_Play_m507_MethodInfo;
extern "C" void AudioSource_Play_m507 (AudioSource_t54 * __this, MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		AudioSource_Play_m3305(__this, L_0, /*hidden argument*/&AudioSource_Play_m3305_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern MethodInfo AudioSource_get_isPlaying_m508_MethodInfo;
extern "C" bool AudioSource_get_isPlaying_m508 (AudioSource_t54 * __this, MethodInfo* method)
{
	typedef bool (*AudioSource_get_isPlaying_m508_ftn) (AudioSource_t54 *);
	static AudioSource_get_isPlaying_m508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_m508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m3306 (AudioSource_t54 * __this, AudioClip_t55 * ___clip, float ___volumeScale, MethodInfo* method)
{
	typedef void (*AudioSource_PlayOneShot_m3306_ftn) (AudioSource_t54 *, AudioClip_t55 *, float);
	static AudioSource_PlayOneShot_m3306_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShot_m3306_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(__this, ___clip, ___volumeScale);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern MethodInfo AudioSource_PlayOneShot_m569_MethodInfo;
extern "C" void AudioSource_PlayOneShot_m569 (AudioSource_t54 * __this, AudioClip_t55 * ___clip, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		AudioClip_t55 * L_0 = ___clip;
		float L_1 = V_0;
		AudioSource_PlayOneShot_m3306(__this, L_0, L_1, /*hidden argument*/&AudioSource_PlayOneShot_m3306_MethodInfo);
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WebCamDevice_t641_il2cpp_TypeInfo;
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern MethodInfo WebCamDevice_get_name_m3307_MethodInfo;
extern "C" String_t* WebCamDevice_get_name_m3307 (WebCamDevice_t641 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern MethodInfo WebCamDevice_get_isFrontFacing_m3308_MethodInfo;
extern "C" bool WebCamDevice_get_isFrontFacing_m3308 (WebCamDevice_t641 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t641_marshal(const WebCamDevice_t641& unmarshaled, WebCamDevice_t641_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t641_marshal_back(const WebCamDevice_t641_marshaled& marshaled, WebCamDevice_t641& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t641_marshal_cleanup(WebCamDevice_t641_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEventSource_t642_il2cpp_TypeInfo;
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEvent_t644_il2cpp_TypeInfo;
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
extern MethodInfo AnimationEvent_get_isFiredByLegacy_m3326_MethodInfo;
extern MethodInfo AnimationEvent_get_isFiredByAnimator_m3327_MethodInfo;


// System.Void UnityEngine.AnimationEvent::.ctor()
extern MethodInfo AnimationEvent__ctor_m3309_MethodInfo;
extern "C" void AnimationEvent__ctor_m3309 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t29 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t643 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern MethodInfo AnimationEvent_get_data_m3310_MethodInfo;
extern "C" String_t* AnimationEvent_get_data_m3310 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern MethodInfo AnimationEvent_set_data_m3311_MethodInfo;
extern "C" void AnimationEvent_set_data_m3311 (AnimationEvent_t644 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern MethodInfo AnimationEvent_get_stringParameter_m3312_MethodInfo;
extern "C" String_t* AnimationEvent_get_stringParameter_m3312 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern MethodInfo AnimationEvent_set_stringParameter_m3313_MethodInfo;
extern "C" void AnimationEvent_set_stringParameter_m3313 (AnimationEvent_t644 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern MethodInfo AnimationEvent_get_floatParameter_m3314_MethodInfo;
extern "C" float AnimationEvent_get_floatParameter_m3314 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern MethodInfo AnimationEvent_set_floatParameter_m3315_MethodInfo;
extern "C" void AnimationEvent_set_floatParameter_m3315 (AnimationEvent_t644 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern MethodInfo AnimationEvent_get_intParameter_m3316_MethodInfo;
extern "C" int32_t AnimationEvent_get_intParameter_m3316 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern MethodInfo AnimationEvent_set_intParameter_m3317_MethodInfo;
extern "C" void AnimationEvent_set_intParameter_m3317 (AnimationEvent_t644 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern MethodInfo AnimationEvent_get_objectReferenceParameter_m3318_MethodInfo;
extern "C" Object_t29 * AnimationEvent_get_objectReferenceParameter_m3318 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		Object_t29 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern MethodInfo AnimationEvent_set_objectReferenceParameter_m3319_MethodInfo;
extern "C" void AnimationEvent_set_objectReferenceParameter_m3319 (AnimationEvent_t644 * __this, Object_t29 * ___value, MethodInfo* method)
{
	{
		Object_t29 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern MethodInfo AnimationEvent_get_functionName_m3320_MethodInfo;
extern "C" String_t* AnimationEvent_get_functionName_m3320 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern MethodInfo AnimationEvent_set_functionName_m3321_MethodInfo;
extern "C" void AnimationEvent_set_functionName_m3321 (AnimationEvent_t644 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern MethodInfo AnimationEvent_get_time_m3322_MethodInfo;
extern "C" float AnimationEvent_get_time_m3322 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern MethodInfo AnimationEvent_set_time_m3323_MethodInfo;
extern "C" void AnimationEvent_set_time_m3323 (AnimationEvent_t644 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern MethodInfo AnimationEvent_get_messageOptions_m3324_MethodInfo;
extern "C" int32_t AnimationEvent_get_messageOptions_m3324 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern MethodInfo AnimationEvent_set_messageOptions_m3325_MethodInfo;
extern "C" void AnimationEvent_set_messageOptions_m3325 (AnimationEvent_t644 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m3326 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m3327 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern MethodInfo AnimationEvent_get_animationState_m3328_MethodInfo;
extern "C" AnimationState_t643 * AnimationEvent_get_animationState_m3328 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m3326(__this, /*hidden argument*/&AnimationEvent_get_isFiredByLegacy_m3326_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1862(NULL /*static, unused*/, (String_t*) &_stringLiteral238, /*hidden argument*/&Debug_LogError_m1862_MethodInfo);
	}

IL_0015:
	{
		AnimationState_t643 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern MethodInfo AnimationEvent_get_animatorStateInfo_m3329_MethodInfo;
extern "C" AnimatorStateInfo_t645  AnimationEvent_get_animatorStateInfo_m3329 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m3327(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m3327_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1862(NULL /*static, unused*/, (String_t*) &_stringLiteral239, /*hidden argument*/&Debug_LogError_m1862_MethodInfo);
	}

IL_0015:
	{
		AnimatorStateInfo_t645  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern MethodInfo AnimationEvent_get_animatorClipInfo_m3330_MethodInfo;
extern "C" AnimatorClipInfo_t646  AnimationEvent_get_animatorClipInfo_m3330 (AnimationEvent_t644 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m3327(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m3327_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1862(NULL /*static, unused*/, (String_t*) &_stringLiteral240, /*hidden argument*/&Debug_LogError_m1862_MethodInfo);
	}

IL_0015:
	{
		AnimatorClipInfo_t646  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Keyframe_t647_il2cpp_TypeInfo;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationCurve_t648_il2cpp_TypeInfo;
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"

extern MethodInfo AnimationCurve_Init_m3335_MethodInfo;
extern MethodInfo AnimationCurve_Cleanup_m3333_MethodInfo;
extern MethodInfo Object_Finalize_m138_MethodInfo;


// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern MethodInfo AnimationCurve__ctor_m3331_MethodInfo;
extern "C" void AnimationCurve__ctor_m3331 (AnimationCurve_t648 * __this, KeyframeU5BU5D_t649* ___keys, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		KeyframeU5BU5D_t649* L_0 = ___keys;
		AnimationCurve_Init_m3335(__this, L_0, /*hidden argument*/&AnimationCurve_Init_m3335_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern MethodInfo AnimationCurve__ctor_m3332_MethodInfo;
extern "C" void AnimationCurve__ctor_m3332 (AnimationCurve_t648 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		AnimationCurve_Init_m3335(__this, (KeyframeU5BU5D_t649*)(KeyframeU5BU5D_t649*)NULL, /*hidden argument*/&AnimationCurve_Init_m3335_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3333 (AnimationCurve_t648 * __this, MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m3333_ftn) (AnimationCurve_t648 *);
	static AnimationCurve_Cleanup_m3333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m3333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern MethodInfo AnimationCurve_Finalize_m3334_MethodInfo;
extern "C" void AnimationCurve_Finalize_m3334 (AnimationCurve_t648 * __this, MethodInfo* method)
{
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m3333(__this, /*hidden argument*/&AnimationCurve_Cleanup_m3333_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m138(__this, /*hidden argument*/&Object_Finalize_m138_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3335 (AnimationCurve_t648 * __this, KeyframeU5BU5D_t649* ___keys, MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m3335_ftn) (AnimationCurve_t648 *, KeyframeU5BU5D_t649*);
	static AnimationCurve_Init_m3335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m3335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t648_marshal(const AnimationCurve_t648& unmarshaled, AnimationCurve_t648_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AnimationCurve_t648_marshal_back(const AnimationCurve_t648_marshaled& marshaled, AnimationCurve_t648& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t648_marshal_cleanup(AnimationCurve_t648_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationState_t643_il2cpp_TypeInfo;
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorClipInfo_t646_il2cpp_TypeInfo;
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorStateInfo_t645_il2cpp_TypeInfo;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern MethodInfo Animator_StringToHash_m3354_MethodInfo;


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern MethodInfo AnimatorStateInfo_IsName_m3336_MethodInfo;
extern "C" bool AnimatorStateInfo_IsName_m3336 (AnimatorStateInfo_t645 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3354(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3354_MethodInfo);
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
extern MethodInfo AnimatorStateInfo_get_fullPathHash_m3337_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m3337 (AnimatorStateInfo_t645 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern MethodInfo AnimatorStateInfo_get_nameHash_m3338_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_nameHash_m3338 (AnimatorStateInfo_t645 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern MethodInfo AnimatorStateInfo_get_shortNameHash_m3339_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m3339 (AnimatorStateInfo_t645 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern MethodInfo AnimatorStateInfo_get_normalizedTime_m3340_MethodInfo;
extern "C" float AnimatorStateInfo_get_normalizedTime_m3340 (AnimatorStateInfo_t645 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern MethodInfo AnimatorStateInfo_get_length_m3341_MethodInfo;
extern "C" float AnimatorStateInfo_get_length_m3341 (AnimatorStateInfo_t645 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern MethodInfo AnimatorStateInfo_get_tagHash_m3342_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_tagHash_m3342 (AnimatorStateInfo_t645 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern MethodInfo AnimatorStateInfo_IsTag_m3343_MethodInfo;
extern "C" bool AnimatorStateInfo_IsTag_m3343 (AnimatorStateInfo_t645 * __this, String_t* ___tag, MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m3354(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3354_MethodInfo);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern MethodInfo AnimatorStateInfo_get_loop_m3344_MethodInfo;
extern "C" bool AnimatorStateInfo_get_loop_m3344 (AnimatorStateInfo_t645 * __this, MethodInfo* method)
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
extern TypeInfo AnimatorTransitionInfo_t651_il2cpp_TypeInfo;
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsName_m3345_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsName_m3345 (AnimatorTransitionInfo_t651 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3354(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3354_MethodInfo);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m3354(NULL /*static, unused*/, L_3, /*hidden argument*/&Animator_StringToHash_m3354_MethodInfo);
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
extern MethodInfo AnimatorTransitionInfo_IsUserName_m3346_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsUserName_m3346 (AnimatorTransitionInfo_t651 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3354(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3354_MethodInfo);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern MethodInfo AnimatorTransitionInfo_get_fullPathHash_m3347_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m3347 (AnimatorTransitionInfo_t651 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern MethodInfo AnimatorTransitionInfo_get_nameHash_m3348_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m3348 (AnimatorTransitionInfo_t651 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern MethodInfo AnimatorTransitionInfo_get_userNameHash_m3349_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m3349 (AnimatorTransitionInfo_t651 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern MethodInfo AnimatorTransitionInfo_get_normalizedTime_m3350_MethodInfo;
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m3350 (AnimatorTransitionInfo_t651 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern MethodInfo AnimatorTransitionInfo_get_anyState_m3351_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_anyState_m3351 (AnimatorTransitionInfo_t651 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern MethodInfo AnimatorTransitionInfo_get_entry_m3352_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_entry_m3352 (AnimatorTransitionInfo_t651 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern MethodInfo AnimatorTransitionInfo_get_exit_m3353_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_exit_m3353 (AnimatorTransitionInfo_t651 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t651_marshal(const AnimatorTransitionInfo_t651& unmarshaled, AnimatorTransitionInfo_t651_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t651_marshal_back(const AnimatorTransitionInfo_t651_marshaled& marshaled, AnimatorTransitionInfo_t651& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t651_marshal_cleanup(AnimatorTransitionInfo_t651_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Animator_t345_il2cpp_TypeInfo;

// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
extern MethodInfo Animator_SetTriggerString_m3355_MethodInfo;
extern MethodInfo Animator_ResetTriggerString_m3356_MethodInfo;


// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern MethodInfo Animator_SetTrigger_m2343_MethodInfo;
extern "C" void Animator_SetTrigger_m2343 (Animator_t345 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m3355(__this, L_0, /*hidden argument*/&Animator_SetTriggerString_m3355_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern MethodInfo Animator_ResetTrigger_m2342_MethodInfo;
extern "C" void Animator_ResetTrigger_m2342 (Animator_t345 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m3356(__this, L_0, /*hidden argument*/&Animator_ResetTriggerString_m3356_MethodInfo);
		return;
	}
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern MethodInfo Animator_get_runtimeAnimatorController_m2341_MethodInfo;
extern "C" RuntimeAnimatorController_t442 * Animator_get_runtimeAnimatorController_m2341 (Animator_t345 * __this, MethodInfo* method)
{
	typedef RuntimeAnimatorController_t442 * (*Animator_get_runtimeAnimatorController_m2341_ftn) (Animator_t345 *);
	static Animator_get_runtimeAnimatorController_m2341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m2341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m3354 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m3354_ftn) (String_t*);
	static Animator_StringToHash_m3354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m3354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m3355 (Animator_t345 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m3355_ftn) (Animator_t345 *, String_t*);
	static Animator_SetTriggerString_m3355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m3355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m3356 (Animator_t345 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m3356_ftn) (Animator_t345 *, String_t*);
	static Animator_ResetTriggerString_m3356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m3356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SkeletonBone_t652_il2cpp_TypeInfo;
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t652_marshal(const SkeletonBone_t652& unmarshaled, SkeletonBone_t652_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t652_marshal_back(const SkeletonBone_t652_marshaled& marshaled, SkeletonBone_t652& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t652_marshal_cleanup(SkeletonBone_t652_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanLimit_t653_il2cpp_TypeInfo;
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanBone_t654_il2cpp_TypeInfo;
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern MethodInfo HumanBone_get_boneName_m3357_MethodInfo;
extern "C" String_t* HumanBone_get_boneName_m3357 (HumanBone_t654 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern MethodInfo HumanBone_set_boneName_m3358_MethodInfo;
extern "C" void HumanBone_set_boneName_m3358 (HumanBone_t654 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern MethodInfo HumanBone_get_humanName_m3359_MethodInfo;
extern "C" String_t* HumanBone_get_humanName_m3359 (HumanBone_t654 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern MethodInfo HumanBone_set_humanName_m3360_MethodInfo;
extern "C" void HumanBone_set_humanName_m3360 (HumanBone_t654 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t654_marshal(const HumanBone_t654& unmarshaled, HumanBone_t654_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t654_marshal_back(const HumanBone_t654_marshaled& marshaled, HumanBone_t654& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t654_marshal_cleanup(HumanBone_t654_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RuntimeAnimatorController_t442_il2cpp_TypeInfo;
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"



// UnityEngine.Terrain
#include "UnityEngine_UnityEngine_Terrain.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Terrain_t655_il2cpp_TypeInfo;
// UnityEngine.Terrain
#include "UnityEngine_UnityEngine_TerrainMethodDeclarations.h"



// System.Void UnityEngine.Terrain::.ctor()
extern MethodInfo Terrain__ctor_m3361_MethodInfo;
extern "C" void Terrain__ctor_m3361 (Terrain_t655 * __this, MethodInfo* method)
{
	{
		Behaviour__ctor_m3147(__this, /*hidden argument*/&Behaviour__ctor_m3147_MethodInfo);
		return;
	}
}
// UnityEngine.TextAlignment
#include "UnityEngine_UnityEngine_TextAlignment.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAlignment_t656_il2cpp_TypeInfo;
// UnityEngine.TextAlignment
#include "UnityEngine_UnityEngine_TextAlignmentMethodDeclarations.h"



// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAnchor_t450_il2cpp_TypeInfo;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HorizontalWrapMode_t483_il2cpp_TypeInfo;
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VerticalWrapMode_t484_il2cpp_TypeInfo;
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUIText.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUIText_t91_il2cpp_TypeInfo;
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"

extern MethodInfo GUIText_Internal_GetPixelOffset_m3362_MethodInfo;
extern MethodInfo GUIText_Internal_SetPixelOffset_m3363_MethodInfo;
extern MethodInfo GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3364_MethodInfo;


// System.String UnityEngine.GUIText::get_text()
extern MethodInfo GUIText_get_text_m658_MethodInfo;
extern "C" String_t* GUIText_get_text_m658 (GUIText_t91 * __this, MethodInfo* method)
{
	typedef String_t* (*GUIText_get_text_m658_ftn) (GUIText_t91 *);
	static GUIText_get_text_m658_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_get_text_m658_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIText::set_text(System.String)
extern MethodInfo GUIText_set_text_m587_MethodInfo;
extern "C" void GUIText_set_text_m587 (GUIText_t91 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*GUIText_set_text_m587_ftn) (GUIText_t91 *, String_t*);
	static GUIText_set_text_m587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_set_text_m587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIText::Internal_GetPixelOffset(UnityEngine.Vector2&)
extern "C" void GUIText_Internal_GetPixelOffset_m3362 (GUIText_t91 * __this, Vector2_t16 * ___output, MethodInfo* method)
{
	typedef void (*GUIText_Internal_GetPixelOffset_m3362_ftn) (GUIText_t91 *, Vector2_t16 *);
	static GUIText_Internal_GetPixelOffset_m3362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_Internal_GetPixelOffset_m3362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::Internal_GetPixelOffset(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___output);
}
// System.Void UnityEngine.GUIText::Internal_SetPixelOffset(UnityEngine.Vector2)
extern "C" void GUIText_Internal_SetPixelOffset_m3363 (GUIText_t91 * __this, Vector2_t16  ___p, MethodInfo* method)
{
	{
		GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3364(NULL /*static, unused*/, __this, (&___p), /*hidden argument*/&GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3364_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIText::INTERNAL_CALL_Internal_SetPixelOffset(UnityEngine.GUIText,UnityEngine.Vector2&)
extern "C" void GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3364 (Object_t * __this /* static, unused */, GUIText_t91 * ___self, Vector2_t16 * ___p, MethodInfo* method)
{
	typedef void (*GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3364_ftn) (GUIText_t91 *, Vector2_t16 *);
	static GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::INTERNAL_CALL_Internal_SetPixelOffset(UnityEngine.GUIText,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___self, ___p);
}
// UnityEngine.Vector2 UnityEngine.GUIText::get_pixelOffset()
extern MethodInfo GUIText_get_pixelOffset_m596_MethodInfo;
extern "C" Vector2_t16  GUIText_get_pixelOffset_m596 (GUIText_t91 * __this, MethodInfo* method)
{
	Vector2_t16  V_0 = {0};
	{
		GUIText_Internal_GetPixelOffset_m3362(__this, (&V_0), /*hidden argument*/&GUIText_Internal_GetPixelOffset_m3362_MethodInfo);
		Vector2_t16  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUIText::set_pixelOffset(UnityEngine.Vector2)
extern MethodInfo GUIText_set_pixelOffset_m586_MethodInfo;
extern "C" void GUIText_set_pixelOffset_m586 (GUIText_t91 * __this, Vector2_t16  ___value, MethodInfo* method)
{
	{
		Vector2_t16  L_0 = ___value;
		GUIText_Internal_SetPixelOffset_m3363(__this, L_0, /*hidden argument*/&GUIText_Internal_SetPixelOffset_m3363_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIText::set_alignment(UnityEngine.TextAlignment)
extern MethodInfo GUIText_set_alignment_m665_MethodInfo;
extern "C" void GUIText_set_alignment_m665 (GUIText_t91 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GUIText_set_alignment_m665_ftn) (GUIText_t91 *, int32_t);
	static GUIText_set_alignment_m665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_set_alignment_m665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_alignment(UnityEngine.TextAlignment)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIText::set_anchor(UnityEngine.TextAnchor)
extern MethodInfo GUIText_set_anchor_m666_MethodInfo;
extern "C" void GUIText_set_anchor_m666 (GUIText_t91 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GUIText_set_anchor_m666_ftn) (GUIText_t91 *, int32_t);
	static GUIText_set_anchor_m666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_set_anchor_m666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_anchor(UnityEngine.TextAnchor)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIText::set_fontSize(System.Int32)
extern MethodInfo GUIText_set_fontSize_m585_MethodInfo;
extern "C" void GUIText_set_fontSize_m585 (GUIText_t91 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GUIText_set_fontSize_m585_ftn) (GUIText_t91 *, int32_t);
	static GUIText_set_fontSize_m585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_set_fontSize_m585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_fontSize(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMesh.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextMesh_t100_il2cpp_TypeInfo;
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMeshMethodDeclarations.h"

extern MethodInfo TextMesh_INTERNAL_set_color_m3365_MethodInfo;


// System.String UnityEngine.TextMesh::get_text()
extern MethodInfo TextMesh_get_text_m654_MethodInfo;
extern "C" String_t* TextMesh_get_text_m654 (TextMesh_t100 * __this, MethodInfo* method)
{
	typedef String_t* (*TextMesh_get_text_m654_ftn) (TextMesh_t100 *);
	static TextMesh_get_text_m654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_get_text_m654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern MethodInfo TextMesh_set_text_m556_MethodInfo;
extern "C" void TextMesh_set_text_m556 (TextMesh_t100 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*TextMesh_set_text_m556_ftn) (TextMesh_t100 *, String_t*);
	static TextMesh_set_text_m556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_text_m556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TextMesh::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void TextMesh_INTERNAL_set_color_m3365 (TextMesh_t100 * __this, Color_t30 * ___value, MethodInfo* method)
{
	typedef void (*TextMesh_INTERNAL_set_color_m3365_ftn) (TextMesh_t100 *, Color_t30 *);
	static TextMesh_INTERNAL_set_color_m3365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_INTERNAL_set_color_m3365_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
extern MethodInfo TextMesh_set_color_m560_MethodInfo;
extern "C" void TextMesh_set_color_m560 (TextMesh_t100 * __this, Color_t30  ___value, MethodInfo* method)
{
	{
		TextMesh_INTERNAL_set_color_m3365(__this, (&___value), /*hidden argument*/&TextMesh_INTERNAL_set_color_m3365_MethodInfo);
		return;
	}
}
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CharacterInfo_t657_il2cpp_TypeInfo;
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

extern TypeInfo Vector2_t16_il2cpp_TypeInfo;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern MethodInfo Rect_get_width_m589_MethodInfo;
extern MethodInfo Rect_get_height_m2075_MethodInfo;
extern MethodInfo Rect_get_x_m598_MethodInfo;
extern MethodInfo Rect_get_y_m599_MethodInfo;
extern MethodInfo Vector2__ctor_m132_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomLeftUnFlipped_m3374_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopLeftUnFlipped_m3377_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomRightUnFlipped_m3375_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopRightUnFlipped_m3376_MethodInfo;


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern MethodInfo CharacterInfo_get_advance_m3366_MethodInfo;
extern "C" int32_t CharacterInfo_get_advance_m3366 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern MethodInfo CharacterInfo_get_glyphWidth_m3367_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphWidth_m3367 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		Rect_t139 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m589(L_0, /*hidden argument*/&Rect_get_width_m589_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern MethodInfo CharacterInfo_get_glyphHeight_m3368_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphHeight_m3368 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		Rect_t139 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m2075(L_0, /*hidden argument*/&Rect_get_height_m2075_MethodInfo);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern MethodInfo CharacterInfo_get_bearing_m3369_MethodInfo;
extern "C" int32_t CharacterInfo_get_bearing_m3369 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		Rect_t139 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m598(L_0, /*hidden argument*/&Rect_get_x_m598_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern MethodInfo CharacterInfo_get_minY_m3370_MethodInfo;
extern "C" int32_t CharacterInfo_get_minY_m3370 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t139 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m599(L_1, /*hidden argument*/&Rect_get_y_m599_MethodInfo);
		Rect_t139 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m2075(L_3, /*hidden argument*/&Rect_get_height_m2075_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern MethodInfo CharacterInfo_get_maxY_m3371_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxY_m3371 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t139 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m599(L_1, /*hidden argument*/&Rect_get_y_m599_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern MethodInfo CharacterInfo_get_minX_m3372_MethodInfo;
extern "C" int32_t CharacterInfo_get_minX_m3372 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		Rect_t139 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m598(L_0, /*hidden argument*/&Rect_get_x_m598_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern MethodInfo CharacterInfo_get_maxX_m3373_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxX_m3373 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		Rect_t139 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m598(L_0, /*hidden argument*/&Rect_get_x_m598_MethodInfo);
		Rect_t139 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m589(L_2, /*hidden argument*/&Rect_get_width_m589_MethodInfo);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t16  CharacterInfo_get_uvBottomLeftUnFlipped_m3374 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		Rect_t139 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m598(L_0, /*hidden argument*/&Rect_get_x_m598_MethodInfo);
		Rect_t139 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m599(L_2, /*hidden argument*/&Rect_get_y_m599_MethodInfo);
		Vector2_t16  L_4 = {0};
		Vector2__ctor_m132(&L_4, L_1, L_3, /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t16  CharacterInfo_get_uvBottomRightUnFlipped_m3375 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		Rect_t139 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m598(L_0, /*hidden argument*/&Rect_get_x_m598_MethodInfo);
		Rect_t139 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m589(L_2, /*hidden argument*/&Rect_get_width_m589_MethodInfo);
		Rect_t139 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m599(L_4, /*hidden argument*/&Rect_get_y_m599_MethodInfo);
		Vector2_t16  L_6 = {0};
		Vector2__ctor_m132(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t16  CharacterInfo_get_uvTopRightUnFlipped_m3376 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		Rect_t139 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m598(L_0, /*hidden argument*/&Rect_get_x_m598_MethodInfo);
		Rect_t139 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m589(L_2, /*hidden argument*/&Rect_get_width_m589_MethodInfo);
		Rect_t139 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m599(L_4, /*hidden argument*/&Rect_get_y_m599_MethodInfo);
		Rect_t139 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m2075(L_6, /*hidden argument*/&Rect_get_height_m2075_MethodInfo);
		Vector2_t16  L_8 = {0};
		Vector2__ctor_m132(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t16  CharacterInfo_get_uvTopLeftUnFlipped_m3377 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	{
		Rect_t139 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m598(L_0, /*hidden argument*/&Rect_get_x_m598_MethodInfo);
		Rect_t139 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m599(L_2, /*hidden argument*/&Rect_get_y_m599_MethodInfo);
		Rect_t139 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m2075(L_4, /*hidden argument*/&Rect_get_height_m2075_MethodInfo);
		Vector2_t16  L_6 = {0};
		Vector2__ctor_m132(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern MethodInfo CharacterInfo_get_uvBottomLeft_m3378_MethodInfo;
extern "C" Vector2_t16  CharacterInfo_get_uvBottomLeft_m3378 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	Vector2_t16  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t16  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m3374(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m3374_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t16  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m3374(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m3374_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern MethodInfo CharacterInfo_get_uvBottomRight_m3379_MethodInfo;
extern "C" Vector2_t16  CharacterInfo_get_uvBottomRight_m3379 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	Vector2_t16  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t16  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m3377(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m3377_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t16  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m3375(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m3375_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern MethodInfo CharacterInfo_get_uvTopRight_m3380_MethodInfo;
extern "C" Vector2_t16  CharacterInfo_get_uvTopRight_m3380 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	Vector2_t16  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t16  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m3376(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m3376_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t16  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m3376(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m3376_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern MethodInfo CharacterInfo_get_uvTopLeft_m3381_MethodInfo;
extern "C" Vector2_t16  CharacterInfo_get_uvTopLeft_m3381 (CharacterInfo_t657 * __this, MethodInfo* method)
{
	Vector2_t16  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t16  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m3375(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m3375_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t16  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m3377(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m3377_MethodInfo);
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
void CharacterInfo_t657_marshal(const CharacterInfo_t657& unmarshaled, CharacterInfo_t657_marshaled& marshaled)
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
void CharacterInfo_t657_marshal_back(const CharacterInfo_t657_marshaled& marshaled, CharacterInfo_t657& unmarshaled)
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
void CharacterInfo_t657_marshal_cleanup(CharacterInfo_t657_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FontTextureRebuildCallback_t658_il2cpp_TypeInfo;
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo FontTextureRebuildCallback__ctor_m3382_MethodInfo;
extern "C" void FontTextureRebuildCallback__ctor_m3382 (FontTextureRebuildCallback_t658 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern MethodInfo FontTextureRebuildCallback_Invoke_m3383_MethodInfo;
extern "C" void FontTextureRebuildCallback_Invoke_m3383 (FontTextureRebuildCallback_t658 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m3383((FontTextureRebuildCallback_t658 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t658(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo FontTextureRebuildCallback_BeginInvoke_m3384_MethodInfo;
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m3384 (FontTextureRebuildCallback_t658 * __this, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo FontTextureRebuildCallback_EndInvoke_m3385_MethodInfo;
extern "C" void FontTextureRebuildCallback_EndInvoke_m3385 (FontTextureRebuildCallback_t658 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Font_t270_il2cpp_TypeInfo;
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo Action_1_t417_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
extern Il2CppType Action_1_t417_0_0_0;
extern MethodInfo Action_1_Invoke_m3656_MethodInfo;
extern Il2CppGenericMethod Action_1_Invoke_m3656_GenericMethod;


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_add_textureRebuilt_m2052_MethodInfo;
extern TypeInfo* Action_1_t417_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m2052 (Object_t * __this /* static, unused */, Action_1_t417 * ___value, MethodInfo* method)
{
	static bool Font_add_textureRebuilt_m2052_init;
	if (!Font_add_textureRebuilt_m2052_init)
	{
		Action_1_t417_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t417_0_0_0);
		Font_add_textureRebuilt_m2052_init = true;
	}
	{
		Action_1_t417 * L_0 = ((Font_t270_StaticFields*)InitializedTypeInfo(&Font_t270_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t417 * L_1 = ___value;
		Delegate_t424 * L_2 = Delegate_Combine_m2090(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m2090_MethodInfo);
		((Font_t270_StaticFields*)InitializedTypeInfo(&Font_t270_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t417 *)Castclass(L_2, Action_1_t417_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_remove_textureRebuilt_m3386_MethodInfo;
extern TypeInfo* Action_1_t417_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m3386 (Object_t * __this /* static, unused */, Action_1_t417 * ___value, MethodInfo* method)
{
	static bool Font_remove_textureRebuilt_m3386_init;
	if (!Font_remove_textureRebuilt_m3386_init)
	{
		Action_1_t417_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t417_0_0_0);
		Font_remove_textureRebuilt_m3386_init = true;
	}
	{
		Action_1_t417 * L_0 = ((Font_t270_StaticFields*)InitializedTypeInfo(&Font_t270_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t417 * L_1 = ___value;
		Delegate_t424 * L_2 = Delegate_Remove_m2091(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m2091_MethodInfo);
		((Font_t270_StaticFields*)InitializedTypeInfo(&Font_t270_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t417 *)Castclass(L_2, Action_1_t417_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern MethodInfo Font_get_material_m2366_MethodInfo;
extern "C" Material_t4 * Font_get_material_m2366 (Font_t270 * __this, MethodInfo* method)
{
	typedef Material_t4 * (*Font_get_material_m2366_ftn) (Font_t270 *);
	static Font_get_material_m2366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m2366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern MethodInfo Font_HasCharacter_m2217_MethodInfo;
extern "C" bool Font_HasCharacter_m2217 (Font_t270 * __this, uint16_t ___c, MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m2217_ftn) (Font_t270 *, uint16_t);
	static Font_HasCharacter_m2217_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m2217_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern MethodInfo Font_InvokeTextureRebuilt_Internal_m3387_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3656_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m3387 (Object_t * __this /* static, unused */, Font_t270 * ___font, MethodInfo* method)
{
	static bool Font_InvokeTextureRebuilt_Internal_m3387_init;
	if (!Font_InvokeTextureRebuilt_Internal_m3387_init)
	{
		Action_1_Invoke_m3656_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3656_GenericMethod);
		Font_InvokeTextureRebuilt_Internal_m3387_init = true;
	}
	Action_1_t417 * V_0 = {0};
	{
		Action_1_t417 * L_0 = ((Font_t270_StaticFields*)InitializedTypeInfo(&Font_t270_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t417 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t417 * L_2 = V_0;
		Font_t270 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t270 * >::Invoke(Action_1_Invoke_m3656_MethodInfo_var, L_2, L_3);
	}

IL_0013:
	{
		Font_t270 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t658 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t270 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t658 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(&FontTextureRebuildCallback_Invoke_m3383_MethodInfo, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern MethodInfo Font_get_dynamic_m2368_MethodInfo;
extern "C" bool Font_get_dynamic_m2368 (Font_t270 * __this, MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m2368_ftn) (Font_t270 *);
	static Font_get_dynamic_m2368_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m2368_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern MethodInfo Font_get_fontSize_m2370_MethodInfo;
extern "C" int32_t Font_get_fontSize_m2370 (Font_t270 * __this, MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m2370_ftn) (Font_t270 *);
	static Font_get_fontSize_m2370_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m2370_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UICharInfo_t435_il2cpp_TypeInfo;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UILineInfo_t433_il2cpp_TypeInfo;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerator_t320_il2cpp_TypeInfo;
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
extern TypeInfo Mathf_t28_il2cpp_TypeInfo;
extern TypeInfo List_1_t283_il2cpp_TypeInfo;
extern TypeInfo List_1_t659_il2cpp_TypeInfo;
extern TypeInfo List_1_t660_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t160_il2cpp_TypeInfo;
extern TypeInfo TextGenerationSettings_t354_il2cpp_TypeInfo;
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
extern Il2CppType List_1_t283_0_0_0;
extern Il2CppType List_1_t659_0_0_0;
extern Il2CppType List_1_t660_0_0_0;
extern MethodInfo String_IsNullOrEmpty_m2230_MethodInfo;
extern MethodInfo String_get_Length_m656_MethodInfo;
extern MethodInfo TextGenerator_get_vertexCount_m3394_MethodInfo;
extern MethodInfo Mathf_Max_m2222_MethodInfo;
extern MethodInfo Mathf_Min_m2224_MethodInfo;
extern MethodInfo TextGenerator_GetVertices_m3406_MethodInfo;
extern MethodInfo TextGenerator_GetCharacters_m3404_MethodInfo;
extern MethodInfo TextGenerator_GetLines_m3405_MethodInfo;
extern MethodInfo TextGenerator__ctor_m2364_MethodInfo;
extern MethodInfo List_1__ctor_m3657_MethodInfo;
extern MethodInfo List_1__ctor_m3658_MethodInfo;
extern MethodInfo List_1__ctor_m3659_MethodInfo;
extern MethodInfo TextGenerator_Init_m3389_MethodInfo;
extern MethodInfo TextGenerator_Dispose_cpp_m3390_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_cpp_m3392_MethodInfo;
extern MethodInfo TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3393_MethodInfo;
extern MethodInfo IDisposable_Dispose_m623_MethodInfo;
extern MethodInfo TextGenerator_GetCharactersInternal_m3398_MethodInfo;
extern MethodInfo TextGenerator_GetLinesInternal_m3400_MethodInfo;
extern MethodInfo TextGenerator_GetVerticesInternal_m3395_MethodInfo;
extern MethodInfo TextGenerator_Populate_m2231_MethodInfo;
extern MethodInfo TextGenerator_get_rectExtents_m2233_MethodInfo;
extern MethodInfo String_op_Equality_m641_MethodInfo;
extern MethodInfo TextGenerationSettings_Equals_m3539_MethodInfo;
extern MethodInfo TextGenerator_PopulateAlways_m3407_MethodInfo;
extern MethodInfo TextGenerator_ValidatedSettings_m3403_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_m3391_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3657_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3658_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3659_GenericMethod;


// System.Void UnityEngine.TextGenerator::.ctor()
extern MethodInfo TextGenerator__ctor_m2182_MethodInfo;
extern "C" void TextGenerator__ctor_m2182 (TextGenerator_t320 * __this, MethodInfo* method)
{
	{
		TextGenerator__ctor_m2364(__this, ((int32_t)50), /*hidden argument*/&TextGenerator__ctor_m2364_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t283_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t659_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t660_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3657_MethodInfo_var;
extern MethodInfo* List_1__ctor_m3658_MethodInfo_var;
extern MethodInfo* List_1__ctor_m3659_MethodInfo_var;
extern "C" void TextGenerator__ctor_m2364 (TextGenerator_t320 * __this, int32_t ___initialCapacity, MethodInfo* method)
{
	static bool TextGenerator__ctor_m2364_init;
	if (!TextGenerator__ctor_m2364_init)
	{
		List_1_t283_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t283_0_0_0);
		List_1_t659_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t659_0_0_0);
		List_1_t660_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t660_0_0_0);
		List_1__ctor_m3657_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3657_GenericMethod);
		List_1__ctor_m3658_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3658_GenericMethod);
		List_1__ctor_m3659_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3659_GenericMethod);
		TextGenerator__ctor_m2364_init = true;
	}
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		int32_t L_0 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t283_il2cpp_TypeInfo_var);
		List_1_t283 * L_1 = (List_1_t283 *)il2cpp_codegen_object_new (List_1_t283_il2cpp_TypeInfo_var);
		List_1__ctor_m3657(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m3657_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t659_il2cpp_TypeInfo_var);
		List_1_t659 * L_3 = (List_1_t659 *)il2cpp_codegen_object_new (List_1_t659_il2cpp_TypeInfo_var);
		List_1__ctor_m3658(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m3658_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t660_il2cpp_TypeInfo_var);
		List_1_t660 * L_4 = (List_1_t660 *)il2cpp_codegen_object_new (List_1_t660_il2cpp_TypeInfo_var);
		List_1__ctor_m3659(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m3659_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m3389(__this, /*hidden argument*/&TextGenerator_Init_m3389_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern MethodInfo TextGenerator_System_IDisposable_Dispose_m3388_MethodInfo;
extern "C" void TextGenerator_System_IDisposable_Dispose_m3388 (TextGenerator_t320 * __this, MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m3390(__this, /*hidden argument*/&TextGenerator_Dispose_cpp_m3390_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m3389 (TextGenerator_t320 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m3389_ftn) (TextGenerator_t320 *);
	static TextGenerator_Init_m3389_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m3389_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m3390 (TextGenerator_t320 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m3390_ftn) (TextGenerator_t320 *);
	static TextGenerator_Dispose_cpp_m3390_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m3390_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m3391 (TextGenerator_t320 * __this, String_t* ___str, Font_t270 * ___font, Color_t30  ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t16  ___extents, Vector2_t16  ___pivot, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t270 * L_1 = ___font;
		Color_t30  L_2 = ___color;
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
		bool L_19 = TextGenerator_Populate_Internal_cpp_m3392(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/&TextGenerator_Populate_Internal_cpp_m3392_MethodInfo);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m3392 (TextGenerator_t320 * __this, String_t* ___str, Font_t270 * ___font, Color_t30  ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t270 * L_1 = ___font;
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
		bool L_18 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3393(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/&TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3393_MethodInfo);
		return L_18;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3393 (Object_t * __this /* static, unused */, TextGenerator_t320 * ___self, String_t* ___str, Font_t270 * ___font, Color_t30 * ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3393_ftn) (TextGenerator_t320 *, String_t*, Font_t270 *, Color_t30 *, int32_t, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3393_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3393_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t139  TextGenerator_get_rectExtents_m2233 (TextGenerator_t320 * __this, MethodInfo* method)
{
	typedef Rect_t139  (*TextGenerator_get_rectExtents_m2233_ftn) (TextGenerator_t320 *);
	static TextGenerator_get_rectExtents_m2233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_rectExtents_m2233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m3394 (TextGenerator_t320 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m3394_ftn) (TextGenerator_t320 *);
	static TextGenerator_get_vertexCount_m3394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m3394_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m3395 (TextGenerator_t320 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m3395_ftn) (TextGenerator_t320 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m3395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m3395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern MethodInfo TextGenerator_GetVerticesArray_m3396_MethodInfo;
extern "C" UIVertexU5BU5D_t319* TextGenerator_GetVerticesArray_m3396 (TextGenerator_t320 * __this, MethodInfo* method)
{
	typedef UIVertexU5BU5D_t319* (*TextGenerator_GetVerticesArray_m3396_ftn) (TextGenerator_t320 *);
	static TextGenerator_GetVerticesArray_m3396_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m3396_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern MethodInfo TextGenerator_get_characterCount_m3397_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCount_m3397 (TextGenerator_t320 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m3397_ftn) (TextGenerator_t320 *);
	static TextGenerator_get_characterCount_m3397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m3397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern MethodInfo TextGenerator_get_characterCountVisible_m2210_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCountVisible_m2210 (TextGenerator_t320 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_IsNullOrEmpty_m2230(NULL /*static, unused*/, L_0, /*hidden argument*/&String_IsNullOrEmpty_m2230_MethodInfo);
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
		int32_t L_3 = String_get_Length_m656(L_2, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		int32_t L_4 = TextGenerator_get_vertexCount_m3394(__this, /*hidden argument*/&TextGenerator_get_vertexCount_m3394_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t28_il2cpp_TypeInfo));
		int32_t L_5 = Mathf_Max_m2222(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/&Mathf_Max_m2222_MethodInfo);
		int32_t L_6 = Mathf_Min_m2224(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Mathf_Min_m2224_MethodInfo);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m3398 (TextGenerator_t320 * __this, Object_t * ___characters, MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m3398_ftn) (TextGenerator_t320 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m3398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m3398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern MethodInfo TextGenerator_GetCharactersArray_m3399_MethodInfo;
extern "C" UICharInfoU5BU5D_t661* TextGenerator_GetCharactersArray_m3399 (TextGenerator_t320 * __this, MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t661* (*TextGenerator_GetCharactersArray_m3399_ftn) (TextGenerator_t320 *);
	static TextGenerator_GetCharactersArray_m3399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m3399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern MethodInfo TextGenerator_get_lineCount_m2209_MethodInfo;
extern "C" int32_t TextGenerator_get_lineCount_m2209 (TextGenerator_t320 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m2209_ftn) (TextGenerator_t320 *);
	static TextGenerator_get_lineCount_m2209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m2209_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m3400 (TextGenerator_t320 * __this, Object_t * ___lines, MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m3400_ftn) (TextGenerator_t320 *, Object_t *);
	static TextGenerator_GetLinesInternal_m3400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m3400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern MethodInfo TextGenerator_GetLinesArray_m3401_MethodInfo;
extern "C" UILineInfoU5BU5D_t662* TextGenerator_GetLinesArray_m3401 (TextGenerator_t320 * __this, MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t662* (*TextGenerator_GetLinesArray_m3401_ftn) (TextGenerator_t320 *);
	static TextGenerator_GetLinesArray_m3401_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m3401_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern MethodInfo TextGenerator_get_fontSizeUsedForBestFit_m2253_MethodInfo;
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m2253 (TextGenerator_t320 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m2253_ftn) (TextGenerator_t320 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m2253_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m2253_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern MethodInfo TextGenerator_Finalize_m3402_MethodInfo;
extern "C" void TextGenerator_Finalize_m3402 (TextGenerator_t320 * __this, MethodInfo* method)
{
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m138(__this, /*hidden argument*/&Object_Finalize_m138_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t354  TextGenerator_ValidatedSettings_m3403 (TextGenerator_t320 * __this, TextGenerationSettings_t354  ___settings, MethodInfo* method)
{
	{
		Font_t270 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m125(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t270 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m2368(L_2, /*hidden argument*/&Font_get_dynamic_m2368_MethodInfo);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t354  L_4 = ___settings;
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
		Debug_LogWarning_m99(NULL /*static, unused*/, (String_t*) &_stringLiteral241, /*hidden argument*/&Debug_LogWarning_m99_MethodInfo);
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
		Debug_LogWarning_m99(NULL /*static, unused*/, (String_t*) &_stringLiteral242, /*hidden argument*/&Debug_LogWarning_m99_MethodInfo);
		(&___settings)->___resizeTextForBestFit_7 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t354  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern MethodInfo TextGenerator_Invalidate_m2373_MethodInfo;
extern "C" void TextGenerator_Invalidate_m2373 (TextGenerator_t320 * __this, MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m3404 (TextGenerator_t320 * __this, List_1_t659 * ___characters, MethodInfo* method)
{
	{
		List_1_t659 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m3398(__this, L_0, /*hidden argument*/&TextGenerator_GetCharactersInternal_m3398_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m3405 (TextGenerator_t320 * __this, List_1_t660 * ___lines, MethodInfo* method)
{
	{
		List_1_t660 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m3400(__this, L_0, /*hidden argument*/&TextGenerator_GetLinesInternal_m3400_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m3406 (TextGenerator_t320 * __this, List_1_t283 * ___vertices, MethodInfo* method)
{
	{
		List_1_t283 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m3395(__this, L_0, /*hidden argument*/&TextGenerator_GetVerticesInternal_m3395_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredWidth_m2371_MethodInfo;
extern "C" float TextGenerator_GetPreferredWidth_m2371 (TextGenerator_t320 * __this, String_t* ___str, TextGenerationSettings_t354  ___settings, MethodInfo* method)
{
	Rect_t139  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_12 = 1;
		(&___settings)->___verticalOverflow_11 = 1;
		(&___settings)->___updateBounds_10 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t354  L_1 = ___settings;
		TextGenerator_Populate_m2231(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2231_MethodInfo);
		Rect_t139  L_2 = TextGenerator_get_rectExtents_m2233(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2233_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_width_m589((&V_0), /*hidden argument*/&Rect_get_width_m589_MethodInfo);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredHeight_m2372_MethodInfo;
extern "C" float TextGenerator_GetPreferredHeight_m2372 (TextGenerator_t320 * __this, String_t* ___str, TextGenerationSettings_t354  ___settings, MethodInfo* method)
{
	Rect_t139  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_11 = 1;
		(&___settings)->___updateBounds_10 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t354  L_1 = ___settings;
		TextGenerator_Populate_m2231(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2231_MethodInfo);
		Rect_t139  L_2 = TextGenerator_get_rectExtents_m2233(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2233_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_height_m2075((&V_0), /*hidden argument*/&Rect_get_height_m2075_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_Populate_m2231 (TextGenerator_t320 * __this, String_t* ___str, TextGenerationSettings_t354  ___settings, MethodInfo* method)
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
		bool L_3 = String_op_Equality_m641(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t354  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m3539((&___settings), L_4, /*hidden argument*/&TextGenerationSettings_Equals_m3539_MethodInfo);
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
		TextGenerationSettings_t354  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m3407(__this, L_7, L_8, /*hidden argument*/&TextGenerator_PopulateAlways_m3407_MethodInfo);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m3407 (TextGenerator_t320 * __this, String_t* ___str, TextGenerationSettings_t354  ___settings, MethodInfo* method)
{
	TextGenerationSettings_t354  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t354  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t354  L_2 = ___settings;
		TextGenerationSettings_t354  L_3 = TextGenerator_ValidatedSettings_m3403(__this, L_2, /*hidden argument*/&TextGenerator_ValidatedSettings_m3403_MethodInfo);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t270 * L_5 = ((&V_0)->___font_0);
		Color_t30  L_6 = ((&V_0)->___color_1);
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
		Vector2_t16  L_18 = ((&V_0)->___generationExtents_13);
		Vector2_t16  L_19 = ((&V_0)->___pivot_14);
		bool L_20 = ((&V_0)->___generateOutOfBounds_15);
		bool L_21 = TextGenerator_Populate_Internal_m3391(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/&TextGenerator_Populate_Internal_m3391_MethodInfo);
		__this->___m_LastValid_4 = L_21;
		bool L_22 = (__this->___m_LastValid_4);
		return L_22;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern MethodInfo TextGenerator_get_verts_m2374_MethodInfo;
extern "C" Object_t* TextGenerator_get_verts_m2374 (TextGenerator_t320 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t283 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m3406(__this, L_1, /*hidden argument*/&TextGenerator_GetVertices_m3406_MethodInfo);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t283 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern MethodInfo TextGenerator_get_characters_m2211_MethodInfo;
extern "C" Object_t* TextGenerator_get_characters_m2211 (TextGenerator_t320 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t659 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m3404(__this, L_1, /*hidden argument*/&TextGenerator_GetCharacters_m3404_MethodInfo);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t659 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern MethodInfo TextGenerator_get_lines_m2207_MethodInfo;
extern "C" Object_t* TextGenerator_get_lines_m2207 (TextGenerator_t320 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t660 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m3405(__this, L_1, /*hidden argument*/&TextGenerator_GetLines_m3405_MethodInfo);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t660 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderMode_t663_il2cpp_TypeInfo;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"



// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WillRenderCanvases_t415_il2cpp_TypeInfo;
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern MethodInfo WillRenderCanvases__ctor_m2029_MethodInfo;
extern "C" void WillRenderCanvases__ctor_m2029 (WillRenderCanvases_t415 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern MethodInfo WillRenderCanvases_Invoke_m3408_MethodInfo;
extern "C" void WillRenderCanvases_Invoke_m3408 (WillRenderCanvases_t415 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m3408((WillRenderCanvases_t415 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t415(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo WillRenderCanvases_BeginInvoke_m3409_MethodInfo;
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m3409 (WillRenderCanvases_t415 * __this, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern MethodInfo WillRenderCanvases_EndInvoke_m3410_MethodInfo;
extern "C" void WillRenderCanvases_EndInvoke_m3410 (WillRenderCanvases_t415 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Canvas_t278_il2cpp_TypeInfo;
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"

extern MethodInfo Canvas_SendWillRenderCanvases_m3412_MethodInfo;


// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_add_willRenderCanvases_m2030_MethodInfo;
extern "C" void Canvas_add_willRenderCanvases_m2030 (Object_t * __this /* static, unused */, WillRenderCanvases_t415 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t415 * L_0 = ((Canvas_t278_StaticFields*)InitializedTypeInfo(&Canvas_t278_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t415 * L_1 = ___value;
		Delegate_t424 * L_2 = Delegate_Combine_m2090(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m2090_MethodInfo);
		((Canvas_t278_StaticFields*)InitializedTypeInfo(&Canvas_t278_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t415 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t415_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_remove_willRenderCanvases_m3411_MethodInfo;
extern "C" void Canvas_remove_willRenderCanvases_m3411 (Object_t * __this /* static, unused */, WillRenderCanvases_t415 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t415 * L_0 = ((Canvas_t278_StaticFields*)InitializedTypeInfo(&Canvas_t278_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t415 * L_1 = ___value;
		Delegate_t424 * L_2 = Delegate_Remove_m2091(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m2091_MethodInfo);
		((Canvas_t278_StaticFields*)InitializedTypeInfo(&Canvas_t278_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t415 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t415_il2cpp_TypeInfo)));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern MethodInfo Canvas_get_renderMode_m2104_MethodInfo;
extern "C" int32_t Canvas_get_renderMode_m2104 (Canvas_t278 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m2104_ftn) (Canvas_t278 *);
	static Canvas_get_renderMode_m2104_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m2104_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern MethodInfo Canvas_get_isRootCanvas_m2394_MethodInfo;
extern "C" bool Canvas_get_isRootCanvas_m2394 (Canvas_t278 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m2394_ftn) (Canvas_t278 *);
	static Canvas_get_isRootCanvas_m2394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m2394_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern MethodInfo Canvas_get_worldCamera_m2107_MethodInfo;
extern "C" Camera_t18 * Canvas_get_worldCamera_m2107 (Canvas_t278 * __this, MethodInfo* method)
{
	typedef Camera_t18 * (*Canvas_get_worldCamera_m2107_ftn) (Canvas_t278 *);
	static Canvas_get_worldCamera_m2107_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m2107_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern MethodInfo Canvas_get_scaleFactor_m2369_MethodInfo;
extern "C" float Canvas_get_scaleFactor_m2369 (Canvas_t278 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m2369_ftn) (Canvas_t278 *);
	static Canvas_get_scaleFactor_m2369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m2369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern MethodInfo Canvas_set_scaleFactor_m2398_MethodInfo;
extern "C" void Canvas_set_scaleFactor_m2398 (Canvas_t278 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m2398_ftn) (Canvas_t278 *, float);
	static Canvas_set_scaleFactor_m2398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m2398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern MethodInfo Canvas_get_referencePixelsPerUnit_m2138_MethodInfo;
extern "C" float Canvas_get_referencePixelsPerUnit_m2138 (Canvas_t278 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m2138_ftn) (Canvas_t278 *);
	static Canvas_get_referencePixelsPerUnit_m2138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m2138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern MethodInfo Canvas_set_referencePixelsPerUnit_m2399_MethodInfo;
extern "C" void Canvas_set_referencePixelsPerUnit_m2399 (Canvas_t278 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m2399_ftn) (Canvas_t278 *, float);
	static Canvas_set_referencePixelsPerUnit_m2399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m2399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern MethodInfo Canvas_get_pixelPerfect_m2083_MethodInfo;
extern "C" bool Canvas_get_pixelPerfect_m2083 (Canvas_t278 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m2083_ftn) (Canvas_t278 *);
	static Canvas_get_pixelPerfect_m2083_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m2083_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern MethodInfo Canvas_get_renderOrder_m2106_MethodInfo;
extern "C" int32_t Canvas_get_renderOrder_m2106 (Canvas_t278 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m2106_ftn) (Canvas_t278 *);
	static Canvas_get_renderOrder_m2106_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m2106_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern MethodInfo Canvas_get_sortingOrder_m2105_MethodInfo;
extern "C" int32_t Canvas_get_sortingOrder_m2105 (Canvas_t278 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m2105_ftn) (Canvas_t278 *);
	static Canvas_get_sortingOrder_m2105_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m2105_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
extern MethodInfo Canvas_get_sortingLayerID_m2118_MethodInfo;
extern "C" int32_t Canvas_get_sortingLayerID_m2118 (Canvas_t278 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingLayerID_m2118_ftn) (Canvas_t278 *);
	static Canvas_get_sortingLayerID_m2118_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingLayerID_m2118_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern MethodInfo Canvas_GetDefaultCanvasMaterial_m2057_MethodInfo;
extern "C" Material_t4 * Canvas_GetDefaultCanvasMaterial_m2057 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t4 * (*Canvas_GetDefaultCanvasMaterial_m2057_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m2057_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m2057_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern MethodInfo Canvas_GetDefaultCanvasTextMaterial_m2365_MethodInfo;
extern "C" Material_t4 * Canvas_GetDefaultCanvasTextMaterial_m2365 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t4 * (*Canvas_GetDefaultCanvasTextMaterial_m2365_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m2365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m2365_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C" void Canvas_SendWillRenderCanvases_m3412 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		WillRenderCanvases_t415 * L_0 = ((Canvas_t278_StaticFields*)InitializedTypeInfo(&Canvas_t278_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t415 * L_1 = ((Canvas_t278_StaticFields*)InitializedTypeInfo(&Canvas_t278_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&WillRenderCanvases_Invoke_m3408_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern MethodInfo Canvas_ForceUpdateCanvases_m2304_MethodInfo;
extern "C" void Canvas_ForceUpdateCanvases_m2304 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m3412(NULL /*static, unused*/, /*hidden argument*/&Canvas_SendWillRenderCanvases_m3412_MethodInfo);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasGroup_t422_il2cpp_TypeInfo;
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"

extern MethodInfo CanvasGroup_get_blocksRaycasts_m3413_MethodInfo;


// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern MethodInfo CanvasGroup_get_interactable_m2327_MethodInfo;
extern "C" bool CanvasGroup_get_interactable_m2327 (CanvasGroup_t422 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m2327_ftn) (CanvasGroup_t422 *);
	static CanvasGroup_get_interactable_m2327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m2327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m3413 (CanvasGroup_t422 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m3413_ftn) (CanvasGroup_t422 *);
	static CanvasGroup_get_blocksRaycasts_m3413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m3413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern MethodInfo CanvasGroup_get_ignoreParentGroups_m2081_MethodInfo;
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2081 (CanvasGroup_t422 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m2081_ftn) (CanvasGroup_t422 *);
	static CanvasGroup_get_ignoreParentGroups_m2081_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m2081_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo CanvasGroup_IsRaycastLocationValid_m3414_MethodInfo;
extern "C" bool CanvasGroup_IsRaycastLocationValid_m3414 (CanvasGroup_t422 * __this, Vector2_t16  ___sp, Camera_t18 * ___eventCamera, MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m3413(__this, /*hidden argument*/&CanvasGroup_get_blocksRaycasts_m3413_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UIVertex_t301_il2cpp_TypeInfo;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern TypeInfo Color32_t402_il2cpp_TypeInfo;
extern TypeInfo Vector4_t26_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern MethodInfo Color32__ctor_m2045_MethodInfo;
extern MethodInfo Vector4__ctor_m58_MethodInfo;
extern MethodInfo Vector3_get_zero_m88_MethodInfo;
extern MethodInfo Vector3_get_back_m2982_MethodInfo;
extern MethodInfo Vector2_get_zero_m1936_MethodInfo;


// System.Void UnityEngine.UIVertex::.cctor()
extern MethodInfo UIVertex__cctor_m3415_MethodInfo;
extern "C" void UIVertex__cctor_m3415 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	UIVertex_t301  V_0 = {0};
	{
		Color32_t402  L_0 = {0};
		Color32__ctor_m2045(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/&Color32__ctor_m2045_MethodInfo);
		((UIVertex_t301_StaticFields*)InitializedTypeInfo(&UIVertex_t301_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t26  L_1 = {0};
		Vector4__ctor_m58(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/&Vector4__ctor_m58_MethodInfo);
		((UIVertex_t301_StaticFields*)InitializedTypeInfo(&UIVertex_t301_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (InitializedTypeInfo(&UIVertex_t301_il2cpp_TypeInfo), (&V_0));
		Vector3_t32  L_2 = Vector3_get_zero_m88(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m88_MethodInfo);
		(&V_0)->___position_0 = L_2;
		Vector3_t32  L_3 = Vector3_get_back_m2982(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m2982_MethodInfo);
		(&V_0)->___normal_1 = L_3;
		Vector4_t26  L_4 = ((UIVertex_t301_StaticFields*)InitializedTypeInfo(&UIVertex_t301_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t402  L_5 = ((UIVertex_t301_StaticFields*)InitializedTypeInfo(&UIVertex_t301_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t16  L_6 = Vector2_get_zero_m1936(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1936_MethodInfo);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t16  L_7 = Vector2_get_zero_m1936(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1936_MethodInfo);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t301  L_8 = V_0;
		((UIVertex_t301_StaticFields*)InitializedTypeInfo(&UIVertex_t301_il2cpp_TypeInfo)->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasRenderer_t277_il2cpp_TypeInfo;
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo ObjectU5BU5D_t148_il2cpp_TypeInfo;
extern TypeInfo UInt16_t738_il2cpp_TypeInfo;
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t148_0_0_0;
extern MethodInfo CanvasRenderer_INTERNAL_CALL_SetColor_m3416_MethodInfo;
extern MethodInfo List_1_get_Count_m2239_MethodInfo;
extern MethodInfo UnityString_Format_m3137_MethodInfo;
extern MethodInfo List_1_Clear_m2092_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternal_m3417_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternalArray_m3418_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m2239_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m2092_GenericMethod;


// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern MethodInfo CanvasRenderer_SetColor_m2088_MethodInfo;
extern "C" void CanvasRenderer_SetColor_m2088 (CanvasRenderer_t277 * __this, Color_t30  ___color, MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m3416(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/&CanvasRenderer_INTERNAL_CALL_SetColor_m3416_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m3416 (Object_t * __this /* static, unused */, CanvasRenderer_t277 * ___self, Color_t30 * ___color, MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m3416_ftn) (CanvasRenderer_t277 *, Color_t30 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m3416_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m3416_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern MethodInfo CanvasRenderer_GetColor_m2086_MethodInfo;
extern "C" Color_t30  CanvasRenderer_GetColor_m2086 (CanvasRenderer_t277 * __this, MethodInfo* method)
{
	typedef Color_t30  (*CanvasRenderer_GetColor_m2086_ftn) (CanvasRenderer_t277 *);
	static CanvasRenderer_GetColor_m2086_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m2086_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern MethodInfo CanvasRenderer_set_isMask_m2448_MethodInfo;
extern "C" void CanvasRenderer_set_isMask_m2448 (CanvasRenderer_t277 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m2448_ftn) (CanvasRenderer_t277 *, bool);
	static CanvasRenderer_set_isMask_m2448_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m2448_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern MethodInfo CanvasRenderer_SetMaterial_m2078_MethodInfo;
extern "C" void CanvasRenderer_SetMaterial_m2078 (CanvasRenderer_t277 * __this, Material_t4 * ___material, Texture_t12 * ___texture, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m2078_ftn) (CanvasRenderer_t277 *, Material_t4 *, Texture_t12 *);
	static CanvasRenderer_SetMaterial_m2078_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m2078_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern MethodInfo CanvasRenderer_SetVertices_m2077_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m2239_MethodInfo_var;
extern MethodInfo* List_1_Clear_m2092_MethodInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2077 (CanvasRenderer_t277 * __this, List_1_t283 * ___vertices, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2077_init;
	if (!CanvasRenderer_SetVertices_m2077_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		List_1_get_Count_m2239_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m2239_GenericMethod);
		List_1_Clear_m2092_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m2092_GenericMethod);
		CanvasRenderer_SetVertices_m2077_init = true;
	}
	{
		List_1_t283 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m2239_MethodInfo_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t148* L_2 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(InitializedTypeInfo(&UInt16_t738_il2cpp_TypeInfo), &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m3137(NULL /*static, unused*/, (String_t*) &_stringLiteral243, L_2, /*hidden argument*/&UnityString_Format_m3137_MethodInfo);
		Debug_LogWarning_m2356(NULL /*static, unused*/, L_5, __this, /*hidden argument*/&Debug_LogWarning_m2356_MethodInfo);
		List_1_t283 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(List_1_Clear_m2092_MethodInfo_var, L_6);
	}

IL_0039:
	{
		List_1_t283 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m3417(__this, L_7, /*hidden argument*/&CanvasRenderer_SetVerticesInternal_m3417_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m3417 (CanvasRenderer_t277 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m3417_ftn) (CanvasRenderer_t277 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m3417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m3417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern MethodInfo CanvasRenderer_SetVertices_m2197_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2197 (CanvasRenderer_t277 * __this, UIVertexU5BU5D_t319* ___vertices, int32_t ___size, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2197_init;
	if (!CanvasRenderer_SetVertices_m2197_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		CanvasRenderer_SetVertices_m2197_init = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t148* L_1 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(InitializedTypeInfo(&UInt16_t738_il2cpp_TypeInfo), &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m3137(NULL /*static, unused*/, (String_t*) &_stringLiteral243, L_1, /*hidden argument*/&UnityString_Format_m3137_MethodInfo);
		Debug_LogWarning_m2356(NULL /*static, unused*/, L_4, __this, /*hidden argument*/&Debug_LogWarning_m2356_MethodInfo);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t319* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m3418(__this, L_5, L_6, /*hidden argument*/&CanvasRenderer_SetVerticesInternalArray_m3418_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m3418 (CanvasRenderer_t277 * __this, UIVertexU5BU5D_t319* ___vertices, int32_t ___size, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m3418_ftn) (CanvasRenderer_t277 *, UIVertexU5BU5D_t319*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m3418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m3418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern MethodInfo CanvasRenderer_Clear_m2072_MethodInfo;
extern "C" void CanvasRenderer_Clear_m2072 (CanvasRenderer_t277 * __this, MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m2072_ftn) (CanvasRenderer_t277 *);
	static CanvasRenderer_Clear_m2072_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m2072_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern MethodInfo CanvasRenderer_get_absoluteDepth_m2058_MethodInfo;
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m2058 (CanvasRenderer_t277 * __this, MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m2058_ftn) (CanvasRenderer_t277 *);
	static CanvasRenderer_get_absoluteDepth_m2058_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m2058_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RectTransformUtility_t423_il2cpp_TypeInfo;
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"

// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
extern TypeInfo Vector3U5BU5D_t36_il2cpp_TypeInfo;
extern TypeInfo Ray_t155_il2cpp_TypeInfo;
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern Il2CppType Vector3U5BU5D_t36_0_0_0;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3420_MethodInfo;
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m3421_MethodInfo;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3422_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m1999_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToRay_m3424_MethodInfo;
extern MethodInfo Plane__ctor_m2204_MethodInfo;
extern MethodInfo Plane_Raycast_m2205_MethodInfo;
extern MethodInfo Ray_GetPoint_m2206_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToWorldPointInRectangle_m3423_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m520_MethodInfo;
extern MethodInfo Ray__ctor_m3075_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutOnAxis_m2296_MethodInfo;
extern MethodInfo RectTransform_get_pivot_m2145_MethodInfo;
extern MethodInfo Vector2_get_Item_m2159_MethodInfo;
extern MethodInfo Vector2_set_Item_m2170_MethodInfo;
extern MethodInfo RectTransform_set_pivot_m2251_MethodInfo;
extern MethodInfo RectTransform_get_anchoredPosition_m2245_MethodInfo;
extern MethodInfo RectTransform_set_anchoredPosition_m2250_MethodInfo;
extern MethodInfo RectTransform_get_anchorMin_m2149_MethodInfo;
extern MethodInfo RectTransform_get_anchorMax_m2244_MethodInfo;
extern MethodInfo RectTransform_set_anchorMin_m2249_MethodInfo;
extern MethodInfo RectTransform_set_anchorMax_m2150_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutAxes_m2295_MethodInfo;
extern MethodInfo RectTransformUtility_GetTransposed_m3425_MethodInfo;
extern MethodInfo RectTransform_get_sizeDelta_m2246_MethodInfo;
extern MethodInfo RectTransform_set_sizeDelta_m2151_MethodInfo;


// System.Void UnityEngine.RectTransformUtility::.cctor()
extern MethodInfo RectTransformUtility__cctor_m3419_MethodInfo;
extern TypeInfo* Vector3U5BU5D_t36_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m3419 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool RectTransformUtility__cctor_m3419_init;
	if (!RectTransformUtility__cctor_m3419_init)
	{
		Vector3U5BU5D_t36_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t36_0_0_0);
		RectTransformUtility__cctor_m3419_init = true;
	}
	{
		((RectTransformUtility_t423_StaticFields*)InitializedTypeInfo(&RectTransformUtility_t423_il2cpp_TypeInfo)->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t36*)SZArrayNew(Vector3U5BU5D_t36_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo RectTransformUtility_RectangleContainsScreenPoint_m2121_MethodInfo;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2121 (Object_t * __this /* static, unused */, RectTransform_t276 * ___rect, Vector2_t16  ___screenPoint, Camera_t18 * ___cam, MethodInfo* method)
{
	{
		RectTransform_t276 * L_0 = ___rect;
		Camera_t18 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t423_il2cpp_TypeInfo));
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3420(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3420_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3420 (Object_t * __this /* static, unused */, RectTransform_t276 * ___rect, Vector2_t16 * ___screenPoint, Camera_t18 * ___cam, MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3420_ftn) (RectTransform_t276 *, Vector2_t16 *, Camera_t18 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3420_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3420_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m2084_MethodInfo;
extern "C" Vector2_t16  RectTransformUtility_PixelAdjustPoint_m2084 (Object_t * __this /* static, unused */, Vector2_t16  ___point, Transform_t62 * ___elementTransform, Canvas_t278 * ___canvas, MethodInfo* method)
{
	Vector2_t16  V_0 = {0};
	{
		Vector2_t16  L_0 = ___point;
		Transform_t62 * L_1 = ___elementTransform;
		Canvas_t278 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t423_il2cpp_TypeInfo));
		RectTransformUtility_PixelAdjustPoint_m3421(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/&RectTransformUtility_PixelAdjustPoint_m3421_MethodInfo);
		Vector2_t16  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m3421 (Object_t * __this /* static, unused */, Vector2_t16  ___point, Transform_t62 * ___elementTransform, Canvas_t278 * ___canvas, Vector2_t16 * ___output, MethodInfo* method)
{
	{
		Transform_t62 * L_0 = ___elementTransform;
		Canvas_t278 * L_1 = ___canvas;
		Vector2_t16 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t423_il2cpp_TypeInfo));
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3422(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3422_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3422 (Object_t * __this /* static, unused */, Vector2_t16 * ___point, Transform_t62 * ___elementTransform, Canvas_t278 * ___canvas, Vector2_t16 * ___output, MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3422_ftn) (Vector2_t16 *, Transform_t62 *, Canvas_t278 *, Vector2_t16 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3422_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustRect_m2085_MethodInfo;
extern "C" Rect_t139  RectTransformUtility_PixelAdjustRect_m2085 (Object_t * __this /* static, unused */, RectTransform_t276 * ___rectTransform, Canvas_t278 * ___canvas, MethodInfo* method)
{
	typedef Rect_t139  (*RectTransformUtility_PixelAdjustRect_m2085_ftn) (RectTransform_t276 *, Canvas_t278 *);
	static RectTransformUtility_PixelAdjustRect_m2085_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m2085_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m3423 (Object_t * __this /* static, unused */, RectTransform_t276 * ___rect, Vector2_t16  ___screenPoint, Camera_t18 * ___cam, Vector3_t32 * ___worldPoint, MethodInfo* method)
{
	Ray_t155  V_0 = {0};
	Plane_t438  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t32 * L_0 = ___worldPoint;
		Vector2_t16  L_1 = Vector2_get_zero_m1936(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1936_MethodInfo);
		Vector3_t32  L_2 = Vector2_op_Implicit_m1999(NULL /*static, unused*/, L_1, /*hidden argument*/&Vector2_op_Implicit_m1999_MethodInfo);
		*L_0 = L_2;
		Camera_t18 * L_3 = ___cam;
		Vector2_t16  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t423_il2cpp_TypeInfo));
		Ray_t155  L_5 = RectTransformUtility_ScreenPointToRay_m3424(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&RectTransformUtility_ScreenPointToRay_m3424_MethodInfo);
		V_0 = L_5;
		RectTransform_t276 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t33  L_7 = Transform_get_rotation_m526(L_6, /*hidden argument*/&Transform_get_rotation_m526_MethodInfo);
		Vector3_t32  L_8 = Vector3_get_back_m2982(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m2982_MethodInfo);
		Vector3_t32  L_9 = Quaternion_op_Multiply_m2115(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Quaternion_op_Multiply_m2115_MethodInfo);
		RectTransform_t276 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t32  L_11 = Transform_get_position_m519(L_10, /*hidden argument*/&Transform_get_position_m519_MethodInfo);
		Plane__ctor_m2204((&V_1), L_9, L_11, /*hidden argument*/&Plane__ctor_m2204_MethodInfo);
		Ray_t155  L_12 = V_0;
		bool L_13 = Plane_Raycast_m2205((&V_1), L_12, (&V_2), /*hidden argument*/&Plane_Raycast_m2205_MethodInfo);
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
		Vector3_t32 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t32  L_16 = Ray_GetPoint_m2206((&V_0), L_15, /*hidden argument*/&Ray_GetPoint_m2206_MethodInfo);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern MethodInfo RectTransformUtility_ScreenPointToLocalPointInRectangle_m2162_MethodInfo;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2162 (Object_t * __this /* static, unused */, RectTransform_t276 * ___rect, Vector2_t16  ___screenPoint, Camera_t18 * ___cam, Vector2_t16 * ___localPoint, MethodInfo* method)
{
	Vector3_t32  V_0 = {0};
	{
		Vector2_t16 * L_0 = ___localPoint;
		Vector2_t16  L_1 = Vector2_get_zero_m1936(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1936_MethodInfo);
		*L_0 = L_1;
		RectTransform_t276 * L_2 = ___rect;
		Vector2_t16  L_3 = ___screenPoint;
		Camera_t18 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t423_il2cpp_TypeInfo));
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m3423(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/&RectTransformUtility_ScreenPointToWorldPointInRectangle_m3423_MethodInfo);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t16 * L_6 = ___localPoint;
		RectTransform_t276 * L_7 = ___rect;
		Vector3_t32  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t32  L_9 = Transform_InverseTransformPoint_m2203(L_7, L_8, /*hidden argument*/&Transform_InverseTransformPoint_m2203_MethodInfo);
		Vector2_t16  L_10 = Vector2_op_Implicit_m520(NULL /*static, unused*/, L_9, /*hidden argument*/&Vector2_op_Implicit_m520_MethodInfo);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t155  RectTransformUtility_ScreenPointToRay_m3424 (Object_t * __this /* static, unused */, Camera_t18 * ___cam, Vector2_t16  ___screenPos, MethodInfo* method)
{
	Vector3_t32  V_0 = {0};
	{
		Camera_t18 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m125(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t18 * L_2 = ___cam;
		Vector2_t16  L_3 = ___screenPos;
		Vector3_t32  L_4 = Vector2_op_Implicit_m1999(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector2_op_Implicit_m1999_MethodInfo);
		NullCheck(L_2);
		Ray_t155  L_5 = Camera_ScreenPointToRay_m572(L_2, L_4, /*hidden argument*/&Camera_ScreenPointToRay_m572_MethodInfo);
		return L_5;
	}

IL_0019:
	{
		Vector2_t16  L_6 = ___screenPos;
		Vector3_t32  L_7 = Vector2_op_Implicit_m1999(NULL /*static, unused*/, L_6, /*hidden argument*/&Vector2_op_Implicit_m1999_MethodInfo);
		V_0 = L_7;
		Vector3_t32 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t32  L_10 = V_0;
		Vector3_t32  L_11 = Vector3_get_forward_m524(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m524_MethodInfo);
		Ray_t155  L_12 = {0};
		Ray__ctor_m3075(&L_12, L_10, L_11, /*hidden argument*/&Ray__ctor_m3075_MethodInfo);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2296 (Object_t * __this /* static, unused */, RectTransform_t276 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t276 * V_1 = {0};
	Vector2_t16  V_2 = {0};
	Vector2_t16  V_3 = {0};
	Vector2_t16  V_4 = {0};
	Vector2_t16  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t276 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m71(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
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
		RectTransform_t276 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t62 * L_5 = Transform_GetChild_m2421(L_3, L_4, /*hidden argument*/&Transform_GetChild_m2421_MethodInfo);
		V_1 = ((RectTransform_t276 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t276_il2cpp_TypeInfo)));
		RectTransform_t276 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m125(NULL /*static, unused*/, L_6, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t276 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t423_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutOnAxis_m2296(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutOnAxis_m2296_MethodInfo);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t276 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m2424(L_12, /*hidden argument*/&Transform_get_childCount_m2424_MethodInfo);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t276 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t16  L_15 = RectTransform_get_pivot_m2145(L_14, /*hidden argument*/&RectTransform_get_pivot_m2145_MethodInfo);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m2159((&V_2), L_17, /*hidden argument*/&Vector2_get_Item_m2159_MethodInfo);
		Vector2_set_Item_m2170((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/&Vector2_set_Item_m2170_MethodInfo);
		RectTransform_t276 * L_19 = ___rect;
		Vector2_t16  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m2251(L_19, L_20, /*hidden argument*/&RectTransform_set_pivot_m2251_MethodInfo);
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
		RectTransform_t276 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t16  L_23 = RectTransform_get_anchoredPosition_m2245(L_22, /*hidden argument*/&RectTransform_get_anchoredPosition_m2245_MethodInfo);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m2159((&V_3), L_25, /*hidden argument*/&Vector2_get_Item_m2159_MethodInfo);
		Vector2_set_Item_m2170((&V_3), L_24, ((-L_26)), /*hidden argument*/&Vector2_set_Item_m2170_MethodInfo);
		RectTransform_t276 * L_27 = ___rect;
		Vector2_t16  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m2250(L_27, L_28, /*hidden argument*/&RectTransform_set_anchoredPosition_m2250_MethodInfo);
		RectTransform_t276 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t16  L_30 = RectTransform_get_anchorMin_m2149(L_29, /*hidden argument*/&RectTransform_get_anchorMin_m2149_MethodInfo);
		V_4 = L_30;
		RectTransform_t276 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t16  L_32 = RectTransform_get_anchorMax_m2244(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2244_MethodInfo);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m2159((&V_4), L_33, /*hidden argument*/&Vector2_get_Item_m2159_MethodInfo);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m2159((&V_5), L_36, /*hidden argument*/&Vector2_get_Item_m2159_MethodInfo);
		Vector2_set_Item_m2170((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/&Vector2_set_Item_m2170_MethodInfo);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m2170((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/&Vector2_set_Item_m2170_MethodInfo);
		RectTransform_t276 * L_40 = ___rect;
		Vector2_t16  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m2249(L_40, L_41, /*hidden argument*/&RectTransform_set_anchorMin_m2249_MethodInfo);
		RectTransform_t276 * L_42 = ___rect;
		Vector2_t16  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m2150(L_42, L_43, /*hidden argument*/&RectTransform_set_anchorMax_m2150_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m2295 (Object_t * __this /* static, unused */, RectTransform_t276 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t276 * V_1 = {0};
	{
		RectTransform_t276 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m71(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
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
		RectTransform_t276 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t62 * L_5 = Transform_GetChild_m2421(L_3, L_4, /*hidden argument*/&Transform_GetChild_m2421_MethodInfo);
		V_1 = ((RectTransform_t276 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t276_il2cpp_TypeInfo)));
		RectTransform_t276 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m125(NULL /*static, unused*/, L_6, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t276 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t423_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutAxes_m2295(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutAxes_m2295_MethodInfo);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t276 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m2424(L_11, /*hidden argument*/&Transform_get_childCount_m2424_MethodInfo);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t276 * L_13 = ___rect;
		RectTransform_t276 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t16  L_15 = RectTransform_get_pivot_m2145(L_14, /*hidden argument*/&RectTransform_get_pivot_m2145_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t423_il2cpp_TypeInfo));
		Vector2_t16  L_16 = RectTransformUtility_GetTransposed_m3425(NULL /*static, unused*/, L_15, /*hidden argument*/&RectTransformUtility_GetTransposed_m3425_MethodInfo);
		NullCheck(L_13);
		RectTransform_set_pivot_m2251(L_13, L_16, /*hidden argument*/&RectTransform_set_pivot_m2251_MethodInfo);
		RectTransform_t276 * L_17 = ___rect;
		RectTransform_t276 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t16  L_19 = RectTransform_get_sizeDelta_m2246(L_18, /*hidden argument*/&RectTransform_get_sizeDelta_m2246_MethodInfo);
		Vector2_t16  L_20 = RectTransformUtility_GetTransposed_m3425(NULL /*static, unused*/, L_19, /*hidden argument*/&RectTransformUtility_GetTransposed_m3425_MethodInfo);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m2151(L_17, L_20, /*hidden argument*/&RectTransform_set_sizeDelta_m2151_MethodInfo);
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
		RectTransform_t276 * L_22 = ___rect;
		RectTransform_t276 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t16  L_24 = RectTransform_get_anchoredPosition_m2245(L_23, /*hidden argument*/&RectTransform_get_anchoredPosition_m2245_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t423_il2cpp_TypeInfo));
		Vector2_t16  L_25 = RectTransformUtility_GetTransposed_m3425(NULL /*static, unused*/, L_24, /*hidden argument*/&RectTransformUtility_GetTransposed_m3425_MethodInfo);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m2250(L_22, L_25, /*hidden argument*/&RectTransform_set_anchoredPosition_m2250_MethodInfo);
		RectTransform_t276 * L_26 = ___rect;
		RectTransform_t276 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t16  L_28 = RectTransform_get_anchorMin_m2149(L_27, /*hidden argument*/&RectTransform_get_anchorMin_m2149_MethodInfo);
		Vector2_t16  L_29 = RectTransformUtility_GetTransposed_m3425(NULL /*static, unused*/, L_28, /*hidden argument*/&RectTransformUtility_GetTransposed_m3425_MethodInfo);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m2249(L_26, L_29, /*hidden argument*/&RectTransform_set_anchorMin_m2249_MethodInfo);
		RectTransform_t276 * L_30 = ___rect;
		RectTransform_t276 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t16  L_32 = RectTransform_get_anchorMax_m2244(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2244_MethodInfo);
		Vector2_t16  L_33 = RectTransformUtility_GetTransposed_m3425(NULL /*static, unused*/, L_32, /*hidden argument*/&RectTransformUtility_GetTransposed_m3425_MethodInfo);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m2150(L_30, L_33, /*hidden argument*/&RectTransform_set_anchorMax_m2150_MethodInfo);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t16  RectTransformUtility_GetTransposed_m3425 (Object_t * __this /* static, unused */, Vector2_t16  ___input, MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t16  L_2 = {0};
		Vector2__ctor_m132(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		return L_2;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WrapperlessIcall_t664_il2cpp_TypeInfo;
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3652_MethodInfo;


// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern MethodInfo WrapperlessIcall__ctor_m3426_MethodInfo;
extern "C" void WrapperlessIcall__ctor_m3426 (WrapperlessIcall_t664 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IL2CPPStructAlignmentAttribute_t665_il2cpp_TypeInfo;
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"



// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern MethodInfo IL2CPPStructAlignmentAttribute__ctor_m3427_MethodInfo;
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m3427 (IL2CPPStructAlignmentAttribute_t665 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AttributeHelperEngine_t669_il2cpp_TypeInfo;
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
extern TypeInfo DisallowMultipleComponentU5BU5D_t666_il2cpp_TypeInfo;
extern TypeInfo DisallowMultipleComponent_t485_il2cpp_TypeInfo;
extern TypeInfo ExecuteInEditModeU5BU5D_t667_il2cpp_TypeInfo;
extern TypeInfo ExecuteInEditMode_t47_il2cpp_TypeInfo;
extern TypeInfo RequireComponentU5BU5D_t668_il2cpp_TypeInfo;
extern TypeInfo RequireComponent_t46_il2cpp_TypeInfo;
extern TypeInfo Stack_1_t739_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t670_il2cpp_TypeInfo;
extern TypeInfo List_1_t740_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
extern Il2CppType DisallowMultipleComponentU5BU5D_t666_0_0_0;
extern Il2CppType ExecuteInEditModeU5BU5D_t667_0_0_0;
extern Il2CppType RequireComponentU5BU5D_t668_0_0_0;
extern Il2CppType Stack_1_t739_0_0_0;
extern Il2CppType MonoBehaviour_t11_0_0_0;
extern Il2CppType DisallowMultipleComponent_t485_0_0_0;
extern Il2CppType RequireComponent_t46_0_0_0;
extern Il2CppType TypeU5BU5D_t670_0_0_0;
extern Il2CppType List_1_t740_0_0_0;
extern Il2CppType ExecuteInEditMode_t47_0_0_0;
extern MethodInfo Stack_1__ctor_m3660_MethodInfo;
extern MethodInfo Type_get_BaseType_m3661_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m2059_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m3662_MethodInfo;
extern MethodInfo Stack_1_get_Count_m3663_MethodInfo;
extern MethodInfo List_1__ctor_m3664_MethodInfo;
extern MethodInfo List_1_Add_m3665_MethodInfo;
extern Il2CppGenericMethod Stack_1__ctor_m3660_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m3666_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m3667_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m3663_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3664_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3665_GenericMethod;
extern Il2CppGenericMethod List_1_ToArray_m3668_GenericMethod;


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern MethodInfo AttributeHelperEngine__cctor_m3428_MethodInfo;
extern TypeInfo* DisallowMultipleComponentU5BU5D_t666_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t667_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t668_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m3428 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool AttributeHelperEngine__cctor_m3428_init;
	if (!AttributeHelperEngine__cctor_m3428_init)
	{
		DisallowMultipleComponentU5BU5D_t666_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisallowMultipleComponentU5BU5D_t666_0_0_0);
		ExecuteInEditModeU5BU5D_t667_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ExecuteInEditModeU5BU5D_t667_0_0_0);
		RequireComponentU5BU5D_t668_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&RequireComponentU5BU5D_t668_0_0_0);
		AttributeHelperEngine__cctor_m3428_init = true;
	}
	{
		((AttributeHelperEngine_t669_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t669_il2cpp_TypeInfo)->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t666*)SZArrayNew(DisallowMultipleComponentU5BU5D_t666_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t669_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t669_il2cpp_TypeInfo)->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t667*)SZArrayNew(ExecuteInEditModeU5BU5D_t667_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t669_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t669_il2cpp_TypeInfo)->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t668*)SZArrayNew(RequireComponentU5BU5D_t668_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern MethodInfo AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3429_MethodInfo;
extern TypeInfo* Stack_1_t739_il2cpp_TypeInfo_var;
extern MethodInfo* Stack_1__ctor_m3660_MethodInfo_var;
extern MethodInfo* Stack_1_Push_m3666_MethodInfo_var;
extern MethodInfo* Stack_1_Pop_m3667_MethodInfo_var;
extern MethodInfo* Stack_1_get_Count_m3663_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3429 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	static bool AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3429_init;
	if (!AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3429_init)
	{
		Stack_1_t739_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Stack_1_t739_0_0_0);
		Stack_1__ctor_m3660_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1__ctor_m3660_GenericMethod);
		Stack_1_Push_m3666_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_Push_m3666_GenericMethod);
		Stack_1_Pop_m3667_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_Pop_m3667_GenericMethod);
		Stack_1_get_Count_m3663_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_get_Count_m3663_GenericMethod);
		AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3429_init = true;
	}
	Stack_1_t739 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t148* V_2 = {0};
	{
		Stack_1_t739 * L_0 = (Stack_1_t739 *)il2cpp_codegen_object_new (Stack_1_t739_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3660(L_0, /*hidden argument*/Stack_1__ctor_m3660_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t739 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m3666(L_1, L_2, /*hidden argument*/Stack_1_Push_m3666_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3661_MethodInfo, L_3);
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
		Type_t * L_7 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t11_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
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
		Stack_1_t739 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m3667(L_8, /*hidden argument*/Stack_1_Pop_m3667_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&DisallowMultipleComponent_t485_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_10);
		ObjectU5BU5D_t148* L_12 = (ObjectU5BU5D_t148*)VirtFuncInvoker2< ObjectU5BU5D_t148*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m3662_MethodInfo, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t148* L_13 = V_2;
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
		Stack_1_t739 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Stack_1_get_Count_m3663_MethodInfo_var, L_15);
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
extern MethodInfo AttributeHelperEngine_GetRequiredComponents_m3430_MethodInfo;
extern TypeInfo* TypeU5BU5D_t670_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t740_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3664_MethodInfo_var;
extern MethodInfo* List_1_Add_m3665_MethodInfo_var;
extern MethodInfo* List_1_ToArray_m3668_MethodInfo_var;
extern "C" TypeU5BU5D_t670* AttributeHelperEngine_GetRequiredComponents_m3430 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method)
{
	static bool AttributeHelperEngine_GetRequiredComponents_m3430_init;
	if (!AttributeHelperEngine_GetRequiredComponents_m3430_init)
	{
		TypeU5BU5D_t670_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t670_0_0_0);
		List_1_t740_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t740_0_0_0);
		List_1__ctor_m3664_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3664_GenericMethod);
		List_1_Add_m3665_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3665_GenericMethod);
		List_1_ToArray_m3668_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_ToArray_m3668_GenericMethod);
		AttributeHelperEngine_GetRequiredComponents_m3430_init = true;
	}
	List_1_t740 * V_0 = {0};
	ObjectU5BU5D_t148* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t46 * V_3 = {0};
	TypeU5BU5D_t670* V_4 = {0};
	{
		V_0 = (List_1_t740 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&RequireComponent_t46_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_0);
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)VirtFuncInvoker2< ObjectU5BU5D_t148*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m3662_MethodInfo, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t148* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t46 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), InitializedTypeInfo(&RequireComponent_t46_il2cpp_TypeInfo)));
		List_1_t740 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t148* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3661_MethodInfo, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_10 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t11_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t670* L_11 = ((TypeU5BU5D_t670*)SZArrayNew(TypeU5BU5D_t670_il2cpp_TypeInfo_var, 3));
		RequireComponent_t46 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t670* L_14 = L_11;
		RequireComponent_t46 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t670* L_17 = L_14;
		RequireComponent_t46 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t670* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t740 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t740_il2cpp_TypeInfo_var);
		List_1_t740 * L_22 = (List_1_t740 *)il2cpp_codegen_object_new (List_1_t740_il2cpp_TypeInfo_var);
		List_1__ctor_m3664(L_22, /*hidden argument*/List_1__ctor_m3664_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t46 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t740 * L_25 = V_0;
		RequireComponent_t46 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m3665_MethodInfo_var, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t46 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t740 * L_30 = V_0;
		RequireComponent_t46 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m3665_MethodInfo_var, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t46 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t740 * L_35 = V_0;
		RequireComponent_t46 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m3665_MethodInfo_var, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t148* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3661_MethodInfo, L_41);
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
		Type_t * L_45 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t11_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t740 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t670*)NULL;
	}

IL_00f7:
	{
		List_1_t740 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t670* L_48 = List_1_ToArray_m3668(L_47, /*hidden argument*/List_1_ToArray_m3668_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern MethodInfo AttributeHelperEngine_CheckIsEditorScript_m3431_MethodInfo;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m3431 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method)
{
	ObjectU5BU5D_t148* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&ExecuteInEditMode_t47_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
		NullCheck(L_0);
		ObjectU5BU5D_t148* L_2 = (ObjectU5BU5D_t148*)VirtFuncInvoker2< ObjectU5BU5D_t148*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m3662_MethodInfo, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t148* L_3 = V_0;
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
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3661_MethodInfo, L_4);
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
		Type_t * L_8 = Type_GetTypeFromHandle_m2059(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t11_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m2059_MethodInfo);
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
extern MethodInfo DisallowMultipleComponent__ctor_m2518_MethodInfo;
extern "C" void DisallowMultipleComponent__ctor_m2518 (DisallowMultipleComponent_t485 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern MethodInfo RequireComponent__ctor_m163_MethodInfo;
extern "C" void RequireComponent__ctor_m163 (RequireComponent_t46 * __this, Type_t * ___requiredComponent, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
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
extern TypeInfo AddComponentMenu_t45_il2cpp_TypeInfo;
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"



// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern MethodInfo AddComponentMenu__ctor_m162_MethodInfo;
extern "C" void AddComponentMenu__ctor_m162 (AddComponentMenu_t45 * __this, String_t* ___menuName, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
extern MethodInfo AddComponentMenu__ctor_m2517_MethodInfo;
extern "C" void AddComponentMenu__ctor_m2517 (AddComponentMenu_t45 * __this, String_t* ___menuName, int32_t ___order, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
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
extern MethodInfo ExecuteInEditMode__ctor_m164_MethodInfo;
extern "C" void ExecuteInEditMode__ctor_m164 (ExecuteInEditMode_t47 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SetupCoroutine_t671_il2cpp_TypeInfo;
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
extern TypeInfo BindingFlags_t741_il2cpp_TypeInfo;
extern TypeInfo Binder_t742_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t743_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t744_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t745_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t34_il2cpp_TypeInfo;
extern MethodInfo Object_GetType_m1959_MethodInfo;
extern MethodInfo Type_InvokeMember_m3669_MethodInfo;


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern MethodInfo SetupCoroutine__ctor_m3432_MethodInfo;
extern "C" void SetupCoroutine__ctor_m3432 (SetupCoroutine_t671 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern MethodInfo SetupCoroutine_InvokeMember_m3433_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m3433 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, MethodInfo* method)
{
	static bool SetupCoroutine_InvokeMember_m3433_init;
	if (!SetupCoroutine_InvokeMember_m3433_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		SetupCoroutine_InvokeMember_m3433_init = true;
	}
	ObjectU5BU5D_t148* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t148*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t148* L_1 = V_0;
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
		Type_t * L_4 = Object_GetType_m1959(L_3, /*hidden argument*/&Object_GetType_m1959_MethodInfo);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t148* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t742 *, Object_t *, ObjectU5BU5D_t148*, ParameterModifierU5BU5D_t743*, CultureInfo_t745 *, StringU5BU5D_t34* >::Invoke(&Type_InvokeMember_m3669_MethodInfo, L_4, L_5, ((int32_t)308), (Binder_t742 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t743*)(ParameterModifierU5BU5D_t743*)NULL, (CultureInfo_t745 *)NULL, (StringU5BU5D_t34*)(StringU5BU5D_t34*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern MethodInfo SetupCoroutine_InvokeStatic_m3434_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m3434 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, MethodInfo* method)
{
	static bool SetupCoroutine_InvokeStatic_m3434_init;
	if (!SetupCoroutine_InvokeStatic_m3434_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		SetupCoroutine_InvokeStatic_m3434_init = true;
	}
	ObjectU5BU5D_t148* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t148*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t148* L_1 = V_0;
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
		ObjectU5BU5D_t148* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t742 *, Object_t *, ObjectU5BU5D_t148*, ParameterModifierU5BU5D_t743*, CultureInfo_t745 *, StringU5BU5D_t34* >::Invoke(&Type_InvokeMember_m3669_MethodInfo, L_3, L_4, ((int32_t)312), (Binder_t742 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t743*)(ParameterModifierU5BU5D_t743*)NULL, (CultureInfo_t745 *)NULL, (StringU5BU5D_t34*)(StringU5BU5D_t34*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WritableAttribute_t672_il2cpp_TypeInfo;
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern MethodInfo WritableAttribute__ctor_m3435_MethodInfo;
extern "C" void WritableAttribute__ctor_m3435 (WritableAttribute_t672 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyIsEditorAssembly_t673_il2cpp_TypeInfo;
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern MethodInfo AssemblyIsEditorAssembly__ctor_m3436_MethodInfo;
extern "C" void AssemblyIsEditorAssembly__ctor_m3436 (AssemblyIsEditorAssembly_t673 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3652(__this, /*hidden argument*/&Attribute__ctor_m3652_MethodInfo);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcUserProfileData_t558_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
extern TypeInfo UserProfile_t674_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern MethodInfo UserProfile__ctor_m3448_MethodInfo;
extern MethodInfo GcUserProfileData_ToUserProfile_m3437_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t674 * GcUserProfileData_ToUserProfile_m3437 (GcUserProfileData_t558 * __this, MethodInfo* method)
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
		Texture2D_t23 * L_3 = (__this->___image_3);
		UserProfile_t674 * L_4 = (UserProfile_t674 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UserProfile_t674_il2cpp_TypeInfo));
		UserProfile__ctor_m3448(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/&UserProfile__ctor_m3448_MethodInfo);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern MethodInfo GcUserProfileData_AddToArray_m3438_MethodInfo;
extern "C" void GcUserProfileData_AddToArray_m3438 (GcUserProfileData_t558 * __this, UserProfileU5BU5D_t546** ___array, int32_t ___number, MethodInfo* method)
{
	{
		UserProfileU5BU5D_t546** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t546**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t546**)L_0)))->max_length)))) <= ((int32_t)L_1)))
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
		UserProfileU5BU5D_t546** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t674 * L_5 = GcUserProfileData_ToUserProfile_m3437(__this, /*hidden argument*/&GcUserProfileData_ToUserProfile_m3437_MethodInfo);
		NullCheck((*((UserProfileU5BU5D_t546**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t546**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t546**)L_3)), L_5);
		*((UserProfile_t674 **)(UserProfile_t674 **)SZArrayLdElema((*((UserProfileU5BU5D_t546**)L_3)), L_4)) = (UserProfile_t674 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m95(NULL /*static, unused*/, (String_t*) &_stringLiteral244, /*hidden argument*/&Debug_Log_m95_MethodInfo);
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
extern TypeInfo GcAchievementDescriptionData_t557_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
extern TypeInfo AchievementDescription_t675_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern MethodInfo AchievementDescription__ctor_m3468_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern MethodInfo GcAchievementDescriptionData_ToAchievementDescription_m3439_MethodInfo;
extern "C" AchievementDescription_t675 * GcAchievementDescriptionData_ToAchievementDescription_m3439 (GcAchievementDescriptionData_t557 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t23 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t23 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t23 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t23 * L_2 = (__this->___m_Image_2);
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
		AchievementDescription_t675 * L_7 = (AchievementDescription_t675 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AchievementDescription_t675_il2cpp_TypeInfo));
		AchievementDescription__ctor_m3468(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/&AchievementDescription__ctor_m3468_MethodInfo);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcAchievementData_t552_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Double
#include "mscorlib_System_Double.h"
extern TypeInfo Achievement_t676_il2cpp_TypeInfo;
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern MethodInfo DateTime__ctor_m3670_MethodInfo;
extern MethodInfo DateTime_AddSeconds_m3671_MethodInfo;
extern MethodInfo Achievement__ctor_m3457_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern MethodInfo GcAchievementData_ToAchievement_m3440_MethodInfo;
extern "C" Achievement_t676 * GcAchievementData_ToAchievement_m3440 (GcAchievementData_t552 * __this, MethodInfo* method)
{
	DateTime_t579  V_0 = {0};
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
		DateTime__ctor_m3670((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/&DateTime__ctor_m3670_MethodInfo);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t579  L_5 = DateTime_AddSeconds_m3671((&V_0), (((double)L_4)), /*hidden argument*/&DateTime_AddSeconds_m3671_MethodInfo);
		Achievement_t676 * L_6 = (Achievement_t676 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Achievement_t676_il2cpp_TypeInfo));
		Achievement__ctor_m3457(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/&Achievement__ctor_m3457_MethodInfo);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t552_marshal(const GcAchievementData_t552& unmarshaled, GcAchievementData_t552_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t552_marshal_back(const GcAchievementData_t552_marshaled& marshaled, GcAchievementData_t552& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t552_marshal_cleanup(GcAchievementData_t552_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcScoreData_t554_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Int64
#include "mscorlib_System_Int64.h"
extern TypeInfo Score_t677_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern MethodInfo Score__ctor_m3479_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern MethodInfo GcScoreData_ToScore_m3441_MethodInfo;
extern "C" Score_t677 * GcScoreData_ToScore_m3441 (GcScoreData_t554 * __this, MethodInfo* method)
{
	DateTime_t579  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m3670((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/&DateTime__ctor_m3670_MethodInfo);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t579  L_5 = DateTime_AddSeconds_m3671((&V_0), (((double)L_4)), /*hidden argument*/&DateTime_AddSeconds_m3671_MethodInfo);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t677 * L_8 = (Score_t677 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Score_t677_il2cpp_TypeInfo));
		Score__ctor_m3479(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/&Score__ctor_m3479_MethodInfo);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t554_marshal(const GcScoreData_t554& unmarshaled, GcScoreData_t554_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t554_marshal_back(const GcScoreData_t554_marshaled& marshaled, GcScoreData_t554& unmarshaled)
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
void GcScoreData_t554_marshal_cleanup(GcScoreData_t554_marshaled& marshaled)
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
extern TypeInfo RenderBuffer_t564_il2cpp_TypeInfo;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraClearFlags_t678_il2cpp_TypeInfo;
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo DepthTextureMode_t679_il2cpp_TypeInfo;
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureModeMethodDeclarations.h"



// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpace.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ColorSpace_t680_il2cpp_TypeInfo;
// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpaceMethodDeclarations.h"



// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FilterMode_t681_il2cpp_TypeInfo;
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterModeMethodDeclarations.h"



// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextureFormat_t682_il2cpp_TypeInfo;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"



// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderTextureFormat_t683_il2cpp_TypeInfo;
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormatMethodDeclarations.h"



// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWrite.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderTextureReadWrite_t684_il2cpp_TypeInfo;
// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWriteMethodDeclarations.h"



// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReflectionProbeBlendInfo_t685_il2cpp_TypeInfo;
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LocalUser_t547_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"

extern TypeInfo UserProfileU5BU5D_t546_il2cpp_TypeInfo;
extern Il2CppType UserProfileU5BU5D_t546_0_0_0;
extern MethodInfo UserProfile__ctor_m3447_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern MethodInfo LocalUser__ctor_m3442_MethodInfo;
extern TypeInfo* UserProfileU5BU5D_t546_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m3442 (LocalUser_t547 * __this, MethodInfo* method)
{
	static bool LocalUser__ctor_m3442_init;
	if (!LocalUser__ctor_m3442_init)
	{
		UserProfileU5BU5D_t546_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UserProfileU5BU5D_t546_0_0_0);
		LocalUser__ctor_m3442_init = true;
	}
	{
		UserProfile__ctor_m3447(__this, /*hidden argument*/&UserProfile__ctor_m3447_MethodInfo);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t686*)((UserProfileU5BU5D_t546*)SZArrayNew(UserProfileU5BU5D_t546_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern MethodInfo LocalUser_SetFriends_m3443_MethodInfo;
extern "C" void LocalUser_SetFriends_m3443 (LocalUser_t547 * __this, IUserProfileU5BU5D_t686* ___friends, MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t686* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern MethodInfo LocalUser_SetAuthenticated_m3444_MethodInfo;
extern "C" void LocalUser_SetAuthenticated_m3444 (LocalUser_t547 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern MethodInfo LocalUser_SetUnderage_m3445_MethodInfo;
extern "C" void LocalUser_SetUnderage_m3445 (LocalUser_t547 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern MethodInfo LocalUser_get_authenticated_m3446_MethodInfo;
extern "C" bool LocalUser_get_authenticated_m3446 (LocalUser_t547 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Texture2D_t23_il2cpp_TypeInfo;
extern TypeInfo UserState_t693_il2cpp_TypeInfo;
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
extern MethodInfo Texture2D__ctor_m2741_MethodInfo;
extern MethodInfo UserProfile_get_id_m3454_MethodInfo;
extern MethodInfo UserProfile_get_userName_m3453_MethodInfo;
extern MethodInfo UserProfile_get_isFriend_m3455_MethodInfo;
extern MethodInfo UserProfile_get_state_m3456_MethodInfo;
extern MethodInfo String_Concat_m557_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C" void UserProfile__ctor_m3447 (UserProfile_t674 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		__this->___m_UserName_0 = (String_t*) &_stringLiteral245;
		__this->___m_ID_1 = (String_t*) &_stringLiteral155;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t23 * L_0 = (Texture2D_t23 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t23_il2cpp_TypeInfo));
		Texture2D__ctor_m2741(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/&Texture2D__ctor_m2741_MethodInfo);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" void UserProfile__ctor_m3448 (UserProfile_t674 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t23 * ___image, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t23 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern MethodInfo UserProfile_ToString_m3449_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" String_t* UserProfile_ToString_m3449 (UserProfile_t674 * __this, MethodInfo* method)
{
	static bool UserProfile_ToString_m3449_init;
	if (!UserProfile_ToString_m3449_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		UserProfile_ToString_m3449_init = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_id_m3454_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_userName_m3453_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t148* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&UserProfile_get_isFriend_m3455_MethodInfo, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Boolean_t25_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t148* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&UserProfile_get_state_m3456_MethodInfo, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(InitializedTypeInfo(&UserState_t693_il2cpp_TypeInfo), &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Concat_m557(NULL /*static, unused*/, L_11, /*hidden argument*/&String_Concat_m557_MethodInfo);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern MethodInfo UserProfile_SetUserName_m3450_MethodInfo;
extern "C" void UserProfile_SetUserName_m3450 (UserProfile_t674 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern MethodInfo UserProfile_SetUserID_m3451_MethodInfo;
extern "C" void UserProfile_SetUserID_m3451 (UserProfile_t674 * __this, String_t* ___id, MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern MethodInfo UserProfile_SetImage_m3452_MethodInfo;
extern "C" void UserProfile_SetImage_m3452 (UserProfile_t674 * __this, Texture2D_t23 * ___image, MethodInfo* method)
{
	{
		Texture2D_t23 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m3453 (UserProfile_t674 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m3454 (UserProfile_t674 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m3455 (UserProfile_t674 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m3456 (UserProfile_t674 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Double_t746_il2cpp_TypeInfo;
extern TypeInfo DateTime_t579_il2cpp_TypeInfo;
extern MethodInfo Achievement_set_id_m3462_MethodInfo;
extern MethodInfo Achievement_set_percentCompleted_m3464_MethodInfo;
extern MethodInfo Achievement__ctor_m3458_MethodInfo;
extern MethodInfo Achievement_get_id_m3461_MethodInfo;
extern MethodInfo Achievement_get_percentCompleted_m3463_MethodInfo;
extern MethodInfo Achievement_get_completed_m3465_MethodInfo;
extern MethodInfo Achievement_get_hidden_m3466_MethodInfo;
extern MethodInfo Achievement_get_lastReportedDate_m3467_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m3457 (Achievement_t676 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t579  ___lastReportedDate, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m3462_MethodInfo, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m3464_MethodInfo, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t579  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern "C" void Achievement__ctor_m3458 (Achievement_t676 * __this, String_t* ___id, double ___percent, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m3462_MethodInfo, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m3464_MethodInfo, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t579_il2cpp_TypeInfo));
		DateTime_t579  L_2 = ((DateTime_t579_StaticFields*)InitializedTypeInfo(&DateTime_t579_il2cpp_TypeInfo)->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern MethodInfo Achievement__ctor_m3459_MethodInfo;
extern "C" void Achievement__ctor_m3459 (Achievement_t676 * __this, MethodInfo* method)
{
	{
		Achievement__ctor_m3458(__this, (String_t*) &_stringLiteral247, (0.0), /*hidden argument*/&Achievement__ctor_m3458_MethodInfo);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern MethodInfo Achievement_ToString_m3460_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" String_t* Achievement_ToString_m3460 (Achievement_t676 * __this, MethodInfo* method)
{
	static bool Achievement_ToString_m3460_init;
	if (!Achievement_ToString_m3460_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		Achievement_ToString_m3460_init = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Achievement_get_id_m3461_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(&Achievement_get_percentCompleted_m3463_MethodInfo, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Double_t746_il2cpp_TypeInfo), &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t148* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_completed_m3465_MethodInfo, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Boolean_t25_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t148* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_hidden_m3466_MethodInfo, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Boolean_t25_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t148* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_18 = L_17;
		DateTime_t579  L_19 = (DateTime_t579 )VirtFuncInvoker0< DateTime_t579  >::Invoke(&Achievement_get_lastReportedDate_m3467_MethodInfo, __this);
		DateTime_t579  L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&DateTime_t579_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m557(NULL /*static, unused*/, L_18, /*hidden argument*/&String_Concat_m557_MethodInfo);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m3461 (Achievement_t676 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m3462 (Achievement_t676 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m3463 (Achievement_t676 * __this, MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m3464 (Achievement_t676 * __this, double ___value, MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m3465 (Achievement_t676 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m3466 (Achievement_t676 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t579  Achievement_get_lastReportedDate_m3467 (Achievement_t676 * __this, MethodInfo* method)
{
	{
		DateTime_t579  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo AchievementDescription_set_id_m3472_MethodInfo;
extern MethodInfo AchievementDescription_get_id_m3471_MethodInfo;
extern MethodInfo AchievementDescription_get_title_m3473_MethodInfo;
extern MethodInfo AchievementDescription_get_achievedDescription_m3474_MethodInfo;
extern MethodInfo AchievementDescription_get_unachievedDescription_m3475_MethodInfo;
extern MethodInfo AchievementDescription_get_points_m3477_MethodInfo;
extern MethodInfo AchievementDescription_get_hidden_m3476_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m3468 (AchievementDescription_t675 * __this, String_t* ___id, String_t* ___title, Texture2D_t23 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&AchievementDescription_set_id_m3472_MethodInfo, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t23 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern MethodInfo AchievementDescription_ToString_m3469_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" String_t* AchievementDescription_ToString_m3469 (AchievementDescription_t675 * __this, MethodInfo* method)
{
	static bool AchievementDescription_ToString_m3469_init;
	if (!AchievementDescription_ToString_m3469_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		AchievementDescription_ToString_m3469_init = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_id_m3471_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t148* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_title_m3473_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t148* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_achievedDescription_m3474_MethodInfo, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t148* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_unachievedDescription_m3475_MethodInfo, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t148* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&AchievementDescription_get_points_m3477_MethodInfo, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t148* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t148* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&AchievementDescription_get_hidden_m3476_MethodInfo, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Boolean_t25_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m557(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m557_MethodInfo);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern MethodInfo AchievementDescription_SetImage_m3470_MethodInfo;
extern "C" void AchievementDescription_SetImage_m3470 (AchievementDescription_t675 * __this, Texture2D_t23 * ___image, MethodInfo* method)
{
	{
		Texture2D_t23 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m3471 (AchievementDescription_t675 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m3472 (AchievementDescription_t675 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m3473 (AchievementDescription_t675 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m3474 (AchievementDescription_t675 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m3475 (AchievementDescription_t675 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m3476 (AchievementDescription_t675 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m3477 (AchievementDescription_t675 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Int64_t747_il2cpp_TypeInfo;
extern MethodInfo DateTime_get_Now_m3617_MethodInfo;
extern MethodInfo Score_set_leaderboardID_m3482_MethodInfo;
extern MethodInfo Score_set_value_m3484_MethodInfo;
extern MethodInfo Score_get_value_m3483_MethodInfo;
extern MethodInfo Score_get_leaderboardID_m3481_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern MethodInfo Score__ctor_m3478_MethodInfo;
extern "C" void Score__ctor_m3478 (Score_t677 * __this, String_t* ___leaderboardID, int64_t ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t579_il2cpp_TypeInfo));
		DateTime_t579  L_2 = DateTime_get_Now_m3617(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m3617_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		Score__ctor_m3479(__this, L_0, L_1, (String_t*) &_stringLiteral155, L_2, L_3, (-1), /*hidden argument*/&Score__ctor_m3479_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m3479 (Score_t677 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t579  ___date, String_t* ___formattedValue, int32_t ___rank, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(&Score_set_leaderboardID_m3482_MethodInfo, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(&Score_set_value_m3484_MethodInfo, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t579  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern MethodInfo Score_ToString_m3480_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" String_t* Score_ToString_m3480 (Score_t677 * __this, MethodInfo* method)
{
	static bool Score_ToString_m3480_init;
	if (!Score_ToString_m3480_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		Score_ToString_m3480_init = true;
	}
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral248);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral248;
		ObjectU5BU5D_t148* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t148* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral249);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral249;
		ObjectU5BU5D_t148* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&Score_get_value_m3483_MethodInfo, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int64_t747_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t148* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral250);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral250;
		ObjectU5BU5D_t148* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Score_get_leaderboardID_m3481_MethodInfo, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t148* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral251);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral251;
		ObjectU5BU5D_t148* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t148* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral252);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)(String_t*) &_stringLiteral252;
		ObjectU5BU5D_t148* L_17 = L_16;
		DateTime_t579  L_18 = (__this->___m_Date_0);
		DateTime_t579  L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&DateTime_t579_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m557(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m557_MethodInfo);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m3481 (Score_t677 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m3482 (Score_t677 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m3483 (Score_t677 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m3484 (Score_t677 * __this, int64_t ___value, MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Leaderboard_t559_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
extern TypeInfo Range_t689_il2cpp_TypeInfo;
extern TypeInfo UserScope_t694_il2cpp_TypeInfo;
extern TypeInfo TimeScope_t695_il2cpp_TypeInfo;
extern TypeInfo ScoreU5BU5D_t729_il2cpp_TypeInfo;
extern TypeInfo UInt32_t748_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
extern Il2CppType ScoreU5BU5D_t729_0_0_0;
extern Il2CppType StringU5BU5D_t34_0_0_0;
extern MethodInfo Leaderboard_set_id_m3493_MethodInfo;
extern MethodInfo Range__ctor_m3506_MethodInfo;
extern MethodInfo Leaderboard_set_range_m3497_MethodInfo;
extern MethodInfo Leaderboard_set_userScope_m3495_MethodInfo;
extern MethodInfo Leaderboard_set_timeScope_m3499_MethodInfo;
extern MethodInfo Leaderboard_get_id_m3492_MethodInfo;
extern MethodInfo Leaderboard_get_range_m3496_MethodInfo;
extern MethodInfo Leaderboard_get_userScope_m3494_MethodInfo;
extern MethodInfo Leaderboard_get_timeScope_m3498_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern MethodInfo Leaderboard__ctor_m3485_MethodInfo;
extern TypeInfo* ScoreU5BU5D_t729_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t34_il2cpp_TypeInfo_var;
extern "C" void Leaderboard__ctor_m3485 (Leaderboard_t559 * __this, MethodInfo* method)
{
	static bool Leaderboard__ctor_m3485_init;
	if (!Leaderboard__ctor_m3485_init)
	{
		ScoreU5BU5D_t729_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ScoreU5BU5D_t729_0_0_0);
		StringU5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t34_0_0_0);
		Leaderboard__ctor_m3485_init = true;
	}
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		VirtActionInvoker1< String_t* >::Invoke(&Leaderboard_set_id_m3493_MethodInfo, __this, (String_t*) &_stringLiteral253);
		Range_t689  L_0 = {0};
		Range__ctor_m3506(&L_0, 1, ((int32_t)10), /*hidden argument*/&Range__ctor_m3506_MethodInfo);
		VirtActionInvoker1< Range_t689  >::Invoke(&Leaderboard_set_range_m3497_MethodInfo, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_userScope_m3495_MethodInfo, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_timeScope_m3499_MethodInfo, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t677 * L_1 = (Score_t677 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Score_t677_il2cpp_TypeInfo));
		Score__ctor_m3478(L_1, (String_t*) &_stringLiteral253, (((int64_t)0)), /*hidden argument*/&Score__ctor_m3478_MethodInfo);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t688*)((ScoreU5BU5D_t729*)SZArrayNew(ScoreU5BU5D_t729_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = (String_t*) &_stringLiteral253;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t34*)SZArrayNew(StringU5BU5D_t34_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern MethodInfo Leaderboard_ToString_m3486_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" String_t* Leaderboard_ToString_m3486 (Leaderboard_t559 * __this, MethodInfo* method)
{
	static bool Leaderboard_ToString_m3486_init;
	if (!Leaderboard_ToString_m3486_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		Leaderboard_ToString_m3486_init = true;
	}
	Range_t689  V_0 = {0};
	Range_t689  V_1 = {0};
	{
		ObjectU5BU5D_t148* L_0 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral254);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral254;
		ObjectU5BU5D_t148* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Leaderboard_get_id_m3492_MethodInfo, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t148* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral255);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral255;
		ObjectU5BU5D_t148* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t148* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral256);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral256;
		ObjectU5BU5D_t148* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&Boolean_t25_il2cpp_TypeInfo), &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t148* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral257);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral257;
		ObjectU5BU5D_t148* L_12 = L_11;
		Range_t689  L_13 = (Range_t689 )VirtFuncInvoker0< Range_t689  >::Invoke(&Leaderboard_get_range_m3496_MethodInfo, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t148* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral258);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)(String_t*) &_stringLiteral258;
		ObjectU5BU5D_t148* L_18 = L_17;
		Range_t689  L_19 = (Range_t689 )VirtFuncInvoker0< Range_t689  >::Invoke(&Leaderboard_get_range_m3496_MethodInfo, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t148* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral259);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral259;
		ObjectU5BU5D_t148* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(InitializedTypeInfo(&UInt32_t748_il2cpp_TypeInfo), &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t148* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral260);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)(String_t*) &_stringLiteral260;
		ObjectU5BU5D_t148* L_29 = L_28;
		IScoreU5BU5D_t688* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t148* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral261);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)(String_t*) &_stringLiteral261;
		ObjectU5BU5D_t148* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_userScope_m3494_MethodInfo, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(InitializedTypeInfo(&UserScope_t694_il2cpp_TypeInfo), &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t148* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral262);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)(String_t*) &_stringLiteral262;
		ObjectU5BU5D_t148* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_timeScope_m3498_MethodInfo, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(InitializedTypeInfo(&TimeScope_t695_il2cpp_TypeInfo), &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t148* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral263);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)(String_t*) &_stringLiteral263;
		ObjectU5BU5D_t148* L_44 = L_43;
		StringU5BU5D_t34* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_48 = String_Concat_m557(NULL /*static, unused*/, L_44, /*hidden argument*/&String_Concat_m557_MethodInfo);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern MethodInfo Leaderboard_SetLocalUserScore_m3487_MethodInfo;
extern "C" void Leaderboard_SetLocalUserScore_m3487 (Leaderboard_t559 * __this, Object_t * ___score, MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern MethodInfo Leaderboard_SetMaxRange_m3488_MethodInfo;
extern "C" void Leaderboard_SetMaxRange_m3488 (Leaderboard_t559 * __this, uint32_t ___maxRange, MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern MethodInfo Leaderboard_SetScores_m3489_MethodInfo;
extern "C" void Leaderboard_SetScores_m3489 (Leaderboard_t559 * __this, IScoreU5BU5D_t688* ___scores, MethodInfo* method)
{
	{
		IScoreU5BU5D_t688* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern MethodInfo Leaderboard_SetTitle_m3490_MethodInfo;
extern "C" void Leaderboard_SetTitle_m3490 (Leaderboard_t559 * __this, String_t* ___title, MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern MethodInfo Leaderboard_GetUserFilter_m3491_MethodInfo;
extern "C" StringU5BU5D_t34* Leaderboard_GetUserFilter_m3491 (Leaderboard_t559 * __this, MethodInfo* method)
{
	{
		StringU5BU5D_t34* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m3492 (Leaderboard_t559 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m3493 (Leaderboard_t559 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m3494 (Leaderboard_t559 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m3495 (Leaderboard_t559 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t689  Leaderboard_get_range_m3496 (Leaderboard_t559 * __this, MethodInfo* method)
{
	{
		Range_t689  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m3497 (Leaderboard_t559 * __this, Range_t689  ___value, MethodInfo* method)
{
	{
		Range_t689  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m3498 (Leaderboard_t559 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m3499 (Leaderboard_t559 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HitInfo_t690_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"



// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern MethodInfo HitInfo_SendMessage_m3500_MethodInfo;
extern "C" void HitInfo_SendMessage_m3500 (HitInfo_t690 * __this, String_t* ___name, MethodInfo* method)
{
	{
		GameObject_t59 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m3226(L_0, L_1, NULL, 1, /*hidden argument*/&GameObject_SendMessage_m3226_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern MethodInfo HitInfo_Compare_m3501_MethodInfo;
extern "C" bool HitInfo_Compare_m3501 (Object_t * __this /* static, unused */, HitInfo_t690  ___lhs, HitInfo_t690  ___rhs, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t59 * L_0 = ((&___lhs)->___target_0);
		GameObject_t59 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m71(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t18 * L_3 = ((&___lhs)->___camera_1);
		Camera_t18 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m71(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern MethodInfo HitInfo_op_Implicit_m3502_MethodInfo;
extern "C" bool HitInfo_op_Implicit_m3502 (Object_t * __this /* static, unused */, HitInfo_t690  ___exists, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t59 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m125(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t18 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m125(NULL /*static, unused*/, L_2, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SendMouseEvents_t692_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
extern TypeInfo HitInfoU5BU5D_t691_il2cpp_TypeInfo;
extern TypeInfo CameraU5BU5D_t619_il2cpp_TypeInfo;
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
extern Il2CppType HitInfoU5BU5D_t691_0_0_0;
extern Il2CppType CameraU5BU5D_t619_0_0_0;
extern MethodInfo Rect_Contains_m601_MethodInfo;
extern MethodInfo GUILayer_HitTest_m2763_MethodInfo;
extern MethodInfo Mathf_Approximately_m1978_MethodInfo;
extern MethodInfo Mathf_Abs_m500_MethodInfo;
extern MethodInfo SendMouseEvents_SendEvents_m3505_MethodInfo;
struct Component_t35;
// UnityEngine.CastHelper`1<UnityEngine.GUILayer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_28.h"
struct Component_t35;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m117_gshared (Component_t35 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m117(__this, method) (( Object_t * (*) (Component_t35 *, MethodInfo*))Component_GetComponent_TisObject_t_m117_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t570_m3672(__this, method) (( GUILayer_t570 * (*) (Component_t35 *, MethodInfo*))Component_GetComponent_TisObject_t_m117_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisGUILayer_t570_m3672_GenericMethod;


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern MethodInfo SendMouseEvents__cctor_m3503_MethodInfo;
extern TypeInfo* HitInfoU5BU5D_t691_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m3503 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool SendMouseEvents__cctor_m3503_init;
	if (!SendMouseEvents__cctor_m3503_init)
	{
		HitInfoU5BU5D_t691_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&HitInfoU5BU5D_t691_0_0_0);
		SendMouseEvents__cctor_m3503_init = true;
	}
	HitInfo_t690  V_0 = {0};
	HitInfo_t690  V_1 = {0};
	HitInfo_t690  V_2 = {0};
	HitInfo_t690  V_3 = {0};
	HitInfo_t690  V_4 = {0};
	HitInfo_t690  V_5 = {0};
	HitInfo_t690  V_6 = {0};
	HitInfo_t690  V_7 = {0};
	HitInfo_t690  V_8 = {0};
	{
		HitInfoU5BU5D_t691* L_0 = ((HitInfoU5BU5D_t691*)SZArrayNew(HitInfoU5BU5D_t691_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t690_il2cpp_TypeInfo), (&V_0));
		HitInfo_t690  L_1 = V_0;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t691* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t690_il2cpp_TypeInfo), (&V_1));
		HitInfo_t690  L_3 = V_1;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t691* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t690_il2cpp_TypeInfo), (&V_2));
		HitInfo_t690  L_5 = V_2;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t691* L_6 = ((HitInfoU5BU5D_t691*)SZArrayNew(HitInfoU5BU5D_t691_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t690_il2cpp_TypeInfo), (&V_3));
		HitInfo_t690  L_7 = V_3;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t691* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t690_il2cpp_TypeInfo), (&V_4));
		HitInfo_t690  L_9 = V_4;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t691* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t690_il2cpp_TypeInfo), (&V_5));
		HitInfo_t690  L_11 = V_5;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t691* L_12 = ((HitInfoU5BU5D_t691*)SZArrayNew(HitInfoU5BU5D_t691_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t690_il2cpp_TypeInfo), (&V_6));
		HitInfo_t690  L_13 = V_6;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t691* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t690_il2cpp_TypeInfo), (&V_7));
		HitInfo_t690  L_15 = V_7;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t691* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t690_il2cpp_TypeInfo), (&V_8));
		HitInfo_t690  L_17 = V_8;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern MethodInfo SendMouseEvents_DoSendMouseEvents_m3504_MethodInfo;
extern TypeInfo* CameraU5BU5D_t619_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponent_TisGUILayer_t570_m3672_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m3504 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, MethodInfo* method)
{
	static bool SendMouseEvents_DoSendMouseEvents_m3504_init;
	if (!SendMouseEvents_DoSendMouseEvents_m3504_init)
	{
		CameraU5BU5D_t619_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CameraU5BU5D_t619_0_0_0);
		Component_GetComponent_TisGUILayer_t570_m3672_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisGUILayer_t570_m3672_GenericMethod);
		SendMouseEvents_DoSendMouseEvents_m3504_init = true;
	}
	Vector3_t32  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t18 * V_3 = {0};
	CameraU5BU5D_t619* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t139  V_6 = {0};
	GUILayer_t570 * V_7 = {0};
	GUIElement_t569 * V_8 = {0};
	Ray_t155  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t59 * V_12 = {0};
	GameObject_t59 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t690  V_15 = {0};
	Vector3_t32  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t153_il2cpp_TypeInfo));
		Vector3_t32  L_0 = Input_get_mousePosition_m571(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m571_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m3161(NULL /*static, unused*/, /*hidden argument*/&Camera_get_allCamerasCount_m3161_MethodInfo);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		CameraU5BU5D_t619* L_2 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		CameraU5BU5D_t619* L_3 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t619*)SZArrayNew(CameraU5BU5D_t619_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		CameraU5BU5D_t619* L_6 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m3162(NULL /*static, unused*/, L_6, /*hidden argument*/&Camera_GetAllCameras_m3162_MethodInfo);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_7 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (InitializedTypeInfo(&HitInfo_t690_il2cpp_TypeInfo), (&V_15));
		HitInfo_t690  L_9 = V_15;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_12 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = ___mouseUsed;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		CameraU5BU5D_t619* L_14 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t619* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t18 **)(Camera_t18 **)SZArrayLdElema(L_15, L_17));
		Camera_t18 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m71(NULL /*static, unused*/, L_18, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Camera_t18 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t7 * L_22 = Camera_get_targetTexture_m3155(L_21, /*hidden argument*/&Camera_get_targetTexture_m3155_MethodInfo);
		bool L_23 = Object_op_Inequality_m125(NULL /*static, unused*/, L_22, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		Camera_t18 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t139  L_25 = Camera_get_pixelRect_m3154(L_24, /*hidden argument*/&Camera_get_pixelRect_m3154_MethodInfo);
		V_6 = L_25;
		Vector3_t32  L_26 = V_0;
		bool L_27 = Rect_Contains_m601((&V_6), L_26, /*hidden argument*/&Rect_Contains_m601_MethodInfo);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		Camera_t18 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t570 * L_29 = Component_GetComponent_TisGUILayer_t570_m3672(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t570_m3672_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t570 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m55(NULL /*static, unused*/, L_30, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t570 * L_32 = V_7;
		Vector3_t32  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t569 * L_34 = GUILayer_HitTest_m2763(L_32, L_33, /*hidden argument*/&GUILayer_HitTest_m2763_MethodInfo);
		V_8 = L_34;
		GUIElement_t569 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m55(NULL /*static, unused*/, L_35, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_37 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t569 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t59 * L_39 = Component_get_gameObject_m502(L_38, /*hidden argument*/&Component_get_gameObject_m502_MethodInfo);
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t691* L_40 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t18 * L_41 = V_3;
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_42 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t59 *)NULL;
		HitInfoU5BU5D_t691* L_43 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t18 *)NULL;
	}

IL_0141:
	{
		Camera_t18 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m3152(L_44, /*hidden argument*/&Camera_get_eventMask_m3152_MethodInfo);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		Camera_t18 * L_46 = V_3;
		Vector3_t32  L_47 = V_0;
		NullCheck(L_46);
		Ray_t155  L_48 = Camera_ScreenPointToRay_m572(L_46, L_47, /*hidden argument*/&Camera_ScreenPointToRay_m572_MethodInfo);
		V_9 = L_48;
		Vector3_t32  L_49 = Ray_get_direction_m2003((&V_9), /*hidden argument*/&Ray_get_direction_m2003_MethodInfo);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t28_il2cpp_TypeInfo));
		bool L_52 = Mathf_Approximately_m1978(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/&Mathf_Approximately_m1978_MethodInfo);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		Camera_t18 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m2000(L_53, /*hidden argument*/&Camera_get_farClipPlane_m2000_MethodInfo);
		Camera_t18 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m2001(L_55, /*hidden argument*/&Camera_get_nearClipPlane_m2001_MethodInfo);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t28_il2cpp_TypeInfo));
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t18 * L_59 = V_3;
		Ray_t155  L_60 = V_9;
		float L_61 = V_11;
		Camera_t18 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m2013(L_62, /*hidden argument*/&Camera_get_cullingMask_m2013_MethodInfo);
		Camera_t18 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m3152(L_64, /*hidden argument*/&Camera_get_eventMask_m3152_MethodInfo);
		NullCheck(L_59);
		GameObject_t59 * L_66 = Camera_RaycastTry_m3166(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/&Camera_RaycastTry_m3166_MethodInfo);
		V_12 = L_66;
		GameObject_t59 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m125(NULL /*static, unused*/, L_67, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_69 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t59 * L_70 = V_12;
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t691* L_71 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t18 * L_72 = V_3;
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t18 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m3157(L_73, /*hidden argument*/&Camera_get_clearFlags_m3157_MethodInfo);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t18 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m3157(L_75, /*hidden argument*/&Camera_get_clearFlags_m3157_MethodInfo);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_77 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t59 *)NULL;
		HitInfoU5BU5D_t691* L_78 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t18 *)NULL;
	}

IL_0226:
	{
		Camera_t18 * L_79 = V_3;
		Ray_t155  L_80 = V_9;
		float L_81 = V_11;
		Camera_t18 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m2013(L_82, /*hidden argument*/&Camera_get_cullingMask_m2013_MethodInfo);
		Camera_t18 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m3152(L_84, /*hidden argument*/&Camera_get_eventMask_m3152_MethodInfo);
		NullCheck(L_79);
		GameObject_t59 * L_86 = Camera_RaycastTry2D_m3168(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/&Camera_RaycastTry2D_m3168_MethodInfo);
		V_13 = L_86;
		GameObject_t59 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m125(NULL /*static, unused*/, L_87, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_89 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t59 * L_90 = V_13;
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t691* L_91 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t18 * L_92 = V_3;
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t18 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m3157(L_93, /*hidden argument*/&Camera_get_clearFlags_m3157_MethodInfo);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t18 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m3157(L_95, /*hidden argument*/&Camera_get_clearFlags_m3157_MethodInfo);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_97 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t59 *)NULL;
		HitInfoU5BU5D_t691* L_98 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t18 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t619* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_103 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m3505(NULL /*static, unused*/, L_102, (*(HitInfo_t690 *)((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/&SendMouseEvents_SendEvents_m3505_MethodInfo);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_107 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern "C" void SendMouseEvents_SendEvents_m3505 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t690  ___hit, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t690  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t153_il2cpp_TypeInfo));
		bool L_0 = Input_GetMouseButtonDown_m600(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m600_MethodInfo);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m573(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m573_MethodInfo);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t690  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m3502(NULL /*static, unused*/, L_3, /*hidden argument*/&HitInfo_op_Implicit_m3502_MethodInfo);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_5 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t690  L_7 = ___hit;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t691* L_8 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m3500(((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_8, L_9)), (String_t*) &_stringLiteral264, /*hidden argument*/&HitInfo_SendMessage_m3500_MethodInfo);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_11 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m3502(NULL /*static, unused*/, (*(HitInfo_t690 *)((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/&HitInfo_op_Implicit_m3502_MethodInfo);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t690  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_15 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m3501(NULL /*static, unused*/, L_14, (*(HitInfo_t690 *)((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/&HitInfo_Compare_m3501_MethodInfo);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_18 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m3500(((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_18, L_19)), (String_t*) &_stringLiteral265, /*hidden argument*/&HitInfo_SendMessage_m3500_MethodInfo);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_20 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m3500(((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_20, L_21)), (String_t*) &_stringLiteral266, /*hidden argument*/&HitInfo_SendMessage_m3500_MethodInfo);
		HitInfoU5BU5D_t691* L_22 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (InitializedTypeInfo(&HitInfo_t690_il2cpp_TypeInfo), (&V_2));
		HitInfo_t690  L_24 = V_2;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_25 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m3502(NULL /*static, unused*/, (*(HitInfo_t690 *)((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/&HitInfo_op_Implicit_m3502_MethodInfo);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_28 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m3500(((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_28, L_29)), (String_t*) &_stringLiteral267, /*hidden argument*/&HitInfo_SendMessage_m3500_MethodInfo);
	}

IL_00fc:
	{
		HitInfo_t690  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_31 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m3501(NULL /*static, unused*/, L_30, (*(HitInfo_t690 *)((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/&HitInfo_Compare_m3501_MethodInfo);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t690  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m3502(NULL /*static, unused*/, L_34, /*hidden argument*/&HitInfo_op_Implicit_m3502_MethodInfo);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m3500((&___hit), (String_t*) &_stringLiteral268, /*hidden argument*/&HitInfo_SendMessage_m3500_MethodInfo);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_36 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m3502(NULL /*static, unused*/, (*(HitInfo_t690 *)((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/&HitInfo_op_Implicit_m3502_MethodInfo);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_39 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m3500(((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_39, L_40)), (String_t*) &_stringLiteral269, /*hidden argument*/&HitInfo_SendMessage_m3500_MethodInfo);
	}

IL_0162:
	{
		HitInfo_t690  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m3502(NULL /*static, unused*/, L_41, /*hidden argument*/&HitInfo_op_Implicit_m3502_MethodInfo);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m3500((&___hit), (String_t*) &_stringLiteral270, /*hidden argument*/&HitInfo_SendMessage_m3500_MethodInfo);
		HitInfo_SendMessage_m3500((&___hit), (String_t*) &_stringLiteral268, /*hidden argument*/&HitInfo_SendMessage_m3500_MethodInfo);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo));
		HitInfoU5BU5D_t691* L_43 = ((SendMouseEvents_t692_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t692_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t690  L_45 = ___hit;
		*((HitInfo_t690 *)(HitInfo_t690 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
