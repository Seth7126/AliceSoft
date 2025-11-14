// 函数: sub_4ffe30
// 地址: 0x4ffe30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_22 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0f76
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_458 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_420 = edi
void* ebx = arg2
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, *(edi + 0x30) - *(edi + 0x2c))
int32_t edx_3 = edx_2 s>> 5
sub_468ec0(ebx, (edx_3 u>> 0x1f) + edx_3)
int32_t ebp = 0
int32_t eax_7
int32_t edx_4
edx_4:eax_7 = muls.dp.d(0x2aaaaaab, *(edi + 0x30) - *(edi + 0x2c))
int32_t edx_5 = edx_4 s>> 5
int32_t result = (edx_5 u>> 0x1f) + edx_5
int32_t result_1 = result
uint8_t var_441

if (result s<= 0)
label_5007a6:
    int32_t ecx_122 = *(edi + 0x3c)
    int32_t eax_53 = *(ebx + 8)
    int32_t var_43c_3 = ecx_122
    char var_436 = ecx_122.b
    int32_t edx_15
    
    if (&var_436 u< eax_53)
        edx_15 = *(ebx + 4)
    
    if (&var_436 u>= eax_53 || edx_15 u> &var_436)
        if (eax_53 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
            ecx_122 = var_43c_3
        
        char* eax_55 = *(ebx + 8)
        
        if (eax_55 != 0)
            *eax_55 = ecx_122.b
    else
        if (eax_53 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
            ecx_122 = var_43c_3
        
        char* edx_16 = *(ebx + 8)
        
        if (edx_16 != 0)
            int32_t eax_54
            eax_54.b = *(&var_436 - edx_15 + *(ebx + 4))
            *edx_16 = eax_54.b
    
    *(ebx + 8) += 1
    int32_t eax_56 = *(ebx + 8)
    uint8_t ebx_3 = (ecx_122 u>> 8).b
    uint8_t var_42c = ebx_3
    int32_t edx_17
    
    if (&var_42c u< eax_56)
        edx_17 = *(ebx + 4)
    
    if (&var_42c u>= eax_56 || edx_17 u> &var_42c)
        if (eax_56 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
            ecx_122 = var_43c_3
        
        uint8_t* eax_58 = *(ebx + 8)
        
        if (eax_58 != 0)
            *eax_58 = ebx_3
    else
        if (eax_56 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
            ecx_122 = var_43c_3
        
        char* edx_18 = *(ebx + 8)
        
        if (edx_18 != 0)
            int32_t eax_57
            eax_57.b = *(&var_42c - edx_17 + *(ebx + 4))
            *edx_18 = eax_57.b
    
    *(ebx + 8) += 1
    int32_t eax_59 = *(ebx + 8)
    uint8_t ebx_6 = (ecx_122 u>> 0x10).b
    uint8_t var_434 = ebx_6
    int32_t edx_19
    
    if (&var_434 u< eax_59)
        edx_19 = *(ebx + 4)
    
    if (&var_434 u>= eax_59 || edx_19 u> &var_434)
        if (eax_59 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
            ecx_122 = var_43c_3
        
        uint8_t* eax_61 = *(ebx + 8)
        
        if (eax_61 != 0)
            *eax_61 = ebx_6
    else
        if (eax_59 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
            ecx_122 = var_43c_3
        
        char* edx_20 = *(ebx + 8)
        
        if (edx_20 != 0)
            int32_t eax_60
            eax_60.b = *(&var_434 - edx_19 + *(ebx + 4))
            *edx_20 = eax_60.b
    
    *(ebx + 8) += 1
    int32_t eax_62 = *(ebx + 8)
    uint32_t ecx_128 = ecx_122 u>> 0x18
    char var_42e = ecx_128.b
    int32_t edx_21
    
    if (&var_42e u< eax_62)
        edx_21 = *(ebx + 4)
    
    if (&var_42e u>= eax_62 || edx_21 u> &var_42e)
        if (eax_62 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        char* eax_64 = *(ebx + 8)
        
        if (eax_64 != 0)
            *eax_64 = ecx_128.b
    else
        if (eax_62 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        char* ecx_130 = *(ebx + 8)
        
        if (ecx_130 != 0)
            int32_t eax_63
            eax_63.b = *(&var_42e - edx_21 + *(ebx + 4))
            *ecx_130 = eax_63.b
    
    *(ebx + 8) += 1
    int32_t eax_65 = *(ebx + 8)
    int32_t ebx_9 = *(edi + 0x40)
    char var_432 = ebx_9.b
    int32_t ecx_132
    
    if (&var_432 u< eax_65)
        ecx_132 = *(ebx + 4)
    
    if (&var_432 u>= eax_65 || ecx_132 u> &var_432)
        if (eax_65 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        char* eax_67 = *(ebx + 8)
        
        if (eax_67 != 0)
            *eax_67 = ebx_9.b
    else
        if (eax_65 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        char* ecx_134 = *(ebx + 8)
        
        if (ecx_134 != 0)
            char* eax_66
            eax_66.b = *(*(ebx + 4) + &var_432 - ecx_132)
            *ecx_134 = eax_66.b
    
    *(ebx + 8) += 1
    int32_t ecx_136 = *(ebx + 8)
    uint32_t eax_69 = ebx_9 u>> 8
    char var_42a = eax_69.b
    int32_t edx_22
    
    if (&var_42a u< ecx_136)
        edx_22 = *(ebx + 4)
    
    char* ecx_139
    
    if (&var_42a u>= ecx_136 || edx_22 u> &var_42a)
        if (ecx_136 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_139 = *(ebx + 8)
        
        if (ecx_139 != 0)
            *ecx_139 = eax_69.b
    else
        if (ecx_136 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_139 = *(ebx + 8)
        
        if (ecx_139 != 0)
            eax_69.b = *(*(ebx + 4) + &var_42a - edx_22)
            *ecx_139 = eax_69.b
    *(ebx + 8) += 1
    int32_t ecx_140 = *(ebx + 8)
    uint32_t eax_71 = ebx_9 u>> 0x10
    char var_438 = eax_71.b
    int32_t edx_23
    
    if (&var_438 u< ecx_140)
        edx_23 = *(ebx + 4)
    
    char* ecx_143
    
    if (&var_438 u>= ecx_140 || edx_23 u> &var_438)
        if (ecx_140 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_143 = *(ebx + 8)
        
        if (ecx_143 != 0)
            *ecx_143 = eax_71.b
    else
        if (ecx_140 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_143 = *(ebx + 8)
        
        if (ecx_143 != 0)
            eax_71.b = *(*(ebx + 4) + &var_438 - edx_23)
            *ecx_143 = eax_71.b
    *(ebx + 8) += 1
    int32_t eax_72 = *(ebx + 8)
    uint8_t ebx_10 = (ebx_9 u>> 0x18).b
    uint8_t var_437 = ebx_10
    int32_t ecx_144
    
    if (&var_437 u< eax_72)
        ecx_144 = *(ebx + 4)
    
    if (&var_437 u>= eax_72 || ecx_144 u> &var_437)
        if (eax_72 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        uint8_t* eax_74 = *(ebx + 8)
        
        if (eax_74 != 0)
            *eax_74 = ebx_10
    else
        if (eax_72 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        char* ecx_146 = *(ebx + 8)
        
        if (ecx_146 != 0)
            int32_t eax_73
            eax_73.b = *(&var_437 - ecx_144 + *(ebx + 4))
            *ecx_146 = eax_73.b
    
    *(ebx + 8) += 1
    int32_t eax_75 = *(ebx + 8)
    int32_t ebx_12 = *(edi + 0x44)
    char var_435 = ebx_12.b
    int32_t ecx_148
    
    if (&var_435 u< eax_75)
        ecx_148 = *(ebx + 4)
    
    if (&var_435 u>= eax_75 || ecx_148 u> &var_435)
        if (eax_75 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        char* eax_77 = *(ebx + 8)
        
        if (eax_77 != 0)
            *eax_77 = ebx_12.b
    else
        if (eax_75 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        char* ecx_150 = *(ebx + 8)
        
        if (ecx_150 != 0)
            char* eax_76
            eax_76.b = *(*(ebx + 4) + &var_435 - ecx_148)
            *ecx_150 = eax_76.b
    
    *(ebx + 8) += 1
    int32_t ecx_152 = *(ebx + 8)
    uint32_t eax_79 = ebx_12 u>> 8
    char var_433 = eax_79.b
    int32_t edx_24
    
    if (&var_433 u< ecx_152)
        edx_24 = *(ebx + 4)
    
    char* ecx_155
    
    if (&var_433 u>= ecx_152 || edx_24 u> &var_433)
        if (ecx_152 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_155 = *(ebx + 8)
        
        if (ecx_155 != 0)
            *ecx_155 = eax_79.b
    else
        if (ecx_152 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_155 = *(ebx + 8)
        
        if (ecx_155 != 0)
            eax_79.b = *(*(ebx + 4) + &var_433 - edx_24)
            *ecx_155 = eax_79.b
    *(ebx + 8) += 1
    int32_t ecx_156 = *(ebx + 8)
    uint32_t eax_81 = ebx_12 u>> 0x10
    char var_431 = eax_81.b
    int32_t edx_25
    
    if (&var_431 u< ecx_156)
        edx_25 = *(ebx + 4)
    
    char* ecx_159
    
    if (&var_431 u>= ecx_156 || edx_25 u> &var_431)
        if (ecx_156 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_159 = *(ebx + 8)
        
        if (ecx_159 != 0)
            *ecx_159 = eax_81.b
    else
        if (ecx_156 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_159 = *(ebx + 8)
        
        if (ecx_159 != 0)
            eax_81.b = *(*(ebx + 4) + &var_431 - edx_25)
            *ecx_159 = eax_81.b
    *(ebx + 8) += 1
    int32_t eax_82 = *(ebx + 8)
    uint8_t ebx_13 = (ebx_12 u>> 0x18).b
    uint8_t var_42f = ebx_13
    int32_t ecx_160
    
    if (&var_42f u< eax_82)
        ecx_160 = *(ebx + 4)
    
    if (&var_42f u>= eax_82 || ecx_160 u> &var_42f)
        if (eax_82 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        uint8_t* eax_84 = *(ebx + 8)
        
        if (eax_84 != 0)
            *eax_84 = ebx_13
    else
        if (eax_82 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        char* ecx_162 = *(ebx + 8)
        
        if (ecx_162 != 0)
            int32_t eax_83
            eax_83.b = *(&var_42f - ecx_160 + *(ebx + 4))
            *ecx_162 = eax_83.b
    
    *(ebx + 8) += 1
    int32_t ebx_15 = *(edi + 0x48)
    var_441 = ebx_15.b
    sub_414b60(ebx + 4, &var_441)
    var_441 = (ebx_15 u>> 8).b
    sub_414b60(ebx + 4, &var_441)
    var_441 = (ebx_15 u>> 0x10).b
    sub_414b60(ebx + 4, &var_441)
    var_441 = (ebx_15 u>> 0x18).b
    sub_414b60(ebx + 4, &var_441)
    result.b = 1
else
    int32_t esi_1 = 0
    int32_t var_424_1 = 0
    
    while (true)
        if (ebp s>= 0)
            int32_t eax_10
            int32_t edx_6
            edx_6:eax_10 = muls.dp.d(0x2aaaaaab, *(edi + 0x30) - *(edi + 0x2c))
            int32_t edx_7 = edx_6 s>> 5
            
            if ((edx_7 u>> 0x1f) + edx_7 s> ebp)
                void* edi_1 = *(edi + 0x2c)
                void* edi_2 = edi_1 + esi_1
                
                if (edi_1 != neg.d(esi_1))
                    int32_t ecx_5 = *(edi_2 + 4)
                    void* esi_2 = ebx + 4
                    int32_t eax_13 = *(esi_2 + 4)
                    int32_t var_43c_1 = ecx_5
                    char var_429 = ecx_5.b
                    
                    if (&var_429 u>= eax_13 || *esi_2 u> &var_429)
                        if (eax_13 == *(esi_2 + 8))
                            sub_403590(esi_2, 1)
                            ecx_5 = var_43c_1
                        
                        char* eax_16 = *(esi_2 + 4)
                        
                        if (eax_16 != 0)
                            *eax_16 = ecx_5.b
                    else
                        void* edx_8 = &var_429 - *esi_2
                        
                        if (eax_13 == *(esi_2 + 8))
                            sub_403590(esi_2, 1)
                            ecx_5 = var_43c_1
                        
                        char* edx_9 = *(esi_2 + 4)
                        
                        if (edx_9 != 0)
                            void* eax_15
                            eax_15.b = *(*esi_2 + edx_8)
                            *edx_9 = eax_15.b
                    
                    *(esi_2 + 4) += 1
                    int32_t edx_10 = *(esi_2 + 4)
                    uint32_t eax_18 = ecx_5 u>> 8
                    char var_42d = eax_18.b
                    char* edx_11
                    
                    if (&var_42d u>= edx_10 || *esi_2 u> &var_42d)
                        if (edx_10 == *(esi_2 + 8))
                            sub_403590(esi_2, 1)
                            ecx_5 = var_43c_1
                        
                        edx_11 = *(esi_2 + 4)
                        
                        if (edx_11 != 0)
                            *edx_11 = eax_18.b
                    else
                        void* eax_19 = &var_42d - *esi_2
                        
                        if (edx_10 == *(esi_2 + 8))
                            sub_403590(esi_2, 1)
                            ecx_5 = var_43c_1
                        
                        edx_11 = *(esi_2 + 4)
                        
                        if (edx_11 != 0)
                            eax_18.b = *(*esi_2 + eax_19)
                            *edx_11 = eax_18.b
                    *(esi_2 + 4) += 1
                    int32_t edx_12 = *(esi_2 + 4)
                    void* eax_22 = ecx_5 u>> 0x10
                    ebx = arg2
                    char var_430 = eax_22.b
                    
                    if (&var_430 u< edx_12)
                        ebx = arg2
                    
                    char* edx_13
                    
                    if (&var_430 u>= edx_12 || *esi_2 u> &var_430)
                        if (edx_12 == *(esi_2 + 8))
                            sub_403590(esi_2, 1)
                            ecx_5 = var_43c_1
                        
                        edx_13 = *(esi_2 + 4)
                        
                        if (edx_13 != 0)
                            *edx_13 = eax_22.b
                    else
                        void* eax_23 = &var_430 - *esi_2
                        
                        if (edx_12 == *(esi_2 + 8))
                            sub_403590(esi_2, 1)
                            ecx_5 = var_43c_1
                        
                        edx_13 = *(esi_2 + 4)
                        
                        if (edx_13 != 0)
                            eax_22.b = *(*esi_2 + eax_23)
                            *edx_13 = eax_22.b
                    *(esi_2 + 4) += 1
                    int32_t eax_25 = *(esi_2 + 4)
                    uint32_t ecx_12 = ecx_5 u>> 0x18
                    char var_42b = ecx_12.b
                    int32_t edx_14
                    
                    if (&var_42b u< eax_25)
                        edx_14 = *esi_2
                        ebx = arg2
                    
                    if (&var_42b u>= eax_25 || edx_14 u> &var_42b)
                        if (eax_25 == *(esi_2 + 8))
                            sub_403590(esi_2, 1)
                        
                        char* eax_28 = *(esi_2 + 4)
                        
                        if (eax_28 != 0)
                            *eax_28 = ecx_12.b
                    else
                        if (eax_25 == *(esi_2 + 8))
                            sub_403590(esi_2, 1)
                        
                        char* ecx_15 = *(esi_2 + 4)
                        
                        if (ecx_15 != 0)
                            void* eax_27
                            eax_27.b = *(*esi_2 + &var_42b - edx_14)
                            *ecx_15 = eax_27.b
                    
                    *(esi_2 + 4) += 1
                    int32_t var_45c_81
                    
                    switch (*(edi_2 + 4))
                        case 0, 1
                            sub_468ec0(ebx, *(edi_2 + 0x2c))
                            sub_468ec0(ebx, *(edi_2 + 0x30))
                        case 2
                            sub_468f70(ebx, edi_2 + 0xa4)
                        case 3, 0xa
                            sub_468ec0(ebx, *(edi_2 + 0x1c))
                            sub_468ec0(ebx, *(edi_2 + 0x20))
                            sub_468ec0(ebx, *(edi_2 + 0x2c))
                            sub_468ec0(ebx, *(edi_2 + 0x30))
                            sub_468ec0(ebx, *(edi_2 + 0x34))
                            sub_468ec0(ebx, *(edi_2 + 0x38))
                            sub_468ec0(ebx, *(edi_2 + 0x3c))
                        case 4, 6
                            sub_468ec0(ebx, *(edi_2 + 0x1c))
                            sub_468ec0(ebx, *(edi_2 + 0x20))
                            sub_468ec0(ebx, *(edi_2 + 0x2c))
                            sub_468ec0(ebx, *(edi_2 + 0x30))
                            sub_468ec0(ebx, *(edi_2 + 0x34))
                            sub_468ec0(ebx, *(edi_2 + 0x38))
                            sub_468ec0(ebx, *(edi_2 + 0x3c))
                            sub_468ec0(ebx, *(edi_2 + 0x40))
                        case 5
                            sub_468ec0(ebx, *(edi_2 + 0x1c))
                            sub_468ec0(ebx, *(edi_2 + 0x20))
                            sub_468ec0(ebx, *(edi_2 + 0x2c))
                            sub_468ec0(ebx, *(edi_2 + 0x30))
                            sub_468ec0(ebx, *(edi_2 + 0x40))
                        case 7
                            sub_468ec0(ebx, *(edi_2 + 0x1c))
                            sub_468ec0(ebx, *(edi_2 + 0x20))
                            sub_468f70(ebx, edi_2 + 0x8c)
                            int32_t var_4 = 0
                            struct partsengine::CCharSpriteProperty::VTable* var_144
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_144)[1])
                            var_144 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_1 = 1
                            struct partsengine::CCharSpriteProperty::VTable* var_3b4
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_3b4)[2])
                            var_3b4 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_2 = 2
                            struct partsengine::CCharSpriteProperty::VTable* var_74
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_74)[3])
                            var_74 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_3 = 3
                            struct partsengine::CCharSpriteProperty::VTable* var_34c
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_34c)[4])
                            var_34c = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_4 = 4
                            struct partsengine::CCharSpriteProperty::VTable* var_1ac
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_1ac)[5])
                            var_1ac = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_5 = 5
                            struct partsengine::CCharSpriteProperty::VTable* var_2e4
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_2e4)[7])
                            var_2e4 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_6 = 6
                            struct partsengine::CCharSpriteProperty::VTable* var_dc
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_dc)[9])
                            var_dc = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_7 = 7
                            struct partsengine::CCharSpriteProperty::VTable* var_27c
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_27c)[0xa])
                            var_27c = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_8 = 8
                            struct partsengine::CCharSpriteProperty::VTable* var_41c
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_41c)[0xb])
                            var_41c = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_9 = 9
                            struct partsengine::CCharSpriteProperty::VTable* var_214
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_214)[8])
                            int32_t var_4_10 = 0xffffffff
                            int32_t var_45c_44 = *(edi_2 + 0x50)
                            var_214 = &partsengine::CCharSpriteProperty::`vftable'
                            sub_468ec0(ebx, var_45c_44)
                            sub_468ec0(ebx, *(edi_2 + 0x54))
                        case 8
                            sub_468ec0(ebx, *(edi_2 + 0x1c))
                            sub_468ec0(ebx, *(edi_2 + 0x20))
                            sub_468f70(ebx, edi_2 + 0x8c)
                            int32_t var_4_11 = 0xa
                            struct partsengine::CCharSpriteProperty::VTable* var_3e8
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_3e8)[1])
                            var_3e8 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_12 = 0xb
                            struct partsengine::CCharSpriteProperty::VTable* var_380
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_380)[2])
                            var_380 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_13 = 0xc
                            struct partsengine::CCharSpriteProperty::VTable* var_318
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_318)[3])
                            var_318 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_14 = 0xd
                            struct partsengine::CCharSpriteProperty::VTable* var_2b0
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_2b0)[4])
                            var_2b0 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_15 = 0xe
                            struct partsengine::CCharSpriteProperty::VTable* var_248
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_248)[5])
                            var_248 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_16 = 0xf
                            struct partsengine::CCharSpriteProperty::VTable* var_1e0
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_1e0)[7])
                            var_1e0 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_17 = 0x10
                            struct partsengine::CCharSpriteProperty::VTable* var_178
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_178)[9])
                            var_178 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_18 = 0x11
                            struct partsengine::CCharSpriteProperty::VTable* var_110
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_110)[0xa])
                            var_110 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_19 = 0x12
                            struct partsengine::CCharSpriteProperty::VTable* var_a8
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_a8)[0xb])
                            var_a8 = &partsengine::CCharSpriteProperty::`vftable'
                            int32_t var_4_20 = 0x13
                            struct partsengine::CCharSpriteProperty::VTable* var_40
                            sub_468ec0(ebx, sub_47fa90(edi_2, &var_40)[8])
                            int32_t var_4_21 = 0xffffffff
                            int32_t var_45c_68 = *(edi_2 + 0x50)
                            var_40 = &partsengine::CCharSpriteProperty::`vftable'
                            sub_468ec0(ebx, var_45c_68)
                            sub_468ec0(ebx, *(edi_2 + 0x54))
                        case 9
                            sub_468ec0(ebx, *(edi_2 + 0x1c))
                            sub_468ec0(ebx, *(edi_2 + 0x20))
                            sub_468ec0(ebx, *(edi_2 + 0x2c))
                            sub_468ec0(ebx, *(edi_2 + 0x30))
                            sub_468ec0(ebx, *(edi_2 + 0x34))
                            sub_468ec0(ebx, *(edi_2 + 0x38))
                            sub_468ec0(ebx, *(edi_2 + 0x3c))
                            sub_468ec0(ebx, *(edi_2 + 0x44))
                            sub_468ec0(ebx, *(edi_2 + 0x48))
                            sub_468ec0(ebx, *(edi_2 + 0x4c))
                        case 0xb, 0xc, 0xd, 0xe, 0x13, 0x14, 0x15, 0x16
                            sub_468f70(ebx, edi_2 + 0xa4)
                            sub_468ec0(ebx, *(edi_2 + 0xc))
                            sub_468ec0(ebx, *(edi_2 + 0x10))
                            sub_468ec0(ebx, *(edi_2 + 0x14))
                            sub_468ec0(ebx, *(edi_2 + 0x18))
                            sub_468ec0(ebx, *(edi_2 + 0x1c))
                            sub_468ec0(ebx, *(edi_2 + 0x20))
                            sub_468ec0(ebx, *(edi_2 + 0x2c))
                            sub_468ec0(ebx, *(edi_2 + 0x30))
                            sub_468ec0(ebx, *(edi_2 + 8))
                        case 0xf
                            sub_468ec0(ebx, *(edi_2 + 0x1c))
                            sub_468ec0(ebx, *(edi_2 + 0x20))
                            sub_468ec0(ebx, *(edi_2 + 0x2c))
                            var_45c_81 = *(edi_2 + 0x30)
                        label_500673:
                            sub_468ec0(ebx, var_45c_81)
                            var_441 = *(edi_2 + 0xbc) != 0
                            sub_414b60(esi_2, &var_441)
                        case 0x10, 0x11
                            sub_468ec0(ebx, *(edi_2 + 0x1c))
                            sub_468ec0(ebx, *(edi_2 + 0x20))
                            sub_468ec0(ebx, *(edi_2 + 0x2c))
                            sub_468ec0(ebx, *(edi_2 + 0x30))
                            sub_468ec0(ebx, *(edi_2 + 0x34))
                            sub_468ec0(ebx, *(edi_2 + 0x38))
                            var_45c_81 = *(edi_2 + 0x3c)
                            goto label_500673
                        case 0x12
                            sub_468ec0(ebx, *(edi_2 + 0x1c))
                            sub_468ec0(ebx, *(edi_2 + 0x20))
                            sub_468ec0(ebx, *(edi_2 + 0x24))
                            sub_468ec0(ebx, *(edi_2 + 0x28))
                            sub_468ec0(ebx, *(edi_2 + 0x34))
                            sub_468ec0(ebx, *(edi_2 + 0x38))
                            sub_468ec0(ebx, *(edi_2 + 0x3c))
                            sub_468ec0(ebx, *(edi_2 + 0x40))
                    
                    ebp += 1
                    edi = var_420
                    esi_1 = var_424_1 + 0xc0
                    var_424_1 = esi_1
                    
                    if (ebp s>= result_1)
                        goto label_5007a6
                    
                    continue
        
        result.b = 0
        break
fsbase->NtTib.ExceptionList = ExceptionList
return result
