// 函数: sub_4e8d10
// 地址: 0x4e8d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg2 + 4)
int32_t result

if (*(arg1 + 0xe0) != ebx || *(arg1 + 0xe4) != *(arg2 + 8))
label_4e8d79:
    *(arg1 + 0xe0) = ebx
    *(arg1 + 0xe4) = *(arg2 + 8)
    *(arg1 + 0xe8) = *(arg2 + 0xc)
    *(arg1 + 0xf8) = *(arg2 + 0x1c)
    result = *(arg2 + 0x20)
    *(arg1 + 0xfc) = result
    *(arg1 + 0x100) = *(arg2 + 0x24)
    *(arg1 + 0x124) = 1
else
    if (sub_402fd0(arg1 + 0xe8, arg2 + 0xc) != 0)
        goto label_4e8d79
    
    *(arg1 + 0xf8) - *(arg2 + 0x1c)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        goto label_4e8d79
    
    *(arg1 + 0xfc) - *(arg2 + 0x20)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        goto label_4e8d79
    
    result = sub_402fd0(arg1 + 0x100, arg2 + 0x24)
    
    if (result.b != 0)
        goto label_4e8d79

return result
