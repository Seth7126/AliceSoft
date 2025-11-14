// 函数: sub_41aa40
// 地址: 0x41aa40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HWND var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
uint32_t cx = zx.d(arg3.w)
uint32_t cy = arg3 u>> 0x10
bool cond:0 = arg1[0x11] != 0
var_2c = arg2

if (not(cond:0))
    HDC eax_2 = GetDC(arg2)
    arg1[0x11] = CreateCompatibleDC(eax_2)
    ReleaseDC(arg2, eax_2)
    HGDIOBJ h = arg1[6]
    
    if (h != 0)
        arg1[0x10] = SelectObject(arg1[0x11], h)

if (arg1[0x12] != 0)
    SelectObject(arg1[0x11], arg1[0x13])
    DeleteObject(arg1[0x12])
    arg1[0x12] = 0

HDC eax_5 = GetDC(arg2)
arg1[0x12] = CreateCompatibleBitmap(eax_5, cx, cy)
ReleaseDC(arg2, eax_5)
HGDIOBJ eax_7 = SelectObject(arg1[0x11], arg1[0x12])
int32_t ecx_1 = arg1[0x16] + arg1[0x15]
arg1[0x13] = eax_7
int32_t eax_12
int32_t edx_1
edx_1:eax_12 = sx.q(arg1[0x15])
int32_t eax_17 = GetScrollPos(var_2c, SB_VERT)
SCROLLINFO lpsi
lpsi.cbSize = 0x1c
lpsi.fMask = 7
lpsi.nMin = 0
int32_t eax_19 = (*(*arg1 + 0x90))() - 1
lpsi.nPos = eax_17
HWND esi_4 = var_2c
lpsi.nMax = eax_19
lpsi.nPage = divs.dp.d(sx.q(cy), ecx_1)
SetScrollInfo(esi_4, SB_VERT, &lpsi, 1)
int32_t eax_20 = GetScrollPos(esi_4, SB_HORZ)
lpsi.cbSize = 0x1c
lpsi.fMask = 7
lpsi.nMin = 0
int32_t eax_23 = (*(*arg1 + 0x94))() - 1
lpsi.nPage = divs.dp.d(sx.q(cx), (eax_12 - edx_1) s>> 1)
lpsi.nMax = eax_23
lpsi.nPos = eax_20
SetScrollInfo(var_2c, SB_HORZ, &lpsi, 1)
sub_69a5bc(eax_1 ^ &var_2c)
return 0
