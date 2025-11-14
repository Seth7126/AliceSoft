// 函数: sub_642100
// 地址: 0x642100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg2
int32_t esi = 0

if (arg9 s> 0)
    void* eax = result - arg6
    int32_t* edx = arg7
    int64_t* edi_2 = arg6 - edx
    arg6 = edi_2
    
    do
        int32_t xmm2
        
        if (esi s< arg3 - arg8)
            xmm2 = arg4
        else
            xmm2 = arg5
        
        double xmm0_2 = _mm_cvtps_pd(*(edi_2 + edx))
        uint64_t xmm1_1[0x2] = _mm_cvtps_pd(*(edi_2 + edx + eax))
        edi_2 = arg6
        result.b = xmm2 f<= _mm_cvtpd_ps(_mm_and_pd(xmm1_1, 0x7fffffffffffffff) / xmm0_2)
        esi += 1
        *edx = result
        edx = &edx[1]
    while (esi s< arg9)

return result
