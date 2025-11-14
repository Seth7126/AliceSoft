// 函数: sub_588450
// 地址: 0x588450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sealengine::CViewPyramid::VTable* var_58
sub_59d420(&var_58, arg1 + 0x24, arg1 + 0xf0)
void* var_54
int32_t var_50
int32_t* result

if (var_54 == var_50)
label_5884e2:
    void var_48
    int32_t* eax_1 = sub_52d450(arg1 + 0x24, &var_48)
    float xmm6_1 = *(arg1 + 0x100)
    float xmm4_2 = eax_1[1]
    float xmm1_6 = *eax_1
    float xmm3_2 = eax_1[2]
    float xmm2_1 = eax_1[3]
    float xmm7_1 = *(arg1 + 0x110)
    float xmm4_3 = *(arg1 + 0x130)
    float xmm5_12 = *(arg1 + 0x120)
    float xmm3_3 = eax_1[7]
    float xmm2_2 = eax_1[5]
    float xmm1_11 = eax_1[6]
    float xmm5_13 = eax_1[8]
    float xmm2_14 = eax_1[9]
    float xmm1_13 = eax_1[0xa]
    float xmm6_2 = eax_1[0xc]
    float xmm3_5 = eax_1[0xb]
    float xmm2_16 = eax_1[0xd]
    float xmm1_15 = eax_1[0xe]
    float xmm3_7 = eax_1[0xf]
    float xmm0_70 = arg2[1]
    float xmm1_17 = *arg2
    float xmm2_18 = arg2[2]
    float xmm7_8 = (eax_1[4] f* *(arg1 + 0xf4) + xmm2_2 f* *(arg1 + 0x104)
        + xmm1_11 f* *(arg1 + 0x114) + xmm3_3 f* *(arg1 + 0x124)) * xmm0_70 + (*(arg1 + 0xf4) * xmm1_6
        + *(arg1 + 0x104) * xmm4_2 + *(arg1 + 0x114) * xmm3_2 + *(arg1 + 0x124) * xmm2_1) * xmm1_17
    float xmm3_16 = xmm7_8 + (xmm5_13 f* *(arg1 + 0xf4) + xmm2_14 f* *(arg1 + 0x104)
        + xmm1_13 f* *(arg1 + 0x114) + xmm3_5 f* *(arg1 + 0x124)) * xmm2_18 + xmm6_2 f* *(arg1 + 0xf4)
        + xmm2_16 f* *(arg1 + 0x104) + xmm1_15 f* *(arg1 + 0x114) + xmm3_7 f* *(arg1 + 0x124)
    float var_7c_4 = xmm3_16
    float xmm5_25 = (eax_1[4] f* *(arg1 + 0xf8) + eax_1[5] f* *(arg1 + 0x108)
        + xmm1_11 f* *(arg1 + 0x118) + xmm3_3 f* *(arg1 + 0x128)) * xmm0_70 + (*(arg1 + 0xf8) * xmm1_6
        + *(arg1 + 0x108) * xmm4_2 + *(arg1 + 0x118) * xmm3_2 + *(arg1 + 0x128) * xmm2_1) * xmm1_17
    float xmm3_21 =
        (eax_1[4] f* xmm6_1 + xmm2_2 * xmm7_1 + xmm1_11 * xmm5_12 + xmm3_3 * xmm4_3) * xmm0_70
        + (xmm6_1 * xmm1_6 + xmm7_1 * xmm4_2 + xmm5_12 * xmm3_2 + xmm4_3 * xmm2_1) * xmm1_17
    float xmm5_27 = xmm5_25 + (xmm5_13 f* *(arg1 + 0xf8) + xmm2_14 f* *(arg1 + 0x108)
        + xmm1_13 f* *(arg1 + 0x118) + xmm3_5 f* *(arg1 + 0x128)) * xmm2_18 + xmm6_2 f* *(arg1 + 0xf8)
        + xmm2_16 f* *(arg1 + 0x108) + xmm1_15 f* *(arg1 + 0x118) + xmm3_7 f* *(arg1 + 0x128)
    float xmm3_23 = xmm3_21 + (xmm5_13 * xmm6_1 + xmm2_14 f* *(arg1 + 0x110)
        + xmm1_13 f* *(arg1 + 0x120) + xmm3_5 f* *(arg1 + 0x130)) * xmm2_18 + xmm6_2 f* *(arg1 + 0x100)
        + xmm2_16 f* *(arg1 + 0x110) + xmm1_15 f* *(arg1 + 0x120) + xmm3_7 f* *(arg1 + 0x130)
    xmm3_23 - 1f
    result:1.b = (xmm3_23 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_23, 1f) ? 1 : 0) << 2
        | (xmm3_23 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm3_23 f- 0
        result:1.b = (xmm3_23 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_23, 0f) ? 1 : 0) << 2
            | (xmm3_23 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm1_18 = 1f / xmm3_23
            xmm5_27 = xmm1_18 * xmm5_27
            var_7c_4 = xmm1_18 * var_7c_4
    
    if (-1f > var_7c_4 || var_7c_4 >= 1f || -1f > xmm5_27 || xmm5_27 >= 1f)
        result.b = 0
    else
        int32_t eax_2 = int.d((var_7c_4 + 1f) * 0.5f * _mm_cvtepi32_ps(zx.o(*(arg1 + 0x160))))
        *arg3 = eax_2
        
        if (eax_2 s>= 0)
            int32_t edx_2 = *(arg1 + 0x160)
            
            if (eax_2 s>= edx_2)
                *arg3 = edx_2 - 1
        else
            *arg3 = 0
        
        result = int.d((0.5f - xmm5_27 * 0.5f) * _mm_cvtepi32_ps(zx.o(*(arg1 + 0x164))))
        *arg4 = result
        
        if (result s>= 0)
            void* edx_3 = *(arg1 + 0x164)
            
            if (result s>= edx_3)
                *arg4 = edx_3 - 1
            
            result.b = 1
        else
            *arg4 = nullptr
            result.b = 1
else
    int32_t* edx_1 = var_54 + 8
    
    while (not(edx_1[-1] f* arg2[1] + edx_1[-2] f* *arg2 + *edx_1 f* arg2[2] f+ edx_1[1] f< 0))
        edx_1 = &edx_1[4]
        
        if (&edx_1[-2] == var_50)
            goto label_5884e2
    
    result.b = 0

var_58 = &sealengine::CViewPyramid::`vftable'

if (var_54 != 0)
    j__free(var_54)
    result.b = result.b

return result
