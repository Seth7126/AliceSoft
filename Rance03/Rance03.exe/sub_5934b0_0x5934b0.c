// 函数: sub_5934b0
// 地址: 0x5934b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm3 = *(arg1 + 0x9c)
float xmm7 = *(arg1 + 0x98)
float xmm4 = *(arg1 + 0xa0)
float xmm1_3 = xmm7 * xmm7 + xmm3 * xmm3 + xmm4 * xmm4
float xmm1_4 = _mm_sqrt_ss(xmm1_3, xmm1_3)
xmm1_4 f- 0
float eax
eax:1.b =
    (xmm1_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2 | (xmm1_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int64_t var_14
float xmm3_1
float xmm4_1
float xmm7_1

if (not(p_1))
    eax = *(arg1 + 0xa0)
    var_14 = *(arg1 + 0x98)
    xmm3_1 = var_14:4.d
    xmm7_1 = var_14.d
    xmm4_1 = eax
else
    float xmm0_4 = 1f / xmm1_4
    xmm7_1 = xmm7 * xmm0_4
    xmm3_1 = xmm3 * xmm0_4
    xmm4_1 = xmm4 * xmm0_4

float xmm1_5 = *(arg1 + 0x18c)
float xmm2_2 = *(arg1 + 0x194) * xmm3_1 - *(arg1 + 0x190) * xmm4_1
float xmm3_4 = xmm1_5 * xmm4_1 - *(arg1 + 0x194) * xmm7_1
var_14.d = xmm2_2
var_14:4.d = xmm3_4
float xmm4_4 = *(arg1 + 0x190) * xmm7_1 - xmm1_5 * xmm3_1
float xmm1_9 = xmm3_4 * xmm3_4 + xmm2_2 * xmm2_2 + xmm4_4 * xmm4_4
float xmm1_10 = _mm_sqrt_ss(xmm1_9, xmm1_9)
xmm1_10 f- 0
eax:1.b = (xmm1_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_10, 0f) ? 1 : 0) << 2
    | (xmm1_10 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
int64_t var_30
float xmm2_3
float xmm3_5
float xmm4_5

if (not(p_3))
    var_30 = var_14
    xmm3_5 = var_30:4.d
    xmm2_3 = var_30.d
    xmm4_5 = xmm4_4
else
    float xmm0_16 = 1f / xmm1_10
    xmm2_3 = xmm2_2 * xmm0_16
    xmm3_5 = xmm3_4 * xmm0_16
    xmm4_5 = xmm4_4 * xmm0_16

float xmm1_11 = *(arg1 + 0x194)
float xmm1_12 = *(arg1 + 0x18c)
float xmm6_2 = *(arg1 + 0x190) * xmm4_5 - xmm1_11 * xmm3_5
float xmm7_4 = xmm1_11 * xmm2_3 - xmm1_12 * xmm4_5
var_30.d = xmm6_2
var_30:4.d = xmm7_4
float xmm4_8 = xmm1_12 * xmm3_5 - *(arg1 + 0x190) * xmm2_3
float xmm1_16 = xmm7_4 * xmm7_4 + xmm6_2 * xmm6_2 + xmm4_8 * xmm4_8
float xmm1_17 = _mm_sqrt_ss(xmm1_16, xmm1_16)
xmm1_17 - 0f
eax:1.b = (xmm1_17 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_17, 0f) ? 1 : 0) << 2
    | (xmm1_17 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (not(p_5))
    var_14 = var_30
    float var_c_4 = xmm4_8
else
    float xmm0_28 = 1f / xmm1_17
    var_14.d = xmm6_2 * xmm0_28
    var_14:4.d = xmm7_4 * xmm0_28
    float var_c_3 = xmm4_8 * xmm0_28

struct sealengine::CSphereVolume::VTable* var_a4
sub_59af10(arg2, &var_a4)
float var_94
float xmm4_11 = var_94 * 1.02999997f
float var_4_1 = xmm4_11

if (not(0f < xmm4_11))
    xmm4_11 = 0.100000001f
    var_4_1 = 0.100000001f

float var_a0
var_30.d = var_a0 - *(arg1 + 0x18c) * xmm4_11
float var_9c
var_30:4.d = var_9c - *(arg1 + 0x190) * xmm4_11
float var_98
float var_28_3 = var_98 - *(arg1 + 0x194) * xmm4_11
float var_70
sub_5b0c00(&var_a0, &var_30, &var_70, &var_a0, &var_14)
float result = arg2
float xmm7_6 = 3.40282347e+38f
float xmm6_4 = -3.40282347e+38f
int32_t edi = *(result i+ 8)
void* ecx_2 = *(result i+ 4)
float var_68
float var_64
float var_58
float var_54
float var_48
float var_44
float var_38
float var_34

if (ecx_2 != edi)
    void* edx_1 = ecx_2 + 0xc
    
    do
        float xmm4_12 = *(edx_1 - 4)
        float xmm1_20 = *(edx_1 - 8)
        float xmm2_6 = *edx_1
        float xmm3_12 = xmm4_12 * var_58 + xmm1_20 * var_68 + xmm2_6 * var_48 + var_38
        float xmm4_16 = xmm4_12 * var_54 + xmm1_20 * var_64 + xmm2_6 * var_44 + var_34
        xmm4_16 - 1f
        result:1.b = (xmm4_16 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_16, 1f) ? 1 : 0) << 2
            | (xmm4_16 < 1f ? 1 : 0)
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            xmm4_16 - 0f
            result:1.b = (xmm4_16 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_16, 0f) ? 1 : 0) << 2
                | (xmm4_16 < 0f ? 1 : 0)
            bool p_9 = unimplemented  {test ah, 0x44}
            
            if (p_9)
                xmm3_12 = xmm3_12 * 1f / xmm4_16
        
        float xmm0_41 = *(edx_1 + 4)
        float xmm1_23 = xmm3_12 - xmm0_41
        float xmm0_42 = xmm0_41 + xmm3_12
        
        if (not(xmm7_6 <= xmm1_23))
            xmm7_6 = xmm1_23
        
        if (not(xmm0_42 <= xmm6_4))
            xmm6_4 = xmm0_42
        
        ecx_2 += 0x14
        edx_1 += 0x14
    while (ecx_2 != edi)

