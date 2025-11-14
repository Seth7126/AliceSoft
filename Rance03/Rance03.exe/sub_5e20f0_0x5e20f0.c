// 函数: sub_5e20f0
// 地址: 0x5e20f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_60
int32_t var_4 = __security_cookie ^ &var_60
int32_t result
int32_t ecx_2

if (*(arg1 + 0x3c) == 0)
    ecx_2 = arg4
label_5e2167:
    float xmm1_1 = *(arg1 + 0x34)
    xmm1_1 - 1f
    result:1.b = (xmm1_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 1f) ? 1 : 0) << 2
        | (xmm1_1 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    int32_t eax_2
    
    if (not(p_2))
        eax_2 = arg2
    else
        eax_2 = int.d(_mm_cvtepi32_ps(zx.o(arg2)) * xmm1_1)
    
    LOGFONTA lplf
    lplf.lfWidth = 0
    lplf.lfHeight = neg.d(eax_2)
    lplf.lfEscapement = 0
    lplf.lfOrientation = 0
    lplf.lfWeight = ecx_2
    lplf.lfItalic = 0
    lplf.lfUnderline = 0
    lplf.lfStrikeOut = 0
    lplf.lfCharSet = 0x80
    lplf.lfOutPrecision = 0
    lplf.lfClipPrecision = 0
    lplf.lfQuality = 0
    lplf.lfPitchAndFamily = 1
    var_3c
    _strcpy_s(&var_3c, 0x20, arg3)
    HIMC eax_4 = ImmGetContext(*(arg1 + 0x6c))
    ImmSetCompositionFontA(eax_4, &lplf)
    ImmReleaseContext(*(arg1 + 0x6c), eax_4)
    *(arg1 + 0x40) = arg2
    void* ecx_3
    
    if (*arg3 != 0)
        char* ecx_4 = arg3
        char i
        
        do
            i = *ecx_4
            ecx_4 = &ecx_4[1]
        while (i != 0)
        ecx_3 = ecx_4 - &ecx_4[1]
    else
        ecx_3 = nullptr
    
    sub_402110(arg1 + 0x44, arg3, ecx_3)
    result = arg4
    *(arg1 + 0x5c) = result
    *(arg1 + 0x3c) = 1
else
    bool cond:0_1 = *(arg1 + 0x40) == arg2
    int32_t var_1c
    result = sub_4058a0(arg1 + 0x44, sub_401f60(&var_1c, arg3))
    char var_59_1 = result.b
    int32_t var_8
    
    if (var_8 u>= 0x10)
        j__free(var_1c)
        result.b = var_59_1
    
    ecx_2 = arg4
    
    if (cond:0_1 == 0 || result.b == 0 || *(arg1 + 0x5c) != ecx_2)
        goto label_5e2167
sub_69a5bc(var_4 ^ &var_60)
return result
