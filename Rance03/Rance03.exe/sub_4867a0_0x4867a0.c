// 函数: sub_4867a0
// 地址: 0x4867a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg2 + 4)

if (&edx[4] u<= *(arg2 + 8))
    *(arg1 + 8) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) += 4
    *(arg1 + 0xc) = 1f / _mm_cvtepi32_ps(zx.o(*(arg1 + 8)))
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u<= *(arg2 + 8))
        *(arg1 + 0x10) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) += 4
        
        if (sub_468b20(arg2, arg1 + 0x14).b != 0 && sub_468bc0(arg2, arg1 + 0x18).b != 0)
            if (sub_468bc0(arg2, arg1 + 0x1c) != 0)
                float xmm0_4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10))) f/ *(arg1 + 0x1c)
                *(arg1 + 0x20) = xmm0_4
                *(arg1 + 0x24) = 1f / xmm0_4
                
                if (sub_468b20(arg2, arg1 + 0x28) != 0 && sub_468b20(arg2, arg1 + 0x2c) != 0)
                    return sub_468b20(arg2, arg1 + 0x30) != 0
            
            return 0

uint32_t* result
result.b = 0
return result
