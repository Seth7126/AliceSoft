// 函数: sub_6bbad0
// 地址: 0x6bbad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
int32_t esi = arg3[9]
int32_t i = 0
sub_6bb920(arg2, esi, arg2, arg3[0xa])
int32_t edx_1 = arg4
int32_t ebp_2 = *arg3[5] - (esi s>> 1) - arg3[7]

if (*arg3 s> 1)
    do
        int32_t eax_2 = arg3[5]
        int32_t ecx_1 = arg3[7]
        int32_t esi_5 = ((*(eax_2 + (i << 2) + 4) + *(eax_2 + (i << 2))) s>> 1) - ecx_1
        float xmm0_2 = __minss_xmmss_memss(*(arg3[1] + 0x20), *(arg2 + (ebp_2 << 2)))
        
        if (ebp_2 s< esi_5)
            int32_t ecx_2 = ebp_2 + 1
            
            do
                float xmm1_1 = *(arg2 + (ebp_2 << 2) + 4)
                ebp_2 += 1
                ecx_2 += 1
                bool p_2
                
                if (xmm1_1 <= -9999f || not(xmm0_2 > xmm1_1))
                    xmm0_2 - -9999f
                    int32_t eax_4
                    eax_4:1.b = (xmm0_2 == -9999f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_2, -9999f) ? 1 : 0) << 2 | (xmm0_2 < -9999f ? 1 : 0)
                    p_2 = unimplemented  {test ah, 0x44}
                
                if ((not(xmm1_1 <= -9999f) && xmm0_2 > xmm1_1) || not(p_2))
                    xmm0_2 = xmm1_1
            while (ecx_2 s<= esi_5)
            
            edx_1 = arg4
            ecx_1 = arg3[7]
        
        if (i s< *arg3)
            while (*(arg3[5] + (i << 2)) s<= ecx_1 + ebp_2)
                if (not(xmm0_2 f<= *(edx_1 + (i << 2))))
                    *(edx_1 + (i << 2)) = xmm0_2
                
                i += 1
                
                if (i s>= *arg3)
                    break
    while (i + 1 s< *arg3)

int32_t result = arg3[0xa]
int32_t xmm0_3 = *(arg2 + (result << 2) - 4)

for (; i s< *arg3; i += 1)
    if (not(xmm0_3 f<= *(edx_1 + (i << 2))))
        *(edx_1 + (i << 2)) = xmm0_3

return result
