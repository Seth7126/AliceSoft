// 函数: sub_53c1d0
// 地址: 0x53c1d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edx = arg2
int32_t* i = *(arg1 + 0xc)
int32_t** ecx = *(arg1 + 8)
arg2 = i
*edx = 0x7f7fffff
*arg3 = 0xff7fffff
*arg4 = 0x7f7fffff
*arg5 = 0xff7fffff

if (ecx != i)
    do
        int32_t ebx_1 = ecx[1]
        
        for (i = *ecx; i != ebx_1; i = &i[3])
            int32_t xmm1_1 = *i
            
            if (not(*edx f<= xmm1_1))
                *edx = xmm1_1
            
            int32_t xmm0_2 = *i
            
            if (not(xmm0_2 f<= *arg3))
                *arg3 = xmm0_2
            
            int32_t xmm1_2 = i[2]
            
            if (not(*arg4 f<= xmm1_2))
                *arg4 = xmm1_2
            
            int32_t xmm0_4 = i[2]
            
            if (not(xmm0_4 f<= *arg5))
                *arg5 = xmm0_4
        
        ecx = &ecx[0xa]
    while (ecx != arg2)

return i
