// 函数: sub_42bc60
// 地址: 0x42bc60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_8c
int32_t var_c = __security_cookie ^ &var_8c
int32_t ebx
int32_t var_90 = ebx
int32_t esi
int32_t var_94 = esi
int32_t edi
int32_t var_98 = edi
RECT rect
GetClientRect(arg2, &rect)
int32_t temp0 = divs.dp.d(sx.q(rect.bottom - rect.top), arg1[0x32])
arg1[0x32]
int32_t eax_6 = GetScrollPos(arg2, SB_VERT)
int32_t eax_9
int32_t edx_2
edx_2:eax_9 = sx.q(GetScrollPos(arg2, SB_HORZ) * arg1[0x32])
int32_t eax_11 = (eax_9 - edx_2) s>> 1
int32_t eax_12 = (*(*arg1 + 0x88))()
int32_t edi_2 = eax_6
int32_t var_88
int32_t* edx_4 = &var_88
var_88 = eax_12
int32_t hWnd_2 = edi_2 + temp0
int32_t hWnd_1 = hWnd_2

if (eax_12 s>= hWnd_2)
    edx_4 = &hWnd_1

int32_t ebx_2 = edi_2
struct HDC__* hdc = *edx_4
PAINTSTRUCT paint
paint.hdc = hdc

if (edi_2 s< hdc)
    int32_t edi_3 = 0
    var_88 = 0
    
    do
        hWnd_1 = (*(*arg1 + 0x90))(arg1[0x31], ebx_2, arg1[0x33] - eax_11, arg1[0x32] * edi_3)
        int32_t eax_18 = arg1[0x33]
        
        if (eax_18 s> 0)
            (*(*arg1 + 0x98))(ebx_2, arg1[0x31], 0, eax_18, arg1[0x32] * edi_3, rect.bottom)
        
        int32_t edi_4 = arg1[0x32]
        int32_t eax_21
        int32_t edx_7
        edx_7:eax_21 = sx.q(edi_4 * hWnd_1)
        (*(*arg1 + 0x98))(ebx_2, arg1[0x31], ((eax_21 - edx_7) s>> 1) - eax_11 + arg1[0x33], 
            rect.right, var_88 * edi_4, rect.bottom)
        ebx_2 += 1
        hdc = paint.hdc
        edi_3 = var_88 + 1
        var_88 = edi_3
    while (ebx_2 s< hdc)
    
    edi_2 = eax_6

RECT lprc
lprc.left = 0
lprc.top = (hdc - edi_2) * arg1[0x32]
lprc.right = rect.right
lprc.bottom = rect.bottom
HGDIOBJ hbr = GetStockObject(WHITE_BRUSH)
FillRect(arg1[0x31], &lprc, hbr)
(*(*arg1 + 0x94))(arg1[0x31])
int32_t hWnd = hWnd_1
BeginPaint(hWnd, &paint)
int32_t top = paint.rcPaint.top
int32_t left = paint.rcPaint.left
BitBlt(paint.hdc, left, top, paint.rcPaint.right - left, paint.rcPaint.bottom - top, arg1[0x31], 
    left, top, SRCCOPY)
EndPaint(hWnd, &paint)
sub_69a5bc(lprc.bottom ^ &var_90)
return 0
