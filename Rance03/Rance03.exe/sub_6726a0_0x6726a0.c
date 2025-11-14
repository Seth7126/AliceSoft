// 函数: sub_6726a0
// 地址: 0x6726a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

RECT rect
int32_t eax_1 = __security_cookie ^ &rect
RECT rect_1
GetClientRect(*(arg1 + 0x74), &rect_1)
GetClientRect(*(arg1 + 0x70), &rect)
MoveWindow(*(arg1 + 0x70), 0, rect_1.bottom - rect.bottom, 0xa, 0xa, 1)

if (*(arg1 + 0x54) != 0)
    GetClientRect(*(arg1 + 0x70), &rect)
    sub_67e740(*(arg1 + 0x54), zx.d(arg2.w), (arg2 u>> 0x10) - rect.bottom)

sub_69a5bc(eax_1 ^ &rect)
return 0
