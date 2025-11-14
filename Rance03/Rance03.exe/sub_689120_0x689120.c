// 函数: sub_689120
// 地址: 0x689120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
int32_t eax_2 = GetScrollPos(*(arg1 + 4), *(arg1 + 0x10))
int32_t ecx = 0
lpsi.cbSize = 0x1c
lpsi.nMin = 0

if (*(arg1 + 0x1c) != 0)
    ecx = 8

int32_t eax_3 = *(arg1 + 0x18)
lpsi.fMask = ecx | 7

if (eax_3 s<= 0)
    lpsi.nMax = 0
else
    lpsi.nMax = eax_3 - 1

lpsi.nPage = *(arg1 + 0x14)
lpsi.nPos = eax_2
int32_t result = SetScrollInfo(*(arg1 + 4), *(arg1 + 0x10), &lpsi, 1)
sub_69a5bc(eax_1 ^ &lpsi)
return result
