// 函数: sub_5257b0
// 地址: 0x5257b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebp = arg1
int32_t eax_2 = *(*(*ebp + 0x50) + 0x1ac)

if (eax_2 == 0 || eax_2 == 4)
    eax_2.b = 0
    return eax_2

int32_t* eax_3

if (ebp[0x70].b == 0)
    eax_3 = sub_5259b0(arg1)

if (ebp[0x70].b != 0 || eax_3.b != 0)
    if (ebp[0x77] s>= 0)
        return sub_5259f0(ebp, arg2, arg3, arg4)
    
    struct partsengine::IEventArgs::partsengine::SSwipingEventArgs::VTable* const var_18
    
    if (arg8 != 0)
        long double x87_r0
        long double x87_r1
        float eax_5 = sub_63cd60(arg3, x87_r0, x87_r1)
        long double x87_r2
        float eax_6 = sub_63cd60(arg4, x87_r1, x87_r2)
        long double x87_r3
        float eax_7 = sub_63cd60(arg5, x87_r2, x87_r3)
        long double x87_r4
        float var_8_1 = sub_63cd60(arg6, x87_r3, x87_r4)
        var_18 = &partsengine::SSwipingEventArgs::`vftable'{for `partsengine::IEventArgs'}
        float var_14_1 = eax_5
        float var_10_1 = eax_6
        float var_c_1 = eax_7
        char var_4_1 = 0
        sub_4cbd50(&ebp[0x79], &var_18, 0)
    
    var_18 = arg2
    float var_14_2 = arg5
    float var_10_2 = arg6
    sub_5263c0(&ebp[0x73], &var_18)
    
    if (arg7 == 0)
        ebp[0x77] = 0
        int32_t xmm4_1 = (zx.o(0)).d
        ebp[0x71] = arg5
        ebp[0x72] = arg6
        ebp[0x75] = 0
        ebp[0x76] = 0
        eax_3 = ebp[0x73]
        int32_t* edx_1 = *eax_3
        void** i = *edx_1
        
        if (i != eax_3)
            do
                int32_t eax_11 = i[3] - edx_1[3]
                float xmm1_1 = 1f / _mm_cvtepi32_ps(zx.o(i[2]))
                uint128_t xmm3_1 = zx.o(i[4] - edx_1[4])
                float xmm2_3 = _mm_cvtepi32_ps(zx.o(eax_11)) * xmm1_1
                float xmm3_3 = _mm_cvtepi32_ps(xmm3_1) * xmm1_1
                int32_t xmm1_4 = xmm3_3 * xmm3_3 + xmm2_3 * xmm2_3
                
                if (not(xmm4_1 f> xmm1_4))
                    ebp[0x75] = xmm2_3
                    xmm4_1 = xmm1_4
                    ebp[0x76] = xmm3_3
                
                i = *i
                edx_1 = *edx_1
            while (i != ebp[0x73])
            
            int32_t eax_13
            eax_13.b = 1
            return eax_13
    else if (ebp[0x74] u> 5)
        int32_t* edx_2 = *ebp[0x73]
        *edx_2[1] = *edx_2
        *(*edx_2 + 4) = edx_2[1]
        ebp[0x74] -= 1
        sub_403160(edx_2, 1, 0x14)

eax_3.b = 1
return eax_3
