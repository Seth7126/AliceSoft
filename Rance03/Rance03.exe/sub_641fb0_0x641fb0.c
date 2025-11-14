// 函数: sub_641fb0
// 地址: 0x641fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float* edi = arg5
int32_t edx = 0
float* result = arg3[1]
int32_t ebp = *arg3
float xmm3 = arg3[0xc]
float xmm5 = result[edi + 3]

if (ebp s> 0)
    int32_t* ecx = arg4
    arg6 -= ecx
    arg8 -= ecx
    double xmm4_1 = 1.0
    arg5 = arg2 - ecx
    int32_t* ebx_3 = arg7 - ecx
    
    do
        float xmm0_2 = *(*(arg3[3] + (edi << 2)) + (edx << 2)) f+ *(arg5 + ecx)
        float xmm1_1 = *(arg3[1] + 0x6c)
        
        if (not(xmm0_2 <= xmm1_1))
            xmm0_2 = xmm1_1
        
        float xmm1_3 = *ecx + xmm5
        
        if (not(xmm0_2 <= xmm1_3))
            xmm1_3 = xmm0_2
        
        result = arg6
        *(result + ecx) = xmm1_3
        
        if (edi == 1)
            result = arg8
            float xmm0_3 = xmm0_2 f- *(result + ecx)
            double xmm1_4 = _mm_cvtps_pd(xmm0_3 - -17.2000008f)
            double xmm0_5 = fconvert.d(xmm3)
            float xmm1_7
            
            if (xmm0_3 <= -17.2000008f)
                xmm1_7 = _mm_cvtpd_ps(xmm4_1 - xmm1_4 * 0.00029999999999999997 * xmm0_5)
            else
                xmm1_7 = _mm_cvtpd_ps(xmm4_1 - xmm1_4 * 0.0050000000000000001 * xmm0_5)
                
                if (not(0 f<= xmm1_7))
                    xmm1_7 = 9.99999975e-05f
            
            *(ebx_3 + ecx) = *(ebx_3 + ecx) * xmm1_7
        
        edx += 1
        ecx = &ecx[1]
    while (edx s< ebp)

return result
