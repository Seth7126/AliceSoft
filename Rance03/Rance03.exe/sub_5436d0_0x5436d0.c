// 函数: sub_5436d0
// 地址: 0x5436d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_5434a0(arg1)
int32_t esi = 0
int32_t var_fc = 0
int32_t result = (*(arg2 + 0xfc) - *(arg2 + 0xf8)) s/ 0x38
int32_t result_1 = result

if (result s> 0)
    result = arg2
    int32_t ecx_2 = 0
    int32_t result_2 = result_1
    int32_t var_f0_1 = 0
    int32_t edi_6
    
    do
        void* edi_2 = *(result + 0xf8) + ecx_2
        int32_t ecx_3 = *(edi_2 + 0x28)
        
        if (ecx_3 s>= 0)
            int32_t eax_5
            int32_t edx_3
            edx_3:eax_5 = muls.dp.d(0x2fa0be83, *(result + 0xdc) - *(result + 0xd8))
            int32_t edx_4 = edx_3 s>> 5
            
            if (ecx_3 s< (edx_4 u>> 0x1f) + edx_4)
                float esi_1
                
                if (esi != arg3)
                    esi_1 = 2.34413677e-38f
                    
                    if (var_fc == arg4)
                        esi_1 = 2.3509618e-38f
                else
                    esi_1 = 5.96930585e-39f
                
                int32_t eax_10 = *(edi_2 + 8)
                
                if (eax_10 == 0)
                    void var_14
                    sub_53ef50(arg2, &var_14, edi_2 + 0xc, ecx_3)
                    sub_543b10(arg1, *(edi_2 + 0x24) f* *(arg1 + 0x5c), &var_14, esi_1)
                else if (eax_10 == 1)
                    void var_20
                    sub_53ef50(arg2, &var_20, edi_2 + 0xc, ecx_3)
                    void var_8c
                    sub_53ef50(arg2, &var_8c, edi_2 + 0x18, ecx_3)
                    float xmm1_2 = *(edi_2 + 0x24) ^ (data_7094c0).d
                    int32_t var_c8 = *(edi_2 + 0xc)
                    float var_c4_1 = *(edi_2 + 0x10) + xmm1_2
                    int32_t var_c0_1 = *(edi_2 + 0x14)
                    void var_38
                    sub_53ef50(arg2, &var_38, &var_c8, ecx_3)
                    int32_t var_d4 = *(edi_2 + 0xc)
                    float var_d0_1 = *(edi_2 + 0x10) f+ *(edi_2 + 0x24)
                    int32_t var_cc_1 = *(edi_2 + 0x14)
                    void var_80
                    sub_53ef50(arg2, &var_80, &var_d4, ecx_3)
                    int32_t var_a4 = *(edi_2 + 0xc)
                    int32_t var_a0_1 = *(edi_2 + 0x10)
                    float var_9c_1 = *(edi_2 + 0x14) f+ *(edi_2 + 0x24)
                    void var_5c
                    sub_53ef50(arg2, &var_5c, &var_a4, ecx_3)
                    float xmm1_4 = *(edi_2 + 0x24) ^ (data_7094c0).d
                    int32_t var_bc = *(edi_2 + 0xc)
                    int32_t var_b8_1 = *(edi_2 + 0x10)
                    float var_b4_1 = *(edi_2 + 0x14) + xmm1_4
                    void var_2c
                    sub_53ef50(arg2, &var_2c, &var_bc, ecx_3)
                    float xmm1_6 = *(edi_2 + 0x24) ^ (data_7094c0).d
                    int32_t var_e0 = *(edi_2 + 0x18)
                    float var_dc_1 = *(edi_2 + 0x1c) + xmm1_6
                    int32_t var_d8_1 = *(edi_2 + 0x20)
                    void var_68
                    sub_53ef50(arg2, &var_68, &var_e0, ecx_3)
                    int32_t var_ec = *(edi_2 + 0x18)
                    float var_e8_1 = *(edi_2 + 0x1c) f+ *(edi_2 + 0x24)
                    int32_t var_e4_1 = *(edi_2 + 0x20)
                    void var_50
                    sub_53ef50(arg2, &var_50, &var_ec, ecx_3)
                    int32_t var_b0 = *(edi_2 + 0x18)
                    int32_t var_ac_1 = *(edi_2 + 0x1c)
                    float var_a8_1 = *(edi_2 + 0x20) f+ *(edi_2 + 0x24)
                    void var_74
                    sub_53ef50(arg2, &var_74, &var_b0, ecx_3)
                    float xmm1_8 = *(edi_2 + 0x24) ^ (data_7094c0).d
                    int32_t var_98 = *(edi_2 + 0x18)
                    int32_t var_94_1 = *(edi_2 + 0x1c)
                    float var_90_1 = *(edi_2 + 0x20) + xmm1_8
                    void var_44
                    sub_53ef50(arg2, &var_44, &var_98, ecx_3)
                    sub_543b10(arg1, *(edi_2 + 0x24), &var_20, esi_1)
                    sub_543b10(arg1, *(edi_2 + 0x24), &var_8c, esi_1)
                    sub_5434e0(arg1, &var_38, esi_1, &var_68, esi_1)
                    sub_5434e0(arg1, &var_80, esi_1, &var_50, esi_1)
                    sub_5434e0(arg1, &var_5c, esi_1, &var_74, esi_1)
                    sub_5434e0(arg1, &var_2c, esi_1, &var_44, esi_1)
            
            result_2 = result_1
            result = arg2
        
        edi_6 = var_fc + 1
        ecx_2 = var_f0_1 + 0x38
        var_fc = edi_6
        var_f0_1 = ecx_2
        esi = edi_6
    while (edi_6 s< result_2)

result.b = 1
return result
