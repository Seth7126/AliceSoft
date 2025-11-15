// 函数: sub_5c49e0
// 地址: 0x5c49e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = (***(arg1 + 0x1d0))(eax_2)
int32_t ecx_1 = *(arg1 + 0x1d4)

if (ecx_1 != 0)
    int32_t eax_5 = eax_4 - ecx_1
    *(arg1 + 0x1d8) = eax_5
    
    if (eax_4 == ecx_1)
        *(arg1 + 0x1d8) = 1
    else if (eax_5 u> 0x64)
        *(arg1 + 0x1d8) = 0x64
else
    *(arg1 + 0x1d8) = 1

int32_t var_38 = *(arg1 + 0x1dc)
*(arg1 + 0x1d4) = eax_4
int32_t var_3c = *(arg1 + 0x1d8)
data_7e1d50 = 0
char eax_6 = sub_586c70(arg1 + 4, var_3c, var_38)
int32_t result

if (eax_6 != 0)
    sub_5e02a0()
    result.b = 1
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = eax_6
    sub_403490(&var_2c, 0x76a39c, 0x1c)
    int32_t var_8_1 = 0
    sub_5e01e0(&var_2c)
    int32_t var_8_2 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_5e02a0()
    result.b = 0

data_7e1d50 = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
