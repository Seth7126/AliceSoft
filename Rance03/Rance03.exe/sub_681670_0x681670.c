// 函数: sub_681670
// 地址: 0x681670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

PAINTSTRUCT paint
int32_t eax_1 = __security_cookie ^ &paint
BeginPaint(arg2, &paint)
RECT rect
GetClientRect(*(arg1 + 8), &rect)
HDC hdcSrc = *(arg1 + 0x98)
int32_t eax_2 = *(arg1 + 0x2c)
rect.bottom = eax_2

if (hdcSrc != 0)
    int32_t top = rect.top
    int32_t left = rect.left
    BitBlt(paint.hdc, left, top, rect.right - left, eax_2 - top, hdcSrc, 0, 0, SRCCOPY)

EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &paint)
return 0
