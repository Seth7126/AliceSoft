// 函数: sub_456ff0
// 地址: 0x456ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *arg1
int32_t* i_1
int32_t* i = i_1

if (i != *eax_3 || arg3 != eax_3)
    for (; i != arg3; i = i_1)
        sub_429080(&i_1)
        sub_4575f0(arg1, &var_14, i)
    
    *arg2 = i
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t var_8_1 = 0
sub_432200(eax_3[1])
void* eax_4 = *arg1
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *arg1
*eax_5 = eax_5
void* eax_6 = *arg1
*(eax_6 + 8) = eax_6
arg1[1] = 0
*arg2 = **arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
