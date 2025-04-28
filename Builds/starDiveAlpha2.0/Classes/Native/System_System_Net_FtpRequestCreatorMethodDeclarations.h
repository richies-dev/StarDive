#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t992;
// System.Net.WebRequest
struct WebRequest_t986;
// System.Uri
struct Uri_t987;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m4213 (FtpRequestCreator_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t986 * FtpRequestCreator_Create_m4214 (FtpRequestCreator_t992 * __this, Uri_t987 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
