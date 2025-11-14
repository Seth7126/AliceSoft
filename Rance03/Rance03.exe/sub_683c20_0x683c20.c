// 函数: sub_683c20
// 地址: 0x683c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_44
int32_t eax_1 = __security_cookie ^ &var_44
void* ebx = data_75d4cc
int32_t* edi = *(arg1 + 0xe0)
int32_t var_34 = edi
int32_t* var_40
sub_42f3d0(ebx + 0x2a0, &var_40, &var_34)
int32_t* eax_2 = var_40
void* eax_3

if (eax_2 != *(ebx + 0x2a0))
    eax_3 = eax_2[5]

float xmm0

if (eax_2 == *(ebx + 0x2a0) || eax_3 == 0)
    xmm0 = (zx.o(0)).d
else
    xmm0 = *(eax_3 + 0xc)

var_40 = edi
var_34 = int.d(xmm0)
int32_t* var_3c
sub_42f3d0(ebx + 0x2a0, &var_3c, &var_40)
int32_t* eax_5 = var_3c
void* eax_6

if (eax_5 != *(ebx + 0x2a0))
    eax_6 = eax_5[5]

float xmm0_1

if (eax_5 == *(ebx + 0x2a0) || eax_6 == 0)
    xmm0_1 = (zx.o(0)).d
else
    xmm0_1 = *(eax_6 + 0x10)

void* esi = data_75d514
var_40 = int.d(xmm0_1)
int32_t eax_8

if (esi != 0)
    if (sub_5ed1f0(esi) != 0)
        eax_8 = (*(**(esi + 0x2c) + 0x18))()
    else
        eax_8 = 0
    
    esi = data_75d514
else
    eax_8 = 0

int32_t ebx_1 = int.d(_mm_cvtepi32_ps(zx.o(eax_8)) f* *(arg1 + 0x40))
var_3c = ebx_1
int32_t eax_11

if (esi != 0)
    if (sub_5ed1f0(esi) != 0)
        eax_11 = (*(**(esi + 0x2c) + 0x1c))()
    else
        eax_11 = 0
else
    eax_11 = 0

float xmm0_6 = _mm_cvtepi32_ps(zx.o(eax_11))
*(arg1 + 0x134) = ebx_1
int32_t edi_1 = int.d(xmm0_6 f* *(arg1 + 0x40))
*(arg1 + 0x118) = edi_1
sub_670600(arg1 + 0x120)
sub_670600(arg1 + 0x104)

if (((zx.d(*(arg1 + 0x1a0)) << 8 | zx.d(*(arg1 + 0x19c))) << 8 | zx.d(*(arg1 + 0x198)))
        != *(arg1 + 0x1b8))
    HGDIOBJ ho = *(arg1 + 0x194)
    
    if (ho != 0)
        DeleteObject(ho)
        *(arg1 + 0x194) = 0
    
    int32_t edx_1 = *(arg1 + 0x1b8)
    sub_652a80(arg1 + 0x190, zx.d(edx_1.b), zx.d((edx_1 u>> 8).b), zx.d((edx_1 u>> 0x10).b))

RECT lprc_1
lprc_1.left = 0
lprc_1.top = *(arg1 + 0x34)
int32_t eax_24 = GetScrollPos(*(arg1 + 0x124), *(arg1 + 0x12c))
lprc_1.right = var_3c - eax_24
lprc_1.bottom = edi_1 - GetScrollPos(*(arg1 + 0x108), *(arg1 + 0x110)) + *(arg1 + 0x34)
FillRect(*(arg1 + 0x90), &lprc_1, *(arg1 + 0x194))
float xmm0_8 = *(arg1 + 0x40)
xmm0_8 - 1f
int32_t eax_26
eax_26:1.b =
    (xmm0_8 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, 1f) ? 1 : 0) << 2 | (xmm0_8 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
void* edi_5

if (not(p_1))
    int32_t edi_6 = *(arg1 + 0xc0)
    int32_t eax_42 = GetScrollPos(*(arg1 + 0x108), *(arg1 + 0x110))
    int32_t eax_43 = GetScrollPos(*(arg1 + 0x124), *(arg1 + 0x12c))
    HDC hdc = *(arg1 + 0x90)
    int32_t cx = (*(*(arg1 + 0x9c) + 0x10))((*(*(arg1 + 0x9c) + 0x14))(edi_6, 0, 0, 0xcc0020))
    edi_5 = arg1
    BitBlt(hdc, var_34 - eax_43, var_40 - eax_42 + *(edi_5 + 0x34), cx)
else
    int32_t mode = SetStretchBltMode(*(arg1 + 0x90), COLORONCOLOR)
    int32_t edi_4 = *(arg1 + 0xc0)
    int32_t eax_27 = GetScrollPos(*(arg1 + 0x108), *(arg1 + 0x110))
    int32_t eax_28 = GetScrollPos(*(arg1 + 0x124), *(arg1 + 0x12c))
    int32_t edx_2 = *(arg1 + 0x9c)
    HDC hdcDest = *(arg1 + 0x90)
    var_3c = *(arg1 + 0x40)
    edi_5 = arg1
    int32_t eax_34 = int.d(_mm_cvtepi32_ps(zx.o((*(*(arg1 + 0x9c) + 0x14))(edi_4, 0, 0, 
        (*(*(arg1 + 0x9c) + 0x10))((*(edx_2 + 0x14))(0xcc0020))))) f* *(edi_5 + 0x40))
    int32_t eax_36 = (*(*(arg1 + 0x9c) + 0x10))(eax_34)
    int32_t* xmm1_1 = var_3c
    int32_t wDest = int.d(_mm_cvtepi32_ps(zx.o(eax_36)) f* xmm1_1)
    int32_t eax_37 = int.d(_mm_cvtepi32_ps(zx.o(var_40)) f* xmm1_1)
    StretchBlt(hdcDest, int.d(_mm_cvtepi32_ps(zx.o(var_34)) f* xmm1_1) - eax_28, 
        eax_37 - eax_27 + *(edi_5 + 0x34), wDest)
    SetStretchBltMode(*(edi_5 + 0x90), mode)

int32_t eax_52 = (*(*(edi_5 + 0x6c) + 0x10))()
int32_t right = lprc_1.right
RECT lprc

if (right s< eax_52)
    lprc.top = lprc_1.top
    lprc.left = right
    lprc.right = (*(*(edi_5 + 0x6c) + 0x10))()
    lprc.bottom = (*(*(edi_5 + 0x6c) + 0x14))()
    FillRect(*(edi_5 + 0x90), &lprc, *(edi_5 + 0x1a8))

int32_t result = (*(*(edi_5 + 0x6c) + 0x14))()
int32_t bottom = lprc_1.bottom

if (bottom s< result)
    lprc.left = lprc_1.left
    lprc.top = bottom
    lprc.right = (*(*(edi_5 + 0x6c) + 0x10))()
    lprc.bottom = (*(*(edi_5 + 0x6c) + 0x14))()
    result = FillRect(*(edi_5 + 0x90), &lprc, *(edi_5 + 0x1a8))

sub_69a5bc(eax_1 ^ &var_44)
return result
