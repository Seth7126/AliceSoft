// 函数: sub_57a230
// 地址: 0x57a230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float eax = data_7fd4e0
int64_t xmm0 = data_7fd4d8.q
float var_68 = 0f
int64_t var_3c = xmm0
float var_30 = 0f
float var_2c = 0f
float var_74 = 0f
float var_6c = 1f
int64_t var_28 = xmm0
float var_1c = 0f
float var_18 = 0f
float var_70 = 0f
sub_57a630(&var_3c, arg4, arg2, (zx.o(0)).d, arg5, &var_3c, &var_74)
sub_57a630(&var_28, arg4, arg2, 1f, arg5, &var_28, &var_70)
float edi = var_2c
int32_t i_1 = 8
int128_t var_50 = var_3c.o
float var_64 = var_74
float var_60 = var_70
int128_t xmm0_7
float xmm1_4
float xmm2_1
int32_t i

do
    int32_t var_c_1 = data_7fd4e0
    float xmm1_3 = (var_6c + var_68) * 0.5f
    int64_t var_14 = data_7fd4d8.q
    var_74 = xmm1_3
    int32_t var_8_1 = 0
    float var_4_1 = 0f
    var_70 = 0f
    sub_57a630(&var_14, arg4, arg2, xmm1_3, arg5, &var_14, &var_70)
    xmm1_4 = var_70
    float xmm0_5 = var_74
    
    if (xmm1_4 <= arg6)
        edi = var_4_1
        xmm2_1 = xmm1_4
        xmm1_4 = var_60
        var_68 = xmm0_5
        xmm0_7 = var_14.o
        var_64 = xmm2_1
        var_50 = xmm0_7
        var_3c.o = xmm0_7
    else
        xmm2_1 = var_64
        var_6c = xmm0_5
        var_18 = var_4_1
        var_60 = xmm1_4
        var_28.o = var_14.o
        xmm0_7 = var_50
    
    i = i_1
    i_1 -= 1
while (i != 1)
xmm2_1 - xmm1_4
float eax_5
eax_5:1.b = (xmm2_1 == xmm1_4 ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, xmm1_4) ? 1 : 0) << 2
    | (xmm2_1 < xmm1_4 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    *arg3 = xmm0_7
    arg3[1].d = edi
    return arg3

int64_t xmm0_8 = var_3c.d
float xmm7 = var_3c:4.d
float xmm4_1 = var_1c - var_30
float xmm3_4 = (arg6 - xmm2_1) / (xmm1_4 - xmm2_1)
var_60.q = xmm0_8
float xmm3_7 = (var_28.d f- xmm0_8) * xmm3_4
int64_t xmm7_1 = xmm7 + (var_28:4.d - xmm7) * xmm3_4
var_74 = xmm4_1
arg3[1].d = (var_18 - edi) * xmm3_4 + edi
var_74 = xmm4_1 * xmm3_4
float xmm0_12 = var_74 + var_30
*arg3 = _mm_unpacklo_ps(var_60 + xmm3_7, xmm7_1)
*(arg3 + 8) = eax + (eax - eax) * xmm3_4
*(arg3 + 0xc) = xmm0_12
return arg3
