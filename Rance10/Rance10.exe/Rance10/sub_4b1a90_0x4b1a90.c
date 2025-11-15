// 函数: sub_4b1a90
// 地址: 0x4b1a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg2
int32_t ebp
int32_t var_28 = ebp
int32_t ebp_2 = *(arg3 + 0x10) - *(arg3 + 8)
int32_t esi
int32_t var_2c = esi
int32_t var_4 = ebp_2
int32_t edi
int32_t var_30 = edi
int32_t* esp_1 = &var_30
int32_t edi_2 = *(arg3 + 0xc) - *(arg3 + 4)
int32_t ecx = *(arg1 + 0xb4)
void* eax_2 = *(*(arg1 + 0x158) + 0x40)
int32_t ecx_1 = neg.d(ecx)
void* var_34

if (ebx != (sbb.d(ecx_1, ecx_1, ecx != 0) & (ecx + 0xc)))
    int32_t ecx_4 = *(arg1 + 0xbc)
    int32_t ecx_5 = neg.d(ecx_4)
    
    if (ebx == (sbb.d(ecx_5, ecx_5, ecx_4 != 0) & (ecx_4 + 0xc)))
    label_4b1b32:
        int32_t edx_1 = *(arg1 + 0x164)
        void* ecx_20 = *(arg1 + 0x16c)
        int32_t eax_9 = *(arg1 + 0x168)
        int32_t var_8_1 = edx_1
        
        if (*(arg1 + 0x170) != 0)
            int32_t var_18_2 = *(arg1 + 0x160) + edi_2
            eax_9 -= edi_2
        
        int32_t ebx_1 = eax_9 + edi_2
        
        if (*(arg1 + 0x171) == 0)
            ebx_1 = eax_9
        
        int32_t var_c_1 = ebx_1
        ebx = arg2
        
        if (*(arg1 + 0x172) != 0)
            ecx_20 -= ebp_2
            int32_t var_8_2 = edx_1 + ebp_2
        
        void* eax_10 = ecx_20 + ebp_2
        
        if (*(arg1 + 0x173) == 0)
            eax_10 = ecx_20
        
        void* eax_11 = sub_4b3890(arg1)
        void* var_14_1
        void* eax_14
        void* ecx_24
        
        if (eax_11 == 0)
            eax_14 = *(arg1 + 0x158)
            ecx_24 = eax_14
            var_14_1 = eax_14
            void* var_20_2 = eax_14
        else
            var_34 = eax_2
            void* eax_12 = sub_4addd0(eax_11, var_34)
            var_34 = eax_2
            var_14_1 = eax_12
            ecx_24 = sub_4ade40(eax_11, var_34)
            eax_14 = var_14_1
            void* var_20_1 = ecx_24
        
        if (eax_14 == 0)
            var_14_1 = *(arg1 + 0x158)
        
        if (ecx_24 == 0)
            void* var_20_3 = *(arg1 + 0x158)
        
        if (eax_11 != 0)
            var_34 = eax_2
            eax_14 = sub_4ab9b0(eax_11 + 0xa0, var_34)
        
        if (eax_11 == 0 || eax_14.b == 0)
            eax_14.b = 0
        else
            eax_14.b = 1
        
        arg2.b = eax_14.b
        void** esp_2
        
        if (*(arg1 + 0x173) != 0 || eax_14.b != 0)
            void* eax_15 = *(arg1 + 0x158)
            var_34 = 1
            void* eax_17 = (*(**(eax_15 + 0x74) + 0x24))(var_34)
            void* const var_38 = var_14_1
            sub_4b39f0(sub_4efa20(*(arg1 + 0x158)), eax_17)
            var_38 = 1
            void* entry_ebx
            var_38 = (*(**(entry_ebx + 0x74) + 0x28))(var_38)
            esp_2 = &var_38
        else
            var_34 = eax_10
            esp_2 = &var_34
        
        *(esp_2 - 4) = esp_2[0xa]
        sub_4b39f0(sub_4efa20(esp_2[5]))
        esp_1 = &esp_2[1]
        char eax_23
        
        if (eax_11 != 0)
            *(esp_1 - 4) = esp_1[5]
            eax_23 = sub_4aba70(eax_11 + 0xa0)
        
        int32_t ecx_33
        
        if (eax_11 == 0 || eax_23 == 0)
            ecx_33 = esp_1[6]
        else
            ecx_33 = *(arg1 + 0x160)
        
        int32_t eax_24
        
        if (esp_1[0xd].b == 0)
            eax_24 = esp_1[0xa]
        else
            eax_24 = *(arg1 + 0x164)
        
        void* ecx_34 = esp_1[7]
        float xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_24))
        sub_4edc30(ecx_34, _mm_cvtepi32_ps(zx.o(ecx_33)), xmm2_2)
        ebp_2 = esp_1[0xb]
    else
        int32_t ecx_8 = *(arg1 + 0xc0)
        int32_t ecx_9 = neg.d(ecx_8)
        
        if (ebx == (sbb.d(ecx_9, ecx_9, ecx_8 != 0) & (ecx_8 + 0xc)))
            goto label_4b1b32
        
        int32_t ecx_12 = *(arg1 + 0xc4)
        int32_t ecx_13 = neg.d(ecx_12)
        
        if (ebx == (sbb.d(ecx_13, ecx_13, ecx_12 != 0) & (ecx_12 + 0xc)))
            goto label_4b1b32
        
        int32_t ecx_16 = *(arg1 + 0xc8)
        int32_t ecx_17 = neg.d(ecx_16)
        
        if (ebx == (sbb.d(ecx_17, ecx_17, ecx_16 != 0) & (ecx_16 + 0xc)))
            goto label_4b1b32
