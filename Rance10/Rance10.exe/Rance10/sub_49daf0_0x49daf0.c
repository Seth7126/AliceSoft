// 函数: sub_49daf0
// 地址: 0x49daf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

RECT rect
int32_t eax_1 = __security_cookie ^ &rect
GetWindowRect(**(arg1 + 0x10), &rect)
int32_t left = rect.left
int32_t edi_1 = rect.right - left
int32_t top = rect.top
int32_t bottom = rect.bottom
arg2[3] = top
arg2[1] = &common::CPoint::`vftable'
arg2[2] = left
arg2[5] = edi_1
arg2[6] = bottom - top
arg2[4] = &common::CSize::`vftable'
*arg2 = &common::CRect::`vftable'
@__security_check_cookie@4(eax_1 ^ &rect)
return arg2
