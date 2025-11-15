// 函数: sub_487f10
// 地址: 0x487f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xa0) == 0 && sub_488a60(arg1 + 4) != 0)
    if (*(arg1 + 0x40) != 0)
        return 0
    
    *(arg1 + 0x40) = arg2
    
    if (arg2 != 0)
        (**arg2)()
    
    *(arg1 + 0x44) = arg3
    void* result = *(arg1 + 0x9c)
    *(arg1 + 0x60) = arg1 + 0x3c
    *(arg1 + 0x7c) = arg1 + 0x3c
    *(result + 0x14) = arg1 + 0x3c
    result.b = 1
    *(arg1 + 0xa0) = 1
    return result

return 0
