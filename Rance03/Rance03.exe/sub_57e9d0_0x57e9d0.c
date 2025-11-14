// 函数: sub_57e9d0
// 地址: 0x57e9d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x58) == *(arg1 + 0x5c))
    int32_t eax
    eax.b = 0
    return eax

int32_t ecx = *(arg1 + 0x5c)
*arg4 = 0x7f7fffff
int32_t* esi = arg2
*arg3 = 0x7f7fffff
*esi = 0x7f7fffff
*arg7 = 0xff7fffff
*arg6 = 0xff7fffff
*arg5 = 0xff7fffff
float* i

for (i = *(arg1 + 0x58); i != ecx; i = &i[9])
    float xmm1_1 = *i
    
    if (not(*esi f<= xmm1_1))
        *esi = xmm1_1
    
    int32_t xmm1_2 = i[1]
    
    if (not(*arg3 f<= xmm1_2))
        *arg3 = xmm1_2
    
    int32_t xmm1_3 = i[2]
    
    if (not(*arg4 f<= xmm1_3))
        *arg4 = xmm1_3
    
    float xmm0_4 = *i
    
    if (not(xmm0_4 f<= *arg5))
        *arg5 = xmm0_4
        esi = arg2
    
    int32_t xmm0_5 = i[1]
    
    if (not(xmm0_5 f<= *arg6))
        *arg6 = xmm0_5
    
    int32_t xmm0_6 = i[2]
    
    if (not(xmm0_6 f<= *arg7))
        *arg7 = xmm0_6

i.b = 1
return i
