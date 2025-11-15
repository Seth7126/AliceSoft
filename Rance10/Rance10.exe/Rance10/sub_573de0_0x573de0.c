// 函数: sub_573de0
// 地址: 0x573de0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm1 = 3.40282347e+38f
float var_4 = 3.40282347e+38f
int32_t* esi_1 = *arg1
int32_t* i = *esi_1
float result

if (i != esi_1)
    void* ecx_1 = arg2
    float edi_1 = arg3
    
    do
        result = i[4]
        float xmm4_2 = *(ecx_1 + 0x10) f- *(ecx_1 + 4)
        float xmm5_2 = *(ecx_1 + 0x14) f- *(ecx_1 + 8)
        float xmm6_2 = *(ecx_1 + 0x18) f- *(ecx_1 + 0xc)
        float xmm3_4 =
            *(result i+ 0x34) * xmm5_2 + *(result i+ 0x30) * xmm4_2 + *(result i+ 0x38) * xmm6_2
        xmm3_4 - 0f
        result:1.b = (xmm3_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_4, 0f) ? 1 : 0) << 2
            | (xmm3_4 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            result = i[4]
            float xmm2_3 = (*(result i+ 0x3c) ^ (data_79aad0).d) - (
                *(ecx_1 + 8) f* *(result i+ 0x34) + *(ecx_1 + 4) f* *(result i+ 0x30)
                + *(ecx_1 + 0xc) f* *(result i+ 0x38))
            float xmm2_4 = xmm2_3 / xmm3_4
            
            if (0 f> xmm2_4 || xmm2_4 > 1f)
                xmm1 = var_4
            else
                float xmm0_10[0x4] = *(ecx_1 + 4) + xmm4_2 * xmm2_4
                float xmm2_6 = *(ecx_1 + 0xc) + xmm6_2 * xmm2_4
                int64_t xmm1_6 = *(ecx_1 + 8) + xmm5_2 * xmm2_4
                arg3 = xmm0_10
                float var_14_1 = xmm2_6
                int64_t xmm0_11 = _mm_unpacklo_ps(xmm0_10, xmm1_6)
                arg1 = xmm1_6
                int64_t var_1c = xmm0_11
                
                if (sub_572120(result, &var_1c).b == 0)
                    xmm1 = var_4
                else
                    xmm1 = *(edi_1 i+ 0x18) f* arg1 + *(edi_1 i+ 8) * arg3
                        + *(edi_1 i+ 0x28) * xmm2_6 f+ *(edi_1 i+ 0x38)
                    float xmm2_11 = *(edi_1 i+ 0x1c) f* arg1 + *(edi_1 i+ 0xc) * arg3
                        + *(edi_1 i+ 0x2c) * xmm2_6 f+ *(edi_1 i+ 0x3c)
                    xmm2_11 - 1f
                    result:1.b = (xmm2_11 == 1f ? 1 : 0) << 6
                        | (is_unordered.d(xmm2_11, 1f) ? 1 : 0) << 2 | (xmm2_11 < 1f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        xmm2_11 - 0f
                        result:1.b = (xmm2_11 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm2_11, 0f) ? 1 : 0) << 2 | (xmm2_11 < 0f ? 1 : 0)
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (p_6)
                            xmm1 = xmm1 * 1f / xmm2_11
                    
                    if (var_4 <= xmm1)
                        xmm1 = var_4
                    else
                        var_4 = xmm1
                        *arg4 = xmm0_11
                        arg4[1].d = xmm2_6
                
                ecx_1 = arg2
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                result = i[1]
                
                if (*(result i+ 0xd) == 0)
                    while (i == *(result i+ 8))
                        i = result
                        result = *(result i+ 4)
                        
                        if (*(result i+ 0xd) != 0)
                            break
                
                i = result
            else
                i = i_1
                result = *i
                
                while (*(result i+ 0xd) == 0)
                    i = result
                    result = *i
    while (i != esi_1)
    
    xmm1 - 3.40282347e+38f
    result:1.b = (xmm1 == 3.40282347e+38f ? 1 : 0) << 6
        | (is_unordered.d(xmm1, 3.40282347e+38f) ? 1 : 0) << 2 | (xmm1 < 3.40282347e+38f ? 1 : 0)
    bool p_8 = unimplemented  {test ah, 0x44}
    
    if (p_8)
        result.b = 1
        return result

result.b = 0
return result
