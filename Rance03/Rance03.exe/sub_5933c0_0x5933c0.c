// 函数: sub_5933c0
// 地址: 0x5933c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
int32_t var_4 = 0
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
int32_t edx_1 = edx s>> 1
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result s> 0)
    int32_t* esi_1 = nullptr
    
    do
        int32_t xmm1_1 = *(esi_1 + *arg1)
        
        if (not(*arg2 f<= xmm1_1))
            *arg2 = xmm1_1
        
        int32_t xmm0_2 = *(esi_1 + *arg1)
        
        if (not(xmm0_2 f<= *arg3))
            *arg3 = xmm0_2
        
        int32_t xmm1_2 = *(*arg1 + esi_1 + 4)
        
        if (not(arg2[1] f<= xmm1_2))
            arg2[1] = xmm1_2
        
        int32_t xmm0_4 = *(*arg1 + esi_1 + 4)
        
        if (not(xmm0_4 f<= arg3[1]))
            arg3[1] = xmm0_4
        
        int32_t xmm1_3 = *(*arg1 + esi_1 + 8)
        
        if (not(arg2[2] f<= xmm1_3))
            arg2[2] = xmm1_3
        
        int32_t xmm0_6 = *(*arg1 + esi_1 + 8)
        
        if (not(xmm0_6 f<= arg3[2]))
            arg3[2] = xmm0_6
        
        esi_1 = &esi_1[3]
        var_4 += 1
        int32_t eax_9
        int32_t edx_2
        edx_2:eax_9 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
        int32_t edx_3 = edx_2 s>> 1
        result = (edx_3 u>> 0x1f) + edx_3
    while (var_4 s< result)

return result