float xmm0_43 = 1f / var_4_1
float xmm2_8 = 1f / ((xmm6_4 - xmm7_6) * 1.10000002f)
float xmm6_7 = var_70
float var_6c
float xmm2_10 = var_6c * 0f
float xmm3_14 = var_68 * 0f
float xmm0_45 = var_64 * 0f
float xmm5_2 = xmm7_6 ^ (data_7094c0).d
float xmm6_8 = xmm6_7 * 0f
float xmm4_20 = xmm2_10 + xmm6_7 + xmm3_14 + xmm0_45
float xmm6_9 = xmm6_8 + xmm2_10
float xmm4_24 = xmm6_8 + var_6c + xmm3_14 + xmm0_45
float xmm6_11 = xmm6_9 + xmm3_14 + var_64
float xmm7_9 = xmm6_9 + var_68 + xmm5_2 * var_64
float var_5c
float xmm2_12 = var_5c * 0f
float xmm0_49 = var_54 * 0f
float xmm3_16 = var_58 * 0f
float var_60
float xmm6_13 = var_60 * 0f
float xmm4_28 = xmm2_12 + var_60 + xmm3_16 + xmm0_49
float xmm6_14 = xmm6_13 + xmm2_12
float xmm4_32 = xmm6_13 + var_5c + xmm3_16 + xmm0_49
float xmm6_16 = xmm6_14 + var_58 + xmm5_2 * var_54
float var_4c
float xmm2_14 = var_4c * 0f
float xmm3_18 = var_48 * 0f
float xmm0_54 = xmm6_14 + xmm3_16 + var_54
float xmm0_56 = var_44 * 0f
float var_50
float xmm4_36 = xmm2_14 + var_50 + xmm3_18 + xmm0_56
float xmm5_4 = var_50 * 0f
float xmm5_5 = xmm5_4 + xmm2_14
float var_3c
float xmm2_16 = var_3c * 0f
float xmm4_40 = xmm5_4 + var_4c + xmm3_18 + xmm0_56
float xmm5_7 = xmm5_5 + var_48 + xmm5_2 * var_44
float xmm3_20 = var_38 * 0f
float xmm0_61 = xmm5_5 + xmm3_18 + var_44
float xmm0_63 = var_34 * 0f
float var_40
float xmm4_42 = var_40 * 0f
float xmm1_31 = xmm2_16 + var_40 + xmm3_20 + xmm0_63
float xmm4_45 = xmm4_42 + var_3c + xmm3_20 + xmm0_63
float xmm1_33 = xmm4_42 + xmm2_16
float xmm1_35 = xmm1_33 + xmm3_20 + var_34
float xmm4_48 = xmm1_33 + var_38 + xmm5_2 * var_34
float xmm2_18 = xmm4_24 * 0f
float xmm3_22 = xmm7_9 * 0f
float xmm1_37 = xmm6_11 * 0f
var_70 = xmm4_20 * xmm0_43 + xmm2_18 + xmm3_22 + xmm1_37
float xmm0_72 = xmm4_20 * 0f
float var_6c_1 = xmm4_24 * xmm0_43 + xmm0_72 + xmm3_22 + xmm1_37
float xmm0_79 = xmm0_72 + xmm2_18
float var_68_1 = xmm2_8 * xmm7_9 + xmm0_79 + xmm1_37
float xmm3_24 = xmm6_16 * 0f
float xmm1_39 = xmm0_54 * 0f
float var_64_1 = xmm0_79 + xmm3_22 + xmm6_11
float xmm2_23 = xmm4_32 * 0f
float xmm0_90 = xmm4_28 * 0f
float var_5c_1 = xmm4_32 * xmm0_43 + xmm0_90 + xmm3_24 + xmm1_39
float xmm7_16 = xmm0_90 + xmm2_23
float var_58_1 = xmm2_8 * xmm6_16 + xmm7_16 + xmm1_39
float xmm3_26 = xmm5_7 * 0f
float xmm2_25 = xmm4_40 * 0f
float var_54_1 = xmm7_16 + xmm3_24 + xmm0_54
float xmm1_41 = xmm0_61 * 0f
float xmm0_101 = xmm4_36 * 0f
float var_4c_1 = xmm4_40 * xmm0_43 + xmm0_101 + xmm3_26 + xmm1_41
float xmm6_23 = xmm0_101 + xmm2_25
float var_48_1 = xmm2_8 * xmm5_7 + xmm6_23 + xmm1_41
float var_44_1 = xmm6_23 + xmm3_26 + xmm0_61
float xmm2_27 = xmm4_45 * 0f
float xmm3_28 = xmm4_48 * 0f
float xmm1_43 = xmm1_35 * 0f
float xmm7_21 = xmm1_31 * 0f
float xmm7_22 = xmm7_21 + xmm2_27
float var_3c_1 = xmm4_45 * xmm0_43 + xmm7_21 + xmm3_28 + xmm1_43
float var_38_1 = xmm2_8 * xmm4_48 + xmm7_22 + xmm1_43
float var_34_1 = xmm7_22 + xmm3_28 + xmm1_35
*(arg1 + 0x1bc) = var_70.o
*(arg1 + 0x1cc) = (xmm4_28 * xmm0_43 + xmm2_23 + xmm3_24 + xmm1_39).o
*(arg1 + 0x1dc) = (xmm4_36 * xmm0_43 + xmm2_25 + xmm3_26 + xmm1_41).o
*(arg1 + 0x1ec) = (xmm1_31 * xmm0_43 + xmm2_27 + xmm3_28 + xmm1_43).o
__builtin_memcpy(arg1 + 0x1fc, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x40)
float xmm1_44 = *(arg1 + 0x1bc)
float xmm4_49 = *(arg1 + 0x1c0)
float xmm3_29 = *(arg1 + 0x1c4)
float xmm2_28 = *(arg1 + 0x1c8)
float xmm5_17 = xmm1_44 f* *(arg1 + 0x200) + xmm4_49 f* *(arg1 + 0x210) + xmm3_29 f* *(arg1 + 0x220)
    + xmm2_28 f* *(arg1 + 0x230)
