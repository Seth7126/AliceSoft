// 函数: sub_42a570
// 地址: 0x42a570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

PAINTSTRUCT paint
int32_t eax_1 = __security_cookie ^ &paint
BeginPaint(arg2, &paint)
int32_t eax_2 = *(arg1 + 0xa8)

if (eax_2 != 0)
    int32_t cx = (*(*(arg1 + 0x84) + 0x10))((*(*(arg1 + 0x84) + 0x14))(eax_2, 0, 0, 0xcc0020))
    BitBlt(paint.hdc, 0, 0, cx)

EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &paint)
return 0
