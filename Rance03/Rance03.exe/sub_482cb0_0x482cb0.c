// 函数: sub_482cb0
// 地址: 0x482cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba872
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
    void* eax_2 = arg2[0x14]
    int32_t eax_3 = arg2[0x15]
    int32_t eax_4 = *(esi_1 + 0x18)
    int32_t eax_5 = *(esi_1 + 0x1c)
    int32_t* var_88 = nullptr
    int32_t var_84_1 = 0
    int32_t var_80_1 = 0
    var_4.b = 1
    sub_481f80(&var_88, &arg2[0x23])
    void* ebp_1 = arg2[7]
    void* var_a0_1 = ebp_1
    int32_t var_9c_1 = arg2[8]
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
    int32_t eax_8
    eax_8.b = var_1c
    char var_b4_1 = eax_8.b
    char var_18
    eax_8.b = var_18
    char var_b3_1 = eax_8.b
    char var_14
    eax_8.b = var_14
    char var_b2_1 = eax_8.b
    char var_b1_1 = 0xff
    *(edi_1 + 0x1a8) = var_b4_1.d
    char var_34
    int32_t eax_9
    eax_9.b = var_34
    char var_b4_2 = eax_9.b
    char var_30
    eax_9.b = var_30
    char var_b3_2 = eax_9.b
    char var_2c
    eax_9.b = var_2c
    char var_b2_2 = eax_9.b
    char var_b1_2 = 0xff
    *(edi_1 + 0x19c) = var_b4_2.d
    int32_t var_20
    *(edi_1 + 0x1a4) = var_20
    int32_t var_24
    *(edi_1 + 0x1a0) = var_24
    void* var_98_1 = edi_1
    char var_a9_1 = 0
    result = (var_84_1 - esi_2) s/ 0x18
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    int32_t* var_94
    struct partsengine::CSpriteEngineWrapper::VTable* const var_74
    int32_t* var_68
    
    if (result s> 0)
        ebx_2 = 0
        
        while (true)
            int32_t eax_14 = ebx_2 * 3
            int32_t* esi_3 = &esi_2[eax_14 * 2]
            int32_t edi_2 = esi_3[4]
            int32_t* ecx_6
            
            if (esi_2[eax_14 * 2 + 5] u< 0x10)
                ecx_6 = esi_3
            else
                ecx_6 = *esi_3
            
            int32_t eax_15 = 1
            
            if (edi_2 u< 1)
                eax_15 = edi_2
            
            int32_t eax_16 = sub_405190(eax_15, 0x6de0dc, ecx_6, eax_15)
            bool cond:0_1 = eax_16 == 0
            
            if (eax_16 == 0)
                if (edi_2 u>= 1)
                    eax_16.b = edi_2 != 1
                else
                    eax_16 = 0xffffffff
                
                cond:0_1 = eax_16 == 0
            
            eax_16.b = cond:0_1
            
            if (eax_16.b == 0)
                void* ebp_4
                int32_t esi_9
                int32_t var_b0
                int32_t var_a8
                int32_t var_a4
                
                if (edi_2 != 2)
                label_483267:
                    sub_506a20(&var_6c, esi_3)
                    int32_t edx_6
                    
                    if (var_68 != 0)
                        esi_9 = var_68[6]
                        edx_6 = var_68[7]
                    else
                        esi_9 = 0
                        edx_6 = 0
                    
                    void* eax_51 = eax_4 - ebp_1
                    var_a4 = esi_9
                    var_b0 = eax_51
                    int32_t* ecx_39 = &var_a4
                    
                    if (esi_9 s>= eax_51)
                        ecx_39 = &var_b0
                    
                    var_a8 = edx_6
                    int32_t eax_53 = eax_5 - var_9c_1
                    int32_t edi_7 = *ecx_39
                    int32_t* ecx_40 = &var_a8
                    var_b0 = eax_53
                    
                    if (edx_6 s>= eax_53)
                        ecx_40 = &var_b0
                    
                    int32_t ebp_5 = *ecx_40
                    
                    if (*(arg1 + 4) == 0)
                    label_483307:
                        int32_t var_d0_15 = ebp_5
                        int32_t var_d4_9 = edi_7
                        ebp_4 = var_a0_1
                        int32_t var_e0_4 = sub_506650(&var_6c)
                        int32_t var_e4_4 = var_9c_1
                        sub_507660(arg1, ebp_4)
                    else
                        int32_t* eax_55 = sub_506650(arg1)
                        
                        if (eax_55 == 0)
                            goto label_483307
                        
                        if ((*(*eax_55 + 0x28))(ExceptionRecord) == 0)
                            goto label_483307
                        
                        int32_t var_d0_14 = ebp_5
                        int32_t var_d4_8 = edi_7
                        ebp_4 = var_a0_1
                        int32_t var_e0_3 = sub_506650(&var_6c)
                        int32_t var_e4_3 = var_9c_1
                        sub_507560(arg1, ebp_4)
                    
                    edi_1 = data_75d4cc
                    var_98_1 = edi_1
                else
                    int32_t ecx_8 = esi_3[5]
                    int32_t* eax_19
                    
                    if (ecx_8 u< 0x10)
                        eax_19 = esi_3
                    else
                        eax_19 = *esi_3
                    
                    if (*eax_19 != 0x81)
                        goto label_483267
                    
                    int32_t* eax_20
                    
                    if (ecx_8 u< 0x10)
                        eax_20 = esi_3
                    else
                        eax_20 = *esi_3
                    
                    if (*(eax_20 + 1) != 0x5c)
                        goto label_483267
                    
                    ebx_2 += 1
                    int32_t ebp_2 = 1
                    
                    if (ebx_2 s< result_1)
                        void* eax_22 = &var_88[ebx_2 * 6]
                        
                        while (true)
                            if (*(eax_22 + 0x10) == 2)
                                int32_t edx_3 = *(eax_22 + 0x14)
                                void* ecx_10
                                
                                if (edx_3 u< 0x10)
                                    ecx_10 = eax_22
                                else
                                    ecx_10 = *eax_22
                                
                                if (*ecx_10 == 0x81)
                                    void* ecx_11
                                    
                                    if (edx_3 u< 0x10)
                                        ecx_11 = eax_22
                                    else
                                        ecx_11 = *eax_22
                                    
                                    if (*(ecx_11 + 1) == 0x5c)
                                        ebx_2 += 1
                                        ebp_2 += 1
                                        eax_22 += 0x18
                                        
                                        if (ebx_2 s>= result_1)
                                            break
                                        
                                        continue
                            
                            if (ebx_2 s>= result_1)
                                break
                            
                            ebx_2 -= 1
                            break
                    
                    var_b4_2.d = sub_44f0e0(var_98_1 + 0x29c)
                    var_a8 = ebp_2 - 1
                    var_a4 = 0
                    int32_t* esi_5 = &var_a4
                    
                    if (ebp_2 - 1 s>= 0)
                        esi_5 = &var_a8
                    
                    int32_t edi_5 = sub_4ff540(&var_40) * ebp_2 + *esi_5 * eax_2
                    var_a4 = edi_5
                    int32_t eax_25 = sub_4ff540(&var_40)
                    int32_t* edx_4 = &var_a4
                    int32_t ecx_20 = eax_4 - var_a0_1
                    var_a8 = ecx_20
                    var_b0 = eax_25
                    
                    if (edi_5 s>= ecx_20)
                        edx_4 = &var_a8
                    
                    int32_t* ecx_21 = &var_b0
                    var_a4 = *edx_4
                    int32_t eax_28 = eax_5 - var_9c_1
                    var_a8 = eax_28
                    
                    if (eax_25 s>= eax_28)
                        ecx_21 = &var_a8
                    
                    var_a8 = *ecx_21
                    var_b0 = &partsengine::CSpriteEngineWrapper::`vftable'
                    var_4.b = 3
                    result = sub_5eedf0(var_98_1 + 0x1ac, edi_5, eax_25, var_98_1 + 0x190)
                    int32_t ebp_3 = var_b4_2.d
                    
                    if (result == 0)
                        result.b = 0
                    else
                        int32_t var_d0_5 = ebp_3
                        void* eax_31 = sub_44e5c0(var_98_1 + 0x288)
                        
                        if (eax_31 == 0)
                            (*result)->Handler(ExceptionRecord)
                            result.b = 0
                        else
                            sub_44eaf0(eax_31, result)
                            (*result)->Handler(ExceptionRecord)
                            result.b = 1
                    
                    var_4.b = 2
                    result.b = result.b == 0
                    
                    if (result.b != 0)
                        edi_1 = data_75d4cc
                        ebx_2.b = 1
                        break
                    
                    void* eax_35 = *(arg1 + 4)
                    void* edi_6
                    
                    if (eax_35 == 0)
                    label_483152:
                        edi_6 = data_75d4cc
                    label_483158:
                        var_b4_2.d = &partsengine::CSpriteEngineWrapper::`vftable'
                        var_4.b = 5
                        var_b0 = ebp_3
                        int32_t* var_4c
                        sub_42f3d0(edi_6 + 0x2a0, &var_4c, &var_b0)
                        int32_t* eax_44 = var_4c
                        void* eax_45
                        
                        if (eax_44 != *(edi_6 + 0x2a0))
                            eax_45 = eax_44[5]
                        
                        int32_t eax_46
                        
                        if (eax_44 == *(edi_6 + 0x2a0) || eax_45 == 0)
                            eax_46 = 0
                        else
                            eax_46 = *(eax_45 + 0xd8)
                        
                        int32_t var_d0_11 = var_a8
                        esi_9 = var_a4
                        int32_t var_d4_7 = esi_9
                        int32_t var_e0_2 = eax_46
                        int32_t var_e4_2 = var_9c_1
                        sub_507660(arg1, var_a0_1)
                    else
                        edi_6 = data_75d4cc
                        var_b0 = *(eax_35 + 8)
                        int32_t* var_50
                        sub_42f3d0(edi_6 + 0x2a0, &var_50, &var_b0)
                        int32_t* eax_37 = var_50
                        
                        if (eax_37 == *(edi_6 + 0x2a0))
                            goto label_483158
                        
                        void* ecx_30 = eax_37[5]
                        
                        if (ecx_30 == 0)
                            goto label_483158
                        
                        int32_t* ecx_31 = *(ecx_30 + 0xd8)
                        
                        if (ecx_31 == 0)
                            goto label_483158
                        
                        if ((*(*ecx_31 + 0x28))(ExceptionRecord) == 0)
                            goto label_483152
                        
                        var_b4_2.d = &partsengine::CSpriteEngineWrapper::`vftable'
                        var_4.b = 4
                        void* esi_8 = data_75d4cc
                        var_b0 = ebp_3
                        int32_t* var_48
                        sub_42f3d0(esi_8 + 0x2a0, &var_48, &var_b0)
                        int32_t* eax_41 = var_48
                        void* eax_42
                        
                        if (eax_41 != *(esi_8 + 0x2a0))
                            eax_42 = eax_41[5]
                        
                        int32_t eax_43
                        
                        if (eax_41 == *(esi_8 + 0x2a0) || eax_42 == 0)
                            eax_43 = 0
                        else
                            eax_43 = *(eax_42 + 0xd8)
                        
                        int32_t var_d0_9 = var_a8
                        esi_9 = var_a4
                        int32_t var_d4_5 = esi_9
                        int32_t var_e0_1 = eax_43
                        int32_t var_e4_1 = var_9c_1
                        sub_507560(arg1, var_a0_1)
                    var_b0 = &partsengine::CSpriteEngineWrapper::`vftable'
                    var_4.b = 6
                    edi_1 = data_75d4cc
                    var_98_1 = edi_1
                    int32_t* eax_47 = *(edi_1 + 0x2a0)
                    int32_t* edx_5 = eax_47
                    int32_t* ecx_36 = eax_47[1]
                    
                    while (*(ecx_36 + 0xd) == 0)
                        if (ecx_36[4] s>= ebp_3)
                            edx_5 = ecx_36
                            ecx_36 = *ecx_36
                        else
                            ecx_36 = ecx_36[2]
                    
                    struct partsengine::CSpriteEngineWrapper::VTable* const* eax_48
                    
                    if (edx_5 == eax_47 || ebp_3 s< edx_5[4])
                        var_94 = eax_47
                        eax_48 = &var_94
                    else
                        var_74 = edx_5
                        eax_48 = &var_74
                    
                    int32_t ecx_37
                    
                    if (*eax_48 != *(edi_1 + 0x2a0))
                        int32_t var_d0_12 = ebp_3
                        result = sub_44dcc0(ecx_36)
                        edi_1 = data_75d4cc
                        var_98_1 = edi_1
                        ecx_37.b = result.b != 0
                    else
                        ecx_37 = 0
                    
                    var_4.b = 2
                    result.b = ecx_37 == 0
                    
                    if (result.b != 0)
                        ebx_2.b = 1
                        break
                    
                    ebp_4 = var_a0_1
                ebp_1 = ebp_4 + eax_2 + esi_9
            else
                var_9c_1 += sub_4ff540(&var_40) + eax_3
                edi_1 = var_98_1
                ebp_1 = arg2[7]
            
            ebx_2 += 1
            var_a0_1 = ebp_1
            
            if (ebx_2 s>= result_1)
                ebx_2.b = var_a9_1
                break
            
            esi_2 = var_88
    
    int32_t* ecx_48 = var_68
    
    if (ecx_48 != 0)
        int32_t esi_10 = ecx_48[2]
        ecx_48[1] -= 1
        
        if (ecx_48[1] s<= 0)
            (**ecx_48)(1)
            edi_1 = data_75d4cc
        
        var_74 = &partsengine::CSpriteEngineWrapper::`vftable'
        var_4.b = 7
        int32_t* eax_63 = *(edi_1 + 0x2a0)
        int32_t* edx_7 = eax_63
        int32_t* ecx_47 = eax_63[1]
        
        while (*(ecx_47 + 0xd) == 0)
            if (ecx_47[4] s>= esi_10)
                edx_7 = ecx_47
                ecx_47 = *ecx_47
            else
                ecx_47 = ecx_47[2]
        
        if (edx_7 != eax_63)
            var_94 = edx_7
        
        if (edx_7 == eax_63 || esi_10 s< edx_7[4])
            var_94 = eax_63
        
        if (var_94 != *(edi_1 + 0x2a0))
            int32_t var_d0_16 = esi_10
            sub_44dcc0(ecx_47)
            edi_1 = data_75d4cc
        
        ecx_48 = nullptr
        var_4.b = 2
        var_68 = nullptr
    
    if (ebx_2.b == 0)
        ebx_2.b = 1
    else
        void* eax_64 = &arg2[0x23]
        
        if (*(eax_64 + 0x14) u>= 0x10)
            eax_64 = *eax_64
        
        void* var_d0_17 = eax_64
        int32_t var_d4_10 = arg2[8]
        int32_t var_d8_2 = arg2[7]
        sub_455870(0x6dea98)
        ecx_48 = var_68
        edi_1 = data_75d4cc
        ebx_2.b = 0
    
    var_6c = &partsengine::CLLSprite::`vftable'
    var_4.b = 0xa
    
    if (ecx_48 != 0)
        int32_t esi_11 = ecx_48[2]
        ecx_48[1] -= 1
        
        if (ecx_48[1] s<= 0)
            (**ecx_48)(1)
            edi_1 = data_75d4cc
        
        var_94 = &partsengine::CSpriteEngineWrapper::`vftable'
        var_4.b = 0xb
        int32_t* eax_67 = *(edi_1 + 0x2a0)
        int32_t* edx_8 = eax_67
        int32_t* ecx_49 = eax_67[1]
        
        while (*(ecx_49 + 0xd) == 0)
            if (ecx_49[4] s>= esi_11)
                edx_8 = ecx_49
                ecx_49 = *ecx_49
            else
                ecx_49 = ecx_49[2]
        
        int32_t* var_90_2
        
        if (edx_8 != eax_67)
            var_90_2 = edx_8
        
        if (edx_8 == eax_67 || esi_11 s< edx_8[4])
            var_90_2 = eax_67
        
        if (var_90_2 != *(edi_1 + 0x2a0))
            int32_t var_d0_18 = esi_11
            sub_44dcc0(ecx_49)
        
        int32_t var_68_1 = 0
    
    var_4.b = 9
    struct partsengine::CGraph::VTable* const var_58_1 = &partsengine::CGraph::`vftable'
    int32_t* var_54
    
    if (var_54 != 0)
        (*(*var_54 + 4))(ExceptionRecord)
        int32_t var_54_1 = 0
    
    var_4.b = 8
    struct partsengine::CSurfaceFactory::VTable* const var_60_1 =
        &partsengine::CSurfaceFactory::`vftable'
    int32_t* var_5c
    
    if (var_5c != 0)
        (*(*var_5c + 4))(ExceptionRecord)
        int32_t var_5c_1 = 0
    
    int32_t* edi_8 = var_88
    struct partsengine::CSpriteEngineWrapper::VTable* const var_64_1 =
        &partsengine::CSpriteEngineWrapper::`vftable'
    
    if (edi_8 != 0)
        int32_t* esi_12 = edi_8
        
        if (edi_8 != var_84_1)
            do
                if (esi_12[5] u>= 0x10)
                    j__free(*esi_12)
                
                esi_12[5] = 0xf
                esi_12[4] = 0
                *esi_12 = 0
                esi_12 = &esi_12[6]
            while (esi_12 != var_84_1)
        
        j__free(edi_8)
    
    result.b = ebx_2.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
