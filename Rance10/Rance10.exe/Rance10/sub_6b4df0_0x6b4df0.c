// 函数: sub_6b4df0
// 地址: 0x6b4df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebp_1 = arg1 i+ 4
void* esi = *(arg2 i+ 0x14)
void* eax = sub_6b2ec0(ebp_1, *(esi + 0xc))

if (eax s> 0)
    int32_t edx_1 = 0
    int32_t eax_2 = (1 << (*(esi + 0xc)).b) - 1
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(eax))
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_2))
    uint32_t i = *(esi + 0x14)
    float xmm1_4 = xmm1_2 / xmm0_2 * _mm_cvtepi32_ps(zx.o(*(esi + 0x10)))
    
    for (; i != 0; i u>>= 1)
        edx_1 += 1
    
    void* eax_3 = sub_6b2ec0(ebp_1, edx_1)
    
    if (eax_3 != 0xffffffff && eax_3 s< *(esi + 0x14))
        float ecx_3 = arg1
        arg1 = 0f
        int32_t* ebx_1 =
            *(*(*(*(ecx_3 i+ 0x40) + 4) + 0x1c) + 0xb20) + *(esi + (eax_3 << 2) + 0x18) * 0x38
        int32_t result = sub_6b3050(ecx_3, ((*ebx_1 + *(arg2 i+ 4)) << 2) + 4)
        
        if (sub_6b47e0(result, result, ebx_1, ebp_1, *(arg2 i+ 4)) != 0xffffffff)
            int32_t edx_8 = *(arg2 i+ 4)
            int32_t eax_10 = 0
            
            if (edx_8 s> 0)
                do
                    int32_t i_1 = 0
                    
                    if (eax_10 s< edx_8)
                        while (i_1 s< *ebx_1)
                            i_1 += 1
                            *(result + (eax_10 << 2)) = *(result + (eax_10 << 2)) + arg1
                            eax_10 += 1
                            
                            if (eax_10 s>= *(arg2 i+ 4))
                                break
                    
                    edx_8 = *(arg2 i+ 4)
                    arg1 = *(result + (eax_10 << 2) - 4)
                while (eax_10 s< edx_8)
            
            *(result + (*(arg2 i+ 4) << 2)) = xmm1_4
            return result

return 0
