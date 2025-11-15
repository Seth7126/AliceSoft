// 函数: sub_49a220
// 地址: 0x49a220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730431
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
int32_t* var_38 = arg2
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
int32_t var_8_1 = 0
int32_t i = 0
int32_t var_34_1 = 1

if (*(arg1 + 0x10) s> 0)
    do
        int32_t var_8_2 = 1
        void* var_30
        sub_431bd0(arg2, sub_49a1a0(arg1, &var_30, i))
        var_8_2.b = 0
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            sub_403160(var_30, var_1c + 1, 1)
        
        i += 1
    while (i s< *(arg1 + 0x10))

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
