// 函数: sub_4f92e0
// 地址: 0x4f92e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (eax == 0)
    eax.b = 0
    return eax

void* eax_1 = sub_5104e0(*(eax + 0x34), arg5)
int32_t xmm1_1 = _mm_cvtepi32_ps(zx.o(arg2))
*(eax_1 + 0x3c) = 1
*(eax_1 + 8) = 0
*(eax_1 + 0xc) = 0
*(eax_1 + 0x14) = 0
int32_t xmm0_1 = _mm_cvtepi32_ps(zx.o(arg4))
*(eax_1 + 0x10) = xmm1_1
*(eax_1 + 0x18) = 0
*(eax_1 + 0x1c) = xmm0_1
*(eax_1 + 0x20) = xmm1_1
*(eax_1 + 0x24) = xmm0_1
eax_1.b = 1
return eax_1
