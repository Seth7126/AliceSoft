// 函数: sub_5de260
// 地址: 0x5de260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = *(arg6 i+ 4)
float xmm5_1 = *(arg8 + 4) - xmm0
float xmm4_2 = (*(arg7 + 4) - xmm0) ^ (data_79aad0).d
float xmm0_3 = arg2[2]
float xmm6_3 = (arg4[1] f- arg2[1]) * xmm5_1 + (arg5[1] f- arg2[1]) * xmm4_2
float xmm7_3 = (arg4[2] f- xmm0_3) * xmm5_1 + (arg5[2] f- xmm0_3) * xmm4_2
float var_8 = xmm6_3
float xmm4_5 = (*arg4 - *arg2) * xmm5_1 + (*arg5 - *arg2) * xmm4_2
float temp0 = data_7fd4d8
xmm4_5 - temp0
int32_t* eax_4
eax_4:1.b = (xmm4_5 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm4_5, temp0) ? 1 : 0) << 2
    | (xmm4_5 < temp0 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    float temp2_1 = data_7fd4dc
    xmm6_3 - temp2_1
    eax_4:1.b = (xmm6_3 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm6_3, temp2_1) ? 1 : 0) << 2
        | (xmm6_3 < temp2_1 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        float temp3_1 = data_7fd4e0
        xmm7_3 - temp3_1
        eax_4:1.b = (xmm7_3 == temp3_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm7_3, temp3_1) ? 1 : 0) << 2 | (xmm7_3 < temp3_1 ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (not(p_5))
            int32_t eax_5 = data_7e70dc
            *arg3 = data_7e70d4.q
            arg3[1].d = eax_5
            return arg3

float xmm0_9 = sub_484cc0(xmm6_3 * xmm6_3 + xmm4_5 * xmm4_5 + xmm7_3 * xmm7_3)
xmm0_9 - 0f
eax_4:1.b =
    (xmm0_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2 | (xmm0_9 < 0f ? 1 : 0)
bool p_7 = unimplemented  {test ah, 0x44}

if (not(p_7))
    *arg3 = xmm4_5.q
    arg3[1].d = xmm7_3
    return arg3

float xmm1_7 = 1f / xmm0_9
*arg3 = xmm4_5 * xmm1_7
*(arg3 + 4) = xmm6_3 * xmm1_7
arg3[1].d = xmm7_3 * xmm1_7
return arg3
