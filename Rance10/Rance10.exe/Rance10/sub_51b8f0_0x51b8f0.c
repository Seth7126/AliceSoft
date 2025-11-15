// 函数: sub_51b8f0
// 地址: 0x51b8f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg2 + 4)
int32_t result

if (*(arg1 + 0x10) != ebx || *(arg1 + 0x14) != *(arg2 + 8))
label_51b947:
    *(arg1 + 0x10) = ebx
    *(arg1 + 0x14) = *(arg2 + 8)
    *(arg1 + 0x18) = *(arg2 + 0xc)
    *(arg1 + 0x28) = *(arg2 + 0x1c)
    result = *(arg2 + 0x20)
    *(arg1 + 0x2c) = result
    *(arg1 + 0x30) = *(arg2 + 0x24)
    *(arg1 + 0xad) = 1
else
    if (sub_402fd0(arg1 + 0x18, arg2 + 0xc) != 0)
        goto label_51b947
    
    *(arg1 + 0x28) - *(arg2 + 0x1c)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        goto label_51b947
    
    *(arg1 + 0x2c) - *(arg2 + 0x20)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        goto label_51b947
    
    result = sub_402fd0(arg1 + 0x30, arg2 + 0x24)
    
    if (result.b != 0)
        goto label_51b947

return result
