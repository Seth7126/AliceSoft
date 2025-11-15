// 函数: sub_44d600
// 地址: 0x44d600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
void* var_2c
sub_405070(&var_2c, arg3)
int32_t var_8_1 = 0
void** eax_3 = sub_432330(arg1 + 8, &var_2c)
void** edi_2 = *(arg1 + 8)
void** esi = eax_3
char eax_5

if (esi != edi_2)
    eax_5 = sub_412ca0(&var_2c, &esi[4])

if (esi == edi_2 || eax_5 != 0)
    esi = edi_2

int32_t var_18

if (esi != *(arg1 + 8))
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_403590(arg2, &esi[0xa], 0, 0xffffffff)
    
    if (var_18 u>= 0x10)
        int32_t var_48_3 = 1
        sub_403160(var_2c, var_18 + 1, 1)
else
    sub_403360(arg2, 0x75cd82)
    
    if (var_18 u>= 0x10)
        int32_t var_48_2 = 1
        sub_403160(var_2c, var_18 + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
