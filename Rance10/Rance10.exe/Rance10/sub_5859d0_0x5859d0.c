// 函数: sub_5859d0
// 地址: 0x5859d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x234) = *(arg1 + 0x230)
int32_t esi = 0
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x140) - *(arg2 + 0x13c))
int32_t edx_1 = edx s>> 3
int32_t var_fc = 0
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t result_1 = result

if (result s> 0)
    result = arg2
    int32_t ecx_2 = 0
    int32_t result_2 = result_1
    int32_t var_f0_1 = 0
    int32_t edi_6
    
    do
        int32_t* edi_2 = *(result + 0x13c) + ecx_2
        int32_t ecx_3 = edi_2[8]
        
        if (ecx_3 s>= 0)
            int32_t eax_5
            int32_t edx_2
            edx_2:eax_5 = muls.dp.d(0x4bda12f7, *(result + 0x124) - *(result + 0x120))
            int32_t edx_3 = edx_2 s>> 6
            
            if (ecx_3 s< (edx_3 u>> 0x1f) + edx_3)
                int32_t esi_1
                
                if (esi != arg3)
                    esi_1 = 0xff40ff
                    
                    if (var_fc == arg4)
                        esi_1 = 0xffff40
                else
                    esi_1 = 0x40ffff
                
                int32_t eax_10 = *edi_2
                
                if (eax_10 == 0)
                    void var_14
                    sub_582cd0(arg2, &var_14, &edi_2[1], ecx_3)
                    sub_585e20(arg1, *(arg1 + 0xc0) f* edi_2[7], &var_14, esi_1)
                else if (eax_10 == 1)
                    void var_8c
                    sub_582cd0(arg2, &var_8c, &edi_2[1], ecx_3)
                    void var_80
                    sub_582cd0(arg2, &var_80, &edi_2[4], ecx_3)
                    float xmm1_2 = edi_2[7] ^ (data_79aad0).d
                    int32_t var_ec = edi_2[1]
                    float var_e8_1 = edi_2[2] f+ xmm1_2
                    int32_t var_e4_1 = edi_2[3]
                    void var_68
                    sub_582cd0(arg2, &var_68, &var_ec, ecx_3)
                    int32_t var_e0 = edi_2[1]
                    float var_dc_1 = edi_2[2] f+ edi_2[7]
                    int32_t var_d8_1 = edi_2[3]
                    void var_50
                    sub_582cd0(arg2, &var_50, &var_e0, ecx_3)
                    int32_t var_d4 = edi_2[1]
                    int32_t var_d0_1 = edi_2[2]
                    float var_cc_1 = edi_2[3] f+ edi_2[7]
                    void var_38
                    sub_582cd0(arg2, &var_38, &var_d4, ecx_3)
                    float xmm1_4 = edi_2[7] ^ (data_79aad0).d
                    int32_t var_c8 = edi_2[1]
                    int32_t var_c4_1 = edi_2[2]
                    float var_c0_1 = edi_2[3] f+ xmm1_4
                    void var_20
                    sub_582cd0(arg2, &var_20, &var_c8, ecx_3)
                    float xmm1_6 = edi_2[7] ^ (data_79aad0).d
                    int32_t var_bc = edi_2[4]
                    float var_b8_1 = edi_2[5] f+ xmm1_6
                    int32_t var_b4_1 = edi_2[6]
                    void var_74
                    sub_582cd0(arg2, &var_74, &var_bc, ecx_3)
                    int32_t var_b0 = edi_2[4]
                    float var_ac_1 = edi_2[5] f+ edi_2[7]
                    int32_t var_a8_1 = edi_2[6]
                    void var_5c
                    sub_582cd0(arg2, &var_5c, &var_b0, ecx_3)
                    int32_t var_a4 = edi_2[4]
                    int32_t var_a0_1 = edi_2[5]
                    float var_9c_1 = edi_2[6] f+ edi_2[7]
                    void var_44
                    sub_582cd0(arg2, &var_44, &var_a4, ecx_3)
                    float xmm1_8 = edi_2[7] ^ (data_79aad0).d
                    int32_t var_98 = edi_2[4]
                    int32_t var_94_1 = edi_2[5]
                    float var_90_1 = edi_2[6] f+ xmm1_8
                    void var_2c
                    sub_582cd0(arg2, &var_2c, &var_98, ecx_3)
                    sub_585e20(arg1, edi_2[7], &var_8c, esi_1)
                    sub_585e20(arg1, edi_2[7], &var_80, esi_1)
                    sub_5857c0(arg1, &var_68, esi_1, &var_74, esi_1)
                    sub_5857c0(arg1, &var_50, esi_1, &var_5c, esi_1)
                    sub_5857c0(arg1, &var_38, esi_1, &var_44, esi_1)
                    sub_5857c0(arg1, &var_20, esi_1, &var_2c, esi_1)
            
            result_2 = result_1
            result = arg2
        
        edi_6 = var_fc + 1
        ecx_2 = var_f0_1 + 0x30
        var_fc = edi_6
        var_f0_1 = ecx_2
        esi = edi_6
    while (edi_6 s< result_2)

result.b = 1
return result
