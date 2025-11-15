// 函数: sub_579280
// 地址: 0x579280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t var_14
float var_c
float ecx
int64_t xmm1

if (**(arg1 + 0x28c) != 0)
    sub_5795c0(&var_14, *(arg1 + 0x20))
    ecx = data_7fd4e0
    xmm1 = data_7fd4d8.q
else
    xmm1 = data_7fd4d8.q
    ecx = data_7fd4e0
    var_14 = xmm1
    var_c = ecx

int64_t var_28
float var_20

if (**(arg1 + 0x28c) != 0)
    sub_5795c0(&var_28, *(arg1 + 0x20))
else
    var_28 = xmm1
    var_20 = ecx

float xmm2_4 = var_28.d f- var_14.d
float xmm3_1 = var_28:4.d f- var_14:4.d
float xmm4_1 = var_20 - var_c
float var_30 = xmm3_1
float xmm0_6 = sub_484cc0(xmm3_1 * xmm3_1 + xmm2_4 * xmm2_4 + xmm4_1 * xmm4_1)
xmm0_6 - 0f
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    *arg3 = xmm2_4.q
    arg3[2] = xmm4_1
    return arg3

float xmm1_5 = 1f / xmm0_6
*arg3 = xmm2_4 * xmm1_5
arg3[1] = xmm3_1 * xmm1_5
arg3[2] = xmm4_1 * xmm1_5
return arg3
