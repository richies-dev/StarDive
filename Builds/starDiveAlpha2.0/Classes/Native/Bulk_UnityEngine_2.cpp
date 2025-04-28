#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
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
extern TypeInfo UserProfile_t739_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Int32
#include "mscorlib_System_Int32.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo Texture2D_t15_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t219_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t90_il2cpp_TypeInfo;
extern TypeInfo UserState_t759_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t219_0_0_0;
extern MethodInfo Object__ctor_m373_MethodInfo;
extern MethodInfo Texture2D__ctor_m2962_MethodInfo;
extern MethodInfo UserProfile_get_id_m3686_MethodInfo;
extern MethodInfo UserProfile_get_userName_m3685_MethodInfo;
extern MethodInfo UserProfile_get_isFriend_m3687_MethodInfo;
extern MethodInfo UserProfile_get_state_m3688_MethodInfo;
extern MethodInfo String_Concat_m2171_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern MethodInfo UserProfile__ctor_m3679_MethodInfo;
extern "C" void UserProfile__ctor_m3679 (UserProfile_t739 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		__this->___m_UserName_0 = (String_t*) &_stringLiteral365;
		__this->___m_ID_1 = (String_t*) &_stringLiteral276;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t15 * L_0 = (Texture2D_t15 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t15_il2cpp_TypeInfo));
		Texture2D__ctor_m2962(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/&Texture2D__ctor_m2962_MethodInfo);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern MethodInfo UserProfile__ctor_m3680_MethodInfo;
