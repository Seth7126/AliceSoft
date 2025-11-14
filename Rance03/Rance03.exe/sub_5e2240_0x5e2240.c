// 函数: sub_5e2240
// 地址: 0x5e2240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

COMPOSITIONFORM compForm
BOOL result = __security_cookie ^ &compForm
BOOL result_1 = result

if (*(arg1 + 0x60) == 0 || *(arg1 + 0x64) != arg2 || *(arg1 + 0x68) != arg3)
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(arg2))
    compForm.dwStyle = 2
    HWND param0 = *(arg1 + 0x6c)
    int32_t eax_2 = int.d(xmm0_2 f* *(arg1 + 0x34)) + *(arg1 + 0x2c)
    float xmm0_5 = _mm_cvtepi32_ps(zx.o(arg3))
    compForm.ptCurrentPos.x = eax_2
    compForm.ptCurrentPos.y = int.d(xmm0_5 f* *(arg1 + 0x38)) + *(arg1 + 0x30)
    HIMC eax_5 = ImmGetContext(param0)
    ImmSetCompositionWindow(eax_5, &compForm)
    result = ImmReleaseContext(*(arg1 + 0x6c), eax_5)
    *(arg1 + 0x64) = arg2
    *(arg1 + 0x68) = arg3
    *(arg1 + 0x60) = 1

sub_69a5bc(result_1 ^ &compForm)
return result
