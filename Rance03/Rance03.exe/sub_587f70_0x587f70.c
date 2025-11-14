// 函数: sub_587f70
// 地址: 0x587f70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_20
__builtin_memset(&var_20, 0, 0x18)
float var_14
int32_t* eax
void* ecx

if (sub_587d30(ecx, arg1, arg2, &var_20, &var_14).b != 0)
    float var_1c
    float var_10
    float xmm5_2 = var_10 - var_1c
    float xmm6_1 = *arg4
    float xmm2_1 = arg4[1]
    float xmm7_1 = arg4[2]
    float xmm3_2 = var_14 - var_20
    float var_18
    float var_c
    float xmm4_2 = var_c - var_18
    float xmm1_8 = xmm5_2 * xmm2_1 + xmm3_2 * xmm6_1 + xmm4_2 * xmm7_1
    xmm1_8 - 0f
    eax:1.b = (xmm1_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_8, 0f) ? 1 : 0) << 2
        | (xmm1_8 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        float xmm1_11 = ((((*arg3 * xmm6_1) ^ (data_7094c0).d) - arg3[1] f* xmm2_1
            - arg3[2] f* xmm7_1) ^ (data_7094c0).d)
            - (xmm2_1 * var_1c + xmm6_1 * var_20 + xmm7_1 * var_18)
        float xmm1_12 = xmm1_11 / xmm1_8
        
        if (not(0 f> xmm1_12) && not(xmm1_12 > 1f))
            *arg5 = _mm_unpacklo_ps(xmm3_2 * xmm1_12 + var_20, xmm5_2 * xmm1_12 + var_1c)
            arg5[1].d = xmm4_2 * xmm1_12 + var_18
            float eax_2
            eax_2.b = 1
            return eax_2

eax.b = 0
return eax
