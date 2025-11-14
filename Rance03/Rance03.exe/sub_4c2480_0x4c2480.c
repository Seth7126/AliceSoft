// 函数: sub_4c2480
// 地址: 0x4c2480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6be2d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg2 + 4)
uint32_t* result

if (&edx[4] u> *(arg2 + 8))
    result.b = 0
else
    *(arg1 + 4) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) += 4
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
        result.b = 0
    else
        *(arg1 + 8) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) += 4
        uint32_t var_54
        uint32_t var_64
        
        if (sub_468b20(arg2, &var_54).b == 0)
            result.b = 0
        else
            uint32_t var_48
            
            if (sub_468b20(arg2, &var_64).b == 0)
                result.b = 0
            else
                uint32_t var_5c
                
                if (sub_468b20(arg2, &var_48).b == 0)
                    result.b = 0
                else
                    uint32_t var_4c
                    
                    if (sub_468b20(arg2, &var_5c).b == 0)
                        result.b = 0
                    else if (sub_468b20(arg2, &var_4c).b == 0)
                        result.b = 0
                    else
                        uint32_t var_68
                        
                        if (sub_468bc0(arg2, &var_6c).b == 0)
                            result.b = 0
                        else
                            uint32_t var_60
                            
                            if (sub_468bc0(arg2, &var_68).b == 0)
                                result.b = 0
                            else
                                uint32_t var_58
                                
                                if (sub_468b20(arg2, &var_60).b == 0)
                                    result.b = 0
                                else if (sub_468b20(arg2, &var_58).b == 0)
                                    result.b = 0
                                else
                                    uint32_t var_50
                                    int32_t ecx_24
                                    result, ecx_24 = sub_468b20(arg2, &var_50)
                                    
                                    if (result.b == 0)
                                        result.b = 0
                                    else
                                        int32_t var_80_11 = ecx_24
                                        uint32_t var_84_1 = var_48
                                        *(arg1 + 0x10) = var_54
                                        uint32_t var_88_1 = var_5c
                                        uint32_t var_8c_1 = var_4c
                                        *(arg1 + 0x14) = var_64
                                        void var_44
                                        int32_t* eax_13
                                        int32_t ecx_26
                                        eax_13, ecx_26 =
                                            sub_47f000(&var_44, var_8c_1, var_88_1, var_84_1)
                                        int32_t var_80_12 = ecx_26
                                        uint32_t var_84_2 = var_60
                                        uint32_t var_88_2 = var_58
                                        *(arg1 + 0x18) = *eax_13
                                        uint32_t var_8c_2 = var_50
                                        *(arg1 + 0x28) = var_6c
                                        *(arg1 + 0x2c) = var_68
                                        *(arg1 + 0x30) =
                                            *sub_47f000(&var_44, var_8c_2, var_88_2, var_84_2)
                                        
                                        if (sub_468ab0(arg2, arg1 + 0x40).b == 0)
                                            result.b = 0
                                        else if (sub_468d00(arg2, arg1 + 0x44).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x5c).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x60).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x64).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x68).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x6c).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x70).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x74).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x78).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x7c).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x80).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x84).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x88).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x8c).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x90).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, arg1 + 0x94).b == 0)
                                            result.b = 0
                                        else
                                            int32_t var_20_1 = 0xf
                                            int32_t var_24_1 = 0
                                            char var_34 = 0
                                            int32_t var_c_1 = 0
                                            
                                            if (sub_468d00(arg2, &var_34) == 0)
                                                sub_401fb0(&var_34)
                                                result.b = 0
                                            else
                                                sub_4c1f90(arg1, &var_34)
                                                
                                                if (sub_468b20(arg2, arg1 + 0xf8) == 0)
                                                    sub_401fb0(&var_34)
                                                    result.b = 0
                                                else if (sub_468b20(arg2, arg1 + 0xfc) == 0)
                                                    sub_401fb0(&var_34)
                                                    result.b = 0
                                                else
                                                    sub_401fb0(&var_34)
                                                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
