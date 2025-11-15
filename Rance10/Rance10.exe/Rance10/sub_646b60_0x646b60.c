// 函数: sub_646b60
// 地址: 0x646b60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm2_1 = arg5 * arg5
void* ebx = arg1
arg5 = xmm2_1
int32_t edi = *(ebx + 0x90)

for (int32_t* i = *(ebx + 0x8c); i != edi; i = &i[0x1e])
    int32_t eax_2 = neg.d(i[3])
    uint128_t xmm3_1 = zx.o(i[0x1c])
    int32_t var_14 = *i
    int32_t xmm0_2 = i[1]
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(eax_2))
    void* var_24_1 = arg1
    int32_t var_10_1 = xmm0_2
    float var_c_1 = *(ebx + 0x98) - xmm1_2 * xmm2_1
    arg1 = sub_647330(_mm_cvtepi32_ps(xmm3_1) * xmm2_1, &i[4], &var_14, 
        _mm_cvtepi32_ps(zx.o(i[0x1d])) * xmm2_1)
    xmm2_1 = arg5

if (sub_6476e0(ebx) != 0 && sub_647550(ebx, arg2, arg3) != 0)
    return sub_647770(ebx, arg2, arg4) != 0

return 0
