// 函数: sub_48d740
// 地址: 0x48d740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x60) = int.d(_mm_cvtepi32_ps(zx.o(*(arg2 + 0x5c) * *(arg1 + 0x60))) * 0.00392156886f)
*(arg1 + 0x64) = int.d(_mm_cvtepi32_ps(zx.o(*(arg2 + 0x60) * *(arg1 + 0x64))) * 0.00392156886f)
*(arg1 + 0x68) = int.d(_mm_cvtepi32_ps(zx.o(*(arg2 + 0x64) * *(arg1 + 0x68))) * 0.00392156886f)
*(arg1 + 0x6c) += *(arg2 + 0x68)
*(arg1 + 0x70) += *(arg2 + 0x6c)
*(arg1 + 0x74) += *(arg2 + 0x70)
*(arg1 + 0x80) = int.d(_mm_cvtepi32_ps(zx.o(*(arg2 + 0x7c) * *(arg1 + 0x80))) * 0.00392156886f)
int32_t eax_15 = *(arg2 + 0x74)

if (eax_15 == 0)
    eax_15 = *(arg1 + 0x78)

*(arg1 + 0x78) = eax_15
int32_t eax_16

if (*(arg2 + 0x78) != 0)
    eax_16 = *(arg1 + 0x7c)
else
    eax_16 = 0

*(arg1 + 0x7c) = eax_16
bool eax_17

if (*(arg2 + 0x59) == 0)
    eax_17 = *(arg1 + 0x5d)
else
    eax_17 = *(arg1 + 0x5d) == 0

*(arg1 + 0x5d) = eax_17
bool eax_18

if (*(arg2 + 0x58) == 0)
    eax_18 = *(arg1 + 0x5c)
else
    eax_18 = *(arg1 + 0x5c) == 0

*(arg1 + 0x5c) = eax_18
float var_90
EnumC13Lines::EnumC13Lines(&var_90)
int32_t* eax_19
eax_19.b = *(arg2 + 0x59)
char temp1 = eax_19.b
bool cond:0 = temp1 == 0

if (temp1 != 0)
    goto label_48d842

float var_50

if (*(arg2 + 0x58) != 0)
    cond:0 = eax_19.b == 0
label_48d842:
    int32_t xmm2_1 = 0xbf800000
    int32_t xmm1_1
    
    xmm1_1 = cond:0 ? 0x3f800000 : -0x40800000
    
    if (*(arg2 + 0x58) == 0)
        xmm2_1 = 0x3f800000
    
    eax_19 = sub_47b440(&var_90, sub_48d630(&var_50, xmm1_1, xmm2_1))

int32_t ecx_3 = *(arg2 + 0x4c)

if (ecx_3 != 0 || *(arg2 + 0x50) != ecx_3)
    void* edx_1 = *(arg1 + 4)
    int32_t eax_22 = neg.d(*(arg2 + 0x50))
    float xmm3_2 = _mm_cvtepi32_ps(zx.o(eax_22))
    eax_19 = sub_47b440(&var_90, 
        sub_51e3b0(eax_22, edx_1, &var_50, _mm_cvtepi32_ps(zx.o(neg.d(ecx_3))), xmm3_2, 0x3f800000, 
            0x3f800000, 0f, 0f, 0f))

int32_t* eax_24 = sub_51e3b0(eax_19, *(arg1 + 4), &var_50, *(arg2 + 0x20), *(arg2 + 0x24), 
    *(arg2 + 0x28), *(arg2 + 0x2c), *(arg2 + 0x40), *(arg2 + 0x44), *(arg2 + 0x48))
sub_47b440(&var_90, eax_24)
float xmm4_1 = var_90
float xmm6 = *(arg1 + 0x24)
float xmm7 = *(arg1 + 0x34)
float xmm0_20 = xmm4_1 f* *(arg1 + 0xc)
float var_8c
float var_88
float var_84
var_50 = xmm4_1 f* *(arg1 + 8) + var_8c f* *(arg1 + 0x18) + var_88 f* *(arg1 + 0x28)
    + var_84 f* *(arg1 + 0x38)
