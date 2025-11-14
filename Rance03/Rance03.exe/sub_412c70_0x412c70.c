// 函数: sub_412c70
// 地址: 0x412c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*arg1 == 0)
    return 

POINT point
GetCursorPos(&point)
ScreenToClient(arg1[1], &point)
void** nHeight
void** nHeight_1 = nHeight

if (&arg1[8] != nHeight_1)
    sub_401ff0(&arg1[8], nHeight_1, 0, 0xffffffff)

sub_412670()
int32_t nWidth
sub_412870(arg1, &nWidth, &nHeight)
MoveWindow(*arg1, arg1[0x20] + point.x, arg1[0x21] + point.y, nWidth, nHeight, 1)
InvalidateRect(*arg1, nullptr, 0)
