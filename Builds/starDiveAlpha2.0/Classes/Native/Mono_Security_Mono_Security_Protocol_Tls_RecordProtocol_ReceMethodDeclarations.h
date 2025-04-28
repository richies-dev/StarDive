#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1277;
// System.IO.Stream
struct Stream_t233;
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

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m5825 (ReceiveRecordAsyncResult_t1277 * __this, AsyncCallback_t380 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t1019* ___initialBuffer, Stream_t233 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t233 * ReceiveRecordAsyncResult_get_Record_m5826 (ReceiveRecordAsyncResult_t1277 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t1019* ReceiveRecordAsyncResult_get_ResultingBuffer_m5827 (ReceiveRecordAsyncResult_t1277 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t1019* ReceiveRecordAsyncResult_get_InitialBuffer_m5828 (ReceiveRecordAsyncResult_t1277 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m5829 (ReceiveRecordAsyncResult_t1277 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t234 * ReceiveRecordAsyncResult_get_AsyncException_m5830 (ReceiveRecordAsyncResult_t1277 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m5831 (ReceiveRecordAsyncResult_t1277 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1278 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m5832 (ReceiveRecordAsyncResult_t1277 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m5833 (ReceiveRecordAsyncResult_t1277 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5834 (ReceiveRecordAsyncResult_t1277 * __this, Exception_t234 * ___ex, ByteU5BU5D_t1019* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5835 (ReceiveRecordAsyncResult_t1277 * __this, Exception_t234 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5836 (ReceiveRecordAsyncResult_t1277 * __this, ByteU5BU5D_t1019* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
