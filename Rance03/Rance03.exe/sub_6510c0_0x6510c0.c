// 函数: sub_6510c0
// 地址: 0x6510c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
RECT rect
GetClientRect(*arg1[2], &rect)
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(arg1[5])
lpsi.cbSize = 0x1c
lpsi.fMask = 7
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(rect.right - rect.left)
lpsi.nMin = 0
int32_t eax_11 = (*(*arg1 + 8))() + 1
lpsi.nPage = divs.dp.d(edx_1:eax_8, (eax_4 - edx) s>> 1)
lpsi.nMax = eax_11
lpsi.nPos = 0
int32_t result = SetScrollInfo(*arg1[2], SB_HORZ, &lpsi, 1)
sub_69a5bc(eax_1 ^ &lpsi)
return result
