// 函数: sub_5f9420
// 地址: 0x5f9420
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm7 = 1f / _mm_cvtepi32_ps(zx.o(*(arg1 + 4)))
int32_t ebx
ebx.b = arg8
int32_t edx_2 = arg7 << 0x18 | 0xffffff
float xmm6_1 = _mm_cvtepi32_ps(zx.o(arg4))
float xmm0_2 = xmm7 * 0f
float xmm3_1 = xmm6_1 + 1f
float xmm1_1 = _mm_cvtepi32_ps(zx.o(arg6))
float xmm0_4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 8)))
float xmm5_1 = _mm_cvtepi32_ps(zx.o(arg3))
float xmm2 = 1f / xmm0_4
float xmm4_1 = xmm1_1 + xmm5_1
float xmm7_1 = xmm7 * xmm1_1
float xmm1_2 = xmm5_1
float xmm0_7 = _mm_cvtepi32_ps(zx.o(arg5)) * xmm2
float xmm0_10 = _mm_cvtepi32_ps(zx.o(arg5 + 1)) * xmm2
float xmm2_1 = xmm6_1

if (ebx.b != 0)
    xmm1_2 = xmm1_2 - 0.5f
    xmm2_1 = xmm2_1 - 0.5f

float* eax_2 = *arg2
*eax_2 = xmm1_2
eax_2[1] = xmm2_1
float xmm2_2 = xmm6_1
eax_2[2] = 0x3f000000
eax_2[3] = 0x3f800000
eax_2[4] = edx_2
eax_2[5] = xmm0_2
eax_2[6] = xmm0_7
*arg2 = &eax_2[7]
float xmm1_5 = xmm4_1

if (ebx.b != 0)
    xmm1_5 = xmm1_5 - 0.5f
    xmm2_2 = xmm2_2 - 0.5f

eax_2[7] = xmm1_5
eax_2[8] = xmm2_2
float xmm2_3 = xmm3_1
eax_2[9] = 0x3f000000
eax_2[0xa] = 0x3f800000
eax_2[0xb] = edx_2
eax_2[0xc] = xmm7_1
eax_2[0xd] = xmm0_7
*arg2 = &eax_2[0xe]
float xmm1_7 = xmm5_1

if (ebx.b != 0)
    xmm1_7 = xmm1_7 - 0.5f
    xmm2_3 = xmm2_3 - 0.5f

eax_2[0xe] = xmm1_7
eax_2[0xf] = xmm2_3
eax_2[0x10] = 0x3f000000
eax_2[0x11] = 0x3f800000
eax_2[0x12] = edx_2
eax_2[0x13] = xmm0_2
float xmm1_9 = xmm4_1
eax_2[0x14] = xmm0_10
*arg2 = &eax_2[0x15]

if (ebx.b != 0)
    xmm1_9 = xmm1_9 - 0.5f
    xmm6_1 = xmm6_1 - 0.5f

eax_2[0x15] = xmm1_9
eax_2[0x16] = xmm6_1
eax_2[0x17] = 0x3f000000
eax_2[0x18] = 0x3f800000
eax_2[0x19] = edx_2
eax_2[0x1a] = xmm7_1
eax_2[0x1b] = xmm0_7
*arg2 = &eax_2[0x1c]
float xmm1_11 = xmm3_1

if (ebx.b != 0)
    xmm4_1 = xmm4_1 - 0.5f
    xmm1_11 = xmm1_11 - 0.5f

eax_2[0x1c] = xmm4_1
eax_2[0x1d] = xmm1_11
eax_2[0x1e] = 0x3f000000
eax_2[0x1f] = 0x3f800000
eax_2[0x20] = edx_2
eax_2[0x21] = xmm7_1
eax_2[0x22] = xmm0_10
*arg2 = &eax_2[0x23]

if (ebx.b != 0)
    xmm5_1 = xmm5_1 - 0.5f
    xmm3_1 = xmm3_1 - 0.5f

eax_2[0x23] = xmm5_1
eax_2[0x24] = xmm3_1
eax_2[0x25] = 0x3f000000
eax_2[0x26] = 0x3f800000
eax_2[0x27] = edx_2
eax_2[0x28] = xmm0_2
eax_2[0x29] = xmm0_10
*arg2 = &eax_2[0x2a]
return &eax_2[0x2a]
