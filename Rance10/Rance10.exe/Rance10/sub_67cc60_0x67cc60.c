// 函数: sub_67cc60
// 地址: 0x67cc60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (**(arg1 + 0x14) != 0)
    void* ecx = *(arg1 + 0x98)
    
    if (ecx != 0)
        *(arg1 + 0x20) = *(ecx + 0x10)
        *(arg1 + 0x2c) = (*(ecx + 8) - *(ecx + 4)) s>> 2
    
    void* eax_4 = *(arg1 + 0x9c)
    
    if (eax_4 != 0 && *(eax_4 + 4) != 0)
        sub_67e4d0(**(arg1 + 0x14))
    
    sub_67e190(arg1 + 0x18, **(arg1 + 0x14))
    sub_67e310(arg1 + 0x24, **(arg1 + 0x14))
    InvalidateRect(**(arg1 + 0x14), nullptr, 1)
    UpdateWindow(**(arg1 + 0x14))

int32_t* result
result.b = 1
return result
