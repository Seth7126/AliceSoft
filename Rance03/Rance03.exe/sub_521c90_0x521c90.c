// 函数: sub_521c90
// 地址: 0x521c90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0xdc)

if (ecx != 0 && *(arg1 + 8) != 0)
    if (*(arg1 + 0x60) == 1)
        if (*(arg1 + 0xcc) != 1)
            goto label_521cef
        
        goto label_521cc1
    
    int32_t var_30_1
    int32_t __saved_edi_1
    
    if (*(arg1 + 0xd4) != 0 || *(arg1 + 0xcc) != 1)
    label_521cef:
        int32_t __saved_esi_2 = 1
        void* eax_4
        eax_4.b = *(*(arg1 + 4) + 0xc1)
        __saved_edi_1 = eax_4.b.d
        var_30_1 = 0
    else
    label_521cc1:
        int32_t __saved_esi_1 = 1
        void* eax_1
        eax_1.b = *(*(arg1 + 4) + 0xc1)
        __saved_edi_1 = eax_1.b.d
        var_30_1 = 1
    
    if ((*(**(ecx + 8) + 0x2c))(0, var_30_1, __saved_edi_1, 1) != 0)
        int32_t eax_5 = *(arg1 + 0xd0)
        int32_t var_20_1
        __builtin_memset(&var_20_1, 0, 0x19)
        
        if (eax_5 == 0xffffffff)
            goto label_521e39
        
        int32_t* arg_8
        int32_t* esi_1 = arg_8
        int32_t var_4 = eax_5
        sub_42f3d0(&esi_1[1], &arg_8, &var_4)
        int32_t* eax_6 = arg_8
        
        if (eax_6 == esi_1[1])
            goto label_521e39
        
        void* edi_1 = eax_6[5]
        
        if (edi_1 == 0)
            goto label_521e39
        
        void* eax_7 = *(edi_1 + 0xdc)
        int32_t* ecx_3 = *(eax_7 + 8)
        eax_7.b = *(eax_7 + 0xc)
        arg_8.b = eax_7.b
        
        if ((*(*ecx_3 + 0x2c))(1, 0, arg_8, 1) != 0)
            char var_8_3 = 1
            int32_t eax_12 = (*(**(edi_1 + 8) + 0x10))()
            int32_t eax_13 = (*(**(edi_1 + 8) + 0x14))()
            float xmm0_3 = _mm_cvtepi32_ps(zx.o(arg3.d)) f+ *(edi_1 + 0xc)
            float xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_12))
            float var_c_1 = xmm0_3
            float xmm1_3 = _mm_cvtepi32_ps(zx.o(arg4)) f+ *(edi_1 + 0x10)
            void* eax_14 = *(edi_1 + 0xdc)
            float var_10_1 = xmm1_3
            float var_14_1 = xmm2_2 + xmm0_3
            float var_18_1 = _mm_cvtepi32_ps(zx.o(eax_13)) + xmm1_3
            uint128_t xmm0_7 = zx.o((*(**(eax_14 + 8) + 0x1c))())
            void* eax_17 = *(edi_1 + 0xdc)
            int32_t var_1c_1 = _mm_cvtepi32_ps(xmm0_7)
            var_20_1 = _mm_cvtepi32_ps(zx.o((*(**(eax_17 + 8) + 0x20))()))
        label_521e39:
            arg3 = *(arg1 + 0x60) == 1
            arg_8.b = (*(**(arg1 + 8) + 0x28))()
            char eax_31 = (*(*arg2 + 0xb4))(1, arg3.d, *(arg1 + 0x24), arg_8, 
                ((*(arg1 + 0x20) << 8 | zx.d(*(arg1 + 0x28))) << 8 | zx.d(*(arg1 + 0x2c))) << 8
                    | zx.d(*(arg1 + 0x30)), 
                ((*(arg1 + 0x44) << 8 | zx.d(*(arg1 + 0x38))) << 8 | zx.d(*(arg1 + 0x3c))) << 8
                | zx.d(*(arg1 + 0x40)), zx.d(*(arg1 + 0x5d)), var_8_3.d, var_c_1, var_10_1, 
                var_14_1, var_18_1, var_1c_1, var_20_1, arg5, arg6)
            
            if (eax_31 != 0)
                return 1
            
            sub_64b530(0x6e3284)

return 0
