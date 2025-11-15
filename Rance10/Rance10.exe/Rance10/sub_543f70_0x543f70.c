// 函数: sub_543f70
// 地址: 0x543f70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (result != 0)
    void* edi_1 = *(result + 0x44)
    sub_555e00(edi_1, 0x17, arg11)
    result = *(edi_1 + (arg11 << 2) + 0x7c)
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(arg2))
    *(result + 0x44) = 0
    *(result + 8) = xmm0_2
    *(result + 0xc) = _mm_cvtepi32_ps(zx.o(arg4))
    *(result + 0x10) = _mm_cvtepi32_ps(zx.o(arg5))
    *(result + 0x14) = _mm_cvtepi32_ps(zx.o(arg6))
    *(result + 0x18) = _mm_cvtepi32_ps(zx.o(arg7))
    *(result + 0x1c) = _mm_cvtepi32_ps(zx.o(arg8))
    *(result + 0x20) = _mm_cvtepi32_ps(zx.o(arg9))
    *(result + 0x24) = _mm_cvtepi32_ps(zx.o(arg10))

return result
