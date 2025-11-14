// 函数: sub_684400
// 地址: 0x684400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0ef0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HDC hdc = *(arg1 + 0x90)
COLORREF color = SetBkColor(hdc, 0x808080)
HGDIOBJ h = SelectObject(hdc, *(arg1 + 0x168))
COLORREF color_1 = SetTextColor(hdc, 0)
struct dpparts::CBrush::VTable* const var_64 = &dpparts::CBrush::`vftable'
int32_t var_4 = 0
int32_t var_5c = 0x80
int32_t var_58 = 0x80
int32_t var_54 = 0x80
HBRUSH ebp = CreateSolidBrush(0x808080)
RECT lprc
lprc.left = 0
HBRUSH var_60 = ebp
lprc.top = 0
lprc.right = (*(*(arg1 + 0x6c) + 0x10))(eax_4)
lprc.bottom = *(arg1 + 0x34)
FillRect(*(arg1 + 0x90), &lprc, ebp)

if (ebp != 0)
    DeleteObject(ebp)
    ebp = nullptr
    int32_t var_60_1 = 0

int32_t ebx_2 = *(arg1 + 0xf4) - *(arg1 + 0x2c) - *(arg1 + 0x34)
int32_t edi_1 = *(arg1 + 0xf0) + GetScrollPos(*(arg1 + 0x124), *(arg1 + 0x12c))
int32_t eax_10
int32_t* ecx_1
eax_10, ecx_1 = GetScrollPos(*(arg1 + 0x108), *(arg1 + 0x110))
float xmm0_1 = _mm_cvtepi32_ps(zx.o(edi_1))
float xmm1 = 1f f/ *(arg1 + 0x40)
int32_t esi_1 = int.d(xmm0_1 * xmm1)
int32_t edi_2 = int.d(_mm_cvtepi32_ps(zx.o(ebx_2 + eax_10)) * xmm1)

if (*(arg1 + 0x38) == 0)
    int32_t eax_12 = *(arg1 + 0xe0)
    
    if (eax_12 s>= 0)
        int32_t var_98_5 = eax_12
        int32_t eax_13
        int32_t* ecx_2
        eax_13, ecx_2 = sub_680e30(ecx_1)
        int32_t var_98_6 = *(arg1 + 0xe0)
        esi_1 -= eax_13
        edi_2 -= sub_680e80(ecx_2)

char var_7c
char var_7b
char var_7a
char var_79
char eax_15

if (esi_1 s>= 0 && edi_2 s>= 0)
    var_7b = 0
    var_7c = 0
    var_7a = 0
    var_79 = 0
    eax_15 = sub_67d310(arg1 + 0x48, esi_1, edi_2, &var_7a, &var_7c, &var_7b, &var_79)

HDC hdc_1

if (esi_1 s< 0 || edi_2 s< 0 || eax_15 == 0)
    hdc_1 = hdc
else
    uint32_t var_98_8 = zx.d(var_79)
    uint32_t var_9c_7 = zx.d(var_7a)
    uint32_t var_a0_2 = zx.d(var_7c)
    uint32_t var_a4_2 = zx.d(var_7b)
    int32_t* lpString_3
    sub_4691f0(&lpString_3, " [R:%3d] [G:%3d] [B:%3d] [A:%3d]")
    var_4.b = 1
    var_9c_7.q = _mm_cvtps_pd(*(arg1 + 0x40))
    int32_t var_a0_3 = *(arg1 + 0x5c)
    int32_t var_a4_3 = edi_2
    int32_t var_a8_2 = *(arg1 + 0x58)
    int32_t var_ac_3 = esi_1
    int32_t* lpString_2
    sub_4691f0(&lpString_2, " [X:%4d/%4d] [Y:%4d/%4d] [Zoom:%2.02f]")
    hdc_1 = hdc
    int32_t* lpString = &lpString_3
    int32_t var_14
    
    if (var_14 u>= 0x10)
        lpString = lpString_3
    
    int32_t c_1
    TextOutA(hdc_1, 0, 1, lpString, c_1)
    int32_t* lpString_1 = &lpString_2
    int32_t var_3c
    
    if (var_3c u>= 0x10)
        lpString_1 = lpString_2
    
    int32_t c
    TextOutA(hdc_1, 0, *(arg1 + 0x16c) + 1, lpString_1, c)
    
    if (var_3c u>= 0x10)
        j__free(lpString_2)
    
    int32_t var_3c_1 = 0xf
    int32_t var_40 = 0
    lpString_2.b = 0
    
    if (var_14 u>= 0x10)
        j__free(lpString_3)

SetTextColor(hdc_1, color_1)
SelectObject(hdc_1, h)
COLORREF result = SetBkColor(hdc_1, color)

if (ebp != 0)
    result = DeleteObject(ebp)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_80)
return result
