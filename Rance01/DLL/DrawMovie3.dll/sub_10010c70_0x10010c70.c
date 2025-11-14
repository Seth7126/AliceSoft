// 函数: sub_10010c70
// 地址: 0x10010c70
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100194d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* esi = arg1
CRITICAL_SECTION* SpinCount = esi->SpinCount
arg1 = SpinCount
EnterCriticalSection(SpinCount)
int32_t var_4 = 0

if (*(esi->__offset(0x1c).d + 0x14) != 0)
    LeaveCriticalSection(SpinCount)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80040224

int32_t result

if (esi->OwningThread == 0)
    result = 1
else
    int32_t result_1 = (*(*(esi - 0xc) + 0x2c))(eax_2)
    
    if (result_1 s>= 0)
        int32_t* OwningThread = esi->OwningThread
        (*(*OwningThread + 8))(OwningThread)
        esi->OwningThread = 0
        result = 0
    else
        result = result_1

LeaveCriticalSection(SpinCount)
fsbase->NtTib.ExceptionList = ExceptionList
return result
