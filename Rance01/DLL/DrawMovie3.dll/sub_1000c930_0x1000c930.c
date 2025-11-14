// 函数: sub_1000c930
// 地址: 0x1000c930
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019068
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* var_10_1 = arg1 + 0x94
EnterCriticalSection(arg1 + 0x94)
int32_t var_4 = 0

if (*(arg1 + 0x64) == 0)
    LeaveCriticalSection(arg1 + 0x94)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int32_t* ecx_2 = *(arg1 + 0x50)
*(arg1 + 0xc0) = 0

if (ecx_2 != 0)
    sub_10011ff0(ecx_2)

*(arg1 + 0x74) = 1
int32_t result = sub_1000eed0(arg1, 1, 0, arg1 + 0xc)
LeaveCriticalSection(arg1 + 0x94)
fsbase->NtTib.ExceptionList = ExceptionList
return result