extern "C" void UserProfile__ctor_m3680 (UserProfile_t739 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t15 * ___image, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t15 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern MethodInfo UserProfile_ToString_m3681_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* UserProfile_ToString_m3681 (UserProfile_t739 * __this, MethodInfo* method)
{
	static bool UserProfile_ToString_m3681_init;
	if (!UserProfile_ToString_m3681_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		UserProfile_ToString_m3681_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_id_m3686_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t219* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_userName_m3685_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t219* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&UserProfile_get_isFriend_m3687_MethodInfo, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Boolean_t90_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t219* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&UserProfile_get_state_m3688_MethodInfo, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(InitializedTypeInfo(&UserState_t759_il2cpp_TypeInfo), &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Concat_m2171(NULL /*static, unused*/, L_11, /*hidden argument*/&String_Concat_m2171_MethodInfo);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern MethodInfo UserProfile_SetUserName_m3682_MethodInfo;
extern "C" void UserProfile_SetUserName_m3682 (UserProfile_t739 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern MethodInfo UserProfile_SetUserID_m3683_MethodInfo;
extern "C" void UserProfile_SetUserID_m3683 (UserProfile_t739 * __this, String_t* ___id, MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern MethodInfo UserProfile_SetImage_m3684_MethodInfo;
extern "C" void UserProfile_SetImage_m3684 (UserProfile_t739 * __this, Texture2D_t15 * ___image, MethodInfo* method)
{
	{
		Texture2D_t15 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m3685 (UserProfile_t739 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m3686 (UserProfile_t739 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m3687 (UserProfile_t739 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m3688 (UserProfile_t739 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Achievement_t741_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
extern TypeInfo Void_t103_il2cpp_TypeInfo;
extern TypeInfo Double_t813_il2cpp_TypeInfo;
extern TypeInfo DateTime_t650_il2cpp_TypeInfo;
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
extern MethodInfo Achievement_set_id_m3694_MethodInfo;
extern MethodInfo Achievement_set_percentCompleted_m3696_MethodInfo;
extern MethodInfo Achievement__ctor_m3690_MethodInfo;
extern MethodInfo Achievement_get_id_m3693_MethodInfo;
extern MethodInfo Achievement_get_percentCompleted_m3695_MethodInfo;
extern MethodInfo Achievement_get_completed_m3697_MethodInfo;
extern MethodInfo Achievement_get_hidden_m3698_MethodInfo;
extern MethodInfo Achievement_get_lastReportedDate_m3699_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern MethodInfo Achievement__ctor_m3689_MethodInfo;
extern "C" void Achievement__ctor_m3689 (Achievement_t741 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t650  ___lastReportedDate, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m3694_MethodInfo, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m3696_MethodInfo, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t650  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern "C" void Achievement__ctor_m3690 (Achievement_t741 * __this, String_t* ___id, double ___percent, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m3694_MethodInfo, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m3696_MethodInfo, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t650_il2cpp_TypeInfo));
		DateTime_t650  L_2 = ((DateTime_t650_StaticFields*)InitializedTypeInfo(&DateTime_t650_il2cpp_TypeInfo)->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern MethodInfo Achievement__ctor_m3691_MethodInfo;
extern "C" void Achievement__ctor_m3691 (Achievement_t741 * __this, MethodInfo* method)
{
	{
		Achievement__ctor_m3690(__this, (String_t*) &_stringLiteral367, (0.0), /*hidden argument*/&Achievement__ctor_m3690_MethodInfo);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern MethodInfo Achievement_ToString_m3692_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Achievement_ToString_m3692 (Achievement_t741 * __this, MethodInfo* method)
{
	static bool Achievement_ToString_m3692_init;
	if (!Achievement_ToString_m3692_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Achievement_ToString_m3692_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Achievement_get_id_m3693_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t219* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(&Achievement_get_percentCompleted_m3695_MethodInfo, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Double_t813_il2cpp_TypeInfo), &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t219* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_completed_m3697_MethodInfo, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Boolean_t90_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t219* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_hidden_m3698_MethodInfo, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Boolean_t90_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t219* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_18 = L_17;
		DateTime_t650  L_19 = (DateTime_t650 )VirtFuncInvoker0< DateTime_t650  >::Invoke(&Achievement_get_lastReportedDate_m3699_MethodInfo, __this);
		DateTime_t650  L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&DateTime_t650_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m2171(NULL /*static, unused*/, L_18, /*hidden argument*/&String_Concat_m2171_MethodInfo);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m3693 (Achievement_t741 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m3694 (Achievement_t741 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m3695 (Achievement_t741 * __this, MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m3696 (Achievement_t741 * __this, double ___value, MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m3697 (Achievement_t741 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m3698 (Achievement_t741 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t650  Achievement_get_lastReportedDate_m3699 (Achievement_t741 * __this, MethodInfo* method)
{
	{
		DateTime_t650  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AchievementDescription_t740_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"

extern TypeInfo Int32_t92_il2cpp_TypeInfo;
extern MethodInfo AchievementDescription_set_id_m3704_MethodInfo;
extern MethodInfo AchievementDescription_get_id_m3703_MethodInfo;
extern MethodInfo AchievementDescription_get_title_m3705_MethodInfo;
extern MethodInfo AchievementDescription_get_achievedDescription_m3706_MethodInfo;
extern MethodInfo AchievementDescription_get_unachievedDescription_m3707_MethodInfo;
extern MethodInfo AchievementDescription_get_points_m3709_MethodInfo;
extern MethodInfo AchievementDescription_get_hidden_m3708_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern MethodInfo AchievementDescription__ctor_m3700_MethodInfo;
extern "C" void AchievementDescription__ctor_m3700 (AchievementDescription_t740 * __this, String_t* ___id, String_t* ___title, Texture2D_t15 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&AchievementDescription_set_id_m3704_MethodInfo, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t15 * L_2 = ___image;
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
extern MethodInfo AchievementDescription_ToString_m3701_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* AchievementDescription_ToString_m3701 (AchievementDescription_t740 * __this, MethodInfo* method)
{
	static bool AchievementDescription_ToString_m3701_init;
	if (!AchievementDescription_ToString_m3701_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		AchievementDescription_ToString_m3701_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_id_m3703_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t219* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_title_m3705_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t219* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_achievedDescription_m3706_MethodInfo, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_unachievedDescription_m3707_MethodInfo, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t219* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&AchievementDescription_get_points_m3709_MethodInfo, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t219* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral366);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral366;
		ObjectU5BU5D_t219* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&AchievementDescription_get_hidden_m3708_MethodInfo, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Boolean_t90_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m2171(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m2171_MethodInfo);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern MethodInfo AchievementDescription_SetImage_m3702_MethodInfo;
extern "C" void AchievementDescription_SetImage_m3702 (AchievementDescription_t740 * __this, Texture2D_t15 * ___image, MethodInfo* method)
{
	{
		Texture2D_t15 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m3703 (AchievementDescription_t740 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m3704 (AchievementDescription_t740 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m3705 (AchievementDescription_t740 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m3706 (AchievementDescription_t740 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m3707 (AchievementDescription_t740 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m3708 (AchievementDescription_t740 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m3709 (AchievementDescription_t740 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Score_t742_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"

// System.Int64
#include "mscorlib_System_Int64.h"
extern TypeInfo Int64_t814_il2cpp_TypeInfo;
extern MethodInfo DateTime_get_Now_m3850_MethodInfo;
extern MethodInfo Score__ctor_m3711_MethodInfo;
extern MethodInfo Score_set_leaderboardID_m3714_MethodInfo;
extern MethodInfo Score_set_value_m3716_MethodInfo;
extern MethodInfo Score_get_value_m3715_MethodInfo;
extern MethodInfo Score_get_leaderboardID_m3713_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern MethodInfo Score__ctor_m3710_MethodInfo;
extern "C" void Score__ctor_m3710 (Score_t742 * __this, String_t* ___leaderboardID, int64_t ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t650_il2cpp_TypeInfo));
		DateTime_t650  L_2 = DateTime_get_Now_m3850(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m3850_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		Score__ctor_m3711(__this, L_0, L_1, (String_t*) &_stringLiteral276, L_2, L_3, (-1), /*hidden argument*/&Score__ctor_m3711_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m3711 (Score_t742 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t650  ___date, String_t* ___formattedValue, int32_t ___rank, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(&Score_set_leaderboardID_m3714_MethodInfo, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(&Score_set_value_m3716_MethodInfo, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t650  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern MethodInfo Score_ToString_m3712_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Score_ToString_m3712 (Score_t742 * __this, MethodInfo* method)
{
	static bool Score_ToString_m3712_init;
	if (!Score_ToString_m3712_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Score_ToString_m3712_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral368);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral368;
		ObjectU5BU5D_t219* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t219* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral369);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral369;
		ObjectU5BU5D_t219* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&Score_get_value_m3715_MethodInfo, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int64_t814_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t219* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral370);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral370;
		ObjectU5BU5D_t219* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Score_get_leaderboardID_m3713_MethodInfo, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t219* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral371);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral371;
		ObjectU5BU5D_t219* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t219* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral372);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)(String_t*) &_stringLiteral372;
		ObjectU5BU5D_t219* L_17 = L_16;
		DateTime_t650  L_18 = (__this->___m_Date_0);
		DateTime_t650  L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&DateTime_t650_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m2171(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m2171_MethodInfo);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m3713 (Score_t742 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m3714 (Score_t742 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m3715 (Score_t742 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m3716 (Score_t742 * __this, int64_t ___value, MethodInfo* method)
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
extern TypeInfo Leaderboard_t628_il2cpp_TypeInfo;
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
#include "UnityEngine_ArrayTypes.h"
extern TypeInfo Range_t755_il2cpp_TypeInfo;
extern TypeInfo UserScope_t760_il2cpp_TypeInfo;
extern TypeInfo TimeScope_t761_il2cpp_TypeInfo;
extern TypeInfo ScoreU5BU5D_t795_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t104_il2cpp_TypeInfo;
extern TypeInfo UInt32_t815_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
extern Il2CppType ScoreU5BU5D_t795_0_0_0;
extern Il2CppType StringU5BU5D_t104_0_0_0;
extern MethodInfo Leaderboard_set_id_m3725_MethodInfo;
extern MethodInfo Range__ctor_m3738_MethodInfo;
extern MethodInfo Leaderboard_set_range_m3729_MethodInfo;
extern MethodInfo Leaderboard_set_userScope_m3727_MethodInfo;
extern MethodInfo Leaderboard_set_timeScope_m3731_MethodInfo;
extern MethodInfo Leaderboard_get_id_m3724_MethodInfo;
extern MethodInfo Leaderboard_get_range_m3728_MethodInfo;
extern MethodInfo Leaderboard_get_userScope_m3726_MethodInfo;
extern MethodInfo Leaderboard_get_timeScope_m3730_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern MethodInfo Leaderboard__ctor_m3717_MethodInfo;
extern TypeInfo* ScoreU5BU5D_t795_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t104_il2cpp_TypeInfo_var;
extern "C" void Leaderboard__ctor_m3717 (Leaderboard_t628 * __this, MethodInfo* method)
{
	static bool Leaderboard__ctor_m3717_init;
	if (!Leaderboard__ctor_m3717_init)
	{
		ScoreU5BU5D_t795_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ScoreU5BU5D_t795_0_0_0);
		StringU5BU5D_t104_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t104_0_0_0);
		Leaderboard__ctor_m3717_init = true;
	}
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		VirtActionInvoker1< String_t* >::Invoke(&Leaderboard_set_id_m3725_MethodInfo, __this, (String_t*) &_stringLiteral373);
		Range_t755  L_0 = {0};
		Range__ctor_m3738(&L_0, 1, ((int32_t)10), /*hidden argument*/&Range__ctor_m3738_MethodInfo);
		VirtActionInvoker1< Range_t755  >::Invoke(&Leaderboard_set_range_m3729_MethodInfo, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_userScope_m3727_MethodInfo, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_timeScope_m3731_MethodInfo, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t742 * L_1 = (Score_t742 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Score_t742_il2cpp_TypeInfo));
		Score__ctor_m3710(L_1, (String_t*) &_stringLiteral373, (((int64_t)0)), /*hidden argument*/&Score__ctor_m3710_MethodInfo);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t754*)((ScoreU5BU5D_t795*)SZArrayNew(ScoreU5BU5D_t795_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = (String_t*) &_stringLiteral373;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t104*)SZArrayNew(StringU5BU5D_t104_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern MethodInfo Leaderboard_ToString_m3718_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Leaderboard_ToString_m3718 (Leaderboard_t628 * __this, MethodInfo* method)
{
	static bool Leaderboard_ToString_m3718_init;
	if (!Leaderboard_ToString_m3718_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Leaderboard_ToString_m3718_init = true;
	}
	Range_t755  V_0 = {0};
	Range_t755  V_1 = {0};
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral374);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral374;
		ObjectU5BU5D_t219* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Leaderboard_get_id_m3724_MethodInfo, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t219* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral375);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral375;
		ObjectU5BU5D_t219* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t219* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral376);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral376;
		ObjectU5BU5D_t219* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&Boolean_t90_il2cpp_TypeInfo), &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t219* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral377);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral377;
		ObjectU5BU5D_t219* L_12 = L_11;
		Range_t755  L_13 = (Range_t755 )VirtFuncInvoker0< Range_t755  >::Invoke(&Leaderboard_get_range_m3728_MethodInfo, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t219* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral378);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)(String_t*) &_stringLiteral378;
		ObjectU5BU5D_t219* L_18 = L_17;
		Range_t755  L_19 = (Range_t755 )VirtFuncInvoker0< Range_t755  >::Invoke(&Leaderboard_get_range_m3728_MethodInfo, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t219* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral379);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral379;
		ObjectU5BU5D_t219* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(InitializedTypeInfo(&UInt32_t815_il2cpp_TypeInfo), &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t219* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral380);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)(String_t*) &_stringLiteral380;
		ObjectU5BU5D_t219* L_29 = L_28;
		IScoreU5BU5D_t754* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t219* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral381);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)(String_t*) &_stringLiteral381;
		ObjectU5BU5D_t219* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_userScope_m3726_MethodInfo, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(InitializedTypeInfo(&UserScope_t760_il2cpp_TypeInfo), &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t219* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral382);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)(String_t*) &_stringLiteral382;
		ObjectU5BU5D_t219* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_timeScope_m3730_MethodInfo, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(InitializedTypeInfo(&TimeScope_t761_il2cpp_TypeInfo), &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t219* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral383);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)(String_t*) &_stringLiteral383;
		ObjectU5BU5D_t219* L_44 = L_43;
		StringU5BU5D_t104* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_48 = String_Concat_m2171(NULL /*static, unused*/, L_44, /*hidden argument*/&String_Concat_m2171_MethodInfo);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern MethodInfo Leaderboard_SetLocalUserScore_m3719_MethodInfo;
extern "C" void Leaderboard_SetLocalUserScore_m3719 (Leaderboard_t628 * __this, Object_t * ___score, MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern MethodInfo Leaderboard_SetMaxRange_m3720_MethodInfo;
extern "C" void Leaderboard_SetMaxRange_m3720 (Leaderboard_t628 * __this, uint32_t ___maxRange, MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern MethodInfo Leaderboard_SetScores_m3721_MethodInfo;
extern "C" void Leaderboard_SetScores_m3721 (Leaderboard_t628 * __this, IScoreU5BU5D_t754* ___scores, MethodInfo* method)
{
	{
		IScoreU5BU5D_t754* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern MethodInfo Leaderboard_SetTitle_m3722_MethodInfo;
extern "C" void Leaderboard_SetTitle_m3722 (Leaderboard_t628 * __this, String_t* ___title, MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern MethodInfo Leaderboard_GetUserFilter_m3723_MethodInfo;
extern "C" StringU5BU5D_t104* Leaderboard_GetUserFilter_m3723 (Leaderboard_t628 * __this, MethodInfo* method)
{
	{
		StringU5BU5D_t104* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m3724 (Leaderboard_t628 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m3725 (Leaderboard_t628 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m3726 (Leaderboard_t628 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m3727 (Leaderboard_t628 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t755  Leaderboard_get_range_m3728 (Leaderboard_t628 * __this, MethodInfo* method)
{
	{
		Range_t755  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m3729 (Leaderboard_t628 * __this, Range_t755  ___value, MethodInfo* method)
{
	{
		Range_t755  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m3730 (Leaderboard_t628 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m3731 (Leaderboard_t628 * __this, int32_t ___value, MethodInfo* method)
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
extern TypeInfo HitInfo_t756_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern MethodInfo GameObject_SendMessage_m3458_MethodInfo;
extern MethodInfo Object_op_Equality_m243_MethodInfo;
extern MethodInfo Object_op_Inequality_m225_MethodInfo;


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern MethodInfo HitInfo_SendMessage_m3732_MethodInfo;
extern "C" void HitInfo_SendMessage_m3732 (HitInfo_t756 * __this, String_t* ___name, MethodInfo* method)
{
	{
		GameObject_t28 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m3458(L_0, L_1, NULL, 1, /*hidden argument*/&GameObject_SendMessage_m3458_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern MethodInfo HitInfo_Compare_m3733_MethodInfo;
extern "C" bool HitInfo_Compare_m3733 (Object_t * __this /* static, unused */, HitInfo_t756  ___lhs, HitInfo_t756  ___rhs, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t28 * L_0 = ((&___lhs)->___target_0);
		GameObject_t28 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m243(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_op_Equality_m243_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t29 * L_3 = ((&___lhs)->___camera_1);
		Camera_t29 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m243(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Object_op_Equality_m243_MethodInfo);
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
extern MethodInfo HitInfo_op_Implicit_m3734_MethodInfo;
extern "C" bool HitInfo_op_Implicit_m3734 (Object_t * __this /* static, unused */, HitInfo_t756  ___exists, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t28 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m225(NULL /*static, unused*/, L_0, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t29 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m225(NULL /*static, unused*/, L_2, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
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
extern TypeInfo SendMouseEvents_t758_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
extern TypeInfo HitInfoU5BU5D_t757_il2cpp_TypeInfo;
extern TypeInfo Input_t224_il2cpp_TypeInfo;
extern TypeInfo CameraU5BU5D_t689_il2cpp_TypeInfo;
extern TypeInfo Camera_t29_il2cpp_TypeInfo;
extern TypeInfo Vector3_t31_il2cpp_TypeInfo;
extern TypeInfo Mathf_t94_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern Il2CppType HitInfoU5BU5D_t757_0_0_0;
extern Il2CppType CameraU5BU5D_t689_0_0_0;
extern MethodInfo Input_get_mousePosition_m809_MethodInfo;
extern MethodInfo Camera_get_allCamerasCount_m3387_MethodInfo;
extern MethodInfo Camera_GetAllCameras_m3388_MethodInfo;
extern MethodInfo Camera_get_targetTexture_m3379_MethodInfo;
extern MethodInfo Camera_get_pixelRect_m3378_MethodInfo;
extern MethodInfo Rect_Contains_m839_MethodInfo;
extern MethodInfo Object_op_Implicit_m211_MethodInfo;
extern MethodInfo GUILayer_HitTest_m2993_MethodInfo;
extern MethodInfo Component_get_gameObject_m264_MethodInfo;
extern MethodInfo Camera_get_eventMask_m3376_MethodInfo;
extern MethodInfo Camera_ScreenPointToRay_m810_MethodInfo;
extern MethodInfo Ray_get_direction_m2238_MethodInfo;
extern MethodInfo Mathf_Approximately_m2215_MethodInfo;
extern MethodInfo Camera_get_farClipPlane_m343_MethodInfo;
extern MethodInfo Camera_get_nearClipPlane_m339_MethodInfo;
extern MethodInfo Mathf_Abs_m367_MethodInfo;
extern MethodInfo Camera_get_cullingMask_m2248_MethodInfo;
extern MethodInfo Camera_RaycastTry_m3392_MethodInfo;
extern MethodInfo Camera_get_clearFlags_m3382_MethodInfo;
extern MethodInfo Camera_RaycastTry2D_m3394_MethodInfo;
extern MethodInfo SendMouseEvents_SendEvents_m3737_MethodInfo;
extern MethodInfo Input_GetMouseButtonDown_m838_MethodInfo;
extern MethodInfo Input_GetMouseButton_m811_MethodInfo;
struct Component_t95;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.GUILayer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_26.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
struct Component_t95;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m245_gshared (Component_t95 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m245(__this, method) (( Object_t * (*) (Component_t95 *, MethodInfo*))Component_GetComponent_TisObject_t_m245_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t641_m3909(__this, method) (( GUILayer_t641 * (*) (Component_t95 *, MethodInfo*))Component_GetComponent_TisObject_t_m245_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisGUILayer_t641_m3909_GenericMethod;


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern MethodInfo SendMouseEvents__cctor_m3735_MethodInfo;
extern TypeInfo* HitInfoU5BU5D_t757_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m3735 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool SendMouseEvents__cctor_m3735_init;
	if (!SendMouseEvents__cctor_m3735_init)
	{
		HitInfoU5BU5D_t757_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&HitInfoU5BU5D_t757_0_0_0);
		SendMouseEvents__cctor_m3735_init = true;
	}
	HitInfo_t756  V_0 = {0};
	HitInfo_t756  V_1 = {0};
	HitInfo_t756  V_2 = {0};
	HitInfo_t756  V_3 = {0};
	HitInfo_t756  V_4 = {0};
	HitInfo_t756  V_5 = {0};
	HitInfo_t756  V_6 = {0};
	HitInfo_t756  V_7 = {0};
	HitInfo_t756  V_8 = {0};
	{
		HitInfoU5BU5D_t757* L_0 = ((HitInfoU5BU5D_t757*)SZArrayNew(HitInfoU5BU5D_t757_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t756_il2cpp_TypeInfo), (&V_0));
		HitInfo_t756  L_1 = V_0;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t757* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t756_il2cpp_TypeInfo), (&V_1));
		HitInfo_t756  L_3 = V_1;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t757* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t756_il2cpp_TypeInfo), (&V_2));
		HitInfo_t756  L_5 = V_2;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t757* L_6 = ((HitInfoU5BU5D_t757*)SZArrayNew(HitInfoU5BU5D_t757_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t756_il2cpp_TypeInfo), (&V_3));
		HitInfo_t756  L_7 = V_3;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t757* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t756_il2cpp_TypeInfo), (&V_4));
		HitInfo_t756  L_9 = V_4;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t757* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t756_il2cpp_TypeInfo), (&V_5));
		HitInfo_t756  L_11 = V_5;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t757* L_12 = ((HitInfoU5BU5D_t757*)SZArrayNew(HitInfoU5BU5D_t757_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t756_il2cpp_TypeInfo), (&V_6));
		HitInfo_t756  L_13 = V_6;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t757* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t756_il2cpp_TypeInfo), (&V_7));
		HitInfo_t756  L_15 = V_7;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t757* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t756_il2cpp_TypeInfo), (&V_8));
		HitInfo_t756  L_17 = V_8;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern MethodInfo SendMouseEvents_DoSendMouseEvents_m3736_MethodInfo;
extern TypeInfo* CameraU5BU5D_t689_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponent_TisGUILayer_t641_m3909_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m3736 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, MethodInfo* method)
{
	static bool SendMouseEvents_DoSendMouseEvents_m3736_init;
	if (!SendMouseEvents_DoSendMouseEvents_m3736_init)
	{
		CameraU5BU5D_t689_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CameraU5BU5D_t689_0_0_0);
		Component_GetComponent_TisGUILayer_t641_m3909_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisGUILayer_t641_m3909_GenericMethod);
		SendMouseEvents_DoSendMouseEvents_m3736_init = true;
	}
	Vector3_t31  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t29 * V_3 = {0};
	CameraU5BU5D_t689* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t213  V_6 = {0};
	GUILayer_t641 * V_7 = {0};
	GUIElement_t640 * V_8 = {0};
	Ray_t226  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t28 * V_12 = {0};
	GameObject_t28 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t756  V_15 = {0};
	Vector3_t31  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t224_il2cpp_TypeInfo));
		Vector3_t31  L_0 = Input_get_mousePosition_m809(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m809_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m3387(NULL /*static, unused*/, /*hidden argument*/&Camera_get_allCamerasCount_m3387_MethodInfo);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		CameraU5BU5D_t689* L_2 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		CameraU5BU5D_t689* L_3 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t689*)SZArrayNew(CameraU5BU5D_t689_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		CameraU5BU5D_t689* L_6 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m3388(NULL /*static, unused*/, L_6, /*hidden argument*/&Camera_GetAllCameras_m3388_MethodInfo);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_7 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (InitializedTypeInfo(&HitInfo_t756_il2cpp_TypeInfo), (&V_15));
		HitInfo_t756  L_9 = V_15;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_12 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		CameraU5BU5D_t689* L_14 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t689* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t29 **)(Camera_t29 **)SZArrayLdElema(L_15, L_17));
		Camera_t29 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m243(NULL /*static, unused*/, L_18, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Equality_m243_MethodInfo);
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
		Camera_t29 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t7 * L_22 = Camera_get_targetTexture_m3379(L_21, /*hidden argument*/&Camera_get_targetTexture_m3379_MethodInfo);
		bool L_23 = Object_op_Inequality_m225(NULL /*static, unused*/, L_22, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
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
		Camera_t29 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t213  L_25 = Camera_get_pixelRect_m3378(L_24, /*hidden argument*/&Camera_get_pixelRect_m3378_MethodInfo);
		V_6 = L_25;
		Vector3_t31  L_26 = V_0;
		bool L_27 = Rect_Contains_m839((&V_6), L_26, /*hidden argument*/&Rect_Contains_m839_MethodInfo);
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
		Camera_t29 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t641 * L_29 = Component_GetComponent_TisGUILayer_t641_m3909(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t641_m3909_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t641 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m211(NULL /*static, unused*/, L_30, /*hidden argument*/&Object_op_Implicit_m211_MethodInfo);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t641 * L_32 = V_7;
		Vector3_t31  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t640 * L_34 = GUILayer_HitTest_m2993(L_32, L_33, /*hidden argument*/&GUILayer_HitTest_m2993_MethodInfo);
		V_8 = L_34;
		GUIElement_t640 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m211(NULL /*static, unused*/, L_35, /*hidden argument*/&Object_op_Implicit_m211_MethodInfo);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_37 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t640 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t28 * L_39 = Component_get_gameObject_m264(L_38, /*hidden argument*/&Component_get_gameObject_m264_MethodInfo);
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t757* L_40 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t29 * L_41 = V_3;
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_42 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t28 *)NULL;
		HitInfoU5BU5D_t757* L_43 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t29 *)NULL;
	}

IL_0141:
	{
		Camera_t29 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m3376(L_44, /*hidden argument*/&Camera_get_eventMask_m3376_MethodInfo);
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
		Camera_t29 * L_46 = V_3;
		Vector3_t31  L_47 = V_0;
		NullCheck(L_46);
		Ray_t226  L_48 = Camera_ScreenPointToRay_m810(L_46, L_47, /*hidden argument*/&Camera_ScreenPointToRay_m810_MethodInfo);
		V_9 = L_48;
		Vector3_t31  L_49 = Ray_get_direction_m2238((&V_9), /*hidden argument*/&Ray_get_direction_m2238_MethodInfo);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		bool L_52 = Mathf_Approximately_m2215(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/&Mathf_Approximately_m2215_MethodInfo);
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
		Camera_t29 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m343(L_53, /*hidden argument*/&Camera_get_farClipPlane_m343_MethodInfo);
		Camera_t29 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m339(L_55, /*hidden argument*/&Camera_get_nearClipPlane_m339_MethodInfo);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t29 * L_59 = V_3;
		Ray_t226  L_60 = V_9;
		float L_61 = V_11;
		Camera_t29 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m2248(L_62, /*hidden argument*/&Camera_get_cullingMask_m2248_MethodInfo);
		Camera_t29 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m3376(L_64, /*hidden argument*/&Camera_get_eventMask_m3376_MethodInfo);
		NullCheck(L_59);
		GameObject_t28 * L_66 = Camera_RaycastTry_m3392(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/&Camera_RaycastTry_m3392_MethodInfo);
		V_12 = L_66;
		GameObject_t28 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m225(NULL /*static, unused*/, L_67, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_69 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t28 * L_70 = V_12;
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t757* L_71 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t29 * L_72 = V_3;
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t29 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m3382(L_73, /*hidden argument*/&Camera_get_clearFlags_m3382_MethodInfo);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t29 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m3382(L_75, /*hidden argument*/&Camera_get_clearFlags_m3382_MethodInfo);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_77 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t28 *)NULL;
		HitInfoU5BU5D_t757* L_78 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t29 *)NULL;
	}

IL_0226:
	{
		Camera_t29 * L_79 = V_3;
		Ray_t226  L_80 = V_9;
		float L_81 = V_11;
		Camera_t29 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m2248(L_82, /*hidden argument*/&Camera_get_cullingMask_m2248_MethodInfo);
		Camera_t29 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m3376(L_84, /*hidden argument*/&Camera_get_eventMask_m3376_MethodInfo);
		NullCheck(L_79);
		GameObject_t28 * L_86 = Camera_RaycastTry2D_m3394(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/&Camera_RaycastTry2D_m3394_MethodInfo);
		V_13 = L_86;
		GameObject_t28 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m225(NULL /*static, unused*/, L_87, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_89 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t28 * L_90 = V_13;
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t757* L_91 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t29 * L_92 = V_3;
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t29 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m3382(L_93, /*hidden argument*/&Camera_get_clearFlags_m3382_MethodInfo);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t29 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m3382(L_95, /*hidden argument*/&Camera_get_clearFlags_m3382_MethodInfo);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_97 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t28 *)NULL;
		HitInfoU5BU5D_t757* L_98 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t29 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t689* L_101 = V_4;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_103 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m3737(NULL /*static, unused*/, L_102, (*(HitInfo_t756 *)((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/&SendMouseEvents_SendEvents_m3737_MethodInfo);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_107 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
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
extern "C" void SendMouseEvents_SendEvents_m3737 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t756  ___hit, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t756  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t224_il2cpp_TypeInfo));
		bool L_0 = Input_GetMouseButtonDown_m838(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m838_MethodInfo);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m811(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m811_MethodInfo);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t756  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m3734(NULL /*static, unused*/, L_3, /*hidden argument*/&HitInfo_op_Implicit_m3734_MethodInfo);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_5 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t756  L_7 = ___hit;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t757* L_8 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m3732(((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_8, L_9)), (String_t*) &_stringLiteral384, /*hidden argument*/&HitInfo_SendMessage_m3732_MethodInfo);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_11 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m3734(NULL /*static, unused*/, (*(HitInfo_t756 *)((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/&HitInfo_op_Implicit_m3734_MethodInfo);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t756  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_15 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m3733(NULL /*static, unused*/, L_14, (*(HitInfo_t756 *)((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/&HitInfo_Compare_m3733_MethodInfo);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_18 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m3732(((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_18, L_19)), (String_t*) &_stringLiteral385, /*hidden argument*/&HitInfo_SendMessage_m3732_MethodInfo);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_20 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m3732(((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_20, L_21)), (String_t*) &_stringLiteral386, /*hidden argument*/&HitInfo_SendMessage_m3732_MethodInfo);
		HitInfoU5BU5D_t757* L_22 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (InitializedTypeInfo(&HitInfo_t756_il2cpp_TypeInfo), (&V_2));
		HitInfo_t756  L_24 = V_2;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_25 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m3734(NULL /*static, unused*/, (*(HitInfo_t756 *)((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/&HitInfo_op_Implicit_m3734_MethodInfo);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_28 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m3732(((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_28, L_29)), (String_t*) &_stringLiteral387, /*hidden argument*/&HitInfo_SendMessage_m3732_MethodInfo);
	}

IL_00fc:
	{
		HitInfo_t756  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_31 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m3733(NULL /*static, unused*/, L_30, (*(HitInfo_t756 *)((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/&HitInfo_Compare_m3733_MethodInfo);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t756  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m3734(NULL /*static, unused*/, L_34, /*hidden argument*/&HitInfo_op_Implicit_m3734_MethodInfo);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m3732((&___hit), (String_t*) &_stringLiteral388, /*hidden argument*/&HitInfo_SendMessage_m3732_MethodInfo);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_36 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m3734(NULL /*static, unused*/, (*(HitInfo_t756 *)((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/&HitInfo_op_Implicit_m3734_MethodInfo);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_39 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m3732(((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_39, L_40)), (String_t*) &_stringLiteral389, /*hidden argument*/&HitInfo_SendMessage_m3732_MethodInfo);
	}

IL_0162:
	{
		HitInfo_t756  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m3734(NULL /*static, unused*/, L_41, /*hidden argument*/&HitInfo_op_Implicit_m3734_MethodInfo);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m3732((&___hit), (String_t*) &_stringLiteral390, /*hidden argument*/&HitInfo_SendMessage_m3732_MethodInfo);
		HitInfo_SendMessage_m3732((&___hit), (String_t*) &_stringLiteral388, /*hidden argument*/&HitInfo_SendMessage_m3732_MethodInfo);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo));
		HitInfoU5BU5D_t757* L_43 = ((SendMouseEvents_t758_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t758_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t756  L_45 = ___hit;
		*((HitInfo_t756 *)(HitInfo_t756 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m3738 (Range_t755 * __this, int32_t ___fromValue, int32_t ___valueCount, MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyAttribute_t762_il2cpp_TypeInfo;
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3847_MethodInfo;


// System.Void UnityEngine.PropertyAttribute::.ctor()
extern MethodInfo PropertyAttribute__ctor_m3739_MethodInfo;
extern "C" void PropertyAttribute__ctor_m3739 (PropertyAttribute_t762 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TooltipAttribute_t117_il2cpp_TypeInfo;
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"



// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern MethodInfo TooltipAttribute__ctor_m439_MethodInfo;
extern "C" void TooltipAttribute__ctor_m439 (TooltipAttribute_t117 * __this, String_t* ___tooltip, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3739(__this, /*hidden argument*/&PropertyAttribute__ctor_m3739_MethodInfo);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpaceAttribute_t559_il2cpp_TypeInfo;
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"



// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern MethodInfo SpaceAttribute__ctor_m2743_MethodInfo;
extern "C" void SpaceAttribute__ctor_m2743 (SpaceAttribute_t559 * __this, float ___height, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3739(__this, /*hidden argument*/&PropertyAttribute__ctor_m3739_MethodInfo);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RangeAttribute_t114_il2cpp_TypeInfo;
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"



// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern MethodInfo RangeAttribute__ctor_m437_MethodInfo;
extern "C" void RangeAttribute__ctor_m437 (RangeAttribute_t114 * __this, float ___min, float ___max, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3739(__this, /*hidden argument*/&PropertyAttribute__ctor_m3739_MethodInfo);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// UnityEngine.MultilineAttribute
#include "UnityEngine_UnityEngine_MultilineAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MultilineAttribute_t242_il2cpp_TypeInfo;
// UnityEngine.MultilineAttribute
#include "UnityEngine_UnityEngine_MultilineAttributeMethodDeclarations.h"



// System.Void UnityEngine.MultilineAttribute::.ctor()
extern MethodInfo MultilineAttribute__ctor_m913_MethodInfo;
extern "C" void MultilineAttribute__ctor_m913 (MultilineAttribute_t242 * __this, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3739(__this, /*hidden argument*/&PropertyAttribute__ctor_m3739_MethodInfo);
		__this->___lines_0 = 3;
		return;
	}
}
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAreaAttribute_t564_il2cpp_TypeInfo;
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"



// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern MethodInfo TextAreaAttribute__ctor_m2749_MethodInfo;
extern "C" void TextAreaAttribute__ctor_m2749 (TextAreaAttribute_t564 * __this, int32_t ___minLines, int32_t ___maxLines, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m3739(__this, /*hidden argument*/&PropertyAttribute__ctor_m3739_MethodInfo);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SelectionBaseAttribute_t560_il2cpp_TypeInfo;
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"



// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern MethodInfo SelectionBaseAttribute__ctor_m2746_MethodInfo;
extern "C" void SelectionBaseAttribute__ctor_m2746 (SelectionBaseAttribute_t560 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SliderState_t763_il2cpp_TypeInfo;
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern MethodInfo SliderState__ctor_m3740_MethodInfo;
extern "C" void SliderState__ctor_m3740 (SliderState_t763 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StackTraceUtility_t764_il2cpp_TypeInfo;
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
extern TypeInfo StackTrace_t765_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t514_il2cpp_TypeInfo;
extern TypeInfo Exception_t234_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t472_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t387_il2cpp_TypeInfo;
extern TypeInfo Char_t237_il2cpp_TypeInfo;
extern TypeInfo StackFrame_t816_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t817_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t818_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t819_il2cpp_TypeInfo;
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern Il2CppType CharU5BU5D_t387_0_0_0;
extern MethodInfo StackTrace__ctor_m3910_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractFormattedStackTrace_m3749_MethodInfo;
extern MethodInfo String_ToString_m3911_MethodInfo;
extern MethodInfo String_StartsWith_m3912_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractStringFromExceptionInternal_m3747_MethodInfo;
extern MethodInfo String_Concat_m296_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2604_MethodInfo;
extern MethodInfo Exception_get_StackTrace_m3913_MethodInfo;
extern MethodInfo String_get_Length_m893_MethodInfo;
extern MethodInfo StringBuilder__ctor_m3914_MethodInfo;
extern MethodInfo Exception_GetType_m3915_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m3916_MethodInfo;
extern MethodInfo Exception_get_Message_m2394_MethodInfo;
extern MethodInfo String_Trim_m3917_MethodInfo;
extern MethodInfo String_Concat_m385_MethodInfo;
extern MethodInfo Exception_get_InnerException_m3862_MethodInfo;
extern MethodInfo String_Concat_m3918_MethodInfo;
extern MethodInfo StringBuilder_Append_m3919_MethodInfo;
extern MethodInfo StringBuilder_ToString_m2112_MethodInfo;
extern MethodInfo String_Split_m3920_MethodInfo;
extern MethodInfo String_get_Chars_m892_MethodInfo;
extern MethodInfo StackTraceUtility_IsSystemStacktraceType_m3745_MethodInfo;
extern MethodInfo String_IndexOf_m3921_MethodInfo;
extern MethodInfo String_Substring_m2428_MethodInfo;
extern MethodInfo String_EndsWith_m3922_MethodInfo;
extern MethodInfo String_Remove_m2452_MethodInfo;
extern MethodInfo String_IndexOf_m3923_MethodInfo;
extern MethodInfo String_Replace_m3924_MethodInfo;
extern MethodInfo String_Replace_m3925_MethodInfo;
extern MethodInfo String_LastIndexOf_m3926_MethodInfo;
extern MethodInfo String_Insert_m2454_MethodInfo;
extern MethodInfo StackTrace_GetFrame_m3927_MethodInfo;
extern MethodInfo StackFrame_GetMethod_m3928_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m3929_MethodInfo;
extern MethodInfo Type_get_Namespace_m3930_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m3931_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m3932_MethodInfo;
extern MethodInfo StackFrame_GetFileName_m3933_MethodInfo;
extern MethodInfo String_op_Equality_m880_MethodInfo;
extern MethodInfo StackFrame_GetFileLineNumber_m3934_MethodInfo;
extern MethodInfo Int32_ToString_m3935_MethodInfo;
extern MethodInfo StackTrace_get_FrameCount_m3936_MethodInfo;


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern MethodInfo StackTraceUtility__ctor_m3741_MethodInfo;
extern "C" void StackTraceUtility__ctor_m3741 (StackTraceUtility_t764 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern MethodInfo StackTraceUtility__cctor_m3742_MethodInfo;
extern "C" void StackTraceUtility__cctor_m3742 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		((StackTraceUtility_t764_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern MethodInfo StackTraceUtility_SetProjectFolder_m3743_MethodInfo;
extern "C" void StackTraceUtility_SetProjectFolder_m3743 (Object_t * __this /* static, unused */, String_t* ___folder, MethodInfo* method)
{
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo));
		((StackTraceUtility_t764_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern MethodInfo StackTraceUtility_ExtractStackTrace_m3744_MethodInfo;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m3744 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	StackTrace_t765 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t765 * L_0 = (StackTrace_t765 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t765_il2cpp_TypeInfo));
		StackTrace__ctor_m3910(L_0, 1, 1, /*hidden argument*/&StackTrace__ctor_m3910_MethodInfo);
		V_0 = L_0;
		StackTrace_t765 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo));
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m3749(NULL /*static, unused*/, L_1, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m3749_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m3911_MethodInfo, L_2);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m3745 (Object_t * __this /* static, unused */, Object_t * ___name, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m3912(L_1, (String_t*) &_stringLiteral391, /*hidden argument*/&String_StartsWith_m3912_MethodInfo);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m3912(L_3, (String_t*) &_stringLiteral392, /*hidden argument*/&String_StartsWith_m3912_MethodInfo);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m3912(L_5, (String_t*) &_stringLiteral393, /*hidden argument*/&String_StartsWith_m3912_MethodInfo);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m3912(L_7, (String_t*) &_stringLiteral394, /*hidden argument*/&String_StartsWith_m3912_MethodInfo);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m3912(L_9, (String_t*) &_stringLiteral395, /*hidden argument*/&String_StartsWith_m3912_MethodInfo);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m3912(L_11, (String_t*) &_stringLiteral396, /*hidden argument*/&String_StartsWith_m3912_MethodInfo);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern MethodInfo StackTraceUtility_ExtractStringFromException_m3746_MethodInfo;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m3746 (Object_t * __this /* static, unused */, Object_t * ___exception, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo));
		StackTraceUtility_ExtractStringFromExceptionInternal_m3747(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/&StackTraceUtility_ExtractStringFromExceptionInternal_m3747_MethodInfo);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m296(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral299, L_4, /*hidden argument*/&String_Concat_m296_MethodInfo);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m3747 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, MethodInfo* method)
{
	Exception_t234 * V_0 = {0};
	StringBuilder_t472 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t765 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t514 * L_1 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_1, (String_t*) &_stringLiteral397, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t234 *)IsInst(L_2, InitializedTypeInfo(&Exception_t234_il2cpp_TypeInfo)));
		Exception_t234 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t514 * L_4 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_4, (String_t*) &_stringLiteral398, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Exception_t234 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3913_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t234 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3913_MethodInfo, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m893(L_8, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t472 * L_10 = (StringBuilder_t472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t472_il2cpp_TypeInfo));
		StringBuilder__ctor_m3914(L_10, G_B7_0, /*hidden argument*/&StringBuilder__ctor_m3914_MethodInfo);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m893(L_14, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t234 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3913_MethodInfo, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t234 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3913_MethodInfo, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m296(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral299, L_20, /*hidden argument*/&String_Concat_m296_MethodInfo);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t234 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Exception_GetType_m3915_MethodInfo, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3916_MethodInfo, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_25 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t234 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m2394_MethodInfo, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t234 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m2394_MethodInfo, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m3917(L_30, /*hidden argument*/&String_Trim_m3917_MethodInfo);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m893(L_31, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_34 = String_Concat_m385(NULL /*static, unused*/, L_33, (String_t*) &_stringLiteral399, /*hidden argument*/&String_Concat_m385_MethodInfo);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m385(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/&String_Concat_m385_MethodInfo);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t234 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t234 * L_41 = (Exception_t234 *)VirtFuncInvoker0< Exception_t234 * >::Invoke(&Exception_get_InnerException_m3862_MethodInfo, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_44 = String_Concat_m3918(NULL /*static, unused*/, (String_t*) &_stringLiteral400, L_42, (String_t*) &_stringLiteral299, L_43, /*hidden argument*/&String_Concat_m3918_MethodInfo);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t234 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t234 * L_46 = (Exception_t234 *)VirtFuncInvoker0< Exception_t234 * >::Invoke(&Exception_get_InnerException_m3862_MethodInfo, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t234 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t472 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_50 = String_Concat_m385(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral299, /*hidden argument*/&String_Concat_m385_MethodInfo);
		NullCheck(L_48);
		StringBuilder_Append_m3919(L_48, L_50, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		StackTrace_t765 * L_51 = (StackTrace_t765 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t765_il2cpp_TypeInfo));
		StackTrace__ctor_m3910(L_51, 1, 1, /*hidden argument*/&StackTrace__ctor_m3910_MethodInfo);
		V_5 = L_51;
		StringBuilder_t472 * L_52 = V_1;
		StackTrace_t765 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo));
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m3749(NULL /*static, unused*/, L_53, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m3749_MethodInfo);
		NullCheck(L_52);
		StringBuilder_Append_m3919(L_52, L_54, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t472 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2112_MethodInfo, L_56);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern MethodInfo StackTraceUtility_PostprocessStacktrace_m3748_MethodInfo;
extern TypeInfo* CharU5BU5D_t387_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m3748 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, MethodInfo* method)
{
	static bool StackTraceUtility_PostprocessStacktrace_m3748_init;
	if (!StackTraceUtility_PostprocessStacktrace_m3748_init)
	{
		CharU5BU5D_t387_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t387_0_0_0);
		StackTraceUtility_PostprocessStacktrace_m3748_init = true;
	}
	StringU5BU5D_t104* V_0 = {0};
	StringBuilder_t472 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t387* L_3 = ((CharU5BU5D_t387*)SZArrayNew(CharU5BU5D_t387_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t104* L_4 = String_Split_m3920(L_2, L_3, /*hidden argument*/&String_Split_m3920_MethodInfo);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m893(L_5, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		StringBuilder_t472 * L_7 = (StringBuilder_t472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t472_il2cpp_TypeInfo));
		StringBuilder__ctor_m3914(L_7, L_6, /*hidden argument*/&StringBuilder__ctor_m3914_MethodInfo);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t104* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t104* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)));
		String_t* L_13 = String_Trim_m3917((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)), /*hidden argument*/&String_Trim_m3917_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9)) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t104* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t104* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m893(L_20, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m892(L_22, 0, /*hidden argument*/&String_get_Chars_m892_MethodInfo);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m3912(L_24, (String_t*) &_stringLiteral401, /*hidden argument*/&String_StartsWith_m3912_MethodInfo);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m3912(L_27, (String_t*) &_stringLiteral402, /*hidden argument*/&String_StartsWith_m3912_MethodInfo);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t104* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo));
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m3745(NULL /*static, unused*/, L_32, /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m3745_MethodInfo);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t104* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo));
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m3745(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36)), /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m3745_MethodInfo);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m3921(L_38, (String_t*) &_stringLiteral403, /*hidden argument*/&String_IndexOf_m3921_MethodInfo);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m2428(L_41, 0, L_42, /*hidden argument*/&String_Substring_m2428_MethodInfo);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m3921(L_44, (String_t*) &_stringLiteral404, /*hidden argument*/&String_IndexOf_m3921_MethodInfo);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m3921(L_46, (String_t*) &_stringLiteral405, /*hidden argument*/&String_IndexOf_m3921_MethodInfo);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m3921(L_48, (String_t*) &_stringLiteral406, /*hidden argument*/&String_IndexOf_m3921_MethodInfo);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m3912(L_51, (String_t*) &_stringLiteral407, /*hidden argument*/&String_StartsWith_m3912_MethodInfo);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m3922(L_53, (String_t*) &_stringLiteral408, /*hidden argument*/&String_EndsWith_m3922_MethodInfo);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m3912(L_55, (String_t*) &_stringLiteral409, /*hidden argument*/&String_StartsWith_m3912_MethodInfo);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m2452(L_57, 0, 3, /*hidden argument*/&String_Remove_m2452_MethodInfo);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m3921(L_59, (String_t*) &_stringLiteral410, /*hidden argument*/&String_IndexOf_m3921_MethodInfo);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m3923(L_62, (String_t*) &_stringLiteral408, L_63, /*hidden argument*/&String_IndexOf_m3923_MethodInfo);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m2452(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/&String_Remove_m2452_MethodInfo);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_74 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m3924(L_73, (String_t*) &_stringLiteral411, L_74, /*hidden argument*/&String_Replace_m3924_MethodInfo);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo));
		String_t* L_77 = ((StackTraceUtility_t764_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m3924(L_76, L_77, L_78, /*hidden argument*/&String_Replace_m3924_MethodInfo);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m3925(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/&String_Replace_m3925_MethodInfo);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m3926(L_82, (String_t*) &_stringLiteral412, /*hidden argument*/&String_LastIndexOf_m3926_MethodInfo);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m2452(L_85, L_86, 5, /*hidden argument*/&String_Remove_m2452_MethodInfo);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m2454(L_88, L_89, (String_t*) &_stringLiteral413, /*hidden argument*/&String_Insert_m2454_MethodInfo);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m893(L_92, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m2454(L_91, L_93, (String_t*) &_stringLiteral264, /*hidden argument*/&String_Insert_m2454_MethodInfo);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t472 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_97 = String_Concat_m385(NULL /*static, unused*/, L_96, (String_t*) &_stringLiteral299, /*hidden argument*/&String_Concat_m385_MethodInfo);
		NullCheck(L_95);
		StringBuilder_Append_m3919(L_95, L_97, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t104* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t472 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2112_MethodInfo, L_101);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m3749 (Object_t * __this /* static, unused */, StackTrace_t765 * ___stackTrace, MethodInfo* method)
{
	StringBuilder_t472 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t816 * V_2 = {0};
	MethodBase_t817 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t818* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t472 * L_0 = (StringBuilder_t472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t472_il2cpp_TypeInfo));
		StringBuilder__ctor_m3914(L_0, ((int32_t)255), /*hidden argument*/&StringBuilder__ctor_m3914_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t765 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t816 * L_3 = (StackFrame_t816 *)VirtFuncInvoker1< StackFrame_t816 *, int32_t >::Invoke(&StackTrace_GetFrame_m3927_MethodInfo, L_1, L_2);
		V_2 = L_3;
		StackFrame_t816 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t817 * L_5 = (MethodBase_t817 *)VirtFuncInvoker0< MethodBase_t817 * >::Invoke(&StackFrame_GetMethod_m3928_MethodInfo, L_4);
		V_3 = L_5;
		MethodBase_t817 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t817 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3929_MethodInfo, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m3930_MethodInfo, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m893(L_13, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t472 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m3919(L_15, L_16, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		StringBuilder_t472 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3919(L_17, (String_t*) &_stringLiteral256, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
	}

IL_0071:
	{
		StringBuilder_t472 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3916_MethodInfo, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m3919(L_18, L_20, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		StringBuilder_t472 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3919(L_21, (String_t*) &_stringLiteral414, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		StringBuilder_t472 * L_22 = V_0;
		MethodBase_t817 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3916_MethodInfo, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m3919(L_22, L_24, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		StringBuilder_t472 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m3919(L_25, (String_t*) &_stringLiteral415, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		V_6 = 0;
		MethodBase_t817 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t818* L_27 = (ParameterInfoU5BU5D_t818*)VirtFuncInvoker0< ParameterInfoU5BU5D_t818* >::Invoke(&MethodBase_GetParameters_m3931_MethodInfo, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t472 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m3919(L_29, (String_t*) &_stringLiteral416, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t472 * L_30 = V_0;
		ParameterInfoU5BU5D_t818* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t819 **)(ParameterInfo_t819 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3932_MethodInfo, (*(ParameterInfo_t819 **)(ParameterInfo_t819 **)SZArrayLdElema(L_31, L_33)));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3916_MethodInfo, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m3919(L_30, L_35, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t818* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t472 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m3919(L_39, (String_t*) &_stringLiteral264, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		StackFrame_t816 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StackFrame_GetFileName_m3933_MethodInfo, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3916_MethodInfo, L_43);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_45 = String_op_Equality_m880(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral417, /*hidden argument*/&String_op_Equality_m880_MethodInfo);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m3930_MethodInfo, L_46);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_48 = String_op_Equality_m880(NULL /*static, unused*/, L_47, (String_t*) &_stringLiteral418, /*hidden argument*/&String_op_Equality_m880_MethodInfo);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t472 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m3919(L_49, (String_t*) &_stringLiteral413, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo));
		String_t* L_51 = ((StackTraceUtility_t764_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m3912(L_50, L_51, /*hidden argument*/&String_StartsWith_m3912_MethodInfo);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo));
		String_t* L_54 = ((StackTraceUtility_t764_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m893(L_54, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m893(L_56, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		String_t* L_58 = ((StackTraceUtility_t764_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t764_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m893(L_58, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m2428(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/&String_Substring_m2428_MethodInfo);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t472 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m3919(L_61, L_62, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		StringBuilder_t472 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m3919(L_63, (String_t*) &_stringLiteral414, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		StringBuilder_t472 * L_64 = V_0;
		StackFrame_t816 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackFrame_GetFileLineNumber_m3934_MethodInfo, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m3935((&V_10), /*hidden argument*/&Int32_ToString_m3935_MethodInfo);
		NullCheck(L_64);
		StringBuilder_Append_m3919(L_64, L_67, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
		StringBuilder_t472 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m3919(L_68, (String_t*) &_stringLiteral264, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
	}

IL_01b9:
	{
		StringBuilder_t472 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m3919(L_69, (String_t*) &_stringLiteral299, /*hidden argument*/&StringBuilder_Append_m3919_MethodInfo);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t765 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackTrace_get_FrameCount_m3936_MethodInfo, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t472 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2112_MethodInfo, L_74);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityException_t498_il2cpp_TypeInfo;
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern MethodInfo Exception__ctor_m3848_MethodInfo;
extern MethodInfo Exception_set_HResult_m3937_MethodInfo;
extern MethodInfo Exception__ctor_m3938_MethodInfo;
extern MethodInfo Exception__ctor_m3939_MethodInfo;


// System.Void UnityEngine.UnityException::.ctor()
extern MethodInfo UnityException__ctor_m3750_MethodInfo;
extern "C" void UnityException__ctor_m3750 (UnityException_t498 * __this, MethodInfo* method)
{
	{
		Exception__ctor_m3848(__this, (String_t*) &_stringLiteral419, /*hidden argument*/&Exception__ctor_m3848_MethodInfo);
		Exception_set_HResult_m3937(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m3937_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern MethodInfo UnityException__ctor_m3751_MethodInfo;
extern "C" void UnityException__ctor_m3751 (UnityException_t498 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m3848(__this, L_0, /*hidden argument*/&Exception__ctor_m3848_MethodInfo);
		Exception_set_HResult_m3937(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m3937_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern MethodInfo UnityException__ctor_m3752_MethodInfo;
extern "C" void UnityException__ctor_m3752 (UnityException_t498 * __this, String_t* ___message, Exception_t234 * ___innerException, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t234 * L_1 = ___innerException;
		Exception__ctor_m3938(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m3938_MethodInfo);
		Exception_set_HResult_m3937(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m3937_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnityException__ctor_m3753_MethodInfo;
extern "C" void UnityException__ctor_m3753 (UnityException_t498 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t766 * L_0 = ___info;
		StreamingContext_t767  L_1 = ___context;
		Exception__ctor_m3939(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m3939_MethodInfo);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SharedBetweenAnimatorsAttribute_t768_il2cpp_TypeInfo;
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern MethodInfo SharedBetweenAnimatorsAttribute__ctor_m3754_MethodInfo;
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m3754 (SharedBetweenAnimatorsAttribute_t768 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StateMachineBehaviour_t769_il2cpp_TypeInfo;
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern MethodInfo ScriptableObject__ctor_m2839_MethodInfo;


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern MethodInfo StateMachineBehaviour__ctor_m3755_MethodInfo;
extern "C" void StateMachineBehaviour__ctor_m3755 (StateMachineBehaviour_t769 * __this, MethodInfo* method)
{
	{
		ScriptableObject__ctor_m2839(__this, /*hidden argument*/&ScriptableObject__ctor_m2839_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateEnter_m3756_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateEnter_m3756 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, AnimatorStateInfo_t714  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateUpdate_m3757_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateUpdate_m3757 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, AnimatorStateInfo_t714  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateExit_m3758_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateExit_m3758 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, AnimatorStateInfo_t714  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMove_m3759_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMove_m3759 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, AnimatorStateInfo_t714  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateIK_m3760_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateIK_m3760 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, AnimatorStateInfo_t714  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineEnter_m3761_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m3761 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineExit_m3762_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMachineExit_m3762 (StateMachineBehaviour_t769 * __this, Animator_t414 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DblClickSnapping_t770_il2cpp_TypeInfo;
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"



// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextEditOp_t771_il2cpp_TypeInfo;
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"



// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextEditor_t499_il2cpp_TypeInfo;
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"

// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
extern TypeInfo GUIContent_t500_il2cpp_TypeInfo;
extern TypeInfo GUIStyle_t651_il2cpp_TypeInfo;
extern TypeInfo Rect_t213_il2cpp_TypeInfo;
extern TypeInfo Vector2_t62_il2cpp_TypeInfo;
extern TypeInfo GUIUtility_t664_il2cpp_TypeInfo;
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
extern MethodInfo GUIContent__ctor_m3125_MethodInfo;
extern MethodInfo GUIStyle_get_none_m3172_MethodInfo;
extern MethodInfo Vector2_get_zero_m2173_MethodInfo;
extern MethodInfo TextEditor_SelectAll_m3764_MethodInfo;
extern MethodInfo GUIContent_get_text_m2417_MethodInfo;
extern MethodInfo TextEditor_ClearCursorPos_m3763_MethodInfo;
extern MethodInfo GUIContent_set_text_m3127_MethodInfo;
extern MethodInfo TextEditor_DeleteSelection_m3765_MethodInfo;
extern MethodInfo TextEditor_UpdateScrollOffset_m3767_MethodInfo;
extern MethodInfo Rect_get_width_m827_MethodInfo;
extern MethodInfo Rect_get_height_m2306_MethodInfo;
extern MethodInfo Rect__ctor_m817_MethodInfo;
extern MethodInfo GUIStyle_GetCursorPixelPosition_m3173_MethodInfo;
extern MethodInfo GUIStyle_get_padding_m3161_MethodInfo;
extern MethodInfo RectOffset_Remove_m3148_MethodInfo;
extern MethodInfo GUIStyle_CalcSize_m3176_MethodInfo;
extern MethodInfo GUIStyle_CalcHeight_m3178_MethodInfo;
extern MethodInfo Vector2__ctor_m252_MethodInfo;
extern MethodInfo RectOffset_get_left_m2631_MethodInfo;
extern MethodInfo GUIStyle_get_lineHeight_m3170_MethodInfo;
extern MethodInfo RectOffset_get_top_m2632_MethodInfo;
extern MethodInfo RectOffset_get_bottom_m3146_MethodInfo;
extern MethodInfo GUIUtility_set_systemCopyBuffer_m3057_MethodInfo;
extern MethodInfo GUIUtility_get_systemCopyBuffer_m3056_MethodInfo;
extern MethodInfo String_op_Inequality_m2427_MethodInfo;
extern MethodInfo TextEditor_ReplaceNewlinesWithSpaces_m3768_MethodInfo;
extern MethodInfo TextEditor_ReplaceSelection_m3766_MethodInfo;


// System.Void UnityEngine.TextEditor::.ctor()
extern MethodInfo TextEditor__ctor_m2415_MethodInfo;
extern "C" void TextEditor__ctor_m2415 (TextEditor_t499 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo));
		GUIContent_t500 * L_0 = (GUIContent_t500 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo));
		GUIContent__ctor_m3125(L_0, /*hidden argument*/&GUIContent__ctor_m3125_MethodInfo);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_1 = GUIStyle_get_none_m3172(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m3172_MethodInfo);
		__this->___style_5 = L_1;
		Vector2_t62  L_2 = Vector2_get_zero_m2173(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2173_MethodInfo);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m3763 (TextEditor_t499 * __this, MethodInfo* method)
{
	{
		__this->___hasHorizontalCursorPos_8 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
extern MethodInfo TextEditor_OnFocus_m2419_MethodInfo;
extern "C" void TextEditor_OnFocus_m2419 (TextEditor_t499 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_7);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___selectPos_2 = L_1;
		int32_t L_2 = V_0;
		__this->___pos_1 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m3764(__this, /*hidden argument*/&TextEditor_SelectAll_m3764_MethodInfo);
	}

IL_0026:
	{
		__this->___m_HasFocus_10 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m3764 (TextEditor_t499 * __this, MethodInfo* method)
{
	{
		__this->___pos_1 = 0;
		GUIContent_t500 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2417(L_0, /*hidden argument*/&GUIContent_get_text_m2417_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m893(L_1, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		__this->___selectPos_2 = L_2;
		TextEditor_ClearCursorPos_m3763(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m3763_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C" bool TextEditor_DeleteSelection_m3765 (TextEditor_t499 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GUIContent_t500 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2417(L_0, /*hidden argument*/&GUIContent_get_text_m2417_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m893(L_1, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->___pos_1 = L_5;
	}

IL_0024:
	{
		int32_t L_6 = (__this->___selectPos_2);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		__this->___selectPos_2 = L_8;
	}

IL_0037:
	{
		int32_t L_9 = (__this->___pos_1);
		int32_t L_10 = (__this->___selectPos_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_11 = (__this->___pos_1);
		int32_t L_12 = (__this->___selectPos_2);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t500 * L_13 = (__this->___content_4);
		GUIContent_t500 * L_14 = (__this->___content_4);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m2417(L_14, /*hidden argument*/&GUIContent_get_text_m2417_MethodInfo);
		int32_t L_16 = (__this->___pos_1);
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m2428(L_15, 0, L_16, /*hidden argument*/&String_Substring_m2428_MethodInfo);
		GUIContent_t500 * L_18 = (__this->___content_4);
		NullCheck(L_18);
		String_t* L_19 = GUIContent_get_text_m2417(L_18, /*hidden argument*/&GUIContent_get_text_m2417_MethodInfo);
		int32_t L_20 = (__this->___selectPos_2);
		GUIContent_t500 * L_21 = (__this->___content_4);
		NullCheck(L_21);
		String_t* L_22 = GUIContent_get_text_m2417(L_21, /*hidden argument*/&GUIContent_get_text_m2417_MethodInfo);
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m893(L_22, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		int32_t L_24 = (__this->___selectPos_2);
		NullCheck(L_19);
		String_t* L_25 = String_Substring_m2428(L_19, L_20, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/&String_Substring_m2428_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_26 = String_Concat_m385(NULL /*static, unused*/, L_17, L_25, /*hidden argument*/&String_Concat_m385_MethodInfo);
		NullCheck(L_13);
		GUIContent_set_text_m3127(L_13, L_26, /*hidden argument*/&GUIContent_set_text_m3127_MethodInfo);
		int32_t L_27 = (__this->___pos_1);
		__this->___selectPos_2 = L_27;
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t500 * L_28 = (__this->___content_4);
		GUIContent_t500 * L_29 = (__this->___content_4);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m2417(L_29, /*hidden argument*/&GUIContent_get_text_m2417_MethodInfo);
		int32_t L_31 = (__this->___selectPos_2);
		NullCheck(L_30);
		String_t* L_32 = String_Substring_m2428(L_30, 0, L_31, /*hidden argument*/&String_Substring_m2428_MethodInfo);
		GUIContent_t500 * L_33 = (__this->___content_4);
		NullCheck(L_33);
		String_t* L_34 = GUIContent_get_text_m2417(L_33, /*hidden argument*/&GUIContent_get_text_m2417_MethodInfo);
		int32_t L_35 = (__this->___pos_1);
		GUIContent_t500 * L_36 = (__this->___content_4);
		NullCheck(L_36);
		String_t* L_37 = GUIContent_get_text_m2417(L_36, /*hidden argument*/&GUIContent_get_text_m2417_MethodInfo);
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m893(L_37, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		int32_t L_39 = (__this->___pos_1);
		NullCheck(L_34);
		String_t* L_40 = String_Substring_m2428(L_34, L_35, ((int32_t)((int32_t)L_38-(int32_t)L_39)), /*hidden argument*/&String_Substring_m2428_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_41 = String_Concat_m385(NULL /*static, unused*/, L_32, L_40, /*hidden argument*/&String_Concat_m385_MethodInfo);
		NullCheck(L_28);
		GUIContent_set_text_m3127(L_28, L_41, /*hidden argument*/&GUIContent_set_text_m3127_MethodInfo);
		int32_t L_42 = (__this->___selectPos_2);
		__this->___pos_1 = L_42;
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m3763(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m3763_MethodInfo);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m3766 (TextEditor_t499 * __this, String_t* ___replace, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m3765(__this, /*hidden argument*/&TextEditor_DeleteSelection_m3765_MethodInfo);
		GUIContent_t500 * L_0 = (__this->___content_4);
		GUIContent_t500 * L_1 = (__this->___content_4);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m2417(L_1, /*hidden argument*/&GUIContent_get_text_m2417_MethodInfo);
		int32_t L_3 = (__this->___pos_1);
		String_t* L_4 = ___replace;
		NullCheck(L_2);
		String_t* L_5 = String_Insert_m2454(L_2, L_3, L_4, /*hidden argument*/&String_Insert_m2454_MethodInfo);
		NullCheck(L_0);
		GUIContent_set_text_m3127(L_0, L_5, /*hidden argument*/&GUIContent_set_text_m3127_MethodInfo);
		int32_t L_6 = (__this->___pos_1);
		String_t* L_7 = ___replace;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m893(L_7, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		int32_t L_9 = ((int32_t)((int32_t)L_6+(int32_t)L_8));
		V_0 = L_9;
		__this->___pos_1 = L_9;
		int32_t L_10 = V_0;
		__this->___selectPos_2 = L_10;
		TextEditor_ClearCursorPos_m3763(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m3763_MethodInfo);
		TextEditor_UpdateScrollOffset_m3767(__this, /*hidden argument*/&TextEditor_UpdateScrollOffset_m3767_MethodInfo);
		__this->___m_TextHeightPotentiallyChanged_12 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m3767 (TextEditor_t499 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Rect_t213  V_1 = {0};
	Vector2_t62  V_2 = {0};
	Vector2_t62  V_3 = {0};
	Vector2_t62 * G_B17_0 = {0};
	Vector2_t62 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	Vector2_t62 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->___pos_1);
		V_0 = L_0;
		GUIStyle_t651 * L_1 = (__this->___style_5);
		Rect_t213 * L_2 = &(__this->___position_6);
		float L_3 = Rect_get_width_m827(L_2, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		Rect_t213 * L_4 = &(__this->___position_6);
		float L_5 = Rect_get_height_m2306(L_4, /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		Rect_t213  L_6 = {0};
		Rect__ctor_m817(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/&Rect__ctor_m817_MethodInfo);
		GUIContent_t500 * L_7 = (__this->___content_4);
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_t62  L_9 = GUIStyle_GetCursorPixelPosition_m3173(L_1, L_6, L_7, L_8, /*hidden argument*/&GUIStyle_GetCursorPixelPosition_m3173_MethodInfo);
		__this->___graphicalCursorPos_13 = L_9;
		GUIStyle_t651 * L_10 = (__this->___style_5);
		NullCheck(L_10);
		RectOffset_t449 * L_11 = GUIStyle_get_padding_m3161(L_10, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		Rect_t213  L_12 = (__this->___position_6);
		NullCheck(L_11);
		Rect_t213  L_13 = RectOffset_Remove_m3148(L_11, L_12, /*hidden argument*/&RectOffset_Remove_m3148_MethodInfo);
		V_1 = L_13;
		GUIStyle_t651 * L_14 = (__this->___style_5);
		GUIContent_t500 * L_15 = (__this->___content_4);
		NullCheck(L_14);
		Vector2_t62  L_16 = GUIStyle_CalcSize_m3176(L_14, L_15, /*hidden argument*/&GUIStyle_CalcSize_m3176_MethodInfo);
		V_3 = L_16;
		float L_17 = ((&V_3)->___x_1);
		GUIStyle_t651 * L_18 = (__this->___style_5);
		GUIContent_t500 * L_19 = (__this->___content_4);
		Rect_t213 * L_20 = &(__this->___position_6);
		float L_21 = Rect_get_width_m827(L_20, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		NullCheck(L_18);
		float L_22 = GUIStyle_CalcHeight_m3178(L_18, L_19, L_21, /*hidden argument*/&GUIStyle_CalcHeight_m3178_MethodInfo);
		Vector2__ctor_m252((&V_2), L_17, L_22, /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		float L_23 = ((&V_2)->___x_1);
		Rect_t213 * L_24 = &(__this->___position_6);
		float L_25 = Rect_get_width_m827(L_24, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		if ((!(((float)L_23) < ((float)L_25))))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2_t62 * L_26 = &(__this->___scrollOffset_11);
		L_26->___x_1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		Vector2_t62 * L_27 = &(__this->___graphicalCursorPos_13);
		float L_28 = (L_27->___x_1);
		Vector2_t62 * L_29 = &(__this->___scrollOffset_11);
		float L_30 = (L_29->___x_1);
		float L_31 = Rect_get_width_m827((&V_1), /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		if ((!(((float)((float)((float)L_28+(float)(1.0f)))) > ((float)((float)((float)L_30+(float)L_31))))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t62 * L_32 = &(__this->___scrollOffset_11);
		Vector2_t62 * L_33 = &(__this->___graphicalCursorPos_13);
		float L_34 = (L_33->___x_1);
		float L_35 = Rect_get_width_m827((&V_1), /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		L_32->___x_1 = ((float)((float)L_34-(float)L_35));
	}

IL_010a:
	{
		Vector2_t62 * L_36 = &(__this->___graphicalCursorPos_13);
		float L_37 = (L_36->___x_1);
		Vector2_t62 * L_38 = &(__this->___scrollOffset_11);
		float L_39 = (L_38->___x_1);
		GUIStyle_t651 * L_40 = (__this->___style_5);
		NullCheck(L_40);
		RectOffset_t449 * L_41 = GUIStyle_get_padding_m3161(L_40, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_41);
		int32_t L_42 = RectOffset_get_left_m2631(L_41, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
		if ((!(((float)L_37) < ((float)((float)((float)L_39+(float)(((float)L_42))))))))
		{
			goto IL_015f;
		}
	}
	{
		Vector2_t62 * L_43 = &(__this->___scrollOffset_11);
		Vector2_t62 * L_44 = &(__this->___graphicalCursorPos_13);
		float L_45 = (L_44->___x_1);
		GUIStyle_t651 * L_46 = (__this->___style_5);
		NullCheck(L_46);
		RectOffset_t449 * L_47 = GUIStyle_get_padding_m3161(L_46, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_47);
		int32_t L_48 = RectOffset_get_left_m2631(L_47, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
		L_43->___x_1 = ((float)((float)L_45-(float)(((float)L_48))));
	}

IL_015f:
	{
		float L_49 = ((&V_2)->___y_2);
		float L_50 = Rect_get_height_m2306((&V_1), /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_0187;
		}
	}
	{
		Vector2_t62 * L_51 = &(__this->___scrollOffset_11);
		L_51->___y_2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		Vector2_t62 * L_52 = &(__this->___graphicalCursorPos_13);
		float L_53 = (L_52->___y_2);
		GUIStyle_t651 * L_54 = (__this->___style_5);
		NullCheck(L_54);
		float L_55 = GUIStyle_get_lineHeight_m3170(L_54, /*hidden argument*/&GUIStyle_get_lineHeight_m3170_MethodInfo);
		Vector2_t62 * L_56 = &(__this->___scrollOffset_11);
		float L_57 = (L_56->___y_2);
		float L_58 = Rect_get_height_m2306((&V_1), /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		GUIStyle_t651 * L_59 = (__this->___style_5);
		NullCheck(L_59);
		RectOffset_t449 * L_60 = GUIStyle_get_padding_m3161(L_59, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m2632(L_60, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		if ((!(((float)((float)((float)L_53+(float)L_55))) > ((float)((float)((float)((float)((float)L_57+(float)L_58))+(float)(((float)L_61))))))))
		{
			goto IL_0204;
		}
	}
	{
		Vector2_t62 * L_62 = &(__this->___scrollOffset_11);
		Vector2_t62 * L_63 = &(__this->___graphicalCursorPos_13);
		float L_64 = (L_63->___y_2);
		float L_65 = Rect_get_height_m2306((&V_1), /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		GUIStyle_t651 * L_66 = (__this->___style_5);
		NullCheck(L_66);
		RectOffset_t449 * L_67 = GUIStyle_get_padding_m3161(L_66, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_67);
		int32_t L_68 = RectOffset_get_top_m2632(L_67, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		GUIStyle_t651 * L_69 = (__this->___style_5);
		NullCheck(L_69);
		float L_70 = GUIStyle_get_lineHeight_m3170(L_69, /*hidden argument*/&GUIStyle_get_lineHeight_m3170_MethodInfo);
		L_62->___y_2 = ((float)((float)((float)((float)((float)((float)L_64-(float)L_65))-(float)(((float)L_68))))+(float)L_70));
	}

IL_0204:
	{
		Vector2_t62 * L_71 = &(__this->___graphicalCursorPos_13);
		float L_72 = (L_71->___y_2);
		Vector2_t62 * L_73 = &(__this->___scrollOffset_11);
		float L_74 = (L_73->___y_2);
		GUIStyle_t651 * L_75 = (__this->___style_5);
		NullCheck(L_75);
		RectOffset_t449 * L_76 = GUIStyle_get_padding_m3161(L_75, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_76);
		int32_t L_77 = RectOffset_get_top_m2632(L_76, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		if ((!(((float)L_72) < ((float)((float)((float)L_74+(float)(((float)L_77))))))))
		{
			goto IL_0259;
		}
	}
	{
		Vector2_t62 * L_78 = &(__this->___scrollOffset_11);
		Vector2_t62 * L_79 = &(__this->___graphicalCursorPos_13);
		float L_80 = (L_79->___y_2);
		GUIStyle_t651 * L_81 = (__this->___style_5);
		NullCheck(L_81);
		RectOffset_t449 * L_82 = GUIStyle_get_padding_m3161(L_81, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_82);
		int32_t L_83 = RectOffset_get_top_m2632(L_82, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		L_78->___y_2 = ((float)((float)L_80-(float)(((float)L_83))));
	}

IL_0259:
	{
		Vector2_t62 * L_84 = &(__this->___scrollOffset_11);
		float L_85 = (L_84->___y_2);
		if ((!(((float)L_85) > ((float)(0.0f)))))
		{
			goto IL_02cb;
		}
	}
	{
		float L_86 = ((&V_2)->___y_2);
		Vector2_t62 * L_87 = &(__this->___scrollOffset_11);
		float L_88 = (L_87->___y_2);
		float L_89 = Rect_get_height_m2306((&V_1), /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		if ((!(((float)((float)((float)L_86-(float)L_88))) < ((float)L_89))))
		{
			goto IL_02cb;
		}
	}
	{
		Vector2_t62 * L_90 = &(__this->___scrollOffset_11);
		float L_91 = ((&V_2)->___y_2);
		float L_92 = Rect_get_height_m2306((&V_1), /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		GUIStyle_t651 * L_93 = (__this->___style_5);
		NullCheck(L_93);
		RectOffset_t449 * L_94 = GUIStyle_get_padding_m3161(L_93, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_94);
		int32_t L_95 = RectOffset_get_top_m2632(L_94, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		GUIStyle_t651 * L_96 = (__this->___style_5);
		NullCheck(L_96);
		RectOffset_t449 * L_97 = GUIStyle_get_padding_m3161(L_96, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_97);
		int32_t L_98 = RectOffset_get_bottom_m3146(L_97, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
		L_90->___y_2 = ((float)((float)((float)((float)((float)((float)L_91-(float)L_92))-(float)(((float)L_95))))-(float)(((float)L_98))));
	}

IL_02cb:
	{
		Vector2_t62 * L_99 = &(__this->___scrollOffset_11);
		Vector2_t62 * L_100 = &(__this->___scrollOffset_11);
		float L_101 = (L_100->___y_2);
		G_B16_0 = L_99;
		if ((!(((float)L_101) < ((float)(0.0f)))))
		{
			G_B17_0 = L_99;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		Vector2_t62 * L_102 = &(__this->___scrollOffset_11);
		float L_103 = (L_102->___y_2);
		G_B18_0 = L_103;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		G_B18_1->___y_2 = G_B18_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern MethodInfo TextEditor_Copy_m2420_MethodInfo;
extern "C" void TextEditor_Copy_m2420 (TextEditor_t499 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		int32_t L_0 = (__this->___selectPos_2);
		int32_t L_1 = (__this->___pos_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_9);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t500 * L_5 = (__this->___content_4);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m2417(L_5, /*hidden argument*/&GUIContent_get_text_m2417_MethodInfo);
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		int32_t L_9 = (__this->___pos_1);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m2428(L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)), /*hidden argument*/&String_Substring_m2428_MethodInfo);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t500 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m2417(L_11, /*hidden argument*/&GUIContent_get_text_m2417_MethodInfo);
		int32_t L_13 = (__this->___selectPos_2);
		int32_t L_14 = (__this->___pos_1);
		int32_t L_15 = (__this->___selectPos_2);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m2428(L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/&String_Substring_m2428_MethodInfo);
		V_0 = L_16;
	}

IL_007c:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo));
		GUIUtility_set_systemCopyBuffer_m3057(NULL /*static, unused*/, L_17, /*hidden argument*/&GUIUtility_set_systemCopyBuffer_m3057_MethodInfo);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m3768 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m3924(L_0, (String_t*) &_stringLiteral420, (String_t*) &_stringLiteral163, /*hidden argument*/&String_Replace_m3924_MethodInfo);
		___value = L_1;
		String_t* L_2 = ___value;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m3925(L_2, ((int32_t)10), ((int32_t)32), /*hidden argument*/&String_Replace_m3925_MethodInfo);
		___value = L_3;
		String_t* L_4 = ___value;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m3925(L_4, ((int32_t)13), ((int32_t)32), /*hidden argument*/&String_Replace_m3925_MethodInfo);
		___value = L_5;
		String_t* L_6 = ___value;
		return L_6;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern MethodInfo TextEditor_Paste_m2416_MethodInfo;
extern "C" bool TextEditor_Paste_m2416 (TextEditor_t499 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo));
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m3056(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_systemCopyBuffer_m3056_MethodInfo);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m2427(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Inequality_m2427_MethodInfo);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = (__this->___multiline_7);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = TextEditor_ReplaceNewlinesWithSpaces_m3768(NULL /*static, unused*/, L_5, /*hidden argument*/&TextEditor_ReplaceNewlinesWithSpaces_m3768_MethodInfo);
		V_0 = L_6;
	}

IL_0028:
	{
		String_t* L_7 = V_0;
		TextEditor_ReplaceSelection_m3766(__this, L_7, /*hidden argument*/&TextEditor_ReplaceSelection_m3766_MethodInfo);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerationSettings_t423_il2cpp_TypeInfo;
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
extern TypeInfo Color32_t471_il2cpp_TypeInfo;
extern TypeInfo ValueType_t243_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
extern MethodInfo Color32_op_Implicit_m2310_MethodInfo;
extern MethodInfo ValueType_Equals_m914_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareColors_m3769_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareVector2_m3770_MethodInfo;


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern "C" bool TextGenerationSettings_CompareColors_m3769 (TextGenerationSettings_t423 * __this, Color_t17  ___left, Color_t17  ___right, MethodInfo* method)
{
	Color32_t471  V_0 = {0};
	Color32_t471  V_1 = {0};
	{
		Color_t17  L_0 = ___left;
		Color32_t471  L_1 = Color32_op_Implicit_m2310(NULL /*static, unused*/, L_0, /*hidden argument*/&Color32_op_Implicit_m2310_MethodInfo);
		V_0 = L_1;
		Color_t17  L_2 = ___right;
		Color32_t471  L_3 = Color32_op_Implicit_m2310(NULL /*static, unused*/, L_2, /*hidden argument*/&Color32_op_Implicit_m2310_MethodInfo);
		V_1 = L_3;
		Color32_t471  L_4 = V_0;
		Color32_t471  L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Color32_t471_il2cpp_TypeInfo), &L_5);
		Color32_t471  L_7 = V_1;
		Color32_t471  L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Color32_t471_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ValueType_Equals_m914_MethodInfo, L_6, L_9);
		return L_10;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool TextGenerationSettings_CompareVector2_m3770 (TextGenerationSettings_t423 * __this, Vector2_t62  ___left, Vector2_t62  ___right, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		bool L_2 = Mathf_Approximately_m2215(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Approximately_m2215_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		bool L_5 = Mathf_Approximately_m2215(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Approximately_m2215_MethodInfo);
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
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerationSettings_Equals_m3771_MethodInfo;
extern "C" bool TextGenerationSettings_Equals_m3771 (TextGenerationSettings_t423 * __this, TextGenerationSettings_t423  ___other, MethodInfo* method)
{
	int32_t G_B19_0 = 0;
	{
		Color_t17  L_0 = (__this->___color_1);
		Color_t17  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m3769(__this, L_0, L_1, /*hidden argument*/&TextGenerationSettings_CompareColors_m3769_MethodInfo);
		if (!L_2)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_5 = (__this->___resizeTextMinSize_8);
		int32_t L_6 = ((&___other)->___resizeTextMinSize_8);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_7 = (__this->___resizeTextMaxSize_9);
		int32_t L_8 = ((&___other)->___resizeTextMaxSize_9);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_015d;
		}
	}
	{
		float L_9 = (__this->___lineSpacing_3);
		float L_10 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		bool L_11 = Mathf_Approximately_m2215(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Mathf_Approximately_m2215_MethodInfo);
		if (!L_11)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_12 = (__this->___fontStyle_5);
		int32_t L_13 = ((&___other)->___fontStyle_5);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_015d;
		}
	}
	{
		bool L_14 = (__this->___richText_4);
		bool L_15 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_16 = (__this->___textAnchor_6);
		int32_t L_17 = ((&___other)->___textAnchor_6);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_015d;
		}
	}
	{
		bool L_18 = (__this->___resizeTextForBestFit_7);
		bool L_19 = ((&___other)->___resizeTextForBestFit_7);
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_20 = (__this->___resizeTextMinSize_8);
		int32_t L_21 = ((&___other)->___resizeTextMinSize_8);
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_22 = (__this->___resizeTextMaxSize_9);
		int32_t L_23 = ((&___other)->___resizeTextMaxSize_9);
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_015d;
		}
	}
	{
		bool L_24 = (__this->___resizeTextForBestFit_7);
		bool L_25 = ((&___other)->___resizeTextForBestFit_7);
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_015d;
		}
	}
	{
		bool L_26 = (__this->___updateBounds_10);
		bool L_27 = ((&___other)->___updateBounds_10);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_28 = (__this->___horizontalOverflow_12);
		int32_t L_29 = ((&___other)->___horizontalOverflow_12);
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_30 = (__this->___verticalOverflow_11);
		int32_t L_31 = ((&___other)->___verticalOverflow_11);
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_t62  L_32 = (__this->___generationExtents_13);
		Vector2_t62  L_33 = ((&___other)->___generationExtents_13);
		bool L_34 = TextGenerationSettings_CompareVector2_m3770(__this, L_32, L_33, /*hidden argument*/&TextGenerationSettings_CompareVector2_m3770_MethodInfo);
		if (!L_34)
		{
			goto IL_015d;
		}
	}
	{
		Vector2_t62  L_35 = (__this->___pivot_14);
		Vector2_t62  L_36 = ((&___other)->___pivot_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m3770(__this, L_35, L_36, /*hidden argument*/&TextGenerationSettings_CompareVector2_m3770_MethodInfo);
		if (!L_37)
		{
			goto IL_015d;
		}
	}
	{
		Font_t339 * L_38 = (__this->___font_0);
		Font_t339 * L_39 = ((&___other)->___font_0);
		bool L_40 = Object_op_Equality_m243(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/&Object_op_Equality_m243_MethodInfo);
		G_B19_0 = ((int32_t)(L_40));
		goto IL_015e;
	}

IL_015d:
	{
		G_B19_0 = 0;
	}

IL_015e:
	{
		return G_B19_0;
	}
}
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TrackedReference_t716_il2cpp_TypeInfo;
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern MethodInfo TrackedReference_op_Equality_m3774_MethodInfo;
extern MethodInfo IntPtr_op_Explicit_m3940_MethodInfo;
extern MethodInfo IntPtr_op_Equality_m3941_MethodInfo;


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern MethodInfo TrackedReference_Equals_m3772_MethodInfo;
extern "C" bool TrackedReference_Equals_m3772 (TrackedReference_t716 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m3774(NULL /*static, unused*/, ((TrackedReference_t716 *)IsInst(L_0, InitializedTypeInfo(&TrackedReference_t716_il2cpp_TypeInfo))), __this, /*hidden argument*/&TrackedReference_op_Equality_m3774_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern MethodInfo TrackedReference_GetHashCode_m3773_MethodInfo;
extern "C" int32_t TrackedReference_GetHashCode_m3773 (TrackedReference_t716 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m3940(NULL /*static, unused*/, L_0, /*hidden argument*/&IntPtr_op_Explicit_m3940_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m3774 (Object_t * __this /* static, unused */, TrackedReference_t716 * ___x, TrackedReference_t716 * ___y, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t716 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t716 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t716 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m3941(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&IntPtr_op_Equality_m3941_MethodInfo);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t716 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m3941(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&IntPtr_op_Equality_m3941_MethodInfo);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t716 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t716 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m3941(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/&IntPtr_op_Equality_m3941_MethodInfo);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t716_marshal(const TrackedReference_t716& unmarshaled, TrackedReference_t716_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t716_marshal_back(const TrackedReference_t716_marshaled& marshaled, TrackedReference_t716& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t716_marshal_cleanup(TrackedReference_t716_marshaled& marshaled)
{
}
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentListenerMode_t773_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"



// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgumentCache_t774_il2cpp_TypeInfo;
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"



// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern MethodInfo ArgumentCache__ctor_m3775_MethodInfo;
extern "C" void ArgumentCache__ctor_m3775 (ArgumentCache_t774 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern MethodInfo ArgumentCache_get_unityObjectArgument_m3776_MethodInfo;
extern "C" Object_t93 * ArgumentCache_get_unityObjectArgument_m3776 (ArgumentCache_t774 * __this, MethodInfo* method)
{
	{
		Object_t93 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern MethodInfo ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3777_MethodInfo;
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3777 (ArgumentCache_t774 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern MethodInfo ArgumentCache_get_intArgument_m3778_MethodInfo;
extern "C" int32_t ArgumentCache_get_intArgument_m3778 (ArgumentCache_t774 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern MethodInfo ArgumentCache_get_floatArgument_m3779_MethodInfo;
extern "C" float ArgumentCache_get_floatArgument_m3779 (ArgumentCache_t774 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern MethodInfo ArgumentCache_get_stringArgument_m3780_MethodInfo;
extern "C" String_t* ArgumentCache_get_stringArgument_m3780 (ArgumentCache_t774 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern MethodInfo ArgumentCache_get_boolArgument_m3781_MethodInfo;
extern "C" bool ArgumentCache_get_boolArgument_m3781 (ArgumentCache_t774 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BaseInvokableCall_t775_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
extern TypeInfo ArgumentNullException_t820_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern MethodInfo ArgumentNullException__ctor_m3942_MethodInfo;
extern MethodInfo Delegate_get_Method_m3943_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m3944_MethodInfo;
extern MethodInfo Delegate_get_Target_m3945_MethodInfo;


// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern MethodInfo BaseInvokableCall__ctor_m3782_MethodInfo;
extern "C" void BaseInvokableCall__ctor_m3782 (BaseInvokableCall_t775 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo BaseInvokableCall__ctor_m3783_MethodInfo;
extern "C" void BaseInvokableCall__ctor_m3783 (BaseInvokableCall_t775 * __this, Object_t * ___target, MethodInfo_t * ___function, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t820 * L_1 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_1, (String_t*) &_stringLiteral421, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t820 * L_3 = (ArgumentNullException_t820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t820_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3942(L_3, (String_t*) &_stringLiteral422, /*hidden argument*/&ArgumentNullException__ctor_m3942_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern MethodInfo BaseInvokableCall_AllowInvoke_m3784_MethodInfo;
extern "C" bool BaseInvokableCall_AllowInvoke_m3784 (Object_t * __this /* static, unused */, Delegate_t493 * ___delegate, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Delegate_t493 * L_0 = ___delegate;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m3943(L_0, /*hidden argument*/&Delegate_get_Method_m3943_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m3944_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Delegate_t493 * L_3 = ___delegate;
		NullCheck(L_3);
		Object_t * L_4 = Delegate_get_Target_m3945(L_3, /*hidden argument*/&Delegate_get_Target_m3945_MethodInfo);
		G_B3_0 = ((((int32_t)((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_t776_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"

// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
extern TypeInfo UnityAction_t348_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
extern Il2CppType UnityAction_t348_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m298_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m3946_MethodInfo;
extern MethodInfo Delegate_Combine_m2321_MethodInfo;
extern MethodInfo UnityAction_Invoke_m2299_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall__ctor_m3785_MethodInfo;
extern "C" void InvokableCall__ctor_m3785 (InvokableCall_t776 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3783(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3783_MethodInfo);
		UnityAction_t348 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&UnityAction_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t493 * L_6 = Delegate_CreateDelegate_m3946(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m3946_MethodInfo);
		Delegate_t493 * L_7 = Delegate_Combine_m2321(NULL /*static, unused*/, L_2, ((UnityAction_t348 *)IsInst(L_6, InitializedTypeInfo(&UnityAction_t348_il2cpp_TypeInfo))), /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_t348 *)Castclass(L_7, InitializedTypeInfo(&UnityAction_t348_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern MethodInfo InvokableCall_Invoke_m3786_MethodInfo;
extern "C" void InvokableCall_Invoke_m3786 (InvokableCall_t776 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method)
{
	{
		UnityAction_t348 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m3784(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3784_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t348 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&UnityAction_Invoke_m2299_MethodInfo, L_2);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall_Find_m3787_MethodInfo;
extern "C" bool InvokableCall_Find_m3787 (InvokableCall_t776 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t348 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3945(L_0, /*hidden argument*/&Delegate_get_Target_m3945_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t348 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m3943(L_3, /*hidden argument*/&Delegate_get_Method_m3943_MethodInfo);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
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
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEventCallState_t777_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCall_t778_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
extern TypeInfo UnityEventBase_t779_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t821_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t822_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t823_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t824_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t97_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfo_t825_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
extern Il2CppType CachedInvokableCall_1_t821_0_0_0;
extern Il2CppType CachedInvokableCall_1_t822_0_0_0;
extern Il2CppType CachedInvokableCall_1_t823_0_0_0;
extern Il2CppType CachedInvokableCall_1_t824_0_0_0;
extern Il2CppType Object_t93_0_0_0;
extern Il2CppType CachedInvokableCall_1_t826_0_0_0;
extern Il2CppType TypeU5BU5D_t97_0_0_0;
extern Il2CppType MethodInfo_t_0_0_0;
extern MethodInfo PersistentCall_get_target_m3789_MethodInfo;
extern MethodInfo PersistentCall_get_methodName_m3790_MethodInfo;
extern MethodInfo String_IsNullOrEmpty_m2457_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m3805_MethodInfo;
extern MethodInfo UnityEventBase_GetDelegate_m3947_MethodInfo;
extern MethodInfo PersistentCall_GetObjectCall_m3795_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m3948_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m3949_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m3950_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m3951_MethodInfo;
extern MethodInfo Type_GetType_m3952_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3953_MethodInfo;
extern MethodInfo Type_GetConstructor_m3954_MethodInfo;
extern MethodInfo Object_GetType_m2196_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3955_MethodInfo;
extern MethodInfo ConstructorInfo_Invoke_m3956_MethodInfo;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m3948_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m3949_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m3950_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m3951_GenericMethod;


// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern MethodInfo PersistentCall__ctor_m3788_MethodInfo;
extern "C" void PersistentCall__ctor_m3788 (PersistentCall_t778 * __this, MethodInfo* method)
{
	{
		ArgumentCache_t774 * L_0 = (ArgumentCache_t774 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentCache_t774_il2cpp_TypeInfo));
		ArgumentCache__ctor_m3775(L_0, /*hidden argument*/&ArgumentCache__ctor_m3775_MethodInfo);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t93 * PersistentCall_get_target_m3789 (PersistentCall_t778 * __this, MethodInfo* method)
{
	{
		Object_t93 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m3790 (PersistentCall_t778 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern MethodInfo PersistentCall_get_mode_m3791_MethodInfo;
extern "C" int32_t PersistentCall_get_mode_m3791 (PersistentCall_t778 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern MethodInfo PersistentCall_get_arguments_m3792_MethodInfo;
extern "C" ArgumentCache_t774 * PersistentCall_get_arguments_m3792 (PersistentCall_t778 * __this, MethodInfo* method)
{
	{
		ArgumentCache_t774 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern MethodInfo PersistentCall_IsValid_m3793_MethodInfo;
extern "C" bool PersistentCall_IsValid_m3793 (PersistentCall_t778 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t93 * L_0 = PersistentCall_get_target_m3789(__this, /*hidden argument*/&PersistentCall_get_target_m3789_MethodInfo);
		bool L_1 = Object_op_Inequality_m225(NULL /*static, unused*/, L_0, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m3790(__this, /*hidden argument*/&PersistentCall_get_methodName_m3790_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m2457(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m2457_MethodInfo);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
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
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCall_GetRuntimeCall_m3794_MethodInfo;
extern TypeInfo* CachedInvokableCall_1_t821_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t822_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t823_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t824_il2cpp_TypeInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m3948_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m3949_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m3950_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m3951_MethodInfo_var;
extern "C" BaseInvokableCall_t775 * PersistentCall_GetRuntimeCall_m3794 (PersistentCall_t778 * __this, UnityEventBase_t779 * ___theEvent, MethodInfo* method)
{
	static bool PersistentCall_GetRuntimeCall_m3794_init;
	if (!PersistentCall_GetRuntimeCall_m3794_init)
	{
		CachedInvokableCall_1_t821_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t821_0_0_0);
		CachedInvokableCall_1_t822_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t822_0_0_0);
		CachedInvokableCall_1_t823_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t823_0_0_0);
		CachedInvokableCall_1_t824_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t824_0_0_0);
		CachedInvokableCall_1__ctor_m3948_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m3948_GenericMethod);
		CachedInvokableCall_1__ctor_m3949_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m3949_GenericMethod);
		CachedInvokableCall_1__ctor_m3950_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m3950_GenericMethod);
		CachedInvokableCall_1__ctor_m3951_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m3951_GenericMethod);
		PersistentCall_GetRuntimeCall_m3794_init = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t779 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t775 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t779 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m3805(L_2, __this, /*hidden argument*/&UnityEventBase_FindMethod_m3805_MethodInfo);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t775 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t779 * L_7 = ___theEvent;
		Object_t93 * L_8 = PersistentCall_get_target_m3789(__this, /*hidden argument*/&PersistentCall_get_target_m3789_MethodInfo);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t775 * L_10 = (BaseInvokableCall_t775 *)VirtFuncInvoker2< BaseInvokableCall_t775 *, Object_t *, MethodInfo_t * >::Invoke(&UnityEventBase_GetDelegate_m3947_MethodInfo, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t93 * L_11 = PersistentCall_get_target_m3789(__this, /*hidden argument*/&PersistentCall_get_target_m3789_MethodInfo);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t774 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t775 * L_14 = PersistentCall_GetObjectCall_m3795(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/&PersistentCall_GetObjectCall_m3795_MethodInfo);
		return L_14;
	}

IL_0072:
	{
		Object_t93 * L_15 = PersistentCall_get_target_m3789(__this, /*hidden argument*/&PersistentCall_get_target_m3789_MethodInfo);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t774 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m3779(L_17, /*hidden argument*/&ArgumentCache_get_floatArgument_m3779_MethodInfo);
		CachedInvokableCall_1_t821 * L_19 = (CachedInvokableCall_1_t821 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t821_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3948(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m3948_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t93 * L_20 = PersistentCall_get_target_m3789(__this, /*hidden argument*/&PersistentCall_get_target_m3789_MethodInfo);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t774 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m3778(L_22, /*hidden argument*/&ArgumentCache_get_intArgument_m3778_MethodInfo);
		CachedInvokableCall_1_t822 * L_24 = (CachedInvokableCall_1_t822 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t822_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3949(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m3949_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t93 * L_25 = PersistentCall_get_target_m3789(__this, /*hidden argument*/&PersistentCall_get_target_m3789_MethodInfo);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t774 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m3780(L_27, /*hidden argument*/&ArgumentCache_get_stringArgument_m3780_MethodInfo);
		CachedInvokableCall_1_t823 * L_29 = (CachedInvokableCall_1_t823 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t823_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3950(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m3950_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t93 * L_30 = PersistentCall_get_target_m3789(__this, /*hidden argument*/&PersistentCall_get_target_m3789_MethodInfo);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t774 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m3781(L_32, /*hidden argument*/&ArgumentCache_get_boolArgument_m3781_MethodInfo);
		CachedInvokableCall_1_t824 * L_34 = (CachedInvokableCall_1_t824 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t824_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3951(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m3951_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t93 * L_35 = PersistentCall_get_target_m3789(__this, /*hidden argument*/&PersistentCall_get_target_m3789_MethodInfo);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t776 * L_37 = (InvokableCall_t776 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t776_il2cpp_TypeInfo));
		InvokableCall__ctor_m3785(L_37, L_35, L_36, /*hidden argument*/&InvokableCall__ctor_m3785_MethodInfo);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t775 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern TypeInfo* TypeU5BU5D_t97_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t775 * PersistentCall_GetObjectCall_m3795 (Object_t * __this /* static, unused */, Object_t93 * ___target, MethodInfo_t * ___method, ArgumentCache_t774 * ___arguments, MethodInfo* method)
{
	static bool PersistentCall_GetObjectCall_m3795_init;
	if (!PersistentCall_GetObjectCall_m3795_init)
	{
		TypeU5BU5D_t97_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t97_0_0_0);
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		PersistentCall_GetObjectCall_m3795_init = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t825 * V_3 = {0};
	Object_t93 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&Object_t93_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		V_0 = L_0;
		ArgumentCache_t774 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3777(L_1, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3777_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m2457(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m2457_MethodInfo);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t774 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3777(L_4, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3777_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetType_m3952(NULL /*static, unused*/, L_5, 0, /*hidden argument*/&Type_GetType_m3952_MethodInfo);
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&Object_t93_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&CachedInvokableCall_1_t826_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t97* L_11 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t97* >::Invoke(&Type_MakeGenericType_m3953_MethodInfo, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t97* L_15 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&Object_t93_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		TypeU5BU5D_t97* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&MethodInfo_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1)) = (Type_t *)L_18;
		TypeU5BU5D_t97* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2)) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t825 * L_21 = (ConstructorInfo_t825 *)VirtFuncInvoker1< ConstructorInfo_t825 *, TypeU5BU5D_t97* >::Invoke(&Type_GetConstructor_m3954_MethodInfo, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t774 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t93 * L_23 = ArgumentCache_get_unityObjectArgument_m3776(L_22, /*hidden argument*/&ArgumentCache_get_unityObjectArgument_m3776_MethodInfo);
		V_4 = L_23;
		Object_t93 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m225(NULL /*static, unused*/, L_24, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Inequality_m225_MethodInfo);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t93 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m2196(L_27, /*hidden argument*/&Object_GetType_m2196_MethodInfo);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m3955_MethodInfo, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t93 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t825 * L_30 = V_3;
		ObjectU5BU5D_t219* L_31 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 3));
		Object_t93 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)L_32;
		ObjectU5BU5D_t219* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1)) = (Object_t *)L_34;
		ObjectU5BU5D_t219* L_35 = L_33;
		Object_t93 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2)) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m3956(L_30, L_35, /*hidden argument*/&ConstructorInfo_Invoke_m3956_MethodInfo);
		return ((BaseInvokableCall_t775 *)IsInst(L_37, InitializedTypeInfo(&BaseInvokableCall_t775_il2cpp_TypeInfo)));
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCallGroup_t781_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
extern TypeInfo List_1_t780_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t827_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t231_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
extern Il2CppType List_1_t780_0_0_0;
extern Il2CppType Enumerator_t827_0_0_0;
extern MethodInfo List_1__ctor_m3957_MethodInfo;
extern MethodInfo InvokableCallList_AddPersistentInvokableCall_m3799_MethodInfo;
extern MethodInfo IDisposable_Dispose_m861_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3957_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m3958_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m3959_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m3960_GenericMethod;


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern MethodInfo PersistentCallGroup__ctor_m3796_MethodInfo;
extern TypeInfo* List_1_t780_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3957_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m3796 (PersistentCallGroup_t781 * __this, MethodInfo* method)
{
	static bool PersistentCallGroup__ctor_m3796_init;
	if (!PersistentCallGroup__ctor_m3796_init)
	{
		List_1_t780_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t780_0_0_0);
		List_1__ctor_m3957_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3957_GenericMethod);
		PersistentCallGroup__ctor_m3796_init = true;
	}
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t780_il2cpp_TypeInfo_var);
		List_1_t780 * L_0 = (List_1_t780 *)il2cpp_codegen_object_new (List_1_t780_il2cpp_TypeInfo_var);
		List_1__ctor_m3957(L_0, /*hidden argument*/List_1__ctor_m3957_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCallGroup_Initialize_m3797_MethodInfo;
extern TypeInfo* Enumerator_t827_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3958_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3959_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3960_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m3797 (PersistentCallGroup_t781 * __this, InvokableCallList_t782 * ___invokableList, UnityEventBase_t779 * ___unityEventBase, MethodInfo* method)
{
	static bool PersistentCallGroup_Initialize_m3797_init;
	if (!PersistentCallGroup_Initialize_m3797_init)
	{
		Enumerator_t827_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t827_0_0_0);
		List_1_GetEnumerator_m3958_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3958_GenericMethod);
		Enumerator_get_Current_m3959_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3959_GenericMethod);
		Enumerator_MoveNext_m3960_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3960_GenericMethod);
		PersistentCallGroup_Initialize_m3797_init = true;
	}
	PersistentCall_t778 * V_0 = {0};
	Enumerator_t827  V_1 = {0};
	BaseInvokableCall_t775 * V_2 = {0};
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t780 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t827  L_1 = List_1_GetEnumerator_m3958(L_0, /*hidden argument*/List_1_GetEnumerator_m3958_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t778 * L_2 = Enumerator_get_Current_m3959((&V_1), /*hidden argument*/Enumerator_get_Current_m3959_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t778 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m3793(L_3, /*hidden argument*/&PersistentCall_IsValid_m3793_MethodInfo);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t778 * L_5 = V_0;
			UnityEventBase_t779 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t775 * L_7 = PersistentCall_GetRuntimeCall_m3794(L_5, L_6, /*hidden argument*/&PersistentCall_GetRuntimeCall_m3794_MethodInfo);
			V_2 = L_7;
			BaseInvokableCall_t775 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t782 * L_9 = ___invokableList;
			BaseInvokableCall_t775 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m3799(L_9, L_10, /*hidden argument*/&InvokableCallList_AddPersistentInvokableCall_m3799_MethodInfo);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m3960((&V_1), /*hidden argument*/Enumerator_MoveNext_m3960_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t827  L_12 = V_1;
		Enumerator_t827  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t827_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_005b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCallList_t782_il2cpp_TypeInfo;

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2.h"
extern TypeInfo List_1_t783_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t828_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
extern Il2CppType List_1_t783_0_0_0;
extern Il2CppType Predicate_1_t828_0_0_0;
extern MethodInfo List_1__ctor_m3961_MethodInfo;
extern MethodInfo List_1_Add_m3962_MethodInfo;
extern MethodInfo List_1_get_Item_m3963_MethodInfo;
extern MethodInfo BaseInvokableCall_Find_m3964_MethodInfo;
extern MethodInfo List_1_get_Count_m3965_MethodInfo;
extern MethodInfo List_1_Contains_m3966_MethodInfo;
extern MethodInfo Predicate_1__ctor_m3967_MethodInfo;
extern MethodInfo List_1_Clear_m3968_MethodInfo;
extern MethodInfo BaseInvokableCall_Invoke_m3969_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3961_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3962_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m3963_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m3965_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m3966_GenericMethod;
extern Il2CppGenericMethod Predicate_1__ctor_m3967_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAll_m3970_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m3968_GenericMethod;
extern Il2CppGenericMethod List_1_AddRange_m3971_GenericMethod;


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern MethodInfo InvokableCallList__ctor_m3798_MethodInfo;
extern TypeInfo* List_1_t783_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3961_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m3798 (InvokableCallList_t782 * __this, MethodInfo* method)
{
	static bool InvokableCallList__ctor_m3798_init;
	if (!InvokableCallList__ctor_m3798_init)
	{
		List_1_t783_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t783_0_0_0);
		List_1__ctor_m3961_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3961_GenericMethod);
		InvokableCallList__ctor_m3798_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t783_il2cpp_TypeInfo_var);
		List_1_t783 * L_0 = (List_1_t783 *)il2cpp_codegen_object_new (List_1_t783_il2cpp_TypeInfo_var);
		List_1__ctor_m3961(L_0, /*hidden argument*/List_1__ctor_m3961_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t783 * L_1 = (List_1_t783 *)il2cpp_codegen_object_new (List_1_t783_il2cpp_TypeInfo_var);
		List_1__ctor_m3961(L_1, /*hidden argument*/List_1__ctor_m3961_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t783 * L_2 = (List_1_t783 *)il2cpp_codegen_object_new (List_1_t783_il2cpp_TypeInfo_var);
		List_1__ctor_m3961(L_2, /*hidden argument*/List_1__ctor_m3961_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo* List_1_Add_m3962_MethodInfo_var;
extern "C" void InvokableCallList_AddPersistentInvokableCall_m3799 (InvokableCallList_t782 * __this, BaseInvokableCall_t775 * ___call, MethodInfo* method)
{
	static bool InvokableCallList_AddPersistentInvokableCall_m3799_init;
	if (!InvokableCallList_AddPersistentInvokableCall_m3799_init)
	{
		List_1_Add_m3962_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3962_GenericMethod);
		InvokableCallList_AddPersistentInvokableCall_m3799_init = true;
	}
	{
		List_1_t783 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t775 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t775 * >::Invoke(List_1_Add_m3962_MethodInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo InvokableCallList_AddListener_m3800_MethodInfo;
extern MethodInfo* List_1_Add_m3962_MethodInfo_var;
extern "C" void InvokableCallList_AddListener_m3800 (InvokableCallList_t782 * __this, BaseInvokableCall_t775 * ___call, MethodInfo* method)
{
	static bool InvokableCallList_AddListener_m3800_init;
	if (!InvokableCallList_AddListener_m3800_init)
	{
		List_1_Add_m3962_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3962_GenericMethod);
		InvokableCallList_AddListener_m3800_init = true;
	}
	{
		List_1_t783 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t775 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t775 * >::Invoke(List_1_Add_m3962_MethodInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCallList_RemoveListener_m3801_MethodInfo;
extern TypeInfo* List_1_t783_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t828_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3961_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3963_MethodInfo_var;
extern MethodInfo* List_1_Add_m3962_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m3965_MethodInfo_var;
extern MethodInfo* List_1_Contains_m3966_MethodInfo_var;
extern MethodInfo* Predicate_1__ctor_m3967_MethodInfo_var;
extern MethodInfo* List_1_RemoveAll_m3970_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m3801 (InvokableCallList_t782 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	static bool InvokableCallList_RemoveListener_m3801_init;
	if (!InvokableCallList_RemoveListener_m3801_init)
	{
		List_1_t783_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t783_0_0_0);
		Predicate_1_t828_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Predicate_1_t828_0_0_0);
		List_1__ctor_m3961_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3961_GenericMethod);
		List_1_get_Item_m3963_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3963_GenericMethod);
		List_1_Add_m3962_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3962_GenericMethod);
		List_1_get_Count_m3965_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3965_GenericMethod);
		List_1_Contains_m3966_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Contains_m3966_GenericMethod);
		Predicate_1__ctor_m3967_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Predicate_1__ctor_m3967_GenericMethod);
		List_1_RemoveAll_m3970_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_RemoveAll_m3970_GenericMethod);
		InvokableCallList_RemoveListener_m3801_init = true;
	}
	List_1_t783 * V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t783_il2cpp_TypeInfo_var);
		List_1_t783 * L_0 = (List_1_t783 *)il2cpp_codegen_object_new (List_1_t783_il2cpp_TypeInfo_var);
		List_1__ctor_m3961(L_0, /*hidden argument*/List_1__ctor_m3961_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t783 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t775 * L_3 = (BaseInvokableCall_t775 *)VirtFuncInvoker1< BaseInvokableCall_t775 *, int32_t >::Invoke(List_1_get_Item_m3963_MethodInfo_var, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(&BaseInvokableCall_Find_m3964_MethodInfo, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t783 * L_7 = V_0;
		List_1_t783 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t775 * L_10 = (BaseInvokableCall_t775 *)VirtFuncInvoker1< BaseInvokableCall_t775 *, int32_t >::Invoke(List_1_get_Item_m3963_MethodInfo_var, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t775 * >::Invoke(List_1_Add_m3962_MethodInfo_var, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t783 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3965_MethodInfo_var, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t783 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t783 * L_16 = V_0;
		List_1_t783 * L_17 = L_16;
		IntPtr_t L_18 = { GetVirtualMethodInfo(L_17, List_1_Contains_m3966_MethodInfo_var) };
		Predicate_1_t828 * L_19 = (Predicate_1_t828 *)il2cpp_codegen_object_new (Predicate_1_t828_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m3967(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m3967_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m3970(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m3970_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern MethodInfo InvokableCallList_ClearPersistent_m3802_MethodInfo;
extern MethodInfo* List_1_Clear_m3968_MethodInfo_var;
extern "C" void InvokableCallList_ClearPersistent_m3802 (InvokableCallList_t782 * __this, MethodInfo* method)
{
	static bool InvokableCallList_ClearPersistent_m3802_init;
	if (!InvokableCallList_ClearPersistent_m3802_init)
	{
		List_1_Clear_m3968_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m3968_GenericMethod);
		InvokableCallList_ClearPersistent_m3802_init = true;
	}
	{
		List_1_t783 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(List_1_Clear_m3968_MethodInfo_var, L_0);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern MethodInfo InvokableCallList_Invoke_m3803_MethodInfo;
extern MethodInfo* List_1_AddRange_m3971_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3963_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m3965_MethodInfo_var;
extern MethodInfo* List_1_Clear_m3968_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m3803 (InvokableCallList_t782 * __this, ObjectU5BU5D_t219* ___parameters, MethodInfo* method)
{
	static bool InvokableCallList_Invoke_m3803_init;
	if (!InvokableCallList_Invoke_m3803_init)
	{
		List_1_AddRange_m3971_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_AddRange_m3971_GenericMethod);
		List_1_get_Item_m3963_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3963_GenericMethod);
		List_1_get_Count_m3965_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3965_GenericMethod);
		List_1_Clear_m3968_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m3968_GenericMethod);
		InvokableCallList_Invoke_m3803_init = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t783 * L_0 = (__this->___m_ExecutingCalls_2);
		List_1_t783 * L_1 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		List_1_AddRange_m3971(L_0, L_1, /*hidden argument*/List_1_AddRange_m3971_MethodInfo_var);
		List_1_t783 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t783 * L_3 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_2);
		List_1_AddRange_m3971(L_2, L_3, /*hidden argument*/List_1_AddRange_m3971_MethodInfo_var);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		List_1_t783 * L_4 = (__this->___m_ExecutingCalls_2);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BaseInvokableCall_t775 * L_6 = (BaseInvokableCall_t775 *)VirtFuncInvoker1< BaseInvokableCall_t775 *, int32_t >::Invoke(List_1_get_Item_m3963_MethodInfo_var, L_4, L_5);
		ObjectU5BU5D_t219* L_7 = ___parameters;
		NullCheck(L_6);
		VirtActionInvoker1< ObjectU5BU5D_t219* >::Invoke(&BaseInvokableCall_Invoke_m3969_MethodInfo, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		List_1_t783 * L_10 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3965_MethodInfo_var, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t783 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(List_1_Clear_m3968_MethodInfo_var, L_12);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
extern TypeInfo BindingFlags_t808_il2cpp_TypeInfo;
extern TypeInfo Binder_t809_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t810_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t811_il2cpp_TypeInfo;
extern Il2CppType Single_t110_0_0_0;
extern Il2CppType Int32_t92_0_0_0;
extern Il2CppType Boolean_t90_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Type_get_AssemblyQualifiedName_m3972_MethodInfo;
extern MethodInfo UnityEventBase_DirtyPersistentCalls_m3807_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m3806_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_Impl_m3973_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m3812_MethodInfo;
extern MethodInfo UnityEventBase_RebuildPersistentCallsIfNeeded_m3808_MethodInfo;
extern MethodInfo Object_ToString_m442_MethodInfo;
extern MethodInfo Type_get_FullName_m3974_MethodInfo;
extern MethodInfo Type_GetMethod_m3975_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m3976_MethodInfo;
extern MethodInfo Type_get_BaseType_m3898_MethodInfo;


// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern MethodInfo UnityEventBase__ctor_m3804_MethodInfo;
extern "C" void UnityEventBase__ctor_m3804 (UnityEventBase_t779 * __this, MethodInfo* method)
{
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		InvokableCallList_t782 * L_0 = (InvokableCallList_t782 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCallList_t782_il2cpp_TypeInfo));
		InvokableCallList__ctor_m3798(L_0, /*hidden argument*/&InvokableCallList__ctor_m3798_MethodInfo);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t781 * L_1 = (PersistentCallGroup_t781 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PersistentCallGroup_t781_il2cpp_TypeInfo));
		PersistentCallGroup__ctor_m3796(L_1, /*hidden argument*/&PersistentCallGroup__ctor_m3796_MethodInfo);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m2196(__this, /*hidden argument*/&Object_GetType_m2196_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3972_MethodInfo, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m2687_MethodInfo;
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m2687 (UnityEventBase_t779 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m2688_MethodInfo;
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m2688 (UnityEventBase_t779 * __this, MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m3807(__this, /*hidden argument*/&UnityEventBase_DirtyPersistentCalls_m3807_MethodInfo);
		Type_t * L_0 = Object_GetType_m2196(__this, /*hidden argument*/&Object_GetType_m2196_MethodInfo);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m3972_MethodInfo, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3805 (UnityEventBase_t779 * __this, PersistentCall_t778 * ___call, MethodInfo* method)
{
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&Object_t93_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		V_0 = L_0;
		PersistentCall_t778 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t774 * L_2 = PersistentCall_get_arguments_m3792(L_1, /*hidden argument*/&PersistentCall_get_arguments_m3792_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3777(L_2, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3777_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_IsNullOrEmpty_m2457(NULL /*static, unused*/, L_3, /*hidden argument*/&String_IsNullOrEmpty_m2457_MethodInfo);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t778 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t774 * L_6 = PersistentCall_get_arguments_m3792(L_5, /*hidden argument*/&PersistentCall_get_arguments_m3792_MethodInfo);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3777(L_6, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3777_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetType_m3952(NULL /*static, unused*/, L_7, 0, /*hidden argument*/&Type_GetType_m3952_MethodInfo);
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_10 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&Object_t93_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t778 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m3790(L_11, /*hidden argument*/&PersistentCall_get_methodName_m3790_MethodInfo);
		PersistentCall_t778 * L_13 = ___call;
		NullCheck(L_13);
		Object_t93 * L_14 = PersistentCall_get_target_m3789(L_13, /*hidden argument*/&PersistentCall_get_target_m3789_MethodInfo);
		PersistentCall_t778 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m3791(L_15, /*hidden argument*/&PersistentCall_get_mode_m3791_MethodInfo);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m3806(__this, L_12, L_14, L_16, L_17, /*hidden argument*/&UnityEventBase_FindMethod_m3806_MethodInfo);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern TypeInfo* TypeU5BU5D_t97_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3806 (UnityEventBase_t779 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, MethodInfo* method)
{
	static bool UnityEventBase_FindMethod_m3806_init;
	if (!UnityEventBase_FindMethod_m3806_init)
	{
		TypeU5BU5D_t97_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t97_0_0_0);
		UnityEventBase_FindMethod_m3806_init = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t97* G_B10_2 = {0};
	TypeU5BU5D_t97* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t97* G_B9_2 = {0};
	TypeU5BU5D_t97* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(&UnityEventBase_FindMethod_Impl_m3973_MethodInfo, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m3812(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3812_MethodInfo);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t97* L_10 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&Single_t110_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m3812(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3812_MethodInfo);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t97* L_15 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_16 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&Int32_t92_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m3812(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3812_MethodInfo);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t97* L_20 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_21 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&Boolean_t90_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0)) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m3812(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3812_MethodInfo);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t97* L_25 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_26 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0)) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m3812(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3812_MethodInfo);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t97* L_30 = ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_33 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&Object_t93_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1)) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m3812(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3812_MethodInfo);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m3807 (UnityEventBase_t779 * __this, MethodInfo* method)
{
	{
		InvokableCallList_t782 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m3802(L_0, /*hidden argument*/&InvokableCallList_ClearPersistent_m3802_MethodInfo);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m3808 (UnityEventBase_t779 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t781 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t782 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m3797(L_1, L_2, __this, /*hidden argument*/&PersistentCallGroup_Initialize_m3797_MethodInfo);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo UnityEventBase_AddCall_m3809_MethodInfo;
extern "C" void UnityEventBase_AddCall_m3809 (UnityEventBase_t779 * __this, BaseInvokableCall_t775 * ___call, MethodInfo* method)
{
	{
		InvokableCallList_t782 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t775 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m3800(L_0, L_1, /*hidden argument*/&InvokableCallList_AddListener_m3800_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEventBase_RemoveListener_m3810_MethodInfo;
extern "C" void UnityEventBase_RemoveListener_m3810 (UnityEventBase_t779 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	{
		InvokableCallList_t782 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m3801(L_0, L_1, L_2, /*hidden argument*/&InvokableCallList_RemoveListener_m3801_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern MethodInfo UnityEventBase_Invoke_m3811_MethodInfo;
extern "C" void UnityEventBase_Invoke_m3811 (UnityEventBase_t779 * __this, ObjectU5BU5D_t219* ___parameters, MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m3808(__this, /*hidden argument*/&UnityEventBase_RebuildPersistentCallsIfNeeded_m3808_MethodInfo);
		InvokableCallList_t782 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t219* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m3803(L_0, L_1, /*hidden argument*/&InvokableCallList_Invoke_m3803_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern MethodInfo UnityEventBase_ToString_m2686_MethodInfo;
extern "C" String_t* UnityEventBase_ToString_m2686 (UnityEventBase_t779 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Object_ToString_m442(__this, /*hidden argument*/&Object_ToString_m442_MethodInfo);
		Type_t * L_1 = Object_GetType_m2196(__this, /*hidden argument*/&Object_GetType_m2196_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3974_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m296(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral163, L_2, /*hidden argument*/&String_Concat_m296_MethodInfo);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3812 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t97* ___argumentTypes, MethodInfo* method)
{
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t818* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t819 * V_5 = {0};
	ParameterInfoU5BU5D_t818* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m2196(L_0, /*hidden argument*/&Object_GetType_m2196_MethodInfo);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t97* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t809 *, TypeU5BU5D_t97*, ParameterModifierU5BU5D_t810* >::Invoke(&Type_GetMethod_m3975_MethodInfo, L_2, L_3, ((int32_t)52), (Binder_t809 *)NULL, L_4, (ParameterModifierU5BU5D_t810*)(ParameterModifierU5BU5D_t810*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t818* L_8 = (ParameterInfoU5BU5D_t818*)VirtFuncInvoker0< ParameterInfoU5BU5D_t818* >::Invoke(&MethodBase_GetParameters_m3931_MethodInfo, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t818* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t818* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t819 **)(ParameterInfo_t819 **)SZArrayLdElema(L_10, L_12));
		TypeU5BU5D_t97* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15));
		ParameterInfo_t819 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3932_MethodInfo, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m3976_MethodInfo, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m3976_MethodInfo, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t818* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3898_MethodInfo, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_32 = Type_GetTypeFromHandle_m298(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m298_MethodInfo);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_t328_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern MethodInfo UnityEvent__ctor_m2258_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m2258 (UnityEvent_t328 * __this, MethodInfo* method)
{
	static bool UnityEvent__ctor_m2258_init;
	if (!UnityEvent__ctor_m2258_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		UnityEvent__ctor_m2258_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m3804(__this, /*hidden argument*/&UnityEventBase__ctor_m3804_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern MethodInfo UnityEvent_FindMethod_Impl_m2734_MethodInfo;
extern TypeInfo* TypeU5BU5D_t97_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m2734 (UnityEvent_t328 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_FindMethod_Impl_m2734_init;
	if (!UnityEvent_FindMethod_Impl_m2734_init)
	{
		TypeU5BU5D_t97_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t97_0_0_0);
		UnityEvent_FindMethod_Impl_m2734_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m3812(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t97*)SZArrayNew(TypeU5BU5D_t97_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3812_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEvent_GetDelegate_m2735_MethodInfo;
extern "C" BaseInvokableCall_t775 * UnityEvent_GetDelegate_m2735 (UnityEvent_t328 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t776 * L_2 = (InvokableCall_t776 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t776_il2cpp_TypeInfo));
		InvokableCall__ctor_m3785(L_2, L_0, L_1, /*hidden argument*/&InvokableCall__ctor_m3785_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern MethodInfo UnityEvent_Invoke_m2260_MethodInfo;
extern "C" void UnityEvent_Invoke_m2260 (UnityEvent_t328 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t219* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m3811(__this, L_0, /*hidden argument*/&UnityEventBase_Invoke_m3811_MethodInfo);
		return;
	}
}
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UserAuthorizationDialog_t784_il2cpp_TypeInfo;
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m248_MethodInfo;


// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern MethodInfo UserAuthorizationDialog__ctor_m3813_MethodInfo;
extern "C" void UserAuthorizationDialog__ctor_m3813 (UserAuthorizationDialog_t784 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m248(__this, /*hidden argument*/&MonoBehaviour__ctor_m248_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern MethodInfo UserAuthorizationDialog_Start_m3814_MethodInfo;
extern "C" void UserAuthorizationDialog_Start_m3814 (UserAuthorizationDialog_t784 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern MethodInfo UserAuthorizationDialog_OnGUI_m3815_MethodInfo;
extern "C" void UserAuthorizationDialog_OnGUI_m3815 (UserAuthorizationDialog_t784 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern MethodInfo UserAuthorizationDialog_DoUserAuthorizationDialog_m3816_MethodInfo;
extern "C" void UserAuthorizationDialog_DoUserAuthorizationDialog_m3816 (UserAuthorizationDialog_t784 * __this, int32_t ___windowID, MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultValueAttribute_t785_il2cpp_TypeInfo;
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"
extern TypeInfo Attribute_t638_il2cpp_TypeInfo;
extern MethodInfo DefaultValueAttribute_get_Value_m3818_MethodInfo;
extern MethodInfo Object_Equals_m440_MethodInfo;
extern MethodInfo Attribute_GetHashCode_m3977_MethodInfo;
extern MethodInfo Object_GetHashCode_m441_MethodInfo;


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern MethodInfo DefaultValueAttribute__ctor_m3817_MethodInfo;
extern "C" void DefaultValueAttribute__ctor_m3817 (DefaultValueAttribute_t785 * __this, String_t* ___value, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m3818 (DefaultValueAttribute_t785 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern MethodInfo DefaultValueAttribute_Equals_m3819_MethodInfo;
extern "C" bool DefaultValueAttribute_Equals_m3819 (DefaultValueAttribute_t785 * __this, Object_t * ___obj, MethodInfo* method)
{
	DefaultValueAttribute_t785 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t785 *)IsInst(L_0, InitializedTypeInfo(&DefaultValueAttribute_t785_il2cpp_TypeInfo)));
		DefaultValueAttribute_t785 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t785 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m3818(L_3, /*hidden argument*/&DefaultValueAttribute_get_Value_m3818_MethodInfo);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t785 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m3818(L_6, /*hidden argument*/&DefaultValueAttribute_get_Value_m3818_MethodInfo);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m440_MethodInfo, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern MethodInfo DefaultValueAttribute_GetHashCode_m3820_MethodInfo;
extern "C" int32_t DefaultValueAttribute_GetHashCode_m3820 (DefaultValueAttribute_t785 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m3977(__this, /*hidden argument*/&Attribute_GetHashCode_m3977_MethodInfo);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m441_MethodInfo, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExcludeFromDocsAttribute_t786_il2cpp_TypeInfo;
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern MethodInfo ExcludeFromDocsAttribute__ctor_m3821_MethodInfo;
extern "C" void ExcludeFromDocsAttribute__ctor_m3821 (ExcludeFromDocsAttribute_t786 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FormerlySerializedAsAttribute_t528_il2cpp_TypeInfo;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern MethodInfo FormerlySerializedAsAttribute__ctor_m2685_MethodInfo;
extern "C" void FormerlySerializedAsAttribute__ctor_m2685 (FormerlySerializedAsAttribute_t528 * __this, String_t* ___oldName, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRules_t787_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRuleAttribute_t788_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"

// System.Enum
#include "mscorlib_System_Enum.h"
extern TypeInfo Enum_t109_il2cpp_TypeInfo;
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
extern MethodInfo Enum_ToString_m412_MethodInfo;
extern MethodInfo TypeInferenceRuleAttribute__ctor_m3823_MethodInfo;


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern MethodInfo TypeInferenceRuleAttribute__ctor_m3822_MethodInfo;
extern "C" void TypeInferenceRuleAttribute__ctor_m3822 (TypeInferenceRuleAttribute_t788 * __this, int32_t ___rule, MethodInfo* method)
{
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeInferenceRules_t787_il2cpp_TypeInfo), &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m412_MethodInfo, L_2);
		TypeInferenceRuleAttribute__ctor_m3823(__this, L_3, /*hidden argument*/&TypeInferenceRuleAttribute__ctor_m3823_MethodInfo);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m3823 (TypeInferenceRuleAttribute_t788 * __this, String_t* ___rule, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern MethodInfo TypeInferenceRuleAttribute_ToString_m3824_MethodInfo;
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m3824 (TypeInferenceRuleAttribute_t788 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericStack_t648_il2cpp_TypeInfo;
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
extern MethodInfo Stack__ctor_m3978_MethodInfo;


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern MethodInfo GenericStack__ctor_m3825_MethodInfo;
extern "C" void GenericStack__ctor_m3825 (GenericStack_t648 * __this, MethodInfo* method)
{
	{
		Stack__ctor_m3978(__this, /*hidden argument*/&Stack__ctor_m3978_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern MethodInfo UnityAction__ctor_m2423_MethodInfo;
extern "C" void UnityAction__ctor_m2423 (UnityAction_t348 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m2299 (UnityAction_t348 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m2299((UnityAction_t348 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_UnityAction_t348(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo UnityAction_BeginInvoke_m3826_MethodInfo;
extern "C" Object_t * UnityAction_BeginInvoke_m3826 (UnityAction_t348 * __this, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern MethodInfo UnityAction_EndInvoke_m3827_MethodInfo;
extern "C" void UnityAction_EndInvoke_m3827 (UnityAction_t348 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
