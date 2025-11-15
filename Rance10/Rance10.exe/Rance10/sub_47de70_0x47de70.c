// 函数: sub_47de70
// 地址: 0x47de70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_64
int32_t var_c = __security_cookie ^ &var_64
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
            int32_t var_60
            _memset(&var_60, 0, 0x50)
            int32_t* eax_7 = *(arg1 + 4)
            eax_5, edx_2 = (*(*eax_7 + 0x24))(eax_7, 0x50, &var_60)
            
            if (eax_5 s>= 0)
                uint32_t* i = 0x18
                int32_t ecx_9
                ecx_9.b = var_60 s< 0x5555
                *(*(arg1 + 8) + 4) = ecx_9
                int32_t ecx_10
                ecx_10.b = var_60 s> 0xaaaa
                *(*(arg1 + 8) + 8) = ecx_10
                int32_t var_5c
                int32_t ecx_11
                ecx_11.b = var_5c s< 0x5555
                *(*(arg1 + 8) + 0xc) = ecx_11
                int32_t ecx_12
                ecx_12.b = var_5c s> 0xaaaa
                int32_t edi = 0
                *(*(arg1 + 8) + 0x10) = ecx_12
                
                do
                    char var_30[0x24]
                    uint32_t ecx_13 = zx.d(var_30[edi])
                    edi += 4
                    *(*(arg1 + 8) + i - 4) = ecx_13 u>> 7
                    void var_33
                    *(i + *(arg1 + 8)) = zx.d(*(&var_33 + edi)) u>> 7
                    void var_32
                    *(*(arg1 + 8) + i + 4) = zx.d(*(&var_32 + edi)) u>> 7
                    void var_31
                    *(*(arg1 + 8) + i + 8) = zx.d(*(&var_31 + edi)) u>> 7
                    i = &i[4]
                while (i s< 0x98)
                
                int32_t eax_16 = *(arg1 + 0xc)
                int32_t* ecx_21 = *(arg1 + 8)
                bool cond:4 = ecx_21 != eax_16
                
                if (ecx_21 != eax_16)
                    while (*ecx_21 != 1)
                        ecx_21 = &ecx_21[1]
                        
                        if (ecx_21 == eax_16)
                            break
                    
                    cond:4 = ecx_21 != eax_16
                
                eax_16.b = cond:4
                float xmm5_1 = _mm_cvtepi32_ps(zx.o(var_60))
                *arg2 = eax_16.b
                float xmm5_3 = (xmm5_1 - 32768f) * 3.05175781e-05f
                float xmm4_3 = (_mm_cvtepi32_ps(zx.o(var_5c)) - 32768f) * 3.05175781e-05f
                int32_t var_58
                float xmm3_3 = (_mm_cvtepi32_ps(zx.o(var_58)) - 32768f) * 3.05175781e-05f
                int32_t var_4c
                float xmm2_3 = (_mm_cvtepi32_ps(zx.o(var_4c)) - 32768f) * 3.05175781e-05f
                *(arg1 + 0x14) = xmm5_3
                *(arg1 + 0x18) = xmm4_3
                *(arg1 + 0x1c) = xmm3_3
                *(arg1 + 0x20) = xmm2_3
                
                if (-0.200000003f > xmm5_3 || xmm5_3 > 0.200000003f || -0.200000003f > xmm4_3
                        || xmm4_3 > 0.200000003f || -0.200000003f > xmm3_3 || xmm3_3 > 0.200000003f
                        || -0.200000003f > xmm2_3 || not(xmm2_3 <= 0.200000003f))
                    *arg2 = 1
                
                eax_16.b = 1
                @__security_check_cookie@4(var_c ^ &var_64)
                return eax_16
        
        int32_t var_74_3 = *(arg1 + 0xc)
        var_64 = 0
        sub_47e110(eax_5, edx_2, &var_64, *(arg1 + 8), var_74_3)
        int32_t eax_6
        eax_6.b = 0
        @__security_check_cookie@4(var_c ^ &var_64)
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
@__security_check_cookie@4(var_c ^ &var_64)
return eax_1
