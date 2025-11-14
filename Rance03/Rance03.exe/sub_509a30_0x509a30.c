// 函数: sub_509a30
// 地址: 0x509a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg1
void* result_1 = result
void** i = *(result + 8)

if (i != *(result + 0xc))
    float xmm2_1 = arg9
    float xmm3_1 = arg7
    float xmm4_1 = arg8
    
    do
        void* eax = *i
        
        if (eax != 0)
            result = *(eax + 4)
            
            if (result == 0)
                break
            
            int32_t ecx = *(result_1 + 0x4c)
            int32_t edx_1 = *(result_1 + 0x50)
            int32_t edi_2 = *(result_1 + 0x54)
            *(result + 0xc8) = *(result_1 + 0x48)
            *(result + 0xd4) = edi_2
            *(result + 0xcc) = ecx
            *(result + 0xd0) = edx_1
            void* edi_4 = *(eax + 4)
            int32_t edx_2
            
            if (edi_4 != 0)
                edx_2 = *(edi_4 + 0x1c)
            else
                edx_2 = 0
            
            int32_t ecx_3
            
            if (edi_4 != 0)
                ecx_3 = *(edi_4 + 0x18)
            else
                ecx_3 = 0
            
            struct partsengine::CRect::VTable* var_cc
            sub_4fbef0(&var_cc, ecx_3, edx_2, result_1 + 0x44)
            arg5 - 1f
            struct partsengine::CRect::VTable** eax_5
            eax_5:1.b = (arg5 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg5, 1f) ? 1 : 0) << 2
                | (arg5 < 1f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            int32_t var_c0
            int32_t var_bc
            
            if (p_2)
            label_509bd5:
                
                if (var_c0 s> 0 && var_bc s> 0)
                    int32_t var_c8
                    float xmm0_8 = _mm_cvtepi32_ps(zx.o(var_c8))
                    float xmm1_5 = _mm_cvtepi32_ps(zx.o(var_c0))
                    int32_t var_c4
                    float xmm2_3 = _mm_cvtepi32_ps(zx.o(var_c4))
                    float xmm3_3 = _mm_cvtepi32_ps(zx.o(var_bc))
                    float xmm1_6 = xmm1_5 + xmm0_8
                    float var_90 = xmm0_8
                    float var_a0 = xmm0_8
                    float xmm0_10 = xmm3_3 + xmm2_3
                    float var_8c_1 = xmm2_3
                    float var_b4_1 = xmm2_3
                    float var_b8 = xmm1_6
                    float var_a8 = xmm1_6
                    float var_9c_1 = xmm0_10
                    float var_a4_1 = xmm0_10
                    void var_48
                    sub_48d630(&var_48, arg5, arg6)
                    arg8 f- 0
                    int32_t* eax_16
                    eax_16:1.b = (arg8 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg8, 0f) ? 1 : 0) << 2
                        | (arg8 < 0f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    void var_88
                    int16_t top
                    
                    if (p_6)
                        void* ecx_7 = &var_88
                        EnumC13Lines::EnumC13Lines(ecx_7)
                        sub_47b7f0(ecx_7, arg8 ^ (data_7094c0).d)
                        top += 2
                        sub_47b440(&var_48, &var_88)
                    
                    arg7 f- 0
                    eax_16:1.b = (arg7 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg7, 0f) ? 1 : 0) << 2
                        | (arg7 < 0f ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (p_8)
                        void* ecx_9 = &var_88
                        EnumC13Lines::EnumC13Lines(ecx_9)
                        sub_47b8b0(ecx_9, arg7 ^ (data_7094c0).d)
                        top += 2
                        sub_47b440(&var_48, &var_88)
                    
                    arg9 f- 0
                    eax_16:1.b = (arg9 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg9, 0f) ? 1 : 0) << 2
                        | (arg9 < 0f ? 1 : 0)
                    bool p_10 = unimplemented  {test ah, 0x44}
                    
                    if (p_10)
                        void* ecx_11 = &var_88
                        EnumC13Lines::EnumC13Lines(ecx_11)
                        sub_47b960(ecx_11, arg9 ^ (data_7094c0).d)
                        top += 2
                        sub_47b440(&var_48, &var_88)
                    
                    struct partsengine::COriginPosMode::VTable* const var_e4 =
                        &partsengine::COriginPosMode::`vftable'
                    int32_t var_e0_1 = arg4
                    int32_t eax_18 = sub_50feb0(&var_e4, var_c0)
                    var_e4 = &partsengine::COriginPosMode::`vftable'
                    struct partsengine::COriginPosMode::VTable* const var_ec =
                        &partsengine::COriginPosMode::`vftable'
                    float xmm0_14 = _mm_cvtepi32_ps(zx.o(eax_18))
                    int32_t var_e8_1 = arg4
                    int32_t eax_20 = sub_50ff00(&var_ec, var_bc)
                    var_ec = &partsengine::COriginPosMode::`vftable'
                    float xmm2_6 = xmm1_5 + xmm0_14
                    float var_b0 = xmm0_14
                    float var_98 = xmm2_6
                    float var_f4 = xmm2_6
                    float xmm1_15 = _mm_cvtepi32_ps(zx.o(eax_20))
                    float var_ac_1 = xmm1_15
                    float var_94_1 = xmm1_15
                    float var_f0_1 = xmm3_3 + xmm1_15
                    sub_506850(eax, arg2, arg3, &var_48, &var_b0, &var_98, &var_f4, &var_f4, 
                        &var_90, &var_b8, &var_a0, &var_a8, arg10)
                    xmm2_1 = arg9
                    xmm3_1 = arg7
                    xmm4_1 = arg8
            else
                arg6 - 1f
                eax_5:1.b = (arg6 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg6, 1f) ? 1 : 0) << 2
                    | (arg6 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    goto label_509bd5
                
                if (sub_5099e0(xmm3_1) != 0)
                    goto label_509bd5
                
                if (sub_5099e0(xmm4_1) != 0)
                    goto label_509bd5
                
                if (sub_5099e0(xmm2_1) != 0)
                    goto label_509bd5
                
                if (edi_4 != 0)
                    *(edi_4 + 0x30) = 0
                
                int32_t var_d8_1 = arg4
                int32_t var_d0_1 = arg4
                int32_t eax_10 = *(eax + 4)
                struct partsengine::COriginPosMode::VTable* const var_dc =
                    &partsengine::COriginPosMode::`vftable'
                struct partsengine::COriginPosMode::VTable* const var_d4 =
                    &partsengine::COriginPosMode::`vftable'
                
                if (eax_10 != 0)
                    *(*(eax + 4) + 0xc) = _mm_cvtepi32_ps(zx.o(sub_50feb0(&var_d4, var_c0))) + arg2
                    *(*(eax + 4) + 0x10) = _mm_cvtepi32_ps(zx.o(sub_50ff00(&var_dc, var_bc))) + arg3
                
                var_d4 = &partsengine::COriginPosMode::`vftable'
                var_dc = &partsengine::COriginPosMode::`vftable'
        
        result = result_1
        i = &i[1]
    while (i != *(result + 0xc))

return result
