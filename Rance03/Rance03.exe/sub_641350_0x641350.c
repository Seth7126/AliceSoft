// 函数: sub_641350
// 地址: 0x641350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t esi = arg3[9]
int32_t i_1 = 0
sub_6411a0(arg2, esi, arg2, arg3[0xa])
int32_t edx_1 = arg4
int32_t ebp_2 = *arg3[5] - (esi s>> 1) - arg3[7]

if (*arg3 s> 1)
    do
        float xmm0_1 = *(arg2 + (ebp_2 << 2))
        int32_t eax_3 = arg3[5]
        int32_t esi_5 = ((*(eax_3 + (i_1 << 2) + 4) + *(eax_3 + (i_1 << 2))) s>> 1) - arg3[7]
        float xmm1_1 = *(arg3[1] + 0x20)
        
        if (not(xmm0_1 <= xmm1_1))
            xmm0_1 = xmm1_1
        
        int32_t ecx_1 = ebp_2 + 1
        
        if (ecx_1 s<= esi_5)
            do
                float xmm1_2 = *(arg2 + (ebp_2 << 2) + 4)
                ebp_2 += 1
                ecx_1 += 1
                bool p_2
                
                if (xmm1_2 <= -9999f || not(xmm0_1 > xmm1_2))
                    xmm0_1 - -9999f
                    void* eax_4
                    eax_4:1.b = (xmm0_1 == -9999f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_1, -9999f) ? 1 : 0) << 2 | (xmm0_1 < -9999f ? 1 : 0)
                    p_2 = unimplemented  {test ah, 0x44}
                
                if ((not(xmm1_2 <= -9999f) && xmm0_1 > xmm1_2) || not(p_2))
                    xmm0_1 = xmm1_2
            while (ecx_1 s<= esi_5)
            
            edx_1 = arg4
        
        int32_t i = arg3[7] + ebp_2
        
        if (i_1 s< *arg3)
            while (*(arg3[5] + (i_1 << 2)) s<= i)
                if (not(xmm0_1 f<= *(edx_1 + (i_1 << 2))))
                    *(edx_1 + (i_1 << 2)) = xmm0_1
                
                i_1 += 1
                
                if (i_1 s>= *arg3)
                    break
    while (i_1 + 1 s< *arg3)

int32_t result = arg3[0xa]
int32_t xmm0_2 = *(arg2 + (result << 2) - 4)

for (; i_1 s< *arg3; i_1 += 1)
    if (not(xmm0_2 f<= *(edx_1 + (i_1 << 2))))
        *(edx_1 + (i_1 << 2)) = xmm0_2

return result
