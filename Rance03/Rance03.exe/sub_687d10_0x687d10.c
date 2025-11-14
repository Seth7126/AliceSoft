// 函数: sub_687d10
// 地址: 0x687d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

PAINTSTRUCT paint
int32_t eax_1 = __security_cookie ^ &paint
HBRUSH eax_2 = CreateSolidBrush(0xffffff)
BeginPaint(arg1, &paint)
var_48
FillRect(paint.hdc, &var_48, eax_2)
EndPaint(arg1, &paint)
DeleteObject(eax_2)
sub_69a5bc(eax_1 ^ &paint)
return 0
