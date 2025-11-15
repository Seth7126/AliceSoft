// 函数: sub_471410
// 地址: 0x471410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_72d969
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_144 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x20) != 0)
    void* ecx = nullptr
    void* var_4c = nullptr
    void* var_48_1 = nullptr
    int32_t var_44_1 = 0
    int32_t var_14_1 = 0
    void** esi_1 = *(arg1 + 4)
    int32_t edi_1 = *(arg1 + 8)
    int32_t var_80_1 = edi_1
    char var_3d_1
    
    if (esi_1 == edi_1)
    label_471919:
        
        if (((var_48_1 - ecx) & 0xfffffff0) == 0x10)
            *(arg2 + 4) = *(ecx + 4)
            *(arg2 + 8) = *(ecx + 8)
            *(arg2 + 0xc) = *(ecx + 0xc)
            var_3d_1 = 1
        else
            var_3d_1 = 0
    else
        char var_3c
        int32_t var_28_1
        
        while (true)
            int32_t eax_3 = esi_1[0xc]
            var_28_1 = 0xf
            int32_t var_2c_1 = 0
            var_3c = 0
            sub_403590(&var_3c, esi_1, 0, 0xffffffff)
            var_14_1.b = 1
            
            if (eax_3 == 0x11)
                struct exfile::CNumeral::VTable* const var_94 = &exfile::CNumeral::`vftable'
                int32_t var_90_1 = 0
                int32_t var_8c_1 = 0
                int32_t var_88_1 = 0
                var_14_1.b = 2
                sub_470aa0(&var_94, esi_1)
                sub_471aa0(&var_4c, &var_94)
                var_94 = &exfile::CNumeral::`vftable'
            else if (eax_3 != 0x16)
                void* eax_27 = var_4c
                int32_t edx_4 = (var_48_1 - eax_27) s>> 4
                
                if (edx_4 s< 2)
                    break
                
                int32_t edx_5 = edx_4 * 2
                struct exfile::CNumeral::VTable* const var_70 = &exfile::CNumeral::`vftable'
                int32_t edi_2 = *(eax_27 + (edx_5 << 3) - 8)
                float xmm0_5 = *(eax_27 + (edx_5 << 3) - 4)
                int32_t var_68_1 = edi_2
                float var_64_1 = xmm0_5
                int32_t var_6c_1 = *(eax_27 + (edx_5 << 3) - 0xc)
                (**(var_48_1 - 0x10))(0)
                void* eax_30 = var_4c
                struct exfile::CNumeral::VTable* const var_60 = &exfile::CNumeral::`vftable'
                void* ecx_23 = (var_48_1 - 0x10 - eax_30) & 0xfffffff0
                int32_t var_58_1 = *(ecx_23 + eax_30 - 8)
                void* eax_32 = var_4c
                int32_t var_54_1 = *(ecx_23 + eax_32 - 4)
                int32_t var_5c_1 = *(ecx_23 + eax_32 - 0xc)
                var_14_1.b = 4
                (**(var_48_1 - 0x20))(0)
                edi_1 = var_80_1
                var_48_1 -= 0x20
                int32_t eax_38
                
                if (eax_3 - 0xd u<= 0xf)
                    switch (eax_3)
                        case 0xd
                            var_14_1.b = 5
                            struct exfile::CNumeral::VTable* var_a4
                            sub_471aa0(&var_4c, sub_470dc0(&var_60, &var_a4, &var_70))
                            var_a4 = &exfile::CNumeral::`vftable'
                        case 0xe
                            if (edi_2 == 0)
                                xmm0_5 f- 0
                                eax_38:1.b = (xmm0_5 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2
                                    | (xmm0_5 < 0f ? 1 : 0)
                                bool p_4 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_4))
                                    break
                            
                            var_14_1.b = 7
                            struct exfile::CNumeral::VTable* var_c4
                            sub_471aa0(&var_4c, sub_470e20(&var_60, &var_c4, &var_70))
                            var_c4 = &exfile::CNumeral::`vftable'
                        case 0xf
                            var_14_1.b = 8
                            struct exfile::CNumeral::VTable* var_d4
                            sub_471aa0(&var_4c, sub_470d10(&var_60, &var_d4, &var_70))
                            var_d4 = &exfile::CNumeral::`vftable'
                        case 0x10
                            var_14_1.b = 9
                            struct exfile::CNumeral::VTable* var_e4
                            sub_471aa0(&var_4c, sub_470d70(&var_60, &var_e4, &var_70))
                            var_e4 = &exfile::CNumeral::`vftable'
                        case 0x17
                            var_14_1.b = 0xa
                            struct exfile::CNumeral::VTable* var_f4
                            sub_471aa0(&var_4c, sub_470f40(&var_60, &var_f4, &var_70))
                            var_f4 = &exfile::CNumeral::`vftable'
                        case 0x18
                            var_14_1.b = 0xb
                            struct exfile::CNumeral::VTable* var_104
                            sub_471aa0(&var_4c, sub_470f70(&var_60, &var_104, &var_70))
                            var_104 = &exfile::CNumeral::`vftable'
                        case 0x19
                            if (edi_2 == 0)
                                xmm0_5 f- 0
                                eax_38:1.b = (xmm0_5 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2
                                    | (xmm0_5 < 0f ? 1 : 0)
                                bool p_2 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_2))
                                    break
                            
                            var_14_1.b = 6
                            struct exfile::CNumeral::VTable* var_b4
                            sub_471aa0(&var_4c, sub_470e80(&var_60, &var_b4, &var_70))
                            var_b4 = &exfile::CNumeral::`vftable'
                        case 0x1a
                            var_14_1.b = 0xc
                            struct exfile::CNumeral::VTable* var_114
                            sub_471aa0(&var_4c, sub_470eb0(&var_60, &var_114, &var_70))
                            var_114 = &exfile::CNumeral::`vftable'
                        case 0x1b
                            var_14_1.b = 0xe
                            struct exfile::CNumeral::VTable* var_134
                            sub_471aa0(&var_4c, sub_470ee0(&var_60, &var_134, &var_70))
                            var_134 = &exfile::CNumeral::`vftable'
                        case 0x1c
                            var_14_1.b = 0xd
                            struct exfile::CNumeral::VTable* var_124
                            sub_471aa0(&var_4c, sub_470f10(&var_60, &var_124, &var_70))
                            var_124 = &exfile::CNumeral::`vftable'
                var_60 = &exfile::CNumeral::`vftable'
                var_70 = &exfile::CNumeral::`vftable'
            else
                void* eax_5
                eax_5.b = var_4c == var_48_1
                
                if (eax_5.b == 0)
                    int32_t eax_12
                    int32_t ecx_7
                    void* edx_1
                    float xmm0_4
                    
                    if (sub_407560(&var_3c, 0x75f830) == 0)
                        if (sub_407560(&var_3c, 0x75f83c) == 0)
                            if (sub_407560(&var_3c, 0x75f838) != 0)
                                edx_1 = var_4c
                                ecx_7 = (var_48_1 - edx_1) s>> 4
                                eax_12 = *(edx_1 + ecx_7 * 0x10 - 8)
                                goto label_471555
                            
                            if (sub_407560(&var_3c, "float") != 0)
                                edx_1 = var_4c
                                ecx_7 = (var_48_1 - edx_1) s>> 4
                                xmm0_4 = *(edx_1 + ecx_7 * 0x10 - 4)
                                goto label_47160c
                        else
                            edx_1 = var_4c
                            ecx_7 = (var_48_1 - edx_1) s>> 4
                            eax_12 = not.d(*(edx_1 + ecx_7 * 0x10 - 8))
                        label_471555:
                            int32_t ecx_8 = ecx_7 * 2
                            int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_12))
                            *(edx_1 + (ecx_8 << 3) - 0xc) = 1
                            *(edx_1 + (ecx_8 << 3) - 4) = xmm0_2
                            *(edx_1 + (ecx_8 << 3) - 8) = eax_12
                    else
                        edx_1 = var_4c
                        ecx_7 = (var_48_1 - edx_1) s>> 4
                        
                        if (*(edx_1 + ecx_7 * 0x10 - 0xc) == 1)
                            eax_12 = neg.d(*(edx_1 + ecx_7 * 0x10 - 8))
                            goto label_471555
                        
                        if (*(edx_1 + ecx_7 * 0x10 - 0xc) == 2)
                            xmm0_4 = *(edx_1 + ecx_7 * 0x10 - 4) ^ (data_79aad0).d
                        label_47160c:
                            int32_t ecx_18 = ecx_7 * 2
                            *(edx_1 + (ecx_18 << 3) - 0xc) = 2
                            *(edx_1 + (ecx_18 << 3) - 4) = xmm0_4
                            *(edx_1 + (ecx_18 << 3) - 8) = int.d(xmm0_4)
            
            var_14_1.b = 0
            
            if (var_28_1 u>= 0x10)
                sub_403160(var_3c.d, var_28_1 + 1, 1)
            
            esi_1 = &esi_1[0xe]
            
            if (esi_1 == edi_1)
                ecx = var_4c
                goto label_471919
        
        if (var_28_1 u< 0x10)
            var_3d_1 = 0
        else
            sub_403160(var_3c.d, var_28_1 + 1, 1)
            var_3d_1 = 0
    
    sub_471bb0(&var_4c)
    result.b = var_3d_1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
