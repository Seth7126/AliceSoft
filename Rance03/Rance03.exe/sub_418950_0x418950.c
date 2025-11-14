// 函数: sub_418950
// 地址: 0x418950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

PAINTSTRUCT paint
int32_t eax_1 = __security_cookie ^ &paint
BeginPaint(arg1, &paint)
HBRUSH eax_3 = CreateSolidBrush(GetSysColor(COLOR_BTNFACE))
var_48
FillRect(paint.hdc, &var_48, eax_3)
DeleteObject(eax_3)
EndPaint(arg1, &paint)
sub_69a5bc(eax_1 ^ &paint)
return 0
