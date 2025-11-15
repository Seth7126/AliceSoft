// 函数: sub_5031e0
// 地址: 0x5031e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736fe0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
char eax_3
int32_t ecx
eax_3, ecx = sub_4595b0(arg1, arg2)

if (eax_3 != 0)
    int32_t var_8_1 = 0
    int32_t var_2c_1 = arg2
    int32_t var_30_1 = ecx
    sub_503280(*arg1, arg2)
    arg1[1] += arg2 * 0x2c

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
