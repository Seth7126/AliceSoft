// 函数: sub_498150
// 地址: 0x498150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bbb50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_4a26a0(arg1[0x81], arg2)
void* ecx_1 = arg1[0x22]

if (*(ecx_1 + 0x8c) != result.b)
    *(ecx_1 + 0x8c) = result.b
    *(ecx_1 + 0x70) = 1

if (result.b != 0)
    void* eax_5 = arg1[0x81]
    struct partsengine::COriginPosMode::VTable* const var_5c =
        &partsengine::COriginPosMode::`vftable'
    int32_t var_58_1 = *(eax_5 + 0x88)
    int32_t var_c_1 = 0
    int32_t eax_9 = sub_50feb0(&var_5c, (*(*arg1 + 0x28))(1))
    var_5c = &partsengine::COriginPosMode::`vftable'
    void* eax_10 = arg1[0x81]
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_9))
    int32_t var_58_2 = *(eax_10 + 0x88)
    float var_54 = xmm0_2
    int32_t var_c_2 = 1
    int32_t eax_14 = sub_50ff00(&var_5c, (*(*arg1 + 0x2c))(1))
    int32_t var_c_3 = 0xffffffff
    void* ecx_6 = arg1[0x81]
    float var_60 = _mm_cvtepi32_ps(zx.o(eax_14))
    float xmm0_6 = sub_4a1c10(ecx_6) + var_54
    void* ecx_7 = arg1[0x81]
    var_54 = xmm0_6
    int32_t eax_15
    float xmm0_7
    eax_15, xmm0_7 = sub_4a1cf0(ecx_7)
    void* ecx_8 = arg1[0x22]
    float xmm3_1 = var_54
    float xmm2_2 = xmm0_7 + var_60
    float xmm1_1 = *(ecx_8 + 0x7c)
    xmm1_1 - xmm3_1
    eax_15:1.b = (xmm1_1 == xmm3_1 ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, xmm3_1) ? 1 : 0) << 2
        | (xmm1_1 < xmm3_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    bool p_4
    
    if (not(p_2))
        float xmm0_8 = *(ecx_8 + 0x80)
        xmm0_8 - xmm2_2
        eax_15:1.b = (xmm0_8 == xmm2_2 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, xmm2_2) ? 1 : 0) << 2
            | (xmm0_8 < xmm2_2 ? 1 : 0)
        p_4 = unimplemented  {test ah, 0x44}
    
    if (p_2 || p_4)
        *(ecx_8 + 0x7c) = xmm3_1
        *(ecx_8 + 0x80) = xmm2_2
        *(ecx_8 + 0x70) = 1
    
    ecx_8.b = *(arg1[0x81] + 0x8d)
    void* eax_17 = arg1[0x22]
    
    if (*(eax_17 + 0x8d) != ecx_8.b)
        *(eax_17 + 0x8d) = ecx_8.b
        *(eax_17 + 0x70) = 1
    
    void* ecx_9 = arg1[0x81]
    void* eax_18 = *(ecx_9 + 0xd8)
    
    if (eax_18 == 0)
        int32_t eax_21 = *(*(*(ecx_9 + 0x50) + 0x58) + 0x90)
        
        if (eax_21 s<= 0)
            eax_18 = nullptr
        else
            int32_t var_78_3 = eax_21
            void* eax_22 = sub_4a56f0(*(ecx_9 + 0x54))
            
            if (eax_22 == 0)
                eax_18 = nullptr
            else
                eax_18 = sub_4a2ab0(eax_22)
                
                if (eax_18 == 0)
                    eax_18 = nullptr
    
    sub_4a2af0(arg1[0x22], eax_18)
    float eax_23 = sub_4a2720(arg1[0x81])
    void* edx_1 = arg1[0x22]
    float* ecx_14 = &var_60
    var_60 = eax_23
    var_54 = 3.57331108e-43f
    
    if (eax_23 s>= 0xff)
        ecx_14 = &var_54
    
    var_5c = nullptr
    float* eax_24 = &var_5c
    
    if (*ecx_14 s> 0)
        eax_24 = ecx_14
    
    float eax_25 = *eax_24
    
    if (*(edx_1 + 0x90) != eax_25)
        *(edx_1 + 0x90) = eax_25
        *(edx_1 + 0x70) = 1
    
    int32_t ecx_15 = *(arg1[0x81] + 0xf0)
    void* eax_27 = arg1[0x22]
    
    if (*(eax_27 + 0xf0) != ecx_15)
        *(eax_27 + 0xf0) = ecx_15
        *(eax_27 + 0x70) = 1
    
    ecx_15.b = *(arg1[0x81] + 0xf4)
    void* eax_29 = arg1[0x22]
    
    if (*(eax_29 + 0xf4) != ecx_15.b)
        *(eax_29 + 0xf4) = ecx_15.b
        *(eax_29 + 0x70) = 1
    
    void* edi_1 = arg1[0x81]
    struct partsengine::COriginPosMode::VTable* eax_31 = sub_4a1bb0(edi_1) + *(edi_1 + 0xa0)
    var_5c = eax_31
    float* ecx_17 = &var_5c
    var_60 = 3.57331108e-43f
    
    if (eax_31 s>= 0xff)
        ecx_17 = &var_60
    
    float ebx_1 = *ecx_17
    struct partsengine::COriginPosMode::VTable* eax_33 = sub_4a1b50(edi_1) + *(edi_1 + 0x9c)
    float* edx_2 = &var_5c
    var_5c = eax_33
    var_60 = 3.57331108e-43f
    
    if (eax_33 s>= 0xff)
        edx_2 = &var_60
    
    void* ecx_19 = arg1[0x81]
    float edi_2 = *edx_2
    struct partsengine::COriginPosMode::VTable* eax_35 = sub_4a1af0(ecx_19) + *(ecx_19 + 0x98)
    var_60 = 3.57331108e-43f
    var_5c = eax_35
    struct partsengine::COriginPosMode::VTable* const* edx_3 = &var_5c
    
    if (eax_35 s>= 0xff)
        edx_3 = &var_60
    
    float var_78_5 = ebx_1
    float var_7c_1 = edi_2
    sub_4b7960(arg1[0x22] + 0x6c, *edx_3)
    void* edi_3 = arg1[0x81]
    int32_t eax_36 = sub_4a2850(edi_3)
    int32_t eax_37 = sub_4a2800(edi_3)
    int32_t eax_38 = sub_4a27b0(edi_3)
    int32_t var_78_6 = eax_36
    int32_t var_7c_2 = eax_37
    sub_4b7a20(arg1[0x22] + 0x6c, eax_38)
    int32_t ecx_27 = *(arg1[0x81] + 0xb0)
    void* eax_40 = arg1[0x22]
    
    if (*(eax_40 + 0xb0) != ecx_27)
        *(eax_40 + 0xb0) = ecx_27
        *(eax_40 + 0x70) = 1
    
    int32_t ecx_28 = *(arg1[0x81] + 0xf8)
    void* eax_42 = arg1[0x22]
    
    if (*(eax_42 + 0xf8) != ecx_28)
        *(eax_42 + 0xf8) = ecx_28
        *(eax_42 + 0x70) = 1
    
    int32_t var_4c
    char* eax_43 = sub_4a3390(arg1[0x81], &var_4c, 2)
    int32_t var_c_4 = 2
    void* esi_5 = arg1[0x22]
    
    if (sub_4058a0(*(esi_5 + 0x480) + 0x30, eax_43) == 0)
        char* ecx_33 = *(esi_5 + 0x480) + 0x30
        
        if (ecx_33 != eax_43)
            sub_401ff0(ecx_33, eax_43, 0, 0xffffffff)
        
        *(esi_5 + 0x70) = 1
    
    int32_t var_c_5 = 0xffffffff
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    int32_t var_34
    char* eax_45 = sub_4a3390(arg1[0x81], &var_34, 3)
    int32_t var_c_6 = 3
    void* esi_6 = arg1[0x22]
    char eax_46
    char* ecx_37
    eax_46, ecx_37 = sub_4058a0(*(esi_6 + 0x480) + 0x48, eax_45)
    
    if (eax_46 == 0)
        ecx_37 = *(esi_6 + 0x480) + 0x48
        
        if (ecx_37 != eax_45)
            sub_401ff0(ecx_37, eax_45, 0, 0xffffffff)
        
        *(esi_6 + 0x70) = 1
    
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    void* eax_47 = arg1[0x22]
    
    if (*(eax_47 + 0x47c) != 1)
        *(eax_47 + 0x47c) = 1
        *(eax_47 + 0x70) = 1
    
    ecx_37.b = *(arg1[0x81] + 0x47f)
    void* eax_49 = arg1[0x22]
    
    if (*(eax_49 + 0x47f) != ecx_37.b)
        *(eax_49 + 0x47f) = ecx_37.b
        *(eax_49 + 0x70) = 1
    
    ecx_37.b = *(arg1[0x81] + 0x47d)
    result = arg1[0x22]
    
    if (*(result + 0x47d) != ecx_37.b)
        *(result + 0x47d) = ecx_37.b
        result[0x1c].b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
