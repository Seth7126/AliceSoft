// 函数: sub_47ea70
// 地址: 0x47ea70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2

if (*(arg1 + 0x3e) == ebx.b)
    return 

if (ebx.b == 0)
    if (*(arg1 + 0x3c) == 0 && *(arg1 + 0x25) == 0 && *(arg1 + 0x3f) == 0)
        ShowCursor(1)
        *(arg1 + 0x3f) = 1
    
    sub_47e590(arg1)
else if (*(arg1 + 0x3f) != 0)
    ShowCursor(0)
    *(arg1 + 0x3e) = ebx.b
    *(arg1 + 0x3f) = 0
    return 

*(arg1 + 0x3e) = ebx.b
