// 函数: sub_4d4850
// 地址: 0x4d4850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm7_1 = *(*(arg1 + 0xc) + 0xc) * arg3
float xmm0_1 = *(arg4 + 0x38) * arg3
float xmm1_1 = *(arg4 + 0xb4) * arg2
float xmm3_1 = *(arg4 + 0xb8) * arg2
float xmm6_1 = *(arg4 + 0xb0) * arg2
float xmm4_1 = *(arg4 + 0xbc) * arg2
float var_18 = xmm0_1
float xmm5_1 = xmm7_1 * xmm7_1

if (not(0f <= xmm1_1))
    float xmm0_4 = (xmm6_1 / xmm1_1) ^ (data_79aad0).d
    
    if (not(xmm7_1 <= xmm0_4))
        xmm7_1 = xmm0_4
        xmm5_1 = xmm0_4 * xmm0_4
    
    xmm0_1 = var_18

xmm3_1 f- 0
void* eax
eax:1.b =
    (xmm3_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2 | (xmm3_1 < 0f ? 1 : 0)
int128_t xmm1_4 = xmm1_1 * xmm5_1 * 0.5f + xmm6_1 * xmm7_1
float var_c = xmm1_4
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    return eax

if (not(xmm4_1 <= 1f))
    int32_t eax_1
    long double st0
    st0, eax_1 = sub_40d0b0(xmm0_1, xmm4_1)
    float var_14_1 = fconvert.s(st0 * fconvert.t(xmm3_1) + fconvert.t(xmm1_4))
    return eax_1

if (-1f <= xmm4_1)
    return eax

int32_t eax_2
long double st0_1
st0_1, eax_2 = sub_40d0b0(1f - var_18, xmm4_1 ^ (data_79aad0).d)
return eax_2
