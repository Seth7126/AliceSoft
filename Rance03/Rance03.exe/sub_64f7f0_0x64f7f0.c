// 函数: sub_64f7f0
// 地址: 0x64f7f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_5c
int32_t eax_1 = __security_cookie ^ &var_5c
PAINTSTRUCT paint
BeginPaint(arg2, &paint)

if (*(arg1 + 0x7c) == *(arg1 + 0x80))
    RECT lprc
    lprc.left = 0
    lprc.top = (*(*(arg1 + 0xc) + 0x14))()
    lprc.right = paint.rcPaint.right
    lprc.bottom = paint.rcPaint.bottom
    HBRUSH eax_9 = CreateSolidBrush((zx.d(*(arg1 + 0x100)) << 8 | zx.d(*(arg1 + 0xfc))) << 8
        | zx.d(*(arg1 + 0xf8)))
    FillRect(paint.hdc, &lprc, eax_9)
    DeleteObject(eax_9)

int32_t eax_10 = *(arg1 + 0x30)

if (eax_10 != 0)
    int32_t cx = (*(*(arg1 + 0xc) + 0x10))((*(*(arg1 + 0xc) + 0x14))(eax_10, 0, 0, 0xcc0020))
    BitBlt(paint.hdc, 0, 0, cx)

EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &var_5c)
return 0
