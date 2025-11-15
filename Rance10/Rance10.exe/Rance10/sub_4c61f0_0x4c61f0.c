// 函数: sub_4c61f0
// 地址: 0x4c61f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733560
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** result = arg2
void* i

if (result[5] u< 0x10)
    i = result
else
    i = *result

for (void* ebx_1 = result[4] + i; i u< ebx_1; i += result)
    void* ecx
    ecx.b = *i
    
    if ((ecx.b u< 0x81 || ecx.b u> 0x9f) && (ecx + 0x20).b u> 0xf)
        char var_48 = ecx.b
        char var_47 = 0
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        void* ecx_5
        
        if (ecx.b != 0)
            char* ecx_6 = &var_48
            
            do
                result.b = *ecx_6
                ecx_6 = &ecx_6[1]
            while (result.b != 0)
            
            ecx_5 = ecx_6 - &var_47
        else
            ecx_5 = nullptr
        
        sub_403490(&var_2c, &var_48, ecx_5)
        int32_t var_8_3 = 1
        sub_431bd0(arg1, &var_2c)
        int32_t var_8_4 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t var_18_2 = 0xf
        result = 1
        int32_t var_1c_2 = 0
        var_2c = 0
    else
        result.b = *(i + 1)
        char var_4c = ecx.b
        char var_4b = result.b
        char var_4a_1 = 0
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        char var_44 = 0
        void* ecx_1
        
        if (ecx.b != 0)
            char* ecx_2 = &var_4c
            
            do
                result.b = *ecx_2
                ecx_2 = &ecx_2[1]
            while (result.b != 0)
            
            ecx_1 = ecx_2 - &var_4b
        else
            ecx_1 = nullptr
        
        sub_403490(&var_44, &var_4c, ecx_1)
        int32_t var_8_1 = 0
        sub_431bd0(arg1, &var_44)
        int32_t var_8_2 = 0xffffffff
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        result = 2

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
