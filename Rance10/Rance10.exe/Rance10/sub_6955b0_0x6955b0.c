// 函数: sub_6955b0
// 地址: 0x6955b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747d28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_38 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(arg1[0x26] + 4)
char var_34 = 1
int32_t var_8_1 = 0

if ((*(*arg1 + 0x54))(eax_2) != 0)
    HANDLE hEvent = arg1[0x1a]
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    enum WAIT_EVENT eax_9
    int32_t* ecx_1
    eax_9, ecx_1 = WaitForSingleObject(arg1[0x18], 0x1388)
    void* var_2c
    
    if (eax_9 == WAIT_TIMEOUT)
        sub_403360(&var_2c, "CDirectMusicBuffer::Stop()\n")
        var_8_1.b = 1
        sub_45aae0(&var_2c)
        var_8_1.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
    else if (eax_9 == WAIT_ABANDONED)
        sub_403360(&var_2c, "CDirectMusicBuffer::Stop()\n")
        var_8_1.b = 2
        sub_45aae0(&var_2c)
        var_8_1.b = 0
        sub_403320(&var_2c)
    ecx_1.b = 0
    arg1[0x15].b = 0
    ecx_1.b = arg1[0x15].b
    HANDLE hEvent_1 = arg1[0x1e]
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)
    
    HANDLE hEvent_2 = arg1[0x1c]
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
    
    HANDLE hEvent_3 = arg1[0x1a]
    
    if (hEvent_3 != 0)
        ResetEvent(hEvent_3)
    
    HANDLE hHandle_1 = arg1[0x18]
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)
        CloseHandle(arg1[0x18])
        arg1[0x18] = 0
    
    int32_t* ecx_6 = arg1[7]
    
    if (ecx_6 != 0)
        (*(*ecx_6 + 0x18))(0)
else
    HANDLE hHandle = arg1[0x18]
    
    if (hHandle != 0)
        WaitForSingleObject(hHandle, 0xffffffff)
        CloseHandle(arg1[0x18])
        arg1[0x18] = 0

LeaveCriticalSection(arg1[0x26] + 4)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
