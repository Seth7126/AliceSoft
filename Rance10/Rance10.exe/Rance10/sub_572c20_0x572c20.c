// 函数: sub_572c20
// 地址: 0x572c20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg1 + 0x28)
int32_t edx = *(arg1 + 0x2c)
float xmm1_1 = arg3 f- *(arg1 + 0x20)
int32_t ecx = int.d((arg2 f- *(arg1 + 0x18)) * _mm_cvtepi32_ps(zx.o(esi))
    / (*(arg1 + 0x1c) f- *(arg1 + 0x18)))
int32_t eax = int.d(xmm1_1 * _mm_cvtepi32_ps(zx.o(edx)) / (*(arg1 + 0x24) f- *(arg1 + 0x20)))

if (ecx s>= 0 && ecx s< esi && eax s>= 0 && eax s< edx)
    int32_t esi_1 = esi * eax
    int32_t esi_2 = esi_1 + ecx
    
    if (esi_1 + ecx s>= 0)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x10) - *(arg1 + 0xc))
        int32_t edx_2 = edx_1 s>> 1
        
        if (esi_2 s< (edx_2 u>> 0x1f) + edx_2)
            int32_t eax_4 = *(arg1 + 0xc)
            int32_t edx_3 = esi_2 * 3
            float xmm4_1 = -3.40282347e+38f
            int32_t ecx_3 = *(eax_4 + (edx_3 << 2) + 4)
            eax = *(eax_4 + (edx_3 << 2))
            
            if (eax != ecx_3)
                do
                    int32_t* edx_4 = *eax
                    float xmm1_4 = edx_4[2]
                    float xmm7_1 = edx_4[6]
                    float xmm3_4 = edx_4[8]
                    
                    if (not((*edx_4 - xmm7_1) * (arg3 - xmm1_4)
                            - (xmm1_4 - xmm3_4) * (arg2 f- *edx_4) f> 0))
                        float xmm1_7 = edx_4[5]
                        
                        if (not((edx_4[3] f- *edx_4) * (arg3 - xmm1_7)
                                - (xmm1_7 f- edx_4[2]) * (arg2 f- edx_4[3]) f> 0) && not(
                                (xmm7_1 f- edx_4[3]) * (arg3 - xmm3_4)
                                - (xmm3_4 f- edx_4[5]) * (arg2 - xmm7_1) f> 0))
                            xmm4_1 = _mm_max_ss(
                                (((edx_4[0xc] f* arg2) ^ (data_79aad0).d)
                                    - edx_4[0xe] f* arg3 f- edx_4[0xf]) f/ edx_4[0xd], 
                                xmm4_1)
                    
                    eax += 4
                while (eax != ecx_3)
                
                xmm4_1 - -3.40282347e+38f
                eax:1.b = (xmm4_1 == -3.40282347e+38f ? 1 : 0) << 6
                    | (is_unordered.d(xmm4_1, -3.40282347e+38f) ? 1 : 0) << 2
                    | (xmm4_1 < -3.40282347e+38f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    *arg4 = xmm4_1
                    float* eax_5
                    eax_5.b = 1
                    return eax_5

eax.b = 0
return eax
