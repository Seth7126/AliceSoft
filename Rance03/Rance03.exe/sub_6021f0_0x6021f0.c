// 函数: sub_6021f0
// 地址: 0x6021f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
int32_t eax_2 = GetScrollPos(arg1, SB_VERT)
lpsi.cbSize = 0x1c
lpsi.fMask = 0x17
GetScrollInfo(arg1, SB_VERT, &lpsi)
int32_t nMin = eax_2 + arg2
int32_t nMax = lpsi.nMax

if (nMin s< lpsi.nMin)
    nMin = lpsi.nMin

if (nMin s>= nMax)
    nMin = nMax - 1

int32_t result = SetScrollPos(arg1, SB_VERT, nMin, 1)
sub_69a5bc(eax_1 ^ &lpsi)
return result
