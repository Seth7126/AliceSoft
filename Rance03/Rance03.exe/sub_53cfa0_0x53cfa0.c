// 函数: sub_53cfa0
// 地址: 0x53cfa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edx = arg1
int32_t* result = arg2
int32_t* ecx = *edx
float xmm2 = *result
float xmm1 = result[1]
float xmm0_1 = *ecx - xmm2
float xmm7_1 = ecx[6] f- xmm2
float xmm4_1 = ecx[4] f- xmm1
float xmm5_1 = ecx[3] f- xmm2
float xmm0_3 = ecx[1] f- xmm1
float xmm7_3 = ecx[7] f- xmm1
float xmm0_4 = result[2]
float xmm1_2 = ecx[8] f- xmm0_4
float xmm6_1 = ecx[2] f- xmm0_4
float xmm3_1 = ecx[5] f- xmm0_4
float xmm4_5 = edx[6]
float xmm3_2 = edx[7]
float xmm5_5 = edx[8]

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
