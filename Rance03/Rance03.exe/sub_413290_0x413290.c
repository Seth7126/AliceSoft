// 函数: sub_413290
// 地址: 0x413290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1

if (arg3 s>= 0 && arg3 s< (*(*arg1 + 0x90))())
    char* ebx_1 = arg1[0x18] + arg3 * 0x6c + 0x54
    
    if (*(ebx_1 + 0x10) == 0)
        return 0
    
    if (arg1[0x1c] == arg3)
        SetBkColor(arg2, arg1[0x1d])
        COLORREF color = arg1[0x1e]
        
        if (arg1[0x14] != color)
            SetTextColor(arg1[0x11], color)
            arg1[0x14] = color
    
    if (*(ebx_1 + 0x14) u>= 0x10)
        ebx_1 = *ebx_1
    
    sub_41b120(arg1, arg2, arg4, arg5, ebx_1)
    
    if (arg1[0x1c] == arg3)
        SetBkColor(arg2, 0xffffff)
        
        if (arg1[0x14] != 0)
            SetTextColor(arg1[0x11], 0)
            arg1[0x14] = 0
    
    return ebx_1[0x10].d

return 0
