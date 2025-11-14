// 函数: sub_5762a0
// 地址: 0x5762a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (not(0 f< arg1))
    int32_t ecx_1 = arg3[1].d
    *arg2 = *arg3
    arg2[1].d = ecx_1
    return arg2

int80_t x87_r0
int32_t xmm0_2 = ___libm_sse2_cosf(arg1 * 3.14159274f * 0.00555555569f, x87_r0)

for (int32_t i = 0; i s< 0x64; i += 1)
    float var_c
    sub_575ea0(&var_c, arg4)
    float var_8
    float var_4
    
    if (*arg3 * var_c + var_8 f* *(arg3 + 4) + var_4 f* arg3[1].d f>= xmm0_2)
        *arg2 = var_c.q
        arg2[1].d = var_4
        return arg2

int32_t ecx_2 = arg3[1].d
*arg2 = *arg3
arg2[1].d = ecx_2
return arg2
