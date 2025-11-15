// 函数: sub_5bc4b0
// 地址: 0x5bc4b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x6c) == *(arg1 + 0x70))
    int32_t eax
    eax.b = 0
    return eax

int32_t ecx = *(arg1 + 0x70)
int32_t* i = *(arg1 + 0x6c)
*arg2 = 0x7f7fffff
arg2[1] = 0x7f7fffff
arg2[2] = 0x7f7fffff
*arg3 = 0xff7fffff
arg3[1] = 0xff7fffff
arg3[2] = 0xff7fffff

for (; i != ecx; i = &i[9])
    int32_t xmm1_1 = *i
    
    if (not(*arg2 f<= xmm1_1))
        *arg2 = xmm1_1
    
    int32_t xmm1_2 = i[1]
    
    if (not(arg2[1] f<= xmm1_2))
        arg2[1] = xmm1_2
    
    int32_t xmm1_3 = i[2]
    
    if (not(arg2[2] f<= xmm1_3))
        arg2[2] = xmm1_3
    
    int32_t xmm0_4 = *i
    
    if (not(xmm0_4 f<= *arg3))
        *arg3 = xmm0_4
    
    int32_t xmm0_5 = i[1]
    
    if (not(xmm0_5 f<= arg3[1]))
        arg3[1] = xmm0_5
    
    int32_t xmm0_6 = i[2]
    
    if (not(xmm0_6 f<= arg3[2]))
        arg3[2] = xmm0_6

i.b = 1
return i
