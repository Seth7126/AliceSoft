// 函数: sub_4bec70
// 地址: 0x4bec70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg2 + 4)
int32_t result

if (*(arg1 + 0xd0) != ebx || *(arg1 + 0xd4) != *(arg2 + 8))
label_4becd9:
    *(arg1 + 0xd0) = ebx
    *(arg1 + 0xd4) = *(arg2 + 8)
    *(arg1 + 0xd8) = *(arg2 + 0xc)
    *(arg1 + 0xe8) = *(arg2 + 0x1c)
    result = *(arg2 + 0x20)
    *(arg1 + 0xec) = result
    *(arg1 + 0xf0) = *(arg2 + 0x24)
    *(arg1 + 0x114) = 1
else
    if (sub_402fd0(arg1 + 0xd8, arg2 + 0xc) != 0)
        goto label_4becd9
    
    *(arg1 + 0xe8) - *(arg2 + 0x1c)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        goto label_4becd9
    
    *(arg1 + 0xec) - *(arg2 + 0x20)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        goto label_4becd9
    
    result = sub_402fd0(arg1 + 0xf0, arg2 + 0x24)
    
    if (result.b != 0)
        goto label_4becd9

return result