float var_4c =
    var_8c f* *(arg1 + 0x1c) + xmm0_20 + var_88 f* *(arg1 + 0x2c) + var_84 f* *(arg1 + 0x3c)
float var_48 = var_8c f* *(arg1 + 0x20) + xmm4_1 f* *(arg1 + 0x10) + var_88 f* *(arg1 + 0x30)
    + var_84 f* *(arg1 + 0x40)
float var_44 = var_8c * xmm6 + xmm4_1 f* *(arg1 + 0x14) + var_88 * xmm7 + var_84 f* *(arg1 + 0x44)
float var_80
float var_7c
float var_78
float var_74
float xmm1_22 = var_80 f* *(arg1 + 8) + var_7c f* *(arg1 + 0x18) + var_78 f* *(arg1 + 0x28)
    + var_74 f* *(arg1 + 0x38)
float var_3c = var_7c f* *(arg1 + 0x1c) + var_80 f* *(arg1 + 0xc) + var_78 f* *(arg1 + 0x2c)
    + var_74 f* *(arg1 + 0x3c)
float var_38 = var_7c f* *(arg1 + 0x20) + var_80 f* *(arg1 + 0x10) + var_78 f* *(arg1 + 0x30)
    + var_74 f* *(arg1 + 0x40)
float var_34 = var_7c * xmm6 + var_80 f* *(arg1 + 0x14) + var_78 * xmm7 + var_74 f* *(arg1 + 0x44)
float var_70
float var_6c
float var_68
float var_64
float xmm1_37 = var_70 f* *(arg1 + 8) + var_6c f* *(arg1 + 0x18) + var_68 f* *(arg1 + 0x28)
    + var_64 f* *(arg1 + 0x38)
float var_2c = var_6c f* *(arg1 + 0x1c) + var_70 f* *(arg1 + 0xc) + var_68 f* *(arg1 + 0x2c)
    + var_64 f* *(arg1 + 0x3c)
float var_28 = var_6c f* *(arg1 + 0x20) + var_70 f* *(arg1 + 0x10) + var_68 f* *(arg1 + 0x30)
    + var_64 f* *(arg1 + 0x40)
float var_24 = var_6c * xmm6 + var_70 f* *(arg1 + 0x14) + var_68 * xmm7 + var_64 f* *(arg1 + 0x44)
float var_60
float var_5c
float var_58
float var_54
float xmm1_52 = var_60 f* *(arg1 + 8) + var_5c f* *(arg1 + 0x18) + var_58 f* *(arg1 + 0x28)
    + var_54 f* *(arg1 + 0x38)
float var_1c = var_5c f* *(arg1 + 0x1c) + var_60 f* *(arg1 + 0xc) + var_58 f* *(arg1 + 0x2c)
    + var_54 f* *(arg1 + 0x3c)
float xmm1_62 = var_5c f* *(arg1 + 0x20) + var_60 f* *(arg1 + 0x10) + var_58 f* *(arg1 + 0x30)
    + var_54 f* *(arg1 + 0x40)
float xmm5_19 = var_5c * xmm6 + var_60 f* *(arg1 + 0x14) + var_58 * xmm7 + var_54 f* *(arg1 + 0x44)
*(arg1 + 8) = var_50.o
float var_18 = xmm1_62
*(arg1 + 0x18) = xmm1_22.o
float var_14 = xmm5_19
*(arg1 + 0x28) = xmm1_37.o
*(arg1 + 0x38) = xmm1_52.o
*(arg1 + 0x48) = *(arg2 + 0x30)
*(arg1 + 0x4c) = *(arg2 + 0x34)
*(arg1 + 0x50) = *(arg2 + 0x38)
*(arg1 + 0x54) = *(arg2 + 0x3c)
*(arg1 + 0x58) = *(arg2 + 0x54)
return arg1
