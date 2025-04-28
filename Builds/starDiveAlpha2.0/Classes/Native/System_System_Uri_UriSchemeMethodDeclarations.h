#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri/UriScheme
struct UriScheme_t1130;
struct UriScheme_t1130_marshaled;
// System.String
struct String_t;

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m4919 (UriScheme_t1130 * __this, String_t* ___s, String_t* ___d, int32_t ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t1130_marshal(const UriScheme_t1130& unmarshaled, UriScheme_t1130_marshaled& marshaled);
void UriScheme_t1130_marshal_back(const UriScheme_t1130_marshaled& marshaled, UriScheme_t1130& unmarshaled);
void UriScheme_t1130_marshal_cleanup(UriScheme_t1130_marshaled& marshaled);
