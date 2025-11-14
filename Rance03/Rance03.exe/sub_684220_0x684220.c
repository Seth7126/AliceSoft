// 函数: sub_684220
// 地址: 0x684220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = *(arg1 + 0x5c)
int32_t eax = *(arg1 + 0x58)
HWND hWnd = *(arg1 + 8)
sub_697220(arg1 + 0x9c)

if (hWnd == 0)
    hWnd = GetDesktopWindow()

*(arg1 + 0xa4) = eax
*(arg1 + 0xa8) = ebp
*(arg1 + 0xac) = 0x20
*(arg1 + 0xb0) = 4
*(arg1 + 0xb4) = ((eax << 2) + 0xf) & 0xfffffff0
int32_t* pbmi_1
sub_448e90(&pbmi_1, 0x28)
*(arg1 + 0xb0)
int32_t* pbmi = pbmi_1
pbmi[1] = divs.dp.d(sx.q(*(arg1 + 0xb4)), *(arg1 + 0xb0))
*pbmi = 0x28
pbmi[2] = 0xffffffff - ebp
pbmi[3] = 0x200001
__builtin_memset(&pbmi[4], 0, 0x18)
HDC eax_7 = GetDC(hWnd)
HBITMAP eax_8 = CreateDIBSection(eax_7, pbmi, DIB_RGB_COLORS, arg1 + 0xbc, nullptr, 0)
*(arg1 + 0xb8) = eax_8

if (eax_8 != 0)
    HDC hdc = CreateCompatibleDC(eax_7)
    *(arg1 + 0xc0) = hdc
    
    if (hdc != 0)
        *(arg1 + 0xc4) = SelectObject(hdc, *(arg1 + 0xb8))
        ReleaseDC(hWnd, eax_7)
        *(arg1 + 0xc8) = hWnd
        *(arg1 + 0xa0) = 1
    else
        ReleaseDC(hWnd, eax_7)
else
    ReleaseDC(hWnd, eax_7)

j__free(pbmi)
sub_6972e0(arg1 + 0x9c, *(arg1 + 0x1b8), *(arg1 + 0x1b9), *(arg1 + 0x1ba))
void* eax_13 = *(arg1 + 0x3c)

if (eax_13 == 1)
    void* edx_2 = *(arg1 + 0x5c)
    void* eax_14 = *(arg1 + 0x58)
    void* var_38_1 = edx_2
    void* var_3c_1 = eax_14
    return sub_67d520(arg1 + 0x48, (*(*(arg1 + 0x9c) + 8))(0, 0), eax_14, edx_2)

if (eax_13 == 2)
    void* ecx_8 = *(arg1 + 0x5c)
    void* eax_18 = *(arg1 + 0x58)
    void* var_38_2 = ecx_8
    void* var_3c_2 = eax_18
    int32_t eax_21
    int80_t st0
    st0, eax_21 = sub_67d380(arg1 + 0x48, (*(*(arg1 + 0x9c) + 8))(0, 0), eax_18, ecx_8)
    return eax_21

if (eax_13 != 3)
    return eax_13

void* ecx_11 = *(arg1 + 0x5c)
int32_t eax_22 = *(arg1 + 0x58)
void* var_38_3 = ecx_11
int32_t var_3c_3 = eax_22
return sub_67d680(arg1 + 0x48, (*(*(arg1 + 0x9c) + 8))(0, 0), eax_22, ecx_11)
