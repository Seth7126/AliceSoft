// 函数: sub_5b05c0
// 地址: 0x5b05c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *arg2
int32_t eax = *arg3

if (ebx s< eax)
    int32_t xmm0_1 = arg2[3]
    int32_t xmm1_1 = arg2[4]
    int32_t xmm2_1 = arg2[5]
    int32_t edx = arg2[1]
    int32_t ecx = arg2[6]
    *arg2 = eax
    arg2[1] = arg3[1]
    arg2[3] = arg3[3]
    arg2[4] = arg3[4]
    arg2[5] = arg3[5]
    arg2[6] = arg3[6]
    *arg3 = ebx
    arg3[1] = edx
    arg3[3] = xmm0_1
    arg3[4] = xmm1_1
    arg3[5] = xmm2_1
    arg3[6] = ecx

int32_t result = *arg2
int32_t ebx_1 = *arg4

if (ebx_1 s< result)
    int32_t xmm0_2 = arg4[3]
    int32_t xmm1_2 = arg4[4]
    int32_t xmm2_2 = arg4[5]
    int32_t ecx_1 = arg4[1]
    *arg4 = result
    arg4[1] = arg2[1]
    int32_t ebp_1 = arg4[6]
    arg4[3] = arg2[3]
    arg4[4] = arg2[4]
    arg4[5] = arg2[5]
    arg4[6] = arg2[6]
    *arg2 = ebx_1
    arg2[1] = ecx_1
    arg2[3] = xmm0_2
    arg2[4] = xmm1_2
    arg2[5] = xmm2_2
    int32_t edx_2 = *arg2
    arg2[6] = ebp_1
    result = *arg3
    
    if (edx_2 s< result)
        *arg2 = result
        arg2[1] = arg3[1]
        arg2[3] = arg3[3]
        arg2[4] = arg3[4]
        arg2[5] = arg3[5]
        result = arg3[6]
        arg2[6] = result
        *arg3 = edx_2
        arg3[1] = ecx_1
        arg3[3] = xmm0_2
        arg3[4] = xmm1_2
        arg3[5] = xmm2_2
        arg3[6] = ebp_1

return result
