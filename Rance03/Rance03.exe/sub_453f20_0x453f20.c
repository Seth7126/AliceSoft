// 函数: sub_453f20
// 地址: 0x453f20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b78ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
int32_t __saved_edi
int32_t var_c8 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg2 + 4)
void* result

if (&edx[4] u> *(arg2 + 8))
    result.b = 0
else
    *(arg1 + 4) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) += 4
    
    if (sub_468d00(arg2, arg1 + 8).b == 0)
        result.b = 0
    else if (sub_468b20(arg2, &var_b4).b == 0)
        result.b = 0
    else
        *(arg1 + 0x20) = var_b4
        
        if (sub_454a60(arg1 + 0x24, arg2).b == 0)
            result.b = 0
        else if (sub_468b20(arg2, &var_b4).b == 0)
            result.b = 0
        else
            uint32_t ebp_1 = var_b4
            int32_t edi_1 = 0
            
            if (ebp_1 s<= 0)
            label_4540f4:
                
                if (sub_468d00(arg2, arg1 + 0x58).b == 0)
                    result.b = 0
                else
                    result.b = sub_468b20(arg2, arg1 + 0x70).b != 0
            else
                while (true)
                    void var_b0
                    sub_454150(&var_b0)
                    int32_t var_4 = 0
                    void var_ac
                    void var_88
                    
                    if (sub_454a60(&var_ac, arg2) != 0 && sub_468d00(arg2, &var_88) != 0)
                        var_b4 = 0
                        
                        if (sub_468b20(arg2, &var_b4) != 0)
                            bool eax_12 = var_b4 == 1
                            bool var_68_1 = eax_12
                            uint32_t var_64
                            uint32_t var_60
                            void var_5c
                            void var_44
                            void var_2c
                            
                            if (eax_12 == 0)
                            label_4540cc:
                                sub_454510(arg1 + 0x4c, &var_b0)
                                int32_t var_4_1 = 0xffffffff
                                sub_4541d0(&var_b0)
                                edi_1 += 1
                                
                                if (edi_1 s>= ebp_1)
                                    goto label_4540f4
                                
                                continue
                            else if (sub_468b20(arg2, &var_64) != 0
                                    && sub_468bc0(arg2, &var_60) != 0
                                    && sub_468d00(arg2, &var_5c) != 0
                                    && sub_468d00(arg2, &var_44) != 0
                                    && sub_468d00(arg2, &var_2c) != 0)
                                goto label_4540cc
                    
                    sub_4541d0(&var_b0)
                    break
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b4)
return result
