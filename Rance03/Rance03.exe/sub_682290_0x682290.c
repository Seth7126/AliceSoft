// 函数: sub_682290
// 地址: 0x682290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_40
int32_t eax_1 = __security_cookie ^ &var_40
sub_6972e0(arg1 + 0x6c, 0xc8, 0xc8, 0xc8)
HWND hWnd = *(arg1 + 8)
var_40 = 0f
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(hWnd, &lpwndpl)
int32_t eax_3 = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x58)))
float xmm1_2 = _mm_cvtepi32_ps(zx.o(eax_3)) / xmm0_1
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
int32_t eax_5 = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x5c)))
float xmm1_5 = _mm_cvtepi32_ps(zx.o(eax_5)) / xmm0_3
float xmm0_4

if (xmm1_5 < xmm1_2)
    xmm0_4 = (zx.o(0)).d
else
    xmm0_4 = xmm1_2
    var_40 = xmm0_4

if (not(xmm1_2 < xmm1_5))
    xmm0_4 = xmm1_5
    var_40 = xmm0_4

if (not(xmm0_4 <= 1f))
    var_40 = 1f

HDC eax_6 = *(arg1 + 0x90)
int32_t esi = *(arg1 + 0xc0)
int32_t mode = SetStretchBltMode(eax_6, COLORONCOLOR)
uint128_t xmm0_5 = zx.o((*(*(arg1 + 0x9c) + 0x14))())
int32_t eax_8 = *(arg1 + 0x9c)
int32_t ebx = int.d(_mm_cvtepi32_ps(xmm0_5) * var_40)
uint128_t xmm0_8 = zx.o((*(eax_8 + 0x10))())
int32_t eax_10 = *(arg1 + 0x9c)
int32_t ebp = int.d(_mm_cvtepi32_ps(xmm0_8) * var_40)
int32_t eax_19 = int.d(_mm_cvtepi32_ps(zx.o((*(*(arg1 + 0x9c) + 0x10))(int.d(_mm_cvtepi32_ps(zx.o((
    *(*(arg1 + 0x9c) + 0x14))(esi, 0, 0, (*(*(arg1 + 0x9c) + 0x10))((*(eax_10 + 0x14))(0xcc0020)))))
    * var_40)))) * var_40)
int32_t eax_23
int32_t edx_1
edx_1:eax_23 = sx.q((*(*(arg1 + 0x6c) + 0x14))(eax_19) - ebx)
int32_t eax_29
int32_t edx_2
edx_2:eax_29 = sx.q((*(*(arg1 + 0x6c) + 0x10))((eax_23 - edx_1) s>> 1) - ebp)
StretchBlt(eax_6, (eax_29 - edx_2) s>> 1)
int32_t result = SetStretchBltMode(eax_6, mode)
sub_69a5bc(eax_1 ^ &var_40)
return result
