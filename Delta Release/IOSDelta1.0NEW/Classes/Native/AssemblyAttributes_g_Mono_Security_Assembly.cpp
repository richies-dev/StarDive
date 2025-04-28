#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo AssemblyCopyrightAttribute_t525_il2cpp_TypeInfo;
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
extern MethodInfo AssemblyCopyrightAttribute__ctor_m2603_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t517_il2cpp_TypeInfo;
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
extern MethodInfo AssemblyDescriptionAttribute__ctor_m2595_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t520_il2cpp_TypeInfo;
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
extern MethodInfo AssemblyProductAttribute__ctor_m2598_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t516_il2cpp_TypeInfo;
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
extern MethodInfo AssemblyTitleAttribute__ctor_m2594_MethodInfo;
extern TypeInfo CLSCompliantAttribute_t884_il2cpp_TypeInfo;
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
extern MethodInfo CLSCompliantAttribute__ctor_m3874_MethodInfo;
extern TypeInfo AssemblyCompanyAttribute_t519_il2cpp_TypeInfo;
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
extern MethodInfo AssemblyCompanyAttribute__ctor_m2597_MethodInfo;
extern TypeInfo ComVisibleAttribute_t523_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
extern MethodInfo ComVisibleAttribute__ctor_m2601_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t51_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m170_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m171_MethodInfo;
extern TypeInfo InternalsVisibleToAttribute_t861_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
extern MethodInfo InternalsVisibleToAttribute__ctor_m3848_MethodInfo;
extern TypeInfo AssemblyKeyFileAttribute_t887_il2cpp_TypeInfo;
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
extern MethodInfo AssemblyKeyFileAttribute__ctor_m3877_MethodInfo;
extern TypeInfo AssemblyDelaySignAttribute_t888_il2cpp_TypeInfo;
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
extern MethodInfo AssemblyDelaySignAttribute__ctor_m3878_MethodInfo;
extern TypeInfo NeutralResourcesLanguageAttribute_t883_il2cpp_TypeInfo;
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern MethodInfo NeutralResourcesLanguageAttribute__ctor_m3873_MethodInfo;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t525 * tmp;
		tmp = (AssemblyCopyrightAttribute_t525 *)il2cpp_codegen_object_new (&AssemblyCopyrightAttribute_t525_il2cpp_TypeInfo);
		AssemblyCopyrightAttribute__ctor_m2603(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &AssemblyCopyrightAttribute__ctor_m2603_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t517 * tmp;
		tmp = (AssemblyDescriptionAttribute_t517 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t517_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m2595(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &AssemblyDescriptionAttribute__ctor_m2595_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t520 * tmp;
		tmp = (AssemblyProductAttribute_t520 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t520_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m2598(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &AssemblyProductAttribute__ctor_m2598_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t516 * tmp;
		tmp = (AssemblyTitleAttribute_t516 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t516_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m2594(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &AssemblyTitleAttribute__ctor_m2594_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t884 * tmp;
		tmp = (CLSCompliantAttribute_t884 *)il2cpp_codegen_object_new (&CLSCompliantAttribute_t884_il2cpp_TypeInfo);
		CLSCompliantAttribute__ctor_m3874(tmp, true, &CLSCompliantAttribute__ctor_m3874_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t519 * tmp;
		tmp = (AssemblyCompanyAttribute_t519 *)il2cpp_codegen_object_new (&AssemblyCompanyAttribute_t519_il2cpp_TypeInfo);
		AssemblyCompanyAttribute__ctor_m2597(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &AssemblyCompanyAttribute__ctor_m2597_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t523 * tmp;
		tmp = (ComVisibleAttribute_t523 *)il2cpp_codegen_object_new (&ComVisibleAttribute_t523_il2cpp_TypeInfo);
		ComVisibleAttribute__ctor_m2601(tmp, false, &ComVisibleAttribute__ctor_m2601_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t51 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t51 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t51_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m170(tmp, &RuntimeCompatibilityAttribute__ctor_m170_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m171(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m171_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t861 * tmp;
		tmp = (InternalsVisibleToAttribute_t861 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t861_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m3848(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &InternalsVisibleToAttribute__ctor_m3848_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t887 * tmp;
		tmp = (AssemblyKeyFileAttribute_t887 *)il2cpp_codegen_object_new (&AssemblyKeyFileAttribute_t887_il2cpp_TypeInfo);
		AssemblyKeyFileAttribute__ctor_m3877(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &AssemblyKeyFileAttribute__ctor_m3877_MethodInfo);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t888 * tmp;
		tmp = (AssemblyDelaySignAttribute_t888 *)il2cpp_codegen_object_new (&AssemblyDelaySignAttribute_t888_il2cpp_TypeInfo);
		AssemblyDelaySignAttribute__ctor_m3878(tmp, true, &AssemblyDelaySignAttribute__ctor_m3878_MethodInfo);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t883 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t883 *)il2cpp_codegen_object_new (&NeutralResourcesLanguageAttribute_t883_il2cpp_TypeInfo);
		NeutralResourcesLanguageAttribute__ctor_m3873(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &NeutralResourcesLanguageAttribute__ctor_m3873_MethodInfo);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
