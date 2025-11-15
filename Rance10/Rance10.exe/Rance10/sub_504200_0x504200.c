// 函数: sub_504200
// 地址: 0x504200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_3 = *(arg1 + 0xc4)
int32_t* edx = *(arg1 + 0xc0)

if (edx != eax_3)
    while (*edx != arg2)
        edx = &edx[1]
        
        if (edx == eax_3)
            break
    
    if (edx != eax_3)
        sub_6feca0(edx, &edx[1], *(arg1 + 0xc4) - &edx[1])
        *(arg1 + 0xc4) -= 4

return sub_404370(arg1 + 0xc0, &arg2)
