// 函数: sub_6bf300
// 地址: 0x6bf300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_20 = 0
int32_t eax = arg3[3]

if (eax != 1 && eax != 2)
    return 0

int32_t ecx = arg3[4]
double xmm0_1[0x2] = _mm_cvtepi32_pd(zx.q(ecx) & 0x1fffff)

if (ecx s< 0)
    xmm0_1 ^= data_79aac0

long double st0 = _ldexp(arg3, xmm0_1.q, (ecx s>> 0x15 & 0x3ff) - 0x314)
int32_t ecx_1 = arg3[5]
float var_14 = fconvert.s(st0)
double xmm0_3[0x2] = _mm_cvtepi32_pd(zx.q(ecx_1) & 0x1fffff)

if (ecx_1 s< 0)
    xmm0_3 ^= data_79aac0

float var_10 = fconvert.s(_ldexp(arg3, xmm0_3.q, (ecx_1 s>> 0x15 & 0x3ff) - 0x314))
int32_t var_2c_2 = 4
int64_t var_34_1
var_34_1:4.d = *arg3 * arg2
int32_t result = _calloc()
int32_t eax_17 = arg3[3]

if (eax_17 == 1)
    int32_t eax_28 = sub_6bf240(arg3)
    int32_t i = 0
    int32_t i_3 = 0
    
    if (arg3[1] s> 0)
        int32_t edx_4 = arg4
        
        do
            if (edx_4 == 0)
                goto label_6bf517
            
            if (*(arg3[2] + (i_3 << 2)) != 0)
                i = i_3
            label_6bf517:
                int32_t ecx_9 = *arg3
                int32_t esi_3 = 0
                int32_t var_14_1 = 1
                float xmm2_2 = (zx.o(0)).d
                
                if (ecx_9 s> 0)
                    do
                        bool cond:1_1 = arg3[7] == 0
                        float xmm0_15 = _mm_cvtpd_ps(_mm_and_ps(
                            _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(arg3[8] +
                                (mods.dp.d(sx.q(divs.dp.d(sx.q(i), var_14_1)), eax_28) << 2))))), 
                            0x7fffffffffffffff) * fconvert.d(var_10) + fconvert.d(var_14)
                            + fconvert.d(xmm2_2))
                        
                        if (not(cond:1_1))
                            xmm2_2 = xmm0_15
                        
                        edx_4 = arg4
                        
                        if (edx_4 == 0)
                            *(result + ((ecx_9 * var_20 + esi_3) << 2)) = xmm0_15
                        else
                            *(result + ((*(edx_4 + (var_20 << 2)) * ecx_9 + esi_3) << 2)) = xmm0_15
                        
                        esi_3 += 1
                        ecx_9 = *arg3
                        var_14_1 *= eax_28
                        i = i_3
                    while (esi_3 s< ecx_9)
                
                var_20 += 1
            
            i = i_3 + 1
            i_3 = i
        while (i s< arg3[1])
else
    int32_t i_1 = eax_17 - 2
    
    if (eax_17 == 2)
        int32_t i_2 = i_1
        
        if (arg3[1] s> i_1)
            int32_t ecx_2 = arg4
            
            do
                if (ecx_2 == 0)
                    goto label_6bf417
                
                if (*(arg3[2] + (i_2 << 2)) != 0)
                    i_1 = i_2
                label_6bf417:
                    int32_t edx_1 = *arg3
                    int32_t esi_1 = 0
                    float xmm2_1 = (zx.o(0)).d
                    
                    if (edx_1 s> 0)
                        do
                            bool cond:0_1 = arg3[7] == 0
                            float xmm0_9 = _mm_cvtpd_ps(_mm_and_ps(
                                _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(
                                    *(arg3[8] + ((edx_1 * i_1 + esi_1) << 2))))), 
                                0x7fffffffffffffff) * fconvert.d(var_10) + fconvert.d(var_14)
                                + fconvert.d(xmm2_1))
                            
                            if (not(cond:0_1))
                                xmm2_1 = xmm0_9
                            
                            ecx_2 = arg4
                            
                            if (ecx_2 == 0)
                                *(result + ((edx_1 * var_20 + esi_1) << 2)) = xmm0_9
                            else
                                *(result + ((*(ecx_2 + (var_20 << 2)) * edx_1 + esi_1) << 2)) =
                                    xmm0_9
                                ecx_2 = arg4
                            
                            edx_1 = *arg3
                            esi_1 += 1
                            i_1 = i_2
                        while (esi_1 s< edx_1)
                    
                    var_20 += 1
                
                i_1 = i_2 + 1
                i_2 = i_1
            while (i_1 s< arg3[1])

return result
