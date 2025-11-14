// 函数: sub_601f40
// 地址: 0x601f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
int32_t eax_2 = GetScrollPos(arg2, SB_HORZ)
int32_t ecx = *(arg1 + 8)
lpsi.cbSize = 0x1c
lpsi.fMask = 7
lpsi.nMin = 0

if (ecx s<= 0)
    lpsi.nMax = 0
else
    lpsi.nMax = ecx - 1

lpsi.nPage = *(arg1 + 4)
lpsi.nPos = eax_2
int32_t result = SetScrollInfo(arg2, SB_HORZ, &lpsi, 1)
sub_69a5bc(eax_1 ^ &lpsi)
return result
