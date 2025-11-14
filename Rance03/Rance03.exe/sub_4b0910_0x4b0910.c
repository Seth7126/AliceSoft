// 函数: sub_4b0910
// 地址: 0x4b0910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg2 + 4)
uint32_t* result

if (&edx[4] u> *(arg2 + 8))
    result.b = 0
else
    *(arg1 + 0x50) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) += 4
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
        result.b = 0
    else
        *(arg1 + 0x54) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) += 4
        
        if (sub_468b20(arg2, arg1 + 0x58).b == 0)
            result.b = 0
        else if (sub_468b20(arg2, arg1 + 0x5c).b == 0)
            result.b = 0
        else if (sub_468b20(arg2, arg1 + 0x60).b == 0)
            result.b = 0
        else if (sub_468d00(arg2, arg1 + 0x64).b == 0)
            result.b = 0
        else if (sub_468b20(arg2, arg1 + 0x7c).b == 0)
            result.b = 0
        else
            uint32_t var_38
            
            if (sub_468b20(arg2, &var_5c).b == 0)
                result.b = 0
            else
                uint32_t var_50
                
                if (sub_468b20(arg2, &var_38).b == 0)
                    result.b = 0
                else
                    uint32_t var_40
                    
                    if (sub_468b20(arg2, &var_50).b == 0)
                        result.b = 0
                    else
                        uint32_t var_48
                        
                        if (sub_468b20(arg2, &var_40).b == 0)
                            result.b = 0
                        else
                            uint32_t var_58
                            
                            if (sub_468b20(arg2, &var_48).b == 0)
                                result.b = 0
                            else
                                uint32_t var_54
                                
                                if (sub_468bc0(arg2, &var_58).b == 0)
                                    result.b = 0
                                else
                                    uint32_t var_4c
                                    
                                    if (sub_468bc0(arg2, &var_54).b == 0)
                                        result.b = 0
                                    else
                                        uint32_t var_44
                                        
                                        if (sub_468b20(arg2, &var_4c).b == 0)
                                            result.b = 0
                                        else if (sub_468b20(arg2, &var_44).b == 0)
                                            result.b = 0
                                        else
                                            uint32_t var_3c
                                            int32_t ecx_29
                                            result, ecx_29 = sub_468b20(arg2, &var_3c)
                                            
                                            if (result.b == 0)
                                                result.b = 0
                                            else
                                                int32_t var_70_16 = ecx_29
                                                uint32_t var_74_1 = var_50
                                                *(arg1 + 0x84) = var_5c
                                                uint32_t var_78_1 = var_40
                                                uint32_t var_7c_1 = var_48
                                                *(arg1 + 0x88) = var_38
                                                void var_34
                                                int32_t* eax_18
                                                int32_t ecx_31
                                                eax_18, ecx_31 = sub_47f000(&var_34, var_7c_1, 
                                                    var_78_1, var_74_1)
                                                int32_t var_70_17 = ecx_31
                                                uint32_t var_74_2 = var_4c
                                                uint32_t var_78_2 = var_44
                                                *(arg1 + 0x8c) = *eax_18
                                                uint32_t var_7c_2 = var_3c
                                                *(arg1 + 0x9c) = var_58
                                                *(arg1 + 0xa0) = var_54
                                                int32_t* eax_19 = sub_47f000(&var_34, var_7c_2, 
                                                    var_78_2, var_74_2)
                                                var_5c = 0
                                                *(arg1 + 0xa4) = *eax_19
                                                
                                                if (sub_468b20(arg2, &var_5c).b == 0)
                                                    result.b = 0
                                                else
                                                    int32_t ebx_1 = 0
                                                    
                                                    if (var_5c s<= 0)
                                                    label_4b0bd7:
                                                        
                                                        if (sub_468b20(arg2, arg1 + 0xc0).b == 0)
                                                            result.b = 0
                                                        else
                                                            result.b =
                                                                sub_468b20(arg2, arg1 + 0xc4).b != 0
                                                    else
                                                        while (true)
                                                            sub_401f60(&var_34, 0x6da299)
                                                            int32_t var_c_1 = 0
                                                            
                                                            if (sub_468d00(arg2, &var_34) == 0)
                                                                sub_401fb0(&var_34)
                                                                break
                                                            
                                                            sub_421cd0(arg1 + 0xb4, &var_34)
                                                            int32_t var_c_2 = 0xffffffff
                                                            sub_401fb0(&var_34)
                                                            ebx_1 += 1
                                                            
                                                            if (ebx_1 s>= var_5c)
                                                                goto label_4b0bd7
                                                        
                                                        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
