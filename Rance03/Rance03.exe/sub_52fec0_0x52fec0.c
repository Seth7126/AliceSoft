// 函数: sub_52fec0
// 地址: 0x52fec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg2
float xmm2 = *result
float xmm1 = result[1]
float xmm0_1 = *(arg1 + 4) - xmm2
float xmm4_1 = *(arg1 + 0x14) - xmm1
float xmm7_1 = *(arg1 + 0x1c) - xmm2
float xmm5_1 = *(arg1 + 0x10) - xmm2
float xmm0_3 = *(arg1 + 8) - xmm1
float xmm7_3 = *(arg1 + 0x20) - xmm1
float xmm0_4 = result[2]
float xmm1_2 = *(arg1 + 0x24) - xmm0_4
float xmm6_1 = *(arg1 + 0xc) - xmm0_4
float xmm3_1 = *(arg1 + 0x18) - xmm0_4
float xmm4_5 = *(arg1 + 0x58)
float xmm3_2 = *(arg1 + 0x5c)
float xmm5_5 = *(arg1 + 0x60)

if (not(0 f> xmm3_2 * (xmm5_1 * xmm6_1 - xmm3_1 * xmm0_1)
        + xmm4_5 * (xmm3_1 * xmm0_3 - xmm4_1 * xmm6_1)
        + xmm5_5 * (xmm4_1 * xmm0_1 - xmm5_1 * xmm0_3)) && not(
        0 f> xmm3_2 * (xmm7_1 * xmm3_1 - xmm1_2 * xmm5_1)
        + xmm4_5 * (xmm1_2 * xmm4_1 - xmm7_3 * xmm3_1)
        + xmm5_5 * (xmm7_3 * xmm5_1 - xmm7_1 * xmm4_1)) && not(
        0 f> xmm3_2 * (xmm1_2 * xmm0_1 - xmm7_1 * xmm6_1)
        + xmm4_5 * (xmm7_3 * xmm6_1 - xmm1_2 * xmm0_3)
        + xmm5_5 * (xmm7_1 * xmm0_3 - xmm7_3 * xmm0_1)))
    result.b = 1
    return result

result.b = 0
return result
