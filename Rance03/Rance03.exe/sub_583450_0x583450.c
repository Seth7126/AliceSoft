// 函数: sub_583450
// 地址: 0x583450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* i

for (i = *(arg1 + 0x28); i != *(arg1 + 0x2c); i += 0xbc)
    int32_t j = 0
    void* ecx = i + 0x28
    
    do
        int32_t xmm0_1 = *(ecx - 4)
        int32_t xmm0_2
        
        if (not(0 f>= xmm0_1) && not(xmm0_1 f>= 1f))
            xmm0_2 = *ecx
        
        if (0 f>= xmm0_1 || xmm0_1 f>= 1f || 0 f>= xmm0_2 || xmm0_2 f>= 1f)
            i.b = 1
            return i
        
        j += 1
        ecx += 0x3c
    while (j s< 3)

i.b = 0
return i
