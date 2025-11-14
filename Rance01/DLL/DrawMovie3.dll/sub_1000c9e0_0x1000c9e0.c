// 函数: sub_1000c9e0
// 地址: 0x1000c9e0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019068
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* var_10_1 = &arg1[0x25]
EnterCriticalSection(&arg1[0x25])
int32_t var_4 = 0

if (arg1[0x19] != 1)
    arg1[0x19] = 1
    timeBeginPeriod(1)
    (*(*arg1 + 0x40))(eax_2)
    int32_t eax_4 = arg1[0x1b]
    
    if (eax_4 == 0)
        int32_t result = (*(*arg1 + 0x60))()
        LeaveCriticalSection(&arg1[0x25])
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if ((*(*arg1 + 0x54))(eax_4) == 0)
        SetEvent(arg1[0x15])

LeaveCriticalSection(&arg1[0x25])
fsbase->NtTib.ExceptionList = ExceptionList
return 0
