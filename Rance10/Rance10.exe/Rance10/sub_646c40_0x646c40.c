// 函数: sub_646c40
// 地址: 0x646c40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_e8
int32_t eax_1 = __security_cookie ^ &var_e8
float xmm4 = arg10
float xmm0 = arg1
float xmm5 = arg7
float xmm7 = arg2
int32_t i = arg14
float var_c0 = arg2
float var_c8 = xmm0
float var_e4
float var_e0
float var_dc
float var_d8
float var_d4
float var_d0
float xmm3_8
float xmm6_5

if (i == 0)
    xmm3_8 = arg11
    xmm6_5 = arg6
    var_e4 = arg13
    var_d0 = arg12
    var_d4 = arg9
    var_d8 = arg8
    var_dc = arg5
    var_e0 = arg4
else
    var_e4 = arg13
    var_d0 = arg12
    float var_c4_1 = arg11
    var_d4 = arg9
    var_d8 = arg8
    float var_cc_1 = arg6
    var_dc = arg5
    float var_b4_1 = xmm4
    float var_a4_1 = xmm5
    var_e0 = arg4
    
    do
        float xmm0_13 = (_mm_cvtepi32_ps(zx.o(_rand()) & 0x7f) - 64f) * 0.00392156886f + 0.5f
        float xmm0_18 = (_mm_cvtepi32_ps(zx.o(_rand()) & 0x7f) - 64f) * 0.00392156886f + 0.5f
        float xmm2_3 = (var_cc_1 - var_c8) * xmm0_13 + var_c8
        float xmm7_4 = (var_a4_1 - var_c0) * xmm0_13 + var_c0
        float xmm2_7 = (var_b4_1 - var_cc_1) * xmm0_18 + var_cc_1
        float xmm6_4 = (var_d8 - var_e0) * xmm0_13 + var_e0
        float xmm5_4 = (var_d4 - var_dc) * xmm0_13 + var_dc
        float xmm1_5 = (_mm_cvtepi32_ps(zx.o(_rand()) & 0x7f) - 64f) * 0.00392156886f + 0.5f
        float xmm2_11 = (var_c4_1 - var_a4_1) * xmm0_18 + var_a4_1
        float xmm4_5 = (var_c8 - var_b4_1) * xmm1_5 + var_b4_1
        float xmm2_15 = (var_d0 - var_d8) * xmm0_18 + var_d8
        float xmm3_4 = (var_c0 - var_c4_1) * xmm1_5 + var_c4_1
        float xmm2_19 = (var_e4 - var_d4) * xmm0_18 + var_d4
        float xmm2_23 = (var_e0 - var_d0) * xmm1_5 + var_d0
        i -= 1
        float xmm0_24 = (var_dc - var_e4) * xmm1_5 + var_e4
        sub_646c40(arg3, var_e0, var_dc, xmm2_3, xmm7_4, xmm6_4, xmm5_4, xmm4_5, xmm3_4, xmm2_23, 
            xmm0_24, i)
        sub_646c40(arg3, xmm6_4, xmm5_4, var_cc_1, var_a4_1, var_d8, var_d4, xmm2_7, xmm2_11, 
            xmm2_15, xmm2_19, i)
        sub_646c40(arg3, xmm2_15, xmm2_19, var_b4_1, var_c4_1, var_d0, var_e4, xmm4_5, xmm3_4, 
            xmm2_23, xmm0_24, i)
        xmm3_8 = xmm3_4
        xmm4 = xmm4_5
        xmm5 = xmm2_11
        xmm6_5 = xmm2_7
        xmm7 = xmm7_4
        var_e4 = xmm0_24
        var_d0 = xmm2_23
        var_d4 = xmm2_19
        var_d8 = xmm2_15
        var_dc = xmm5_4
        var_e0 = xmm6_4
        xmm0 = xmm2_3
        var_c4_1 = xmm3_8
        var_b4_1 = xmm4
        var_a4_1 = xmm5
        var_cc_1 = xmm6_5
        var_c0 = xmm7
        var_c8 = xmm0
    while (i != 0)

float xmm2_31 = (xmm0 + xmm6_5 + xmm4) * 0.333333343f
float xmm1_15 = (xmm7 + xmm5 + xmm3_8) * 0.333333343f
float var_74
sub_5df200(&var_74)
int32_t var_6c = 0
int32_t var_4c = 0
int32_t var_2c = 0
float var_84 = xmm2_31
float var_50 = xmm5 - xmm1_15
var_74 = var_c8 - xmm2_31
float var_5c = var_e0
float var_58 = var_dc
float var_3c = var_d8
float var_34 = xmm4 - xmm2_31
float var_70 = xmm7 - xmm1_15
float var_54 = xmm6_5 - xmm2_31
float var_38 = var_d4
float var_30 = xmm3_8 - xmm1_15
float var_1c = var_d0
float var_18 = var_e4
float var_80 = xmm1_15
int32_t var_7c = 0
int32_t var_14 = (0xb4 - mods.dp.d(sx.q(_rand()), 0x168)) << 2
int32_t var_10 = (0xb4 - mods.dp.d(sx.q(_rand()), 0x168)) << 2
int32_t var_78 = 0xfffffc18 - mods.dp.d(sx.q(_rand()), 0x7d0)
int32_t result = sub_6479c0(arg3, &var_84)
@__security_check_cookie@4(eax_1 ^ &var_e8)
return result
