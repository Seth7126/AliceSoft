// 函数: sub_530580
// 地址: 0x530580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t xmm3 = 0x7f7fffff
int32_t xmm1 = 0xff7fffff
int32_t esi = *(arg1 + 8)
*arg5 = 0xff7fffff
int32_t* result = *(arg1 + 4)
*arg3 = 0xff7fffff
*arg2 = 0x7f7fffff
*arg4 = 0x7f7fffff

if (result != esi)
    int32_t xmm4_1 = 0x7f7fffff
    int32_t xmm2_1 = -0x800001
    
    do
        void* ecx_1 = &result[1]
        int32_t i_1 = 3
        int32_t i
        
        do
            int32_t xmm0_1 = *ecx_1
            
            if (not(xmm3 f<= xmm0_1))
                xmm3 = xmm0_1
            
            if (not(xmm0_1 f<= xmm1))
                xmm1 = xmm0_1
            
            int32_t xmm0_2 = *(ecx_1 + 8)
            
            if (not(xmm4_1 f<= xmm0_2))
                xmm4_1 = xmm0_2
            
            if (not(xmm0_2 f<= xmm2_1))
                xmm2_1 = xmm0_2
            
            ecx_1 += 0xc
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = &result[0x21]
    while (result != esi)
    
    result = arg5
    *arg2 = xmm3
    *arg3 = xmm1
    *arg4 = xmm4_1
    *result = xmm2_1

return result
