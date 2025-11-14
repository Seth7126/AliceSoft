// 函数: sub_653140
// 地址: 0x653140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

PAINTSTRUCT paint
int32_t eax_1 = __security_cookie ^ &paint
BeginPaint(arg2, &paint)
RECT rect
GetClientRect(*(arg1 + 8), &rect)
HDC hdcSrc = *(arg1 + 0x64)

if (hdcSrc != 0)
    int32_t top = rect.top
    int32_t left = rect.left
    BitBlt(paint.hdc, left, top, rect.right - left, rect.bottom - top, hdcSrc, 0, 0, SRCCOPY)

EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &paint)
return 0
