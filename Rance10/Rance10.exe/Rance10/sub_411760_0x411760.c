// 函数: sub_411760
// 地址: 0x411760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727dd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 4)
int32_t var_60 = 0
int32_t edx_1

if (eax_3 == 0xc || eax_3 == 4 || eax_3 == 0x14)
    edx_1 = *(arg3 i+ 4)

if ((eax_3 == 0xc || eax_3 == 4 || eax_3 == 0x14) && (edx_1 == 0xc || edx_1 == 4 || edx_1 == 0x14))
    void* var_5c
    sub_40d0e0(&var_5c)
    int32_t var_8_1 = 0
    char var_2c
    sub_40d0e0(&var_2c)
    var_8_1.b = 1
    var_8_1.b = 2
    char var_44
    sub_414640(arg2, sub_412dc0(&var_44, &var_2c, &var_5c))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
else
    sub_412df0(arg1, arg2, arg3)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
