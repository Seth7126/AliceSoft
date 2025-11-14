// 函数: sub_64c7e0
// 地址: 0x64c7e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_4107c0(arg1[0x2e], arg1[0x2f])
arg1[0x2f] = arg1[0x2e]
arg1[0x31] = 0
sub_650f00(arg1, 0)
sub_651040(arg1, 0)
BOOL hWnd = *arg1[2]

if (hWnd != 0)
    hWnd = IsWindowVisible(hWnd)
    
    if (hWnd != 0)
        InvalidateRect(*arg1[2], nullptr, 1)
        return UpdateWindow(*arg1[2])

return hWnd
