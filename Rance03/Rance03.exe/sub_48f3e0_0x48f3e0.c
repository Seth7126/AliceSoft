// 函数: sub_48f3e0
// 地址: 0x48f3e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[3] != 0)
    void* ebp_1 = arg2
    
    if (ebp_1 != 0)
        void* esi_1 = *(ebp_1 + 4)
        void* eax_1
        
        if (esi_1 != 0)
            eax_1 = *(esi_1 + 0x18)
        else
            eax_1 = nullptr
        
        arg2 = eax_1
        struct partsengine::COriginPosMode::VTable* eax_2
        
        if (esi_1 != 0)
            eax_2 = *(esi_1 + 0x1c)
        else
            eax_2 = nullptr
        
        struct partsengine::COriginPosMode::VTable* var_64 = eax_2
        struct partsengine::CRect::VTable* const var_18 = &partsengine::CRect::`vftable'
        int32_t var_58 = 0
        int32_t var_14_1 = *(arg5 + 0x48)
        int32_t var_10_1 = *(arg5 + 0x4c)
        int32_t var_c_1 = *(arg5 + 0x50)
        int32_t var_8_1 = *(arg5 + 0x54)
        char eax_7 = *(arg5 + 0x5c)
        char eax_8 = *(arg5 + 0x5d)
        int32_t var_54_1 = 0
        struct partsengine::COriginPosMode::VTable* var_50 = nullptr
        int32_t var_4c_1 = 0
        sub_48f6d0(&var_58, &var_50, &arg2, &var_64, &var_18, eax_8, eax_7)
        
        if (esi_1 != 0)
            *(esi_1 + 0x20) = *(arg5 + 0x80)
        
        int32_t var_78_3 = sub_506500(ebp_1, *(arg5 + 0x60), *(arg5 + 0x64), *(arg5 + 0x68))
        sub_506570(ebp_1, *(arg5 + 0x6c), *(arg5 + 0x70), *(arg5 + 0x74))
        void* ecx_3 = *(ebp_1 + 4)
        
        if (ecx_3 != 0)
            *(ecx_3 + 0x24) = *(arg5 + 0x78)
        
        void* ecx_4 = *(ebp_1 + 4)
        
        if (ecx_4 != 0)
            int32_t eax_10
            eax_10.b = arg3
            *(ecx_4 + 0x2c) = eax_10.b
        
        void* ecx_5 = *(ebp_1 + 4)
        
        if (ecx_5 != 0)
            *(ecx_5 + 0x28) = arg4
        
        void* ecx_6 = *(ebp_1 + 4)
        
        if (ecx_6 != 0)
            *(ecx_6 + 0xbc) = *(arg5 + 0x7c)
        
        void* var_78_4 = arg2
        int32_t esi_2 = *(arg5 + 0x58)
        struct partsengine::COriginPosMode::VTable* const var_48 =
            &partsengine::COriginPosMode::`vftable'
        int32_t var_44_1 = esi_2
        int32_t eax_13 = sub_50feb0(&var_48, var_78_4)
        int32_t var_44_2 = esi_2
        struct partsengine::COriginPosMode::VTable* esi_3 = var_64
        float xmm0_2[0x4] = _mm_cvtepi32_ps(zx.o(eax_13))
        var_48 = &partsengine::COriginPosMode::`vftable'
        int32_t eax_14 = sub_50ff00(&var_48, esi_3)
        uint128_t xmm2_1 = zx.o(arg2)
        float xmm6_1 = xmm0_2[0]
        uint128_t xmm1_1 = zx.o(eax_14)
        eax_14.b = *(arg5 + 0x5d)
        arg2 = xmm0_2
        float xmm1_2 = _mm_cvtepi32_ps(xmm1_1)
        float xmm7_1 = xmm1_2
        float xmm2_3[0x4] = _mm_cvtepi32_ps(xmm2_1) f+ xmm0_2
        float xmm4_1[0x4] = xmm2_3
        float xmm3_3 = _mm_cvtepi32_ps(zx.o(esi_3)) + xmm1_2
        float xmm5_1 = xmm3_3
        
        if (eax_14.b == 0)
        label_48f599:
            
            if (*(arg5 + 0x5c) != 0)
                xmm6_1 = xmm0_2[0]
                arg2 = xmm0_2
                float xmm0_4[0x4] = xmm2_3
                arg3.d = xmm5_1
                xmm7_1 = xmm3_3
                xmm2_3 = xmm4_1
                xmm3_3 = xmm1_2
                xmm5_1 = xmm1_2
                xmm1_2 = arg3.d
                xmm4_1 = xmm0_4
            else if (eax_14.b != 0)
                goto label_48f5cc
        else if (*(arg5 + 0x5c) != 0)
            if (eax_14.b == 0)
                goto label_48f599
            
        label_48f5cc:
            
            if (*(arg5 + 0x5c) != 0)
                arg3.d = xmm3_3
                xmm7_1 = xmm5_1
                xmm6_1 = xmm4_1[0]
                arg2 = xmm2_3
                xmm5_1 = xmm1_2
                xmm3_3 = xmm1_2
                xmm1_2 = arg3.d
                xmm4_1 = xmm0_2
                xmm2_3 = xmm0_2
        else
            xmm6_1 = xmm2_3[0]
            arg2 = xmm4_1
            xmm2_3 = xmm0_2
            xmm4_1 = xmm0_2
            xmm5_1 = xmm3_3
        
        void* var_30 = arg2
        void* var_78_6 = arg1[2]
        int32_t var_28 = xmm2_3
        int32_t xmm2_4 = var_58
        float var_24_1 = xmm1_2
        struct partsengine::COriginPosMode::VTable* xmm1_3 = var_50
        int32_t var_3c_1 = var_54_1
        int32_t var_60_1 = var_54_1
        int32_t var_40 = xmm2_4
        var_64 = xmm1_3
        var_58 = xmm2_4
        var_48 = xmm1_3
        float var_20 = xmm6_1
        float var_1c_1 = xmm7_1
        float var_2c_1 = xmm3_3
        int32_t var_38 = xmm4_1
        float var_34_1 = xmm5_1
        int32_t var_54_2 = var_4c_1
        int32_t var_44_3 = var_4c_1
        return sub_506850(ebp_1, (zx.o(0)).d, (zx.o(0)).d, arg5 + 8, &var_20, &var_28, &var_30, 
            &var_38, &var_40, &var_64, &var_58, &var_48, var_78_6)

return arg1
