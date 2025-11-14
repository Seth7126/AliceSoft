// 函数: sub_41ad10
// 地址: 0x41ad10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
int32_t nPos = GetScrollPos(arg1, SB_HORZ)
lpsi.cbSize = 0x1c
lpsi.fMask = 0x17
GetScrollInfo(arg1, SB_HORZ, &lpsi)

switch (zx.d(arg2))
    case 0
        nPos -= 1
    case 1
        nPos += 1
    case 2
        nPos -= lpsi.nPage
    case 3
        nPos += lpsi.nPage
    case 5
        nPos = lpsi.nTrackPos

int32_t nMax = lpsi.nMax

if (nPos s< lpsi.nMin)
    nPos = lpsi.nMin

if (nPos s>= nMax)
    nPos = nMax - 1

SetScrollPos(arg1, SB_HORZ, nPos, 1)
InvalidateRect(arg1, nullptr, 0)
sub_69a5bc(eax_1 ^ &lpsi)
return 0
