// 函数: sub_4ee2b0
// 地址: 0x4ee2b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_6c = 0xffffffff
int32_t (* var_70)(void* arg1) =
    __ehhandler$?_Makewloc@_Locimp@locale@std@@CAXABV_Locinfo@3@HPAV123@PBV23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::CRect::VTable* const var_68
int32_t eax_2 = __security_cookie ^ &var_68
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x21c)

if (eax_3 == 0)
    goto label_4ee303

int32_t result = eax_3 - 1

if (eax_3 == 1)
    *(arg1 + 0x21c) = 2
label_4ee303:
    result.b = *(arg1 + 0x23d)
    int32_t ecx = arg2
    
    if (result.b != 0)
        ecx = arg3
    
    int32_t var_180_1 = ecx
    sub_4eeb50(arg1)
    float arg_c
    float edi_1 = arg_c
    
    if (*(arg1 + 0xac) != 0)
        *(arg1 + 0x48) = *(edi_1 i+ 0xa9)
    
    int32_t xmm0_1 = *(edi_1 i+ 0xb0)
    
    if (*(arg1 + 0xad) != 0)
        *(arg1 + 0x4c) = *(edi_1 i+ 0xac)
        *(arg1 + 0x50) = xmm0_1
    
    int32_t eax_5 = sub_4eff50(arg1, *(arg1 + 0x124))
    int32_t var_180_3 = *(arg1 + 0x128)
    *(arg1 + 0x54) = eax_5
    int32_t eax_6 = sub_4eff50(arg1, var_180_3)
    int32_t var_180_4 = *(arg1 + 0x12c)
    *(arg1 + 0x58) = eax_6
    *(arg1 + 0x5c) = sub_4f0000(arg1, var_180_4)
    void* eax_7 = sub_4f0100(arg1)
    int32_t* ecx_7 = *(arg1 + 0x74)
    *(arg1 + 0x60) = eax_7.b
    float var_18_1
    char var_6_1
    float arg_10
    
    if (ecx_7 == 0)
    label_4ee3c9:
        var_6_1 = 0
        
        if (arg_10 == 0)
            ecx_7.b = 0
        else
            eax_7.b = *(arg1 + 0x1b3)
            
            if (eax_7.b != 0)
                ecx_7.b = 0
            else
                eax_7.b = *(arg1 + 0x1b4)
                
                if (eax_7.b == 0)
                    ecx_7.b = 0
                else
                    ecx_7.b = 1
        
        arg_c:3.b = ecx_7.b
        
        if (arg4 == 0)
            eax_7.b = 0
        else
            eax_7.b = *(arg1 + 0x1b1)
            
            if (eax_7.b != 0)
                eax_7.b = 0
            else
                eax_7.b = *(arg1 + 0x1b2)
                
                if (eax_7.b == 0)
                    eax_7.b = 0
                else
                    eax_7.b = 1
        
        char var_5_1 = eax_7.b
        float esi_3
        
        if (ecx_7.b != 0 || eax_7.b != 0)
            float xmm0_3 = sub_4edd50(arg1)
            int32_t eax_9 = 0
            
            if (var_5_1 != 0)
                eax_9 = arg4
            
            float xmm0_4 = xmm0_3 + _mm_cvtepi32_ps(zx.o(eax_9))
            float xmm0_5 = sub_4edcf0(arg1)
            esi_3 = arg_10
            float eax_10 = 0f
            
            if (arg_c:3.b != 0)
                eax_10 = esi_3
            
            sub_4edc30(arg1, _mm_cvtepi32_ps(zx.o(eax_10)) + xmm0_5, xmm0_4)
            ecx_7.b = arg_c:3.b
        else
            esi_3 = arg_10
        
        float eax_11 = 0f
        
        if (ecx_7.b == 0)
            eax_11 = esi_3
        
        float ecx_9 = 0f
        
        if (*(arg1 + 0x1b4) != 0)
            ecx_9 = eax_11
        
        eax_11.b = *(arg1 + 0x1b2)
        int32_t esi_4 = 0
        var_18_1 = ecx_9
        
        if (var_5_1 == 0)
            esi_4 = arg4
        
        arg4 = esi_4
        
        if (eax_11.b == 0)
            arg4 = 0
            var_18_1 = ecx_9
    else
        eax_7, ecx_7 = (*(*ecx_7 + 8))(1)
        
        if (eax_7 != 8)
            goto label_4ee3c9
        
        eax_7, ecx_7 = sub_4ef5c0(arg1)
        
        if (*(eax_7 + 0x44) != 0)
            goto label_4ee3c9
        
        var_6_1 = 1
        var_18_1 = arg_10
    
    void var_16c
    int128_t* eax_12 = sub_526a90(&var_16c, edi_1)
    int32_t var_6c_1 = 0
    uint32_t eax_13 = 1
    
    if (*(arg1 + 0xac) != 0)
        eax_13 = zx.d(*(edi_1 i+ 0xa9))
    
    arg_10 = eax_13
    char eax_14 = sub_4f0100(arg1)
    
    if (*(arg1 + 0xaa) == 0 || *(arg1 + 0xab) == 0 || arg_10.b == 0)
        arg_10 = 0f
    else
        arg_10 = 1.40129846e-45f
        
        if (eax_14 == 0)
            arg_10 = 0f
    
    eax_14 = *(arg1 + 0xad)
    arg_c = *(edi_1 i+ 0xb0)
    
    if (eax_14 == 0)
        arg_c = 1f
    
    float xmm0_7 = *(arg1 + 0xb4)
    float xmm0_8 = sub_4f0000(arg1, *(arg1 + 0x12c))
    int32_t eax_15 = *(arg1 + 0xb0)
    int32_t eax_16 = *(arg1 + 0x138)
    float xmm1_7 = *(edi_1 i+ 0xac)
    int32_t eax_17 = *(arg1 + 0x134)
    int32_t var_8c_1 = *(arg1 + 0xd0)
    int32_t eax_18
    eax_18.b = *(arg1 + 0xad)
    float var_4c_1 = xmm1_7
    float var_44_1
    
    var_44_1 = eax_18.b == 0 ? 1f : xmm1_7
    
    int32_t ecx_18 = *(arg1 + 0xcc)
    float var_48_1
    
    var_48_1 = eax_18.b == 0 ? 1f : xmm1_7
    
    int32_t ecx_19 = *(arg1 + 0xc8)
    
    if (eax_18.b == 0)
        var_4c_1 = 1f
    
    int32_t esi_5 = *(arg1 + 0xc4)
    int32_t edi_2 = *(arg1 + 0xc0)
    int32_t ebx_1 = *(arg1 + 0xbc)
    float xmm0_10 = *(arg1 + 0xe4)
    int32_t var_98_1 = *(arg1 + 0xb8)
    int32_t eax_19
    eax_19.b = *(arg1 + 0xa8)
    char var_9c_1 = eax_19.b
    eax_19.b = *(arg1 + 0xa9)
    char var_a0_1 = eax_19.b
    int32_t eax_20 = *(arg1 + 0xa4)
    int32_t eax_21 = *(arg1 + 0xa0)
    float xmm0_11 = *(arg1 + 0xe0)
    int32_t eax_22 = *(arg1 + 0x9c)
    int32_t eax_23 = *(arg1 + 0xf4)
    float xmm0_12 = *(arg1 + 0xdc)
    int32_t eax_24 = *(arg1 + 0xf0)
    float xmm0_13 = *(arg1 + 0xd8)
    int32_t eax_25 = *(arg1 + 0xec)
    float xmm0_14 = *(arg1 + 0xd4)
    int32_t eax_26 = *(arg1 + 0xe8)
    float xmm0_16 = sub_4efd70(arg1) f+ *(arg1 + 0x24c)
    float xmm1_9 = *(arg1 + 0x254) + xmm0_16
    float xmm0_18 = sub_4efce0(arg1) f+ *(arg1 + 0x248)
    float xmm1_11 = *(arg1 + 0x250) + xmm0_18
    int32_t* eax_28
    int32_t ecx_24
    eax_28, ecx_24 = sub_4efe00(arg1)
    float xmm0_20 = _mm_cvtepi32_ps(zx.o(eax_15))
    char var_184_1 = arg_10.b
    int32_t eax_29 = int.d(xmm0_20 * xmm0_8 * xmm0_7 * arg_c)
    int32_t eax_30 = int.d(_mm_cvtepi32_ps(zx.o(ecx_18)) * var_44_1)
    int32_t eax_31 = int.d(_mm_cvtepi32_ps(zx.o(ecx_19)) * var_48_1)
    int32_t var_1e0_1 = ecx_24
    int128_t* eax_33 = sub_5272c0(eax_12, xmm1_11, xmm1_9, xmm0_14, xmm0_13, eax_26, eax_25, 
        eax_24, eax_23, xmm0_12, xmm0_11, xmm0_10, eax_22, eax_21, eax_20, var_a0_1, var_9c_1, 
        var_98_1, ebx_1, edi_2, int.d(_mm_cvtepi32_ps(zx.o(esi_5)) * var_4c_1), eax_31, eax_30, 
        var_8c_1, eax_17, eax_16, eax_29, var_184_1, eax_28)
    sub_526cb0(arg1 + 0x260, eax_33)
    int32_t var_6c_2 = 0xffffffff
    ___dyn_tls_init@12(&var_16c)
    
    if (*(arg1 + 0x25c) == 0)
        sub_527600(arg1 + 0x260)
    
    if (*(arg1 + 0x1b0) != 0)
        void* eax_34 = *(arg1 + 0x31c)
        arg_c = 0f
        arg_10 = 0f
        void* eax_35
        
        if (eax_34 != 0)
            eax_35 = *(eax_34 + 8)
        else
            eax_35 = data_7fcba0
        
        sub_528b80(arg1 + 0x268, &arg_c, &arg_10, (zx.o(0)).d, (zx.o(0)).d, arg1 + 0x268, eax_35)
        long double x87_r0
        long double x87_r1
        arg_10 = sub_63ce00(arg_10, x87_r0, x87_r1)
        long double x87_r2
        int32_t xmm0_40 = sub_63ce00(arg_c, x87_r1, x87_r2)
        *(arg1 + 0x260) = arg_10
        *(arg1 + 0x264) = xmm0_40
    
    int32_t var_60
    
    if (*(arg1 + 0xf8) != 0)
        void* eax_37 = *(arg1 + 0x31c)
        arg_c = 0f
        arg_10 = 0f
        void* eax_38
        
        if (eax_37 != 0)
            eax_38 = *(eax_37 + 8)
        else
            eax_38 = data_7fcba0
        
        sub_528b80(arg1 + 0x268, &arg_c, &arg_10, (zx.o(0)).d, (zx.o(0)).d, arg1 + 0x268, eax_38)
        float xmm0_43 = sub_63ce00(arg_10, eax_2)
        float xmm0_45 = sub_63ce00(arg_c)
        void* esi_6 = data_7fcbbc
        int32_t eax_40 = *(arg1 + 0xfc)
        float xmm0_46 = *(arg1 + 0xd4)
        float xmm0_47
        
        if (esi_6 != 0)
            if (sub_63c080(esi_6) != 0)
                (*(**(esi_6 + 0x2c) + 0x60))()
                arg_10 = fconvert.s(unimplemented  {fstp dword [ebp+0x78], st0})
                unimplemented  {fstp dword [ebp+0x78], st0}
                xmm0_47 = arg_10
            else
                xmm0_47 = 1f
            
            esi_6 = data_7fcbbc
        else
            xmm0_47 = 1f
        
        int32_t eax_44 = *(arg1 + 0x100)
        arg_c = xmm0_47
        float xmm0_48 = *(arg1 + 0xd8)
        float xmm0_49
        
        if (esi_6 != 0)
            if (sub_63c080(esi_6) != 0)
                (*(**(esi_6 + 0x2c) + 0x60))()
                arg_10 = fconvert.s(unimplemented  {fstp dword [ebp+0x78], st0})
                unimplemented  {fstp dword [ebp+0x78], st0}
                xmm0_49 = arg_10
            else
                xmm0_49 = 1f
            
            esi_6 = data_7fcbbc
        else
            xmm0_49 = 1f
        
        int32_t eax_48 = *(arg1 + 0x104)
        float xmm0_50 = *(arg1 + 0xd4)
        float xmm1_15
        
        if (esi_6 != 0)
            if (sub_63c080(esi_6) != 0)
                (*(**(esi_6 + 0x2c) + 0x60))()
                xmm1_15 = 1f
                arg_10 = fconvert.s(unimplemented  {fstp dword [ebp+0x78], st0})
                unimplemented  {fstp dword [ebp+0x78], st0}
                arg_10 = arg_10
            else
                xmm1_15 = 1f
                arg_10 = 1f
            
            esi_6 = data_7fcbbc
        else
            arg_10 = 1f
            xmm1_15 = 1f
        
        float xmm0_52 = *(arg1 + 0xd8)
        int32_t eax_52 = *(arg1 + 0x108)
        
        if (esi_6 != 0)
            if (sub_63c080(esi_6) != 0)
                (*(**(esi_6 + 0x2c) + 0x60))()
                float var_14_2 = fconvert.s(unimplemented  {fstp dword [ebp+0x54], st0})
                unimplemented  {fstp dword [ebp+0x54], st0}
                xmm1_15 = var_14_2
            else
                xmm1_15 = 1f
        
        float xmm0_54 = _mm_cvtepi32_ps(zx.o(eax_48))
        struct common::CPoint::VTable* const var_64_1 = &common::CPoint::`vftable'
        struct common::CSize::VTable* const var_58_1 = &common::CSize::`vftable'
        var_68 = &common::CRect::`vftable'
        int32_t var_54_1 = int.d(xmm0_54 * xmm0_50 * arg_10)
        int32_t var_50_1 = int.d(_mm_cvtepi32_ps(zx.o(eax_52)) * xmm0_52 * xmm1_15)
        int32_t ecx_39 = int.d((_mm_cvtepi32_ps(zx.o(eax_40)) * xmm0_46 + xmm0_43) * arg_c)
        float xmm0_67 = _mm_cvtepi32_ps(zx.o(eax_44))
        var_60 = ecx_39
        int32_t var_5c_1 = int.d((xmm0_67 * xmm0_48 + xmm0_45) * xmm0_49)
        sub_527530(arg1 + 0x260, &var_68)
    
    float edi_4 = var_18_1
    (*(**(arg1 + 0x74) + 0x14))(ecx, arg1 + 0x260, edi_4, arg4)
    
    if (var_6_1 == 0)
        int32_t* ecx_42 = *(arg1 + 0x74)
        edi_4 = 0f
        arg4 = 0
        
        if (ecx_42 != 0)
            int32_t eax_59 = (*(*ecx_42 + 8))(1)
            
            if (eax_59 == 0xc || eax_59 == 0xd)
                edi_4 = (*(**(arg1 + 0x74) + 0x24))(1) - *(arg1 + 0x320)
                arg4 = (*(**(arg1 + 0x74) + 0x28))(1) - *(arg1 + 0x324)
                sub_4ef0b0(arg1)
    
    int32_t* ecx_47 = *(arg1 + 0x70) + 0xc0
    int32_t* var_5c_2 = ecx_47
    var_60 = *(arg1 + 0x6c)
    int32_t i_1 = 0
    int32_t ebx_5 = (ecx_47[1] - *ecx_47) s>> 2
    int32_t var_58_2 = ebx_5
    int32_t var_50_2 = 0
    result = sub_4a9fd0(&var_60)
    
    for (int32_t i = i_1; i != ebx_5; i += 1)
        sub_4ee2b0(arg2, arg3, arg1 + 0x260, edi_4, arg4)
        result = sub_4a9fd0(&var_60)

fsbase->NtTib.ExceptionList = ExceptionList
return result
