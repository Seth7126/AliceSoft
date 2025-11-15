// 函数: sub_504260
// 地址: 0x504260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = *(arg1 + 0xc4)
int32_t* edx = *(arg1 + 0xc0)

if (edx != result)
    while (*edx != arg2)
        edx = &edx[1]
        
        if (edx == result)
            break
    
    if (edx != result)
        result = sub_6feca0(edx, &edx[1], result - &edx[1])
        *(arg1 + 0xc4) -= 4

return result
