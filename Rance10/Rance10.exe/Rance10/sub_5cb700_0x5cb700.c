// 函数: sub_5cb700
// 地址: 0x5cb700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5d1430(arg1 + 0xac)
sub_5d0dd0(arg1 + 0x94)
sub_5d1430(arg1 + 0x7c)
sub_5d1430(arg1 + 0x64)
EnterCriticalSection(*(arg1 + 0x60) + 4)
int32_t var_8_1 = 0
sub_5d17c0(*(*(arg1 + 0xc4) + 4))
void* eax_6 = *(arg1 + 0xc4)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 0xc4)
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0xc4)
*(eax_8 + 8) = eax_8
*(arg1 + 0xc8) = 0
int32_t result = LeaveCriticalSection(*(arg1 + 0x60) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
