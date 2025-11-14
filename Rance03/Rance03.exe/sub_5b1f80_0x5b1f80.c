// 函数: sub_5b1f80
// 地址: 0x5b1f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* eax = arg4
float xmm7 = arg2
int128_t xmm4 = *(eax + 4)
int128_t xmm3 = *eax
int128_t xmm5 = *(eax + 8)
int128_t xmm6 = *(eax + 0xc)
int128_t xmm2_4 = *arg1 f* xmm3 + arg1[1] f* xmm4 + arg1[2] f* xmm5 + arg1[3] f* xmm6

if (not(0 f<= xmm2_4))
    xmm2_4 ^= 0x80000000
    xmm3 ^= 0x80000000
    xmm4 ^= 0x80000000
    xmm5 ^= 0x80000000
    xmm6 ^= 0x80000000

float xmm0_14

if (1f f- xmm2_4 <= 0.00999999978f)
    xmm0_14 = 1f - xmm7
else
    int32_t xmm0_7[0x4] = ___libm_sse2_acosf(xmm2_4.d)
    arg4 = xmm0_7
    int80_t x87_r0
    float xmm1_1 = 1f / ___libm_sse2_sinf(xmm0_7, x87_r0)
    int80_t x87_r1
    float xmm2_8 = ___libm_sse2_sinf((1f - xmm7) * arg4, x87_r1) * xmm1_1
    int80_t x87_r2
    xmm7 = ___libm_sse2_sinf(arg4 * xmm7, x87_r2) * xmm1_1
    xmm0_14 = xmm2_8

*arg3 = *arg1 * xmm0_14 + xmm3 f* xmm7
arg3[1] = arg1[1] f* xmm0_14 + xmm4 f* xmm7
arg3[2] = arg1[2] f* xmm0_14 + xmm5 f* xmm7
arg3[3] = arg1[3] f* xmm0_14 + xmm6 f* xmm7
return arg3
