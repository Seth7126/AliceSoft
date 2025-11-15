// 函数: sub_48cce0
// 地址: 0x48cce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg2[1]
int32_t* i

for (i = *arg2; i != edx; i = &i[1])
    int32_t xmm1_1 = *i
    int128_t xmm0_1 = *(arg1 + 8)
    
    if (xmm1_1 f> xmm0_1)
        *i = xmm0_1
    else
        xmm0_1 ^= 0x80000000
        
        if (not(xmm0_1 f<= xmm1_1))
            *i = xmm0_1

return i
