// 函数: sub_575660
// 地址: 0x575660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0x37c)

if (ecx != 0)
    *(ecx + 0x4c) = *arg3
    *(ecx + 0x54) = arg3[1].d
    int128_t var_14c
    EnumC13Lines::EnumC13Lines(&var_14c)
    
    if (arg5 u> 5)
        goto label_5759dc
    
    float var_180
    float var_17c
    float var_174
    float var_168
    float var_158
    int128_t var_13c
    int128_t var_12c
    int128_t xmm0_2
    int128_t xmm1_4
    int128_t xmm2_1
    int128_t xmm3_1
    
    switch (arg5)
        case 0
            EnumC13Lines::EnumC13Lines(&var_14c)
            sub_47b960(&var_14c, arg14)
            void var_c4
            EnumC13Lines::EnumC13Lines(&var_c4)
            sub_47b8b0(&var_c4, arg12)
            void var_104
            EnumC13Lines::EnumC13Lines(&var_104)
            sub_47b7f0(&var_104, arg13)
            float var_84[0x10]
            float* eax_4 = sub_52d060(&var_c4, &var_104, &var_84, &var_c4)
            float* eax_5 = sub_52d060(eax_4, eax_4, &var_104, &var_14c)
            float var_44[0x11]
            float* eax_6 = sub_52d060(eax_5, eax_5, &var_44, arg4)
            xmm0_2 = *eax_6
            xmm1_4 = *(eax_6 + 0x10)
            xmm2_1 = *(eax_6 + 0x20)
            xmm3_1 = *(eax_6 + 0x30)
        case 1, 2, 3, 4
            var_174 = *arg3 - *arg6
            float var_170_1 = *(arg3 + 4) - arg6[1]
            float var_16c_1 = arg3[1].d f- arg6[2]
            sub_59f780(&var_174, &var_180)
            float xmm7_1 = var_180
            float xmm3_2 = arg7[1]
            float xmm2_2 = arg7[2]
            float var_178
            var_174 = xmm3_2 * var_178 - xmm2_2 * var_17c
            float xmm1_8 = *arg7
            float var_16c_2 = xmm1_8 * var_17c - xmm3_2 * xmm7_1
            float var_170_2 = xmm2_2 * xmm7_1 - xmm1_8 * var_178
            sub_59f780(&var_174, &var_158)
            float xmm1_11 = var_158
            float var_150
            var_14c:8.d = var_150
            var_14c.d = xmm1_11
            float var_154
            var_14c:4.d = var_154
            var_13c.d = var_150 * var_17c - var_154 * var_178
            var_12c.d = xmm7_1
            var_12c:8.d = var_178
            var_13c:4.d = xmm1_11 * var_178 - var_150 * xmm7_1
            var_12c:4.d = var_17c
            var_13c:8.d = var_154 * xmm7_1 - xmm1_11 * var_17c
        label_5759bc:
            int128_t var_11c
            var_11c:0xc.d = 0x3f800000
            var_12c = zx.o(0)
            var_13c:0xc.d = 0
            var_14c:0xc.d = 0
        label_5759dc:
            xmm3_1 = var_11c
            xmm2_1 = var_12c
            xmm1_4 = var_13c
            xmm0_2 = var_14c
        case 5
            int64_t* edx_4 = arg7
            int32_t eax_9 = edx_4[1].d
            float xmm3_5 = *arg8
            float xmm2_8 = *edx_4
            var_180.q = *edx_4
            var_174.q = *arg8
            int32_t eax_10 = arg8[2]
            float xmm0_25 = xmm2_8 f* arg8[2]
            float xmm2_9 = xmm2_8 f* arg8[1]
            var_158 = arg8[2] f* *(edx_4 + 4) - arg8[1] f* edx_4[1].d
            float var_154_1 = xmm3_5 f* edx_4[1].d - xmm0_25
            float var_150_1 = xmm2_9 - xmm3_5 f* *(edx_4 + 4)
            sub_59f780(&var_158, &var_168)
            var_14c.d = var_168
            int32_t var_164
            var_14c:4.d = var_164
            int32_t var_160
            var_14c:8.d = var_160
            var_13c.d = var_180
            var_13c:4.d = var_17c
            var_13c:8.d = eax_9
            var_12c.d = var_174
            int32_t var_170
            var_12c:4.d = var_170
            var_12c:8.d = eax_10
            goto label_5759bc
    
    void* eax_11 = *(arg1 + 0x37c)
    int32_t edx_5 = 0
    *(eax_11 + 0x58) = xmm0_2
    *(eax_11 + 0x68) = xmm1_4
    *(eax_11 + 0x78) = xmm2_1
    *(eax_11 + 0x88) = xmm3_1
    *(*(arg1 + 0x37c) + 0x98) = *(arg2 + 0x5c) * arg10
    *(*(arg1 + 0x37c) + 0x9c) = *(arg2 + 0x60) * arg11
    *(*(arg1 + 0x37c) + 0xa0) = *(arg2 + 0x64) * arg9
    var_168 = *arg15 f* *(arg2 + 0x80)
    float var_164_1 = *(arg2 + 0x84) f* arg15[1]
    float var_160_1 = *(arg2 + 0x88) f* arg15[2]
    float var_15c_1 = *(arg2 + 0x8c) f* arg15[3]
    *(*(arg1 + 0x37c) + 0xa4) = var_168.o
    var_168 = *(arg2 + 0xa0) + *arg16
    float var_164_2 = *(arg2 + 0xa4) + arg16[1]
    float var_160_2 = *(arg2 + 0xa8) + arg16[2]
    float var_15c_2 = *(arg2 + 0xac) + arg16[3]
    *(*(arg1 + 0x37c) + 0xb4) = var_168.o
    void* ecx_15 = *(arg1 + 0x37c)
    int32_t* eax_19 = *(ecx_15 + 0x28)
    *(ecx_15 + 0xc4) = arg17
    int32_t ecx_16 = *(ecx_15 + 0x2c)
    uint32_t edi_5 = (ecx_16 - eax_19 + 3) u>> 2
    
    if (eax_19 u> ecx_16)
        edi_5 = 0
    
    if (edi_5 != 0)
        do
            void* ecx_17 = *eax_19
            eax_19 = &eax_19[1]
            edx_5 += 1
            *(ecx_17 + 0xb0) = arg17
        while (edx_5 != edi_5)
    
    eax_19.b = *(arg2 + 0xbd)
    *(*(arg1 + 0x37c) + 0x157) = eax_19.b
    eax_19.b = *(arg2 + 0xbe)
    *(*(arg1 + 0x37c) + 0x158) = eax_19.b
    eax_19.b = *(arg2 + 0xbf)
    *(*(arg1 + 0x37c) + 0x159) = eax_19.b
    void* ecx_20
    ecx_20.b = *(*(arg2 + 0xc0) + 8) != 0
    *(*(arg1 + 0x37c) + 0x15a) = ecx_20.b
    char eax_22 = sub_584040(*(arg1 + 0x37c), arg18, arg19, arg21)
    
    if (eax_22 == 0)
        return eax_22
    
    int32_t var_108 = *(arg1 + 0x37c)
    sub_412de0(arg20, &var_108)

int32_t eax
eax.b = 1
return eax
