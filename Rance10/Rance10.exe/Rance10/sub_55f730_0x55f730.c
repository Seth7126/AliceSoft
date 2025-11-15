// 函数: sub_55f730
// 地址: 0x55f730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg2 + 4)
char result

if (*(arg1 + 0x50) != ebx || *(arg1 + 0x54) != *(arg2 + 8))
label_55f787:
    *(arg1 + 0x50) = ebx
    *(arg1 + 0x54) = *(arg2 + 8)
    *(arg1 + 0x58) = *(arg2 + 0xc)
    *(arg1 + 0x68) = *(arg2 + 0x1c)
    *(arg1 + 0x6c) = *(arg2 + 0x20)
    *(arg1 + 0x70) = *(arg2 + 0x24)
    result = sub_55d550(arg1)
    *(arg1 + 0xd4) = 1
else
    if (sub_402fd0(arg1 + 0x58, arg2 + 0xc) != 0)
        goto label_55f787
    
    *(arg1 + 0x68) - *(arg2 + 0x1c)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        goto label_55f787
    
    *(arg1 + 0x6c) - *(arg2 + 0x20)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        goto label_55f787
    
    result = sub_402fd0(arg1 + 0x70, arg2 + 0x24)
    
    if (result != 0)
        goto label_55f787

return result
