// 函数: sub_419680
// 地址: 0x419680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
GetCursorPos(&point)
ScreenToClient(arg2, &point)
int32_t esi = *(arg1 + 0x94)
int32_t eax = sub_419790(arg1, point.x, point.y)
*(arg1 + 0x94) = eax

if (eax != esi)
    sub_4199b0(arg1)
    sub_419bf0(arg1)
    sub_419f00(arg1)
    InvalidateRect(*(arg1 + 0xc), nullptr, 1)
    UpdateWindow(*(arg1 + 0xc))

return 0
