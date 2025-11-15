// 函数: sub_5ae7c0
// 地址: 0x5ae7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg1
void* eax

if (arg2 == 0)
    edi[0xd4].b = 0
    eax.b = 1
    return eax

int32_t xmm0 = (zx.o(0)).d
int32_t var_324 = 0
int32_t xmm2

if (edi[0xd1] != 1 || *(arg3 i+ 0x174) == 0)
    xmm2 = arg5
else
    eax, arg1 = ___std_acquire_shared_mutex_for_instance@4(arg3, edi[0xd2])
    xmm0 = (zx.o(0)).d
    
    if (eax == 0)
        xmm2 = (zx.o(0)).d
    else if (*(eax + 0x1e4) == 0)
        xmm2 = *(eax + 0x178)
    else
        xmm2 = (zx.o(0)).d

float xmm4 = edi[0xe7]
float xmm1_1 = xmm2 f- xmm4

if (edi[2] u> 5)
    edi[0xd4].b = 0
else if (edi[0x11] == 0 || (not(xmm4 f> xmm2) && xmm2 f< edi[0xe8]))
    eax.b = 1
    edi[0xd4].b = 1
else
    eax.b = 0
    edi[0xd4].b = 0

if (edi[0xd4].b != 0)
    float xmm3_1 = edi[0xe8]
    
    if (not(xmm4 >= xmm3_1))
        float xmm1_2 = xmm1_1 / (xmm3_1 - xmm4)
        
        if (not(0 f> xmm1_2))
            xmm0 = __minss_xmmss_memss(xmm1_2, 0x3f800000)
        
        var_324 = xmm0
    
    int32_t* var_334_2 = arg1
    int32_t* var_344_1 = arg1
    void var_208
    sub_5b12f0(edi, &var_208, arg3, arg4, xmm2, arg15, arg13, arg14)
    int128_t xmm1_3 = var_324
    float xmm3_6
    
    if (edi[0xdd].b == 0)
        xmm3_6 = edi[0xd5]
    else
        float xmm0_2 = edi[0xd5]
        xmm3_6 = (edi[0xd6] f- xmm0_2) f* xmm1_3 + xmm0_2
    
    float xmm4_4
    
    if (*(edi + 0x377) == 0)
        xmm4_4 = edi[0xd9]
    else
        float xmm0_3 = edi[0xd9]
        xmm4_4 = (edi[0xdc] f- xmm0_3) f* xmm1_3 + xmm0_3
    
    float xmm5_4
    
    if (*(edi + 0x376) == 0)
        xmm5_4 = edi[0xd8]
    else
        float xmm0_4 = edi[0xd8]
        xmm5_4 = (edi[0xdb] f- xmm0_4) f* xmm1_3 + xmm0_4
    
    float xmm2_4
    
    if (*(edi + 0x375) == 0)
        xmm2_4 = edi[0xd7]
    else
        float xmm0_5 = edi[0xd7]
        xmm2_4 = (edi[0xda] f- xmm0_5) f* xmm1_3 + xmm0_5
    
    bool cond:4_1 = edi[0xfc].b == 0
    float xmm0_7 = arg7[1] * xmm5_4 * xmm3_6
    float xmm2_6 = xmm2_4 * xmm3_6 * *arg7
    float var_2d0_1 = xmm0_7
    float xmm0_9 = arg7[2] * xmm4_4 * xmm3_6
    float var_2d4 = xmm2_6
    float var_2cc_1 = xmm0_9
    float var_318_1
    
    if (cond:4_1)
        var_318_1 = edi[0xf6]
    else
        float xmm0_10 = sub_568b00(&edi[0x71], xmm1_3)
        float xmm1_4 = edi[0xf6]
        var_318_1 = xmm0_10 * (edi[0xf7] f- xmm1_4) + xmm1_4
    
    float var_320_1
    
    if (*(edi + 0x3f1) == 0)
        var_320_1 = edi[0xf8]
    else
        float xmm0_14 = sub_568b00(&edi[0x75], var_324)
        float xmm1_6 = edi[0xf8]
        var_320_1 = xmm0_14 * (edi[0xf9] f- xmm1_6) + xmm1_6
    
    float var_324_1
    
    if (*(edi + 0x3f2) == 0)
        var_324_1 = edi[0xfa]
    else
        float xmm0_18 = sub_568b00(&edi[0x79], var_324)
        float xmm1_8 = edi[0xfa]
        var_324_1 = xmm0_18 * (edi[0xfb] f- xmm1_8) + xmm1_8
    
    float xmm5_6 = xmm1_1
    float xmm0_23 = sub_5b0610(edi, xmm5_6) * arg8
    int32_t ecx_8
    
    if ((edi[0xa8] - edi[0xa7]) s/ 0x1c s> 0)
        ecx_8 = *edi[0xa7]
    else
        ecx_8 = 0
    
    int128_t var_30c
    int128_t xmm0_24
    
    if (*(edi[0xa4] + 0x24) != 0)
        sub_579760(&edi[0xc2], _mm_cvtepi32_ps(zx.o(ecx_8)) + xmm5_6, &var_30c)
        xmm0_24 = var_30c
        xmm5_6 = xmm1_1
    else
        xmm0_24 = data_7e7128
    
    var_30c = xmm0_24
    float var_2e4 = var_30c.d * *arg9
    float var_2e0_1 = arg9[1] f* var_30c:4.d
    float var_2dc_1 = arg9[2] f* var_30c:8.d
    float var_2d8_1 = arg9[3] f* var_30c:0xc.d
    int32_t ecx_13
    
    if ((edi[0xa8] - edi[0xa7]) s/ 0x1c s> 0)
        ecx_13 = *edi[0xa7]
    else
        ecx_13 = 0
    
    int128_t xmm0_33
    
    if (*(edi[0xa4] + 0x28) != 0)
        ecx_13 = sub_5796a0(&edi[0xc5], _mm_cvtepi32_ps(zx.o(ecx_13)) + xmm5_6, &var_30c)
        xmm0_33 = var_30c
    else
        xmm0_33 = data_7fd4f4
    
    var_30c = xmm0_33
    float var_2f4 = var_30c.d + *arg10
    float var_2f0_1 = arg10[1] f+ var_30c:4.d
    float var_2ec_1 = arg10[2] f+ var_30c:8.d
    int32_t eax_15 = edi[2]
    float var_2e8_1 = arg10[3] f+ var_30c:0xc.d
    void var_248
    void var_1c8
    
    if (eax_15 == 0)
        int32_t var_338_4 = edi[0x103]
        int32_t var_33c_4 = edi[0x102]
        int32_t var_340_4 = edi[0x101]
        int32_t var_364
        int32_t var_360
        int32_t var_35c
        sub_561770(&var_1c8, var_364, var_360, var_35c)
        int32_t xmm0_49[0x4] = var_320_1 * 0.0174532924f
        int80_t x87_r0
        int32_t xmm0_50 = ___libm_sse2_cosf(xmm0_49, x87_r0)
        int80_t x87_r1
        int32_t xmm0_52 = ___libm_sse2_sinf(xmm0_49, x87_r1)
        int32_t var_348_5 = xmm0_50
        int32_t var_350_4 = xmm0_52
        float var_288
        sub_5616f0(&var_288, xmm0_50, xmm0_52 ^ (data_79aad0).d)
        int32_t xmm0_55[0x4] = var_324_1 * 0.0174532924f
        int80_t x87_r2
        int32_t xmm0_56 = ___libm_sse2_cosf(xmm0_55, x87_r2)
        int80_t x87_r3
        int32_t xmm0_58 = ___libm_sse2_sinf(xmm0_55, x87_r3)
        int32_t var_35c_3 = xmm0_56
        int32_t var_360_3 = xmm0_58 ^ 0x80000000
        float var_2c8
        sub_5615e0(&var_2c8, xmm0_56, xmm0_58)
        int32_t var_348_6 = 0x3f800000
        float var_35c_4 = *(arg3 i+ 0xc4) * xmm0_7
        void var_188
        sub_5868a0(&var_188, *(arg3 i+ 0xc0) * xmm2_6)
        int32_t var_338_5 = 0
        int32_t var_33c_5 = edi[0xdf] ^ 0x80000000
        int32_t var_340_5 = edi[0xde] ^ 0x80000000
        sub_561770(&var_248)
        void var_148
        int32_t* eax_23 = sub_561120(&var_148, var_318_1)
        void var_108
        float var_c8[0x10]
        float var_88[0x10]
        int32_t* eax_26 = sub_5b2020(
            sub_5b1f50(sub_5b1eb0(&var_248, &var_88, &var_188), &var_c8, &var_2c8), &var_108, 
            eax_23)
        int32_t var_2bc_1 = 0
        float xmm5_7 = var_288
        int32_t var_2ac_1 = 0
        int32_t var_29c_1 = 0
        int32_t var_28c_1 = 0x3f800000
        int32_t var_2c4_1 = eax_26[1]
        float var_280
        float xmm0_70 = var_280 f* *eax_26
        float var_268
        var_2c8 = var_268 f* eax_26[2] + xmm5_7 f* *eax_26
        float var_260
        float var_2c0_1 = var_260 f* eax_26[2] + xmm0_70
        int32_t var_2b4_1 = eax_26[5]
        float var_2b8_1 = var_268 f* eax_26[6] + xmm5_7 f* eax_26[4]
        float var_2a8_1 = var_268 f* eax_26[0xa]
        int32_t var_2a4_1 = eax_26[9]
        float var_2b0_1 = var_260 f* eax_26[6] + var_280 f* eax_26[4]
        float var_2a0_1 = var_260 f* eax_26[0xa]
        float var_298_1 = var_268 f* eax_26[0xe] + xmm5_7 f* eax_26[0xc]
        int32_t var_294_1 = eax_26[0xd]
        float var_290_1 = var_260 f* eax_26[0xe] + var_280 f* eax_26[0xc]
        float var_48[0x10]
        float* eax_27 = sub_5b1a00(&var_2c8, &var_48, &var_208)
        sub_528d20(eax_27, eax_27, &var_248, &var_1c8)
        void* var_338_8 = &var_248
        void* var_340_7 = &var_248
        sub_5978b0(&edi[0x120], xmm1_1, &var_248, arg15, &var_2e4, &var_2f4, xmm0_23, arg11, arg6, 
            arg17)
    else
        if (eax_15 == 1)
            int32_t var_348_3 = ecx_13
            void* eax_22 = sub_5af8a0(edi, xmm1_1, arg3, &edi[0x101], &var_2d4, 
                sub_5b1ca0(sub_57a9b0(&var_248, var_320_1, var_318_1, var_324_1), &var_1c8, 
                    &var_208), 
                &var_2e4, &var_2f4, xmm0_23, arg16, arg18, arg19, arg20, arg21)
            return eax_22
        
        if (eax_15 == 2)
            int32_t** esi_1 = edi[0x15a]
            int32_t edi_1 = edi[0x15b]
            
            if (esi_1 != edi_1)
                do
                    int32_t var_34c_2 = ecx_13
                    int32_t var_36c_1 = ecx_13
                    char eax_18
                    eax_18, ecx_13 = sub_57bc00(*esi_1, 1, arg3, arg4, xmm1_1, arg12, arg13, arg14, 
                        arg15, &var_2d4, &var_2e4, &var_2f4, xmm0_23, arg16, arg17, arg18, arg19, 
                        arg20, arg21)
                    
                    if (eax_18 == 0)
                        return 0
                    
                    esi_1 = &esi_1[1]
                while (esi_1 != edi_1)
                
                return 1

eax.b = 1
return eax
