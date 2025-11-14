// 函数: sub_482490
// 地址: 0x482490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba7d7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t ExceptionRecord = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_1 = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (esi_1 != 0)
    struct partsengine::CCharSpriteProperty::VTable* var_40
    sub_47fa90(arg2, &var_40)
    int32_t var_4 = 0
    void* eax_2 = *(arg2 + 0x50)
    int32_t eax_3 = *(arg2 + 0x54)
    int32_t eax_4 = *(esi_1 + 0x18)
    int32_t eax_5 = *(esi_1 + 0x1c)
    int32_t* var_88 = nullptr
    int32_t var_84_1 = 0
    int32_t var_80_1 = 0
    var_4.b = 1
    sub_481f80(&var_88, arg2 + 0x8c)
    void* var_a0_1 = *(arg2 + 0x1c)
    int32_t var_98_1 = *(arg2 + 0x20)
    struct partsengine::CLLSprite::VTable* var_6c
    sub_505680(&var_6c)
    var_4.b = 2
    int32_t ebx_2 = 0
    void* edi_1 = data_75d4cc
    int32_t* esi_2 = var_88
    int32_t var_3c
    *(edi_1 + 0x194) = var_3c
    int32_t var_38
    *(edi_1 + 0x198) = var_38
    char var_1c
    int32_t eax_9
    eax_9.b = var_1c
    char var_b0 = eax_9.b
    char var_18
    eax_9.b = var_18
    char var_af_1 = eax_9.b
    char var_14
    eax_9.b = var_14
    char var_ae_1 = eax_9.b
    char var_ad_1 = 0xff
    *(edi_1 + 0x1a8) = var_b0.d
    char var_34
    int32_t eax_10
    eax_10.b = var_34
    var_b0 = eax_10.b
    char var_30
    eax_10.b = var_30
    char var_af_2 = eax_10.b
    char var_2c
    eax_10.b = var_2c
    char var_ae_2 = eax_10.b
    char var_ad_2 = 0xff
    *(edi_1 + 0x19c) = var_b0.d
    int32_t var_20
    *(edi_1 + 0x1a4) = var_20
    int32_t var_24
    *(edi_1 + 0x1a0) = var_24
    void* var_9c_1 = edi_1
    char var_a5_1 = 0
    int32_t ebp_3 = (var_84_1 - esi_2) s/ 0x18
    int32_t var_78_1 = ebp_3
    int32_t* var_94
    struct partsengine::CSpriteEngineWrapper::VTable* const vFunc_2
    int32_t* var_68
    
    if (ebp_3 s> 0)
        while (true)
            int32_t eax_12 = ebx_2 * 3
            int32_t* esi_3 = &esi_2[eax_12 * 2]
            int32_t edi_2 = esi_3[4]
            int32_t* ecx_6
            
            if (esi_2[eax_12 * 2 + 5] u< 0x10)
                ecx_6 = esi_3
            else
                ecx_6 = *esi_3
            
            int32_t eax_13 = 1
            
            if (edi_2 u< 1)
                eax_13 = edi_2
            
            int32_t eax_14 = sub_405190(eax_13, 0x6de02c, ecx_6, eax_13)
            bool cond:1_1 = eax_14 == 0
            
            if (eax_14 == 0)
                if (edi_2 u>= 1)
                    eax_14.b = edi_2 != 1
                else
                    eax_14 = 0xffffffff
                
                cond:1_1 = eax_14 == 0
            
            eax_14.b = cond:1_1
            
            if (eax_14.b == 0)
                void* var_ac
                void* var_a4
                
                if (edi_2 != 2)
                label_482999:
                    sub_506a20(&var_6c, esi_3)
                    void* esi_10
                    int32_t edi_6
                    
                    if (var_68 != 0)
                        edi_6 = var_68[6]
                        esi_10 = var_68[7]
                    else
                        edi_6 = 0
                        esi_10 = nullptr
                    
                    void* eax_41 = eax_4 - var_a0_1
                    void** ecx_33 = &var_b0
                    var_ac = eax_41
                    
                    if (edi_6 s>= eax_41)
                        ecx_33 = &var_ac
                    
                    void* eax_43 = eax_5 - var_98_1
                    var_b0.d = edi_6
                    var_a4 = esi_10
                    void* ebp_5 = *ecx_33
                    void** ecx_34 = &var_a4
                    var_ac = eax_43
                    
                    if (esi_10 s>= eax_43)
                        ecx_34 = &var_ac
                    
                    var_a4 = *ecx_34
                    int32_t eax_48
                    
                    if (var_68 == 0)
                        eax_48 = 0
                    else
                        void* esi_11 = data_75d4cc
                        var_ac = var_68[2]
                        sub_42f3d0(esi_11 + 0x2a0, &var_94, &var_ac)
                        int32_t* eax_46 = var_94
                        
                        if (eax_46 == *(esi_11 + 0x2a0))
                            eax_48 = 0
                        else
                            void* eax_47 = eax_46[5]
                            
                            if (eax_47 == 0)
                                eax_48 = 0
                            else
                                eax_48 = *(eax_47 + 0xd8)
                    
                    void* var_c8_11 = var_a4
                    void* var_cc_5 = ebp_5
                    int32_t var_d8_2 = eax_48
                    int32_t var_dc_2 = var_98_1
                    sub_507460(arg1, var_a0_1)
                    edi_1 = data_75d4cc
                    var_9c_1 = edi_1
                    var_a0_1 += eax_2 + edi_6
                else
                    int32_t ecx_8 = esi_3[5]
                    int32_t* eax_18
                    
                    if (ecx_8 u< 0x10)
                        eax_18 = esi_3
                    else
                        eax_18 = *esi_3
                    
                    if (*eax_18 != 0x81)
                        goto label_482999
                    
                    int32_t* eax_19
                    
                    if (ecx_8 u< 0x10)
                        eax_19 = esi_3
                    else
                        eax_19 = *esi_3
                    
                    if (*(eax_19 + 1) != 0x5c)
                        goto label_482999
                    
                    ebx_2 += 1
                    void* esi_4 = 1
                    var_b0.d = 1
                    
                    if (ebx_2 s< ebp_3)
                        void* eax_21 = &var_88[ebx_2 * 6]
                        
                        while (true)
                            if (*(eax_21 + 0x10) == 2)
                                int32_t edx_3 = *(eax_21 + 0x14)
                                void* ecx_10
                                
                                if (edx_3 u< 0x10)
                                    ecx_10 = eax_21
                                else
                                    ecx_10 = *eax_21
                                
                                if (*ecx_10 == 0x81)
                                    void* ecx_11
                                    
                                    if (edx_3 u< 0x10)
                                        ecx_11 = eax_21
                                    else
                                        ecx_11 = *eax_21
                                    
                                    if (*(ecx_11 + 1) == 0x5c)
                                        esi_4 += 1
                                        ebx_2 += 1
                                        eax_21 += 0x18
                                        var_b0.d = esi_4
                                        
                                        if (ebx_2 s>= ebp_3)
                                            break
                                        
                                        continue
                            
                            if (ebx_2 s>= ebp_3)
                                break
                            
                            ebx_2 -= 1
                            break
                    
                    int32_t eax_22 = sub_44f0e0(var_9c_1 + 0x29c)
                    var_a4 = nullptr
                    var_ac = esi_4 - 1
                    void** esi_5 = &var_a4
                    
                    if (esi_4 - 1 s>= 0)
                        esi_5 = &var_ac
                    
                    void* edi_5 = sub_4ff540(&var_40) * var_b0.d + *esi_5 * eax_2
                    var_ac = edi_5
                    int32_t eax_24 = sub_4ff540(&var_40)
                    int32_t* edx_4 = &var_ac
                    void* ecx_20 = eax_4 - var_a0_1
                    var_a4 = ecx_20
                    var_b0.d = eax_24
                    
                    if (edi_5 s>= ecx_20)
                        edx_4 = &var_a4
                    
                    char* ecx_21 = &var_b0
                    var_a4 = *edx_4
                    void* eax_27 = eax_5 - var_98_1
                    var_ac = eax_27
                    
                    if (eax_24 s>= eax_27)
                        ecx_21 = &var_ac
                    
                    var_ac = *ecx_21
                    var_b0.d = &partsengine::CSpriteEngineWrapper::`vftable'
                    var_4.b = 3
                    result = sub_5eedf0(var_9c_1 + 0x1ac, edi_5, eax_24, var_9c_1 + 0x190)
                    
                    if (result == 0)
                        result.b = 0
                    else
                        int32_t var_c8_5 = eax_22
                        void* eax_30 = sub_44e5c0(var_9c_1 + 0x288)
                        
                        if (eax_30 == 0)
                            (*result)->Handler(ExceptionRecord)
                            result.b = 0
                        else
                            sub_44eaf0(eax_30, result)
                            (*result)->Handler(ExceptionRecord)
                            result.b = 1
                    
                    var_4.b = 2
                    result.b = result.b == 0
                    
                    if (result.b != 0)
                        edi_1 = data_75d4cc
                        ebx_2.b = 1
                        break
                    
                    var_b0.d = &partsengine::CSpriteEngineWrapper::`vftable'
                    var_4.b = 4
                    void* esi_8 = data_75d4cc
                    void** eax_33 = *(esi_8 + 0x2a0)
                    void** edx_5 = eax_33
                    void** ecx_29 = eax_33[1]
                    
                    while (*(ecx_29 + 0xd) == 0)
                        if (ecx_29[4] s>= eax_22)
                            edx_5 = ecx_29
                            ecx_29 = *ecx_29
                        else
                            ecx_29 = ecx_29[2]
                    
                    void*** eax_34
                    
                    if (edx_5 == eax_33 || eax_22 s< edx_5[4])
                        void** var_48 = eax_33
                        eax_34 = &var_48
                    else
                        void** var_50 = edx_5
                        eax_34 = &var_50
                    
                    void** eax_35 = *eax_34
                    void* eax_36
                    
                    if (eax_35 != *(esi_8 + 0x2a0))
                        eax_36 = eax_35[5]
                    
                    int32_t eax_37
                    
                    if (eax_35 == *(esi_8 + 0x2a0) || eax_36 == 0)
                        eax_37 = 0
                    else
                        eax_37 = *(eax_36 + 0xd8)
                    
                    void* var_c8_7 = var_ac
                    void* esi_9 = var_a4
                    void* var_cc_3 = esi_9
                    int32_t var_d8_1 = eax_37
                    int32_t var_dc_1 = var_98_1
                    sub_507460(arg1, var_a0_1)
                    var_ac = &partsengine::CSpriteEngineWrapper::`vftable'
                    var_4.b = 5
                    edi_1 = data_75d4cc
                    var_9c_1 = edi_1
                    struct partsengine::CSpriteEngineWrapper::VTable* vFunc = *(edi_1 + 0x2a0)
                    struct partsengine::CSpriteEngineWrapper::VTable* vFunc_1 = vFunc
                    struct partsengine::CSpriteEngineWrapper::VTable* vFunc_0 = vFunc
                    
                    while (vFunc_0->__offset(0xd).b == 0)
                        if (vFunc_0 s>= eax_22)
                            vFunc_1 = vFunc_0
                            vFunc_0 = vFunc_0->vFunc_0
                    
                    struct partsengine::CSpriteEngineWrapper::VTable* const* eax_38
                    
                    if (vFunc_1 == vFunc || eax_22 s< vFunc_1)
                        vFunc_2 = vFunc
                        eax_38 = &vFunc_2
                    else
                        struct partsengine::CSpriteEngineWrapper::VTable* vFunc_3 = vFunc_1
                        eax_38 = &vFunc_3
                    
                    int32_t ecx_31
                    
                    if (*eax_38 != *(edi_1 + 0x2a0))
                        int32_t var_c8_8 = eax_22
                        result = sub_44dcc0(vFunc_0)
                        edi_1 = data_75d4cc
                        var_9c_1 = edi_1
                        ecx_31.b = result.b != 0
                    else
                        ecx_31 = 0
                    
                    var_4.b = 2
                    result.b = ecx_31 == 0
                    
                    if (result.b != 0)
                        ebx_2.b = 1
                        break
                    
                    var_a0_1 += eax_2 + esi_9
                ebp_3 = var_78_1
            else
                var_98_1 += sub_4ff540(&var_40) + eax_3
                edi_1 = var_9c_1
                var_a0_1 = *(arg2 + 0x1c)
            
            ebx_2 += 1
            
            if (ebx_2 s>= ebp_3)
                ebx_2.b = var_a5_1
                break
            
            esi_2 = var_88
    
    int32_t* ecx_38 = var_68
    
    if (ecx_38 != 0)
        int32_t esi_14 = ecx_38[2]
        ecx_38[1] -= 1
        
        if (ecx_38[1] s<= 0)
            (**ecx_38)(1)
            edi_1 = data_75d4cc
        
        vFunc_2 = &partsengine::CSpriteEngineWrapper::`vftable'
        var_4.b = 6
        int32_t* eax_51 = *(edi_1 + 0x2a0)
        int32_t* edx_8 = eax_51
        int32_t* ecx_37 = eax_51[1]
        
        while (*(ecx_37 + 0xd) == 0)
            if (ecx_37[4] s>= esi_14)
                edx_8 = ecx_37
                ecx_37 = *ecx_37
            else
                ecx_37 = ecx_37[2]
        
        if (edx_8 != eax_51)
            var_94 = edx_8
        
        if (edx_8 == eax_51 || esi_14 s< edx_8[4])
            var_94 = eax_51
        
        if (var_94 != *(edi_1 + 0x2a0))
            int32_t var_c8_12 = esi_14
            sub_44dcc0(ecx_37)
            edi_1 = data_75d4cc
        
        ecx_38 = nullptr
        var_4.b = 2
        var_68 = nullptr
    
    if (ebx_2.b == 0)
        ebx_2.b = 1
    else
        void* eax_52 = arg2 + 0x8c
        
        if (*(eax_52 + 0x14) u>= 0x10)
            eax_52 = *eax_52
        
        void* var_c8_13 = eax_52
        int32_t var_cc_6 = *(arg2 + 0x20)
        int32_t var_d0_2 = *(arg2 + 0x1c)
        sub_455870(0x6dea50)
        ecx_38 = var_68
        edi_1 = data_75d4cc
        ebx_2.b = 0
    
    var_6c = &partsengine::CLLSprite::`vftable'
    var_4.b = 9
    
    if (ecx_38 != 0)
        int32_t esi_15 = ecx_38[2]
        ecx_38[1] -= 1
        
        if (ecx_38[1] s<= 0)
            (**ecx_38)(1)
            edi_1 = data_75d4cc
        
        var_94 = &partsengine::CSpriteEngineWrapper::`vftable'
        var_4.b = 0xa
        int32_t* eax_55 = *(edi_1 + 0x2a0)
        int32_t* edx_9 = eax_55
        int32_t* ecx_39 = eax_55[1]
        
        while (*(ecx_39 + 0xd) == 0)
            if (ecx_39[4] s>= esi_15)
                edx_9 = ecx_39
                ecx_39 = *ecx_39
            else
                ecx_39 = ecx_39[2]
        
        int32_t* var_90_2
        
        if (edx_9 != eax_55)
            var_90_2 = edx_9
        
        if (edx_9 == eax_55 || esi_15 s< edx_9[4])
            var_90_2 = eax_55
        
        if (var_90_2 != *(edi_1 + 0x2a0))
            int32_t var_c8_14 = esi_15
            sub_44dcc0(ecx_39)
        
        int32_t var_68_1 = 0
    
    var_4.b = 8
    struct partsengine::CGraph::VTable* const var_58_1 = &partsengine::CGraph::`vftable'
    int32_t* var_54
    
    if (var_54 != 0)
        (*(*var_54 + 4))(ExceptionRecord)
        int32_t var_54_1 = 0
    
    var_4.b = 7
    struct partsengine::CSurfaceFactory::VTable* const var_60_1 =
        &partsengine::CSurfaceFactory::`vftable'
    int32_t* var_5c
    
    if (var_5c != 0)
        (*(*var_5c + 4))(ExceptionRecord)
        int32_t var_5c_1 = 0
    
    int32_t* edi_7 = var_88
    struct partsengine::CSpriteEngineWrapper::VTable* const var_64_1 =
        &partsengine::CSpriteEngineWrapper::`vftable'
    
    if (edi_7 != 0)
        int32_t* esi_16 = edi_7
        
        if (edi_7 != var_84_1)
            do
                if (esi_16[5] u>= 0x10)
                    j__free(*esi_16)
                
                esi_16[5] = 0xf
                esi_16[4] = 0
                *esi_16 = 0
                esi_16 = &esi_16[6]
            while (esi_16 != var_84_1)
        
        j__free(edi_7)
    
    result.b = ebx_2.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
