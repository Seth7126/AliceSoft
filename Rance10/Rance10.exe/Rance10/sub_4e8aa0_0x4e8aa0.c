// 函数: sub_4e8aa0
// 地址: 0x4e8aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg2 + 4)
int32_t result

if (*(arg1 + 0x94) != ebx || *(arg1 + 0x98) != *(arg2 + 8))
label_4e8b09:
    *(arg1 + 0x94) = ebx
    *(arg1 + 0x98) = *(arg2 + 8)
    *(arg1 + 0x9c) = *(arg2 + 0xc)
    *(arg1 + 0xac) = *(arg2 + 0x1c)
    result = *(arg2 + 0x20)
    *(arg1 + 0xb0) = result
    *(arg1 + 0xb4) = *(arg2 + 0x24)
    *(arg1 + 0x124) = 1
else
    if (sub_402fd0(arg1 + 0x9c, arg2 + 0xc) != 0)
        goto label_4e8b09
    
    *(arg1 + 0xac) - *(arg2 + 0x1c)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        goto label_4e8b09
    
    *(arg1 + 0xb0) - *(arg2 + 0x20)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        goto label_4e8b09
    
    result = sub_402fd0(arg1 + 0xb4, arg2 + 0x24)
    
    if (result.b != 0)
        goto label_4e8b09

return result
