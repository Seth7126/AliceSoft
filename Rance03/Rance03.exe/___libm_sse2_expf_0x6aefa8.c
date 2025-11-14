// 函数: ___libm_sse2_expf
// 地址: 0x6aefa8
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

double xmm1 = _mm_cvtps_pd(arg1)

if ((arg1 & 0x7fffffff) - 0x31800000 u< 0x12000000)
    int32_t eax = int.d(arg1 * 23637.1152f)
    void* eax_2 = eax << 3 & 0x78
    double xmm6 = 4.2306346469723223e-05 f* *(eax_2 + 0x70d168)
    double xmm0_1 = *(eax_2 + 0x70d168)
    double xmm2_1 = _mm_cvtepi32_pd(zx.q(eax))
    int32_t xmm7_2[0x4] = *((eax s>> 1 & 0xf8) + 0x70d068) f* *((eax s>> 6 & 0xf8) + 0x70cf68)
    uint64_t xmm5_1[0x2] = _mm_slli_epi64(zx.o(eax s>> 0xe), 0x34)
    
    if ((arg1 & 0x7fffffff) u> 0x42aeac4f && arg1 u>= 0x42b17218)
        _mm_add_epi32(xmm7_2, xmm5_1)
        return arg1
    
    _mm_cvtpd_ps((xmm0_1 + xmm6 * (23637.115549924776 * xmm1 - xmm2_1))
        * _mm_add_epi32(xmm7_2, xmm5_1))
    return arg1

if ((arg1 & 0x7fffffff) u<= 0x31800000)
    return 0x46b8aa3b

if ((arg1 & 0x7fffffff) u< 0x7f800000)
    return 0x46b8aa3b

if ((arg1 & 0x7fffffff) != 0x7f800000)
    return 0x46b8aa3b

return arg1
