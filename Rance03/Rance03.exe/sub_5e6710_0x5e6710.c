// 函数: sub_5e6710
// 地址: 0x5e6710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

PAINTSTRUCT paint
int32_t eax_1 = __security_cookie ^ &paint

if (*(arg1 + 0xf9) == 0 && *(arg1 + 0xf8) == 0 && *(arg1 + 0xe4) != 0
        && (*(**(arg1 + 0xe4) + 0x10))() != 0)
    ValidateRect(arg2, nullptr)
    sub_5e52b0(arg1)
    sub_69a5bc(eax_1 ^ &paint)
    return 0

BeginPaint(arg2, &paint)
HGDIOBJ hbr = GetStockObject(BLACK_BRUSH)
var_48
FillRect(paint.hdc, &var_48, hbr)
EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &paint)
return 0
