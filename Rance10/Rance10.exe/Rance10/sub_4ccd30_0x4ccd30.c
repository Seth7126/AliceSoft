// 函数: sub_4ccd30
// 地址: 0x4ccd30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = arg2
char* edx = *(esi + 4)

if (&edx[4] u<= *(esi + 8))
    *(arg1 + 0x30) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(esi + 4) += 4
    char* edx_1 = *(esi + 4)
    
    if (&edx_1[4] u<= *(esi + 8))
        *(arg1 + 8) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(esi + 4) += 4
        *(arg1 + 0xc) = 1f / _mm_cvtepi32_ps(zx.o(*(arg1 + 8)))
        
        if (sub_61ec90(esi, arg1 + 0x10) != 0 && sub_61ec90(esi, arg1 + 0x14) != 0
                && sub_6c9300(esi, arg1 + 0x18) != 0)
            if (sub_6c9300(esi, arg1 + 0x1c) != 0)
                float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10))) f/ *(arg1 + 0x1c)
                *(arg1 + 0x20) = xmm0_3
                *(arg1 + 0x24) = 1f / xmm0_3
                
                if (sub_61ec90(esi, arg1 + 0x28) != 0 && sub_61ec90(esi, arg1 + 0x2c) != 0
                        && sub_61ec90(esi, &arg2) != 0 && sub_6c9230(esi, 0x1c) != 0)
                    if (*(arg1 + 0x30) s>= 0xc)
                        *(arg1 + 0x34) = 1
                    
                    return 1
        
        return 0

void* result
result.b = 0
return result
