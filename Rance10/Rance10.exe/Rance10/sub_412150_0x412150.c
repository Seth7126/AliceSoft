// 函数: sub_412150
// 地址: 0x412150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727ed8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 4)
int32_t var_48 = 0
int32_t eax_4

if (eax_3 == 0xc || eax_3 == 4 || eax_3 == 0x14)
    eax_4 = *(arg3 + 4)

if ((eax_3 == 0xc || eax_3 == 4 || eax_3 == 0x14) && (eax_4 == 0xc || eax_4 == 4 || eax_4 == 0x14))
    void* var_44
    sub_40d0e0(&var_44)
    int32_t var_8_1 = 0
    char var_2c
    sub_40d0e0(&var_2c)
    sub_414470(arg2, sub_412ca0(&var_2c, &var_44))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
else
    sub_4134f0(arg1, arg2, arg3)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
