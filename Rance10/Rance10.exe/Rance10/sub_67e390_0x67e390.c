// 函数: sub_67e390
// 地址: 0x67e390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
int32_t nPos = GetScrollPos(arg1, SB_VERT)
lpsi.cbSize = 0x1c
lpsi.fMask = 0x17
GetScrollInfo(arg1, SB_VERT, &lpsi)

switch (arg2)
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

int32_t result = SetScrollPos(arg1, SB_VERT, nPos, 1)
@__security_check_cookie@4(eax_1 ^ &lpsi)
return result
