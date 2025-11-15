// 函数: sub_497f90
// 地址: 0x497f90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = (*(**(arg1 + 0x128) + 0x8c))(arg2)

if (result != 0)
    return result

if (sub_41ac20(arg2, 0x760b24) != 0)
    return *(arg1 + 0x128)

if (sub_41ac20(arg2, 0x760ab4) != 0)
    return arg1 + 0x12c

if (sub_41ac20(arg2, 0x760ae4) == 0 && sub_41ac20(arg2, 0x760ac4) == 0)
    if (sub_41ac20(arg2, 0x760ad4) != 0)
        return arg1 + 0x1d8
    
    if (sub_41ac20(arg2, 0x760aa4) != 0)
        return arg1 + 0x1e8
    
    if (sub_41ac20(arg2, 0x760af4) != 0)
        return arg1 + 0x134
    
    if (sub_41ac20(arg2, 0x760b34) != 0)
        return *(arg1 + 0x1d4)
    
    if (sub_41ac20(arg2, "|.Pd") != 0)
        return arg1 + 0x180
    
    if (sub_41ac20(arg2, 0x760b54) != 0)
        int32_t eax_20 = neg.d(arg1 + 0xd0)
        return sbb.d(eax_20, eax_20, arg1 != 0xffffff30) & (arg1 + 0xd4)
    
    if (sub_41ac20(arg2, 0x760a94) != 0)
        (**data_7fcb70)()
        return data_7fcb70
    
    if (sub_41ac20(arg2, 0x760b14) != 0)
        return arg1 + 0xd0
    
    if (sub_41ac20(arg2, 0x760b44) == 0)
        return 0
    
    return arg1 + 0x1f4

return arg1 + 0x18
