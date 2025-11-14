// 函数: sub_554c00
// 地址: 0x554c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((**(arg1 + 0x118))() == (arg2[1] - *arg2) s>> 6
        && (**(arg1 + 0x118))() == (*(arg1 + 0x110) - *(arg1 + 0x10c)) s>> 6)
    int32_t esi_6 = 0
    int32_t* eax_5 = (**(arg1 + 0x118))()
    
    if (eax_5 s<= 0)
        return eax_5
    
    int32_t ebx = 0
    int32_t eax_14
    
    do
        int32_t* ecx_3 = *(arg1 + 0x10c)
        float xmm5_1 = *(ecx_3 + ebx + 4)
        int32_t* eax_8 = *arg2 + ebx
        float xmm4_1 = *(ecx_3 + ebx)
        void* ecx_4 = ecx_3 + ebx
        float xmm3_1 = *(ecx_4 + 8)
        float xmm2_1 = *(ecx_4 + 0xc)
        float xmm6_1 = eax_8[3]
        float xmm7_1 = eax_8[0xb]
        float xmm1_5 =
            *eax_8 * xmm4_1 + eax_8[4] f* xmm5_1 + xmm3_1 f* eax_8[8] + xmm2_1 f* eax_8[0xc]
        float var_3c_1 =
            eax_8[1] f* xmm4_1 + eax_8[5] f* xmm5_1 + eax_8[9] f* xmm3_1 + eax_8[0xd] f* xmm2_1
        float xmm5_2 = *(ecx_4 + 0x10)
        float var_38_1 =
            eax_8[2] f* xmm4_1 + eax_8[6] f* xmm5_1 + eax_8[0xa] f* xmm3_1 + eax_8[0xe] f* xmm2_1
        float xmm4_2 = *(ecx_4 + 0x1c)
        float xmm3_2 = *(ecx_4 + 0x14)
        float xmm2_2 = *(ecx_4 + 0x18)
        float var_34_1 =
            xmm6_1 * xmm4_1 + eax_8[7] f* xmm5_1 + xmm7_1 * xmm3_1 + eax_8[0xf] f* xmm2_1
        float xmm1_25 =
            xmm5_2 f* *eax_8 + xmm3_2 f* eax_8[4] + xmm2_2 f* eax_8[8] + xmm4_2 f* eax_8[0xc]
        float var_2c_1 =
            xmm5_2 f* eax_8[1] + xmm3_2 f* eax_8[5] + xmm2_2 f* eax_8[9] + xmm4_2 f* eax_8[0xd]
        float xmm3_4 = *(ecx_4 + 0x24)
        float xmm2_4 = *(ecx_4 + 0x28)
        float xmm4_4 = *(ecx_4 + 0x2c)
        float var_28_1 =
            xmm5_2 f* eax_8[2] + xmm3_2 f* eax_8[6] + xmm2_2 f* eax_8[0xa] + xmm4_2 f* eax_8[0xe]
        float var_24_1 =
            xmm5_2 * xmm6_1 + xmm3_2 f* eax_8[7] + xmm2_2 * xmm7_1 + xmm4_2 f* eax_8[0xf]
        float xmm5_7 = *(ecx_4 + 0x20)
        float xmm1_40 =
            xmm5_7 f* *eax_8 + xmm3_4 f* eax_8[4] + xmm2_4 f* eax_8[8] + xmm4_4 f* eax_8[0xc]
        float var_1c_1 =
            xmm5_7 f* eax_8[1] + xmm3_4 f* eax_8[5] + xmm2_4 f* eax_8[9] + xmm4_4 f* eax_8[0xd]
        float xmm3_6 = *(ecx_4 + 0x34)
        float xmm2_6 = *(ecx_4 + 0x38)
        float xmm4_6 = *(ecx_4 + 0x3c)
        float var_18_1 =
            xmm5_7 f* eax_8[2] + xmm3_4 f* eax_8[6] + xmm2_4 f* eax_8[0xa] + xmm4_4 f* eax_8[0xe]
        float var_14_1 =
            xmm5_7 * xmm6_1 + xmm3_4 f* eax_8[7] + xmm2_4 * xmm7_1 + xmm4_4 f* eax_8[0xf]
        float xmm5_12 = *(ecx_4 + 0x30)
        float xmm1_55 =
            xmm5_12 f* *eax_8 + xmm3_6 f* eax_8[4] + xmm2_6 f* eax_8[8] + xmm4_6 f* eax_8[0xc]
        float var_c_1 =
            xmm5_12 f* eax_8[1] + xmm3_6 f* eax_8[5] + xmm2_6 f* eax_8[9] + xmm4_6 f* eax_8[0xd]
        float var_8_1 =
            xmm5_12 f* eax_8[2] + xmm3_6 f* eax_8[6] + xmm2_6 f* eax_8[0xa] + xmm4_6 f* eax_8[0xe]
        float var_4_1 =
            xmm5_12 * xmm6_1 + xmm3_6 f* eax_8[7] + xmm2_6 * xmm7_1 + xmm4_6 f* eax_8[0xf]
        
        if (esi_6 s>= 0 && esi_6 s< (**(arg1 + 0x118))())
            int128_t* eax_12 = *(arg1 + 0x11c) + ebx
            *eax_12 = xmm1_5.o
            eax_12[1] = xmm1_25.o
            eax_12[2] = xmm1_40.o
            eax_12[3] = xmm1_55.o
        
        esi_6 += 1
        ebx += 0x40
        eax_14 = (**(arg1 + 0x118))()
    while (esi_6 s< eax_14)
    
    return eax_14

return sub_548bd0(arg1 + 0x118)
