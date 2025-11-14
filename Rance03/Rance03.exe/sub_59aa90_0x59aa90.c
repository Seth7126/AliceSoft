// 函数: sub_59aa90
// 地址: 0x59aa90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0xc)

if (ecx == 0)
label_59aac6:
    int32_t* ecx_2 = *(arg1 + 0x10)
    
    if (ecx_2 == 0)
    label_59aaf1:
        void var_80
        int32_t* eax_8 = sub_5b0b20(&var_80, arg2 + 4)
        void var_40
        int32_t* result = sub_553150(&var_40, *(arg2 + 0x10))
        float xmm6 = eax_8[3]
        float xmm7 = eax_8[0xb]
        float xmm2 = *result
        float xmm5 = result[1]
        float xmm4 = result[2]
        float xmm3 = result[3]
        float var_bc = eax_8[1] f* xmm2 + eax_8[5] f* xmm5 + eax_8[9] f* xmm4 + eax_8[0xd] f* xmm3
        float xmm5_1 = result[4]
        float var_b8 = eax_8[2] f* xmm2 + eax_8[6] f* xmm5 + eax_8[0xa] f* xmm4 + eax_8[0xe] f* xmm3
        float xmm2_1 = result[6]
        float xmm4_1 = result[7]
        float xmm3_1 = result[5]
        float var_b4 = xmm6 * xmm2 + eax_8[7] f* xmm5 + xmm7 * xmm4 + eax_8[0xf] f* xmm3
        float xmm1_25 =
            xmm5_1 f* *eax_8 + xmm3_1 f* eax_8[4] + xmm2_1 f* eax_8[8] + xmm4_1 f* eax_8[0xc]
        float var_ac =
            xmm5_1 f* eax_8[1] + xmm3_1 f* eax_8[5] + xmm2_1 f* eax_8[9] + xmm4_1 f* eax_8[0xd]
        float xmm3_3 = result[9]
        float xmm2_3 = result[0xa]
        float xmm4_3 = result[0xb]
        float var_a8 =
            xmm5_1 f* eax_8[2] + xmm3_1 f* eax_8[6] + xmm2_1 f* eax_8[0xa] + xmm4_1 f* eax_8[0xe]
        float var_a4 = xmm5_1 * xmm6 + xmm3_1 f* eax_8[7] + xmm2_1 * xmm7 + xmm4_1 f* eax_8[0xf]
        float xmm5_6 = result[8]
        float xmm1_40 =
            xmm5_6 f* *eax_8 + xmm3_3 f* eax_8[4] + xmm2_3 f* eax_8[8] + xmm4_3 f* eax_8[0xc]
        float var_9c =
            xmm5_6 f* eax_8[1] + xmm3_3 f* eax_8[5] + xmm2_3 f* eax_8[9] + xmm4_3 f* eax_8[0xd]
        float xmm3_5 = result[0xd]
        float xmm2_5 = result[0xe]
        float xmm4_5 = result[0xf]
        float var_98 =
            xmm5_6 f* eax_8[2] + xmm3_3 f* eax_8[6] + xmm2_3 f* eax_8[0xa] + xmm4_3 f* eax_8[0xe]
        float var_94 = xmm5_6 * xmm6 + xmm3_3 f* eax_8[7] + xmm2_3 * xmm7 + xmm4_3 f* eax_8[0xf]
        float xmm5_11 = result[0xc]
        result.b = 1
        float xmm1_55 =
            xmm5_11 f* *eax_8 + xmm3_5 f* eax_8[4] + xmm2_5 f* eax_8[8] + xmm4_5 f* eax_8[0xc]
        float var_8c =
            xmm5_11 f* eax_8[1] + xmm3_5 f* eax_8[5] + xmm2_5 f* eax_8[9] + xmm4_5 f* eax_8[0xd]
        float xmm1_65 =
            xmm5_11 f* eax_8[2] + xmm3_5 f* eax_8[6] + xmm2_5 f* eax_8[0xa] + xmm4_5 f* eax_8[0xe]
        float xmm5_15 = xmm5_11 * xmm6 + xmm3_5 f* eax_8[7] + xmm2_5 * xmm7 + xmm4_5 f* eax_8[0xf]
        *(arg1 + 0x18) =
            (xmm2 f* *eax_8 + eax_8[4] f* xmm5 + xmm4 f* eax_8[8] + xmm3 f* eax_8[0xc]).o
        float var_88 = xmm1_65
        *(arg1 + 0x28) = xmm1_25.o
        float var_84 = xmm5_15
        *(arg1 + 0x38) = xmm1_40.o
        *(arg1 + 0x48) = xmm1_55.o
        return result
    
    if ((*(*ecx_2 + 0x14))() != 0)
        goto label_59aaf1
    
    if (sub_59a7c0(arg1) != 0)
        goto label_59aaf1
else
    if ((*(*ecx + 0x38))() != 0)
        goto label_59aac6
    
    if (sub_59a290(arg1) != 0)
        goto label_59aac6

return 0
