// 函数: sub_481f80
// 地址: 0x481f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ba740
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
char* result_1

if (result[5] u< 0x10)
    result_1 = result
else
    result_1 = *result

void* ebx_1 = &result_1[result[4]]

while (result_1 u< ebx_1)
    char ecx = *result_1
    
    if ((ecx u< 0x81 || ecx u> 0x9f) && (ecx u< 0xe0 || ecx u> 0xef))
        result_1 = &result_1[1]
        var_54 = ecx
        char var_53 = 0
        int32_t var_38_1 = 0xf
        int32_t var_3c_1 = 0
        char var_4c = 0
        void* ecx_5
        
        if (ecx != 0)
            char* ecx_6 = &var_54
            
            do
                result.b = *ecx_6
                ecx_6 = &ecx_6[1]
            while (result.b != 0)
            
            ecx_5 = ecx_6 - &var_53
        else
            ecx_5 = nullptr
        
        sub_402110(&var_4c, &var_54, ecx_5)
        int32_t var_c_3 = 1
        result = sub_412d60(arg1, &var_4c)
        int32_t var_c_4 = 0xffffffff
        
        if (var_38_1 u>= 0x10)
            result = j__free(var_4c.d)
        
        int32_t var_38_2 = 0xf
        int32_t var_3c_2 = 0
        var_4c = 0
    else
        result.b = result_1[1]
        result_1 = &result_1[2]
        char var_50 = ecx
        char var_4f = result.b
        char var_4e_1 = 0
        int32_t var_20_1 = 0xf
        int32_t var_24_1 = 0
        char var_34 = 0
        void* ecx_1
        
        if (ecx != 0)
            char* ecx_2 = &var_50
            
            do
                result.b = *ecx_2
                ecx_2 = &ecx_2[1]
            while (result.b != 0)
            
            ecx_1 = ecx_2 - &var_4f
        else
            ecx_1 = nullptr
        
        sub_402110(&var_34, &var_50, ecx_1)
        int32_t var_c_1 = 0
        result = sub_412d60(arg1, &var_34)
        int32_t var_c_2 = 0xffffffff
        
        if (var_20_1 u>= 0x10)
            result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
