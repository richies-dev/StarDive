#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1552;
// System.Reflection.Assembly
struct Assembly_t1149;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1358;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1548;
// System.Type[]
struct TypeU5BU5D_t97;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t825;
// System.Reflection.Binder
struct Binder_t809;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t810;
// System.Object[]
struct ObjectU5BU5D_t219;
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1555;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1554;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t1562;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1361;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1359;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1360;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t812;
// System.String[]
struct StringU5BU5D_t104;
// System.Exception
struct Exception_t234;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.Emit.PackingSize
#include "mscorlib_System_Reflection_Emit_PackingSize.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"

// System.Void System.Reflection.Emit.TypeBuilder::.ctor(System.Reflection.Emit.ModuleBuilder,System.Reflection.TypeAttributes,System.Int32)
extern "C" void TypeBuilder__ctor_m8734 (TypeBuilder_t1552 * __this, ModuleBuilder_t1548 * ___mb, int32_t ___attr, int32_t ___table_idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::.ctor(System.Reflection.Emit.ModuleBuilder,System.String,System.Reflection.TypeAttributes,System.Type,System.Type[],System.Reflection.Emit.PackingSize,System.Int32,System.Type)
extern "C" void TypeBuilder__ctor_m8735 (TypeBuilder_t1552 * __this, ModuleBuilder_t1548 * ___mb, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t97* ___interfaces, int32_t ___packing_size, int32_t ___type_size, Type_t * ___nesting_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m8736 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)
extern "C" void TypeBuilder_setup_internal_class_m8737 (TypeBuilder_t1552 * __this, TypeBuilder_t1552 * ___tb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t1149 * TypeBuilder_get_Assembly_m8738 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m8739 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m8740 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m8741 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m8742 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::GetFullName()
extern "C" String_t* TypeBuilder_GetFullName_m8743 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m8744 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t1358 * TypeBuilder_get_Module_m8745 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m8746 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m8747 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m8748 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t825 * TypeBuilder_GetConstructorImpl_m8749 (TypeBuilder_t1552 * __this, int32_t ___bindingAttr, Binder_t809 * ___binder, int32_t ___callConvention, TypeU5BU5D_t97* ___types, ParameterModifierU5BU5D_t810* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeBuilder_IsDefined_m8750 (TypeBuilder_t1552 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t219* TypeBuilder_GetCustomAttributes_m8751 (TypeBuilder_t1552 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t219* TypeBuilder_GetCustomAttributes_m8752 (TypeBuilder_t1552 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[])
extern "C" ConstructorBuilder_t1555 * TypeBuilder_DefineConstructor_m8753 (TypeBuilder_t1552 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t97* ___parameterTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C" ConstructorBuilder_t1555 * TypeBuilder_DefineConstructor_m8754 (TypeBuilder_t1552 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t97* ___parameterTypes, TypeU5BU5DU5BU5D_t1554* ___requiredCustomModifiers, TypeU5BU5DU5BU5D_t1554* ___optionalCustomModifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::append_method(System.Reflection.Emit.MethodBuilder)
extern "C" void TypeBuilder_append_method_m8755 (TypeBuilder_t1552 * __this, MethodBuilder_t1562 * ___mb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Type,System.Type[])
extern "C" MethodBuilder_t1562 * TypeBuilder_DefineMethod_m8756 (TypeBuilder_t1552 * __this, String_t* ___name, int32_t ___attributes, Type_t * ___returnType, TypeU5BU5D_t97* ___parameterTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[])
extern "C" MethodBuilder_t1562 * TypeBuilder_DefineMethod_m8757 (TypeBuilder_t1552 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t97* ___parameterTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type[],System.Type[],System.Type[][],System.Type[][])
extern "C" MethodBuilder_t1562 * TypeBuilder_DefineMethod_m8758 (TypeBuilder_t1552 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t97* ___returnTypeRequiredCustomModifiers, TypeU5BU5D_t97* ___returnTypeOptionalCustomModifiers, TypeU5BU5D_t97* ___parameterTypes, TypeU5BU5DU5BU5D_t1554* ___parameterTypeRequiredCustomModifiers, TypeU5BU5DU5BU5D_t1554* ___parameterTypeOptionalCustomModifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::DefineMethodOverride(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C" void TypeBuilder_DefineMethodOverride_m8759 (TypeBuilder_t1552 * __this, MethodInfo_t * ___methodInfoBody, MethodInfo_t * ___methodInfoDeclaration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1361* TypeBuilder_GetConstructors_m8760 (TypeBuilder_t1552 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1361* TypeBuilder_GetConstructorsInternal_m8761 (TypeBuilder_t1552 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C" Type_t * TypeBuilder_GetElementType_m8762 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeBuilder_GetEvent_m8763 (TypeBuilder_t1552 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeBuilder_GetField_m8764 (TypeBuilder_t1552 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t1359* TypeBuilder_GetFields_m8765 (TypeBuilder_t1552 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t97* TypeBuilder_GetInterfaces_m8766 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t1360* TypeBuilder_GetMethodsByName_m8767 (TypeBuilder_t1552 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1360* TypeBuilder_GetMethods_m8768 (TypeBuilder_t1552 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * TypeBuilder_GetMethodImpl_m8769 (TypeBuilder_t1552 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t809 * ___binder, int32_t ___callConvention, TypeU5BU5D_t97* ___types, ParameterModifierU5BU5D_t810* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeBuilder_GetPropertyImpl_m8770 (TypeBuilder_t1552 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t809 * ___binder, Type_t * ___returnType, TypeU5BU5D_t97* ___types, ParameterModifierU5BU5D_t810* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C" bool TypeBuilder_HasElementTypeImpl_m8771 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m8772 (TypeBuilder_t1552 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t809 * ___binder, Object_t * ___target, ObjectU5BU5D_t219* ___args, ParameterModifierU5BU5D_t810* ___modifiers, CultureInfo_t812 * ___culture, StringU5BU5D_t104* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C" bool TypeBuilder_IsArrayImpl_m8773 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C" bool TypeBuilder_IsByRefImpl_m8774 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C" bool TypeBuilder_IsPointerImpl_m8775 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C" bool TypeBuilder_IsPrimitiveImpl_m8776 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C" bool TypeBuilder_IsValueTypeImpl_m8777 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * TypeBuilder_MakeGenericType_m8778 (TypeBuilder_t1552 * __this, TypeU5BU5D_t97* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1357  TypeBuilder_get_TypeHandle_m8779 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.TypeBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t TypeBuilder_get_next_table_index_m8780 (TypeBuilder_t1552 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m8781 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m8782 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C" Exception_t234 * TypeBuilder_not_supported_m8783 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_not_created()
extern "C" void TypeBuilder_check_not_created_m8784 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m8785 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_name(System.String,System.String)
extern "C" void TypeBuilder_check_name_m8786 (TypeBuilder_t1552 * __this, String_t* ___argName, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C" String_t* TypeBuilder_ToString_m8787 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C" bool TypeBuilder_IsAssignableFrom_m8788 (TypeBuilder_t1552 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C" bool TypeBuilder_IsSubclassOf_m8789 (TypeBuilder_t1552 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C" bool TypeBuilder_IsAssignableTo_m8790 (TypeBuilder_t1552 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t97* TypeBuilder_GetGenericArguments_m8791 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m8792 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m8793 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C" bool TypeBuilder_get_IsGenericParameter_m8794 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m8795 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C" bool TypeBuilder_get_IsGenericType_m8796 (TypeBuilder_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
