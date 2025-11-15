// 函数: sub_4abdc0
// 地址: 0x4abdc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731908
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = (*(arg1 + 8) - *(arg1 + 4)) s>> 4
void** var_6c = arg2
int32_t var_68 = arg3
int32_t var_64 = eax_5
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x761724, 0x15)
int32_t var_8_1 = 0
var_8_1.b = 1
char var_44
sub_4abfc0(&var_6c, sub_409350(&var_64, &var_2c, &var_44, &var_64))
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_8_2 = 0xffffffff
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

bool cond:0 = var_64 s<= 0
int32_t result_1 = 0
int32_t result

if (not(cond:0))
    do
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_403490(&var_2c, 0x76173c, 0x10)
        int32_t var_8_3 = 2
        var_8_3.b = 3
        sub_4abfc0(&var_6c, sub_409350(&result_1, &var_2c, &var_44, &result_1))
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        int32_t var_8_4 = 0xffffffff
        int32_t eax_15 = var_18_1
        var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (eax_15 u>= 0x10)
            eax_15 = sub_403160(var_2c.d, eax_15 + 1, 1)
        
        char var_5c
        int32_t* eax_17 = sub_4175e0(eax_15, arg2, &var_5c, "*\t")
        int32_t var_8_5 = 4
        sub_4b0620((result_1 << 4) + *(arg1 + 4), eax_17, arg3)
        int32_t var_8_6 = 0xffffffff
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c.d, var_48 + 1, 1)
        
        result = result_1 + 1
        var_48 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        result_1 = result
    while (result s< var_64)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
