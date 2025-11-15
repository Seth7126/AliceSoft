// 函数: sub_699430
// 地址: 0x699430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b290
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if ((*(*arg1 + 0x54))(eax_2) != 0)
    HANDLE hEvent = arg1[0x12]
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    enum WAIT_EVENT eax_6 = WaitForSingleObject(arg1[0x10], 0x1388)
    
    if (eax_6 == WAIT_TIMEOUT)
        void* var_2c
        sub_403360(&var_2c, "CDirectSoundBuffer::Stop()\n")
        int32_t var_8_1 = 0
        sub_45aae0(&var_2c)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
    else if (eax_6 == WAIT_ABANDONED)
        void var_44
        sub_403360(&var_44, "CDirectSoundBuffer::Stop()\n")
        int32_t var_8_2 = 1
        sub_45aae0(&var_44)
        sub_403320(&var_44)
    
    HANDLE hEvent_1 = arg1[0x12]
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)

BOOL hHandle = arg1[0x10]

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[0x10])
    arg1[0x10] = 0

hHandle.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return hHandle
