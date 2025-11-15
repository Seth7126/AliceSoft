// 函数: sub_54e2e0
// 地址: 0x54e2e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?strtoxq@@YA_KPAUlocaleinfo_struct@@PBDPAPBDHH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = *arg1
void* const result_1 = result

if (result != 0)
    float* result_13
    float* result_18 = result_13
    struct common::CPoint::VTable* const var_74_1 = &common::CPoint::`vftable'
    struct common::CSize::VTable* const var_68_1 = &common::CSize::`vftable'
    struct common::CRect::VTable* const var_78 = &common::CRect::`vftable'
    int32_t var_70_1 = result_18[0x16]
    int32_t var_6c_1 = result_18[0x17]
    int32_t var_64_1 = result_18[0x18]
    int32_t var_60_1 = result_18[0x19]
    int32_t var_8_1 = 0
    float* result_16 = result_13
    int32_t esi_2 = result_18[0x1d]
    int32_t edi_2 = result_18[0x1e]
    void* const result_3 = result_1
    int32_t edx_2 = result_16[0x1c]
    result_16.b = result_16[0x1a].b
    int32_t ecx = result_18[0x1b]
    *(result_3 + 0x19) = result_16.b
    *(result_3 + 0x24) = ecx
    float ecx_1 = 3.57331108e-43f
    *(result_3 + 0x28) = edx_2
    *(result_3 + 0x30) = esi_2
    float* result_20 = result_13
    *(result_3 + 0x34) = edi_2
    int32_t eax_5 = result_20[0x1f]
    int32_t ebx_1 = result_20[0x20]
    int32_t edx_3 = result_20[0x21]
    
    if (ebx_1 != zx.d(ebx_1.b))
        int32_t eax_7 = 0xff
        
        if (ebx_1 s< 0)
            eax_7 = 0
        
        ebx_1 = eax_7
    
    if (edx_3 != zx.d(edx_3.b))
        int32_t eax_9 = 0xff
        
        if (edx_3 s< 0)
            eax_9 = 0
        
        edx_3 = eax_9
    
    int32_t var_58_1 = edx_3
    float edx_4 = result_20[0x22]
    
    if (edx_4 != zx.d(edx_4.b))
        float eax_11 = 3.57331108e-43f
        
        if (edx_4 s< 0)
            eax_11 = 0f
        
        edx_4 = eax_11
    
    float var_54 = edx_4
    int32_t var_50_1 = 0xff
    *(*arg1 + 0xe4) = ebx_1.o
    int32_t edi_3 = result_20[0x23]
    int32_t edx_5 = result_20[0x24]
    
    if (edi_3 != zx.d((result_20[0x23]).b))
        int32_t eax_15 = 0xff
        
        if (edi_3 s< 0)
            eax_15 = 0
        
        edi_3 = eax_15
    
    if (edx_5 != zx.d(edx_5.b))
        int32_t eax_17 = 0xff
        
        if (edx_5 s< 0)
            eax_17 = 0
        
        edx_5 = eax_17
    
    int32_t var_58_2 = edx_5
    float edx_6 = result_20[0x25]
    
    if (edx_6 != zx.d(edx_6.b))
        if (edx_6 s< 0)
            ecx_1 = 0f
        
        edx_6 = ecx_1
    
    void* eax_19 = *arg1
    var_54 = edx_6
    int32_t var_50_2 = 0
    *(eax_19 + 0xf4) = edi_3.o
    void* ecx_2 = *arg1
    float var_44 = result_20[0x13]
    int32_t xmm0_4 = result_20[0x14]
    *(ecx_2 + 0x104) = var_44
    *(ecx_2 + 0x108) = xmm0_4
    *(*arg1 + 0x10) = result_20[0x26]
    *(*arg1 + 0x10c) = result_20[0x27]
    *(*arg1 + 0x110) = result_20[0x28]
    *(*arg1 + 0xc) = result_20[0x29]
    void* ecx_6
    
    if (arg1[5].b == 0 || result_20[0x2a].b == 0)
        ecx_6.b = 0
    else
        ecx_6.b = 1
    
    *(*arg1 + 0x18) = ecx_6.b
    void* eax_27 = *arg1
    void* edi_4 = result_20[0x2e]
    int32_t* ecx_7 = *(eax_27 + 0x14)
    
    if (ecx_7 != 0)
        int32_t esi_3 = ecx_7[1]
        ecx_7[1] -= 1
        (**ecx_7)(esi_3 - 1)
        result_20 = result_13
    
    *(eax_27 + 0x14) = edi_4
    
    if (edi_4 != 0)
        *(edi_4 + 4)
        *(edi_4 + 4) += 1
    
    eax_27.b = result_20[0x15].b
    void* ecx_9 = *arg1
    *(arg1 + 0x15) = eax_27.b
    float* result_17
    
    if (ecx_9 == 0)
        result_17 = nullptr
    else if (*(arg1 + 0x16) == 0)
        int32_t* ecx_10 = *(ecx_9 + 0x118)
        
        if (ecx_10 != 0)
            result_17 = (*(*ecx_10 + 0x10))(eax_2)
        else
            result_17 = nullptr
    else
        result_17 = arg1[0xb]
    
    int32_t* ecx_11 = *arg1
    result_13 = result_17
    void* const result_2
    
    if (ecx_11 == 0)
        result_2 = nullptr
    else if (*(arg1 + 0x16) == 0)
        ecx_11 = ecx_11[0x46]
        
        if (ecx_11 != 0)
            result_2, ecx_11 = (*(*ecx_11 + 0x14))(eax_2)
        else
            result_2 = nullptr
    else
        result_2 = arg1[0xc]
    
    ecx_11.b = *(result_20 + 0x49)
    result_1 = result_2
    result_2.b = result_20[0x12].b
    char var_20_2 = result_2.b
    float var_3c = 0f
    float var_38_1 = 0f
    var_44 = 0f
    float var_40_2 = 0f
    char var_30_1 = ecx_11.b
    sub_54e7d0(&var_3c, &var_44, &result_13, &result_1, &var_78, ecx_11.b, result_2.b)
    float* result_19 = result_13
    int32_t eax_37
    
    if (eax_5 - 1 u> 8)
        eax_37 = 0
    else
        switch (eax_5 + &jump_table_54e798[2]:3)
            case &lookup_table_54e7a4, &lookup_table_54e7a4[3], &lookup_table_54e7a4[6]
                eax_37 = 0
            case &lookup_table_54e7a4[1], &lookup_table_54e7a4[4], &lookup_table_54e7a4[7]
                int32_t eax_34
                int32_t edx_8
                edx_8:eax_34 = sx.q(result_19)
                eax_37 = neg.d((eax_34 - edx_8) s>> 1)
            case &lookup_table_54e7a4[2], &lookup_table_54e7a4[5], &lookup_table_54e7a4[8]
                eax_37 = neg.d(result_19)
    
    void* const result_4 = result_1
    float result_5[0x4] = _mm_cvtepi32_ps(zx.o(eax_37))
    int32_t eax_44
    
    if (eax_5 - 1 u> 8)
        eax_44 = 0
    else
        switch (eax_5 + &jump_table_54e7b0[2]:3)
            case &lookup_table_54e7bc, &lookup_table_54e7bc[1], &lookup_table_54e7bc[2]
                eax_44 = 0
            case &lookup_table_54e7bc[3], &lookup_table_54e7bc[4], &lookup_table_54e7bc[5]
                int32_t eax_41
                int32_t edx_9
                edx_9:eax_41 = sx.q(result_4)
                eax_44 = neg.d((eax_41 - edx_9) s>> 1)
            case &lookup_table_54e7bc[6], &lookup_table_54e7bc[7], &lookup_table_54e7bc[8]
                eax_44 = neg.d(result_4)
    
    uint128_t result_21 = zx.o(result_13)
    float xmm6_1 = result_5[0]
    result_1 = result_5
    float result_14[0x4] = _mm_cvtepi32_ps(zx.o(eax_44))
    float xmm1_1 = _mm_cvtepi32_ps(result_21)
    result_13 = result_14
    float result_24 = result_14[0]
    float result_7[0x4] = xmm1_1 f+ result_5
    float result_9[0x4] = result_7
    float result_8[0x4] = _mm_cvtepi32_ps(zx.o(result_4)) f+ result_14
    float result_22 = result_8[0]
    
    if (var_30_1 == 0)
    label_54e65e:
        
        if (var_20_2 == 0)
            if (var_30_1 != 0 && var_20_2 != 0)
            label_54e682:
                result_1 = result_7
                xmm6_1 = result_9[0]
                result_24 = result_22
                result_13 = result_8
                result_7 = result_5
                goto label_54e695
            
            result_14 = result_13
        else
            xmm6_1 = result_5[0]
            result_1 = result_5
            result_5 = result_7
            result_13 = result_22
            result_24 = result_8[0]
            result_7 = result_9
        label_54e695:
            result_8 = result_14
            result_22 = result_14[0]
            result_9 = result_5
            result_14 = result_13
    else if (var_20_2 != 0)
        if (var_30_1 == 0)
            goto label_54e65e
        
        if (var_20_2 != 0)
            goto label_54e682
        
        result_14 = result_13
    else
        xmm6_1 = result_7[0]
        result_1 = result_9
        result_7 = result_5
        result_9 = result_5
    
    void* const result_6 = result_1
    char eax_46 = *(arg1 + 0x16)
    var_54 = xmm6_1
    float result_25 = result_24
    int32_t result_10 = result_7
    int32_t result_15 = result_14
    void* const result_12 = result_6
    result_1 = result_8
    float result_11 = result_9
    float result_23 = result_22
    int32_t ecx_15
    
    if (eax_46 == 0)
        ecx_15 = 0
    else
        ecx_15 = arg1[9]
    
    int32_t eax_47
    
    if (eax_46 == 0)
        eax_47 = 0
    else
        eax_47 = arg1[8]
    
    void* eax_48 = result_20[0x2f]
    float xmm2_4 = _mm_cvtepi32_ps(zx.o(eax_47))
    float xmm3_3 = _mm_cvtepi32_ps(zx.o(ecx_15))
    float xmm0_8 = xmm3_3 + var_38_1
    float xmm1_3 = xmm2_4 + var_3c
    float xmm2_5 = xmm2_4 + var_44
    float xmm3_4 = xmm3_3 + var_40_2
    float var_28_2 = xmm0_8
    float var_2c = xmm1_3
    float var_34 = xmm2_5
    float var_30_2 = xmm0_8
    var_3c = xmm1_3
    float var_38_2 = xmm3_4
    var_44 = xmm2_5
    float var_40_3 = xmm3_4
    void* eax_49
    
    if (eax_48 != 0)
        eax_49 = *(eax_48 + 8)
    else
        eax_49 = data_7fcba0
    
    result = sub_54eb50(arg1, *result_20, result_20[1], &result_20[2], &var_54, &result_10, 
        &result_12, &result_11, &var_2c, &var_34, &var_3c, &var_44, eax_49)

fsbase->NtTib.ExceptionList = ExceptionList
return result
