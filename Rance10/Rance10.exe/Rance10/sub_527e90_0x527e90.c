// 函数: sub_527e90
// 地址: 0x527e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg4
int32_t* edi = arg5
float xmm1 = *esi
float xmm6 = *edi
xmm1 - xmm6
arg1:1.b =
    (xmm1 == xmm6 ? 1 : 0) << 6 | (is_unordered.d(xmm1, xmm6) ? 1 : 0) << 2 | (xmm1 < xmm6 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
label_527efb:
    float xmm5_2 = edi[1] f+ esi[1]
    float xmm4_2 = esi[1] f- edi[1]
    float xmm0_3 = _mm_cvtepi32_ps(zx.o(arg3))
    float xmm2_4 = xmm6 + xmm1 f+ *arg6
    float xmm5_3 = xmm5_2 f+ arg6[1]
    float xmm7_2 = _mm_cvtepi32_ps(zx.o(arg2))
    float xmm2_5 = xmm2_4 * 0.333333343f
    float xmm5_4 = xmm5_3 * 0.333333343f
    float xmm2_7 = xmm1 - xmm6
    
    if (not(0 f> ((xmm5_4 f- esi[1]) * xmm2_7 + (xmm1 - xmm2_5) * xmm4_2)
            * ((xmm7_2 f- esi[1]) * xmm2_7 + (*esi - xmm0_3) * xmm4_2)))
        float xmm4_3 = *arg6
        float xmm3_7 = edi[1] f- arg6[1]
        float xmm1_6 = xmm6 - xmm4_3
        
        if (not(0 f> ((xmm5_4 f- edi[1]) * xmm1_6 + (xmm6 - xmm2_5) * xmm3_7)
                * ((xmm7_2 f- edi[1]) * xmm1_6 + (xmm6 - xmm0_3) * xmm3_7)))
            float xmm3_8 = arg6[1]
            float xmm1_8 = xmm4_3 f- *esi
            float xmm2_14 = xmm3_8 f- esi[1]
            arg1.b = 0 f<= ((xmm5_4 - xmm3_8) * xmm1_8 + (xmm4_3 - xmm2_5) * xmm2_14)
                * ((xmm7_2 - xmm3_8) * xmm1_8 + (xmm4_3 - xmm0_3) * xmm2_14)
            return arg1
else
    float xmm0_1 = esi[1]
    float temp0_1 = edi[1]
    xmm0_1 - temp0_1
    arg1:1.b = (xmm0_1 == temp0_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp0_1) ? 1 : 0) << 2
        | (xmm0_1 < temp0_1 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        goto label_527efb
    
    float xmm2_1 = esi[2]
    float temp1_1 = edi[2]
    xmm2_1 - temp1_1
    arg1:1.b = (xmm2_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, temp1_1) ? 1 : 0) << 2
        | (xmm2_1 < temp1_1 ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        goto label_527efb
    
    float temp2_1 = *arg6
    xmm1 - temp2_1
    arg1:1.b = (xmm1 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm1, temp2_1) ? 1 : 0) << 2
        | (xmm1 < temp2_1 ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        goto label_527efb
    
    float temp3_1 = arg6[1]
    xmm0_1 - temp3_1
    arg1:1.b = (xmm0_1 == temp3_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp3_1) ? 1 : 0) << 2
        | (xmm0_1 < temp3_1 ? 1 : 0)
    bool p_9 = unimplemented  {test ah, 0x44}
    
    if (p_9)
        goto label_527efb
    
    float temp4_1 = arg6[2]
    xmm2_1 - temp4_1
    arg1:1.b = (xmm2_1 == temp4_1 ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, temp4_1) ? 1 : 0) << 2
        | (xmm2_1 < temp4_1 ? 1 : 0)
    bool p_11 = unimplemented  {test ah, 0x44}
    
    if (p_11)
        goto label_527efb

arg1.b = 0
return arg1
