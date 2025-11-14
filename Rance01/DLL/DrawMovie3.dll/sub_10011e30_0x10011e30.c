// 函数: sub_10011e30
// 地址: 0x10011e30
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019598
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* var_20 = arg1 + 0x1c
EnterCriticalSection(arg1 + 0x1c)
int32_t var_4 = 0
int32_t var_1c
int32_t var_14
int32_t result = (*(*arg2 + 0x14))(arg2, &var_1c, &var_14)

if (result s< 0)
    LeaveCriticalSection(arg1 + 0x1c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t eax_6 = var_14
*(arg1 + 0x38) = var_1c
int32_t var_18
*(arg1 + 0x3c) = var_18
*(arg1 + 0x40) = eax_6
int32_t var_10
*(arg1 + 0x44) = var_10
*(arg1 + 0x48) = 0
LeaveCriticalSection(arg1 + 0x1c)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
