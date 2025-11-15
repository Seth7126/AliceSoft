// 函数: sub_4d2330
// 地址: 0x4d2330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_733f98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_26c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xc) != 0 && *(arg1 + 0x10) != 0)
    result.b = *(arg3 + 0xa8)
    
    if (result.b != 0)
        result = *(*(arg1 + 0x130) + 0x10)
        
        if (result != 0)
            result = result[0xf]
        
        if (arg2 s>= result)
            result.b = *(arg1 + 0x24) == arg2
            uint32_t var_270_2 = zx.d(result.b)
            result = sub_4d20f0(arg1, arg3)
            *(arg1 + 0x24) = arg2
            
            if (arg4 != 0)
                void* edx_1 = *(arg1 + 0x10)
                float xmm0_1 = *(*(arg1 + 0xc) + 0x20)
                void* eax_6 = *(arg1 + 0x130)
                struct _EXCEPTION_REGISTRATION_RECORD** result_4 = *(edx_1 + 0x34)
                struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_4
                void* ecx_3 = *(eax_6 + 0x10)
                int32_t eax_7
                
                if (ecx_3 != 0)
                    eax_7 = *(ecx_3 + 0x40)
                else
                    eax_7 = 0
                
                int32_t* var_40 = nullptr
                int32_t* var_30
                int32_t** ecx_4 = &var_30
                var_30 = eax_7 - result_4 + 1
                
                if (eax_7 - result_4 + 1 s<= 0)
                    ecx_4 = &var_40
                
                result = *ecx_4
                
                if (result s> 0)
                    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                    sub_4d1e20(arg1, *(edx_1 + 0x30))
                    void* eax_10 = *(*(arg1 + 0x130) + 0x10)
                    int32_t edx_2
                    
                    if (eax_10 != 0)
                        edx_2 = *(eax_10 + 0x3c)
                    else
                        edx_2 = 0
                    
                    if (eax_10 != 0)
                        eax_10 = *(eax_10 + 0x40)
                    
                    void** esi_3 = *(arg1 + 0x10) + 8
                    char eax_14 = sub_4cde40(*(arg1 + 0xc), esi_3)
                    void* ecx_9 = *(arg1 + 0x10)
                    char var_31_1 = eax_14
                    eax_14 = *(ecx_9 + 0xd8)
                    int32_t eax_15 = *(ecx_9 + 0x120)
                    result = sub_4ce2b0(*(arg1 + 0xc), esi_3)
                    
                    if (var_31_1 == 0)
                        struct _EXCEPTION_REGISTRATION_RECORD** var_6c_1
                        
                        if (result == 0)
                            var_40 = esi_3
                        label_4d24b4:
                            var_6c_1 = nullptr
                        else
                        label_4d24a2:
                            var_40 = &result[2]
                            
                            if (result == 0)
                                goto label_4d24b4
                            
                            var_6c_1 = result[8]
                        
                        int32_t var_68_1
                        
                        if (result == 0)
                            var_68_1 = 3
                        else
                            var_68_1 = result[9]
                        
                        int32_t var_a8
                        int32_t var_a4
                        sub_4d1ff0(arg1, &var_a8, &var_a4, esi_3)
                        void* esi_4 = *(arg1 + 0x130)
                        int32_t* edx_6 = arg2 - result_2 + 1
                        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = *(esi_4 + 0x10)
                        var_30 = edx_6
                        
                        if (result_3 != 0)
                            result_3 = result_3[0xf]
                        
                        result_2 = result_3
                        int32_t** eax_17 = &var_30
                        
                        if (result_3 s>= edx_6)
                            eax_17 = &result_2
                        
                        int32_t* i_1 = *eax_17
                        result = sub_4d66c0(esi_4, arg2)
                        
                        if (result.b != 0)
                            float xmm0_2 = sub_4d6720(arg2)
                            int32_t ecx_17
                            float xmm0_3
                            ecx_17, xmm0_3 = sub_4d6740(arg2)
                            int32_t var_270_9 = ecx_17
                            result = sub_4d1f90(arg1)
                            int32_t* i = i_1
                            int32_t var_50_1 = 0
                            
                            if (i s<= arg2)
                                void* var_24_1 = i + 1
                                result = arg2 - i
                                result_2 = result
                                
                                while (i s<= eax_10 + edx_2 - 1 - result_4 + 1)
                                    void* esi_5 = *(arg1 + 0x130)
                                    result = *(esi_5 + 0x10)
                                    
                                    if (result != 0)
                                        result = result[0xf]
                                    
                                    int32_t ecx_21 = i - result
                                    
                                    if (i - result s>= 0)
                                        result = (*(arg1 + 0x30) - *(arg1 + 0x2c)) s>> 2
                                        
                                        if (ecx_21 s< result)
                                            result = *(*(arg1 + 0x2c) + (ecx_21 << 2))
                                            struct _EXCEPTION_REGISTRATION_RECORD** var_58_1 =
                                                result
                                            
                                            if (result != 0)
                                                void* eax_24 = *(esi_5 + 0x10)
                                                float xmm7_2 = _mm_cvtepi32_ps(zx.o(result_2))
                                                float var_3c_1 = xmm7_2
                                                
                                                if (eax_24 != 0)
                                                    eax_24 = *(eax_24 + 0x3c)
                                                
                                                result = sub_4d66c0(esi_5, i)
                                                
                                                if (result.b != 0)
                                                    float xmm0_4 = sub_4d6720(i_1)
                                                    float xmm0_5 = sub_4d6740(i_1)
                                                    float var_44_1 = 0f
                                                    int32_t xmm2_1 = (zx.o(0)).d
                                                    int32_t xmm3_1 = (zx.o(0)).d
                                                    float var_4c = 0f
                                                    int32_t var_48_1 = 0
                                                    char eax_32
                                                    
                                                    if (sub_4d66c0(esi_5, var_24_1 - 2) == 0)
                                                        if (sub_4d66c0(esi_5, var_24_1) != 0)
                                                            float xmm0_8 = sub_4d6720(var_24_1)
                                                            float xmm0_9
                                                            eax_32, xmm0_9 = sub_4d6740(var_24_1)
                                                            xmm2_1 = xmm0_8 - xmm0_4
                                                            xmm3_1 = xmm0_9 - xmm0_5
                                                            goto label_4d269e
                                                    else
                                                        float xmm0_6 = sub_4d6720(var_24_1 - 2)
                                                        float xmm0_7
                                                        eax_32, xmm0_7 = sub_4d6740(var_24_1 - 2)
                                                        xmm2_1 = xmm0_4 - xmm0_6
                                                        xmm3_1 = xmm0_5 - xmm0_7
                                                    label_4d269e:
                                                        var_44_1 = 0f
                                                        int32_t var_48_2 = xmm3_1
                                                        var_4c = xmm2_1
                                                    float xmm0_13 = sub_484cc0(xmm3_1 f* xmm3_1
                                                        + xmm2_1 f* xmm2_1)
                                                    xmm0_13 f- 0
                                                    bool p_2 = unimplemented  {test ah, 0x44}
                                                    float eax_33
                                                    int64_t xmm0_14
                                                    int64_t var_d0
                                                    
                                                    if (not(p_2))
                                                        xmm0_14 = var_4c.q
                                                        eax_33 = var_44_1
                                                        var_d0 = xmm0_14
                                                    else
                                                        float xmm1_4 = 1f / xmm0_13
                                                        var_d0.d = xmm2_1 f* xmm1_4
                                                        var_d0:4.d = xmm3_1 f* xmm1_4
                                                        xmm0_14 = var_d0
                                                        eax_33 = xmm1_4 * 0f
                                                    void* esi_6 = *(arg1 + 0x10)
                                                    var_4c.q = xmm0_14
                                                    float var_44_2 = eax_33
                                                    int32_t var_54_1
                                                    
                                                    if (_mm_cvtepi32_ps(zx.o(*(esi_6 + 0x110)))
                                                            f<= xmm7_2)
                                                        int32_t ecx_33 = *(esi_6 + 0x34)
                                                        
                                                        if (xmm7_2 f<= _mm_cvtepi32_ps(zx.o(ecx_33
                                                                - *(esi_6 + 0x118))))
                                                            var_54_1 = 0xff
                                                        else
                                                            var_54_1 = int.d((
                                                                _mm_cvtepi32_ps(zx.o(ecx_33)) - xmm7_2)
                                                                * 255f f* *(esi_6 + 0x11c))
                                                    else
                                                        var_54_1 =
                                                            int.d(xmm7_2 * 255f f* *(esi_6 + 0x114))
                                                    
                                                    void* ecx_34 = *(arg1 + 0xc)
                                                    void* var_28 = nullptr
                                                    
                                                    if (ecx_34 != 0)
                                                        int32_t eax_34
                                                        eax_34.b = *(esi_6 + 0xc4)
                                                        
                                                        if (eax_34.b != 0)
                                                            float xmm2_5 = *(esi_6 + 0xc8)
                                                            float xmm4_2 = *(esi_6 + 0xd0)
                                                            float xmm1_6 = *(esi_6 + 0xcc)
                                                            xmm2_5 f- 0
                                                            float xmm0_28 = *(ecx_34 + 0xc) * xmm7_2
                                                            eax_34:1.b = (xmm2_5 == 0f ? 1 : 0) << 6
                                                                | (is_unordered.d(xmm2_5, 0f) ? 1 : 0)
                                                                << 2 | (xmm2_5 < 0f ? 1 : 0)
                                                            var_30 = xmm2_5
                                                            var_28 = xmm0_28
                                                            bool p_4 =
                                                                unimplemented  {test ah, 0x44}
                                                            bool p_6
                                                            
                                                            if (p_4)
                                                                xmm4_2 f- 0
                                                                eax_34:1.b = (xmm4_2 == 0f ? 1 : 0) << 6
                                                                    | (is_unordered.d(xmm4_2, 0f) ? 1 : 0)
                                                                    << 2 | (xmm4_2 < 0f ? 1 : 0)
                                                                p_6 = unimplemented  {test ah, 0x44}
                                                            
                                                            float xmm0_34
                                                            
                                                            if (not(p_4) || not(p_6))
                                                                xmm0_34 =
                                                                    xmm0_28 * xmm0_28 * 4.90332508f
                                                            else
                                                                float xmm0_31 = ___libm_sse2_expf((
                                                                    xmm0_28 * xmm1_6 * xmm4_2)
                                                                    ^ (data_79aad0).d)
                                                                float xmm4_3 = *(esi_6 + 0xd4)
                                                                float xmm3_7 = var_30
                                                                xmm7_2 = var_3c_1
                                                                xmm0_34 = (var_28 f- xmm4_3 * xmm3_7
                                                                    * (1f - xmm0_31)) * xmm3_7
                                                                    * 9.80665016f * xmm4_3
                                                            
                                                            var_28 = xmm0_34
                                                    
                                                    struct _EXCEPTION_REGISTRATION_RECORD** 
                                                        eax_36 = int.d(xmm7_2)
                                                    int128_t* eax_37 = sub_4d22b0(arg1, eax_36)
                                                    void var_1a0
                                                    sub_5269a0(&var_1a0)
                                                    int32_t var_14_1 = 0
                                                    sub_527800(&var_1a0, sub_5277e0(eax_37))
                                                    sub_5275c0(&var_1a0)
                                                    sub_5270f0(&var_1a0, eax_37)
                                                    void* ecx_41 = *(arg1 + 0x10)
                                                    float var_64 = 0f
                                                    int32_t var_60_1 = 0
                                                    int32_t var_5c_1 = 0
                                                    int32_t eax_39 = *(ecx_41 + 0x88)
                                                    float var_60_2
                                                    int32_t var_5c_2
                                                    
                                                    if (eax_39 == 1)
                                                        var_64 = xmm0_2
                                                        var_5c_2 = 0
                                                        var_60_2 = xmm0_3
                                                    else if (eax_39 == 2)
                                                        var_64 = xmm0_4
                                                        var_5c_2 = 0
                                                        var_60_2 = xmm0_5
                                                    void* esi_8 = arg1 + 0x110
                                                    sub_527ab0(esi_8, 
                                                        *(ecx_41 + 0x124) * (i - eax_24 + 1))
                                                    
                                                    if (var_58_1 s> 0)
                                                        struct _EXCEPTION_REGISTRATION_RECORD** j
                                                        
                                                        do
                                                            float var_278_2 = *(arg1 + 0x10)
                                                            float var_9c = 0f
                                                            float var_98_1 = 0f
                                                            sub_4d2ce0(var_3c_1, var_278_2, esi_8, 
                                                                &var_9c)
                                                            float var_94 = 0f
                                                            float var_90_1 = 0f
                                                            int32_t var_8c_1 = 0
                                                            float* ecx_43 = sub_4d3280(
                                                                *(arg1 + 0x10), esi_8, &var_94)
                                                            float var_88
                                                            int32_t* var_270_25 = &var_88
                                                            float var_27c_1 = *(arg1 + 0x10)
                                                            var_88 = 0f
                                                            float var_84_1 = 0f
                                                            float var_80_1 = 0f
                                                            sub_4d2fa0(var_3c_1, var_27c_1, esi_8, 
                                                                ecx_43)
                                                            float var_7c = 0f
                                                            float var_78_1 = 0f
                                                            float var_74_1 = 0f
                                                            float eax_42
                                                            int32_t ecx_45
                                                            eax_42, ecx_45 = sub_4d3630(arg1, 
                                                                *(arg1 + 0x10), &var_4c, &var_94, 
                                                                esi_8, &var_7c)
                                                            float xmm3_10 = var_7c
                                                            float xmm0_45 = sub_484cc0(
                                                                var_78_1 * var_78_1 + xmm3_10 * xmm3_10
                                                                + var_74_1 * var_74_1)
                                                            xmm0_45 f- 0
                                                            eax_42:1.b =
                                                                (xmm0_45 == 0f ? 1 : 0) << 6
                                                                | (is_unordered.d(xmm0_45, 0f) ? 1 : 0)
                                                                << 2 | (xmm0_45 < 0f ? 1 : 0)
                                                            bool p_8 =
                                                                unimplemented  {test ah, 0x44}
                                                            float xmm0_50
                                                            
                                                            if (not(p_8) || eax_14 == 0)
                                                                xmm0_50 = var_80_1
                                                            else
                                                                xmm0_50 = sub_4a7880(var_78_1, xmm3_10)
                                                                    * 57.2957764f + 90f + var_80_1
                                                            
                                                            void* eax_43 = *(arg1 + 0x10)
                                                            int32_t* esi_9 = *(esi_8 + 8)
                                                            var_30 = xmm0_50
                                                            float xmm1_16 = *(eax_43 + 0xc0)
                                                            int32_t xmm0_51
                                                            
                                                            if (esi_9 != 0)
                                                                *esi_9 += 1
                                                                
                                                                if (*esi_9 s>= 0x209)
                                                                    ecx_45 = sub_4a7690(esi_9)
                                                                    *esi_9 = 0
                                                                
                                                                int32_t eax_45 = esi_9[*esi_9 + 1]
                                                                xmm0_51 = _mm_cvtpd_ps((
                                                                    _mm_cvtepi32_pd(zx.q(eax_45)) f+ *
                                                                    ((eax_45 u>> 0x1f << 3) + &data_79aa70))
                                                                    * 2.3283064370807974e-10)
                                                            else
                                                                xmm0_51 = (zx.o(0)).d
                                                            
                                                            float var_dc = 0f
                                                            int32_t var_278_6 = ecx_45
                                                            float var_d8_1 = 0f
                                                            int32_t var_d4_1 = 0
                                                            sub_4d4310(arg1, 
                                                                1f - (xmm0_51 f- 0.5f) * xmm1_16
                                                                    * 0.00999999978f, 
                                                                *(arg1 + 0x10), &var_94, &var_64, 
                                                                &var_7c, var_3c_1, arg1 + 0x110, 
                                                                &var_dc)
                                                            int32_t ecx_48 = var_50_1
                                                            void* esi_10
                                                            
                                                            if (
                                                                    (*(arg1 + 0x1c) - *(arg1 + 0x18)) s>> 2
                                                                    s> ecx_48)
                                                                esi_10 =
                                                                    *(*(arg1 + 0x18) + (ecx_48 << 2))
                                                            else
                                                                struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatSpriteView::VTable
                                                                    ** eax_51 = sub_6e810c(0x40)
                                                                struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatSpriteView::VTable
                                                                    ** var_e0_1 = eax_51
                                                                var_14_1.b = 1
                                                                struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatSpriteView::VTable
                                                                    ** eax_52 =
                                                                    sub_4d7e20(eax_51, *(arg1 + 0x14))
                                                                var_14_1.b = 0
                                                                bool cond:3_1 = *(arg1 + 0x134) == 0
                                                                var_28 = eax_52
                                                                
                                                                if (not(cond:3_1))
                                                                    sub_4d8c20(eax_52)
                                                                
                                                                sub_428f00(arg1 + 0x18, &var_28)
                                                                esi_10 = var_28
                                                                sub_4d80b0(esi_10, *(arg1 + 0xc), 
                                                                    var_40, var_6c_1, var_68_1)
                                                                ecx_48 = var_50_1
                                                            
                                                            var_50_1 = ecx_48 + 1
                                                            sub_4d89f0(esi_10, 1)
                                                            void var_260
                                                            int128_t* eax_54
                                                            int32_t ecx_56
                                                            eax_54, ecx_56 =
                                                                sub_526a90(&var_260, &var_1a0)
                                                            var_14_1.b = 2
                                                            int32_t var_2d0_1 = ecx_56
                                                            int128_t* eax_55 = sub_5272c0(eax_54, 
                                                                (var_94 + var_dc) * xmm0_1, 
                                                                (var_90_1 + var_d8_1) * xmm0_1, var_9c, 
                                                                var_98_1, 0, 0, 0, 0, var_88, var_84_1, 
                                                                var_30, var_a8, var_a4, 1, 0, 0, 0, 0, 
                                                                0, 0xff, 0xff, 0xff, eax_15, 1, 0, 
                                                                var_54_1, 1, nullptr)
                                                            sub_4d86f0(esi_10, eax_36, eax_55)
                                                            var_14_1.b = 0
                                                            ___dyn_tls_init@12(&var_260)
                                                            j = var_58_1
                                                            var_58_1 -= 1
                                                            esi_8 = arg1 + 0x110
                                                        while (j != 1)
                                                    
                                                    int32_t var_14_2 = 0xffffffff
                                                    result = ___dyn_tls_init@12(&var_1a0)
                                                
                                                i = i_1
                                    
                                    result_2 -= 1
                                    i += 1
                                    var_24_1 += 1
                                    i_1 = i
                                    
                                    if (i s> arg2)
                                        break
                    else if (result != 0)
                        goto label_4d24a2
    else
        int128_t* var_270_1 = arg3
        result = sub_4d1f90(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
