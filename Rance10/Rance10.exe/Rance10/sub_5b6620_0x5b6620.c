// 函数: sub_5b6620
// 地址: 0x5b6620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg2
int32_t result_1 = result

if (arg1 != result)
    void* ecx = &arg1[0xc]
    int64_t* esi_1 = ecx
    
    if (esi_1 != result)
        void* ebx_2 = esi_1 - arg1
        
        do
            int64_t xmm2_1 = *esi_1
            int64_t* edx = esi_1
            int32_t ebp_1 = esi_1[1].d
            float xmm1_1 = xmm2_1:4.d
            
            if (xmm1_1 f<= *(arg1 + 4))
                void* ecx_2 = &arg1[0xfffffff4] + ebx_2
                
                if (not(xmm1_1 f<= *(arg1 + ebx_2 - 8)))
                    int32_t xmm0_3
                    
                    do
                        *edx = *ecx_2
                        edx[1].d = *(ecx_2 + 8)
                        edx = ecx_2
                        xmm0_3 = *(ecx_2 - 8)
                        ecx_2 -= 0xc
                    while (xmm0_3 f< xmm1_1)
                    result = result_1
                
                *edx = xmm2_1
                edx[1].d = ebp_1
            else
                sub_6feca0(ecx, arg1, ebx_2)
                result = result_1
                *arg1 = xmm2_1
                *(arg1 + 8) = ebp_1
            
            esi_1 += 0xc
            ecx = &arg1[0xc]
            ebx_2 += 0xc
        while (esi_1 != result)

return result