float xmm7_29 = *(arg1 + 0x1fc) * xmm1_44 + *(arg1 + 0x20c) * xmm4_49 + *(arg1 + 0x21c) * xmm3_29
    + *(arg1 + 0x22c) * xmm2_28
float xmm6_31 = *(arg1 + 0x204) * xmm1_44 + *(arg1 + 0x214) * xmm4_49 + *(arg1 + 0x224) * xmm3_29
    + *(arg1 + 0x234) * xmm2_28
float xmm5_22 = *(arg1 + 0x208) * xmm1_44 + *(arg1 + 0x218) * xmm4_49 + *(arg1 + 0x228) * xmm3_29
    + *(arg1 + 0x238) * xmm2_28
float xmm3_30 = *(arg1 + 0x1d8)
float xmm0_150 = *(arg1 + 0x160) * xmm5_17
var_70 = *(arg1 + 0x14c) * xmm7_29 + *(arg1 + 0x15c) * xmm5_17 + *(arg1 + 0x16c) * xmm6_31
    + *(arg1 + 0x17c) * xmm5_22
float var_6c_2 =
    *(arg1 + 0x150) * xmm7_29 + xmm0_150 + *(arg1 + 0x170) * xmm6_31 + *(arg1 + 0x180) * xmm5_22
float xmm2_30 = *(arg1 + 0x1d0)
float var_68_2 = *(arg1 + 0x154) * xmm7_29 + *(arg1 + 0x164) * xmm5_17 + *(arg1 + 0x174) * xmm6_31
    + *(arg1 + 0x184) * xmm5_22
