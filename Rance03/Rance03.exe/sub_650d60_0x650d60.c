// 函数: sub_650d60
// 地址: 0x650d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
int32_t nPos = GetScrollPos(arg2, SB_VERT)
lpsi.cbSize = 0x1c
lpsi.fMask = 0x17
GetScrollInfo(arg2, SB_VERT, &lpsi)

switch (zx.d(arg3))
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

SetScrollPos(arg2, SB_VERT, nPos, 1)
(*(*arg1 + 0x3c))()
sub_69a5bc(eax_1 ^ &lpsi)
return 0
