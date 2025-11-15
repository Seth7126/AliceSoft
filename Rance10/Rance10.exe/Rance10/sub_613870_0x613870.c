// 函数: sub_613870
// 地址: 0x613870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74390e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = arg2
int32_t var_8_1 = 0
int32_t ecx = arg1[0x7f]
int32_t var_4c = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t esi = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
arg1[0x7f] = ecx - 2
int32_t edx = *(arg1[0x7e] + ((ecx - 2) << 2) - 4)
arg1[0x7f] = ecx - 3
void* eax_11 = sub_621720(&arg1[0x52], edx)
int32_t result
char var_48
char var_30
void** eax_13

if (eax_11 != 0)
    int32_t* esi_1
    
    if (esi u< *(eax_11 + 0x14) u>> 2)
        esi_1 = *(eax_11 + 0x10) + (esi << 2)
    
    if (esi u>= *(eax_11 + 0x14) u>> 2 || esi_1 == 0)
        sub_403360(&var_48, 0x76be2c)
        var_8_1.b = 3
        eax_13 = sub_409240(&var_50, &var_48, &var_30, &var_50)
        var_8_1.b = 4
        goto label_613990
    
    var_4c = var_4c
    
    if (arg3 == 0)
        sub_6d090a()
        noreturn
    
    (*(*arg3 + 8))(esi_1, &var_4c)
    result = sub_405d30(&arg1[0x7d], *esi_1)
else
    int32_t result_1 = 0xf
    void* var_38_1 = eax_11
    var_48 = eax_11.b
    sub_403490(&var_48, 0x76be08, 0x20)
    var_8_1.b = 1
    eax_13 = sub_409240(&var_50, &var_48, &var_30, &var_50)
    var_8_1.b = 2
label_613990:
    sub_612320(arg1, eax_13)
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    result = result_1
    var_30 = 0
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0xf
    
    if (result u>= 0x10)
        result = sub_403160(var_48.d, result + 1, 1)
int32_t var_8_2 = 5
void arg_8

if (arg3 != 0)
    result = (*(*arg3 + 0x10))(arg3 != &arg_8)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
