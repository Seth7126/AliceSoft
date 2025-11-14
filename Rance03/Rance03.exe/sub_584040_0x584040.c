// 函数: sub_584040
// 地址: 0x584040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x10) != 0)
    int32_t* ecx = *(arg1 + 0xcc)
    
    if (ecx != 0 && (*(*ecx + 0x14))() != 0)
        sub_54a340(arg1 + 0x24, arg4)
        float var_40
        float* eax_3 = sub_584d10(arg1, &var_40)
        *(arg1 + 0xd4) = *eax_3
        *(arg1 + 0xe4) = *(eax_3 + 0x10)
        *(arg1 + 0xf4) = *(eax_3 + 0x20)
        *(arg1 + 0x104) = *(eax_3 + 0x30)
        float xmm1_1 = *(arg1 + 0xd4)
        float xmm4_1 = *(arg1 + 0xd8)
        float xmm3_1 = *(arg1 + 0xdc)
        float xmm2_1 = *(arg1 + 0xe0)
        float xmm6_1 = arg2[0xb]
        float xmm7_1 = arg2[0xf]
        float xmm5_5 = xmm1_1 * *arg2 + arg2[4] * xmm4_1 + arg2[8] * xmm3_1 + arg2[0xc] * xmm2_1
        float xmm0_12 = arg2[5] * xmm4_1
        var_40 = xmm5_5
        float xmm5_10 = arg2[1] * xmm1_1 + xmm0_12 + arg2[9] * xmm3_1 + arg2[0xd] * xmm2_1
        float var_3c_1 = xmm5_10
        float xmm5_15 =
            arg2[2] * xmm1_1 + arg2[6] * xmm4_1 + arg2[0xa] * xmm3_1 + arg2[0xe] * xmm2_1
        float var_38_1 = xmm5_15
        float xmm5_16 = arg2[3]
        float xmm3_2 = *(arg1 + 0xf0)
        float xmm2_2 = *(arg1 + 0xe8)
        float xmm1_5 = xmm5_16 * xmm1_1 + arg2[7] * xmm4_1 + xmm6_1 * xmm3_1 + xmm7_1 * xmm2_1
        float var_34_1 = xmm1_5
        float xmm1_6 = *(arg1 + 0xec)
        float xmm4_6 =
            *(arg1 + 0xe4) * *arg2 + xmm2_2 * arg2[4] + xmm1_6 * arg2[8] + xmm3_2 * arg2[0xc]
        float var_30_1 = xmm4_6
        float xmm4_11 =
            *(arg1 + 0xe4) * arg2[1] + xmm2_2 * arg2[5] + xmm1_6 * arg2[9] + xmm3_2 * arg2[0xd]
        float var_2c_1 = xmm4_11
        float xmm4_16 =
            *(arg1 + 0xe4) * arg2[2] + xmm2_2 * arg2[6] + xmm1_6 * arg2[0xa] + xmm3_2 * arg2[0xe]
        float var_28_1 = xmm4_16
        float xmm4_17 = arg2[7]
        float xmm2_4 = *(arg1 + 0xf8)
        float xmm1_8 = *(arg1 + 0xfc)
        float xmm0_53 =
            *(arg1 + 0xe4) * xmm5_16 + xmm2_2 * xmm4_17 + xmm1_6 * xmm6_1 + xmm3_2 * xmm7_1
        float xmm3_4 = *(arg1 + 0x100)
        float var_24_1 = xmm0_53
        float xmm5_21 =
            *(arg1 + 0xf4) * *arg2 + xmm2_4 * arg2[4] + xmm1_8 * arg2[8] + xmm3_4 * arg2[0xc]
        float var_20_1 = xmm5_21
        float xmm5_26 =
            *(arg1 + 0xf4) * arg2[1] + xmm2_4 * arg2[5] + xmm1_8 * arg2[9] + xmm3_4 * arg2[0xd]
        float var_1c_1 = xmm5_26
        float xmm5_30 =
            *(arg1 + 0xf4) * arg2[2] + xmm2_4 * arg2[6] + xmm1_8 * arg2[0xa] + xmm3_4 * arg2[0xe]
        float var_18_1 = xmm5_30
        float xmm2_6 = *(arg1 + 0x108)
        float xmm1_10 = *(arg1 + 0x10c)
        float xmm0_79 =
            *(arg1 + 0xf4) * arg2[3] + xmm2_4 * xmm4_17 + xmm1_8 * xmm6_1 + xmm3_4 * xmm7_1
        float xmm3_6 = *(arg1 + 0x110)
        float var_14_1 = xmm0_79
        float xmm5_35 =
            *(arg1 + 0x104) * *arg2 + xmm2_6 * arg2[4] + xmm1_10 * arg2[8] + xmm3_6 * arg2[0xc]
        float var_10_1 = xmm5_35
        float xmm5_40 =
            *(arg1 + 0x104) * arg2[1] + xmm2_6 * arg2[5] + xmm1_10 * arg2[9] + xmm3_6 * arg2[0xd]
        float var_c_1 = xmm5_40
        float xmm5_44 =
            *(arg1 + 0x104) * arg2[2] + xmm2_6 * arg2[6] + xmm1_10 * arg2[0xa] + xmm3_6 * arg2[0xe]
        float var_8_1 = xmm5_44
        float xmm0_105 =
            *(arg1 + 0x104) * arg2[3] + xmm2_6 * xmm4_17 + xmm1_10 * xmm6_1 + xmm3_6 * xmm7_1
        float var_4_1 = xmm0_105
        float xmm5_45 = arg3[2]
        float xmm6_2 = arg3[0xa]
        float xmm7_3 = arg3[7]
        float var_7c_1 =
            arg3[5] f* xmm5_10 + arg3[1] f* xmm5_5 + arg3[9] f* xmm5_15 + arg3[0xd] f* xmm1_5
        float xmm4_19 = arg3[0xf]
        float xmm3_9 = arg3[3]
        float xmm2_9 = arg3[0xb]
        float var_78_1 =
            arg3[6] f* xmm5_10 + xmm5_45 * xmm5_5 + xmm6_2 * xmm5_15 + arg3[0xe] f* xmm1_5
        float var_74_1 = xmm7_3 * xmm5_10 + xmm3_9 * xmm5_5 + xmm5_15 * xmm2_9 + xmm1_5 * xmm4_19
        float xmm1_36 =
            arg3[4] f* xmm4_11 + *arg3 * xmm4_6 + arg3[8] f* xmm4_16 + arg3[0xc] f* xmm0_53
        float var_6c_1 =
            arg3[5] f* xmm4_11 + arg3[1] f* xmm4_6 + arg3[9] f* xmm4_16 + arg3[0xd] f* xmm0_53
        float var_68_1 =
            arg3[6] f* xmm4_11 + xmm5_45 * xmm4_6 + xmm6_2 * xmm4_16 + arg3[0xe] f* xmm0_53
        float var_64_1 = xmm7_3 * xmm4_11 + xmm3_9 * xmm4_6 + xmm4_16 * xmm2_9 + xmm0_53 * xmm4_19
        float xmm1_56 =
            arg3[4] f* xmm5_26 + *arg3 * xmm5_21 + arg3[8] f* xmm5_30 + arg3[0xc] f* xmm0_79
        float var_5c_1 =
            arg3[5] f* xmm5_26 + arg3[1] f* xmm5_21 + arg3[9] f* xmm5_30 + arg3[0xd] f* xmm0_79
        float var_58_1 =
            arg3[6] f* xmm5_26 + xmm5_45 * xmm5_21 + xmm6_2 * xmm5_30 + arg3[0xe] f* xmm0_79
        float var_54_1 = xmm7_3 * xmm5_26 + xmm3_9 * xmm5_21 + xmm5_30 * xmm2_9 + xmm0_79 * xmm4_19
        float xmm1_76 =
            arg3[4] f* xmm5_40 + *arg3 * xmm5_35 + arg3[8] f* xmm5_44 + arg3[0xc] f* xmm0_105
        float var_4c_1 =
            arg3[5] f* xmm5_40 + arg3[1] f* xmm5_35 + arg3[9] f* xmm5_44 + arg3[0xd] f* xmm0_105
        float xmm1_86 =
            arg3[6] f* xmm5_40 + xmm5_45 * xmm5_35 + xmm6_2 * xmm5_44 + arg3[0xe] f* xmm0_105
        *(arg1 + 0x114) =
            (arg3[4] f* xmm5_10 + *arg3 * xmm5_5 + arg3[8] f* xmm5_15 + arg3[0xc] f* xmm1_5).o
        float var_48_1 = xmm1_86
        *(arg1 + 0x124) = xmm1_36.o
        float var_44_1 = xmm7_3 * xmm5_40 + xmm3_9 * xmm5_35 + xmm5_44 * xmm2_9 + xmm0_105 * xmm4_19
        *(arg1 + 0x134) = xmm1_56.o
        *(arg1 + 0x144) = xmm1_76.o
        float xmm2_10 = *(arg1 + 0x54)
        float xmm4_24 =
            arg2[2] f* *(arg1 + 0x4c) + arg2[6] f* *(arg1 + 0x50) + xmm2_10 * arg2[0xa] + arg2[0xe]
        float xmm5_53 =
            arg2[3] f* *(arg1 + 0x4c) + arg2[7] f* *(arg1 + 0x50) + arg2[0xb] * xmm2_10 + arg2[0xf]
        xmm5_53 - 1f
        int32_t* eax_4
        eax_4:1.b = (xmm5_53 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm5_53, 1f) ? 1 : 0) << 2
            | (xmm5_53 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            xmm5_53 - 0f
            eax_4:1.b = (xmm5_53 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_53, 0f) ? 1 : 0) << 2
                | (xmm5_53 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                xmm4_24 = 1f / xmm5_53 * xmm4_24
        
        *(arg1 + 0xc8) = xmm4_24
        sub_54a1e0(arg1 + 0x24, &var_40)

return 1
