// 函数: sub_67e310
// 地址: 0x67e310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
int32_t eax_2 = GetScrollPos(arg2, SB_VERT)
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
int32_t result = SetScrollInfo(arg2, SB_VERT, &lpsi, 1)
@__security_check_cookie@4(eax_1 ^ &lpsi)
return result
