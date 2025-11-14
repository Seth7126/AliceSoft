// 函数: sub_530d30
// 地址: 0x530d30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0x2c)
int32_t edx = *(arg1 + 0x30)
float xmm1_1 = arg3 f- *(arg1 + 0x24)
int32_t ecx = int.d((arg2 f- *(arg1 + 0x1c)) * _mm_cvtepi32_ps(zx.o(esi))
    / (*(arg1 + 0x20) f- *(arg1 + 0x1c)))
int32_t eax = int.d(xmm1_1 * _mm_cvtepi32_ps(zx.o(edx)) / (*(arg1 + 0x28) f- *(arg1 + 0x24)))

if (ecx s>= 0 && ecx s< esi && eax s>= 0 && eax s< edx)
    int32_t esi_1 = esi * eax
    int32_t esi_2 = esi_1 + ecx
    
    if (esi_1 + ecx s>= 0)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x14) - *(arg1 + 0x10))
        int32_t edx_2 = edx_1 s>> 1
        eax = (edx_2 u>> 0x1f) + edx_2
        
        if (esi_2 s< eax)
            int32_t ecx_3 = *(arg1 + 0x10)
            int32_t edx_3 = esi_2 * 3
            int128_t xmm3_4 = 0xff7fffff
            int32_t* eax_4 = *(ecx_3 + (edx_3 << 2))
            int32_t ecx_4 = *(ecx_3 + (edx_3 << 2) + 4)
            int32_t edx_4 = 0
            uint32_t esi_6 = (ecx_4 - eax_4 + 3) u>> 2
            
            if (eax_4 u> ecx_4)
                esi_6 = 0
            
            if (esi_6 != 0)
                do
                    void* ecx_5 = *eax_4
                    
                    if (not(*(ecx_5 + 0x34) * arg2 + *(ecx_5 + 0x38) * arg3 f+ *(ecx_5 + 0x3c) f> 0)
                            && not(*(ecx_5 + 0x40) * arg2
                            + *(ecx_5 + 0x44) * arg3 f+ *(ecx_5 + 0x48) f> 0) && not(*(ecx_5 + 0x4c) * arg2
                            + *(ecx_5 + 0x50) * arg3 f+ *(ecx_5 + 0x54) f> 0))
                        int128_t xmm1_21 = (((*(ecx_5 + 0x58) * arg2) ^ 0x80000000)
                            - *(ecx_5 + 0x60) * arg3 f- *(ecx_5 + 0x64)) f/ *(ecx_5 + 0x5c)
                        
                        if (not(xmm1_21 f<= xmm3_4))
                            xmm3_4 = xmm1_21
                    
                    edx_4 += 1
                    eax_4 = &eax_4[1]
                while (edx_4 != esi_6)
                
                xmm3_4 f- -3.40282347e+38f
                eax_4:1.b = (xmm3_4 f== -3.40282347e+38f ? 1 : 0) << 6
                    | (is_unordered.d(xmm3_4, -3.40282347e+38f) ? 1 : 0) << 2
                    | (xmm3_4 f< -3.40282347e+38f ? 1 : 0)
                unimplemented  {test ah, 0x44}
            
            return eax_4

return eax
