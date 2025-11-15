// 函数: sub_6cbea0
// 地址: 0x6cbea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_48
int32_t* ecx
sub_6cbac0(ecx, &var_48)
int32_t var_40
float xmm0_2 = ___libm_sse2_asinf(var_40 ^ (data_79aad0).d)
double* eax
float xmm0_3
eax, xmm0_3 = sub_48ca30()
xmm0_3 - 0f
eax:1.b =
    (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2 | (xmm0_3 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    xmm0_3 = 9.99999975e-05f

float xmm3 = 1f / xmm0_3
float var_30
float var_20
float xmm0_6 = sub_4a7880(xmm3 * var_30, xmm3 * var_20)
float xmm1_3 = xmm3 * var_48
*arg1 = xmm0_6 * 57.2957764f
arg1[1] = xmm0_2 * 57.2957764f
float var_44
arg1[2] = sub_4a7880(xmm3 * var_44, xmm1_3) * 57.2957764f
return arg1
