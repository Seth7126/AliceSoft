// 函数: sub_6576a0
// 地址: 0x6576a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_6c
int32_t eax_1 = __security_cookie ^ &var_6c
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
RECT rect
GetClientRect(*(arg1 + 8), &rect)
int96_t xmm0
xmm0.d = rect.left
xmm0:4.d = rect.top
xmm0:8.d = rect.right
xmm0:0xc.d = rect.bottom
HDC hdcSrc = *(arg1 + 0x384)
int32_t top = *(arg1 + 0x2c)
rect.top = top

if (hdcSrc != 0)
    int32_t y = xmm0:4.d
    int32_t x = xmm0.d
    BitBlt(paint.hdc, x, y, xmm0:8.d - x, top - y, hdcSrc, 0, 0, SRCCOPY)
    top = rect.top

HDC hdcSrc_1 = *(arg1 + 0x3f0)

if (hdcSrc_1 != 0)
    int32_t left = rect.left
    BitBlt(paint.hdc, left, top, rect.right - left, rect.bottom - top, hdcSrc_1, 0, 0, SRCCOPY)

EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &var_6c)
return 0
