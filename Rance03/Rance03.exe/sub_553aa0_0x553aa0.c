// 函数: sub_553aa0
// 地址: 0x553aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x10) != 0)
    int32_t* ecx = *(arg1 + 0x74)
    
    if (ecx != 0 && (*(*ecx + 0x14))().b != 0)
        sub_54a340(arg1 + 0x24, arg5)
        int32_t* ebx_1 = arg2
        int32_t eax_3
        eax_3.b = (**(arg1 + 0x118))() == (ebx_1[1] - *ebx_1) s>> 6
        arg5.b = eax_3.b
        
        if (eax_3.b != 0)
            sub_554c00(arg1, ebx_1)
        
        float var_44
        float* eax_4 = sub_555350(arg1, &var_44)
        int32_t* ecx_5 = arg3
        *(arg1 + 0x7c) = *eax_4
        *(arg1 + 0x8c) = *(eax_4 + 0x10)
        *(arg1 + 0x9c) = *(eax_4 + 0x20)
        *(arg1 + 0xac) = *(eax_4 + 0x30)
        float xmm1_1 = *(arg1 + 0x7c)
        float xmm5_1 = *(arg1 + 0x80)
        float xmm4_1 = *(arg1 + 0x84)
        float xmm3_1 = *(arg1 + 0x88)
        float xmm2_5 =
            xmm1_1 f* ecx_5[1] + ecx_5[5] f* xmm5_1 + ecx_5[9] f* xmm4_1 + ecx_5[0xd] f* xmm3_1
        float xmm7_5 =
            *ecx_5 * xmm1_1 + ecx_5[4] f* xmm5_1 + ecx_5[8] f* xmm4_1 + ecx_5[0xc] f* xmm3_1
        float xmm6_5 =
            ecx_5[2] f* xmm1_1 + ecx_5[6] f* xmm5_1 + ecx_5[0xa] f* xmm4_1 + ecx_5[0xe] f* xmm3_1
        float xmm2_10 =
            ecx_5[3] f* xmm1_1 + ecx_5[7] f* xmm5_1 + ecx_5[0xb] f* xmm4_1 + ecx_5[0xf] f* xmm3_1
        float xmm0_36 = arg4[5] f* xmm2_5
        var_44 = *arg4 * xmm7_5 + arg4[4] f* xmm2_5 + arg4[8] f* xmm6_5 + arg4[0xc] f* xmm2_10
        float xmm4_2 = *(arg1 + 0x98)
        float var_40_1 = arg4[1] f* xmm7_5 + xmm0_36 + arg4[9] f* xmm6_5 + arg4[0xd] f* xmm2_10
        float xmm3_4 = *(arg1 + 0x90)
        float xmm2_12 = *(arg1 + 0x94)
        float var_3c_1 =
            xmm7_5 f* arg4[2] + arg4[6] f* xmm2_5 + xmm6_5 f* arg4[0xa] + xmm2_10 f* arg4[0xe]
        float xmm1_17 = *(arg1 + 0x8c)
        float var_38_1 =
            xmm7_5 f* arg4[3] + xmm2_5 f* arg4[7] + xmm6_5 f* arg4[0xb] + xmm2_10 f* arg4[0xf]
        float xmm5_6 =
            ecx_5[1] f* xmm1_17 + ecx_5[5] f* xmm3_4 + ecx_5[9] f* xmm2_12 + ecx_5[0xd] f* xmm4_2
        float xmm7_14 =
            *ecx_5 * xmm1_17 + ecx_5[4] f* xmm3_4 + ecx_5[8] f* xmm2_12 + ecx_5[0xc] f* xmm4_2
        float xmm6_11 =
            ecx_5[2] f* xmm1_17 + ecx_5[6] f* xmm3_4 + ecx_5[0xa] f* xmm2_12 + ecx_5[0xe] f* xmm4_2
        float xmm5_11 =
            ecx_5[3] f* xmm1_17 + ecx_5[7] f* xmm3_4 + ecx_5[0xb] f* xmm2_12 + ecx_5[0xf] f* xmm4_2
        float xmm3_5 = *(arg1 + 0xa0)
        float xmm4_3 = *(arg1 + 0xa8)
        float xmm1_22 =
            *arg4 * xmm7_14 + arg4[4] f* xmm5_6 + arg4[8] f* xmm6_11 + arg4[0xc] f* xmm5_11
        float var_30_1 =
            arg4[1] f* xmm7_14 + arg4[5] f* xmm5_6 + arg4[9] f* xmm6_11 + arg4[0xd] f* xmm5_11
        float xmm2_15 = *(arg1 + 0xa4)
        float var_2c_1 =
            arg4[6] f* xmm5_6 + xmm7_14 f* arg4[2] + xmm6_11 f* arg4[0xa] + xmm5_11 f* arg4[0xe]
        float xmm1_33 = *(arg1 + 0x9c)
        float var_28_1 =
            xmm7_14 f* arg4[3] + xmm5_6 f* arg4[7] + xmm6_11 f* arg4[0xb] + xmm5_11 f* arg4[0xf]
        float xmm5_17 =
            ecx_5[1] f* xmm1_33 + ecx_5[5] f* xmm3_5 + ecx_5[9] f* xmm2_15 + ecx_5[0xd] f* xmm4_3
        float xmm7_23 =
            *ecx_5 * xmm1_33 + ecx_5[4] f* xmm3_5 + ecx_5[8] f* xmm2_15 + ecx_5[0xc] f* xmm4_3
        float xmm6_17 =
            ecx_5[2] f* xmm1_33 + ecx_5[6] f* xmm3_5 + ecx_5[0xa] f* xmm2_15 + ecx_5[0xe] f* xmm4_3
        float xmm3_6 = *(arg1 + 0xb8)
        float xmm5_22 =
            ecx_5[3] f* xmm1_33 + ecx_5[7] f* xmm3_5 + ecx_5[0xb] f* xmm2_15 + ecx_5[0xf] f* xmm4_3
        float xmm1_38 =
            *arg4 * xmm7_23 + arg4[4] f* xmm5_17 + arg4[8] f* xmm6_17 + arg4[0xc] f* xmm5_22
        float var_20_1 =
            arg4[1] f* xmm7_23 + arg4[5] f* xmm5_17 + arg4[9] f* xmm6_17 + arg4[0xd] f* xmm5_22
        float xmm2_18 = *(arg1 + 0xb0)
        float xmm0_131 = *(arg1 + 0xac)
        float var_1c_1 =
            arg4[6] f* xmm5_17 + xmm7_23 f* arg4[2] + xmm6_17 f* arg4[0xa] + xmm5_22 f* arg4[0xe]
        float xmm1_49 = *(arg1 + 0xb4)
        float var_18_1 =
            xmm7_23 f* arg4[3] + xmm5_17 f* arg4[7] + xmm6_17 f* arg4[0xb] + xmm5_22 f* arg4[0xf]
        float xmm7_32 =
            ecx_5[1] f* xmm0_131 + ecx_5[5] f* xmm2_18 + ecx_5[9] f* xmm1_49 + ecx_5[0xd] f* xmm3_6
        float xmm7_37 =
            *ecx_5 * xmm0_131 + ecx_5[4] f* xmm2_18 + ecx_5[8] f* xmm1_49 + ecx_5[0xc] f* xmm3_6
        float xmm7_42 = ecx_5[2] f* xmm0_131 + ecx_5[6] f* xmm2_18 + ecx_5[0xa] f* xmm1_49
            + ecx_5[0xe] f* xmm3_6
        float xmm5_46 = ecx_5[3] f* xmm0_131 + ecx_5[7] f* xmm2_18 + ecx_5[0xb] f* xmm1_49
            + ecx_5[0xf] f* xmm3_6
        float xmm1_54 =
            *arg4 * xmm7_37 + arg4[4] f* xmm7_32 + arg4[8] f* xmm7_42 + arg4[0xc] f* xmm5_46
        float var_10_1 =
            arg4[1] f* xmm7_37 + arg4[5] f* xmm7_32 + arg4[9] f* xmm7_42 + arg4[0xd] f* xmm5_46
        float xmm1_64 =
            arg4[6] f* xmm7_32 + xmm7_37 f* arg4[2] + xmm7_42 f* arg4[0xa] + xmm5_46 f* arg4[0xe]
        float xmm2_23 =
            xmm7_37 f* arg4[3] + xmm7_32 f* arg4[7] + xmm7_42 f* arg4[0xb] + xmm5_46 f* arg4[0xf]
        *(arg1 + 0xbc) = var_44.o
        float var_c_1 = xmm1_64
        *(arg1 + 0xcc) = xmm1_22.o
        float var_8_1 = xmm2_23
        *(arg1 + 0xdc) = xmm1_38.o
        *(arg1 + 0xec) = xmm1_54.o
        float xmm4_8 = ecx_5[2] f* *(arg1 + 0x4c) + ecx_5[6] f* *(arg1 + 0x50)
            + ecx_5[0xa] f* *(arg1 + 0x54) f+ ecx_5[0xe]
        float xmm5_52 = ecx_5[3] f* *(arg1 + 0x4c) + ecx_5[7] f* *(arg1 + 0x50)
            + ecx_5[0xb] f* *(arg1 + 0x54) f+ ecx_5[0xf]
        xmm5_52 - 1f
        int32_t* eax_5
        eax_5:1.b = (xmm5_52 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm5_52, 1f) ? 1 : 0) << 2
            | (xmm5_52 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            xmm5_52 f- 0
            eax_5:1.b = (xmm5_52 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_52, 0f) ? 1 : 0) << 2
                | (xmm5_52 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                xmm4_8 = 1f / xmm5_52 * xmm4_8
        
        int32_t ecx_6 = *(arg1 + 0xfc)
        *(arg1 + 0x70) = xmm4_8
        int32_t edx_1
        
        if (ecx_6 s>= 0)
            edx_1 = *ebx_1
        
        int32_t var_64
        void var_58
        
        if (ecx_6 s< 0 || ecx_6 s>= (ebx_1[1] - edx_1) s>> 6)
            result = nullptr
            *(arg1 + 0x100) = _mm_unpacklo_ps(zx.o(0), 0)
        else
            var_64 = 0
            int32_t var_60_1 = 0
            int32_t var_5c_1 = 0
            float* eax_9 = sub_47b190(&var_64, &var_58, (ecx_6 << 6) + edx_1)
            *(arg1 + 0x100) = *eax_9
            result = eax_9[2]
        
        bool cond:0_1 = *(arg1 + 0x12b) == 0
        *(arg1 + 0x108) = result
        
        if (cond:0_1)
            *(arg1 + 0x148) = 0
            *(arg1 + 0x14c) = 0
            *(arg1 + 0x150) = 0
            *(arg1 + 0x154) = 0
        else if (arg7 s> 2)
            struct sealengine::CSphereVolume::VTable** eax_11 =
                sub_554430(arg1, arg6, &var_58, ebx_1)
            *(arg1 + 0x148) = *(eax_11 + 4)
            *(arg1 + 0x150) = eax_11[3]
            *(arg1 + 0x154) = eax_11[4]
        else
            var_64 = *(arg1 + 0x100)
            int32_t var_60_2 = *(arg1 + 0x130)
            int32_t var_5c_2 = *(arg1 + 0x108)
            float* eax_10 = sub_47b190(&var_64, &var_58, arg1 + 0x7c)
            float xmm1_67 = *(arg1 + 0x64) f* *(arg1 + 0x130)
            *(arg1 + 0x148) = *eax_10
            *(arg1 + 0x150) = eax_10[2]
            *(arg1 + 0x154) = xmm1_67
        
        if (*(arg1 + 0x134) != 0 && arg5.b != 0)
            result = sub_52f460(arg1 + 0x138, arg1 + 0x11c, *(arg1 + 0x14))
            
            if (result.b == 0)
                return result

result.b = 1
return result
