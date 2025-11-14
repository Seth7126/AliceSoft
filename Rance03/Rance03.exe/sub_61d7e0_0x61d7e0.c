// 函数: sub_61d7e0
// 地址: 0x61d7e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ce198
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_28 = &var_4
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int32_t eax_2 = __security_cookie ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_24 = &thread::CCriticalLock::`vftable'
void* var_1c = &arg3[0x2c]
EnterCriticalSection(arg3[0x2d] + 4)
char hHandle = 1
int32_t* var_c_1 = nullptr

if ((*(*arg3 + 0x4c))(eax_2) != 0)
    HANDLE hEvent = arg3[0x21]
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    hHandle.d = arg3[0x1f]
    enum WAIT_EVENT eax_9 = WaitForSingleObject(hHandle, 0x1388)
    
    if (eax_9 == WAIT_TIMEOUT)
        sub_455870("CDirectMusicBuffer::Stop()\n")
    else if (eax_9 == WAIT_ABANDONED)
        sub_455870("CDirectMusicBuffer::Stop()\n")
    
    arg3[0x1c].b = 0
    HANDLE hEvent_1 = arg3[0x25]
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)
    
    HANDLE hEvent_2 = arg3[0x23]
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
    
    HANDLE hEvent_3 = arg3[0x21]
    
    if (hEvent_3 != 0)
        ResetEvent(hEvent_3)
    
    int32_t eax_10 = arg3[0x1f]
    
    if (eax_10 != 0)
        hHandle.d = eax_10
        WaitForSingleObject(hHandle, 0xffffffff)
        CloseHandle(arg3[0x1f])
        arg3[0x1f] = 0
    
    int32_t* ecx_1 = arg3[7]
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0x18))(0)
else
    int32_t eax_8 = arg3[0x1f]
    
    if (eax_8 != 0)
        hHandle.d = eax_8
        WaitForSingleObject(hHandle, 0xffffffff)
        CloseHandle(arg3[0x1f])
        arg3[0x1f] = 0

LeaveCriticalSection(arg3[0x2d] + 4)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = arg4
*var_c_1
return result
