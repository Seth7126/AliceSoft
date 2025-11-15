// 函数: sub_6174b0
// 地址: 0x6174b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743f08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x74]
int32_t edi = *eax_3
arg1[0x74] = &eax_3[1]
int32_t ecx = arg1[0x7f]
int32_t eax_6 = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t eax_8
int32_t edx
edx:eax_8 = muls.dp.d(0x38e38e39, arg1[0x31] - arg1[0x30])
int32_t edx_1 = edx s>> 4
void* ebx_1

if (edi u< (edx_1 u>> 0x1f) + edx_1)
    ebx_1 = arg1[0x30] + edi * 0x48

char* result
char var_2c

if (edi u>= (edx_1 u>> 0x1f) + edx_1 || ebx_1 == 0)
    char* result_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x76cb04, 0x37)
    int32_t var_8_3 = 0
label_617603:
    sub_612320(arg1, &var_2c)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, &result[1], 1)
else
    void* eax_13 = sub_6227b0(&arg1[0x52], eax_6)
    
    if (eax_13 == 0)
        sub_403360(&var_2c, 0x76cad0)
        int32_t var_8_1 = 1
        goto label_617603
    
    char* eax_14
    
    if (*(eax_13 + 0x14) != 0)
        eax_14 = *(eax_13 + 0x10)
    else
        eax_14 = nullptr
    
    char* var_4c
    
    if (sub_625f30(ebx_1, &var_4c, eax_14) != 0)
        arg1[0x74] = &var_4c[arg1[0x75]]
    
    result = sub_621db0(&arg1[0x52], eax_6)
    
    if (result.b == 0)
        void var_44
        sub_403360(&var_44, 0x76cb40)
        int32_t var_8_2 = 2
        sub_612320(arg1, &var_44)
        result = sub_403320(&var_44)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
