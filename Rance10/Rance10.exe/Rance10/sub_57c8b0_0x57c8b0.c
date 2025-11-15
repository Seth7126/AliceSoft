// 函数: sub_57c8b0
// 地址: 0x57c8b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = &arg1[0xc]

if (arg1 != result)
    int32_t edi_1 = *(arg2 + 0x6c)
    int32_t xmm3_1 = arg3[1]
    int32_t xmm6_1 = arg3[2]
    int32_t xmm4_1 = arg3[3]
    int32_t xmm5_1 = arg3[4]
    int32_t xmm2_1 = arg3[5]
    
    do
        int32_t edx_4 = **arg1 * 9
        int32_t xmm1_1 = *(edi_1 + (edx_4 << 2))
        
        if (not(*arg3 f<= xmm1_1))
            *arg3 = xmm1_1
        
        int32_t xmm0_2 = *(edi_1 + (edx_4 << 2))
        
        if (not(xmm0_2 f<= xmm3_1))
            xmm3_1 = xmm0_2
            arg3[1] = xmm3_1
        
        int32_t xmm0_3 = *(edi_1 + (edx_4 << 2) + 4)
        
        if (not(xmm6_1 f<= xmm0_3))
            xmm6_1 = xmm0_3
            arg3[2] = xmm6_1
        
        int32_t xmm0_4 = *(edi_1 + (edx_4 << 2) + 4)
        
        if (not(xmm0_4 f<= xmm4_1))
            xmm4_1 = xmm0_4
            arg3[3] = xmm4_1
        
        int32_t xmm0_5 = *(edi_1 + (edx_4 << 2) + 8)
        
        if (not(xmm5_1 f<= xmm0_5))
            xmm5_1 = xmm0_5
            arg3[4] = xmm5_1
        
        int32_t xmm0_6 = *(edi_1 + (edx_4 << 2) + 8)
        
        if (not(xmm0_6 f<= xmm2_1))
            xmm2_1 = xmm0_6
            arg3[5] = xmm2_1
        
        arg1 = &arg1[4]
    while (arg1 != result)

return result
