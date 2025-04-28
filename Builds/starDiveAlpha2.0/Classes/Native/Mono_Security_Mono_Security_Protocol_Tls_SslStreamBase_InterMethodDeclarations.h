#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t1292;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t234;
// System.Threading.WaitHandle
struct WaitHandle_t1278;
// System.AsyncCallback
struct AsyncCallback_t380;

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" void InternalAsyncResult__ctor_m5942 (InternalAsyncResult_t1292 * __this, AsyncCallback_t380 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t1019* ___buffer, int32_t ___offset, int32_t ___count, bool ___fromWrite, bool ___proceedAfterHandshake, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
extern "C" bool InternalAsyncResult_get_ProceedAfterHandshake_m5943 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
extern "C" bool InternalAsyncResult_get_FromWrite_m5944 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
extern "C" ByteU5BU5D_t1019* InternalAsyncResult_get_Buffer_m5945 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
extern "C" int32_t InternalAsyncResult_get_Offset_m5946 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
extern "C" int32_t InternalAsyncResult_get_Count_m5947 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
extern "C" int32_t InternalAsyncResult_get_BytesRead_m5948 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
extern "C" Object_t * InternalAsyncResult_get_AsyncState_m5949 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
extern "C" Exception_t234 * InternalAsyncResult_get_AsyncException_m5950 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
extern "C" bool InternalAsyncResult_get_CompletedWithError_m5951 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1278 * InternalAsyncResult_get_AsyncWaitHandle_m5952 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
extern "C" bool InternalAsyncResult_get_IsCompleted_m5953 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void InternalAsyncResult_SetComplete_m5954 (InternalAsyncResult_t1292 * __this, Exception_t234 * ___ex, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
extern "C" void InternalAsyncResult_SetComplete_m5955 (InternalAsyncResult_t1292 * __this, Exception_t234 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
extern "C" void InternalAsyncResult_SetComplete_m5956 (InternalAsyncResult_t1292 * __this, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
extern "C" void InternalAsyncResult_SetComplete_m5957 (InternalAsyncResult_t1292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
