// 函数: sub_600aa0
// 地址: 0x600aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_6c
int32_t eax_1 = __security_cookie ^ &var_6c
RECT rect
BOOL eax_2 = GetClientRect(arg2, &rect)
BOOL var_68

if (eax_2 != 0)
    *(arg1 + 0x6c)
    var_68 = divs.dp.d(sx.q(rect.bottom - rect.top), *(arg1 + 0x6c)) + 1
else
    var_68 = eax_2

int32_t eax_8 = GetScrollPos(arg2, SB_VERT)
int32_t eax_9 = GetScrollPos(arg2, SB_HORZ)
sub_601ce0(arg1 + 0x30, *(arg1 + 0x94), eax_9, eax_8, var_68)
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
var_58

if (*(arg1 + 0x94) == 0 || *(arg1 + 0x58) == 0)
    HGDIOBJ hbr = GetStockObject(WHITE_BRUSH)
    FillRect(paint.hdc, &var_58, hbr)
else
    __builtin_memset(&rect, 0, 0x10)
    GetClientRect(arg2, &rect)
    int32_t edx_3 = var_58:4.d
    int32_t ecx_1 = var_58.d
    BitBlt(paint.hdc, ecx_1, edx_3, var_58:8.d - ecx_1, var_58:0xc.d - edx_3, *(arg1 + 0x58), 
        ecx_1, edx_3, SRCCOPY)
EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &var_6c)
return 0
