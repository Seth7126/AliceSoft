// 函数: sub_6f981a
// 地址: 0x6f981a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg2
*(arg1 + 0xec) = 0
*(arg1 + 0x1c) = result

if (arg3 != 0)
    if (arg4 == 0)
        *(arg1 + 0xb1) = 0
    else
        result = *(result + 0x100)
        
        if ((*(result + 0x30) & 4) == 0)
            *(result + 0x14) += 1
        
        *(arg1 + 0xb1) = 1
    
    *(arg1 + 0xa8) = arg3
else
    result = *(result + 0x100)
    
    if ((*(result + 0x30) & 4) == 0)
        *(result + 0x14) += 1

return result
