// 函数: sub_450170
// 地址: 0x450170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x24) += 1
uint32_t result = sub_44f250(arg1 + 0x20)
int32_t edx_1 = result - *(arg1 + 0x28)

if (edx_1 u>= 0x3e8)
    int32_t ecx_1 = *(arg1 + 0x24) * 0x3e8
    double xmm0_2 = _mm_cvtepi32_pd(zx.q(edx_1))
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = result
    *(arg1 + 0x2c) = _mm_cvtepi32_ps(zx.o(ecx_1))
        / _mm_cvtpd_ps(xmm0_2 f+ *((edx_1 u>> 0x1f << 3) + &data_79aa70))

*(arg1 + 0x40) += 1
return result
