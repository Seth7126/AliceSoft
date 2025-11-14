// 函数: sub_5f9f60
// 地址: 0x5f9f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_e8
int32_t eax_1 = __security_cookie ^ &var_e8
float xmm5 = arg2
int32_t i = arg14
float xmm1 = arg1
float var_e0 = arg13
float var_bc = xmm5
float var_c0 = xmm1
float var_dc = arg12
float var_e4
float var_d8
float var_d4
float var_d0
float var_c8
float var_c4
float var_b8
float var_b4
float xmm0_47
float xmm2_28
float xmm3_10
float xmm4_8

if (i == 0)
    xmm2_28 = arg11
    xmm0_47 = arg10
    xmm4_8 = arg6
    var_d8 = arg9
    var_d0 = arg8
    xmm3_10 = arg7
    var_c4 = arg5
    var_d4 = xmm2_28
    var_b4 = xmm0_47
    var_b8 = xmm3_10
    var_e4 = xmm4_8
    var_c8 = arg4
else
    var_d4 = arg11
    var_b4 = arg10
    var_d8 = arg9
    var_d0 = arg8
    var_b8 = arg7
    var_e4 = arg6
    var_c4 = arg5
    var_c8 = arg4
    
    do
        float xmm0_14 = (_mm_cvtepi32_ps(zx.o(sub_69bc56()) & 0x7f) - 64f) * 0.00392156886f + 0.5f
        float xmm0_19 = (_mm_cvtepi32_ps(zx.o(sub_69bc56()) & 0x7f) - 64f) * 0.00392156886f + 0.5f
        float xmm2_3 = (var_e4 - var_c0) * xmm0_14 + var_c0
        float xmm7_4 = (var_b8 - var_bc) * xmm0_14 + var_bc
        float xmm2_7 = (var_b4 - var_e4) * xmm0_19 + var_e4
        float xmm6_4 = (var_d0 - var_c8) * xmm0_14 + var_c8
        float xmm5_4 = (var_d8 - var_c4) * xmm0_14 + var_c4
        float xmm1_5 = (_mm_cvtepi32_ps(zx.o(sub_69bc56()) & 0x7f) - 64f) * 0.00392156886f + 0.5f
        float xmm2_11 = (var_d4 - var_b8) * xmm0_19 + var_b8
        float xmm2_15 = (var_dc - var_d0) * xmm0_19 + var_d0
        float xmm4_6 = (var_c0 - var_b4) * xmm1_5 + var_b4
        float xmm3_4 = (var_bc - var_d4) * xmm1_5 + var_d4
        float xmm2_19 = (var_e0 - var_d8) * xmm0_19 + var_d8
        i -= 1
        float xmm2_23 = (var_c8 - var_dc) * xmm1_5 + var_dc
        float xmm0_25 = (var_c4 - var_e0) * xmm1_5 + var_e0
        sub_5f9f60(arg3, var_c8, var_c4, xmm2_3, xmm7_4, xmm6_4, xmm5_4, xmm4_6, xmm3_4, xmm2_23, 
            xmm0_25, i)
        sub_5f9f60(arg3, xmm6_4, xmm5_4, var_e4, var_b8, var_d0, var_d8, xmm2_7, xmm2_11, xmm2_15, 
            xmm2_19, i)
        sub_5f9f60(arg3, xmm2_15, xmm2_19, var_b4, var_d4, var_dc, var_e0, xmm4_6, xmm3_4, xmm2_23, 
            xmm0_25, i)
        xmm2_28 = xmm3_4
        xmm3_10 = xmm2_11
        xmm4_8 = xmm2_7
        xmm5 = xmm7_4
        var_d8 = xmm2_19
        var_d0 = xmm2_15
        var_e0 = xmm0_25
        var_c4 = xmm5_4
        var_dc = xmm2_23
        xmm0_47 = xmm4_6
        var_c8 = xmm6_4
        xmm1 = xmm2_3
        var_d4 = xmm2_28
        var_b4 = xmm0_47
        var_b8 = xmm3_10
        var_e4 = xmm4_8
        var_bc = xmm5
        var_c0 = xmm1
    while (i != 0)

float xmm1_12 = (xmm1 + xmm4_8 + xmm0_47) * 0.333333343f
float xmm1_16 = (xmm5 + xmm3_10 + xmm2_28) * 0.333333343f
float var_74
sub_5fa690(&var_74)
float var_3c = var_d0
var_74 = var_c0 - xmm1_12
int32_t var_6c = 0
int32_t var_4c = 0
float var_38 = var_d8
int32_t var_2c = 0
float var_1c = var_dc
float var_70 = var_bc - xmm1_16
float var_5c = var_c8
float var_58 = var_c4
float var_84 = xmm1_12
float var_80 = xmm1_16
int32_t var_7c = 0
float var_54 = var_e4 - xmm1_12
float var_50 = var_b8 - xmm1_16
float var_34 = var_b4 - xmm1_12
float var_30 = var_d4 - xmm1_16
float var_18 = var_e0
int32_t var_14 = (0xb4 - mods.dp.d(sx.q(sub_69bc56()), 0x168)) << 2
int32_t var_10 = (0xb4 - mods.dp.d(sx.q(sub_69bc56()), 0x168)) << 2
int32_t var_78 = 0xfffffc18 - mods.dp.d(sx.q(sub_69bc56()), 0x7d0)
int32_t result = sub_5fb560(arg3, &var_84)
sub_69a5bc(eax_1 ^ &var_e8)
return result
