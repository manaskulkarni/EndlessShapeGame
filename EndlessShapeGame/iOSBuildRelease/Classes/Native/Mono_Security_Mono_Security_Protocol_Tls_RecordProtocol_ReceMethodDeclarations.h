#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1328;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1083;
// System.IO.Stream
struct Stream_t1330;
// System.Exception
struct Exception_t236;
// System.Threading.WaitHandle
struct WaitHandle_t1376;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m6993 (ReceiveRecordAsyncResult_t1328 * __this, AsyncCallback_t93 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t1083* ___initialBuffer, Stream_t1330 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1330 * ReceiveRecordAsyncResult_get_Record_m6994 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t1083* ReceiveRecordAsyncResult_get_ResultingBuffer_m6995 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t1083* ReceiveRecordAsyncResult_get_InitialBuffer_m6996 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m6997 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t236 * ReceiveRecordAsyncResult_get_AsyncException_m6998 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m6999 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1376 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m7000 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m7001 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m7002 (ReceiveRecordAsyncResult_t1328 * __this, Exception_t236 * ___ex, ByteU5BU5D_t1083* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m7003 (ReceiveRecordAsyncResult_t1328 * __this, Exception_t236 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m7004 (ReceiveRecordAsyncResult_t1328 * __this, ByteU5BU5D_t1083* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