else if (*(arg1 + 0x170) == 0 && *(arg1 + 0x171) == 0 && *(arg1 + 0x172) == 0
        && *(arg1 + 0x173) == 0)
    void* eax_25 = sub_4b3890(arg1)
    void* ecx_37
    
    if (eax_25 == 0)
        ecx_37 = *(arg1 + 0x158)
    else
        var_34 = eax_2
        esp_1 = &var_30
        ecx_37 = sub_4addd0(eax_25, var_34)
    
    if (ecx_37 == 0)
        ecx_37 = *(arg1 + 0x158)
    
    int32_t eax_30 = *(arg1 + 0x160) + edi_2
    float xmm2_4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x164) + ebp_2))
    sub_4edc30(ecx_37, _mm_cvtepi32_ps(zx.o(eax_30)), xmm2_4)
int32_t ecx_38 = *(arg1 + 0xcc)
int32_t ecx_39 = neg.d(ecx_38)

if (ebx == (sbb.d(ecx_39, ecx_39, ecx_38 != 0) & (ecx_38 + 0xc)))
    void* ecx_42 = *(arg1 + 0x158)
    esp_1[0xa] = 0
    esp_1[0xd] = 0
    void* eax_32 = *(ecx_42 + 0x31c)
    int32_t eax_33
    
    if (eax_32 != 0)
        eax_33 = *(eax_32 + 8)
    else
        eax_33 = data_7fcba0
    
    *(esp_1 - 4) = eax_33
    *(esp_1 - 8) = ecx_42 + 0x268
    int64_t xmm2_5
    uint64_t xmm3_1[0x2]
    uint64_t xmm4_1[0x2]
    uint64_t xmm5_1[0x2]
    uint64_t xmm6_1[0x2]
    uint64_t xmm7_1[0x2]
    xmm2_5, xmm3_1, xmm4_1, xmm5_1, xmm6_1, xmm7_1 =
        sub_528b80(ecx_42 + 0x268, &esp_1[0xa], &esp_1[0xd], zx.o(0), zx.o(0))
    long double x87_r0
    long double x87_r1
    esp_1[0xd] = sub_63ce00(esp_1[0xd], x87_r0, x87_r1)
    long double x87_r2
    float xmm0_5 = sub_63ce00(esp_1[0xa], x87_r1, x87_r2)
    void* ecx_44 = esp_1[0xe]
    *(*(arg1 + 0xd0) + 0xaa) = 1
    void* eax_36 = *(arg1 + 0xd0)
    float xmm1_8 = _mm_cvtepi32_ps(zx.o(*(ecx_44 + 8))) - xmm0_5
    float xmm0_7 = _mm_cvtepi32_ps(zx.o(*(ecx_44 + 4)))
    *(eax_36 + 0x94) = xmm1_8
    *(eax_36 + 0x90) = xmm0_7 f- esp_1[0xd]
    void* eax_39 = *(arg1 + 0xd0)
    int64_t xmm0_10 = _mm_cvtepi32_pd(zx.q(ebp_2 * ebp_2 + edi_2 * edi_2))
    *(eax_39 + 0xd4) = _mm_cvtpd_ps(_mm_sqrt_sd(xmm0_10, xmm0_10))
    
    if (ebp_2 != 0 || edi_2 s<= 0)
        *(*(arg1 + 0xd0) + 0xe4) = fconvert.s(___libm_sse2_atan2(_mm_cvtepi32_pd(zx.q(ebp_2)), 
            _mm_cvtepi32_pd(zx.q(edi_2)), xmm2_5, xmm3_1, xmm4_1, xmm5_1, xmm6_1, xmm7_1)
            * 57.295777918682049)
    else
        *(*(arg1 + 0xd0) + 0xe4) = ebp_2

*(esp_1 - 4) = ebx
*(esp_1 - 8) = esp_1[0xe]
int32_t result = sub_4cbd50(arg1 + 0xc)
*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return result
