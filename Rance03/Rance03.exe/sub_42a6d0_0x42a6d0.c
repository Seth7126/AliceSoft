// 函数: sub_42a6d0
// 地址: 0x42a6d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
GetCursorPos(&point)
ScreenToClient(arg2, &point)
int32_t esi = arg1[0x41]
int32_t eax = sub_42a830(arg1, point.x, point.y)
arg1[0x41] = eax

if (eax != esi)
    sub_42aa80(arg1)
    sub_42acd0(arg1)
    sub_42b030(arg1)
    sub_42b4c0(arg1)
    InvalidateRect(arg1[0x17], nullptr, 1)
    UpdateWindow(arg1[0x17])

arg1[0x68] += 1

if (arg1[0x68] s>= 5)
    for (int32_t* i = arg1[0x3d]; i != arg1[0x3e]; i = &i[9])
        sub_4315f0(*i)
    
    arg1[0x68] = 0

return 0
