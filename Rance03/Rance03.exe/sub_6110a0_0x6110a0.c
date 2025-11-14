// 函数: sub_6110a0
// 地址: 0x6110a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_16c
int32_t eax_1 = __security_cookie ^ &var_16c

if (sub_609080(arg1 + 0x50, arg4, arg5) != 0)
    goto label_611187

int32_t* ecx_1 = *(arg1 + 0x4c)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0x4c) = 0

int32_t* ecx_2 = *(arg1 + 0x48)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0x48) = 0

sub_6093d0(arg1 + 0x50)
struct IInterface::graphengined3d11::CPixelShader::VTable** eax_7

if (*(arg1 + 0x48) == 0)
    void* var_17c_1 = arg1 + 0x50
    int32_t* var_180_1 = arg4
    eax_7 = sub_613680(arg1)
    *(arg1 + 0x48) = eax_7
    
    if (eax_7 != 0)
        if (sub_61b050(eax_7) == 0)
            sub_64b530(0x6ebd7c)
            enum MESSAGEBOX_RESULT eax_9
            eax_9.b = 0
            sub_69a5bc(eax_1 ^ &var_16c)
            return eax_9
        
        if (sub_612940(arg1, arg4, arg5).b != 0)
            sub_6092b0(arg1 + 0x50, arg4)
            *(arg1 + 0x7f) = arg5
        label_611187:
            
            if ((*(*arg4 + 4))() != 1)
                if (sub_615230(arg1, arg2, arg3, arg4).b != 0)
                    int32_t var_17c_11 = arg7
                    int32_t var_180_5 = arg6
                    int32_t* var_188_2 = arg3
                    long double x87_r0
                    long double x87_r1
                    long double x87_r2
                    long double x87_r3
                    long double x87_r4
                    long double x87_r5
                    long double x87_r6
                    long double x87_r7
                    
                    if (sub_6172e0(arg1, x87_r0, x87_r1, x87_r2, x87_r3, x87_r4, x87_r5, x87_r6, 
                            x87_r7, arg2).b != 0 && sub_60a7a0(arg1 + 0x98, *(arg1 + 4)).b != 0)
                        eax_7 = sub_60a7f0(arg1 + 0xa0, *(arg1 + 4))
                        
                        if (eax_7.b != 0)
                            goto label_611ab6
                        
                        sub_69a5bc(eax_1 ^ &var_16c)
                        return eax_7
            else
                void var_e0
                float* eax_15 = sub_47b390(&var_e0, (*(*arg2 + 0xc))())
                void var_60
                int32_t* eax_18 = sub_47b390(&var_60, (**arg3)())
                float xmm6_1 = eax_15[0xb]
                float xmm1_1 = *eax_18
                float xmm4_1 = eax_18[1]
                float xmm3_1 = eax_18[2]
                float xmm2_1 = eax_18[3]
                float xmm5_5 = xmm1_1 * *eax_15 + eax_15[4] * xmm4_1 + xmm3_1 * eax_15[8]
                    + xmm2_1 * eax_15[0xc]
                float xmm5_10 = eax_15[1] * xmm1_1 + eax_15[5] * xmm4_1 + eax_15[9] * xmm3_1
                    + eax_15[0xd] * xmm2_1
                float xmm5_15 = eax_15[2] * xmm1_1 + eax_15[6] * xmm4_1 + eax_15[0xa] * xmm3_1
                    + eax_15[0xe] * xmm2_1
                float xmm5_16 = eax_15[3]
                float xmm4_2 = eax_15[0xf]
                float xmm3_2 = eax_18[7]
                float xmm2_2 = eax_18[5]
                float xmm1_5 =
                    xmm5_16 * xmm1_1 + eax_15[7] * xmm4_1 + xmm6_1 * xmm3_1 + xmm4_2 * xmm2_1
                float xmm0_27 = eax_18[4]
                float xmm1_6 = eax_18[6]
                float xmm7_6 = xmm0_27 * *eax_15 + xmm2_2 * eax_15[4] + xmm1_6 * eax_15[8]
                    + xmm3_2 * eax_15[0xc]
                float xmm7_11 = xmm0_27 * eax_15[1] + xmm2_2 * eax_15[5] + xmm1_6 * eax_15[9]
                    + xmm3_2 * eax_15[0xd]
                float xmm7_15 = xmm0_27 * eax_15[2] + xmm2_2 * eax_15[6] + xmm1_6 * eax_15[0xa]
                    + xmm3_2 * eax_15[0xe]
                float xmm2_4 = eax_18[9]
                float xmm1_8 = eax_18[0xa]
                float xmm0_52 =
                    xmm0_27 * xmm5_16 + xmm2_2 * eax_15[7] + xmm1_6 * xmm6_1 + xmm3_2 * xmm4_2
                float xmm3_4 = eax_18[0xb]
                float xmm0_53 = eax_18[8]
                float xmm7_20 = xmm0_53 * *eax_15 + xmm2_4 * eax_15[4] + xmm1_8 * eax_15[8]
                    + xmm3_4 * eax_15[0xc]
                float xmm7_25 = xmm0_53 * eax_15[1] + xmm2_4 * eax_15[5] + xmm1_8 * eax_15[9]
                    + xmm3_4 * eax_15[0xd]
                float xmm7_29 = xmm0_53 * eax_15[2] + xmm2_4 * eax_15[6] + xmm1_8 * eax_15[0xa]
                    + xmm3_4 * eax_15[0xe]
                float xmm2_6 = eax_18[0xd]
                float xmm1_10 = eax_18[0xe]
                float xmm0_78 =
                    xmm0_53 * xmm5_16 + xmm2_4 * eax_15[7] + xmm1_8 * xmm6_1 + xmm3_4 * xmm4_2
                float xmm3_6 = eax_18[0xf]
                float xmm0_79 = eax_18[0xc]
                float xmm7_34 = xmm0_79 * *eax_15 + xmm2_6 * eax_15[4] + xmm1_10 * eax_15[8]
                    + xmm3_6 * eax_15[0xc]
                float xmm7_39 = xmm0_79 * eax_15[1] + xmm2_6 * eax_15[5] + xmm1_10 * eax_15[9]
                    + xmm3_6 * eax_15[0xd]
                float xmm7_43 = xmm0_79 * eax_15[2] + xmm2_6 * eax_15[6] + xmm1_10 * eax_15[0xa]
                    + xmm3_6 * eax_15[0xe]
                float xmm0_104 =
                    xmm0_79 * xmm5_16 + xmm2_6 * eax_15[7] + xmm1_10 * xmm6_1 + xmm3_6 * xmm4_2
                void var_a0
                float* eax_21 = sub_47b390(&var_a0, (*(*arg2 + 0x18))())
                float xmm7_44 = eax_21[6]
                float xmm6_2 = eax_21[2]
                float xmm0_112 = xmm5_10 * eax_21[5]
                float var_120 = xmm5_5 * *eax_21 + xmm5_10 * eax_21[4] + xmm5_15 * eax_21[8]
                    + xmm1_5 * eax_21[0xc]
                float xmm4_4 = eax_21[0xb]
                float var_11c_1 =
                    xmm5_5 * eax_21[1] + xmm0_112 + xmm5_15 * eax_21[9] + xmm1_5 * eax_21[0xd]
                float xmm5_18 = eax_21[0xf]
                float xmm3_9 = eax_21[7]
                float xmm2_9 = eax_21[3]
                float var_118_1 = xmm5_5 * xmm6_2 + xmm5_10 * xmm7_44 + xmm5_15 * eax_21[0xa]
                    + xmm1_5 * eax_21[0xe]
                float var_114_1 =
                    xmm5_5 * xmm2_9 + xmm5_10 * xmm3_9 + xmm5_15 * xmm4_4 + xmm1_5 * xmm5_18
                float var_110_1 = xmm7_6 * *eax_21 + xmm7_11 * eax_21[4] + xmm7_15 * eax_21[8]
                    + xmm0_52 * eax_21[0xc]
                float var_10c_1 = xmm7_6 * eax_21[1] + xmm7_11 * eax_21[5] + xmm7_15 * eax_21[9]
                    + xmm0_52 * eax_21[0xd]
                float var_108_1 = xmm7_6 * xmm6_2 + xmm7_11 * xmm7_44 + xmm7_15 * eax_21[0xa]
                    + xmm0_52 * eax_21[0xe]
                float var_104_1 =
                    xmm7_6 * xmm2_9 + xmm7_11 * xmm3_9 + xmm7_15 * xmm4_4 + xmm0_52 * xmm5_18
                float var_100_1 = xmm7_20 * *eax_21 + xmm7_25 * eax_21[4] + xmm7_29 * eax_21[8]
                    + xmm0_78 * eax_21[0xc]
                float var_fc_1 = xmm7_20 * eax_21[1] + xmm7_25 * eax_21[5] + xmm7_29 * eax_21[9]
                    + xmm0_78 * eax_21[0xd]
                float var_f8_1 = xmm7_20 * xmm6_2 + xmm7_25 * xmm7_44 + xmm7_29 * eax_21[0xa]
                    + xmm0_78 * eax_21[0xe]
                float var_f4_1 =
                    xmm7_20 * xmm2_9 + xmm7_25 * xmm3_9 + xmm7_29 * xmm4_4 + xmm0_78 * xmm5_18
                float var_f0_1 = xmm7_34 * *eax_21 + xmm7_39 * eax_21[4] + eax_21[8] * xmm7_43
                    + eax_21[0xc] * xmm0_104
                float var_ec_1 = xmm7_34 * eax_21[1] + xmm7_39 * eax_21[5] + eax_21[9] * xmm7_43
                    + eax_21[0xd] * xmm0_104
                float var_e8_1 = xmm7_34 * xmm6_2 + xmm7_39 * xmm7_44 + eax_21[0xa] * xmm7_43
                    + eax_21[0xe] * xmm0_104
                float var_e4_1 =
                    xmm7_34 * xmm2_9 + xmm7_39 * xmm3_9 + xmm4_4 * xmm7_43 + xmm5_18 * xmm0_104
                
                if (sub_6129a0(arg1, &var_120, (*(*arg3 + 4))((*(*arg3 + 8))(arg4))).b != 0)
                    eax_7 = *(arg1 + 4)
                    int32_t ecx_20 = *(arg1 + 0xb4)
                    int32_t var_1c = arg6
                    int32_t var_18_1 = 0
                    int32_t var_14_1 = 0
                    int32_t var_10_1 = 0
                    int32_t* edx_2 = eax_7[0xe]
                    
                    if (ecx_20 != 0)
                        (*(*edx_2 + 0xc0))(edx_2, ecx_20, 0, 0, &var_1c, 0, 0)
                        
                        if (sub_60a7a0(arg1 + 0xa8, *(arg1 + 4)).b != 0
                            && sub_60a7f0(arg1 + 0xb0, *(arg1 + 4)).b != 0)
                        label_611ab6:
                            eax_7.b = 1
                            sub_69a5bc(eax_1 ^ &var_16c)
                            return eax_7

eax_7.b = 0
sub_69a5bc(eax_1 ^ &var_16c)
return eax_7
