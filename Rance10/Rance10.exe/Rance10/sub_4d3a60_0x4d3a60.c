// 函数: sub_4d3a60
// 地址: 0x4d3a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float ebp = arg2
int64_t* edi = arg1
int32_t* esi = *(ebp i+ 8)
float xmm3 = *(edi + 4)
float xmm5 = edi[1].d
float xmm6 = *edi
float xmm2_1 = xmm3 + 10f
*esi += 1
float xmm1_1 = xmm5 + 10f
float xmm4_1 = xmm6 + 10f
float xmm7_2 = xmm3 * xmm1_1 - xmm5 * xmm2_1
float xmm6_2 = xmm6 * xmm2_1 - xmm3 * xmm4_1
float xmm5_2 = xmm5 * xmm4_1 - xmm6 * xmm1_1

if (*esi s>= 0x209)
    sub_4a7690(esi)
    *esi = 0

float xmm2_2 = *(edi + 4)
int32_t ecx_3 = esi[*esi + 1] u% 0x168
float xmm4_2 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ecx_3)) f+ *((ecx_3 u>> 0x1f << 3) + &data_79aa70))
float xmm0_7 = *edi
float xmm0_9 = edi[1].d
float xmm2_5 = xmm2_2 * xmm2_2 + xmm0_7 * xmm0_7 + xmm0_9 * xmm0_9
float var_50

if (0 f< xmm2_5)
    float xmm1_2 = 1f / sub_484cc0(xmm2_5)
    arg2 = xmm4_2 * 0.00872664619f
    float xmm0_14 = sub_484cb0()
    float xmm3_4 = *(edi + 4) * xmm1_2 * xmm0_14
    float xmm4_6 = edi[1].d f* xmm1_2 * xmm0_14
    var_50 = *edi * xmm1_2 * xmm0_14
    float var_4c_1 = xmm3_4
    float var_48_1 = xmm4_6
    int32_t var_44_1 = sub_48ca30()
else
    var_50.o = zx.o(0)

float var_40[0x10]
float* eax_8 = sub_6cbac0(&var_50, &var_40)
float xmm1_8 = eax_8[4] * xmm5_2 + xmm7_2 * *eax_8 + eax_8[8] * xmm6_2 + eax_8[0xc]
arg1 = xmm1_8
float xmm2_13 = eax_8[5] * xmm5_2 + eax_8[1] * xmm7_2 + eax_8[9] * xmm6_2 + eax_8[0xd]
arg2 = xmm2_13
float xmm3_9 = eax_8[6] * xmm5_2 + eax_8[2] * xmm7_2 + eax_8[0xa] * xmm6_2 + eax_8[0xe]
float var_5c_1 = xmm3_9
float xmm5_7 = eax_8[7] * xmm5_2 + eax_8[3] * xmm7_2 + eax_8[0xb] * xmm6_2 + eax_8[0xf]
xmm5_7 - 1f
eax_8:1.b =
    (xmm5_7 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm5_7, 1f) ? 1 : 0) << 2 | (xmm5_7 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm5_7 f- 0
    eax_8:1.b = (xmm5_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_7, 0f) ? 1 : 0) << 2
        | (xmm5_7 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm0_33 = 1f / xmm5_7
        xmm1_8 = xmm1_8 * xmm0_33
        xmm2_13 = xmm2_13 * xmm0_33
        xmm3_9 = xmm3_9 * xmm0_33
        arg1 = xmm1_8
        arg2 = xmm2_13
        var_5c_1 = xmm3_9

int32_t* esi_1 = *(ebp i+ 8)
float xmm6_4 = *(arg3 i+ 0x80)
int32_t xmm0_34

if (esi_1 != 0)
    *esi_1 += 1
    
    if (*esi_1 s>= 0x209)
        sub_4a7690(esi_1)
        *esi_1 = 0
    
    int32_t eax_10 = esi_1[*esi_1 + 1]
    xmm0_34 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_10)) f+
        *((eax_10 u>> 0x1f << 3) + &data_79aa70)) * 2.3283064370807974e-10)
else
    xmm0_34 = (zx.o(0)).d

float xmm6_7 = (xmm6_4 f* xmm0_34 - *(arg3 i+ 0x80) * 0.5f) * 0.0174532924f
float xmm5_11 = xmm2_13 * xmm2_13 + xmm1_8 * xmm1_8 + xmm3_9 * xmm3_9

if (0 f< xmm5_11)
    float xmm1_9 = 1f / sub_484cc0(xmm5_11)
    int32_t var_54_1 = xmm6_7 * 0.5f
    float xmm0_48 = sub_484cb0()
    var_50 = arg1 * xmm1_9 * xmm0_48
    float var_4c_2 = arg2 * xmm1_9 * xmm0_48
    float var_48_2 = var_5c_1 * xmm1_9 * xmm0_48
    int32_t var_44_2 = sub_48ca30()
else
    var_50.o = zx.o(0)

float* eax_12 = sub_6cbac0(&var_50, &var_40)
float xmm1_11 = *(edi + 4)
float xmm2_17 = *edi
float xmm3_13 = edi[1].d
float xmm6_10 = eax_12[6] * xmm1_11
float xmm7_5 = eax_12[7] * xmm1_11
float xmm4_15 = eax_12[4] * xmm1_11 + *eax_12 * xmm2_17 + eax_12[8] * xmm3_13 + eax_12[0xc]
float xmm5_15 = eax_12[5] * xmm1_11 + eax_12[1] * xmm2_17 + eax_12[9] * xmm3_13
float xmm0_60 = eax_12[2] * xmm2_17
var_50 = xmm4_15
float xmm5_16 = xmm5_15 + eax_12[0xd]
float var_4c_3 = xmm5_16
float result_1 = xmm6_10 + xmm0_60 + eax_12[0xa] * xmm3_13 + eax_12[0xe]
float result = result_1
float xmm7_8 = xmm7_5 + eax_12[3] * xmm2_17 + eax_12[0xb] * xmm3_13 + eax_12[0xf]
xmm7_8 - 1f
eax_12:1.b =
    (xmm7_8 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_8, 1f) ? 1 : 0) << 2 | (xmm7_8 < 1f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (p_5)
    xmm7_8 f- 0
    eax_12:1.b = (xmm7_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_8, 0f) ? 1 : 0) << 2
        | (xmm7_8 < 0f ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        float xmm0_67 = 1f / xmm7_8
        var_50 = xmm4_15 * xmm0_67
        float var_4c_4 = xmm5_16 * xmm0_67
        result = result_1 * xmm0_67

*edi = var_50.q
edi[1].d = result
return result
