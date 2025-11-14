// 函数: sub_41adf0
// 地址: 0x41adf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t hWnd_2
int32_t var_c = __security_cookie ^ &hWnd_2
int32_t ebx
int32_t var_90 = ebx
int32_t esi
int32_t var_94 = esi
int32_t edi
int32_t var_98 = edi
HDC hdc_1 = arg1[0x11]
arg1[0x14] = 0
SetTextColor(hdc_1, 0)
RECT rect
GetClientRect(arg2, &rect)
int32_t ecx_1 = arg1[0x15] + arg1[0x16]
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(rect.bottom - rect.top)
int32_t eax_6 = GetScrollPos(arg2, SB_VERT)
int32_t eax_9
int32_t edx_2
edx_2:eax_9 = sx.q(GetScrollPos(arg2, SB_HORZ) * arg1[0x15])
int32_t eax_11 = (eax_9 - edx_2) s>> 1
int32_t eax_12 = (*(*arg1 + 0x90))()
int32_t edi_2 = eax_6
int32_t var_88
int32_t* edx_4 = &var_88
var_88 = eax_12
int32_t hWnd_4 = edi_2 + divs.dp.d(edx:eax_4, ecx_1)
hWnd_2 = hWnd_4

if (eax_12 s>= hWnd_4)
    edx_4 = &hWnd_2

struct HDC__* hdc = *edx_4
PAINTSTRUCT paint
paint.hdc = hdc
int32_t hWnd

if (edi_2 s< hdc)
    int32_t hWnd_1 = 0
    hWnd_2 = 0
    
    do
        int32_t ecx_3 = hWnd_1 + edi_2
        int32_t edx_5 = *arg1
        int32_t eax_15 = (arg1[0x15] + arg1[0x16]) * hWnd_1
        var_88 = ecx_3
        int32_t eax_18 = (*(edx_5 + 0x98))(arg1[0x11], ecx_3, arg1[0x17] - eax_11, eax_15)
        
        if (arg1[0x17] s> 0)
            int32_t ecx_6 = arg1[0x16] + arg1[0x15]
            (*(*arg1 + 0xa0))(var_88, arg1[0x11], 0, arg1[0x17], hWnd_1 * ecx_6, 
                (hWnd_1 + 1) * ecx_6)
        
        int32_t ecx_9 = arg1[0x16] + arg1[0x15]
        int32_t eax_23
        int32_t edx_8
        edx_8:eax_23 = sx.q(arg1[0x15] * eax_18)
        int32_t hWnd_3 = hWnd_2
        hWnd = hWnd_3 + 1
        int32_t ebx_6 = var_88
        (*(*arg1 + 0xa0))(ebx_6, arg1[0x11], ((eax_23 - edx_8) s>> 1) - eax_11 + arg1[0x17], 
            rect.right, hWnd_3 * ecx_9, (hWnd_3 + 1) * ecx_9)
        int32_t edi_5 = arg1[0x16]
        
        if (edi_5 s> 0)
            int32_t ecx_11 = arg1[0x15]
            int32_t eax_28 = (ecx_11 + edi_5) * hWnd_2
            (*(*arg1 + 0xa0))(ebx_6, arg1[0x11], rect.left, rect.right, eax_28 + ecx_11, 
                eax_28 + ecx_11 + edi_5)
        
        hWnd_1 = hWnd
        edi_2 = eax_6
        hdc = paint.hdc
        hWnd_2 = hWnd_1
    while (hWnd_1 + edi_2 s< hdc)

RECT lprc
lprc.left = 0
lprc.top = (arg1[0x15] + arg1[0x16]) * (hdc - edi_2)
lprc.right = rect.right
lprc.bottom = rect.bottom
HGDIOBJ hbr = GetStockObject(WHITE_BRUSH)
FillRect(arg1[0x11], &lprc, hbr)
(*(*arg1 + 0x9c))(arg1[0x11])
BeginPaint(hWnd, &paint)
int32_t top = paint.rcPaint.top
int32_t left = paint.rcPaint.left
BitBlt(paint.hdc, left, top, paint.rcPaint.right - left, paint.rcPaint.bottom - top, arg1[0x11], 
    left, top, SRCCOPY)
EndPaint(hWnd, &paint)
sub_69a5bc(lprc.bottom ^ &var_90)
return 0