float xmm7_30 = *(arg1 + 0x1cc)
float var_64_2 = *(arg1 + 0x158) * xmm7_29 + *(arg1 + 0x168) * xmm5_17 + *(arg1 + 0x178) * xmm6_31
    + *(arg1 + 0x188) * xmm5_22
float xmm1_65 = *(arg1 + 0x1d4)
float xmm6_36 = xmm7_30 f* *(arg1 + 0x200) + xmm2_30 f* *(arg1 + 0x210) + xmm1_65 f* *(arg1 + 0x220)
    + xmm3_30 f* *(arg1 + 0x230)
float xmm5_27 = xmm7_30 f* *(arg1 + 0x1fc) + xmm2_30 f* *(arg1 + 0x20c) + xmm1_65 f* *(arg1 + 0x21c)
    + xmm3_30 f* *(arg1 + 0x22c)
float xmm4_54 = xmm7_30 f* *(arg1 + 0x204) + xmm2_30 f* *(arg1 + 0x214) + xmm1_65 f* *(arg1 + 0x224)
    + xmm3_30 f* *(arg1 + 0x234)
float xmm2_32 = *(arg1 + 0x1e0)
float xmm7_34 = xmm7_30 f* *(arg1 + 0x208) + xmm2_30 f* *(arg1 + 0x218) + xmm1_65 f* *(arg1 + 0x228)
    + xmm3_30 f* *(arg1 + 0x238)
float xmm3_32 = *(arg1 + 0x1e8)
float xmm1_71 = xmm5_27 f* *(arg1 + 0x14c) + xmm6_36 f* *(arg1 + 0x15c) + xmm4_54 f* *(arg1 + 0x16c)
    + xmm7_34 f* *(arg1 + 0x17c)
float var_5c_2 = xmm5_27 f* *(arg1 + 0x150) + xmm6_36 f* *(arg1 + 0x160)
    + xmm4_54 f* *(arg1 + 0x170) + xmm7_34 f* *(arg1 + 0x180)
float xmm7_36 = *(arg1 + 0x1dc)
float var_58_2 = xmm5_27 f* *(arg1 + 0x154) + xmm6_36 f* *(arg1 + 0x164)
    + xmm4_54 f* *(arg1 + 0x174) + xmm7_34 f* *(arg1 + 0x184)
float xmm1_82 = *(arg1 + 0x1e4)
float var_54_2 = xmm5_27 f* *(arg1 + 0x158) + xmm6_36 f* *(arg1 + 0x168)
    + xmm4_54 f* *(arg1 + 0x178) + xmm7_34 f* *(arg1 + 0x188)
float xmm6_42 = xmm7_36 f* *(arg1 + 0x200) + xmm2_32 f* *(arg1 + 0x210) + xmm1_82 f* *(arg1 + 0x220)
    + xmm3_32 f* *(arg1 + 0x230)
