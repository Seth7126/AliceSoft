// 函数: sub_4124f0
// 地址: 0x4124f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_6c
int32_t eax_1 = __security_cookie ^ &var_6c
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
int32_t ecx = *(arg1 + 0x7c)
var_58

if (ecx s>= 0 && ecx s< (*(arg1 + 0x74) - *(arg1 + 0x70)) s>> 2)
    FillRect(paint.hdc, &var_58, *(*(arg1 + 0x70) + (ecx << 2)))
SetBkMode(paint.hdc, 1)
HGDIOBJ h = SelectObject(paint.hdc, *(arg1 + 0x48))
int32_t i = 0
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x3c) - *(arg1 + 0x38))
int32_t edx_1 = edx s>> 2

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t edi_1 = 0
    int32_t edx_3
    
    do
        void** lpString = *(arg1 + 0x38) + edi_1
        int32_t c = lpString[4]
        
        if (lpString[5] u>= 0x10)
            lpString = *lpString
        
        int32_t x = *(arg1 + 0x8c)
        TextOutA(paint.hdc, x, *(arg1 + 0x88) * i + x, lpString, c)
        i += 1
        int32_t eax_14
        int32_t edx_2
        edx_2:eax_14 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x3c) - *(arg1 + 0x38))
        edi_1 += 0x18
        edx_3 = edx_2 s>> 2
    while (i s< (edx_3 u>> 0x1f) + edx_3)

SelectObject(paint.hdc, h)
RECT rect
GetClientRect(arg2, &rect)
MoveToEx(paint.hdc, rect.left, rect.top, nullptr)
LineTo(paint.hdc, rect.right - 1, rect.top)
LineTo(paint.hdc, rect.right - 1, rect.bottom - 1)
LineTo(paint.hdc, rect.left, rect.bottom - 1)
LineTo(paint.hdc, rect.left, rect.top)
EndPaint(arg2, &paint)
sub_69a5bc(eax_1 ^ &var_6c)
return 0
