// 函数: sub_683990
// 地址: 0x683990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_24
int32_t eax_1 = __security_cookie ^ &var_24
RECT lprc
lprc.left = 0
var_24 = arg1
lprc.top = *(arg1 + 0x34)
int32_t eax_3 = GetScrollPos(*(arg1 + 0x124), *(arg1 + 0x12c))
int32_t eax_4 = (*(*(arg1 + 0x9c) + 0x10))()
enum SCROLLBAR_CONSTANTS nBar = *(arg1 + 0x110)
HWND hWnd = *(arg1 + 0x108)
lprc.right = int.d(_mm_cvtepi32_ps(zx.o(eax_4)) f* *(arg1 + 0x40)) - eax_3
int32_t eax_7 = GetScrollPos(hWnd, nBar)
int32_t eax_8 = (*(*(arg1 + 0x9c) + 0x14))()
HBRUSH hbr = *(arg1 + 0x194)
lprc.bottom = int.d(_mm_cvtepi32_ps(zx.o(eax_8)) f* *(arg1 + 0x40)) - eax_7
FillRect(*(arg1 + 0x90), &lprc, hbr)
*(arg1 + 0x134) = int.d(_mm_cvtepi32_ps(zx.o((*(*(arg1 + 0x9c) + 0x10))())) f* *(arg1 + 0x40))
*(arg1 + 0x118) = int.d(_mm_cvtepi32_ps(zx.o((*(*(arg1 + 0x9c) + 0x14))())) f* *(arg1 + 0x40))
sub_670600(arg1 + 0x120)
sub_670600(arg1 + 0x104)
float xmm0_12 = *(arg1 + 0x40)
xmm0_12 - 1f
int32_t eax_15
eax_15:1.b = (xmm0_12 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, 1f) ? 1 : 0) << 2
    | (xmm0_12 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    int32_t eax_29 = GetScrollPos(*(arg1 + 0x108), *(arg1 + 0x110))
    int32_t eax_30 = GetScrollPos(*(arg1 + 0x124), *(arg1 + 0x12c))
    HDC hdc = *(arg1 + 0x90)
    int32_t cx = (*(*(arg1 + 0x9c) + 0x10))((*(*(arg1 + 0x9c) + 0x14))(*(arg1 + 0xc0), eax_30, 
        eax_29, 0xcc0020))
    BOOL eax_34 = BitBlt(hdc, 0, *(arg1 + 0x34), cx)
    sub_69a5bc(eax_1 ^ &var_24)
    return eax_34

int32_t mode = SetStretchBltMode(*(arg1 + 0x90), COLORONCOLOR)
int32_t eax_16 = GetScrollPos(*(arg1 + 0x108), *(arg1 + 0x110))
int32_t eax_17 = GetScrollPos(*(arg1 + 0x124), *(arg1 + 0x12c))
void* ecx_8 = var_24
int32_t ebx_1 = *(arg1 + 0xc0)
HDC hdcDest = *(arg1 + 0x90)
float xmm0_13 = 1f f/ *(ecx_8 + 0x40)
int32_t eax_20 = (*(*(var_24 + 0x9c) + 0x10))((*(*(ecx_8 + 0x9c) + 0x14))(0xcc0020))
int32_t eax_21 = int.d(_mm_cvtepi32_ps(zx.o(eax_16)) * xmm0_13)
void* esi_3 = var_24
int32_t wDest = int.d(_mm_cvtepi32_ps(zx.o((*(*(esi_3 + 0x9c) + 0x10))(int.d(_mm_cvtepi32_ps(zx.o((
    *(*(esi_3 + 0x9c) + 0x14))(ebx_1, int.d(_mm_cvtepi32_ps(zx.o(eax_17)) * xmm0_13), eax_21, eax_20)))
    f* *(esi_3 + 0x40))))) f* *(esi_3 + 0x40))
StretchBlt(hdcDest, 0, *(esi_3 + 0x34), wDest)
int32_t eax_28 = SetStretchBltMode(*(esi_3 + 0x90), mode)
sub_69a5bc(eax_1 ^ &var_24)
return eax_28
