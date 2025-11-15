// 函数: sub_608450
// 地址: 0x608450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_622840(arg3, arg2)

if (eax_3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0xffffffff

struct _EXCEPTION_REGISTRATION_RECORD* esi_1 = *(eax_3 + 0x34) + 1
int128_t var_2c
__builtin_memset(&var_2c, 0, 0x18)
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD* var_30 = esi_1

if (esi_1 s> 0)
    sub_42c9c0(&var_2c, esi_1)

int32_t result

if (sub_608530(esi_1, &var_30, eax_3, arg3) != 0)
    sub_6089c0(arg1 + 0x28, &var_30)
    int32_t ecx_7 = *(arg1 + 0x2c) - *(arg1 + 0x28)
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = muls.dp.d(0x92492493, ecx_7)
    int32_t edx_3 = (edx_1 + ecx_7) s>> 4
    result = (edx_3 u>> 0x1f) - 1 + edx_3
else
    result = 0xffffffff

sub_606fa0(&var_30)
fsbase->NtTib.ExceptionList = ExceptionList
return result
