// 函数: sub_4ffb10
// 地址: 0x4ffb10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg2 + 4)
int32_t result

if (*(arg1 + 0x80) != ebx || *(arg1 + 0x84) != *(arg2 + 8))
label_4ffb79:
    *(arg1 + 0x80) = ebx
    *(arg1 + 0x84) = *(arg2 + 8)
    *(arg1 + 0x88) = *(arg2 + 0xc)
    *(arg1 + 0x98) = *(arg2 + 0x1c)
    result = *(arg2 + 0x20)
    *(arg1 + 0x9c) = result
    *(arg1 + 0xa0) = *(arg2 + 0x24)
    *(arg1 + 0xc4) = 1
else
    if (sub_402fd0(arg1 + 0x88, arg2 + 0xc) != 0)
        goto label_4ffb79
    
    *(arg1 + 0x98) - *(arg2 + 0x1c)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        goto label_4ffb79
    
    *(arg1 + 0x9c) - *(arg2 + 0x20)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        goto label_4ffb79
    
    result = sub_402fd0(arg1 + 0xa0, arg2 + 0x24)
    
    if (result.b != 0)
        goto label_4ffb79

return result
