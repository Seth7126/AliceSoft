// 函数: sub_6891b0
// 地址: 0x6891b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
int32_t nPos = GetScrollPos(*(arg1 + 4), *(arg1 + 0x10))
lpsi.cbSize = 0x1c
lpsi.fMask = 0x17
GetScrollInfo(*(arg1 + 4), *(arg1 + 0x10), &lpsi)

switch (zx.d(arg2))
    case 0, 6
        nPos -= 1
    case 1, 7
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

int32_t result = SetScrollPos(*(arg1 + 4), *(arg1 + 0x10), nPos, 1)
sub_69a5bc(eax_1 ^ &lpsi)
return result
