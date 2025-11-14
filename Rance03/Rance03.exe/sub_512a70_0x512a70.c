// 函数: sub_512a70
// 地址: 0x512a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = *(arg1 + 0x3c) == 0
struct partsengine::COriginPosMode::VTable* const var_a8 = arg2
int32_t result

if (not(cond:0))
    float var_b8
    sub_512860(arg6, arg7, &var_b8, arg1 + 0x28)
    arg9 - 1f
    int32_t* eax_1
    eax_1:1.b =
        (arg9 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg9, 1f) ? 1 : 0) << 2 | (arg9 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    struct partsengine::COriginPosMode::VTable* const var_c4
    float var_b4
    struct partsengine::CRect::VTable* const var_9c
    
    if (not(p_2))
        arg10 - 1f
        eax_1:1.b = (arg10 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg10, 1f) ? 1 : 0) << 2
            | (arg10 < 1f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (not(p_4))
            int32_t ecx = int.d(fconvert.t(arg11))
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(ecx))
            xmm0_2 - arg11
            eax_1:1.b = (xmm0_2 == arg11 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_2, arg11) ? 1 : 0) << 2 | (xmm0_2 < arg11 ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (not(p_6) && sub_4a1f10(ecx) == 0)
                int32_t ecx_1 = int.d(fconvert.t(arg12))
                _mm_cvtepi32_ps(zx.o(ecx_1)) - arg12
                bool p_8 = unimplemented  {test ah, 0x44}
                
                if (not(p_8) && sub_4a1f10(ecx_1) == 0)
                    int32_t ecx_2 = int.d(fconvert.t(arg13))
                    _mm_cvtepi32_ps(zx.o(ecx_2)) - arg13
                    bool p_10 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_10) && sub_4a1f10(ecx_2) == 0)
                        int32_t edi_1 = int.d(fconvert.t(var_b8))
                        var_a8 = &partsengine::COriginPosMode::`vftable'
                        int32_t var_a4 = arg8
                        var_c4 = &partsengine::COriginPosMode::`vftable'
                        int32_t var_c0 = arg8
                        var_9c = &partsengine::CRect::`vftable'
                        int32_t esi = int.d(fconvert.t(var_b4))
                        int32_t var_98 = sub_50feb0(&var_c4, edi_1) + int.d(arg2)
                        int32_t var_90 = edi_1
                        int32_t var_8c = esi
                        int32_t var_94 = sub_50ff00(&var_a8, esi) + int.d(fconvert.t(arg5))
                        return sub_512730(&var_9c, arg3, arg4)
    
    result = int.d(fconvert.t(var_b8))
    
    if (result s> 0)
        int32_t edi_2 = int.d(fconvert.t(var_b4))
        
        if (edi_2 s> 0)
            var_c4 = &partsengine::COriginPosMode::`vftable'
            int32_t var_c0_1 = arg8
            int32_t eax_11 = sub_50feb0(&var_c4, result)
            var_c4 = &partsengine::COriginPosMode::`vftable'
            int32_t var_c0_2 = arg8
            float xmm0_8 = _mm_cvtepi32_ps(zx.o(eax_11))
            float xmm0_10 = _mm_cvtepi32_ps(zx.o(sub_50ff00(&var_c4, edi_2)))
            void var_48
            sub_48d630(&var_48, arg9, arg10)
            int32_t ecx_11 = int.d(arg12)
            float xmm0_12 = _mm_cvtepi32_ps(zx.o(ecx_11))
            xmm0_12 - arg12
            int32_t* eax_13
            eax_13:1.b = (xmm0_12 == arg12 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_12, arg12) ? 1 : 0) << 2 | (xmm0_12 < arg12 ? 1 : 0)
            bool p_12 = unimplemented  {test ah, 0x44}
            char eax_14
            
            if (not(p_12))
                eax_14 = sub_4a1f10(ecx_11)
            
            float var_88
            
            if (p_12 || eax_14 != 0)
                int32_t* ecx_12 = &var_88
                EnumC13Lines::EnumC13Lines(ecx_12)
                sub_47b7f0(ecx_12, arg12 ^ 0x80000000)
                sub_47b440(&var_48, &var_88)
            
            int32_t ecx_14 = int.d(arg11)
            _mm_cvtepi32_ps(zx.o(ecx_14)) - arg11
            bool p_14 = unimplemented  {test ah, 0x44}
            char eax_15
            
            if (not(p_14))
                eax_15 = sub_4a1f10(ecx_14)
            
            if (p_14 || eax_15 != 0)
                int32_t* ecx_15 = &var_88
                EnumC13Lines::EnumC13Lines(ecx_15)
                sub_47b8b0(ecx_15, arg11 ^ 0x80000000)
                sub_47b440(&var_48, &var_88)
            
            int32_t ecx_17 = int.d(arg13)
            _mm_cvtepi32_ps(zx.o(ecx_17)) - arg13
            bool p_16 = unimplemented  {test ah, 0x44}
            char eax_16
            
            if (not(p_16))
                eax_16 = sub_4a1f10(ecx_17)
            
            if (p_16 || eax_16 != 0)
                int32_t* ecx_18 = &var_88
                EnumC13Lines::EnumC13Lines(ecx_18)
                sub_47b960(ecx_18, arg13 ^ (data_7094c0).d)
                sub_47b440(&var_48, &var_88)
            
            sub_51e0c0(&var_48, arg14, &var_88, xmm0_8, xmm0_10, &var_48)
            float xmm0_18 = xmm0_8 + var_b8
            var_c4 = xmm0_18
            float var_78
            sub_51e0c0(&var_48, arg14, &var_78, xmm0_18, xmm0_10, &var_48)
            float xmm0_20 = xmm0_10 + var_b4
            float var_68
            sub_51e0c0(&var_48, arg14, &var_68, xmm0_8, xmm0_20, &var_48)
            float var_58
            sub_51e0c0(&var_48, arg14, &var_58, var_c4, xmm0_20, &var_48)
            float xmm6 = var_78
            float xmm4_1 = var_68
            float xmm1_7 = var_58
            var_c4 = var_88 f+ var_a8
            struct partsengine::COriginPosMode::VTable* const xmm0_23 = var_a8
            int32_t var_94_1 = 0
            float var_64
            float var_a4_1 = var_64 + arg5
            int32_t var_a0 = 0
            var_b8 = xmm6 f+ xmm0_23
            var_a8 = xmm4_1 f+ xmm0_23
            float var_54
            float var_98_1 = var_54 + arg5
            struct partsengine::COriginPosMode::VTable* const xmm0_26 = var_c4
            var_9c = xmm1_7 f+ xmm0_23
            float var_74
            float var_b4_1 = var_74 + arg5
            int32_t var_b0 = 0
            var_c4 = xmm0_26
            float var_84
            float var_c0_3 = var_84 + arg5
            int32_t var_bc = 0
            char eax_21
            int32_t ecx_24
            eax_21, ecx_24 = sub_512ed0(arg3, arg4, &var_c4, &var_b8, &var_a8)
            
            if (eax_21 != 0)
                return 1
            
            int32_t var_d4_14 = ecx_24
            return sub_512ed0(arg3, arg4, &var_a8, &var_b8, &var_9c) != 0

result.b = 0
return result
