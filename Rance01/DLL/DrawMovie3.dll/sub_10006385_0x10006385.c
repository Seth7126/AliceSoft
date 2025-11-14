// 函数: sub_10006385
// 地址: 0x10006385
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0x2c
int32_t var_8 = 0x1001e518
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x1001e518 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_50 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_50
void* const var_54_2 = &data_10006391
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = arg3
int32_t var_38 = 0
int32_t var_28 = arg5[-1]
void var_40
int32_t* var_2c = sub_10002a58(&var_40, arg4[6])
int32_t var_30 = *(__getptd() + 0x88)
int32_t var_34 = *(__getptd() + 0x8c)
*(__getptd() + 0x88) = arg4
*(__getptd() + 0x8c) = arg6
int32_t var_8_1 = 0
arg6 = 1
int32_t var_8_2 = 1
int32_t result = _CallCatchBlock2(arg5, arg7, arg3, arg8, arg9)
int32_t var_8_3 = 0
int32_t var_8_4 = 0xfffffffe
arg6 = 0
sub_100064ab(&__saved_ebp, arg4, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000649f
return result
