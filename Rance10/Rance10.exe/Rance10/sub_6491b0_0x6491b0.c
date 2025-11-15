// 函数: sub_6491b0
// 地址: 0x6491b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t xmm2_1 = _mm_cvtepi32_ps(zx.o(arg2))
int32_t* ecx = *arg3
*ecx = xmm2_1
int32_t xmm1_1 = _mm_cvtepi32_ps(zx.o(arg4))
int32_t xmm4_1 = _mm_cvtepi32_ps(zx.o(arg5 + arg2))
ecx[1] = xmm1_1
ecx[2] = 0x3f000000
ecx[3] = 0x3f800000
ecx[4] = arg7
ecx[5] = 0
ecx[6] = 0
ecx[7] = xmm4_1
ecx[8] = xmm1_1
ecx[9] = 0x3f000000
ecx[0xa] = 0x3f800000
ecx[0xb] = arg7
ecx[0xc] = 0x3f800000
ecx[0xd] = 0
ecx[0xe] = xmm2_1
int32_t xmm3_1 = _mm_cvtepi32_ps(zx.o(arg6 + arg4))
ecx[0xf] = xmm3_1
ecx[0x10] = 0x3f000000
ecx[0x11] = 0x3f800000
ecx[0x12] = arg7
ecx[0x13] = 0
ecx[0x14] = 0x3f800000
ecx[0x15] = xmm4_1
ecx[0x16] = xmm3_1
ecx[0x17] = 0x3f000000
ecx[0x18] = 0x3f800000
ecx[0x19] = arg7
*arg3 = &ecx[0x1c]
ecx[0x1a] = 0x3f800000
ecx[0x1b] = 0x3f800000
return &ecx[0x1c]
