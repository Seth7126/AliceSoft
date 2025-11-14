// 函数: sub_650b50
// 地址: 0x650b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

PAINTSTRUCT paint
int32_t eax_1 = __security_cookie ^ &paint
BeginPaint(arg2, &paint)
int32_t top = paint.rcPaint.top
int32_t left = paint.rcPaint.left
BitBlt(paint.hdc, left, top, paint.rcPaint.right - left, paint.rcPaint.bottom - top, 
    *(arg1 + 0x44), left, top, SRCCOPY)
EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &paint)
return 0
