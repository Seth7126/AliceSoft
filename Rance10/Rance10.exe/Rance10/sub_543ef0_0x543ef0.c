// 函数: sub_543ef0
// 地址: 0x543ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (eax == 0)
    eax.b = 0
    return eax

void* edi = *(eax + 0x44)
sub_555e00(edi, 0x17, arg5)
void* eax_1 = *(edi + (arg5 << 2) + 0x7c)
int32_t xmm1_1 = _mm_cvtepi32_ps(zx.o(arg2))
*(eax_1 + 0x44) = 1
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
