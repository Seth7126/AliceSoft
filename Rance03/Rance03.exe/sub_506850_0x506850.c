// 函数: sub_506850
// 地址: 0x506850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(arg1 + 4)

if (result != 0)
    result[0xc] = 1
    float var_44[0x4]
    __builtin_memset(&var_44, 0, 0x40)
    float var_34[0x4]
    float var_24[0x4]
    float var_14[0x4]
    sub_4e7ee0(&var_44, arg5, arg4, arg2, arg3, arg6, arg7, arg8, &var_44, &var_34, &var_24, 
        &var_14, arg13)
    int32_t ecx_1 = *(arg13 + 0x94)
    int32_t edx_2 = *(arg13 + 0x98)
    void* esi_2 = *(arg1 + 4)
    int32_t xmm2 = *arg9
    int32_t xmm3_1 = arg9[1]
    float xmm1_1[0x4] = var_44
    int32_t xmm4_1 = *arg10
    int32_t xmm5_1 = arg10[1]
    int32_t xmm6_1 = *arg11
    int32_t xmm7_1 = arg11[1]
    result = arg12
    void* xmm0_2 = *result
    int32_t* xmm0_3 = result[1]
    *(esi_2 + 0x38) = _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55)
    int32_t xmm0_7 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
    *(esi_2 + 0x34) = xmm1_1
    float xmm1_2 = var_44[3]
    *(esi_2 + 0x3c) = xmm0_7
    *(esi_2 + 0x40) = xmm1_2
    float xmm1_3[0x4] = var_34
    *(esi_2 + 0x44) = xmm1_3
    *(esi_2 + 0x48) = _mm_shuffle_ps(xmm1_3, xmm1_3, 0x55)
    int32_t xmm0_11 = _mm_shuffle_ps(xmm1_3, xmm1_3, 0xaa)
    float xmm1_4 = var_34[3]
    *(esi_2 + 0x4c) = xmm0_11
    *(esi_2 + 0x50) = xmm1_4
    float xmm1_5[0x4] = var_24
    *(esi_2 + 0x54) = xmm1_5
    *(esi_2 + 0x58) = _mm_shuffle_ps(xmm1_5, xmm1_5, 0x55)
    int32_t xmm0_15 = _mm_shuffle_ps(xmm1_5, xmm1_5, 0xaa)
    *(esi_2 + 0x60) = var_24[3]
    float xmm1_7[0x4] = var_14
    *(esi_2 + 0x5c) = xmm0_15
    *(esi_2 + 0x64) = xmm1_7
    *(esi_2 + 0x68) = _mm_shuffle_ps(xmm1_7, xmm1_7, 0x55)
    int32_t xmm0_19 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0xaa)
    float xmm1_8 = var_14[3]
    *(esi_2 + 0x6c) = xmm0_19
    *(esi_2 + 0x70) = xmm1_8
    *(esi_2 + 0x74) = ecx_1
    *(esi_2 + 0x78) = edx_2
    *(esi_2 + 0x7c) = xmm2
    *(esi_2 + 0x80) = xmm3_1
    *(esi_2 + 0x84) = xmm4_1
    *(esi_2 + 0x88) = xmm5_1
    *(esi_2 + 0x8c) = xmm6_1
    *(esi_2 + 0x90) = xmm7_1
    *(esi_2 + 0x94) = xmm0_2
    *(esi_2 + 0x98) = xmm0_3

return result
