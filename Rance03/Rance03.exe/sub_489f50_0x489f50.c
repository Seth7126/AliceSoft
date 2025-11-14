// 函数: sub_489f50
// 地址: 0x489f50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bad11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_a80
int32_t eax_2 = __security_cookie ^ &var_a80
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg7
int32_t* var_a00 = edi

if (*(arg1 + 0x10) != 0 && *(arg1 + 0x14) != 0 && edi != 0)
    if (arg3 != 0)
        int32_t __saved_edi
        result = (*(*edi + 0x14))(__security_cookie ^ &__saved_edi)
        
        if (arg2 s>= result)
            if (*(arg1 + 0x3c) != edi)
                *(arg1 + 0x3c) = edi
            
            if (*(arg1 + 0x28) != arg2 || arg5 != 0)
                int32_t* var_a98_2 = edi
                *(arg1 + 0x28) = arg2
                result = sub_4898c0(arg1)
                
                if (result.b != 0 && arg6 != 0)
                    float xmm0_1 = *(*(arg1 + 0x10) + 0x20)
                    int32_t ebx_1 = *(*(arg1 + 0x14) + 0x34)
                    int32_t eax_8 = *edi
                    int32_t var_a7c = ebx_1
                    void* eax_9 = (*(eax_8 + 0x18))()
                    var_a80 = nullptr
                    result = eax_9 + 1 - ebx_1
                    struct _EXCEPTION_REGISTRATION_RECORD** result_1
                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_4 = &result_1
                    result_1 = result
                    
                    if (result s<= 0)
                        ecx_4 = &var_a80
                    
                    struct _EXCEPTION_REGISTRATION_RECORD** ecx_5 = *ecx_4
                    
                    if (ecx_5 s> 0)
                        struct _EXCEPTION_REGISTRATION_RECORD** var_a98_3 = ecx_5
                        sub_4895b0(arg1, *(*(arg1 + 0x14) + 0x30))
                        int32_t eax_12 = (*(*edi + 0x14))()
                        int32_t eax_16 = (*(*edi + 0x18))() + eax_12 - 1 - ebx_1 + 1
                        void** esi_3 = *(arg1 + 0x14) + 8
                        char eax_17 = sub_4873f0(*(arg1 + 0x10), esi_3)
                        void* ecx_10 = *(arg1 + 0x14)
                        ebx_1.b = eax_17
                        eax_17 = *(ecx_10 + 0xd8)
                        int32_t eax_18 = *(ecx_10 + 0x120)
                        result = sub_487890(*(arg1 + 0x10), esi_3)
                        
                        if (ebx_1.b == 0)
                            void* var_a40_1
                            struct _EXCEPTION_REGISTRATION_RECORD** var_a3c_1
                            
                            if (result == 0)
                                var_a40_1 = esi_3
                            label_48a0f6:
                                var_a3c_1 = nullptr
                            else
                            label_48a0e1:
                                var_a40_1 = &result[2]
                                
                                if (result == 0)
                                    goto label_48a0f6
                                
                                var_a3c_1 = result[8]
                            
                            int32_t var_a38_1
                            
                            if (result == 0)
                                var_a38_1 = 3
                            else
                                var_a38_1 = result[9]
                            
                            int32_t var_9ec
                            int32_t var_9e4
                            sub_489780(arg1, &var_9ec, &var_9e4, esi_3)
                            int32_t eax_20 = *edi
                            struct _EXCEPTION_REGISTRATION_RECORD** result_2 = arg2 - var_a7c + 1
                            result_1 = result_2
                            struct _EXCEPTION_REGISTRATION_RECORD** eax_21 = (*(eax_20 + 0x14))()
                            var_a80 = eax_21
                            struct _EXCEPTION_REGISTRATION_RECORD*** ecx_16 = &result_1
                            
                            if (eax_21 s>= result_2)
                                ecx_16 = &var_a80
                            
                            struct _EXCEPTION_REGISTRATION_RECORD** esi_6 = *ecx_16
                            struct _EXCEPTION_REGISTRATION_RECORD** var_a6c_1 = esi_6
                            int32_t eax_23
                            int32_t ecx_18
                            eax_23, ecx_18 = (*(*edi + 8))(arg2)
                            int32_t var_a98_8 = ecx_18
                            sub_489720(arg1)
                            result = arg2
                            int32_t ebx_3 = 0
                            
                            if (esi_6 s<= result)
                                result -= esi_6
                                result_1 = result
                                
                                while (esi_6 s<= eax_16)
                                    int32_t eax_24 = *edi
                                    float xmm0_3 = _mm_cvtepi32_ps(zx.o(result))
                                    void* esi_7 = esi_6 - (*(eax_24 + 0x14))()
                                    int32_t eax_27 = (*(*edi + 8))(var_a6c_1)
                                    var_a7c = eax_27
                                    
                                    if (eax_27 != 0)
                                        void* eax_28 = (*(*edi + 8))(var_a6c_1 - 1)
                                        int32_t var_a14 = 0
                                        int32_t var_a10_1 = 0
                                        int32_t var_a0c_1 = 0
                                        
                                        if (sub_489880(var_a7c, eax_28, &var_a14) == 0)
                                            void* eax_32 = (*(*edi + 8))(var_a6c_1 + 1)
                                            
                                            if (eax_32 != 0)
                                                sub_489880(eax_32, var_a7c, &var_a14)
                                        
                                        sub_47b2a0(&var_a14)
                                        struct math::CMRand::VTable* const var_840 =
                                            &math::CMRand::`vftable'
                                        sub_47cb30(&var_840, 0)
                                        int32_t var_4 = 0
                                        sub_47cb30(&var_840, 
                                            *(*(arg1 + 0x14) + 0x124) * (esi_7 + 1))
                                        int32_t eax_37 = (*(*edi + 0x14))()
                                        void* ecx_33 = var_a6c_1 - eax_37
                                        int32_t i_1
                                        
                                        if (var_a6c_1 - eax_37 s< 0 || ecx_33
                                                s>= (*(arg1 + 0x34) - *(arg1 + 0x30)) s>> 2)
                                            i_1 = 0
                                        else
                                            i_1 = *(*(arg1 + 0x30) + (ecx_33 << 2))
                                        
                                        float esi_9 = *(arg1 + 0x14)
                                        int32_t eax_43 = sub_48aec0(xmm0_3, esi_9)
                                        float var_9dc = 0f
                                        float var_9d8_1 = 0f
                                        sub_48bed0(arg1, xmm0_3, esi_9, &var_9dc)
                                        struct partsengine::CFlatKeyDataGraphicMatrix::VTable* 
                                            var_9d0
                                        int32_t ecx_36 = sub_48d6a0(&var_9d0, *(arg1 + 8))
                                        int32_t var_a98_18 = 0xff
                                        int32_t var_a9c_6 = 1
                                        int32_t var_aa0_2 = 0
                                        int32_t var_aa4_1 = 0xff
                                        int32_t var_aa8_1 = 0xff
                                        int32_t var_aac_1 = 0xff
                                        int32_t var_ac0
                                        __builtin_memset(&var_ac0, 0, 0x14)
                                        int32_t var_ac4_1 = ecx_36
                                        var_4.b = 1
                                        int128_t xmm1_2 = var_9dc * xmm0_1
                                        int32_t var_ad8_1
                                        __builtin_memset(&var_ad8_1, 0, 0x14)
                                        void var_948
                                        sub_48d740(&var_9d0, 
                                            sub_4910d0(&var_948, xmm1_2, var_9d8_1 * xmm0_1, 
                                                0x3f800000, 0x3f800000))
                                        sub_4911f0(&var_948)
                                        int32_t eax_45
                                        int32_t edx_4
                                        edx_4:eax_45 =
                                            muls.dp.d(0x2aaaaaab, *(arg1 + 0x44) - *(arg1 + 0x40))
                                        float xmm2_5 = xmm0_3
                                        int32_t edi_1 = *(arg1 + 0x40)
                                        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_42 = &var_a80
                                        int32_t edx_5 = edx_4 s>> 1
                                        var_a80 = nullptr
                                        int32_t eax_48 = (edx_5 u>> 0x1f) + edx_5
                                        int32_t eax_50 = int.d(_mm_cvtpd_ps(
                                            _mm_cvtepi32_pd(zx.q(eax_48)) f+
                                            *((eax_48 u>> 0x1f << 3) + &data_709480)) - (xmm2_5 + 1f))
                                        int32_t var_a60 = eax_50
                                        
                                        if (eax_50 s>= 0)
                                            ecx_42 = &var_a60
                                        
                                        void* eax_52 = *ecx_42 * 3
                                        void* esi_10 = *(edi_1 + (eax_52 << 2) + 4)
                                        int32_t edi_2 = *(edi_1 + (eax_52 << 2))
                                        
                                        if (esi_10 != edi_2)
                                            do
                                                void* var_a98_20 = *(esi_10 - 4)
                                                esi_10 -= 4
                                                sub_48d740(&var_9d0, var_a98_20)
                                            while (esi_10 != edi_2)
                                            
                                            xmm2_5 = xmm0_3
                                        
                                        void* eax_53 = *(arg1 + 0x14)
                                        int32_t var_a5c = 0
                                        int32_t var_a58_1 = 0
                                        int32_t var_a54_1 = 0
                                        int32_t eax_54 = *(eax_53 + 0x88)
                                        int32_t eax_55
                                        
                                        if (eax_54 == 1)
                                            eax_55 = eax_23
                                        label_48a46e:
                                            int32_t var_a54_2 = 0
                                            int32_t var_a58_2 = *(eax_55 + 0x24)
                                            var_a5c = *(eax_55 + 0x20)
                                        else if (eax_54 == 2)
                                            eax_55 = var_a7c
                                            goto label_48a46e
                                        
                                        if (i_1 s> 0)
                                            int32_t eax_56 = int.d(xmm2_5)
                                            int32_t i
                                            
                                            do
                                                float esi_11 = *(arg1 + 0x14)
                                                int32_t var_a1c = 0
                                                int32_t var_a18_1 = 0
                                                sub_48a970(xmm2_5, esi_11, &var_840, &var_a1c)
                                                float var_a28 = 0f
                                                float var_a24_1 = 0f
                                                int32_t var_a20_1 = 0
                                                float* ecx_44 =
                                                    sub_48af30(esi_11, &var_840, &var_a28)
                                                int32_t var_a34
                                                int32_t* var_a98_23 = &var_a34
                                                var_a34 = 0
                                                int32_t var_a30_1 = 0
                                                float var_a2c_1 = 0f
                                                sub_48ac00(xmm0_3, esi_11, &var_840, ecx_44)
                                                float var_a50 = 0f
                                                float var_a4c_1 = 0f
                                                float var_a48_1 = 0f
                                                sub_48b200(esi_11, &var_a14, &var_a28, &var_840, 
                                                    &var_a50)
                                                float xmm0_10 = var_a50
                                                float xmm0_14 = _mm_sqrt_ss(0, 
                                                    var_a4c_1 * var_a4c_1 + xmm0_10 * xmm0_10
                                                        + var_a48_1 * var_a48_1)
                                                xmm0_14 f- 0
                                                uint32_t eax_57
                                                eax_57:1.b = (xmm0_14 == 0f ? 1 : 0) << 6
                                                    | (is_unordered.d(xmm0_14, 0f) ? 1 : 0) << 2
                                                    | (xmm0_14 < 0f ? 1 : 0)
                                                bool p_2 = unimplemented  {test ah, 0x44}
                                                float xmm0_19
                                                
                                                if (not(p_2) || eax_17 == 0)
                                                    xmm0_19 = var_a2c_1
                                                else
                                                    var_a60 = fconvert.s(__fpatan(
                                                        fconvert.t(var_a50), fconvert.t(var_a4c_1)))
                                                    xmm0_19 = var_a60 f* 180f * 0.318309873f + 90f
                                                        + var_a2c_1
                                                
                                                var_a80 = xmm0_19
                                                int32_t ecx_46
                                                float xmm0_20
                                                ecx_46, xmm0_20 = sub_47cc50(&var_840)
                                                float var_9fc = 0f
                                                int32_t var_aa0_7 = ecx_46
                                                float var_9f8_1 = 0f
                                                int32_t var_9f4_1 = 0
                                                sub_48b870(arg1, 
                                                    1f - (xmm0_20 - 0.5f) f* *(esi_11 i+ 0xc0)
                                                        * 0.00999999978f, 
                                                    esi_11, &var_a28, &var_a5c, &var_a50, xmm0_3, 
                                                    &var_840, &var_9fc)
                                                int32_t esi_12
                                                
                                                if ((*(arg1 + 0x20) - *(arg1 + 0x1c)) s>> 2
                                                        s> ebx_3)
                                                    esi_12 = *(*(arg1 + 0x1c) + (ebx_3 << 2))
                                                else
                                                    struct IInterface::partsengine::CFlatSpriteView::VTable
                                                        ** eax_61 = sub_69adc6(0x38)
                                                    struct IInterface::partsengine::CFlatSpriteView::VTable
                                                        ** eax_62
                                                    
                                                    if (eax_61 == 0)
                                                        eax_62 = nullptr
                                                    else
                                                        eax_62 = sub_48ecf0(eax_61, *(arg1 + 8), 
                                                            *(arg1 + 0x18))
                                                    
                                                    var_a7c = eax_62
                                                    sub_412de0(arg1 + 0x1c, &var_a7c)
                                                    esi_12 = var_a7c
                                                    sub_48ef50(esi_12, *(arg1 + 0x10), var_a40_1, 
                                                        var_a3c_1, var_a38_1)
                                                
                                                ebx_3 += 1
                                                sub_48a850(&var_948, &var_9d0)
                                                int32_t var_a98_30 = eax_43
                                                var_4.b = 2
                                                int32_t var_a9c_14 = 1
                                                int32_t var_aa0_10 = eax_18
                                                struct _EXCEPTION_REGISTRATION_RECORD** xmm0_25 =
                                                    var_a80
                                                int32_t var_aa4_6 = 0xff
                                                int32_t var_aa8_4 = 0xff
                                                int32_t var_aac_3 = 0xff
                                                int128_t xmm1_12 = (var_a28 + var_9fc) * xmm0_1
                                                int32_t var_ac0_1
                                                __builtin_memset(&var_ac0_1, 0, 0x14)
                                                void* var_ac4_2 = &var_948
                                                int32_t var_ac8_1 = var_9e4
                                                int32_t var_acc_1 = var_9ec
                                                struct _EXCEPTION_REGISTRATION_RECORD** var_ad0_1 =
                                                    xmm0_25
                                                int32_t var_ad4_1 = var_a30_1
                                                int32_t var_ad8_2 = var_a34
                                                struct IInterface::partsengine::CFlatKeyDataGraphic::VTable
                                                    * var_8c0
                                                sub_48d740(&var_948, 
                                                    sub_4910d0(&var_8c0, xmm1_12, 
                                                        (var_a24_1 + var_9f8_1) * xmm0_1, var_a1c, 
                                                        var_a18_1))
                                                sub_4911f0(&var_8c0)
                                                sub_48f2b0(esi_12, eax_56, arg3, arg4, &var_948)
                                                i = i_1
                                                i_1 -= 1
                                                xmm2_5 = xmm0_3
                                                var_4.b = 1
                                            while (i != 1)
                                        
                                        edi = var_a00
                                        int32_t var_4_1 = 0xffffffff
                                    
                                    esi_6 = var_a6c_1 + 1
                                    result = result_1 - 1
                                    var_a6c_1 = esi_6
                                    result_1 = result
                                    
                                    if (esi_6 s> arg2)
                                        break
                        else if (result != 0)
                            goto label_48a0e1
    else
        void* var_a98_1 = arg1
        result = sub_489720(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a80)
return result
