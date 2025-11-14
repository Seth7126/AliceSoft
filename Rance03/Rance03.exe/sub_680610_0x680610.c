// 函数: sub_680610
// 地址: 0x680610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_a8
int32_t eax_1 = __security_cookie ^ &var_a8
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
uint128_t xmm1
xmm1.d = paint.rcPaint.left
xmm1:4.d = paint.rcPaint.top
xmm1:8.d = paint.rcPaint.right
xmm1:0xc.d = paint.rcPaint.bottom
uint32_t ecx = zx.d(*(arg1 + 0x79))
int32_t xmm0_1 = _mm_bsrli_si128(xmm1, 8)
RECT lprc
lprc.left = xmm1.d
lprc.top = xmm1:4.d
lprc.right = xmm1:8.d
lprc.bottom = xmm1:0xc.d
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(xmm0_1)
int32_t eax_6 = (eax_4 + (edx & 3)) s>> 2
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(_mm_bsrli_si128(xmm1, 0xc))
int32_t edi_1 = ((edx_2 & 3) + eax_8) s>> 2
HBRUSH eax_10 = CreateSolidBrush((zx.d(*(arg1 + 0x7a)) << 8 | ecx) << 8 | zx.d(*(arg1 + 0x78)))
FillRect(*(arg1 + 0x54), &lprc, eax_10)
DeleteObject(eax_10)
int32_t var_2c = eax_6
int32_t var_24 = eax_6
POINT pptl
__builtin_memset(&pptl, 0, 8)
int32_t var_28 = 0
int32_t var_20 = edi_1
int32_t var_1c = 0
int32_t var_18 = edi_1
HRGN hrgn = CreatePolygonRgn(&pptl, 4, WINDING)
HBRUSH eax_16 = CreateSolidBrush(
    (zx.d(*(arg1 + 0x7a) + 0x14) << 8 | zx.d(*(arg1 + 0x79) + 0x14)) << 8
    | zx.d(*(arg1 + 0x78) + 0x14))
FillRgn(*(arg1 + 0x54), hrgn, eax_16)
DeleteObject(eax_16)
int32_t edx_14 = eax_6 * 3
int32_t eax_19 = eax_6 * 5
pptl.x = edx_14
int32_t var_2c_1 = eax_19
int32_t ecx_4 = edi_1 * 3
int32_t var_24_1 = eax_19
int32_t eax_20 = edi_1 * 5
int32_t var_20_1 = eax_20
int32_t var_18_1 = eax_20
pptl.y = ecx_4
int32_t var_28_1 = ecx_4
int32_t var_1c_1 = edx_14
HRGN hrgn_1 = CreatePolygonRgn(&pptl, 4, WINDING)
HBRUSH eax_24 = CreateSolidBrush(
    (zx.d(*(arg1 + 0x7a) - 0x14) << 8 | zx.d(*(arg1 + 0x79) - 0x14)) << 8
    | zx.d(*(arg1 + 0x78) - 0x14))
FillRgn(*(arg1 + 0x54), hrgn_1, eax_24)
DeleteObject(eax_24)
int32_t cx = (*(*(arg1 + 0x30) + 0x10))((*(*(arg1 + 0x30) + 0x14))(*(arg1 + 0x54), 0, 0, 0xcc0020))
BitBlt(paint.hdc, 0, 0, cx)
EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &var_a8)
return 0
