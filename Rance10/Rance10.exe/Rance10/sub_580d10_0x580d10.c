// 函数: sub_580d10
// 地址: 0x580d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_40 = 3.40282347e+38f
int32_t* i_1
void* ecx
sub_5807e0(ecx, &i_1, arg1)
int32_t* i = i_1
float var_34

for (int32_t* j = *i; j != i; i = i_1)
    int32_t* ecx_1 = j[4]
    float xmm3_2 = *(arg1 + 0x10) f- *(arg1 + 4)
    float xmm5_2 = *(arg1 + 0x14) f- *(arg1 + 8)
    float xmm7_1 = ecx_1[9]
    float xmm6_2 = *(arg1 + 0x18) f- *(arg1 + 0xc)
    float xmm4_4 = ecx_1[0xa] f* xmm5_2 + xmm7_1 * xmm3_2 + ecx_1[0xb] f* xmm6_2
    xmm4_4 - 0f
    i:1.b = (xmm4_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, 0f) ? 1 : 0) << 2
        | (xmm4_4 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        float xmm2_4 = ((ecx_1[0xc] ^ (data_79aad0).d)
            - (*(arg1 + 8) f* ecx_1[0xa] + *(arg1 + 4) * xmm7_1 + *(arg1 + 0xc) f* ecx_1[0xb]))
            / xmm4_4
        
        if (not(0 f> xmm2_4) && not(xmm2_4 > 1f))
            float xmm1_6 = *(arg1 + 0xc) + xmm6_2 * xmm2_4
            float xmm3_4[0x4] = xmm3_2 * xmm2_4 f+ *(arg1 + 4)
            int64_t xmm0_10 = *(arg1 + 8) + xmm5_2 * xmm2_4
            var_34 = xmm1_6
            float var_18_1 = xmm1_6
            int64_t xmm1_8 = _mm_unpacklo_ps(xmm3_4, xmm0_10)
            float var_38_1 = xmm3_4
            float var_3c_1 = xmm0_10
            int64_t var_20 = xmm1_8
            
            if (sub_5de980(ecx_1, &var_20) != 0)
                float xmm1_13 = *(arg2 + 0x18) * var_3c_1 + *(arg2 + 8) * var_38_1
                    + *(arg2 + 0x28) * var_34 f+ *(arg2 + 0x38)
                float xmm2_9 = *(arg2 + 0x1c) * var_3c_1 + *(arg2 + 0xc) * var_38_1
                    + *(arg2 + 0x2c) * var_34 f+ *(arg2 + 0x3c)
                xmm2_9 - 1f
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    xmm2_9 - 0f
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        xmm1_13 = xmm1_13 * 1f / xmm2_9
                
                if (not(var_40 <= xmm1_13))
                    var_40 = xmm1_13
                    *arg3 = xmm1_8
                    arg3[1].d = xmm1_6
    
    if (*(j + 0xd) == 0)
        int32_t* j_1 = j[2]
        
        if (*(j_1 + 0xd) != 0)
            int32_t* j_3 = j[1]
            
            if (*(j_3 + 0xd) == 0)
                while (j == j_3[2])
                    j = j_3
                    j_3 = j_3[1]
                    
                    if (*(j_3 + 0xd) != 0)
                        break
            
            j = j_3
        else
            j = j_1
            int32_t* j_2 = *j
            
            while (*(j_2 + 0xd) == 0)
                j = j_2
                j_2 = *j

sub_4f27c0(&i_1, &var_34, *i, i)
sub_403160(i_1, 1, 0x14)
var_40 - 3.40282347e+38f
int32_t result
result:1.b = (var_40 == 3.40282347e+38f ? 1 : 0) << 6
    | (is_unordered.d(var_40, 3.40282347e+38f) ? 1 : 0) << 2 | (var_40 < 3.40282347e+38f ? 1 : 0)
bool p_8 = unimplemented  {test ah, 0x44}

if (not(p_8))
    result.b = 0
    return result

result.b = 1
return result