float xmm5_36 = xmm7_36 f* *(arg1 + 0x1fc) + xmm2_32 f* *(arg1 + 0x20c) + xmm1_82 f* *(arg1 + 0x21c)
    + xmm3_32 f* *(arg1 + 0x22c)
float xmm2_34 = *(arg1 + 0x1f0)
float xmm4_60 = xmm7_36 f* *(arg1 + 0x204) + xmm2_32 f* *(arg1 + 0x214) + xmm1_82 f* *(arg1 + 0x224)
    + xmm3_32 f* *(arg1 + 0x234)
float xmm7_40 = xmm7_36 f* *(arg1 + 0x208) + xmm2_32 f* *(arg1 + 0x218) + xmm1_82 f* *(arg1 + 0x228)
    + xmm3_32 f* *(arg1 + 0x238)
float xmm3_34 = *(arg1 + 0x1f8)
float xmm1_88 = xmm5_36 f* *(arg1 + 0x14c) + xmm6_42 f* *(arg1 + 0x15c) + xmm4_60 f* *(arg1 + 0x16c)
    + xmm7_40 f* *(arg1 + 0x17c)
float var_4c_2 = xmm5_36 f* *(arg1 + 0x150) + xmm6_42 f* *(arg1 + 0x160)
    + xmm4_60 f* *(arg1 + 0x170) + xmm7_40 f* *(arg1 + 0x180)
float xmm7_42 = *(arg1 + 0x1ec)
float var_48_2 = xmm5_36 f* *(arg1 + 0x154) + xmm6_42 f* *(arg1 + 0x164)
    + xmm4_60 f* *(arg1 + 0x174) + xmm7_40 f* *(arg1 + 0x184)
float xmm1_99 = *(arg1 + 0x1f4)
float var_44_2 = xmm5_36 f* *(arg1 + 0x158) + xmm6_42 f* *(arg1 + 0x168)
    + xmm4_60 f* *(arg1 + 0x178) + xmm7_40 f* *(arg1 + 0x188)
float xmm6_48 = xmm7_42 f* *(arg1 + 0x200) + xmm2_34 f* *(arg1 + 0x210) + xmm1_99 f* *(arg1 + 0x220)
    + xmm3_34 f* *(arg1 + 0x230)
float xmm5_45 = xmm7_42 f* *(arg1 + 0x1fc) + xmm2_34 f* *(arg1 + 0x20c) + xmm1_99 f* *(arg1 + 0x21c)
    + xmm3_34 f* *(arg1 + 0x22c)
float xmm4_66 = xmm7_42 f* *(arg1 + 0x204) + xmm2_34 f* *(arg1 + 0x214) + xmm1_99 f* *(arg1 + 0x224)
    + xmm3_34 f* *(arg1 + 0x234)
float xmm7_46 = xmm7_42 f* *(arg1 + 0x208) + xmm2_34 f* *(arg1 + 0x218) + xmm1_99 f* *(arg1 + 0x228)
    + xmm3_34 f* *(arg1 + 0x238)
float xmm1_105 = xmm5_45 f* *(arg1 + 0x14c) + xmm6_48 f* *(arg1 + 0x15c)
    + xmm4_66 f* *(arg1 + 0x16c) + *(arg1 + 0x17c) * xmm7_46
float var_3c_2 = xmm5_45 f* *(arg1 + 0x150) + xmm6_48 f* *(arg1 + 0x160)
    + xmm4_66 f* *(arg1 + 0x170) + *(arg1 + 0x180) * xmm7_46
float xmm5_49 = xmm5_45 f* *(arg1 + 0x158) + xmm6_48 f* *(arg1 + 0x168) + xmm4_66 f* *(arg1 + 0x178)
    + *(arg1 + 0x188) * xmm7_46
float var_38_2 = xmm5_45 f* *(arg1 + 0x154) + xmm6_48 f* *(arg1 + 0x164)
    + xmm4_66 f* *(arg1 + 0x174) + *(arg1 + 0x184) * xmm7_46
*(arg1 + 0x23c) = var_70.o
float var_34_2 = xmm5_49
*(arg1 + 0x24c) = xmm1_71.o
*(arg1 + 0x25c) = xmm1_88.o
*(arg1 + 0x26c) = xmm1_105.o
return result
