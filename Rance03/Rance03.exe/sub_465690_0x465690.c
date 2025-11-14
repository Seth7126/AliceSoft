// 函数: sub_465690
// 地址: 0x465690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8f21
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_144
int32_t eax_2 = __security_cookie ^ &var_144
int32_t __saved_edi
int32_t var_158 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_10c = ebx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(ebx + 0x20) != 0)
    void* edi_1 = nullptr
    var_144 = nullptr
    void* var_140_1 = nullptr
    int32_t var_13c_1 = 0
    int32_t var_4 = 0
    int32_t ebp_1 = 0
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x38e38e39, *(ebx + 8) - *(ebx + 4))
    int32_t edx_2 = edx_1 s>> 3
    int32_t eax_8 = (edx_2 u>> 0x1f) + edx_2
    
    if (eax_8 s<= 0)
    label_465d85:
        
        if (((var_140_1 - edi_1) & 0xfffffff0) == 0x10)
            ebx.b = 1
            *(arg2 + 4) = *(edi_1 + 4)
            *(arg2 + 8) = *(edi_1 + 8)
            *(arg2 + 0xc) = *(edi_1 + 0xc)
        else
            ebx.b = 0
    else
        int32_t eax_9 = 0
        int32_t var_118_1 = 0
        char var_50
        int32_t var_3c_1
        char var_34
        int32_t var_20_1
        
        while (true)
            void* esi_2 = *(ebx + 4) + eax_9
            struct exfile::CToken::VTable* const var_38_1 = &exfile::CToken::`vftable'
            var_20_1 = 0xf
            int32_t var_24_1 = 0
            var_34 = 0
            sub_401ff0(&var_34, esi_2 + 4, 0, 0xffffffff)
            ebx = *(esi_2 + 0x1c)
            void* var_1c_1 = ebx
            int32_t var_18_1 = *(esi_2 + 0x20)
            var_4.b = 1
            var_3c_1 = 0xf
            int32_t var_40_1 = 0
            var_50 = 0
            sub_401ff0(&var_50, &var_34, 0, 0xffffffff)
            var_4.b = 2
            
            if (ebx != 0x10)
                if (ebx != 0x15)
                    result = (var_140_1 - edi_1) s>> 4
                    
                    if (result s< 2)
                        break
                    
                    int32_t eax_26 = result * 2
                    struct exfile::CNumeral::VTable* const var_138 = &exfile::CNumeral::`vftable'
                    int32_t ecx_19 = *(edi_1 + (eax_26 << 3) - 8)
                    float xmm0_10 = *(edi_1 + (eax_26 << 3) - 4)
                    int32_t var_130_1 = ecx_19
                    float var_12c_1 = xmm0_10
                    int32_t var_134_1 = *(edi_1 + (eax_26 << 3) - 0xc)
                    var_4.b = 4
                    (**(var_140_1 - 0x10))(0)
                    int32_t* var_140_2 = var_140_1 - 0x10
                    struct exfile::CNumeral::VTable* const var_128 = &exfile::CNumeral::`vftable'
                    void* ecx_23 = (var_140_1 - 0x10 - edi_1) & 0xfffffff0
                    int32_t var_120_1 = *(ecx_23 + edi_1 - 8)
                    int32_t var_11c_1 = *(ecx_23 + edi_1 - 4)
                    int32_t var_124_1 = *(ecx_23 + edi_1 - 0xc)
                    var_4.b = 5
                    (**(var_140_1 - 0x20))(0)
                    var_140_1 -= 0x20
                    
                    if (ebx - 0xc u<= 0xf)
                        switch (ebx)
                            case 0xc
                                var_4.b = 6
                                struct exfile::CNumeral::VTable* var_f0
                                sub_465f40(&var_144, sub_464c70(&var_128, &var_f0, &var_138))
                                var_f0 = &exfile::CNumeral::`vftable'
                                edi_1 = var_144
                            case 0xd
                                if (ecx_19 == 0)
                                    xmm0_10 f- 0
                                    result:1.b = (xmm0_10 == 0f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
                                        | (xmm0_10 < 0f ? 1 : 0)
                                    bool p_4 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_4))
                                        break
                                
                                var_4.b = 8
                                struct exfile::CNumeral::VTable* var_60
                                sub_465f40(&var_144, sub_464cd0(&var_128, &var_60, &var_138))
                                var_60 = &exfile::CNumeral::`vftable'
                                edi_1 = var_144
                            case 0xe
                                var_4.b = 9
                                struct exfile::CNumeral::VTable* var_b0
                                sub_465f40(&var_144, sub_464bc0(&var_128, &var_b0, &var_138))
                                var_b0 = &exfile::CNumeral::`vftable'
                                edi_1 = var_144
                            case 0xf
                                var_4.b = 0xa
                                struct exfile::CNumeral::VTable* var_70
                                sub_465f40(&var_144, sub_464c20(&var_128, &var_70, &var_138))
                                var_70 = &exfile::CNumeral::`vftable'
                                edi_1 = var_144
                            case 0x16
                                var_4.b = 0xb
                                struct exfile::CNumeral::VTable* var_90
                                sub_465f40(&var_144, sub_464df0(&var_128, &var_90, &var_138))
                                var_90 = &exfile::CNumeral::`vftable'
                                edi_1 = var_144
                            case 0x17
                                var_4.b = 0xc
                                struct exfile::CNumeral::VTable* var_e0
                                sub_465f40(&var_144, sub_464e20(&var_128, &var_e0, &var_138))
                                var_e0 = &exfile::CNumeral::`vftable'
                                edi_1 = var_144
                            case 0x18
                                if (ecx_19 == 0)
                                    xmm0_10 f- 0
                                    result:1.b = (xmm0_10 == 0f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
                                        | (xmm0_10 < 0f ? 1 : 0)
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_2))
                                        break
                                
                                var_4.b = 7
                                struct exfile::CNumeral::VTable* var_d0
                                sub_465f40(&var_144, sub_464d30(&var_128, &var_d0, &var_138))
                                var_d0 = &exfile::CNumeral::`vftable'
                                edi_1 = var_144
                            case 0x19
                                var_4.b = 0xd
                                struct exfile::CNumeral::VTable* var_c0
                                sub_465f40(&var_144, sub_464d60(&var_128, &var_c0, &var_138))
                                var_c0 = &exfile::CNumeral::`vftable'
                                edi_1 = var_144
                            case 0x1a
                                var_4.b = 0xf
                                struct exfile::CNumeral::VTable* var_80
                                sub_465f40(&var_144, sub_464d90(&var_128, &var_80, &var_138))
                                var_80 = &exfile::CNumeral::`vftable'
                                edi_1 = var_144
                            case 0x1b
                                var_4.b = 0xe
                                struct exfile::CNumeral::VTable* var_a0
                                sub_465f40(&var_144, sub_464dc0(&var_128, &var_a0, &var_138))
                                var_a0 = &exfile::CNumeral::`vftable'
                                edi_1 = var_144
                    
                    var_128 = &exfile::CNumeral::`vftable'
                    var_138 = &exfile::CNumeral::`vftable'
                else if (edi_1 != var_140_1)
                    if (sub_40c250(&var_50, 0x6dcbbc) == 0)
                        if (sub_40c250(&var_50, 0x6dcbb0) == 0)
                            if (sub_40c250(&var_50, 0x6dcbb4) == 0)
                                if (sub_40c250(&var_50, "float") != 0)
                                    void* ecx_18 = (var_140_1 - edi_1) & 0xfffffff0
                                    float xmm0_9 = *(ecx_18 + edi_1 - 4)
                                    *(ecx_18 + edi_1 - 0xc) = 2
                                    *(ecx_18 + edi_1 - 4) = xmm0_9
                                    *(ecx_18 + edi_1 - 8) = int.d(xmm0_9)
                            else
                                void* ecx_14 = (var_140_1 - edi_1) & 0xfffffff0
                                int32_t eax_21 = *(ecx_14 + edi_1 - 8)
                                *(ecx_14 + edi_1 - 0xc) = 1
                                *(ecx_14 + edi_1 - 4) = _mm_cvtepi32_ps(zx.o(eax_21))
                                *(ecx_14 + edi_1 - 8) = eax_21
                        else
                            void* ecx_10 = (var_140_1 - edi_1) & 0xfffffff0
                            int32_t eax_19 = not.d(*(ecx_10 + edi_1 - 8))
                            *(ecx_10 + edi_1 - 0xc) = 1
                            *(ecx_10 + edi_1 - 4) = _mm_cvtepi32_ps(zx.o(eax_19))
                            *(ecx_10 + edi_1 - 8) = eax_19
                    else
                        void* esi_5 = (var_140_1 - edi_1) & 0xfffffff0
                        int32_t eax_13 = *(esi_5 + edi_1 - 0xc)
                        
                        if (eax_13 == 1)
                            int32_t eax_15 = neg.d(*(esi_5 + edi_1 - 8))
                            *(esi_5 + edi_1 - 0xc) = 1
                            *(esi_5 + edi_1 - 8) = eax_15
                            *(esi_5 + edi_1 - 4) = _mm_cvtepi32_ps(zx.o(eax_15))
                        else if (eax_13 == 2)
                            float xmm0_4 = *(esi_5 + edi_1 - 4) * -1f
                            *(esi_5 + edi_1 - 0xc) = 2
                            *(esi_5 + edi_1 - 4) = xmm0_4
                            *(esi_5 + edi_1 - 8) = int.d(xmm0_4)
                
                if (var_3c_1 u>= 0x10)
                    j__free(var_50.d)
                
                var_4.b = 0
                struct exfile::CToken::VTable* const var_38_3 = &exfile::CToken::`vftable'
                var_50 = 0
                int32_t var_40_3 = 0
                int32_t var_3c_3 = 0xf
                
                if (var_20_1 u>= 0x10)
                    j__free(var_34.d)
            else
                struct exfile::CNumeral::VTable* const var_100 = &exfile::CNumeral::`vftable'
                int32_t var_fc_1 = 0
                int32_t var_f8_1 = 0
                int32_t var_f4_1 = 0
                var_4.b = 3
                sub_464970(&var_100, &var_34)
                sub_465f40(&var_144, &var_100)
                var_100 = &exfile::CNumeral::`vftable'
                
                if (var_3c_1 u>= ebx)
                    j__free(var_50.d)
                
                var_4.b = 0
                int32_t var_3c_2 = 0xf
                int32_t var_40_2 = 0
                var_50 = 0
                struct exfile::CToken::VTable* const var_38_2 = &exfile::CToken::`vftable'
                
                if (var_20_1 u< 0x10)
                    edi_1 = var_144
                else
                    j__free(var_34.d)
                    edi_1 = var_144
            
            ebp_1 += 1
            ebx = var_10c
            eax_9 = var_118_1 + 0x24
            var_118_1 = eax_9
            
            if (ebp_1 s>= eax_8)
                goto label_465d85
        
        if (var_3c_1 u>= 0x10)
            j__free(var_50.d)
        
        int32_t var_3c_4 = 0xf
        int32_t var_40_4 = 0
        var_50 = 0
        struct exfile::CToken::VTable* const var_38_4 = &exfile::CToken::`vftable'
        
        if (var_20_1 u< 0x10)
            ebx.b = 0
        else
            j__free(var_34.d)
            ebx.b = 0
    
    int32_t var_4_1 = 0xffffffff
    
    if (edi_1 != 0)
        void* esi_8 = edi_1
        
        if (edi_1 != var_140_1)
            do
                (**esi_8)(0)
                esi_8 += 0x10
            while (esi_8 != var_140_1)
        
        j__free(edi_1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_144)
return result
