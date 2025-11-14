// 函数: sub_4c64f0
// 地址: 0x4c64f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6be788
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg3
int32_t** result_1 = result

if (arg2[4] != 0)
    sub_4c8ce0(arg1)
    void* result_2 = nullptr
    int32_t* result_3 = nullptr
    int32_t eax_5 = sub_4ff540(arg1)
    int32_t edi_1 = 0
    *result_1 = nullptr
    int32_t var_20_1 = 0xf
    void* var_24_1 = nullptr
    char var_34 = 0
    *arg4 = eax_5
    int32_t eax_6 = arg2[4]
    sub_402110(&var_34, 0x6da4db, nullptr)
    int32_t var_c_1 = 0
    
    if (eax_6 s> 0)
        do
            int32_t* eax_7
            
            if (arg2[5] u< 0x10)
                eax_7 = arg2
            else
                eax_7 = *arg2
            
            result_2.b = *(eax_7 + edi_1)
            
            if (result_2.b != 0xa)
                if ((result_2.b u< 0x81 || result_2.b u> 0x9f) && result_2.b + 0x20 u> 0xf)
                    int32_t ecx_11 = var_20_1
                    
                    if (ecx_11 u< 1)
                        sub_4023a0(&var_34, 1, var_24_1)
                        ecx_11 = var_20_1
                    
                    char* eax_16 = &var_34
                    
                    if (ecx_11 u>= 0x10)
                        eax_16 = var_34.d
                    
                    *eax_16 = result_2.b
                    char* eax_17 = &var_34
                    var_24_1 = 1
                    
                    if (var_20_1 u>= 0x10)
                        eax_17 = var_34.d
                    
                    eax_17[1] = 0
                else
                    int32_t ecx_7 = var_20_1
                    
                    if (ecx_7 u< 1)
                        sub_4023a0(&var_34, 1, var_24_1)
                        ecx_7 = var_20_1
                    
                    char* eax_10 = &var_34
                    
                    if (ecx_7 u>= 0x10)
                        eax_10 = var_34.d
                    
                    *eax_10 = result_2.b
                    char* eax_11 = &var_34
                    var_24_1 = 1
                    
                    if (var_20_1 u>= 0x10)
                        eax_11 = var_34.d
                    
                    edi_1 += 1
                    eax_11[1] = 0
                    
                    if (arg2[5] u< 0x10)
                        sub_4031c0(&var_34, 1, *(arg2 + edi_1))
                    else
                        sub_4031c0(&var_34, 1, (*arg2)[edi_1])
                
                result_2 = result_3 + sub_514630(&var_34)
                result_3 = result_2
                sub_402110(&var_34, 0x6da4c3, nullptr)
            else
                sub_402110(&var_34, 0x6da4e3, nullptr)
                *arg4 += eax_5
                int32_t* result_4 = *result_1
                
                if (result_4 s< result_3)
                    result_4 = result_3
                
                result_2 = nullptr
                *result_1 = result_4
                result_3 = nullptr
            
            edi_1 += 1
        while (edi_1 s< eax_6)
    
    result = *result_1
    
    if (result s< result_2)
        result = result_2
    
    *result_1 = result
    
    if (var_20_1 u>= 0x10)
        result = j__free(var_34.d)
else
    *result = 0
    *arg4 = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
