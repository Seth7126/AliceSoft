// 函数: sub_597a90
// 地址: 0x597a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x20) = 0xbf800000
*(arg1 + 0x24) = 0x3f800000
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0x3f800000
*(arg1 + 0x30) = 0x3f800000
*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0xbf800000
*(arg1 + 0x3c) = 0xbf800000
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 0x3f800000
*(arg1 + 0x48) = 0xbf800000
*(arg1 + 0x4c) = 0
float* arg_4

if (arg1 + 0x20 != arg1 + 0x50)
    float* esi_1 = arg_4
    void* edx_1 = arg1 + 0x28
    
    do
        float xmm2_1 = *(edx_1 - 4)
        float xmm3_1 = *(edx_1 - 8)
        float xmm1_1 = *edx_1
        float xmm4_5 = xmm3_1 * *esi_1 + xmm2_1 * esi_1[4] + xmm1_1 * esi_1[8] + esi_1[0xc]
        float xmm5_5 = xmm3_1 * esi_1[1] + xmm2_1 * esi_1[5] + xmm1_1 * esi_1[9] + esi_1[0xd]
        float xmm6_5 = xmm3_1 * esi_1[2] + xmm2_1 * esi_1[6] + xmm1_1 * esi_1[0xa] + esi_1[0xe]
        float xmm3_5 = xmm3_1 * esi_1[3] + xmm2_1 * esi_1[7] + xmm1_1 * esi_1[0xb] + esi_1[0xf]
        xmm3_5 - 1f
        void* eax_1
        eax_1:1.b = (xmm3_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_5, 1f) ? 1 : 0) << 2
            | (xmm3_5 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            xmm3_5 f- 0
            eax_1:1.b = (xmm3_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_5, 0f) ? 1 : 0) << 2
                | (xmm3_5 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                float xmm1_3 = 1f / xmm3_5
                *(edx_1 - 8) = xmm1_3 * xmm4_5
                *(edx_1 - 4) = xmm1_3 * xmm5_5
                *edx_1 = xmm1_3 * xmm6_5
        else
            *(edx_1 - 8) = xmm4_5
            *(edx_1 - 4) = xmm5_5
            *edx_1 = xmm6_5
        
        edx_1 += 0xc
    while (edx_1 - 8 != arg1 + 0x50)

arg_4 = *(arg1 + 0x58)
int32_t var_8 = 0
int32_t var_4 = 0
sub_597d00(&var_8, arg1 + 0x20, &arg_4, arg2, arg3, &var_8)
var_8 = 0x3f800000
int32_t var_4_1 = 0
sub_597d00(&var_8, arg1 + 0x2c, &arg_4, arg2, arg3, &var_8)
var_8 = 0
int32_t var_4_2 = 0x3f800000
sub_597d00(&var_8, arg1 + 0x38, &arg_4, arg2, arg3, &var_8)
var_8 = 0x3f800000
int32_t var_4_3 = 0
sub_597d00(&var_8, arg1 + 0x2c, &arg_4, arg2, arg3, &var_8)
var_8 = 0x3f800000
int32_t var_4_4 = 0x3f800000
sub_597d00(&var_8, arg1 + 0x44, &arg_4, arg2, arg3, &var_8)
var_8 = 0
int32_t var_4_5 = 0x3f800000
return sub_597d00(&var_8, arg1 + 0x38, &arg_4, arg2, arg3, &var_8)
