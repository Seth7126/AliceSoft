// 函数: sub_64fa10
// 地址: 0x64fa10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0x8c)
int32_t eax_4 = sub_64fa70(arg1, sx.d(arg2.w), sx.d((arg2 u>> 0x10).w))
*(arg1 + 0x8c) = eax_4

if (eax_4 != esi)
    sub_64fc80(arg1)
    sub_64feb0(arg1)
    sub_6501a0(arg1)
    InvalidateRect(**(arg1 + 8), nullptr, 1)
    UpdateWindow(**(arg1 + 8))

return 0
