// 函数: sub_4e2d90
// 地址: 0x4e2d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg2 + 4)
int32_t result

if (*(arg1 + 0x20) != ebx || *(arg1 + 0x24) != *(arg2 + 8))
label_4e2de7:
    *(arg1 + 0x20) = ebx
    *(arg1 + 0x24) = *(arg2 + 8)
    *(arg1 + 0x28) = *(arg2 + 0xc)
    *(arg1 + 0x38) = *(arg2 + 0x1c)
    result = *(arg2 + 0x20)
    *(arg1 + 0x3c) = result
    *(arg1 + 0x40) = *(arg2 + 0x24)
    *(arg1 + 0x108) = 1
else
    if (sub_402fd0(arg1 + 0x28, arg2 + 0xc) != 0)
        goto label_4e2de7
    
    *(arg1 + 0x38) - *(arg2 + 0x1c)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        goto label_4e2de7
    
    *(arg1 + 0x3c) - *(arg2 + 0x20)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        goto label_4e2de7
    
    result = sub_402fd0(arg1 + 0x40, arg2 + 0x24)
    
    if (result.b != 0)
        goto label_4e2de7

return result
