// 函数: sub_56b070
// 地址: 0x56b070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm2 = -3.40282347e+38f
int32_t ebp = *(arg1 + 0x34)
void* ebx = nullptr
int32_t* i = *(arg1 + 0x30)
float xmm3 = -3.40282347e+38f

for (; i != ebp; i = &i[1])
    void* edi_1 = *i
    
    if (edi_1 != 0 && *(edi_1 + 0xc) == 2)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x38e38e39, *(edi_1 + 0x1a8) - *(edi_1 + 0x1a4))
        int32_t edx_2 = edx_1 s>> 3
        int32_t eax_5
        
        if ((edx_2 u>> 0x1f) + edx_2 s> 0)
            eax_5 = **(edi_1 + 0x1a4)
        else
            eax_5 = 0
        
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = muls.dp.d(0x38e38e39, *(edi_1 + 0x1a8) - *(edi_1 + 0x1a4))
        float xmm1_1 = _mm_cvtepi32_ps(zx.o(eax_5))
        int32_t edx_4 = edx_3 s>> 3
        int32_t eax_11
        
        if ((edx_4 u>> 0x1f) + edx_4 s> 0)
            int32_t eax_12
            int32_t edx_5
            edx_5:eax_12 = muls.dp.d(0x38e38e39, *(edi_1 + 0x1a8) - *(edi_1 + 0x1a4))
            int32_t edx_6 = edx_5 s>> 3
            eax_11 = *(*(edi_1 + 0x1a4) + ((edx_6 u>> 0x1f) + edx_6) * 0x24 - 0x24)
        else
            eax_11 = 0
        
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_11))
        
        if (not(xmm1_1 > arg2))
            if (xmm0_2 > arg2)
                return edi_1
            
            xmm0_2 - xmm2
            eax_11:1.b = (xmm0_2 == xmm2 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, xmm2) ? 1 : 0) << 2
                | (xmm0_2 < xmm2 ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                if (not(xmm0_2 <= xmm2))
                    goto label_56b14d
            else if (xmm1_1 > xmm3 || not(xmm0_2 <= xmm2))
            label_56b14d:
                ebx = edi_1
                xmm3 = xmm1_1
                xmm2 = xmm0_2

return ebx
