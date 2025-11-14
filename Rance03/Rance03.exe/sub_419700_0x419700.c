// 函数: sub_419700
// 地址: 0x419700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0x94)
int32_t eax_4 = sub_419790(arg1, sx.d(arg2.w), sx.d((arg2 u>> 0x10).w))
*(arg1 + 0x94) = eax_4

if (eax_4 != esi)
    sub_4199b0(arg1)
    sub_419bf0(arg1)
    sub_419f00(arg1)
    InvalidateRect(*(arg1 + 0xc), nullptr, 1)
    UpdateWindow(*(arg1 + 0xc))

return 0
