// 函数: sub_4a6a90
// 地址: 0x4a6a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 8)
int32_t* edx = *(arg1 + 4)

if (edx != eax)
    while (*edx != arg2)
        edx = &edx[1]
        
        if (edx == eax)
            break
    
    if (edx != eax)
        sub_6feca0(edx, &edx[1], eax - &edx[1])
        *(arg1 + 8) -= 4
        char* eax_2
        eax_2.b = 1
        return eax_2

eax.b = 0
return eax
