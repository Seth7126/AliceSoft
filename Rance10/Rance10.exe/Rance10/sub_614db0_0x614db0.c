// 函数: sub_614db0
// 地址: 0x614db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743b4e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_54 = arg2
int32_t var_8_1 = 0
int32_t ecx = arg1[0x7f]
int32_t xmm0 = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t edi = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
arg1[0x7f] = ecx - 2
int32_t edx = *(arg1[0x7e] + ((ecx - 2) << 2) - 4)
arg1[0x7f] = ecx - 3
void* eax_10 = sub_621720(&arg1[0x52], edx)
char* result
char var_48
char var_30
char* eax_12

if (eax_10 != 0)
    if (edi u>= *(eax_10 + 0x14) u>> 2)
        sub_403360(&var_48, 0x76bf50)
        var_8_1.b = 3
        eax_12 = sub_409240(&var_54, &var_48, &var_30, &var_54)
        var_8_1.b = 4
        goto label_614f47
    
    int32_t eax_15 = *(eax_10 + 0x10)
    int32_t var_4c = xmm0
    int32_t var_50 = *(eax_15 + (edi << 2))
    
    if (arg3 == 0)
        sub_6d090a()
        noreturn
    
    (*(*arg3 + 8))(&var_50, &var_4c)
    uint32_t eax_19 = *(eax_10 + 0x14) u>> 2
    var_4c = var_50
    
    if (edi u>= eax_19)
        sub_403360(&var_30, 0x76bed8)
        var_8_1.b = 5
        var_8_1.b = 6
        sub_612320(arg1, sub_409240(&var_54, &var_30, &var_48, &var_54))
        sub_403320(&var_48)
        result = sub_403320(&var_30)
    else
        *(*(eax_10 + 0x10) + (edi << 2)) = var_4c
        var_4c = var_50
        result = sub_405d30(&arg1[0x7d], var_4c)
else
    char* result_1 = 0xf
    void* var_38_1 = eax_10
    var_48 = eax_10.b
    sub_403490(&var_48, 0x76bf2c, 0x20)
    var_8_1.b = 1
    eax_12 = sub_409240(&var_54, &var_48, &var_30, &var_54)
    var_8_1.b = 2
label_614f47:
    sub_612320(arg1, eax_12)
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    result = result_1
    var_30 = 0
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0xf
    
    if (result u>= 0x10)
        result = sub_403160(var_48.d, &result[1], 1)
int32_t var_8_2 = 7
void arg_8

if (arg3 != 0)
    result = (*(*arg3 + 0x10))(arg3 != &arg_8)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
