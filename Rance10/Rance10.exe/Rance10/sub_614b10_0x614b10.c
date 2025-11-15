// 函数: sub_614b10
// 地址: 0x614b10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743ae8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t edi = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t edx = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
arg1[0x7f] = ecx - 2
void* eax_7 = sub_621720(&arg1[0x52], edx)
char* result
char var_2c

if (eax_7 != 0)
    int32_t ecx_4 = *(eax_7 + 0x14)
    
    if (edi u>= ecx_4 u>> 2)
        sub_403360(&var_2c, 0x76c1a0)
        int32_t var_8_3 = 1
        goto label_614c03
    
    int32_t edx_2 = *(eax_7 + 0x10)
    result = *(edx_2 + (edi << 2)) - 1
    
    if (edi u>= ecx_4 u>> 2)
        void var_44
        sub_403360(&var_44, 0x76c1c0)
        int32_t var_8_2 = 2
        sub_612320(arg1, &var_44)
        result = sub_403320(&var_44)
    else
        *(edx_2 + (edi << 2)) = result
else
    char* result_1 = 0xf
    void* var_1c_1 = eax_7
    var_2c = eax_7.b
    sub_403490(&var_2c, 0x76c200, 0x21)
    int32_t var_8_1 = 0
label_614c03:
    sub_612320(arg1, &var_2c)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, &result[1], 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
