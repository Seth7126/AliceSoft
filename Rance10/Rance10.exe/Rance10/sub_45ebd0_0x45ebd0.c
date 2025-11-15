// 函数: sub_45ebd0
// 地址: 0x45ebd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72be40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg2
int32_t result
void* var_5c
int32_t result_1

if (arg3 == 0)
    int32_t var_8_2 = 3
    sub_4055a0(arg1, sub_4175e0(&ExceptionList, esi, &var_5c, U"\n"), 0, 0xffffffff)
    result = result_1
    
    if (result u>= 0x10)
        int32_t var_78_3 = 1
        result = sub_403160(var_5c, result + 1, 1)
else
    int32_t var_60 = *(arg3 + 0x34)
    int32_t result_2 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x75e148, 0x13)
    int32_t var_8_1 = 0
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    void* eax_5 = arg3 + 0x18
    
    if (*(arg3 + 0x2c) u>= 0x10)
        eax_5 = *eax_5
    
    char var_44
    char* eax_7 = sub_45ef70(&var_60, &var_2c, &var_44, &var_60, eax_5, esi)
    var_8_1.b = 1
    var_8_1.b = 2
    sub_4055a0(arg1, sub_4175e0(eax_7, eax_7, &var_5c, U"\n"), 0, 0xffffffff)
    
    if (result_1 u>= 0x10)
        sub_403160(var_5c, result_1 + 1, 1)
    
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    result = result_2
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (result u>= 0x10)
        int32_t var_78_2 = 1
        result = sub_403160(var_2c.d, result + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
