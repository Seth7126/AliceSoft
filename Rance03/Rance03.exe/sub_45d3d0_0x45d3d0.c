// 函数: sub_45d3d0
// 地址: 0x45d3d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (sub_40c250(arg2, 0x6dc440) == 0)
    if (sub_40c250(arg2, "float") != 0)
        int32_t result = int.d(fconvert.t(*(arg1 + 0xc)))
        *(arg1 + 4) = 2
        *(arg1 + 8) = result
        result.b = 1
        return result
    
    if (arg2[4] != 0)
        return 0
else
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 8)))
    *(arg1 + 4) = 1
    *(arg1 + 0xc) = xmm0_2

return 1
