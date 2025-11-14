// 函数: sub_4e4180
// 地址: 0x4e4180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c0496
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[5] != 0)
    sub_4e4130(arg7) == 0 && sub_4e4130(arg8) == 0 && sub_4e4130(arg9) != 0
    arg5 - 1f
    bool p_2 = unimplemented  {test ah, 0x44}
    bool p_4
    
    if (not(p_2))
        arg6 - 1f
        p_4 = unimplemented  {test ah, 0x44}
    
    struct partsengine::COriginPosMode::VTable* const var_d8
    struct partsengine::COriginPosMode::VTable* const var_d0
    float var_c8
    
    if (p_2 || p_4 || ((arg6 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg6, 1f) ? 1 : 0) << 2
            | (arg6 < 1f ? 1 : 0)) != 0)
        float eax_18 = (*(*arg1 + 0x54))(eax_2)
        void* edx_1 = *arg1
        var_c8 = eax_18
        eax_3 = (*(edx_1 + 0x58))()
        var_d0 = eax_3
        
        if (eax_18 s> 0 && eax_3 s> 0)
            int32_t xmm1_7 = _mm_cvtepi32_ps(zx.o(eax_18))
            int32_t var_b8 = 0
            int32_t var_b4_1 = 0
            int32_t var_a4_1 = 0
            int32_t var_c0 = 0
            int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_3))
            int32_t var_a8 = xmm1_7
            int32_t var_bc_1 = xmm2_2
            int32_t var_a0 = xmm1_7
            int32_t var_9c_1 = xmm2_2
            void var_58
            sub_48d630(&var_58, arg5, arg6)
            arg8 f- 0
            int32_t* eax_19
            eax_19:1.b = (arg8 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg8, 0f) ? 1 : 0) << 2
                | (arg8 < 0f ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            void var_98
            
            if (p_6)
                void* ecx_9 = &var_98
                EnumC13Lines::EnumC13Lines(ecx_9)
                sub_47b7f0(ecx_9, 0x80000000 ^ arg8)
                sub_47b440(&var_58, &var_98)
            
            arg7 f- 0
            eax_19:1.b = (arg7 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg7, 0f) ? 1 : 0) << 2
                | (arg7 < 0f ? 1 : 0)
            bool p_8 = unimplemented  {test ah, 0x44}
            
            if (p_8)
                void* ecx_11 = &var_98
                EnumC13Lines::EnumC13Lines(ecx_11)
                sub_47b8b0(ecx_11, 0x80000000 ^ arg7)
                sub_47b440(&var_58, &var_98)
            
            arg9 f- 0
            eax_19:1.b = (arg9 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg9, 0f) ? 1 : 0) << 2
                | (arg9 < 0f ? 1 : 0)
            bool p_10 = unimplemented  {test ah, 0x44}
            
            if (p_10)
                void* ecx_13 = &var_98
                EnumC13Lines::EnumC13Lines(ecx_13)
                sub_47b960(ecx_13, arg9 ^ (data_7094c0).d)
                sub_47b440(&var_58, &var_98)
            
            float var_e8_6 = var_c8
            var_d8 = &partsengine::COriginPosMode::`vftable'
            int32_t var_d4_2 = arg4
            int32_t eax_20 = sub_50feb0(&var_d8, var_e8_6)
            int32_t var_d4_3 = arg4
            struct partsengine::COriginPosMode::VTable* const esi_3 = var_d0
            float xmm1_13 = _mm_cvtepi32_ps(zx.o(eax_20))
            var_d8 = &partsengine::COriginPosMode::`vftable'
            uint128_t xmm0_12 = zx.o(sub_50ff00(&var_d8, esi_3))
            float eax_22 = var_c8
            float var_b0 = xmm1_13
            var_d0 = xmm1_13
            float xmm0_13 = _mm_cvtepi32_ps(xmm0_12)
            float var_ac_1 = xmm0_13
            float xmm2_6 = _mm_cvtepi32_ps(zx.o(eax_22)) + xmm1_13
            float var_c4_1 = xmm0_13
            float xmm1_15 = _mm_cvtepi32_ps(zx.o(esi_3))
            var_c8 = xmm2_6
            float xmm1_16 = xmm1_15 + xmm0_13
            var_d8 = xmm2_6
            float var_cc_2 = xmm1_16
            float var_d4_4 = xmm1_16
            eax_3 = sub_506850(&arg1[4], arg2, arg3, &var_58, &var_b0, &var_c8, &var_d0, &var_d8, 
                &var_b8, &var_a8, &var_c0, &var_a0, arg10)
    else
        void* eax_5 = arg1[5]
        
        if (eax_5 != 0)
            *(eax_5 + 0x30) = 0
        
        var_d8 = &partsengine::COriginPosMode::`vftable'
        int32_t var_d4_1 = arg4
        int32_t var_c_1 = 0
        var_d0 = &partsengine::COriginPosMode::`vftable'
        int32_t var_cc_1 = arg4
        var_c_1.b = 1
        uint128_t xmm0_4 = zx.o(sub_50feb0(&var_d0, (*(*arg1 + 0x54))(eax_2)))
        void* eax_11 = *arg1
        float xmm0_5 = _mm_cvtepi32_ps(xmm0_4)
        int32_t eax_12 = *(eax_11 + 0x58)
        var_c8 = xmm0_5 + arg2
        uint128_t xmm1_3 = zx.o(sub_50ff00(&var_d8, eax_12()))
        eax_3 = arg1[5]
        float xmm1_5 = _mm_cvtepi32_ps(xmm1_3) + arg3
        
        if (eax_3 != 0)
            eax_3[3] = var_c8
            void* eax_15 = arg1[5]
            *(eax_15 + 0x10) = xmm1_5
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_15

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
