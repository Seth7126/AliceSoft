// 函数: sub_60c3c0
// 地址: 0x60c3c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = arg3

if (i == *arg1[1] && arg4 == arg1[1])
    int32_t var_8_1 = 0
    sub_44b780(&arg1[1])
    int32_t var_24_1 = 8
    sub_490d70(arg1)
    *arg2 = *arg1[1]
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t* i_1

for (; i != arg4; i = i_1)
    i_1 = *i
    sub_60c970(arg1, &var_14, i)

*arg2 = i
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
