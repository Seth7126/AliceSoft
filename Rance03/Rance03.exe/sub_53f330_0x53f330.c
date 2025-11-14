// 函数: sub_53f330
// 地址: 0x53f330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg1 + 0x1c0)

if (result == 0)
label_53f346:
    result.b = 0
    return result

sub_544300(arg2, (*(result + 0x44) - *(result + 0x40)) s/ 0x3c)
void* esi_1 = *(arg1 + 0x1c0)
int32_t i = 0

if ((*(esi_1 + 0x44) - *(esi_1 + 0x40)) s/ 0x3c s> 0)
    int32_t var_e4_1 = 0
    int32_t var_e8_1 = 0
    
    do
        int128_t xmm0_1 = data_7091c0
        struct sealengine::CSQT::VTable* const var_e0_1 = &sealengine::CSQT::`vftable'
        int32_t var_d4_1 = 0
        int32_t var_d8_1 = 0
        int32_t var_dc = 0
        int128_t var_d0 = xmm0_1
        
        if (i s< 0)
            goto label_53f346
        
        if (i s>= (*(esi_1 + 0x44) - *(esi_1 + 0x40)) s/ 0x3c)
            goto label_53f346
        
        int32_t eax_10 = *(esi_1 + 0x40)
        var_dc.o = *(var_e8_1 + eax_10 + 0x20)
        var_d0:0xc.d = *(var_e8_1 + eax_10 + 0x38)
        var_d0:4.q = *(var_e8_1 + eax_10 + 0x30)
        float var_80[0x10]
        float* eax_12 = sub_47c420(&var_dc, &var_80)
        void var_40
        int32_t* eax_13 = sub_5b0b20(&var_40, &var_d0:4)
        float xmm6_1 = eax_12[7]
        float xmm7_1 = eax_12[3]
        float xmm2_1 = *eax_13
        float xmm5_1 = eax_13[1]
        float xmm4_1 = eax_13[2]
        float xmm3_1 = eax_13[3]
        float var_bc_1 =
            eax_12[1] * xmm2_1 + eax_12[5] * xmm5_1 + eax_12[9] * xmm4_1 + eax_12[0xd] * xmm3_1
        float xmm5_2 = eax_13[4]
        float var_b8_1 =
            eax_12[2] * xmm2_1 + eax_12[6] * xmm5_1 + eax_12[0xa] * xmm4_1 + eax_12[0xe] * xmm3_1
        float xmm2_2 = eax_13[6]
        float xmm4_2 = eax_13[7]
        float xmm3_2 = eax_13[5]
        float var_b4_1 =
            xmm7_1 * xmm2_1 + xmm6_1 * xmm5_1 + eax_12[0xb] * xmm4_1 + eax_12[0xf] * xmm3_1
        float xmm1_25 =
            xmm5_2 * *eax_12 + xmm3_2 * eax_12[4] + xmm2_2 * eax_12[8] + xmm4_2 * eax_12[0xc]
        float var_ac_1 =
            xmm5_2 * eax_12[1] + xmm3_2 * eax_12[5] + xmm2_2 * eax_12[9] + xmm4_2 * eax_12[0xd]
        float xmm3_4 = eax_13[9]
        float xmm2_4 = eax_13[0xa]
        float xmm4_4 = eax_13[0xb]
        float var_a8_1 =
            xmm5_2 * eax_12[2] + xmm3_2 * eax_12[6] + xmm2_2 * eax_12[0xa] + xmm4_2 * eax_12[0xe]
        float var_a4_1 =
            xmm5_2 * xmm7_1 + xmm3_2 * xmm6_1 + xmm2_2 * eax_12[0xb] + xmm4_2 * eax_12[0xf]
        float xmm5_7 = eax_13[8]
        float xmm1_40 =
            xmm5_7 * *eax_12 + xmm3_4 * eax_12[4] + xmm2_4 * eax_12[8] + xmm4_4 * eax_12[0xc]
        float var_9c_1 =
            xmm5_7 * eax_12[1] + xmm3_4 * eax_12[5] + xmm2_4 * eax_12[9] + xmm4_4 * eax_12[0xd]
        float var_98_1 =
            xmm5_7 * eax_12[2] + xmm3_4 * eax_12[6] + xmm2_4 * eax_12[0xa] + xmm4_4 * eax_12[0xe]
        i += 1
        float xmm2_6 = eax_13[0xc]
        float xmm3_6 = eax_13[0xe]
        var_e8_1 += 0x3c
        float xmm4_6 = eax_13[0xf]
        float var_94_1 =
            xmm5_7 * xmm7_1 + xmm3_4 * xmm6_1 + xmm2_4 * eax_12[0xb] + xmm4_4 * eax_12[0xf]
        float xmm5_12 = eax_13[0xd]
        int128_t* eax_15 = *arg2 + var_e4_1
        var_e4_1 += 0x40
        float xmm1_55 =
            xmm2_6 * *eax_12 + xmm5_12 * eax_12[4] + xmm3_6 * eax_12[8] + xmm4_6 * eax_12[0xc]
        float var_8c_1 =
            xmm2_6 * eax_12[1] + xmm5_12 * eax_12[5] + xmm3_6 * eax_12[9] + xmm4_6 * eax_12[0xd]
        float xmm1_65 =
            xmm2_6 * eax_12[2] + xmm5_12 * eax_12[6] + xmm3_6 * eax_12[0xa] + xmm4_6 * eax_12[0xe]
        float xmm5_16 =
            xmm5_12 * xmm6_1 + xmm2_6 * xmm7_1 + xmm3_6 * eax_12[0xb] + xmm4_6 * eax_12[0xf]
        *eax_15 =
            (xmm2_1 * *eax_12 + eax_12[4] * xmm5_1 + eax_12[8] * xmm4_1 + eax_12[0xc] * xmm3_1).o
        float var_88_1 = xmm1_65
        eax_15[1] = xmm1_25.o
        float var_84_1 = xmm5_16
        eax_15[2] = xmm1_40.o
        eax_15[3] = xmm1_55.o
        esi_1 = *(arg1 + 0x1c0)
    while (i s< (*(esi_1 + 0x44) - *(esi_1 + 0x40)) s/ 0x3c)

result.b = 1
return result
