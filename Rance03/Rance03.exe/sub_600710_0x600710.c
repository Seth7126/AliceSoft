// 函数: sub_600710
// 地址: 0x600710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edx = *(arg1 + 0x14)

if (*edx != 0)
    void* ecx = *(arg1 + 0x94)
    
    if (ecx != 0)
        *(arg1 + 0x20) = *(ecx + 0x10)
        *(arg1 + 0x2c) = (*(ecx + 8) - *(ecx + 4)) s>> 2
    
    void* eax_4 = *(arg1 + 0x98)
    
    if (eax_4 != 0 && *(eax_4 + 4) != 0)
        sub_602270(*edx)
    
    sub_601f40(arg1 + 0x18, **(arg1 + 0x14))
    sub_6020b0(arg1 + 0x24, **(arg1 + 0x14))
    InvalidateRect(**(arg1 + 0x14), nullptr, 1)
    UpdateWindow(**(arg1 + 0x14))

BOOL result
result.b = 1
return result
