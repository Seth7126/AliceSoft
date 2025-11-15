// 函数: sub_563e10
// 地址: 0x563e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(*(arg1 + 0xc) + 4)
int32_t* esi = *(arg1 + 0x18)
*(arg1 + 0x18) = 0

if (esi != 0)
    sub_564e60(esi)
    int32_t var_20_1 = 0x48
    operator new(esi)

LeaveCriticalSection(*(arg1 + 0xc) + 4)
EnterCriticalSection(*(arg1 + 4) + 4)
int32_t var_8_1 = 0
sub_564db0(arg1 + 0x10, *(*(arg1 + 0x10) + 4))
void* eax_10 = *(arg1 + 0x10)
*(eax_10 + 4) = eax_10
int32_t* eax_11 = *(arg1 + 0x10)
*eax_11 = eax_11
void* eax_12 = *(arg1 + 0x10)
*(eax_12 + 8) = eax_12
*(arg1 + 0x14) = 0
int32_t result = LeaveCriticalSection(*(arg1 + 4) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
