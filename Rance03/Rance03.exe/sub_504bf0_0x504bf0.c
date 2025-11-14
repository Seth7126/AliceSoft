// 函数: sub_504bf0
// 地址: 0x504bf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6be788
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
void* ebx
void* var_50 = ebx
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
int32_t var_c_1 = 0

if (sub_468d00(arg2, &var_34) == 0)
    ebx.b = 0
else
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
        ebx.b = 0
    else
        uint32_t ecx_7 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) = &edx_1[4]
        uint32_t var_3c
        
        if (sub_468bc0(arg2, &var_3c) == 0)
            ebx.b = 0
        else
            uint32_t var_40
            
            if (sub_468b20(arg2, &var_4c) == 0)
                ebx.b = 0
            else
                uint32_t var_38
                
                if (sub_468b20(arg2, &var_40) == 0)
                    ebx.b = 0
                else
                    uint32_t var_48
                    
                    if (sub_468b20(arg2, &var_38) == 0)
                        ebx.b = 0
                    else if (sub_468b20(arg2, &var_48) == 0)
                        ebx.b = 0
                    else
                        sub_504320(arg1, var_4c, var_40, var_38, var_48)
                        
                        if (sub_504240(arg1, &var_34) == 0)
                            ebx.b = 0
                        else
                            uint32_t xmm1_1 = var_3c
                            *(arg1 + 0x20) f- ecx_7
                            bool p_2 = unimplemented  {test ah, 0x44}
                            bool p_4
                            
                            if (not(p_2))
                                *(arg1 + 0x24) f- xmm1_1
                                p_4 = unimplemented  {test ah, 0x44}
                            
                            if (p_2 || p_4)
                                *(arg1 + 0x20) = ecx_7
                                *(arg1 + 0x24) = xmm1_1
                                *(arg1 + 0x58) = 1
                            
                            ebx.b = 1

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return ebx.b
