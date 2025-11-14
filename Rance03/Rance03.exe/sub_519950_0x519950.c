// 函数: sub_519950
// 地址: 0x519950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c28a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_1c4
int32_t eax_2 = __security_cookie ^ &var_1c4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_1bc = ebp
int32_t* edi = arg2
int32_t ebx = 0
var_1c4 = 0
int32_t* var_168 = edi
int32_t var_174 = 0
int32_t* var_190 = nullptr
int32_t* var_170 = nullptr
int32_t var_16c = 0
int32_t var_4 = 0
int32_t eax_5 = *(ebp + 0x10)
int32_t var_194 = eax_5
int128_t var_144 = *(ebp + 0x18)
int32_t var_14c = eax_5
float xmm0_1 = *(ebp + 0x28)
int32_t eax_6 = *(ebp + 0x14)
float var_19c = xmm0_1
float var_134 = xmm0_1
float xmm0_2 = *(ebp + 0x2c)
int32_t var_1a4 = eax_6
int32_t var_148 = eax_6
int32_t eax_7 = *(ebp + 0x40)
float var_1a0 = xmm0_2
float var_130 = xmm0_2
int128_t xmm0_3 = *(ebp + 0x30)
int32_t var_1c0 = eax_7
int32_t var_11c = eax_7
int32_t eax_8 = *(ebp + 0x44)
struct partsengine::CTextDecoration::VTable* const var_154 =
    &partsengine::CTextDecoration::`vftable'
struct partsengine::CCharSpriteProperty::VTable* const var_150 =
    &partsengine::CCharSpriteProperty::`vftable'
int128_t var_12c = xmm0_3
int32_t var_118 = eax_8
int32_t var_160 = 0
int32_t var_15c = 0
int32_t var_158 = 0
int32_t eax_9 = *(ebp + 0xd4)
int32_t var_18c = eax_9
int32_t var_180 = eax_9
int32_t var_1b0 = 0
int32_t var_1ac = 0
int32_t var_1a8 = 0
var_4.b = 3
int32_t eax_10 = *(ebp + 0xd0)
int32_t var_17c = eax_10
int32_t var_184 = eax_10
int32_t eax_11 = *edi
int32_t var_164 = 0

