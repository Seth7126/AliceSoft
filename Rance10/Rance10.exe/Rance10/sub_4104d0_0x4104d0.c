// 函数: sub_4104d0
// 地址: 0x4104d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727d11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_19c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_18c = 0

if (ecx == 0 || *(arg1 + 8) == 0)
    sub_414340(arg2)
else
    void var_10c
    (*(*ecx + 0xc))(&var_10c, arg3)
    int32_t var_8_1 = 0
    void var_90
    (*(**(arg1 + 8) + 0xc))(&var_90, arg3)
    var_8_1.b = 1
    var_8_1.b = 2
    void var_188
    sub_414740(arg2, sub_40d1e0(&var_188, &var_90))
    sub_40ad50(&var_188)
    sub_40ad50(&var_90)
    sub_40ad50(&var_10c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
