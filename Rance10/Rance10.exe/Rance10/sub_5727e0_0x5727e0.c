// 函数: sub_5727e0
// 地址: 0x5727e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t xmm3 = 0x7f7fffff
int32_t xmm1 = 0xff7fffff
*arg5 = 0xff7fffff
int32_t ecx_1 = arg1[1]
int32_t* result = *arg1
*arg2 = 0x7f7fffff
*arg3 = 0xff7fffff
*arg4 = 0x7f7fffff

if (result != ecx_1)
    int32_t xmm4_1 = 0x7f7fffff
    int32_t xmm2_1 = -0x800001
    
    do
        int32_t* result_1 = result
        int32_t i_1 = 3
        int32_t i
        
        do
            int32_t xmm0_1 = *result_1
            
            if (not(xmm3 f<= xmm0_1))
                xmm3 = xmm0_1
            
            if (not(xmm0_1 f<= xmm1))
                xmm1 = xmm0_1
            
            int32_t xmm0_2 = result_1[2]
            
            if (not(xmm4_1 f<= xmm0_2))
                xmm4_1 = xmm0_2
            
            if (not(xmm0_2 f<= xmm2_1))
                xmm2_1 = xmm0_2
            
            result_1 = &result_1[3]
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = &result[0x17]
    while (result != ecx_1)
    
    result = arg5
    *arg2 = xmm3
    *arg3 = xmm1
    *arg4 = xmm4_1
    *result = xmm2_1

return result
