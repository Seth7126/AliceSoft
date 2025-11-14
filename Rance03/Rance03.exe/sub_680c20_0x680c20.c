// 函数: sub_680c20
// 地址: 0x680c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_98
int32_t eax_1 = __security_cookie ^ &var_98
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
var_78
uint128_t xmm0 = var_78.o
RECT lprc_1
lprc_1.left = xmm0.d
lprc_1.top = xmm0:4.d
lprc_1.right = xmm0:8.d
lprc_1.bottom = xmm0:0xc.d
RECT lprc
lprc.left = xmm0.d
lprc.top = xmm0:4.d
lprc.right = xmm0:8.d
lprc.bottom = xmm0:0xc.d
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(_mm_bsrli_si128(xmm0, 8))
int32_t eax_6 = (eax_4 + (edx & 3)) s>> 2
lprc.right = eax_6
lprc_1.left = eax_6 * 3
HBRUSH eax_9 =
    CreateSolidBrush((zx.d(*(arg1 + 0x7a)) << 8 | zx.d(*(arg1 + 0x79))) << 8 | zx.d(*(arg1 + 0x78)))
HBRUSH eax_12 = CreateSolidBrush(
    (zx.d(*(arg1 + 0x7a) - 0x14) << 8 | zx.d(*(arg1 + 0x79) - 0x14)) << 8
    | zx.d(*(arg1 + 0x78) - 0x14))
HBRUSH eax_15 = CreateSolidBrush(
    (zx.d(*(arg1 + 0x7a) + 0x14) << 8 | zx.d(*(arg1 + 0x79) + 0x14)) << 8
    | zx.d(*(arg1 + 0x78) + 0x14))
FillRect(*(arg1 + 0x54), &var_78, eax_9)
FillRect(*(arg1 + 0x54), &lprc_1, eax_12)
FillRect(*(arg1 + 0x54), &lprc, eax_15)
DeleteObject(eax_9)
DeleteObject(eax_12)
DeleteObject(eax_15)
int32_t cx = (*(*(arg1 + 0x30) + 0x10))((*(*(arg1 + 0x30) + 0x14))(*(arg1 + 0x54), 0, 0, 0xcc0020))
BitBlt(paint.hdc, 0, 0, cx)
EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &var_98)
return 0
