// 函数: sub_683840
// 地址: 0x683840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_4c
int32_t eax_1 = __security_cookie ^ &var_4c
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
int32_t eax_2 = *(arg1 + 0x90)

if (eax_2 != 0)
    int32_t cx = (*(*(arg1 + 0x6c) + 0x10))((*(*(arg1 + 0x6c) + 0x14))(eax_2, 0, 0, 0xcc0020))
    BitBlt(paint.hdc, 0, *(arg1 + 0x2c), cx)

EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &var_4c)
return 0
