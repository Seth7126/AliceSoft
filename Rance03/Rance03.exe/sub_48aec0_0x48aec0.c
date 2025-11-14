// 函数: sub_48aec0
// 地址: 0x48aec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (not(_mm_cvtepi32_ps(zx.o(*(arg2 + 0x110))) f<= arg1))
    return int.d(arg1 * 255f f* *(arg2 + 0x114))

int32_t edx = *(arg2 + 0x34)

if (arg1 f<= _mm_cvtepi32_ps(zx.o(edx - *(arg2 + 0x118))))
    return 0xff

return int.d((_mm_cvtepi32_ps(zx.o(edx)) - arg1) * 255f f* *(arg2 + 0x11c))
