// 函数: sub_49f410
// 地址: 0x49f410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

PAINTSTRUCT paint
int32_t eax_1 = __security_cookie ^ &paint

if (*(arg1 + 0x125) == 0 && *(arg1 + 0x124) == 0 && *(arg1 + 0x110) != 0
        && (*(**(arg1 + 0x110) + 0x10))() != 0)
    ValidateRect(arg2, nullptr)
    (*(*(arg1 + 4) + 0x44))()
    @__security_check_cookie@4(eax_1 ^ &paint)
    return 0

BeginPaint(arg2, &paint)
HGDIOBJ hbr = GetStockObject(BLACK_BRUSH)
var_40
FillRect(paint.hdc, &var_40, hbr)
EndPaint(arg2, &paint)
@__security_check_cookie@4(eax_1 ^ &paint)
return 0
