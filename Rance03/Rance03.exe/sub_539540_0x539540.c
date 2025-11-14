// 函数: sub_539540
// 地址: 0x539540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 4)
int32_t ebp = *(arg1 + 8)

if (result != ebp)
    void* edx_1 = arg3
    void* xmm5_1 = *(edx_1 + 4)
    void* xmm2_1 = *(edx_1 + 8)
    int32_t xmm6_1 = *(edx_1 + 0xc)
    int32_t xmm3_1 = *(edx_1 + 0x10)
    int32_t xmm4_1 = *(edx_1 + 0x14)
    int32_t esi_1 = *(arg2 + 0x58)
    int128_t xmm7_1 = *(edx_1 + 0x18)
    arg2 = xmm5_1
    arg3 = xmm2_1
    int32_t var_4_1 = xmm6_1
    int32_t var_c_1 = xmm3_1
    int32_t var_8_1 = xmm4_1
    
    do
        int128_t xmm1_1 = xmm7_1
        int32_t* edi_1 = result + 8
        int32_t i_1 = 3
        int32_t i
        
        do
            void* ecx_1 = *edi_1
            int32_t ecx_2
            
            if (ecx_1 != 0)
                ecx_2 = *(ecx_1 + 4)
            else
                ecx_2 = 0xffffffff
            
            int32_t ecx_3 = ecx_2 * 9
            void* xmm0_1 = *(esi_1 + (ecx_3 << 2))
            
            if (not(xmm5_1 f<= xmm0_1))
                xmm5_1 = xmm0_1
                arg2 = xmm5_1
                *(edx_1 + 4) = xmm5_1
            
            void* xmm0_2 = *(esi_1 + (ecx_3 << 2))
            
            if (not(xmm0_2 f<= xmm2_1))
                xmm2_1 = xmm0_2
                arg3 = xmm2_1
                *(edx_1 + 8) = xmm2_1
            
            int32_t xmm0_3 = *(esi_1 + (ecx_3 << 2) + 4)
            
            if (not(xmm6_1 f<= xmm0_3))
                xmm6_1 = xmm0_3
                var_4_1 = xmm6_1
                *(edx_1 + 0xc) = xmm6_1
            
            int32_t xmm0_4 = *(esi_1 + (ecx_3 << 2) + 4)
            
            if (not(xmm0_4 f<= xmm3_1))
                xmm3_1 = xmm0_4
                var_c_1 = xmm3_1
                *(edx_1 + 0x10) = xmm3_1
            
            int32_t xmm0_5 = *(esi_1 + (ecx_3 << 2) + 8)
            
            if (not(xmm4_1 f<= xmm0_5))
                xmm4_1 = xmm0_5
                var_8_1 = xmm4_1
                *(edx_1 + 0x14) = xmm4_1
            
            int128_t xmm0_6 = *(esi_1 + (ecx_3 << 2) + 8)
            
            if (not(xmm0_6 f<= xmm1_1))
                xmm1_1 = xmm0_6
                xmm7_1 = xmm1_1
                *(edx_1 + 0x18) = xmm1_1
            
            edi_1 = &edi_1[5]
            i = i_1
            i_1 -= 1
        while (i != 1)
        xmm5_1 = arg2
        result += 0x4c
        xmm2_1 = arg3
        xmm3_1 = var_c_1
        xmm4_1 = var_8_1
        xmm6_1 = var_4_1
    while (result != ebp)

return result
