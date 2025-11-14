// 函数: sub_49aa70
// 地址: 0x49aa70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bb880
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t var_84 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg3 + 4)
uint32_t* result

if (&edx[4] u> *(arg3 + 8))
    result.b = 0
else
    *(arg1 + 4) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg3 + 4) += 4
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u> *(arg3 + 8))
        result.b = 0
    else
        *(arg1 + 8) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) += 4
        void* ecx_14 = *(arg3 + 4)
        
        if (ecx_14 + 1 u> *(arg3 + 8))
            result.b = 0
        else
            result.b = *ecx_14 == 1
            *(arg1 + 0xc) = result.b
            *(arg3 + 4) += 1
            sub_468b20(arg3, arg1 + 0x10)
            sub_468b20(arg3, arg1 + 0x14)
            sub_468b20(arg3, arg1 + 0x18)
            uint32_t var_5c
            uint32_t var_58
            
            if (sub_468b20(arg3, &var_5c).b == 0)
                result.b = 0
            else
                uint32_t var_50
                
                if (sub_468b20(arg3, &var_58).b == 0)
                    result.b = 0
                else
                    uint32_t var_64
                    
                    if (sub_468b20(arg3, &var_50).b == 0)
                        result.b = 0
                    else
                        uint32_t var_54
                        
                        if (sub_468b20(arg3, &var_64).b == 0)
                            result.b = 0
                        else
                            uint32_t var_70
                            
                            if (sub_468b20(arg3, &var_54).b == 0)
                                result.b = 0
                            else
                                uint32_t var_6c
                                
                                if (sub_468bc0(arg3, &var_70).b == 0)
                                    result.b = 0
                                else
                                    uint32_t var_68
                                    
                                    if (sub_468bc0(arg3, &var_6c).b == 0)
                                        result.b = 0
                                    else
                                        uint32_t var_60
                                        
                                        if (sub_468b20(arg3, &var_68).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg3, &var_60).b == 0)
                                            result.b = 0
                                        else
                                            int32_t ecx_28
                                            result, ecx_28 = sub_468b20(arg3, &var_74)
                                            
                                            if (result.b == 0)
                                                result.b = 0
                                            else
                                                int32_t var_88_14 = ecx_28
                                                uint32_t var_8c_1 = var_50
                                                *(arg1 + 0x20) = var_5c
                                                uint32_t var_90_1 = var_64
                                                uint32_t var_94_1 = var_54
                                                *(arg1 + 0x24) = var_58
                                                char var_4c
                                                int32_t* eax_16
                                                int32_t ecx_30
                                                eax_16, ecx_30 = sub_47f000(&var_4c, var_94_1, 
                                                    var_90_1, var_8c_1)
                                                int32_t var_88_15 = ecx_30
                                                uint32_t var_8c_2 = var_68
                                                uint32_t var_90_2 = var_60
                                                *(arg1 + 0x28) = *eax_16
                                                uint32_t var_94_2 = var_74
                                                *(arg1 + 0x38) = var_70
                                                *(arg1 + 0x3c) = var_6c
                                                int32_t var_20_1 = 0xf
                                                int32_t var_24_1 = 0
                                                *(arg1 + 0x40) = *sub_47f000(&var_4c, var_94_2, 
                                                    var_90_2, var_8c_2)
                                                char var_34 = 0
                                                int32_t var_c_1 = 0
                                                
                                                if (sub_468d00(arg3, &var_34) == 0)
                                                    sub_401fb0(&var_34)
                                                    result.b = 0
                                                else
                                                    sub_49a270(arg1, &var_34)
                                                    
                                                    if (arg2 s< 2)
                                                        goto label_49ad21
                                                    
                                                    int32_t var_38_1 = 0xf
                                                    int32_t var_3c_1 = 0
                                                    var_4c = 0
                                                    var_c_1.b = 1
                                                    
                                                    if (sub_468d00(arg3, &var_4c) != 0)
                                                        sub_49a530(arg1, &var_4c)
                                                        var_c_1.b = 0
                                                        sub_401fb0(&var_4c)
                                                    label_49ad21:
                                                        
                                                        if (sub_468d00(arg3, arg1 + 0x1a0) == 0)
                                                            sub_401fb0(&var_34)
                                                            result.b = 0
                                                        else if (sub_468b20(arg3, &var_74) == 0)
                                                            sub_401fb0(&var_34)
                                                            result.b = 0
                                                        else
                                                            *(arg1 + 0x1b8) = var_74
                                                            
                                                            if (sub_468ab0(arg3, arg1 + 0x1bc) == 0)
                                                                sub_401fb0(&var_34)
                                                                result.b = 0
                                                            else if (sub_468b20(arg3, arg1 + 0x1c0)
                                                                    == 0)
                                                                sub_401fb0(&var_34)
                                                                result.b = 0
                                                            else if (sub_468b20(arg3, arg1 + 0x1c4)
                                                                    == 0)
                                                                sub_401fb0(&var_34)
                                                                result.b = 0
                                                            else
                                                                sub_401fb0(&var_34)
                                                                result.b = 1
                                                    else
                                                        sub_401fb0(&var_4c)
                                                        sub_401fb0(&var_34)
                                                        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
