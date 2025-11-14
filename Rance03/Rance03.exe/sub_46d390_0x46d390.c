// 函数: sub_46d390
// 地址: 0x46d390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_5c
int32_t var_4 = __security_cookie ^ &var_5c
*arg2 = 0
int32_t* ecx = *(arg1 + 4)
int32_t eax_1

if (ecx != 0)
    if ((*(*ecx + 0x1c))(ecx) s>= 0)
        int32_t* eax_4 = *(arg1 + 4)
        int32_t eax_5
        int32_t edx_2
        eax_5, edx_2 = (*(*eax_4 + 0x64))(eax_4)
        
        if (eax_5 s>= 0)
            int32_t var_58
            _memset(&var_58, 0, 0x50)
            int32_t* eax_7 = *(arg1 + 4)
            eax_5, edx_2 = (*(*eax_7 + 0x24))(eax_7, 0x50, &var_58)
            
            if (eax_5 s>= 0)
                int32_t eax_8 = var_58
                
                if (eax_8 s>= 0x5555)
                    *(*(arg1 + 8) + 4) = 0
                    
                    if (eax_8 s<= 0xaaaa)
                        *(*(arg1 + 8) + 8) = 0
                    else
                        *(*(arg1 + 8) + 8) = 1
                else
                    *(*(arg1 + 8) + 4) = 1
                    *(*(arg1 + 8) + 8) = 0
                
                int32_t var_54
                
                if (var_54 s>= 0x5555)
                    *(*(arg1 + 8) + 0xc) = 0
                    
                    if (var_54 s<= 0xaaaa)
                        *(*(arg1 + 8) + 0x10) = 0
                    else
                        *(*(arg1 + 8) + 0x10) = 1
                else
                    *(*(arg1 + 8) + 0xc) = 1
                    *(*(arg1 + 8) + 0x10) = 0
                
                int32_t edi = 0
                
                for (uint32_t* i = 0x18; i s< 0x98; i = &i[4])
                    char var_28[0x24]
                    uint32_t ecx_9 = zx.d(var_28[edi])
                    edi += 4
                    *(i + *(arg1 + 8) - 4) = ecx_9 u>> 7
                    void var_2b
                    *(i + *(arg1 + 8)) = zx.d(*(&var_2b + edi)) u>> 7
                    void var_2a
                    *(i + *(arg1 + 8) + 4) = zx.d(*(&var_2a + edi)) u>> 7
                    void var_29
                    *(i + *(arg1 + 8) + 8) = zx.d(*(&var_29 + edi)) u>> 7
                
                int32_t i_1 = 0
                
                if (((*(arg1 + 0xc) - *(arg1 + 8)) & 0xfffffffc) s> 0)
                    int32_t* ecx_17 = *(arg1 + 8)
                    
                    do
                        if (*ecx_17 != 0)
                            *arg2 = 1
                            break
                        
                        i_1 += 1
                        ecx_17 = &ecx_17[1]
                    while (i_1 s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
                
                float xmm5_3 = (_mm_cvtepi32_ps(zx.o(var_58)) - 32768f) * 3.05175781e-05f
                float xmm4_3 = (_mm_cvtepi32_ps(zx.o(var_54)) - 32768f) * 3.05175781e-05f
                int32_t var_50
                float xmm3_3 = (_mm_cvtepi32_ps(zx.o(var_50)) - 32768f) * 3.05175781e-05f
                int32_t var_44
                float xmm2_3 = (_mm_cvtepi32_ps(zx.o(var_44)) - 32768f) * 3.05175781e-05f
                *(arg1 + 0x14) = xmm5_3
                *(arg1 + 0x18) = xmm4_3
                *(arg1 + 0x1c) = xmm3_3
                *(arg1 + 0x20) = xmm2_3
                
                if (-0.200000003f > xmm5_3 || xmm5_3 > 0.200000003f || -0.200000003f > xmm4_3
                        || xmm4_3 > 0.200000003f || -0.200000003f > xmm3_3 || xmm3_3 > 0.200000003f
                        || -0.200000003f > xmm2_3 || not(xmm2_3 <= 0.200000003f))
                    *arg2 = 1
                
                int32_t eax_19
                eax_19.b = 1
                sub_69a5bc(var_4 ^ &var_5c)
                return eax_19
        
        int32_t var_6c_3 = *(arg1 + 0xc)
        var_5c = 0
        sub_46d680(eax_5, edx_2, &var_5c, *(arg1 + 8), var_6c_3)
        int32_t eax_6
        eax_6.b = 0
        sub_69a5bc(var_4 ^ &var_5c)
        return eax_6
    
    eax_1 = *(arg1 + 0xc)
    int32_t* ecx_1 = *(arg1 + 8)
    int32_t edx_1 = 0
    uint32_t esi_4 = (eax_1 - ecx_1 + 3) u>> 2
    
    if (ecx_1 u> eax_1)
        esi_4 = 0
    
    if (esi_4 != 0)
        do
            edx_1 += 1
            *ecx_1 = 0
            ecx_1 = &ecx_1[1]
        while (edx_1 != esi_4)

eax_1.b = 0
sub_69a5bc(var_4 ^ &var_5c)
return eax_1
