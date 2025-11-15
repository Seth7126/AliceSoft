// 函数: sub_6c9360
// 地址: 0x6c9360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *(arg1 + 4)
void* result

if (ecx + arg3 u<= *(arg1 + 8))
    void* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, ecx, arg3)
    int32_t var_8_1 = 0
    char* edx_1 = &var_2c
    
    if (var_18_1 u>= 0x10)
        edx_1 = var_2c.d
    
    void* ecx_2
    
    if (*edx_1 != 0)
        char* ecx_3 = edx_1
        char i
        
        do
            i = *ecx_3
            ecx_3 = &ecx_3[1]
        while (i != 0)
        ecx_2 = ecx_3 - &ecx_3[1]
    else
        ecx_2 = nullptr
    
    sub_403490(arg2, edx_1, ecx_2)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    *(arg1 + 4) += arg3
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
