// 函数: sub_428f70
// 地址: 0x428f70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

LRESULT wParam = SendMessageA(*(arg1 + 0xc), 0x14c, 0xffffffff, arg2)

if (wParam != 0xffffffff)
    SendMessageA(*(arg1 + 0xc), 0x144, wParam, 0)

SendMessageA(*(arg1 + 0xc), 0x14a, 0, arg2)
SetWindowTextA(*(arg1 + 0xc), arg2)
WPARAM wParam_1 = 0x10

if (SendMessageA(*(arg1 + 0xc), 0x146, 0, 0) s> 0x10)
    LRESULT eax_1
    
    do
        SendMessageA(*(arg1 + 0xc), 0x144, wParam_1, 0)
        wParam_1 += 1
        eax_1 = SendMessageA(*(arg1 + 0xc), 0x146, 0, 0)
    while (wParam_1 s< eax_1)

return (*(**(arg1 + 0x14) + 0xb4))(arg3)
