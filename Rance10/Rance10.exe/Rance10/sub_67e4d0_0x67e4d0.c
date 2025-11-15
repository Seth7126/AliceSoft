// 函数: sub_67e4d0
// 地址: 0x67e4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
lpsi.cbSize = 0x1c
lpsi.fMask = 0x17
GetScrollInfo(arg1, SB_VERT, &lpsi)
int32_t nMax = lpsi.nMax

if (nMax s> 0)
    nMax = SetScrollPos(arg1, SB_VERT, nMax, 1)

@__security_check_cookie@4(eax_1 ^ &lpsi)
return nMax
