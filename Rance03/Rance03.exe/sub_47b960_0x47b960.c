// 函数: sub_47b960
// 地址: 0x47b960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t xmm0_2[0x4] = arg2 * 3.14159274f * 0.00555555569f
int80_t x87_r0
int32_t xmm0_3 = ___libm_sse2_cosf(xmm0_2, x87_r0)
double* result
int32_t xmm0_5
int80_t x87_r1
result, xmm0_5 = ___libm_sse2_sinf(xmm0_2, x87_r1)
arg1[1] = xmm0_5
int32_t xmm0_6 = xmm0_5 ^ (data_7094c0).d
*arg1 = xmm0_3
arg1[2] = 0
arg1[3] = 0
arg1[4] = xmm0_6
arg1[5] = xmm0_3
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0x3f800000
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0x3f800000
return result
