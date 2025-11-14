// 函数: sub_64f970
// 地址: 0x64f970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
GetCursorPos(&point)
ScreenToClient(arg2, &point)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x38e38e39, *(arg1 + 0x80) - *(arg1 + 0x7c))
int32_t edx_1 = edx s>> 3

if ((edx_1 u>> 0x1f) + edx_1 == 1)
    sub_6503f0(arg1, 0)

int32_t esi = *(arg1 + 0x8c)
int32_t eax_4 = sub_64fa70(arg1, point.x, point.y)
*(arg1 + 0x8c) = eax_4

if (eax_4 != esi)
    sub_64fc80(arg1)
    sub_64feb0(arg1)
    sub_6501a0(arg1)
    InvalidateRect(**(arg1 + 8), nullptr, 1)
    UpdateWindow(**(arg1 + 8))

return 0
