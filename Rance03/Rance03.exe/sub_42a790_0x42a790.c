// 函数: sub_42a790
// 地址: 0x42a790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg1[0x41]
int32_t eax_4 = sub_42a830(arg1, sx.d(arg2.w), sx.d((arg2 u>> 0x10).w))
arg1[0x41] = eax_4

if (eax_4 != esi)
    sub_42aa80(arg1)
    sub_42acd0(arg1)
    sub_42b030(arg1)
    sub_42b4c0(arg1)
    InvalidateRect(arg1[0x17], nullptr, 1)
    UpdateWindow(arg1[0x17])

return 0
