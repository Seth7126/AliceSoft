// 函数: sub_614fd0
// 地址: 0x614fd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73316e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t ecx = *(arg1 + 0x1fc)
int32_t xmm0 = *(*(arg1 + 0x1f8) + (ecx << 2) - 4)
*(arg1 + 0x1fc) = ecx - 1
int32_t var_14 = xmm0

if (arg3 == 0)
    sub_6d090a()
    noreturn

(*(*arg3 + 8))(&var_14)
int32_t result = sub_405d30(arg1 + 0x1f4, fconvert.s(arg2))
int32_t var_8_2 = 1
void arg_4

if (arg3 != 0)
    result = (*(*arg3 + 0x10))(arg3 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
