// 函数: sub_4dec30
// 地址: 0x4dec30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b52c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = nullptr
var_34 = sub_4ff540(arg1)
int32_t* result

if (arg2[4] != 0)
    sub_4c8ce0(arg1)
    int32_t var_18_1 = 0xf
    char var_2c = 0
    *arg3 = nullptr
    *arg4 = var_34
    int32_t edi_1 = 0
    int32_t ebx_1 = arg2[4]
    var_34 = ebx_1
    void* var_1c_1 = nullptr
    sub_402110(&var_2c, 0x6da5a1, nullptr)
    int32_t var_4 = 0
    
    if (ebx_1 s> 0)
        do
            char* eax_9
            
            if (arg2[5] u< 0x10)
                eax_9 = arg2
            else
                eax_9 = *arg2
            
            ebx_1.b = eax_9[edi_1]
            
            if ((ebx_1.b u< 0x81 || ebx_1.b u> 0x9f) && ebx_1.b + 0x20 u> 0xf)
                int32_t ecx_6 = var_18_1
                
                if (ecx_6 u< 1)
                    sub_4023a0(&var_2c, 1, var_1c_1)
                    ecx_6 = var_18_1
                
                char* eax_17 = &var_2c
                
                if (ecx_6 u>= 0x10)
                    eax_17 = var_2c.d
                
                *eax_17 = ebx_1.b
                char* eax_18 = &var_2c
                var_1c_1 = 1
                
                if (var_18_1 u>= 0x10)
                    eax_18 = var_2c.d
                
                eax_18[1] = 0
            else
                int32_t ecx_2 = var_18_1
                
                if (ecx_2 u< 1)
                    sub_4023a0(&var_2c, 1, var_1c_1)
                    ecx_2 = var_18_1
                
                char* eax_11 = &var_2c
                
                if (ecx_2 u>= 0x10)
                    eax_11 = var_2c.d
                
                *eax_11 = ebx_1.b
                char* eax_12 = &var_2c
                var_1c_1 = 1
                
                if (var_18_1 u>= 0x10)
                    eax_12 = var_2c.d
                
                edi_1 += 1
                eax_12[1] = 0
                
                if (arg2[5] u< 0x10)
                    sub_4031c0(&var_2c, 1, *(arg2 + edi_1))
                else
                    sub_4031c0(&var_2c, 1, (*arg2)[edi_1])
            
            result_1 += sub_514630(&var_2c)
            sub_402110(&var_2c, 0x6da59b, nullptr)
            edi_1 += 1
        while (edi_1 s< var_34)
    
    result = *arg3
    
    if (result s< result_1)
        result = result_1
    
    *arg3 = result
    
    if (var_18_1 u>= 0x10)
        result = j__free(var_2c.d)
else
    result = arg3
    *result = 0
    *arg4 = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
