// 函数: sub_40be80
// 地址: 0x40be80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
int32_t var_8_1 = 0
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_60 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
var_8_1.b = 2
int32_t* eax_4 = (*(**(arg1 + 0x20) + 0x18))(arg3)
void* ebx

if (eax_4 == 0)
    ebx.b = 0
else
    int32_t eax_5 = (**eax_4)(eax_2)
    int32_t* eax_6 = (*(**(arg1 + 0x20) + 0x18))(arg3)
    
    if (eax_6 == 0)
        ebx.b = 0
    else
        int32_t eax_7 = (**eax_6)()
        int32_t var_64
        
        if (sub_41fb20(arg1 + 0x14, arg3, &var_64) == 0)
            ebx.b = 0
        else
            sub_420330(eax_7, var_64, &var_5c)
            
            if (sub_41fbd0(arg1 + 0x14, arg3, &var_44) == 0)
                ebx.b = 0
            else if (sub_41fb20(arg1 + 0x14, arg3, &var_60) == 0)
                ebx.b = 0
            else if (sub_41fb80(arg1 + 0x14, arg3, &var_2c) == 0)
                ebx.b = 0
            else
                sub_6ca100(arg2, eax_5)
                sub_6ca1a0(arg2, &var_5c)
                sub_6ca1a0(arg2, &var_44)
                sub_6ca100(arg2, var_60)
                sub_6ca1a0(arg2, &var_2c)
                ebx.b = 1

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
