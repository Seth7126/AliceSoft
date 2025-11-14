// 函数: sub_602270
// 地址: 0x602270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
lpsi.cbSize = 0x1c
lpsi.fMask = 0x17
GetScrollInfo(arg1, SB_VERT, &lpsi)
int32_t nMax = lpsi.nMax

if (nMax s> 0)
    nMax = SetScrollPos(arg1, SB_VERT, nMax, 1)

sub_69a5bc(eax_1 ^ &lpsi)
return nMax
