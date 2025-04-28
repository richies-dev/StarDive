#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t925;
// System.Net.WebRequest
struct WebRequest_t919;
// System.Uri
struct Uri_t920;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m3976 (FtpRequestCreator_t925 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t919 * FtpRequestCreator_Create_m3977 (FtpRequestCreator_t925 * __this, Uri_t920 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
