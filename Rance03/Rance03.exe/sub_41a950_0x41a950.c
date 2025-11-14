// 函数: sub_41a950
// 地址: 0x41a950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_41a9c0(arg1, arg1[0x15])
*(arg1[2] + 0x7c) = arg2
(*(*arg1 + 0x8c))()
sub_41c5c0(arg1)
*(arg1[2] + 0x60) = arg3
*(arg1[2] + 0x84) = arg1

if (sub_698a60(arg1[2]) == 0)
    return 0

HWND hWnd = *arg1[2]
arg1[3] = hWnd
ShowWindow(hWnd, SW_SHOW)
UpdateWindow(arg1[3])
BOOL result
result.b = 1
return result
