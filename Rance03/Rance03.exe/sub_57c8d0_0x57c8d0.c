// 函数: sub_57c8d0
// 地址: 0x57c8d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6d7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1bc
int32_t eax_2 = __security_cookie ^ &var_1bc
int32_t __saved_edi
int32_t var_1c8 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg4
void* edi = arg3
void* var_14c = edi
int32_t edx_2

if (esi s>= 0)
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = muls.dp.d(0x78787879, *(edi + 0x1c) - *(edi + 0x18))
    edx_2 = edx_1 s>> 5

int32_t ecx_6

if (esi s< 0 || esi s>= (edx_2 u>> 0x1f) + edx_2)
    ecx_6 = 0
else
    int32_t eax_11 = *(edi + 0x18)
    int32_t edx_5 = esi * 0x11
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 =
        muls.dp.d(0x4bda12f7, *(eax_11 + (edx_5 << 2) + 0x38) - *(eax_11 + (edx_5 << 2) + 0x34))
    int32_t edx_7 = edx_6 s>> 5
    ecx_6 = (edx_7 u>> 0x1f) + edx_7

int32_t result = 0
int32_t result_1 = 0

if (ecx_6 s<= 0)
label_57d311:
    result.b = 1
else
    while (true)
        int128_t var_68
        __builtin_memset(&var_68, 0, 0x24)
        int32_t var_190
        int32_t var_18c
        int32_t var_188
        int32_t var_144
        char var_13c
        char var_13b
        char var_13a
        int128_t var_58
        void var_44
        void var_40
        void var_3c
        void var_38
        void var_34
        void var_30
        void var_2c
        void var_28
        void var_24
        int32_t var_20
        int32_t var_1c
        int32_t var_18
        result = sub_5785b0(edi, esi, result, &var_20, &var_1c, &var_18, &var_44, &var_40, &var_3c, 
            &var_38, &var_34, &var_30, &var_2c, &var_28, &var_24, &var_190, &var_18c, &var_188, 
            &var_13c, &var_13b, &var_13a, &var_68, &var_68:0xc, &var_58:8, &var_144)
        
        if (result.b == 0)
            break
        
        int32_t eax_13 = var_144
        int32_t (__fastcall* var_1cc_2)(struct sealengine::CPolyVertex::VTable** arg1) = sub_5855a0
        
        if (arg8 == 0)
            eax_13 = 0
        
        struct sealengine::CPolyFace::VTable* const var_12c = &sealengine::CPolyFace::`vftable'
        var_144 = eax_13
        void var_128
        sub_69b2ba(&var_128, 0x3c, 3, sub_585530)
        char var_74_1 = 0
        int128_t* edx_8 = &var_68
        int32_t var_4 = 0
        int128_t* var_138_1 = &var_68
        int32_t var_124 = var_20 + arg6
        int32_t eax_17 = var_1c + arg6
        int32_t i_3 = 3
        int32_t eax_19 = var_18 + arg6
        int32_t* edi_2 = arg1 + 0x64
        void var_120
        void* eax_20 = &var_120
        int32_t* var_140_1 = edi_2
        void* var_130_1 = &var_120
        int64_t var_178
        void* ecx_13
        int32_t i
        
        do
            int32_t* edi_3 = *edi_2
            int32_t var_170_1 = *(edx_8 + 8)
            int32_t var_164_1 = var_144
            int32_t var_168_1 = esi
            int32_t var_1cc_3 = 0.d
            int32_t esi_1 = *(arg1 + 0x68)
            int32_t var_16c_1 = *(eax_20 - 4)
            var_178 = *edx_8
            int32_t* eax_25 = sub_5801d0(&var_178, esi_1, edi_3, &var_178)
            void* eax_30
            
            if (eax_25 == esi_1)
                edi_2 = var_140_1
                int32_t eax_31
                int32_t edx_12
                edx_12:eax_31 = muls.dp.d(0x2aaaaaab, edi_2[1] - *edi_2)
                int32_t edx_13 = edx_12 s>> 2
                ecx_13 = sub_57edb0(edi_2, &var_178)
                eax_30 = var_130_1
                *eax_30 = (edx_13 u>> 0x1f) + edx_13
            else
                edi_2 = var_140_1
                ecx_13 = var_130_1
                *ecx_13 = (eax_25 - edi_3) s/ 0x18
                eax_30 = ecx_13
            
            eax_20 = eax_30 + 0x3c
            esi = arg4
            edx_8 = var_138_1 + 0xc
            i = i_3
            i_3 -= 1
            var_138_1 = edx_8
            var_130_1 = eax_20
        while (i != 1)
        int32_t var_134_1 = 0
        int32_t* esi_5 = &var_124
        
        while (true)
            int32_t edi_4 = *esi_5
            
            if (edi_4 s>= 0)
                ecx_13 = *(arg1 + 0x5c) - *(arg1 + 0x58)
                int32_t eax_33
                int32_t edx_15
                edx_15:eax_33 = muls.dp.d(0x38e38e39, ecx_13)
                edx_8 = edx_15 s>> 3
                
                if (edi_4 s< ecx_13 s/ 0x24)
                    int32_t edi_5 = edi_4 * 9
                    int32_t eax_38 = *(arg1 + 0x58)
                    int32_t var_138_2 = eax_38
                    ecx_13 =
                        (*(eax_38 + (edi_5 << 2) + 0x10) - *(eax_38 + (edi_5 << 2) + 0xc)) s>> 2
                    
                    if (ecx_13 s> 4)
                        ecx_13 = 4
                    
                    edx_8 = nullptr
                    
                    if (ecx_13 s> 0)
                        do
                            esi_5[edx_8 + 2] = *(*(eax_38 + (edi_5 << 2) + 0xc) + (edx_8 << 2))
                            edx_8 += 1
                            eax_38 = var_138_2
                        while (edx_8 s< ecx_13)
                    
                    if (ecx_13 s<= 0 || edx_8 s< 4)
                        ecx_13 = __builtin_memset(&esi_5[edx_8 + 2], 0xffffffff, (4 - edx_8) << 2)
                    
                    esi_5 = &esi_5[0xf]
                    int32_t eax_42 = var_134_1 + 1
                    var_134_1 = eax_42
                    
                    if (eax_42 s< 3)
                        continue
                    
                    int32_t esi_6 = 0
                    void var_100
                    void* var_134_2 = &var_100
                    int32_t var_130_2 = 0
                    
                    while (true)
                        int32_t var_160_1 = 0
                        int32_t var_15c_1 = 0
                        
                        if (arg4 s< 0)
                            goto label_57d2f1
                        
                        int32_t eax_44
                        int32_t edx_16
                        edx_16:eax_44 = muls.dp.d(0x78787879, *(var_14c + 0x1c) - *(var_14c + 0x18))
                        int32_t edx_17 = edx_16 s>> 5
                        
                        if (arg4 s>= (edx_17 u>> 0x1f) + edx_17)
                            goto label_57d2f1
                        
                        int32_t ecx_23 = *(&var_44 + esi_6)
                        
                        if (ecx_23 s< 0)
                            goto label_57d2f1
                        
                        int32_t esi_9 = arg4 * 0x11
                        int32_t edi_9 = *(var_14c + 0x18)
                        
                        if (ecx_23 s>= (*(edi_9 + (esi_9 << 2) + 0x2c)
                                - *(edi_9 + (esi_9 << 2) + 0x28)) s>> 3)
                            goto label_57d2f1
                        
                        int32_t eax_51 = *(edi_9 + (esi_9 << 2) + 0x28)
                        int32_t eax_52
                        int32_t edx_19
                        edx_19:eax_52 = muls.dp.d(0x78787879, *(var_14c + 0x1c) - edi_9)
                        int32_t edx_20 = edx_19 s>> 5
                        
                        if (arg4 s>= (edx_20 u>> 0x1f) + edx_20)
                            goto label_57d2f1
                        
                        int32_t ecx_26 = *(&var_38 + var_130_2)
                        
                        if (ecx_26 s< 0)
                            goto label_57d2f1
                        
                        if (ecx_26 s>= (*(edi_9 + (esi_9 << 2) + 0x2c)
                                - *(edi_9 + (esi_9 << 2) + 0x28)) s>> 3)
                            goto label_57d2f1
                        
                        int32_t eax_59 = *(edi_9 + (esi_9 << 2) + 0x28)
                        int32_t xmm3_1 = *(eax_59 + (ecx_26 << 3))
                        int32_t eax_60 = *(&var_2c + var_130_2)
                        int32_t eax_62
                        int32_t edx_22
                        edx_22:eax_62 = muls.dp.d(0x78787879, *(var_14c + 0x1c) - *(var_14c + 0x18))
                        int32_t edx_23 = edx_22 s>> 5
                        
                        if (arg4 s>= (edx_23 u>> 0x1f) + edx_23)
                            goto label_57d2f1
                        
                        if (eax_60 s< 0)
                            goto label_57d2f1
                        
                        if (eax_60 s>= (*(edi_9 + (esi_9 << 2) + 0x2c)
                                - *(edi_9 + (esi_9 << 2) + 0x28)) s>> 3)
                            goto label_57d2f1
                        
                        int32_t eax_69 = *(edi_9 + (esi_9 << 2) + 0x28)
                        float xmm2_2 = *(eax_51 + (ecx_23 << 3) + 4) + 1f
                        float xmm1_2 = *(eax_59 + (ecx_26 << 3) + 4) + 1f
                        esi_6 = var_130_2 + 4
                        int32_t xmm0_2 = *(eax_69 + (eax_60 << 3))
                        float xmm0_4 = *(eax_69 + (eax_60 << 3) + 4) + 1f
                        *(var_134_2 - 8) = *(eax_51 + (ecx_23 << 3))
                        *(var_134_2 - 4) = xmm2_2
                        *var_134_2 = xmm3_1
                        *(var_134_2 + 4) = xmm1_2
                        *(var_134_2 + 8) = xmm0_2
                        *(var_134_2 + 0xc) = xmm0_4
                        var_130_2 = esi_6
                        var_134_2 += 0x3c
                        
                        if (esi_6 s>= 0xc)
                            int32_t var_10c_1 = var_190
                            int32_t eax_77 = var_18c
                            int32_t eax_78 = var_188
                            uint32_t var_f0_1 = zx.d(var_13c)
                            uint32_t eax_80 = zx.d(var_13b)
                            uint32_t eax_81 = zx.d(var_13a)
                            sub_57ef30(sub_57efc0(arg2, &var_144), &var_12c)
                            
                            if (arg7 != 0)
                                int32_t* edi_10 = var_140_1
                                void* eax_83 = &var_120
                                void* edx_24 = &var_68:8
                                void* var_130_3 = &var_120
                                void* var_134_3 = &var_68:8
                                int32_t i_2 = 3
                                int32_t i_1
                                
                                do
                                    int32_t ecx_34 = *(eax_83 - 4)
                                    int32_t* edi_11 = *edi_10
                                    int32_t var_170_2 = *edx_24 ^ 0x80000000
                                    int32_t var_168_2 = arg4
                                    int32_t var_164_2 = var_144
                                    int32_t var_1cc_6 = 0.d
                                    int64_t xmm2_5 = _mm_unpacklo_ps(*(edx_24 - 8) ^ 0x80000000, 
                                        *(edx_24 - 4) ^ 0x80000000)
                                    int32_t esi_11 = *(arg1 + 0x68)
                                    int32_t var_16c_2 = ecx_34
                                    var_178 = xmm2_5
                                    int32_t* eax_89 = sub_5801d0(&var_178, esi_11, edi_11, &var_178)
                                    void* eax_94
                                    
                                    if (eax_89 == esi_11)
                                        edi_10 = var_140_1
                                        int32_t eax_95
                                        int32_t edx_28
                                        edx_28:eax_95 = muls.dp.d(0x2aaaaaab, edi_10[1] - *edi_10)
                                        int32_t edx_29 = edx_28 s>> 2
                                        sub_57edb0(edi_10, &var_178)
                                        eax_94 = var_130_3
                                        *eax_94 = (edx_29 u>> 0x1f) + edx_29
                                    else
                                        edi_10 = var_140_1
                                        *var_130_3 = (eax_89 - edi_11) s/ 0x18
                                        eax_94 = var_130_3
                                    
                                    eax_83 = eax_94 + 0x3c
                                    edx_24 = var_134_3 + 0xc
                                    var_130_3 = eax_83
                                    i_1 = i_2
                                    i_2 -= 1
                                    var_134_3 = edx_24
                                while (i_1 != 1)
                                int32_t var_cc
                                int32_t var_138_4 = var_cc
                                uint128_t var_e0
                                uint128_t xmm1_5 = var_e0
                                int32_t var_e4
                                int32_t edx_31 = var_e4
                                int32_t var_c8
                                int32_t var_130_4 = var_c8
                                int32_t var_c4
                                int32_t var_140_2 = var_c4
                                int32_t var_c0
                                int32_t var_184_1 = var_c0
                                int32_t var_bc
                                int32_t var_17c_1 = var_bc
                                int32_t var_b8
                                int32_t var_198_1 = var_b8
                                int32_t var_e8_2 = eax_19
                                int32_t var_a8
                                var_e4 = var_a8
                                int32_t var_a4
                                var_e0.d = var_a4
                                int32_t var_a0
                                var_e0:4.d = var_a0
                                int32_t var_9c
                                var_e0:8.d = var_9c
                                int32_t var_98
                                var_e0:0xc.d = var_98
                                int32_t var_d0_2 = eax_78
                                int32_t var_90
                                var_cc = var_90
                                int32_t var_8c
                                var_c8 = var_8c
                                int32_t var_88
                                var_c4 = var_88
                                int32_t var_84
                                var_c0 = var_84
                                int32_t var_80
                                var_bc = var_80
                                int32_t var_7c
                                var_b8 = var_7c
                                uint32_t var_b4_2 = eax_81
                                int32_t var_ac_2 = eax_17
                                var_a0 = _mm_bsrli_si128(xmm1_5, 4)
                                var_a4 = xmm1_5
                                var_a8 = edx_31
                                var_9c = _mm_bsrli_si128(xmm1_5, 8)
                                var_98 = _mm_bsrli_si128(xmm1_5, 0xc)
                                var_90 = var_138_4
                                var_8c = var_130_4
                                var_88 = var_140_2
                                var_84 = var_184_1
                                var_80 = var_17c_1
                                var_7c = var_198_1
                                int32_t var_94_2 = eax_77
                                uint32_t var_78_2 = eax_80
                                char var_74_2 = 1
                                sub_57ef30(sub_57efc0(arg2, &var_144), &var_12c)
                            
                            int32_t var_4_1 = 0xffffffff
                            var_12c = &sealengine::CPolyFace::`vftable'
                            `eh vector vbase constructor iterator'(&var_128, 0x3c, 3, sub_5855a0)
                            result = result_1 + 1
                            result_1 = result
                            
                            if (result s>= ecx_6)
                                goto label_57d311
                            
                            esi = arg4
                            edi = var_14c
                            break
                    
                    break
            
            void** eax_124 = arg5
            
            if (eax_124[5] u>= 0x10)
                eax_124 = *eax_124
            
            sub_59f4e0(eax_124, edx_8, ecx_13, 0x6e5410, eax_124)
        label_57d2f1:
            int32_t var_4_2 = 0xffffffff
            var_12c = &sealengine::CPolyFace::`vftable'
            `eh vector vbase constructor iterator'(&var_128, 0x3c, 3, sub_5855a0)
            goto label_57d30d
    
label_57d30d:
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_1bc)
return result
