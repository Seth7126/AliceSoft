// 函数: sub_6bc7a0
// 地址: 0x6bc7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = 0
int32_t* result = arg3[1]
int32_t ebp = *arg3
float xmm3 = arg3[0xc]
float xmm6 = result[arg5 + 3]

if (ebp s> 0)
    int32_t* ecx = arg4
    float* edi_1 = arg2 - ecx
    arg6 -= ecx
    arg8 -= ecx
    double xmm4_1 = 1.0
    int32_t* edi_3 = arg7 - ecx
    
    do
        float xmm0_2 = *ecx + xmm6
        float xmm1_3 = __minss_xmmss_memss(
            *(*(arg3[3] + (arg5 << 2)) + (edx << 2)) f+ *(edi_1 + ecx), *(arg3[1] + 0x6c))
        result = arg6
        *(result + ecx) = _mm_max_ss(xmm0_2, xmm1_3)
        
        if (arg5 == 1)
            result = arg8
            double xmm0_4 = fconvert.d(xmm3)
            float xmm1_4 = xmm1_3 f- *(result + ecx)
            double xmm1_6 = _mm_cvtps_pd(xmm1_4 - -17.2000008f)
            float xmm0_7
            
            if (xmm1_4 <= -17.2000008f)
                xmm0_7 = fconvert.s(xmm4_1 - xmm1_6 * 0.00029999999999999997 * xmm0_4)
            else
                xmm0_7 = fconvert.s(xmm4_1 - xmm1_6 * 0.0050000000000000001 * xmm0_4)
                
                if (not(0 f<= xmm0_7))
                    xmm0_7 = 9.99999975e-05f
            
            *(edi_3 + ecx) = xmm0_7 f* *(edi_3 + ecx)
        
        edx += 1
        ecx = &ecx[1]
    while (edx s< ebp)

return result
