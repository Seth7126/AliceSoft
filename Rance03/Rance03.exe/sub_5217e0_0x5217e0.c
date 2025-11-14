// 函数: sub_5217e0
// 地址: 0x5217e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1

if (arg3 != 0)
    int32_t* ecx = *(arg1 + 4)
    
    if (ecx != 0)
        ecx[1] -= 1
        
        if (ecx[1] s<= 0)
            int32_t var_20_1 = 1
            (**ecx)(1)
    
    int32_t var_20_2 = arg4
    *(arg1 + 4) = arg3
    *(arg3 + 4) += 1
    void* var_24_1 = arg3
    char eax
    int32_t edx_1
    eax, edx_1 = sub_521ad0(arg1)
    
    if (eax != 0)
        *(arg1 + 0xc) = *(arg3 + 0xc)
        *(arg1 + 0x10) = *(arg3 + 0x10)
        *(arg1 + 0x14) = *(arg3 + 0x14)
        int32_t eax_4
        eax_4.b = *(arg3 + 0x2c)
        *(arg1 + 0x5c) = eax_4.b
        *(arg1 + 0x18) = *(arg3 + 0x18)
        *(arg1 + 0x1c) = *(arg3 + 0x1c)
        *(arg1 + 0x20) = *(arg3 + 0x20)
        *(arg1 + 0x28) = *(arg3 + 0x9c)
        *(arg1 + 0x38) = *(arg3 + 0xac)
        *(arg1 + 0x24) = *(arg3 + 0x24)
        *(arg1 + 0x4c) = *(arg3 + 0xc8)
        *(arg1 + 0x50) = *(arg3 + 0xcc)
        *(arg1 + 0x54) = *(arg3 + 0xd0)
        *(arg1 + 0x58) = *(arg3 + 0xd4)
        int32_t ecx_2 = *(arg3 + 0x30)
        *(arg1 + 0x60) = ecx_2
        *(arg1 + 0xcc) = *(arg3 + 0xbc)
        *(arg1 + 0xd0) = *(arg3 + 0x28)
        int32_t eax_14
        eax_14.b = *(arg3 + 0xc0)
        *(arg1 + 0x5d) = eax_14.b
        
        if (ecx_2 == 1)
            *(arg1 + 0x64) = *(arg3 + 0x34)
            *(arg1 + 0x74) = *(arg3 + 0x44)
            *(arg1 + 0x84) = *(arg3 + 0x54)
            *(arg1 + 0x94) = *(arg3 + 0x64)
            *(arg1 + 0xa4) = *(arg3 + 0x7c)
            *(arg1 + 0xa8) = *(arg3 + 0x80)
            *(arg1 + 0xac) = *(arg3 + 0x84)
            *(arg1 + 0xb0) = *(arg3 + 0x88)
            *(arg1 + 0xb4) = *(arg3 + 0x8c)
            *(arg1 + 0xb8) = *(arg3 + 0x90)
            *(arg1 + 0xbc) = *(arg3 + 0x94)
            *(arg1 + 0xc0) = *(arg3 + 0x98)
            *(arg1 + 0xc4) = *(arg3 + 0x74)
            *(arg1 + 0xc8) = *(arg3 + 0x78)
        
        double var_c
        int32_t ecx_3
        int32_t edx_2
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_1
        long double st0
        st0, ecx_3, edx_2, x87control_1 = sub_69b580(&var_c, edx_1, ecx_2, mxcsr, x87control, 
            _mm_cvtps_pd(*(arg1 + 0xc)), &var_c, arg2)
        long double st0_1 = sub_69b580(&var_c, edx_2, ecx_3, mxcsr, x87control_1, 
            _mm_cvtps_pd(*(arg1 + 0x10)), &var_c)
        int32_t xmm0_11 = _mm_cvtpd_ps(zx.o(fconvert.d(st0)))
        var_c = fconvert.d(st0_1)
        int32_t xmm0_13
        
        if (not(1.1920929e-07f f<= xmm0_11))
            xmm0_13 = _mm_cvtpd_ps(zx.o(var_c))
        
        char eax_27
        
        if (1.1920929e-07f f<= xmm0_11 || 1.1920929e-07f f<= xmm0_13)
            eax_27 = 0
        else
            eax_27 = 1
        
        *(arg1 + 0xd4) = eax_27
        return sub_521c30(arg1, arg3) != 0

return 0
