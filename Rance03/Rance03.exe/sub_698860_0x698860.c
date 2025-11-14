// 函数: sub_698860
// 地址: 0x698860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint16_t result

if (*(arg1 + 0x2c) == 0)
    WNDCLASSA wndClass
    wndClass.style = *(arg1 + 4)
    wndClass.lpfnWndProc = *(arg1 + 8)
    wndClass.cbClsExtra = *(arg1 + 0xc)
    wndClass.cbWndExtra = *(arg1 + 0x10)
    wndClass.hInstance = *(arg1 + 0x14)
    wndClass.hIcon = *(arg1 + 0x18)
    wndClass.hCursor = *(arg1 + 0x1c)
    wndClass.hbrBackground = *(arg1 + 0x20)
    wndClass.lpszMenuName = *(arg1 + 0x24)
    wndClass.lpszClassName = *(arg1 + 0x28)
    
    if (RegisterClassA(&wndClass) != 0)
        *(arg1 + 0x2c) = 1
        result.b = 1
        return result

result.b = 0
return result
