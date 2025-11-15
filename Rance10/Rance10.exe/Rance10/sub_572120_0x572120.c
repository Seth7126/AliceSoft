// 函数: sub_572120
// 地址: 0x572120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg2
float xmm2 = *result
float xmm1 = result[1]
float xmm0_1 = *arg1 - xmm2
float xmm6_1 = arg1[7] f- xmm1
float xmm7_1 = arg1[3] f- xmm2
float xmm5_1 = arg1[6] f- xmm2
float xmm0_3 = arg1[1] f- xmm1
float xmm0_4 = result[2]
float xmm3_1 = arg1[2] f- xmm0_4
float xmm4_1 = arg1[8] f- xmm0_4
float xmm3_3 = arg1[4] f- xmm1
float xmm3_5 = arg1[5] f- xmm0_4
float xmm2_6 = (xmm7_1 * xmm3_1 - xmm3_5 * xmm0_1) f* arg1[0xd]
    + (xmm3_5 * xmm0_3 - xmm3_3 * xmm3_1) f* arg1[0xc]
    + (xmm3_3 * xmm0_1 - xmm7_1 * xmm0_3) f* arg1[0xe]

if (0 f<= xmm2_6)
    float xmm2_12 = (xmm5_1 * xmm3_5 - xmm4_1 * xmm7_1) f* arg1[0xd]
        + (xmm4_1 * xmm3_3 - xmm6_1 * xmm3_5) f* arg1[0xc]
        + (xmm6_1 * xmm7_1 - xmm5_1 * xmm3_3) f* arg1[0xe]
    
    if (not(0 f> xmm2_12))
        float xmm4_6 = (xmm4_1 * xmm0_1 - xmm5_1 * xmm3_1) f* arg1[0xd]
            + (xmm6_1 * xmm3_1 - xmm4_1 * xmm0_3) f* arg1[0xc]
            + (xmm5_1 * xmm0_3 - xmm6_1 * xmm0_1) f* arg1[0xe]
        result.b = 0 f<= xmm4_6
        return result

result.b = 0
return result
