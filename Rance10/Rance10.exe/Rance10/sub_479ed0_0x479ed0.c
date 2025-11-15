// 函数: sub_479ed0
// 地址: 0x479ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = int.d(fconvert.t(arg7))
int32_t eax_1 = (*(*arg1 + 0x1c))()
int32_t* ebx = arg6
int32_t eax_3 = (*(*ebx + 0x1c))()
int32_t j_2 = int.d(fconvert.t(arg4))
arg6 = (*(*arg1 + 8))(int.d(fconvert.t(arg2)), int.d(fconvert.t(arg3)))
int32_t esi_1 = int.d(fconvert.t(arg8))
int32_t var_34_1 = eax_1 - (j_2 << 2)
int32_t eax_5 = (*(*ebx + 8))(ebp, esi_1)
int32_t i_2 = int.d(fconvert.t(arg5))
float xmm2_1 = arg7 - _mm_cvtepi32_ps(zx.o(ebp))
int32_t ecx_4 = int.d(xmm2_1)
arg7 = xmm2_1
float xmm2_2 = xmm2_1 - _mm_cvtepi32_ps(zx.o(ecx_4))
float xmm2_5 = arg8 - _mm_cvtepi32_ps(zx.o(esi_1))
int32_t ecx_6 = (ecx_4 << 8) - int.d(xmm2_2 * -256f)
int32_t var_8 = ecx_6
int32_t esi_2 = int.d(xmm2_5)
arg8 = xmm2_5
int32_t result = int.d((xmm2_5 - _mm_cvtepi32_ps(zx.o(esi_2))) * -256f)
int32_t esi_4 = (esi_2 << 8) - result
int32_t var_4 = esi_4

if (i_2 s> 0)
    result = 0
    int32_t i_1 = i_2
    int32_t result_1 = 0
    int32_t i
    
    do
        int32_t eax_10 = divs.dp.d(sx.q(result << 8), i_2) + esi_4
        int32_t ebx_2 = eax_10 s>> 8
        arg2 = zx.d(eax_10.b)
        int32_t ebp_1
        
        if (ebx_2 s< 0)
            ebx_2 = 0
            ebp_1 = 0
        else if (ebx_2 s< int.d(fconvert.t(arg10)) - 1)
            ebp_1 = 1
        else
            ebx_2 = int.d(fconvert.t(arg10)) - 1
            ebp_1 = 0
        
        int32_t ebx_4 = ebx_2 * eax_3 + eax_5
        int32_t* ebp_3 = ebp_1 * eax_3 + ebx_4
        int32_t var_28_1 = ebx_4
        arg1 = ebp_3
        
        if (j_2 s> 0)
            int32_t eax_14 = 0
            int32_t j_1 = j_2
            int32_t var_30_1 = 0
            int32_t j
            
            do
                int32_t eax_18 = divs.dp.d(sx.q(eax_14 << 8), j_2) + ecx_6
                int32_t esi_6 = eax_18 s>> 8
                arg3 = esi_6
                arg7 = zx.d(eax_18.b)
                int32_t eax_20
                
                if (esi_6 s< 0)
                    esi_6 = 0
                    eax_20 = 0
                    arg3 = 0f
                else if (esi_6 s< int.d(fconvert.t(arg9)) - 1)
                    eax_20 = 1
                else
                    esi_6 = int.d(fconvert.t(arg9)) - 1
                    eax_20 = 0
                    arg3 = esi_6
                
                uint32_t edx_8 = zx.d(*(ebx_4 + (esi_6 << 2) + 1))
                uint32_t edi_1 = zx.d(*(ebx_4 + (esi_6 << 2) + 2))
                uint32_t ecx_7 = zx.d(ebp_3[esi_6].b)
                uint32_t ebp_4 = zx.d(*(&ebp_3[esi_6] + 1))
                arg8 = (eax_20 + esi_6) << 2
                uint32_t eax_25 = zx.d(*(ebx_4 + (esi_6 << 2)))
                uint32_t ebx_5 = zx.d(*(ebx_4 + (esi_6 << 2) + 3))
                uint32_t esi_7 = zx.d(*(&arg1[esi_6] + 2))
                arg3 = zx.d(*(&arg1[arg3] + 3))
                int32_t ecx_15 = (((zx.d(*(arg8 i+ var_28_1)) - eax_25) i* arg7) s>> 8) + eax_25
                int32_t eax_31 = (((zx.d(*(arg8 i+ var_28_1 + 1)) - edx_8) i* arg7) s>> 8) + edx_8
                int32_t edx_14 = (((zx.d(*(arg8 i+ var_28_1 + 2)) - edi_1) i* arg7) s>> 8) + edi_1
                int32_t edi_7 = (((zx.d(*(arg8 i+ var_28_1 + 3)) - ebx_5) i* arg7) s>> 8) + ebx_5
                char ebx_15 = ((((((zx.d(*(arg8 i+ arg1 + 1)) - ebp_4) i* arg7) s>> 8) - eax_31
                    + ebp_4) i* arg2) s>> 8).b + eax_31.b
                char ebx_24 = ((((((zx.d(*(arg1 i+ arg8 + 2)) - esi_7) i* arg7) s>> 8) - edx_14
                    + esi_7) i* arg2) s>> 8).b + edx_14.b
                char edx_23 = ((((((zx.d(*(arg1 i+ arg8 + 3)) i- arg3) i* arg7) s>> 8)
                    - edi_7 i+ arg3) i* arg2) s>> 8).b + edi_7.b
                j_2 = int.d(fconvert.t(arg4))
                ebp_3 = arg1
                char* ecx_16 = arg6
                *ecx_16 = ((((((zx.d(*(arg1 i+ arg8)) - ecx_7) i* arg7) s>> 8) - ecx_15 + ecx_7)
                    i* arg2) s>> 8).b + ecx_15.b
                ecx_16[1] = ebx_15
                ecx_16[2] = ebx_24
                ebx_4 = var_28_1
                ecx_16[3] = edx_23
                arg6 = &ecx_16[4]
                eax_14 = var_30_1 + int.d(fconvert.t(arg9))
                j = j_1
                j_1 -= 1
                ecx_6 = var_8
                var_30_1 = eax_14
            while (j != 1)
            esi_4 = var_4
            j_2 = int.d(fconvert.t(arg4))
        
        arg6 += var_34_1
        i_2 = int.d(fconvert.t(arg5))
        result = result_1 + int.d(fconvert.t(arg10))
        i = i_1
        i_1 -= 1
        result_1 = result
    while (i != 1)

return result