if (eax_11 != edi[1])
    int32_t esi_5
    
    do
        void** var_1e4_1 = *edi
        int32_t var_78_1 = 0xf
        int32_t var_7c_1 = 0
        char var_8c = 0
        sub_401ff0(&var_8c, var_1e4_1, 0, 0xffffffff)
        var_4.b = 4
        int32_t var_a8_1 = 0xf
        int32_t var_ac_1 = 0
        char var_bc = 0
        sub_401ff0(&var_bc, &var_8c, 0, 0xffffffff)
        int32_t var_90_1 = 0xf
        int32_t var_94_1 = 0
        char var_a4 = 0
        uint128_t xmm0_4 = *(ebp + 0x58)
        int32_t eax_12 = *(ebp + 0x50)
        uint128_t var_5c = xmm0_4
        int32_t eax_13 = *(ebp + 0x54)
        int32_t var_198 = eax_13
        float xmm0_5 = *(ebp + 0x68)
        float var_1b4_1 = xmm0_5
        float xmm0_6 = *(ebp + 0x6c)
        int32_t eax_14 = *(ebp + 0x80)
        float var_1b8_1 = xmm0_6
        uint128_t xmm0_7 = *(ebp + 0x70)
        int32_t eax_15 = *(ebp + 0x84)
        struct partsengine::CTextDecoration::VTable* const var_114 =
            &partsengine::CTextDecoration::`vftable'
        struct partsengine::CCharSpriteProperty::VTable* const var_110_1 =
            &partsengine::CCharSpriteProperty::`vftable'
        uint128_t var_74 = xmm0_7
        int32_t var_d8_1 = eax_15
        var_4.b = 7
        int32_t* eax_16 = *edi
        int32_t var_1dc_1 = var_164
        sub_468940(eax_16, edi[1], &eax_16[6], eax_16)
        void* edi_1 = edi[1]
        
        for (int32_t* i = edi_1 - 0x18; i != edi_1; i = &i[6])
            if (i[5] u>= 0x10)
                j__free(*i)
            
            i[5] = 0xf
            i[4] = 0
            *i = 0
        
        var_168[1] -= 0x18
        char var_44
        int32_t var_30
        char var_2c
        int32_t ebx_1
        char* esi_1
        
        if (*(ebp + 0xf4) == 0)
            var_30 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            sub_402110(&var_44, 0x6da676, nullptr)
            esi_1 = &var_44
            ebx_1 = ebx | 2
        else
            esi_1 = sub_51aa20(&var_2c, &var_8c)
            ebx_1 = ebx | 1
        
        int32_t var_c0_1 = 0xf
        int32_t var_c4_1 = 0
        char var_d4 = 0
        bool cond:0_1 = *(esi_1 + 0x14) u>= 0x10
        var_1c4 = ebx_1
        
        if (cond:0_1)
            var_d4.d = *esi_1
            *esi_1 = 0
        else
            void* eax_19 = *(esi_1 + 0x10)
            
            if (eax_19 != 0xffffffff)
                _memcpy(&var_d4, esi_1, eax_19 + 1, eax_4)
        
        int32_t eax_22 = *(esi_1 + 0x10)
        int32_t var_c0_2 = *(esi_1 + 0x14)
        *(esi_1 + 0x14) = 0xf
        *(esi_1 + 0x10) = 0
        *esi_1 = 0
        var_4 = 9
        
        if ((ebx_1.b & 2) != 0)
            ebx_1 &= 0xfffffffd
            var_1c4 = ebx_1
            
            if (var_30 u>= 0x10)
                j__free(var_44.d)
            
            var_30 = 0xf
            int32_t var_34_2 = 0
            var_44 = 0
        
        var_4.b = 0xa
        
        if ((ebx_1.b & 1) != 0)
            var_1c4 = ebx_1 & 0xfffffffe
            int32_t var_18
            
            if (var_18 u>= 0x10)
                j__free(var_2c.d)
            
            var_18 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
        
        char* ecx_4 = &var_d4
        char* ebp_1 = var_d4.d
        int32_t edx_2 = 3
        
        if (var_c0_2 u>= 0x10)
            ecx_4 = ebp_1
        
        if (eax_22 u< 3)
            edx_2 = eax_22
        
        int32_t eax_25
        bool cond:5_1
        
        if (edx_2 == 0)
        label_519e33:
            
            if (eax_22 u>= 3)
                eax_25.b = eax_22 != 3
            else
                eax_25 = 0xffffffff
            
            cond:5_1 = eax_25 == 0
        else
            void* const esi_2 = &data_6e2d00
            int32_t i_4 = edx_2 - 4
            
            if (edx_2 u>= 4)
                int32_t i_1
                
                do
                    if (*ecx_4 != *esi_2)
                        goto label_519df6
                    
                    ecx_4 = &ecx_4[4]
                    esi_2 += 4
                    i_1 = i_4
                    i_4 -= 4
                while (i_1 u>= 4)
            
            if (i_4 == 0xfffffffc)
                eax_25 = 0
            else
            label_519df6:
                int32_t eax_23
                eax_23.b = *ecx_4
                char temp3_1 = *esi_2
                
                if (eax_23.b != temp3_1)
                    eax_25 = sbb.d(eax_23, eax_23, eax_23.b u< temp3_1) | 1
                else if (i_4 == 0xfffffffd)
                    eax_25 = 0
                else
                    eax_23.b = ecx_4[1]
                    char temp6_1 = *(esi_2 + 1)
                    
                    if (eax_23.b != temp6_1)
                        eax_25 = sbb.d(eax_23, eax_23, eax_23.b u< temp6_1) | 1
                    else if (i_4 == 0xfffffffe)
                        eax_25 = 0
                    else
                        eax_23.b = ecx_4[2]
                        char temp7_1 = *(esi_2 + 2)
                        
                        if (eax_23.b != temp7_1)
                            eax_25 = sbb.d(eax_23, eax_23, eax_23.b u< temp7_1) | 1
                        else if (i_4 == 0xffffffff)
                            eax_25 = 0
                        else
                            eax_23.b = ecx_4[3]
                            char temp9_1 = *(esi_2 + 3)
                            
                            if (eax_23.b == temp9_1)
                                eax_25 = 0
                            else
                                eax_25 = sbb.d(eax_23, eax_23, eax_23.b u< temp9_1) | 1
            
            cond:5_1 = eax_25 == 0
            
            if (eax_25 == 0)
                goto label_519e33
        
        eax_25.b = cond:5_1
        void* const var_1e0_4
        int32_t ebx_4
        int32_t ebp_2
        int32_t edi_3
        
        if (eax_25.b == 0)
            char* ecx_7 = &var_d4
            int32_t edx_3 = 4
            
            if (var_c0_2 u>= 0x10)
                ecx_7 = ebp_1
            
            if (eax_22 u< 4)
                edx_3 = eax_22
            
            int32_t eax_29
            bool cond:8_1
            
            if (edx_3 == 0)
            label_519f05:
                
                if (eax_22 u>= 4)
                    eax_29.b = eax_22 != 4
                else
                    eax_29 = 0xffffffff
                
                cond:8_1 = eax_29 == 0
            else
                char const* const esi_4 = "/pos"
                int32_t i_5 = edx_3 - 4
                
                if (edx_3 u>= 4)
                    int32_t i_2
                    
                    do
                        if (*ecx_7 != *esi_4)
                            goto label_519ec8
                        
                        ecx_7 = &ecx_7[4]
                        esi_4 = &esi_4[4]
                        i_2 = i_5
                        i_5 -= 4
                    while (i_2 u>= 4)
                
                if (i_5 == 0xfffffffc)
                    eax_29 = 0
                else
                label_519ec8:
                    eax_25.b = *ecx_7
                    char const temp10_1 = *esi_4
                    
                    if (eax_25.b != temp10_1)
                        eax_29 = sbb.d(eax_25, eax_25, eax_25.b u< temp10_1) | 1
                    else if (i_5 == 0xfffffffd)
                        eax_29 = 0
                    else
                        eax_25.b = ecx_7[1]
                        char temp13_1 = esi_4[1]
                        
                        if (eax_25.b != temp13_1)
                            eax_29 = sbb.d(eax_25, eax_25, eax_25.b u< temp13_1) | 1
                        else if (i_5 == 0xfffffffe)
                            eax_29 = 0
                        else
                            eax_25.b = ecx_7[2]
                            char temp15_1 = esi_4[2]
                            
                            if (eax_25.b != temp15_1)
                                eax_29 = sbb.d(eax_25, eax_25, eax_25.b u< temp15_1) | 1
                            else if (i_5 == 0xffffffff)
                                eax_29 = 0
                            else
                                eax_25.b = ecx_7[3]
                                char temp16_1 = esi_4[3]
                                
                                if (eax_25.b == temp16_1)
                                    eax_29 = 0
                                else
                                    eax_29 = sbb.d(eax_25, eax_25, eax_25.b u< temp16_1) | 1
                
                cond:8_1 = eax_29 == 0
                
                if (eax_29 == 0)
                    goto label_519f05
            
            eax_29.b = cond:8_1
            
            if (eax_29.b != 0)
                int32_t var_1dc_8 = 1
                var_1e0_4 = &data_6e2cec
                goto label_519e59
            
            char* ecx_8 = &var_d4
            int32_t eax_30 = 4
            
            if (var_c0_2 u>= 0x10)
                ecx_8 = ebp_1
            
            if (eax_22 u< 4)
                eax_30 = eax_22
            
            int32_t eax_31 = sub_405190(eax_30, "font", ecx_8, eax_30)
            bool cond:7_1 = eax_31 == 0
            
            if (eax_31 == 0)
                if (eax_22 u>= 4)
                    eax_31.b = eax_22 != 4
                else
                    eax_31 = 0xffffffff
                
                cond:7_1 = eax_31 == 0
            
            eax_31.b = cond:7_1
            
            if (eax_31.b != 0)
                sub_51ddf0(&var_174, &var_154)
                sub_51ae10(&var_8c, &var_154)
                
                if (var_c0_2 u>= 0x10)
                    j__free(var_d4.d)
                
                int32_t var_c0_3 = 0xf
                int32_t var_c4_3 = 0
                var_d4 = 0
                
                if (var_90_1 u>= 0x10)
                    j__free(var_a4.d)
                
                int32_t var_90_2 = 0xf
                int32_t var_94_2 = 0
                var_a4 = 0
                
                if (var_a8_1 u>= 0x10)
                    j__free(var_bc.d)
                
                var_4.b = 3
                int32_t var_a8_2 = 0xf
                int32_t var_ac_2 = 0
                var_bc = 0
                
                if (var_78_1 u< 0x10)
                    var_190 = var_170
                    var_1c0 = var_11c
                    var_1a0 = var_130
                    var_1a4 = var_148
                    var_19c = var_134
                    var_194 = var_14c
                else
                    j__free(var_8c.d)
                    var_1c0 = var_11c
                    var_190 = var_170
                    var_1a0 = var_130
                    var_19c = var_134
                    var_1a4 = var_148
                    var_194 = var_14c
                
                goto label_51a0a8
            
            char* ecx_16 = &var_d4
            int32_t eax_39 = 5
            
            if (var_c0_2 u>= 0x10)
                ecx_16 = ebp_1
            
            if (eax_22 u< 5)
                eax_39 = eax_22
            
            int32_t eax_40 = sub_405190(eax_39, "/font", ecx_16, eax_39)
            bool cond:10_1 = eax_40 == 0
            
            if (eax_40 == 0)
                if (eax_22 u>= 5)
                    eax_40.b = eax_22 != 5
                else
                    eax_40 = 0xffffffff
                
                cond:10_1 = eax_40 == 0
            
            eax_40.b = cond:10_1
            char* var_1dc_19
            
            if (eax_40.b != 0)
                int32_t ecx_17 = var_174
                
                if (ecx_17 == var_190)
                    if (var_c0_2 u< 0x10)
                        goto label_51a1d9
                    
                    var_1dc_19 = ebp_1
                    goto label_51a1c9
                
                int32_t* edi_5 = &var_190[-0x10]
                void* eax_42 = var_190 - ecx_17
                var_190 = edi_5
                void* eax_43 = eax_42 & 0xffffffc0
                int32_t edx_5 = *(eax_43 + ecx_17 - 0x38)
                var_194 = edx_5
                var_144 = *(eax_43 + ecx_17 - 0x30)
                var_14c = edx_5
                float xmm0_12 = *(eax_43 + ecx_17 - 0x20)
                int32_t edx_6 = *(eax_43 + ecx_17 - 0x34)
                var_19c = xmm0_12
                var_134 = xmm0_12
                float xmm0_13 = *(eax_43 + ecx_17 - 0x1c)
                var_1a4 = edx_6
                var_148 = edx_6
                int32_t edx_7 = *(eax_43 + ecx_17 - 8)
                var_1a0 = xmm0_13
                var_130 = xmm0_13
                int32_t var_118_1 = *(eax_43 + ecx_17 - 4)
                var_12c = *(eax_43 + ecx_17 - 0x18)
                var_1c0 = edx_7
                var_11c = edx_7
                (**edi_5)(0)
                var_170 = edi_5
                
                if (var_c0_2 u< 0x10)
                    goto label_51a1d9
                
                var_1dc_19 = var_d4.d
                goto label_51a1c9
            
            if (sub_40c250(&var_d4, "time") == 0)
                char* ecx_22 = &var_d4
                
                if (sub_40c250(&var_d4, "/time") == 0)
                    if (sub_40c250(ecx_22, "ruby") == 0)
                        goto label_519e5e
                    
                    sub_51b4c0(&var_8c, &var_bc, &var_a4, &var_114)
                    ebx_4 = eax_14
                    edi_3 = eax_13
                    ebp_2 = eax_12
                    var_74 = xmm0_7
                    var_1b8_1 = xmm0_6
                    var_1b4_1 = xmm0_5
                    var_5c = xmm0_4
                    goto label_519e6f
                
                esi_5 = var_1b0
                
                if (esi_5 != var_1ac)
                    int32_t eax_51 = (var_1ac - esi_5) s>> 2
                    var_1ac -= 4
                    int32_t eax_52 = *(esi_5 + (eax_51 << 2) - 4)
                    var_17c = eax_52
                    var_184 = eax_52
                
                sub_401fb0(ecx_22)
                sub_401fb0(&var_a4)
                sub_401fb0(&var_bc)
                var_4.b = 3
                sub_401fb0(&var_8c)
                ebx = var_1c4
                ebp = var_1bc
            else
                sub_4158d0(&var_1b0, &var_184)
                int32_t eax_47 = sub_51ab00(&var_8c)
                var_17c = eax_47
                var_184 = eax_47
                
                if (var_c0_2 u< 0x10)
                    goto label_51a1d9
                
                var_1dc_19 = var_d4.d
            label_51a1c9:
                j__free(var_1dc_19)
            label_51a1d9:
                int32_t var_c0_4 = 0xf
                int32_t var_c4_4 = 0
                var_d4 = 0
                
                if (var_90_1 u>= 0x10)
                    j__free(var_a4.d)
                
                int32_t var_90_3 = 0xf
                int32_t var_94_3 = 0
                var_a4 = 0
                
                if (var_a8_1 u>= 0x10)
                    j__free(var_bc.d)
                
                var_4.b = 3
                var_bc = 0
                int32_t var_ac_3 = 0
                int32_t var_a8_3 = 0xf
                
                if (var_78_1 u>= 0x10)
                    j__free(var_8c.d)
                
            label_51a0a8:
                ebp = var_1bc
                ebx = var_1c4
                esi_5 = var_1b0
        else
            int32_t var_1dc_7 = 1
            var_1e0_4 = &data_6e2ce0
        label_519e59:
            sub_402110(&var_bc, var_1e0_4, 1)
        label_519e5e:
            ebx_4 = eax_14
            ebp_2 = eax_12
            edi_3 = var_198
        label_519e6f:
            struct partsengine::CTextLineSprite::VTable** eax_26 = sub_69adc6(0xf4)
            struct partsengine::CTextLineSprite::VTable** esi_3
            
            if (eax_26 == 0)
                esi_3 = nullptr
            else
                esi_3 = sub_515530(eax_26)
            
            var_198 = esi_3
            int32_t eax_63
            
            if (esi_3[0x10] != var_194 || esi_3[0x11] != var_1a4 || esi_3[0x12] != var_144.d
                || esi_3[0x13] != var_144:4.d || esi_3[0x14] != var_144:8.d
                || esi_3[0x15] != var_144:0xc.d)
            label_51a54b:
                eax_63 = var_1c0
            label_51a558:
                esi_3[0x10] = var_194
                *(esi_3 + 0x48) = var_144
                esi_3[0x11] = var_1a4
                esi_3[0x16] = var_19c
                esi_3[0x17] = var_1a0
                *(esi_3 + 0x60) = var_12c
                esi_3[0xd] = eax_63
                sub_515e50(esi_3)
            else
                float xmm0_19 = esi_3[0x16]
                xmm0_19 - var_19c
                int32_t eax_58
                eax_58:1.b = (xmm0_19 == var_19c ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_19, var_19c) ? 1 : 0) << 2 | (xmm0_19 < var_19c ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_51a54b
                
                float xmm0_20 = esi_3[0x17]
                xmm0_20 - var_1a0
                eax_58:1.b = (xmm0_20 == var_1a0 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_20, var_1a0) ? 1 : 0) << 2 | (xmm0_20 < var_1a0 ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4 || esi_3[0x18] != var_12c.d || esi_3[0x19] != var_12c:4.d
                        || esi_3[0x1a] != var_12c:8.d)
                    goto label_51a54b
                
                eax_63 = var_1c0
                
                if (esi_3[0x1b] != var_12c:0xc.d || esi_3[0xd] != eax_63)
                    goto label_51a558
            uint128_t xmm1_3
            float xmm2_1
            float xmm3_1
            
            if (esi_3[0x1d] != ebp_2 || esi_3[0x1e] != edi_3)
            label_51a691:
                xmm2_1 = var_1b4_1
            label_51a697:
                xmm3_1 = var_1b8_1
                xmm1_3 = var_74
            label_51a6a6:
                uint128_t xmm0_39 = var_5c
                esi_3[0x1d] = ebp_2
                esi_3[0x1e] = edi_3
                *(esi_3 + 0x7c) = xmm0_39
                esi_3[0x23] = xmm2_1
                esi_3[0x24] = xmm3_1
                *(esi_3 + 0x94) = xmm1_3
                esi_3[0xe] = ebx_4
                sub_515e50(esi_3)
            else
                uint128_t xmm1_2 = var_5c
                
                if (esi_3[0x1f] != xmm1_2)
                    goto label_51a691
                
                int32_t xmm0_26 = _mm_bsrli_si128(xmm1_2, 4)
                
                if (esi_3[0x20] != xmm0_26)
                    goto label_51a691
                
                int32_t xmm0_28 = _mm_bsrli_si128(xmm1_2, 8)
                
                if (esi_3[0x21] != xmm0_28)
                    goto label_51a691
                
                xmm2_1 = var_1b4_1
                int32_t xmm0_30 = _mm_bsrli_si128(xmm1_2, 0xc)
                
                if (esi_3[0x22] != xmm0_30)
                    goto label_51a697
                
                float xmm0_31 = esi_3[0x23]
                xmm3_1 = var_1b8_1
                xmm1_3 = var_74
                xmm0_31 - xmm2_1
                int32_t eax_67
                eax_67:1.b = (xmm0_31 == xmm2_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_31, xmm2_1) ? 1 : 0) << 2 | (xmm0_31 < xmm2_1 ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (p_6)
                    goto label_51a6a6
                
                float xmm0_32 = esi_3[0x24]
                xmm0_32 - xmm3_1
                eax_67:1.b = (xmm0_32 == xmm3_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_32, xmm3_1) ? 1 : 0) << 2 | (xmm0_32 < xmm3_1 ? 1 : 0)
                bool p_8 = unimplemented  {test ah, 0x44}
                
                if (p_8 || esi_3[0x25] != xmm1_3)
                    goto label_51a6a6
                
                int32_t xmm0_34 = _mm_bsrli_si128(xmm1_3, 4)
                
                if (esi_3[0x26] != xmm0_34)
                    goto label_51a6a6
                
                int32_t xmm0_36 = _mm_bsrli_si128(xmm1_3, 8)
                
                if (esi_3[0x27] != xmm0_36)
                    goto label_51a6a6
                
                int32_t* xmm0_38 = _mm_bsrli_si128(xmm1_3, 0xc)
                
                if (esi_3[0x28] != xmm0_38 || esi_3[0xe] != ebx_4)
                    goto label_51a6a6
            void* ecx_30 = &var_bc
            int32_t edx_8 = 2
            
            if (var_a8_1 u>= 0x10)
                ecx_30 = var_bc.d
            
            if (var_ac_1 u< 2)
                edx_8 = var_ac_1
            
            int32_t eax_73
            bool cond:14_1
            
            if (edx_8 == 0)
            label_51a765:
                
                if (var_ac_1 u>= 2)
                    eax_73.b = var_ac_1 != 2
                else
                    eax_73 = 0xffffffff
                
                cond:14_1 = eax_73 == 0
            else
                int32_t* edi_6 = &data_6e2cac
                int32_t i_6 = edx_8 - 4
                
                if (edx_8 u>= 4)
                    int32_t i_3
                    
                    do
                        if (*ecx_30 != *edi_6)
                            goto label_51a728
                        
                        ecx_30 += 4
                        edi_6 = &edi_6[1]
                        i_3 = i_6
                        i_6 -= 4
                    while (i_3 u>= 4)
                
                if (i_6 == 0xfffffffc)
                    eax_73 = 0
                else
                label_51a728:
                    int32_t* eax_71
                    eax_71.b = *ecx_30
                    char temp21_1 = *edi_6
                    
                    if (eax_71.b != temp21_1)
                        eax_73 = sbb.d(eax_71, eax_71, eax_71.b u< temp21_1) | 1
                    else if (i_6 == 0xfffffffd)
                        eax_73 = 0
                    else
                        eax_71.b = *(ecx_30 + 1)
                        char temp24_1 = *(edi_6 + 1)
                        
                        if (eax_71.b != temp24_1)
                            eax_73 = sbb.d(eax_71, eax_71, eax_71.b u< temp24_1) | 1
                        else if (i_6 == 0xfffffffe)
                            eax_73 = 0
                        else
                            eax_71.b = *(ecx_30 + 2)
                            char temp25_1 = *(edi_6 + 2)
                            
                            if (eax_71.b != temp25_1)
                                eax_73 = sbb.d(eax_71, eax_71, eax_71.b u< temp25_1) | 1
                            else if (i_6 == 0xffffffff)
                                eax_73 = 0
                            else
                                eax_71.b = *(ecx_30 + 3)
                                char temp26_1 = *(edi_6 + 3)
                                
                                if (eax_71.b == temp26_1)
                                    eax_73 = 0
                                else
                                    eax_73 = sbb.d(eax_71, eax_71, eax_71.b u< temp26_1) | 1
                
                cond:14_1 = eax_73 == 0
                
                if (eax_73 == 0)
                    goto label_51a765
            
            eax_73.b = cond:14_1
            int32_t var_60
            int32_t var_48
            uint128_t* ecx_32
            
            if (eax_73.b == 0)
                var_48 = 0xf
                int32_t var_4c_1 = 0
                var_5c.b = 0
                sub_401ff0(&var_5c, &var_bc, 0, 0xffffffff)
                int32_t var_4_2 = 0xc
                ecx_32 = &var_5c
                ebx = var_1c4 | 8
            else
                var_60 = 0xf
                int32_t var_64_1 = 0
                var_74.b = 0
                sub_402110(&var_74, 0x6e2cb0, 1)
                var_4.b = 0xb
                ecx_32 = &var_74
                ebx = var_1c4 | 4
            
            ebp = var_1bc
            var_1c4 = ebx
            sub_515cc0(esi_3, ecx_32, &var_a4, zx.d(*(ebp + 0xf5)), var_17c, &var_164)
            
            if ((ebx.b & 8) != 0)
                ebx &= 0xfffffff7
                var_1c4 = ebx
                
                if (var_48 u>= 0x10)
                    j__free(var_5c.d)
                
                var_48 = 0xf
                int32_t var_4c_2 = 0
                var_5c.b = 0
            
            var_4 = 0xa
            
            if ((ebx.b & 4) != 0)
                ebx &= 0xfffffffb
                var_1c4 = ebx
                
                if (var_60 u>= 0x10)
                    j__free(var_74.d)
            
            esi_3[0x38] = var_18c
            sub_412de0(ebp + 0xa8, &var_198)
            
            if (sub_40c250(&var_d4, 0x6e2cb4) == 0)
                if (sub_40c250(&var_d4, "/pos") != 0)
                    int32_t edx_9 = var_160
                    
                    if (edx_9 != var_15c)
                        int32_t eax_81 = (var_15c - edx_9) s>> 2
                        var_15c -= 4
                        int32_t eax_82 = *(edx_9 + (eax_81 << 2) - 4)
                        var_180 = eax_82
                        var_18c = eax_82
            else
                sub_4158d0(&var_160, &var_180)
                int32_t eax_77 = sub_51ac30(&var_8c)
                var_180 = eax_77
                var_18c = eax_77
            
            if (var_c0_2 u>= 0x10)
                j__free(var_d4.d)
            
            var_d4 = 0
            int32_t var_c4_5 = 0
            int32_t var_c0_5 = 0xf
            
            if (var_90_1 u>= 0x10)
                j__free(var_a4.d)
            
            var_a4 = 0
            int32_t var_94_4 = 0
            int32_t var_90_4 = 0xf
            
            if (var_a8_1 u>= 0x10)
                j__free(var_bc.d)
            
            var_4.b = 3
            int32_t var_a8_4 = 0xf
            int32_t var_ac_4 = 0
            var_bc = 0
            
            if (var_78_1 u>= 0x10)
                j__free(var_8c.d)
            
            esi_5 = var_1b0
        edi = var_168
    while (*edi != edi[1])
    
    if (esi_5 != 0)
        j__free(esi_5)
    
    int32_t eax_34 = var_160
    
    if (eax_34 != 0)
        j__free(eax_34)

int32_t var_4_1 = 0xffffffff
int32_t result = sub_51def0(&var_174)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_1c4)
return result
