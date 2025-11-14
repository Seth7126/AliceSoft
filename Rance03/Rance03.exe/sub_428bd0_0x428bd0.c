// 函数: sub_428bd0
// 地址: 0x428bd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HWND hWnd = ImmGetDefaultIMEWnd(arg2)

if (hWnd != 0)
    SendMessageA(hWnd, 0x283, 0x22, 0)

*(arg1 + 0xc) = GetDlgItem(arg2, 0x9cec)
sub_4292a0(arg1)
return 0
