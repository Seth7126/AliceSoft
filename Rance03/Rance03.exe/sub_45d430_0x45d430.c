// 函数: sub_45d430
// 地址: 0x45d430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (arg2 == 1)
    eax.b = arg2.b
    int32_t xmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 8)))
    *(arg1 + 4) = arg2
    *(arg1 + 0xc) = xmm0_1
    return eax

if (arg2 != 2)
    eax.b = 0
    return eax

int32_t eax_1 = int.d(fconvert.t(*(arg1 + 0xc)))
*(arg1 + 4) = arg2
*(arg1 + 8) = eax_1
eax_1.b = 1
return eax_1
