// 函数: sub_619a10
// 地址: 0x619a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7443a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t edx = *(arg1[0x7e] + (ecx << 2) - 4)
int32_t var_60 = edx
arg1[0x7f] = ecx - 1
void* eax_6 = sub_6227b0(&arg1[0x52], edx)
int32_t result

if (eax_6 != 0)
    char* edx_2
    
    if (*(eax_6 + 0x14) != 0)
        edx_2 = *(eax_6 + 0x10)
    else
        edx_2 = nullptr
    
    void* ecx_5
    
    if (*edx_2 != 0)
        char* ecx_6 = edx_2
        
        do
            eax_6.b = *ecx_6
            ecx_6 = &ecx_6[1]
        while (eax_6.b != 0)
        
        ecx_5 = ecx_6 - &ecx_6[1]
    else
        ecx_5 = nullptr
    
    sub_403490(arg2, edx_2, ecx_5)
    
    if (sub_621db0(&arg1[0x52], var_60).b != 0)
        result.b = 1
    else
        void* var_5c
        sub_403360(&var_5c, 0x76d290)
        int32_t var_8_2 = 2
        sub_612230(arg1, arg3, &var_5c)
        int32_t var_48
        
        if (var_48 u< 0x10)
            result.b = 0
        else
            sub_403160(var_5c, var_48 + 1, 1)
            result.b = 0
else
    int32_t var_18_1 = 0xf
    void* var_1c_1 = eax_6
    char var_2c = eax_6.b
    sub_403490(&var_2c, 0x76d274, 0x1a)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_44
    sub_612230(arg1, arg3, sub_409350(&var_60, &var_2c, &var_44, &var_60))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
