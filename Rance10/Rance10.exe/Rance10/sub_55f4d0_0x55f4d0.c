// 函数: sub_55f4d0
// 地址: 0x55f4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t ebx = *(arg2 + 4)
char result

if (*(arg1 + 0x10) != ebx || *(arg1 + 0x14) != *(arg2 + 8))
label_55f528:
    *(arg1 + 0x10) = ebx
    *(arg1 + 0x14) = *(arg2 + 8)
    *(arg1 + 0x18) = *(arg2 + 0xc)
    *(arg1 + 0x28) = *(arg2 + 0x1c)
    *(arg1 + 0x2c) = *(arg2 + 0x20)
    *(arg1 + 0x30) = *(arg2 + 0x24)
    result = sub_55d550(arg1)
    *(arg1 + 0xd4) = 1
else
    if (sub_402fd0(arg1 + 0x18, arg2 + 0xc) != 0)
        goto label_55f528
    
    *(arg1 + 0x28) - *(arg2 + 0x1c)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        goto label_55f528
    
    *(arg1 + 0x2c) - *(arg2 + 0x20)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        goto label_55f528
    
    result = sub_402fd0(arg1 + 0x30, arg2 + 0x24)
    
    if (result != 0)
        goto label_55f528

return result
