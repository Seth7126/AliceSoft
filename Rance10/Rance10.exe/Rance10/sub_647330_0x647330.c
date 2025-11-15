// 函数: sub_647330
// 地址: 0x647330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_100
int32_t* eax = sub_6cadd0(&var_100, arg3)
void* var_158 = &var_100
void var_c0
int32_t* eax_1 = sub_6caf70(&var_c0, arg4)
void var_80
int32_t* eax_2 = sub_6caeb0(&var_80, arg1)
float var_40[0x4][0x4]
float (* eax_3)[0x4] = sub_6cb020(eax_2, eax_2, &var_40, eax_1)
float var_140
float (* i)[0x4] = sub_6cb020(eax_3, eax_3, &var_140, eax)

if (arg2 != arg2 + 0x60)
    void* ecx_6 = arg2 + 8
    
    do
        float xmm2_1 = *(ecx_6 - 4)
        float xmm4_1 = *(ecx_6 - 8)
        float xmm1_2 = *ecx_6
        float var_130
        float var_120
        float var_110
        float xmm5_5 = xmm4_1 * var_140 + xmm2_1 * var_130 + xmm1_2 * var_120 + var_110
        float var_13c
        float var_12c
        float var_11c
        float var_10c
        float xmm6_5 = xmm4_1 * var_13c + xmm2_1 * var_12c + xmm1_2 * var_11c + var_10c
        float var_150_1 = xmm5_5
        float var_14c_1 = xmm6_5
        float var_134
        float var_124
        float var_114
        float var_104
        float xmm4_5 = xmm4_1 * var_134 + xmm2_1 * var_124 + xmm1_2 * var_114 + var_104
        float var_138
        float var_128
        float var_118
        float var_108
        float xmm3_4 = xmm4_1 * var_138 + xmm2_1 * var_128 + xmm1_2 * var_118 + var_108
        xmm4_5 - 1f
        float var_148_1 = xmm3_4
        i:1.b = (xmm4_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_5, 1f) ? 1 : 0) << 2
            | (xmm4_5 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            xmm4_5 f- 0
            i:1.b = (xmm4_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_5, 0f) ? 1 : 0) << 2
                | (xmm4_5 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                float xmm1_4 = 1f / xmm4_5
                var_148_1 = xmm3_4 * xmm1_4
                var_150_1 = xmm1_4 * xmm5_5
                float var_14c_2 = xmm1_4 * xmm6_5
        
        *(ecx_6 + 4) = var_150_1.q
        *(ecx_6 + 0xc) = var_148_1
        ecx_6 += 0x20
        i = ecx_6 - 8
    while (i != arg2 + 0x60)

return i
