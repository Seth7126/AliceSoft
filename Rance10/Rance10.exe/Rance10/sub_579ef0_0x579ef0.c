// 函数: sub_579ef0
// 地址: 0x579ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_a8 = 0f
float var_c0
__builtin_memset(&var_c0, 0, 0x14)
float var_ac = 1f
float var_98 = 0f
float var_94 = 0f
float var_90 = 0f
float var_b8
sub_57a520(&var_b8, arg4, arg2, (zx.o(0)).d, arg5, &var_b8, &var_c0)
float var_bc
sub_57a520(&var_98, arg4, arg2, 1f, arg5, &var_98, &var_bc)
float var_a4 = var_c0
int32_t i_1 = 8
float var_a0 = var_bc
float var_b0_1
int32_t ecx_3
float xmm0_7
float xmm1_1
int32_t i

do
    int32_t var_8c = 0
    float xmm0_4 = (var_ac + var_a8) * 0.5f
    int32_t var_88_1 = 0
    float var_84_1 = 0f
    var_bc = 0f
    var_c0 = xmm0_4
    ecx_3 = sub_57a520(&var_8c, arg4, arg2, xmm0_4, arg5, &var_8c, &var_bc)
    xmm1_1 = var_bc
    float xmm0_5 = var_c0
    
    if (xmm1_1 <= arg6)
        var_a8 = xmm0_5
        var_b8.q = var_8c.q
        xmm0_7 = var_a0
        var_b0_1 = var_84_1
        var_a4 = xmm1_1
    else
        var_ac = xmm0_5
        var_98.q = var_8c.q
        xmm0_7 = xmm1_1
        xmm1_1 = var_a4
        var_90 = var_84_1
        var_a0 = xmm0_7
    
    i = i_1
    i_1 -= 1
while (i != 1)
float xmm2 = var_b8
xmm1_1 - xmm0_7
bool p = unimplemented  {test ah, 0x44}
int32_t var_d8_3 = ecx_3
float xmm1_2
float xmm3_2
float var_b4

if (p)
    float xmm6_3 = (arg6 - xmm1_1) / (xmm0_7 - xmm1_1)
    xmm2 = xmm2 + (var_98 - xmm2) * xmm6_3
    xmm1_2 = var_b4 + (var_94 - var_b4) * xmm6_3
    xmm3_2 = (var_90 - var_b0_1) * xmm6_3 + var_b0_1
else
    xmm3_2 = var_b0_1
    xmm1_2 = var_b4
void var_80
float var_40[0x10]
sub_4ba000(sub_57a9b0(&var_40, xmm1_2, xmm2, xmm3_2), &var_80)
sub_6cb8c0(&var_80, arg3)
return arg3
