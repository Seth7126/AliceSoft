// 函数: sub_1000c660
// 地址: 0x1000c660
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

if (*(arg1 + 0x6c) != 0)
    int32_t* eax_3 = *(arg1 + 0x6c)
    (*(*eax_3 + 4))(eax_3)

int32_t result = *(arg1 + 0x6c)
LeaveCriticalSection(arg1 + 0x94)
fsbase->NtTib.ExceptionList = ExceptionList
return result
